#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IProofOfPossessionCookieInfoManager IProofOfPossessionCookieInfoManager;
typedef interface IProofOfPossessionCookieInfoManager2 IProofOfPossessionCookieInfoManager2;
typedef class ProofOfPossessionCookieInfoManager ProofOfPossessionCookieInfoManager;
#include "oaidl.h"
#include "ocidl.h"
#include "Inspectable.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct ProofOfPossessionCookieInfo
    {
    LPWSTR name;
    LPWSTR data;
    DWORD flags;
    LPWSTR p3pHeader;
    } ProofOfPossessionCookieInfo;
__inline void FreeProofOfPossessionCookieInfoArray(_In_reads_(cookieInfoCount) ProofOfPossessionCookieInfo* cookieInfo, DWORD cookieInfoCount)
{
     DWORD i;
     for (i = 0; i < cookieInfoCount; i++)
     {
         CoTaskMemFree(cookieInfo[i].name);
         CoTaskMemFree(cookieInfo[i].data);
         CoTaskMemFree(cookieInfo[i].p3pHeader);
     }
     CoTaskMemFree(cookieInfo);
}
extern RPC_IF_HANDLE __MIDL_itf_proofofpossessioncookieinfo_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_proofofpossessioncookieinfo_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IProofOfPossessionCookieInfoManager;
    typedef struct IProofOfPossessionCookieInfoManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProofOfPossessionCookieInfoManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProofOfPossessionCookieInfoManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProofOfPossessionCookieInfoManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetCookieInfoForUri )(
            __RPC__in IProofOfPossessionCookieInfoManager * This,
                       __RPC__in LPCWSTR uri,
                        __RPC__out DWORD *cookieInfoCount,
                                          __RPC__deref_out_ecount_full_opt(*cookieInfoCount) ProofOfPossessionCookieInfo **cookieInfo);
        END_INTERFACE
    } IProofOfPossessionCookieInfoManagerVtbl;
    interface IProofOfPossessionCookieInfoManager
    {
        CONST_VTBL struct IProofOfPossessionCookieInfoManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCookieInfoForUri(This,uri,cookieInfoCount,cookieInfo) )
EXTERN_C const IID IID_IProofOfPossessionCookieInfoManager2;
    typedef struct IProofOfPossessionCookieInfoManager2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProofOfPossessionCookieInfoManager2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProofOfPossessionCookieInfoManager2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProofOfPossessionCookieInfoManager2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetCookieInfoWithUriForAccount )(
            __RPC__in IProofOfPossessionCookieInfoManager2 * This,
                       __RPC__in_opt IInspectable *webAccount,
                       __RPC__in LPCWSTR uri,
                        __RPC__out DWORD *cookieInfoCount,
                                          __RPC__deref_out_ecount_full_opt(*cookieInfoCount) ProofOfPossessionCookieInfo **cookieInfo);
        END_INTERFACE
    } IProofOfPossessionCookieInfoManager2Vtbl;
    interface IProofOfPossessionCookieInfoManager2
    {
        CONST_VTBL struct IProofOfPossessionCookieInfoManager2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCookieInfoWithUriForAccount(This,webAccount,uri,cookieInfoCount,cookieInfo) )
EXTERN_C const IID LIBID_ProofOfPossessionCookieInfoManagerLib;
EXTERN_C const CLSID CLSID_ProofOfPossessionCookieInfoManager;
class DECLSPEC_UUID("A9927F85-A304-4390-8B23-A75F1C668600")
ProofOfPossessionCookieInfoManager;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_proofofpossessioncookieinfo_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_proofofpossessioncookieinfo_0000_0003_v0_0_s_ifspec;
}
