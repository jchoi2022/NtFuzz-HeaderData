#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
template <class Base, const IID* piid, class T, class Copy,
          class ThreadModel = CComObjectThreadModel>
class ATL_NO_VTABLE CSafeComEnum :
        public CComEnumImpl<Base, piid, T, Copy>,
        public CComObjectRootEx< ThreadModel >
{
    typedef CSafeComEnum<Base, piid, T, Copy, ThreadModel> ThisClass;
    typedef CComEnumImpl<Base, piid, T, Copy> BaseClass;
    STDMETHOD(Next)(ULONG celt, T* rgelt, ULONG* pceltFetched)
    {
        if ( !rgelt )
        {
            return E_POINTER;
        }
        return BaseClass::Next(celt, rgelt, pceltFetched);
    }
    STDMETHOD(Clone)(Base** ppEnum)
    {
        if (!ppEnum)
        {
            return E_POINTER;
        }
        return BaseClass::Clone(ppEnum);
    }
    BEGIN_COM_MAP( ThisClass )
  COM_INTERFACE_ENTRY_IID( *piid, BaseClass )
        COM_INTERFACE_ENTRY_AGGREGATE( IID_IMarshal, m_pFTM )
    END_COM_MAP()
    DECLARE_GET_CONTROLLING_UNKNOWN()
    HRESULT Init(T* begin, T* end, IUnknown* pUnk,
            CComEnumFlags flags = AtlFlagNoCopy)
    {
        HRESULT hr;
        IUnknown * pIU = GetControllingUnknown();
        hr = CoCreateFreeThreadedMarshaler( pIU,
                                            & m_pFTM );
        if ( FAILED(hr) )
        {
            return hr;
        }
        return BaseClass::Init(begin, end, pUnk, flags);
    }
    CSafeComEnum()
    {
        m_pFTM = NULL;
    }
    void FinalRelease(void)
    {
        if ( m_pFTM )
        {
            m_pFTM->Release();
        }
        CComObjectRootEx< ThreadModel >::FinalRelease();
    }
protected:
    IUnknown * m_pFTM;
};
#endif
#pragma endregion
