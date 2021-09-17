#pragma warning( disable: 4049 )
#include <rpc.h>
#include <rpcndr.h>
#error this stub requires an updated version of <rpcndr.h>
#include <windows.h>
#include <ole2.h>
       
       
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"
       
#include "inspectable.h"
#include "AsyncInfo.h"
#include "EventToken.h"
#include "windowscontracts.h"
#include "Windows.Foundation.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Graphics.DirectX.h"
#include "Windows.Perception.Spatial.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2 __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2;
typedef interface __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo;
EXTERN_C const IID IID___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo;
typedef struct __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, __RPC__out GUID *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * *value);
    END_INTERFACE
} __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl;
interface __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo
{
    CONST_VTBL struct __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo;
typedef struct __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, __RPC__out __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl;
interface __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo;
typedef struct __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl;
interface __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo;
EXTERN_C const IID IID___FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo;
typedef struct __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This,
                   __RPC__in GUID key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, __RPC__in GUID key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * This, __RPC__deref_out_opt __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo **secondPartition);
    END_INTERFACE
} __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl;
interface __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo
{
    CONST_VTBL struct __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfoVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> Lookup(This,key,value) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> HasKey(This,key,found) )
    ( (This)->lpVtbl -> Split(This,firstPartition,secondPartition) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh;
typedef interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMeshVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMeshVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMeshVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh;
typedef struct __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMeshVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * This, __RPC__out __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMeshVtbl;
interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMeshVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingOrientedBox;
typedef interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox;
EXTERN_C const IID IID___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox;
typedef struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox * This, __RPC__out struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingOrientedBox *value);
    END_INTERFACE
} __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBoxVtbl;
interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox
{
    CONST_VTBL struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBoxVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat;
typedef interface __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;
typedef struct __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, __RPC__out enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl;
interface __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;
typedef struct __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl;
interface __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat;
typedef struct __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                                                    unsigned int index,
                                                             __RPC__out enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                       enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl;
interface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume;
typedef interface __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume;
EXTERN_C const IID IID___FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume;
typedef struct __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolumeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This, __RPC__out __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolumeVtbl;
interface __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume
{
    CONST_VTBL struct __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolumeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Current(This,current) )
    ( (This)->lpVtbl -> get_HasCurrent(This,hasCurrent) )
    ( (This)->lpVtbl -> MoveNext(This,hasCurrent) )
    ( (This)->lpVtbl -> GetMany(This,capacity,items,actual) )
typedef interface __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume;
EXTERN_C const IID IID___FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume;
typedef struct __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolumeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * This, __RPC__deref_out_opt __FIIterator_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume **first);
    END_INTERFACE
} __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolumeVtbl;
interface __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume
{
    CONST_VTBL struct __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolumeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialPerceptionAccessStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus;
typedef interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus;
typedef struct __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * This, __RPC__out enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialPerceptionAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatusVtbl;
interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef struct __x_ABI_CWindows_CFoundation_CDateTime __x_ABI_CWindows_CFoundation_CDateTime;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat;
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingOrientedBox __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingOrientedBox;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;
typedef enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialPerceptionAccessStatus __x_ABI_CWindows_CPerception_CSpatial_CSpatialPerceptionAccessStatus;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIBuffer __x_ABI_CWindows_CStorage_CStreams_CIBuffer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceInfo[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceInfo";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This,
                           __RPC__out GUID * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpdateTime )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CDateTime * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetBounds )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingOrientedBox * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *TryComputeLatestMeshAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This,
                  DOUBLE maxTrianglesPerCubicMeter,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *TryComputeLatestMeshWithOptionsAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * This,
                  DOUBLE maxTrianglesPerCubicMeter,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceMesh * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfoVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_UpdateTime(This,value) )
    ( (This)->lpVtbl->TryGetBounds(This,coordinateSystem,value) )
    ( (This)->lpVtbl->TryComputeLatestMeshAsync(This,maxTrianglesPerCubicMeter,value) )
    ( (This)->lpVtbl->TryComputeLatestMeshWithOptionsAsync(This,maxTrianglesPerCubicMeter,options,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMesh[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMesh";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SurfaceInfo )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceInfo * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CoordinateSystem )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TriangleIndices )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VertexPositions )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VertexPositionScale )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VertexNormals )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SurfaceInfo(This,value) )
    ( (This)->lpVtbl->get_CoordinateSystem(This,value) )
    ( (This)->lpVtbl->get_TriangleIndices(This,value) )
    ( (This)->lpVtbl->get_VertexPositions(This,value) )
    ( (This)->lpVtbl->get_VertexPositionScale(This,value) )
    ( (This)->lpVtbl->get_VertexNormals(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMesh;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshBuffer[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshBuffer";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Format )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Stride )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ElementCount )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBufferVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBufferVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Format(This,value) )
    ( (This)->lpVtbl->get_Stride(This,value) )
    ( (This)->lpVtbl->get_ElementCount(This,value) )
    ( (This)->lpVtbl->get_Data(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshBuffer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptions[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshOptions";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VertexPositionFormat )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VertexPositionFormat )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TriangleIndexFormat )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TriangleIndexFormat )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VertexNormalFormat )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
                           __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_VertexNormalFormat )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IncludeVertexNormals )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IncludeVertexNormals )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VertexPositionFormat(This,value) )
    ( (This)->lpVtbl->put_VertexPositionFormat(This,value) )
    ( (This)->lpVtbl->get_TriangleIndexFormat(This,value) )
    ( (This)->lpVtbl->put_TriangleIndexFormat(This,value) )
    ( (This)->lpVtbl->get_VertexNormalFormat(This,value) )
    ( (This)->lpVtbl->put_VertexNormalFormat(This,value) )
    ( (This)->lpVtbl->get_IncludeVertexNormals(This,value) )
    ( (This)->lpVtbl->put_IncludeVertexNormals(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceMeshOptionsStatics[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceMeshOptionsStatics";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SupportedVertexPositionFormats )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedTriangleIndexFormats )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedVertexNormalFormats )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CDirectX__CDirectXPixelFormat * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStaticsVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SupportedVertexPositionFormats(This,value) )
    ( (This)->lpVtbl->get_SupportedTriangleIndexFormats(This,value) )
    ( (This)->lpVtbl->get_SupportedVertexNormalFormats(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceMeshOptionsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserver[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserver";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetObservedSurfaces )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This,
                           __RPC__deref_out_opt __FIMapView_2_GUID_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceInfo * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetBoundingVolume )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * bounds
        );
    HRESULT ( STDMETHODCALLTYPE *SetBoundingVolumes )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This,
                  __RPC__in_opt __FIIterable_1_Windows__CPerception__CSpatial__CSpatialBoundingVolume * bounds
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ObservedSurfacesChanged )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSurfaces__CSpatialSurfaceObserver_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ObservedSurfacesChanged )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetObservedSurfaces(This,value) )
    ( (This)->lpVtbl->SetBoundingVolume(This,bounds) )
    ( (This)->lpVtbl->SetBoundingVolumes(This,bounds) )
    ( (This)->lpVtbl->add_ObservedSurfacesChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ObservedSurfacesChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserver;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserverStatics[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserverStatics";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStaticsVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestAccessAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_Surfaces_ISpatialSurfaceObserverStatics2[] = L"Windows.Perception.Spatial.Surfaces.ISpatialSurfaceObserverStatics2";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2Vtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsSupported(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CSurfaces_CISpatialSurfaceObserverStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_Surfaces_SpatialSurfaceInfo[] = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceInfo";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMesh[] = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceMesh";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMeshBuffer[] = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceMeshBuffer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_Surfaces_SpatialSurfaceMeshOptions[] = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceMeshOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_Surfaces_SpatialSurfaceObserver[] = L"Windows.Perception.Spatial.Surfaces.SpatialSurfaceObserver";
       
       
#pragma clang diagnostic pop
