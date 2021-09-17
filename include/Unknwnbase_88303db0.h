#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IUnknown IUnknown;
typedef interface AsyncIUnknown AsyncIUnknown;
typedef interface IClassFactory IClassFactory;
#include "wtypesbase.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_unknwnbase_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_unknwnbase_0000_0000_v0_0_s_ifspec;
typedef IUnknown *LPUNKNOWN;
EXTERN_C const IID IID_IUnknown;
    typedef struct IUnknownVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IUnknown * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IUnknown * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IUnknown * This);
        END_INTERFACE
    } IUnknownVtbl;
    interface IUnknown
    {
        CONST_VTBL struct IUnknownVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
HRESULT STDMETHODCALLTYPE IUnknown_QueryInterface_Proxy(
    IUnknown * This,
               REFIID riid,
    _COM_Outptr_ void **ppvObject);
void __RPC_STUB IUnknown_QueryInterface_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
ULONG STDMETHODCALLTYPE IUnknown_AddRef_Proxy(
    IUnknown * This);
void __RPC_STUB IUnknown_AddRef_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
ULONG STDMETHODCALLTYPE IUnknown_Release_Proxy(
    IUnknown * This);
void __RPC_STUB IUnknown_Release_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_unknwnbase_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_unknwnbase_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_AsyncIUnknown;
    typedef struct AsyncIUnknownVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            AsyncIUnknown * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            AsyncIUnknown * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            AsyncIUnknown * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_QueryInterface )(
            AsyncIUnknown * This,
                       REFIID riid);
        HRESULT ( STDMETHODCALLTYPE *Finish_QueryInterface )(
            AsyncIUnknown * This,
            __RPC__deref_out void **ppvObject);
        HRESULT ( STDMETHODCALLTYPE *Begin_AddRef )(
            AsyncIUnknown * This);
        ULONG ( STDMETHODCALLTYPE *Finish_AddRef )(
            AsyncIUnknown * This);
        HRESULT ( STDMETHODCALLTYPE *Begin_Release )(
            AsyncIUnknown * This);
        ULONG ( STDMETHODCALLTYPE *Finish_Release )(
            AsyncIUnknown * This);
        END_INTERFACE
    } AsyncIUnknownVtbl;
    interface AsyncIUnknown
    {
        CONST_VTBL struct AsyncIUnknownVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Begin_QueryInterface(This,riid) )
    ( (This)->lpVtbl -> Finish_QueryInterface(This,ppvObject) )
    ( (This)->lpVtbl -> Begin_AddRef(This) )
    ( (This)->lpVtbl -> Finish_AddRef(This) )
    ( (This)->lpVtbl -> Begin_Release(This) )
    ( (This)->lpVtbl -> Finish_Release(This) )
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_unknwnbase_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_unknwnbase_0000_0002_v0_0_s_ifspec;
typedef __RPC_unique_pointer IClassFactory *LPCLASSFACTORY;
EXTERN_C const IID IID_IClassFactory;
    typedef struct IClassFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IClassFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IClassFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IClassFactory * This);
                      HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            IClassFactory * This,
            _In_opt_ IUnknown *pUnkOuter,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppvObject);
                      HRESULT ( STDMETHODCALLTYPE *LockServer )(
            IClassFactory * This,
                       BOOL fLock);
        END_INTERFACE
    } IClassFactoryVtbl;
    interface IClassFactory
    {
        CONST_VTBL struct IClassFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstance(This,pUnkOuter,riid,ppvObject) )
    ( (This)->lpVtbl -> LockServer(This,fLock) )
                HRESULT STDMETHODCALLTYPE IClassFactory_RemoteCreateInstance_Proxy(
    __RPC__in IClassFactory * This,
               __RPC__in REFIID riid,
                        __RPC__deref_out_opt IUnknown **ppvObject);
void __RPC_STUB IClassFactory_RemoteCreateInstance_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT __stdcall IClassFactory_RemoteLockServer_Proxy(
    __RPC__in IClassFactory * This,
               BOOL fLock);
void __RPC_STUB IClassFactory_RemoteLockServer_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_unknwnbase_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_unknwnbase_0000_0003_v0_0_s_ifspec;
              HRESULT STDMETHODCALLTYPE IClassFactory_CreateInstance_Proxy(
    IClassFactory * This,
    _In_opt_ IUnknown *pUnkOuter,
    _In_ REFIID riid,
    _COM_Outptr_ void **ppvObject);
                HRESULT STDMETHODCALLTYPE IClassFactory_CreateInstance_Stub(
    __RPC__in IClassFactory * This,
               __RPC__in REFIID riid,
                        __RPC__deref_out_opt IUnknown **ppvObject);
              HRESULT STDMETHODCALLTYPE IClassFactory_LockServer_Proxy(
    IClassFactory * This,
               BOOL fLock);
                HRESULT __stdcall IClassFactory_LockServer_Stub(
    __RPC__in IClassFactory * This,
               BOOL fLock);
}
