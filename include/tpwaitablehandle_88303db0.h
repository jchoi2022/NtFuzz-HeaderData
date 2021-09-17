#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ISignalableNotifier ISignalableNotifier;
typedef class SignalableNotifier SignalableNotifier;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
extern RPC_IF_HANDLE __MIDL_itf_tpwaitablehandle_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tpwaitablehandle_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ISignalableNotifier;
    typedef struct ISignalableNotifierVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISignalableNotifier * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISignalableNotifier * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISignalableNotifier * This);
        HRESULT ( STDMETHODCALLTYPE *AttachToWaitHandle )(
            __RPC__in ISignalableNotifier * This,
                       HANDLE_PTR waitableHandle,
                       __RPC__in_opt IUnknown *handler,
                       __RPC__in_opt IUnknown *pUnkOuter,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **SignalNotifier);
        HRESULT ( STDMETHODCALLTYPE *AttachToWaitHandleWithTimeout )(
            __RPC__in ISignalableNotifier * This,
                       HANDLE_PTR waitableHandle,
                       __RPC__in_opt IUnknown *handler,
                       LARGE_INTEGER timeout,
                       __RPC__in_opt IUnknown *pUnkOuter,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **SignalNotifier);
        END_INTERFACE
    } ISignalableNotifierVtbl;
    interface ISignalableNotifier
    {
        CONST_VTBL struct ISignalableNotifierVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AttachToWaitHandle(This,waitableHandle,handler,pUnkOuter,riid,SignalNotifier) )
    ( (This)->lpVtbl -> AttachToWaitHandleWithTimeout(This,waitableHandle,handler,timeout,pUnkOuter,riid,SignalNotifier) )
EXTERN_C const IID LIBID_SignalableNotifierProviders;
EXTERN_C const CLSID CLSID_SignalableNotifier;
class DECLSPEC_UUID("96c7a5ef-0e2c-46d7-9bc1-6445c2444d7a")
SignalableNotifier;
extern RPC_IF_HANDLE __MIDL_itf_tpwaitablehandle_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tpwaitablehandle_0000_0002_v0_0_s_ifspec;
}
