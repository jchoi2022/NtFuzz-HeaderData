#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IUserConsentVerifierInterop IUserConsentVerifierInterop;
#include "inspectable.h"
#include "asyncinfo.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_userconsentverifierinterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_userconsentverifierinterop_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IUserConsentVerifierInterop;
    typedef struct IUserConsentVerifierInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUserConsentVerifierInterop * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUserConsentVerifierInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUserConsentVerifierInterop * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            IUserConsentVerifierInterop * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            IUserConsentVerifierInterop * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            IUserConsentVerifierInterop * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *RequestVerificationForWindowAsync )(
            IUserConsentVerifierInterop * This,
                       HWND appWindow,
                       HSTRING message,
                       REFIID riid,
                                        void **asyncOperation);
        END_INTERFACE
    } IUserConsentVerifierInteropVtbl;
    interface IUserConsentVerifierInterop
    {
        CONST_VTBL struct IUserConsentVerifierInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> RequestVerificationForWindowAsync(This,appWindow,message,riid,asyncOperation) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_userconsentverifierinterop_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_userconsentverifierinterop_0000_0001_v0_0_s_ifspec;
}
