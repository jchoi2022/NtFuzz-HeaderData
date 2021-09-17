#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWebAuthenticationCoreManagerInterop IWebAuthenticationCoreManagerInterop;
#include "oaidl.h"
#include "Inspectable.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_webauthenticationcoremanagerinterop_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_webauthenticationcoremanagerinterop_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWebAuthenticationCoreManagerInterop;
    typedef struct IWebAuthenticationCoreManagerInteropVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWebAuthenticationCoreManagerInterop * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWebAuthenticationCoreManagerInterop * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWebAuthenticationCoreManagerInterop * This);
        HRESULT ( STDMETHODCALLTYPE *GetIids )(
            IWebAuthenticationCoreManagerInterop * This,
                        ULONG *iidCount,
                                          IID **iids);
        HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
            IWebAuthenticationCoreManagerInterop * This,
                        HSTRING *className);
        HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
            IWebAuthenticationCoreManagerInterop * This,
                        TrustLevel *trustLevel);
        HRESULT ( STDMETHODCALLTYPE *RequestTokenForWindowAsync )(
            IWebAuthenticationCoreManagerInterop * This,
                       HWND appWindow,
                       IInspectable *request,
                       REFIID riid,
                                        void **asyncInfo);
        HRESULT ( STDMETHODCALLTYPE *RequestTokenWithWebAccountForWindowAsync )(
            IWebAuthenticationCoreManagerInterop * This,
                       HWND appWindow,
                       IInspectable *request,
                       IInspectable *webAccount,
                       REFIID riid,
                                        void **asyncInfo);
        END_INTERFACE
    } IWebAuthenticationCoreManagerInteropVtbl;
    interface IWebAuthenticationCoreManagerInterop
    {
        CONST_VTBL struct IWebAuthenticationCoreManagerInteropVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> RequestTokenForWindowAsync(This,appWindow,request,riid,asyncInfo) )
    ( (This)->lpVtbl -> RequestTokenWithWebAccountForWindowAsync(This,appWindow,request,webAccount,riid,asyncInfo) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_webauthenticationcoremanagerinterop_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_webauthenticationcoremanagerinterop_0000_0001_v0_0_s_ifspec;
}
