#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IObjectArray IObjectArray;
typedef interface IObjectCollection IObjectCollection;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_objectarray_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objectarray_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IObjectArray;
    typedef struct IObjectArrayVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IObjectArray * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IObjectArray * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IObjectArray * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IObjectArray * This,
                        __RPC__out UINT *pcObjects);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IObjectArray * This,
                       UINT uiIndex,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        END_INTERFACE
    } IObjectArrayVtbl;
    interface IObjectArray
    {
        CONST_VTBL struct IObjectArrayVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pcObjects) )
    ( (This)->lpVtbl -> GetAt(This,uiIndex,riid,ppv) )
EXTERN_C const IID IID_IObjectCollection;
    typedef struct IObjectCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IObjectCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IObjectCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IObjectCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IObjectCollection * This,
                        __RPC__out UINT *pcObjects);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IObjectCollection * This,
                       UINT uiIndex,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *AddObject )(
            __RPC__in IObjectCollection * This,
                       __RPC__in_opt IUnknown *punk);
        HRESULT ( STDMETHODCALLTYPE *AddFromArray )(
            __RPC__in IObjectCollection * This,
                       __RPC__in_opt IObjectArray *poaSource);
        HRESULT ( STDMETHODCALLTYPE *RemoveObjectAt )(
            __RPC__in IObjectCollection * This,
                       UINT uiIndex);
        HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IObjectCollection * This);
        END_INTERFACE
    } IObjectCollectionVtbl;
    interface IObjectCollection
    {
        CONST_VTBL struct IObjectCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pcObjects) )
    ( (This)->lpVtbl -> GetAt(This,uiIndex,riid,ppv) )
    ( (This)->lpVtbl -> AddObject(This,punk) )
    ( (This)->lpVtbl -> AddFromArray(This,poaSource) )
    ( (This)->lpVtbl -> RemoveObjectAt(This,uiIndex) )
    ( (This)->lpVtbl -> Clear(This) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_objectarray_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_objectarray_0000_0002_v0_0_s_ifspec;
}
