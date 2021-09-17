#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWeakReference IWeakReference;
typedef interface IWeakReferenceSource IWeakReferenceSource;
#include "inspectable.h"
extern "C"{
       
extern RPC_IF_HANDLE __MIDL_itf_weakreference_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_weakreference_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWeakReference;
    typedef struct IWeakReferenceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWeakReference * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWeakReference * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWeakReference * This);
        HRESULT ( STDMETHODCALLTYPE *Resolve )(
            __RPC__in IWeakReference * This,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt IInspectable **objectReference);
        END_INTERFACE
    } IWeakReferenceVtbl;
    interface IWeakReference
    {
        CONST_VTBL struct IWeakReferenceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Resolve(This,riid,objectReference) )
extern RPC_IF_HANDLE __MIDL_itf_weakreference_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_weakreference_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_IWeakReferenceSource;
    typedef struct IWeakReferenceSourceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWeakReferenceSource * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWeakReferenceSource * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWeakReferenceSource * This);
        HRESULT ( STDMETHODCALLTYPE *GetWeakReference )(
            __RPC__in IWeakReferenceSource * This,
                                __RPC__deref_out_opt IWeakReference **weakReference);
        END_INTERFACE
    } IWeakReferenceSourceVtbl;
    interface IWeakReferenceSource
    {
        CONST_VTBL struct IWeakReferenceSourceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWeakReference(This,weakReference) )
}
