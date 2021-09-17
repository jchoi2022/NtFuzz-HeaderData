#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <shobjidl_core.h>
#include <propvarutil.h>
template <class T, DWORD dwMagic>
class CItemIDFactory : public IDelegateFolder
{
protected:
    CItemIDFactory() : _pmalloc(NULL) {}
    virtual ~CItemIDFactory()
    {
        if (_pmalloc)
        {
            _pmalloc->Release();
        }
    }
public:
    IFACEMETHODIMP SetItemAlloc(_In_opt_ IMalloc *pmalloc)
    {
        IUnknown_Set((IUnknown**)&_pmalloc, pmalloc);
        return S_OK;
    }
    BOOL IsDelegateFolder()
    {
        return (_pmalloc != NULL);
    }
    static const UNALIGNED T* GetDataFromIDList(_In_opt_ PCUIDLIST_RELATIVE pidl)
    {
        PCITEM pitem = _IsValid(pidl);
        return pitem ? &pitem->innerData : NULL;
    }
    static HRESULT GetDataFromIDList(_In_ PCUIDLIST_RELATIVE pidl, _Outptr_ const UNALIGNED T** ppData)
    {
        *ppData = GetDataFromIDList(pidl);
        return (*ppData) ? S_OK : E_INVALIDARG;
    }
    static PCUSERIALIZEDPROPSTORAGE GetPropertyStorage(_In_opt_ PCUIDLIST_RELATIVE pidl, _Out_ DWORD* pcb)
    {
        PCITEM pitem = _IsValid(pidl);
        if (pitem && pitem->cbPropStore)
        {
            *pcb = pitem->cbPropStore;
            return (PCUSERIALIZEDPROPSTORAGE)(pitem + 1);
        }
        return NULL;
    }
    static HRESULT GetPropertyFromIDList(_In_ PCUIDLIST_RELATIVE pidl, _In_ REFPROPERTYKEY rkey, _Out_ VARIANT *pvar)
    {
        PROPVARIANT pv = {pvar->vt};
        HRESULT hr = GetPropertyFromIDList(pidl, rkey, &pv);
        if (SUCCEEDED(hr))
        {
            hr = PropVariantToVariant(&pv, pvar);
            PropVariantClear(&pv);
        }
        return hr;
    }
    static HRESULT GetPropertyFromIDList(_In_ PCUIDLIST_RELATIVE pidl, _In_ PCWSTR pszName, _Out_ VARIANT *pvar)
    {
        PROPVARIANT pv = {pvar->vt};
        HRESULT hr = GetPropertyFromIDList(pidl, pszName, &pv);
        if (SUCCEEDED(hr))
        {
            hr = PropVariantToVariant(&pv, pvar);
            PropVariantClear(&pv);
        }
        return hr;
    }
    static HRESULT GetPropertyFromIDList(_In_ PCUIDLIST_RELATIVE pidl, _In_ REFPROPERTYKEY rkey, _Out_ PROPVARIANT *pv)
    {
        PropVariantInit(pv);
        HRESULT hr = E_INVALIDARG;
        DWORD cb;
        PCUSERIALIZEDPROPSTORAGE psps = GetPropertyStorage(pidl, &cb);
        if (psps)
        {
            hr = PSGetPropertyFromPropertyStorage(psps, cb, rkey, pv);
            if (SUCCEEDED(hr) && (pv->vt == VT_EMPTY))
            {
                hr = HRESULT_FROM_WIN32(ERROR_UNKNOWN_PROPERTY);
            }
        }
        return hr;
    }
    static HRESULT GetPropertyFromIDList(_In_ PCUIDLIST_RELATIVE pidl, _In_ PCWSTR pszName, _Out_ PROPVARIANT *pv)
    {
        PropVariantInit(pv);
        HRESULT hr = E_INVALIDARG;
        DWORD cb;
        PCUSERIALIZEDPROPSTORAGE psps = GetPropertyStorage(pidl, &cb);
        if (psps)
        {
            hr = PSGetNamedPropertyFromPropertyStorage(psps, cb, pszName, pv);
            if (SUCCEEDED(hr) && (pv->vt == VT_EMPTY))
            {
                hr = HRESULT_FROM_WIN32(ERROR_UNKNOWN_PROPERTY);
            }
        }
        return hr;
    }
    static HRESULT GetPropertyStorageFromIDList(_In_ PCUIDLIST_RELATIVE pidl, _In_ REFIID riid, _Outptr_ void **ppv)
    {
        HRESULT hr = E_INVALIDARG;
        if (pidl && ppv)
        {
            *ppv = NULL;
            DWORD cb;
            PCUSERIALIZEDPROPSTORAGE psps = GetPropertyStorage(pidl, &cb);
            if (psps)
            {
                IPersistSerializedPropStorage* ppsps;
                hr = PSCreateMemoryPropertyStore(IID_PPV_ARGS(&ppsps));
                if (SUCCEEDED(hr))
                {
                    hr = ppsps->SetPropertyStorage(psps, cb);
                    if (SUCCEEDED(hr))
                    {
                        hr = ppsps->SetFlags(FPSPS_READONLY);
                        if (SUCCEEDED(hr))
                        {
                            hr = ppsps->QueryInterface(riid, ppv);
                        }
                    }
                    ppsps->Release();
                }
            }
        }
        return hr;
    }
    HRESULT CreateItemID(_In_opt_ const UNALIGNED T *pinner, _Inout_opt_ IPropertyStore *pps, _Outptr_ PITEMID_CHILD *ppidl)
    {
        return s_CreateItemID(pinner, pps, ppidl, _pmalloc);
    }
    static HRESULT s_CreateItemID(_In_opt_ const UNALIGNED T *pinner, _Inout_opt_ IPropertyStore *pps, _Outptr_ PITEMID_CHILD *ppidl, _In_opt_ IMalloc *pMalloc=NULL)
    {
        *ppidl = NULL;
        SERIALIZEDPROPSTORAGE *pspstg = NULL;
        DWORD cbPropStore = 0;
        HRESULT hr = S_OK;
        if (pps)
        {
            IPersistSerializedPropStorage *ppsps;
            hr = pps->QueryInterface(IID_PPV_ARGS(&ppsps));
            if (SUCCEEDED(hr))
            {
                hr = ppsps->GetPropertyStorage(&pspstg, &cbPropStore);
                ppsps->Release();
            }
        }
        if (SUCCEEDED(hr))
        {
            UINT cbInner = sizeof(CHILDITEMID) - (sizeof(DELEGATEITEMID) - 1) + cbPropStore;
            CHILDITEMID *pitem = s_Alloc(cbInner + sizeof(USHORT), pMalloc);
            if (pitem)
            {
                pitem->dwMagic = dwMagic;
                pitem->cbPropStore = (WORD)cbPropStore;
                pitem->cbInnerData = sizeof(pitem->innerData);
                if (pinner)
                    pitem->innerData = *pinner;
                if (pspstg)
                {
                    BYTE *pbData = (BYTE*)(pitem+1);
                    memcpy(pbData, pspstg, cbPropStore);
                }
                *ppidl = (PITEMID_CHILD)pitem;
                hr = S_OK;
            }
            else
            {
                hr = E_OUTOFMEMORY;
            }
            CoTaskMemFree(pspstg);
        }
        return hr;
    }
private:
    #include <pshpack1.h>
    typedef struct
    {
        WORD cbSize;
        WORD wOuter;
        WORD cbInner;
        DWORD dwMagic;
        WORD cbPropStore;
        WORD cbInnerData;
        T innerData;
    } CHILDITEMID;
    #include <poppack.h>
    typedef UNALIGNED CHILDITEMID * PITEM;
    typedef const UNALIGNED CHILDITEMID * PCITEM;
    IMalloc *_pmalloc;
    static CHILDITEMID* s_Alloc(SIZE_T cbInner, _In_opt_ IMalloc *pMalloc)
    {
        DELEGATEITEMID *pidl;
        if (pMalloc)
        {
            pidl = (DELEGATEITEMID *)pMalloc->Alloc(cbInner);
        }
        else
        {
            SIZE_T cbAlloc =
                sizeof(DELEGATEITEMID) - sizeof(pidl->rgb[0]) +
                cbInner +
                sizeof(WORD);
            const SIZE_T cbSizeMax = (1 << (sizeof(pidl->cbSize)*8)) - 1;
            if (cbAlloc > cbSizeMax + sizeof(WORD))
            {
                pidl = NULL;
            }
            else
            {
                pidl = (DELEGATEITEMID *)CoTaskMemAlloc(cbAlloc);
                if (pidl)
                {
                    ZeroMemory(pidl, cbAlloc);
                    pidl->cbSize = (WORD)(cbAlloc - sizeof(WORD));
                    pidl->cbInner = (WORD)cbInner;
                }
            }
        }
        return (CHILDITEMID*)pidl;
    }
    static PCITEM _IsValid(_In_opt_ PCUIDLIST_RELATIVE pidl)
    {
        PCITEM pitem = (PCITEM)pidl;
        if (!pitem || pitem->cbSize < sizeof(CHILDITEMID))
            return NULL;
        if ((pitem->dwMagic != dwMagic) || (pitem->cbSize < (sizeof(CHILDITEMID) + pitem->cbPropStore)))
            return NULL;
        return pitem;
    }
};
#endif
#pragma endregion
