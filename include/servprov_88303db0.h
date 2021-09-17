#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IServiceProvider IServiceProvider;
#include "objidl.h"
extern "C"{
#pragma comment(lib,"uuid.lib")
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_servprov_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_servprov_0000_0000_v0_0_s_ifspec;
typedef __RPC_unique_pointer IServiceProvider *LPSERVICEPROVIDER;
EXTERN_C const IID IID_IServiceProvider;
    typedef struct IServiceProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IServiceProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IServiceProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IServiceProvider * This);
                      HRESULT ( STDMETHODCALLTYPE *QueryService )(
            IServiceProvider * This,
            _In_ REFGUID guidService,
            _In_ REFIID riid,
            _Outptr_ void **ppvObject);
        END_INTERFACE
    } IServiceProviderVtbl;
    interface IServiceProvider
    {
        CONST_VTBL struct IServiceProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryService(This,guidService,riid,ppvObject) )
                HRESULT STDMETHODCALLTYPE IServiceProvider_RemoteQueryService_Proxy(
    __RPC__in IServiceProvider * This,
               __RPC__in REFGUID guidService,
               __RPC__in REFIID riid,
                        __RPC__deref_out_opt IUnknown **ppvObject);
void __RPC_STUB IServiceProvider_RemoteQueryService_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_servprov_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_servprov_0000_0001_v0_0_s_ifspec;
              HRESULT STDMETHODCALLTYPE IServiceProvider_QueryService_Proxy(
    IServiceProvider * This,
    _In_ REFGUID guidService,
    _In_ REFIID riid,
    _Outptr_ void **ppvObject);
                HRESULT STDMETHODCALLTYPE IServiceProvider_QueryService_Stub(
    __RPC__in IServiceProvider * This,
               __RPC__in REFGUID guidService,
               __RPC__in REFIID riid,
                        __RPC__deref_out_opt IUnknown **ppvObject);
}
