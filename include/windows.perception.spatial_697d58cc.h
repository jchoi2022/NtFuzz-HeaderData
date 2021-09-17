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
#include "Windows.Perception.h"
#include "Windows.Storage.Streams.h"
#include "Windows.System.RemoteSystems.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2 __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExportSufficiency __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExportSufficiency;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporter __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporter;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporterStatics __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporterStatics;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation2 __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation2;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference;
typedef interface __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;
typedef struct __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl;
interface __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__out __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
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
typedef interface __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;
EXTERN_C const IID IID___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;
typedef struct __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl;
interface __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor
{
    CONST_VTBL struct __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;
typedef interface __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;
typedef struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__in_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;
EXTERN_C const IID IID___FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor;
typedef struct __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * This, __RPC__out __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl;
interface __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor
{
    CONST_VTBL struct __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchorVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency;
typedef interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiencyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiencyVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiencyVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency;
typedef struct __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiencyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency * This, __RPC__out __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExportSufficiency * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiencyVtbl;
interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiencyVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore;
typedef interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStoreVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStoreVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore;
typedef struct __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialAnchorStore **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * This, __RPC__out __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStoreVtbl;
interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStoreVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference;
typedef interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReferenceVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReferenceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference;
typedef struct __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * This, __RPC__out __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReferenceVtbl;
interface __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReferenceVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox;
typedef interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox;
EXTERN_C const IID IID___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox;
typedef struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBoxVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox * This, __RPC__out struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox *value);
    END_INTERFACE
} __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBoxVtbl;
interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBox
{
    CONST_VTBL struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingBoxVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum;
typedef interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum;
EXTERN_C const IID IID___FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum;
typedef struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustumVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum * This, __RPC__out struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum *value);
    END_INTERFACE
} __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustumVtbl;
interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustum
{
    CONST_VTBL struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialBoundingFrustumVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialRay;
typedef interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay;
EXTERN_C const IID IID___FIReference_1_Windows__CPerception__CSpatial__CSpatialRay;
typedef struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialRayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay * This, __RPC__out struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialRay *value);
    END_INTERFACE
} __FIReference_1_Windows__CPerception__CSpatial__CSpatialRayVtbl;
interface __FIReference_1_Windows__CPerception__CSpatial__CSpatialRay
{
    CONST_VTBL struct __FIReference_1_Windows__CPerception__CSpatial__CSpatialRayVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * sender, __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * sender, __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * sender, __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIAsyncOperationCompletedHandler_1_boolean __FIAsyncOperationCompletedHandler_1_boolean;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_boolean;
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperationCompletedHandler_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_boolean * This, __RPC__in_opt __FIAsyncOperation_1_boolean *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_booleanVtbl;
interface __FIAsyncOperationCompletedHandler_1_boolean
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_booleanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_boolean __FIAsyncOperation_1_boolean;
EXTERN_C const IID IID___FIAsyncOperation_1_boolean;
typedef struct __FIAsyncOperation_1_booleanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_boolean * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_boolean * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_boolean * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_boolean * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_boolean *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_boolean **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_boolean * This, __RPC__out boolean *results);
    END_INTERFACE
} __FIAsyncOperation_1_booleanVtbl;
interface __FIAsyncOperation_1_boolean
{
    CONST_VTBL struct __FIAsyncOperation_1_booleanVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;
typedef interface __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4;
typedef struct __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4Vtbl;
interface __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIKeyValuePair_2_HSTRING_IInspectable __FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt IInspectable * *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out __FIKeyValuePair_2_HSTRING_IInspectable * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_IInspectable * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_IInspectable **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_IInspectable __FIMapView_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMapView_2_HSTRING_IInspectable;
typedef struct __FIMapView_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt IInspectable * *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_IInspectableVtbl;
interface __FIMapView_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMapView_2_HSTRING_IInspectableVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING_IInspectable __FIMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIMap_2_HSTRING_IInspectable;
typedef struct __FIMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   HSTRING key,
                            __RPC__deref_out_opt IInspectable * **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_IInspectable **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_IInspectable * This,
                   HSTRING key,
                   __RPC__in_opt IInspectable * *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_IInspectable * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_IInspectable * This);
    END_INTERFACE
} __FIMap_2_HSTRING_IInspectableVtbl;
interface __FIMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIMap_2_HSTRING_IInspectableVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> Insert(This,key,value,replaced) )
    ( (This)->lpVtbl -> Remove(This,key) )
    ( (This)->lpVtbl -> Clear(This) )
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;
EXTERN_C const IID IID___FIMapChangedEventArgs_1_HSTRING;
typedef struct __FIMapChangedEventArgs_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_CollectionChange )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__out __x_ABI_CWindows_CFoundation_CCollections_CCollectionChange *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIMapChangedEventArgs_1_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIMapChangedEventArgs_1_HSTRINGVtbl;
interface __FIMapChangedEventArgs_1_HSTRING
{
    CONST_VTBL struct __FIMapChangedEventArgs_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_CollectionChange(This,value) )
    ( (This)->lpVtbl -> get_Key(This,value) )
typedef interface __FMapChangedEventHandler_2_HSTRING_IInspectable __FMapChangedEventHandler_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FMapChangedEventHandler_2_HSTRING_IInspectable;
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
typedef interface __FIMapChangedEventArgs_1_HSTRING __FIMapChangedEventArgs_1_HSTRING;
typedef struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FMapChangedEventHandler_2_HSTRING_IInspectable * This,
                   __RPC__in_opt __FIObservableMap_2_HSTRING_IInspectable *sender,
                   __RPC__in_opt __FIMapChangedEventArgs_1_HSTRING *e);
    END_INTERFACE
} __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl;
interface __FMapChangedEventHandler_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FMapChangedEventHandler_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIObservableMap_2_HSTRING_IInspectable __FIObservableMap_2_HSTRING_IInspectable;
EXTERN_C const IID IID___FIObservableMap_2_HSTRING_IInspectable;
typedef struct __FIObservableMap_2_HSTRING_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *add_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   __RPC__in_opt __FMapChangedEventHandler_2_HSTRING_IInspectable *handler,
                            __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_MapChanged )(__RPC__in __FIObservableMap_2_HSTRING_IInspectable * This,
                   EventRegistrationToken token);
    END_INTERFACE
} __FIObservableMap_2_HSTRING_IInspectableVtbl;
interface __FIObservableMap_2_HSTRING_IInspectable
{
    CONST_VTBL struct __FIObservableMap_2_HSTRING_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> add_MapChanged(This,handler,token) )
    ( (This)->lpVtbl -> remove_MapChanged(This,token) )
typedef interface __FIReference_1_double __FIReference_1_double;
EXTERN_C const IID IID___FIReference_1_double;
typedef struct __FIReference_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_double * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_double * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_double * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_double * This, __RPC__out double *value);
    END_INTERFACE
} __FIReference_1_doubleVtbl;
interface __FIReference_1_double
{
    CONST_VTBL struct __FIReference_1_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIEventHandler_1_IInspectable __FIEventHandler_1_IInspectable;
EXTERN_C const IID IID___FIEventHandler_1_IInspectable;
typedef struct __FIEventHandler_1_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_IInspectable * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt IInspectable * *e);
    END_INTERFACE
} __FIEventHandler_1_IInspectableVtbl;
interface __FIEventHandler_1_IInspectable
{
    CONST_VTBL struct __FIEventHandler_1_IInspectableVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CPlane __x_ABI_CWindows_CFoundation_CNumerics_CPlane;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef interface __x_ABI_CWindows_CPerception_CIPerceptionTimestamp __x_ABI_CWindows_CPerception_CIPerceptionTimestamp;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIInputStream __x_ABI_CWindows_CStorage_CStreams_CIInputStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIOutputStream __x_ABI_CWindows_CStorage_CStreams_CIOutputStream;
typedef interface __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession;
typedef enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialAnchorExportPurpose __x_ABI_CWindows_CPerception_CSpatial_CSpatialAnchorExportPurpose;
typedef enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialEntityWatcherStatus __x_ABI_CWindows_CPerception_CSpatial_CSpatialEntityWatcherStatus;
typedef enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialLocatability __x_ABI_CWindows_CPerception_CSpatial_CSpatialLocatability;
typedef enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialLookDirectionRange __x_ABI_CWindows_CPerception_CSpatial_CSpatialLookDirectionRange;
typedef enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialMovementRange __x_ABI_CWindows_CPerception_CSpatial_CSpatialMovementRange;
typedef enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialPerceptionAccessStatus __x_ABI_CWindows_CPerception_CSpatial_CSpatialPerceptionAccessStatus;
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox;
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum;
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingOrientedBox __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingOrientedBox;
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingSphere __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingSphere;
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialRay __x_ABI_CWindows_CPerception_CSpatial_CSpatialRay;
enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialAnchorExportPurpose
{
    SpatialAnchorExportPurpose_Relocalization = 0,
    SpatialAnchorExportPurpose_Sharing = 1,
};
enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialEntityWatcherStatus
{
    SpatialEntityWatcherStatus_Created = 0,
    SpatialEntityWatcherStatus_Started = 1,
    SpatialEntityWatcherStatus_EnumerationCompleted = 2,
    SpatialEntityWatcherStatus_Stopping = 3,
    SpatialEntityWatcherStatus_Stopped = 4,
    SpatialEntityWatcherStatus_Aborted = 5,
};
enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialLocatability
{
    SpatialLocatability_Unavailable = 0,
    SpatialLocatability_OrientationOnly = 1,
    SpatialLocatability_PositionalTrackingActivating = 2,
    SpatialLocatability_PositionalTrackingActive = 3,
    SpatialLocatability_PositionalTrackingInhibited = 4,
};
enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialLookDirectionRange
{
    SpatialLookDirectionRange_ForwardOnly = 0,
    SpatialLookDirectionRange_Omnidirectional = 1,
};
enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialMovementRange
{
    SpatialMovementRange_NoMovement = 0,
    SpatialMovementRange_Bounded = 1,
};
enum __x_ABI_CWindows_CPerception_CSpatial_CSpatialPerceptionAccessStatus
{
    SpatialPerceptionAccessStatus_Unspecified = 0,
    SpatialPerceptionAccessStatus_Allowed = 1,
    SpatialPerceptionAccessStatus_DeniedByUser = 2,
    SpatialPerceptionAccessStatus_DeniedBySystem = 3,
};
struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox
{
    __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Center;
    __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Extents;
};
struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum
{
    __x_ABI_CWindows_CFoundation_CNumerics_CPlane Near;
    __x_ABI_CWindows_CFoundation_CNumerics_CPlane Far;
    __x_ABI_CWindows_CFoundation_CNumerics_CPlane Right;
    __x_ABI_CWindows_CFoundation_CNumerics_CPlane Left;
    __x_ABI_CWindows_CFoundation_CNumerics_CPlane Top;
    __x_ABI_CWindows_CFoundation_CNumerics_CPlane Bottom;
};
struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingOrientedBox
{
    __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Center;
    __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Extents;
    __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion Orientation;
};
struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingSphere
{
    __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Center;
    FLOAT Radius;
};
struct __x_ABI_CWindows_CPerception_CSpatial_CSpatialRay
{
    __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Origin;
    __x_ABI_CWindows_CFoundation_CNumerics_CVector3 Direction;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchor[] = L"Windows.Perception.Spatial.ISpatialAnchor";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CoordinateSystem )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RawCoordinateSystem )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RawCoordinateSystemAdjusted )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialAnchor_Windows__CPerception__CSpatial__CSpatialAnchorRawCoordinateSystemAdjustedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RawCoordinateSystemAdjusted )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CoordinateSystem(This,value) )
    ( (This)->lpVtbl->get_RawCoordinateSystem(This,value) )
    ( (This)->lpVtbl->add_RawCoordinateSystemAdjusted(This,handler,cookie) )
    ( (This)->lpVtbl->remove_RawCoordinateSystemAdjusted(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchor2[] = L"Windows.Perception.Spatial.ISpatialAnchor2";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RemovedByUser )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2Vtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RemovedByUser(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchorExportSufficiency[] = L"Windows.Perception.Spatial.ISpatialAnchorExportSufficiency";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExportSufficiencyVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExportSufficiency * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExportSufficiency * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExportSufficiency * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExportSufficiency * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExportSufficiency * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExportSufficiency * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsMinimallySufficient )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExportSufficiency * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SufficiencyLevel )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExportSufficiency * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RecommendedSufficiencyLevel )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExportSufficiency * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExportSufficiencyVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExportSufficiency
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExportSufficiencyVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsMinimallySufficient(This,value) )
    ( (This)->lpVtbl->get_SufficiencyLevel(This,value) )
    ( (This)->lpVtbl->get_RecommendedSufficiencyLevel(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExportSufficiency;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchorExporter[] = L"Windows.Perception.Spatial.ISpatialAnchorExporter";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporter * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporter * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporter * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporter * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporter * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporter * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAnchorExportSufficiencyAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporter * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * anchor,
                  __x_ABI_CWindows_CPerception_CSpatial_CSpatialAnchorExportPurpose purpose,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorExportSufficiency * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryExportAnchorAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporter * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * anchor,
                  __x_ABI_CWindows_CPerception_CSpatial_CSpatialAnchorExportPurpose purpose,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * stream,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporterVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporter
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAnchorExportSufficiencyAsync(This,anchor,purpose,operation) )
    ( (This)->lpVtbl->TryExportAnchorAsync(This,anchor,purpose,stream,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporter;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchorExporterStatics[] = L"Windows.Perception.Spatial.ISpatialAnchorExporterStatics";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporterStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporterStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporterStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporterStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporterStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporterStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporterStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporterStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporter * * value
        );
    HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporterStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporterStaticsVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporterStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporterStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,value) )
    ( (This)->lpVtbl->RequestAccessAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorExporterStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchorManagerStatics[] = L"Windows.Perception.Spatial.ISpatialAnchorManagerStatics";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RequestStoreAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialAnchorStore * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStaticsVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RequestStoreAsync(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchorRawCoordinateSystemAdjustedEventArgs[] = L"Windows.Perception.Spatial.ISpatialAnchorRawCoordinateSystemAdjustedEventArgs";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OldRawCoordinateSystemToNewRawCoordinateSystemTransform )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CMatrix4x4 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgsVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OldRawCoordinateSystemToNewRawCoordinateSystemTransform(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorRawCoordinateSystemAdjustedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchorStatics[] = L"Windows.Perception.Spatial.ISpatialAnchorStatics";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *TryCreateRelativeTo )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *TryCreateWithPositionRelativeTo )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 position,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *TryCreateWithPositionAndOrientationRelativeTo )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 position,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion orientation,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStaticsVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryCreateRelativeTo(This,coordinateSystem,value) )
    ( (This)->lpVtbl->TryCreateWithPositionRelativeTo(This,coordinateSystem,position,value) )
    ( (This)->lpVtbl->TryCreateWithPositionAndOrientationRelativeTo(This,coordinateSystem,position,orientation,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchorStore[] = L"Windows.Perception.Spatial.ISpatialAnchorStore";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAllSavedAnchors )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This,
                           __RPC__deref_out_opt __FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TrySave )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This,
                  __RPC__in HSTRING id,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * anchor,
                           __RPC__out boolean * succeeded
        );
    HRESULT ( STDMETHODCALLTYPE *Remove )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This,
                  __RPC__in HSTRING id
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStoreVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStoreVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAllSavedAnchors(This,value) )
    ( (This)->lpVtbl->TrySave(This,id,anchor,succeeded) )
    ( (This)->lpVtbl->Remove(This,id) )
    ( (This)->lpVtbl->Clear(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorStore;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialAnchorTransferManagerStatics[] = L"Windows.Perception.Spatial.ISpatialAnchorTransferManagerStatics";
typedef struct
DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
__x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *TryImportAnchorsAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIInputStream * stream,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIMapView_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * * operation
        );
    DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *TryExportAnchorsAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics * This,
                  __RPC__in_opt __FIIterable_1___FIKeyValuePair_2_HSTRING_Windows__CPerception__CSpatial__CSpatialAnchor * anchors,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIOutputStream * stream,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *RequestAccessAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialPerceptionAccessStatus * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStaticsVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
    ( (This)->lpVtbl->TryImportAnchorsAsync(This,stream,operation) )
DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
    ( (This)->lpVtbl->TryExportAnchorsAsync(This,anchors,stream,operation) )
DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
    ( (This)->lpVtbl->RequestAccessAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchorTransferManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialBoundingVolume[] = L"Windows.Perception.Spatial.ISpatialBoundingVolume";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialBoundingVolumeStatics[] = L"Windows.Perception.Spatial.ISpatialBoundingVolumeStatics";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FromBox )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                  __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingBox box,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromOrientedBox )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                  __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingOrientedBox box,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromSphere )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                  __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingSphere sphere,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * * value
        );
    HRESULT ( STDMETHODCALLTYPE *FromFrustum )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                  __x_ABI_CWindows_CPerception_CSpatial_CSpatialBoundingFrustum frustum,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolume * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStaticsVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FromBox(This,coordinateSystem,box,value) )
    ( (This)->lpVtbl->FromOrientedBox(This,coordinateSystem,box,value) )
    ( (This)->lpVtbl->FromSphere(This,coordinateSystem,sphere,value) )
    ( (This)->lpVtbl->FromFrustum(This,coordinateSystem,frustum,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialBoundingVolumeStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialCoordinateSystem[] = L"Windows.Perception.Spatial.ISpatialCoordinateSystem";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetTransformTo )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * target,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CMatrix4x4 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystemVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetTransformTo(This,target,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntity[] = L"Windows.Perception.Spatial.ISpatialEntity";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Anchor )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Anchor(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityAddedEventArgs[] = L"Windows.Perception.Spatial.ISpatialEntityAddedEventArgs";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Entity )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgsVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Entity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityAddedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityFactory[] = L"Windows.Perception.Spatial.ISpatialEntityFactory";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithSpatialAnchor )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * spatialAnchor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithSpatialAnchorAndProperties )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialAnchor * spatialAnchor,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * propertySet,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactoryVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithSpatialAnchor(This,spatialAnchor,value) )
    ( (This)->lpVtbl->CreateWithSpatialAnchorAndProperties(This,spatialAnchor,propertySet,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityRemovedEventArgs[] = L"Windows.Perception.Spatial.ISpatialEntityRemovedEventArgs";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Entity )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgsVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Entity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityRemovedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityStore[] = L"Windows.Perception.Spatial.ISpatialEntityStore";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * entity,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * entity,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * action
        );
    HRESULT ( STDMETHODCALLTYPE *CreateEntityWatcher )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SaveAsync(This,entity,action) )
    ( (This)->lpVtbl->RemoveAsync(This,entity,action) )
    ( (This)->lpVtbl->CreateEntityWatcher(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityStoreStatics[] = L"Windows.Perception.Spatial.ISpatialEntityStoreStatics";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSupported )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *TryGetForRemoteSystemSession )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CRemoteSystems_CIRemoteSystemSession * session,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStore * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStaticsVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSupported(This,value) )
    ( (This)->lpVtbl->TryGetForRemoteSystemSession(This,session,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityStoreStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityUpdatedEventArgs[] = L"Windows.Perception.Spatial.ISpatialEntityUpdatedEventArgs";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Entity )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntity * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgsVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Entity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityUpdatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialEntityWatcher[] = L"Windows.Perception.Spatial.ISpatialEntityWatcher";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
                           __RPC__out __x_ABI_CWindows_CPerception_CSpatial_CSpatialEntityWatcherStatus * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Added )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityAddedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Added )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Updated )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityUpdatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Updated )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Removed )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_Windows__CPerception__CSpatial__CSpatialEntityRemovedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Removed )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_EnumerationCompleted )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialEntityWatcher_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_EnumerationCompleted )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This
        );
    HRESULT ( STDMETHODCALLTYPE *Stop )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcherVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
    ( (This)->lpVtbl->add_Added(This,handler,token) )
    ( (This)->lpVtbl->remove_Added(This,token) )
    ( (This)->lpVtbl->add_Updated(This,handler,token) )
    ( (This)->lpVtbl->remove_Updated(This,token) )
    ( (This)->lpVtbl->add_Removed(This,handler,token) )
    ( (This)->lpVtbl->remove_Removed(This,token) )
    ( (This)->lpVtbl->add_EnumerationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_EnumerationCompleted(This,token) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Stop(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialEntityWatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialLocation[] = L"Windows.Perception.Spatial.ISpatialLocation";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AbsoluteLinearVelocity )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AbsoluteLinearAcceleration )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    DEPRECATED("Use AbsoluteAngularVelocityAxisAngle instead of AbsoluteAngularVelocity. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_AbsoluteAngularVelocity )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
    DEPRECATED("Use AbsoluteAngularAccelerationAxisAngle instead of AbsoluteAngularAcceleration. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_AbsoluteAngularAcceleration )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocationVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_Orientation(This,value) )
    ( (This)->lpVtbl->get_AbsoluteLinearVelocity(This,value) )
    ( (This)->lpVtbl->get_AbsoluteLinearAcceleration(This,value) )
DEPRECATED("Use AbsoluteAngularVelocityAxisAngle instead of AbsoluteAngularVelocity. For more info, see MSDN.")
    ( (This)->lpVtbl->get_AbsoluteAngularVelocity(This,value) )
DEPRECATED("Use AbsoluteAngularAccelerationAxisAngle instead of AbsoluteAngularAcceleration. For more info, see MSDN.")
    ( (This)->lpVtbl->get_AbsoluteAngularAcceleration(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialLocation2[] = L"Windows.Perception.Spatial.ISpatialLocation2";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AbsoluteAngularVelocityAxisAngle )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AbsoluteAngularAccelerationAxisAngle )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation2Vtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation2
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AbsoluteAngularVelocityAxisAngle(This,value) )
    ( (This)->lpVtbl->get_AbsoluteAngularAccelerationAxisAngle(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialLocator[] = L"Windows.Perception.Spatial.ISpatialLocator";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Locatability )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
                           __RPC__out __x_ABI_CWindows_CPerception_CSpatial_CSpatialLocatability * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LocatabilityChanged )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LocatabilityChanged )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PositionalTrackingDeactivating )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CPerception__CSpatial__CSpatialLocator_Windows__CPerception__CSpatial__CSpatialLocatorPositionalTrackingDeactivatingEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PositionalTrackingDeactivating )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
                  EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *TryLocateAtTimestamp )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * timestamp,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocation * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateAttachedFrameOfReferenceAtCurrentHeading )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateAttachedFrameOfReferenceAtCurrentHeadingWithPosition )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 relativePosition,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientation )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 relativePosition,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion relativeOrientation,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientationAndRelativeHeading )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 relativePosition,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion relativeOrientation,
                  DOUBLE relativeHeadingInRadians,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateStationaryFrameOfReferenceAtCurrentLocation )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateStationaryFrameOfReferenceAtCurrentLocationWithPosition )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 relativePosition,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientation )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 relativePosition,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion relativeOrientation,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientationAndRelativeHeading )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 relativePosition,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion relativeOrientation,
                  DOUBLE relativeHeadingInRadians,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Locatability(This,value) )
    ( (This)->lpVtbl->add_LocatabilityChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_LocatabilityChanged(This,cookie) )
    ( (This)->lpVtbl->add_PositionalTrackingDeactivating(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PositionalTrackingDeactivating(This,cookie) )
    ( (This)->lpVtbl->TryLocateAtTimestamp(This,timestamp,coordinateSystem,value) )
    ( (This)->lpVtbl->CreateAttachedFrameOfReferenceAtCurrentHeading(This,value) )
    ( (This)->lpVtbl->CreateAttachedFrameOfReferenceAtCurrentHeadingWithPosition(This,relativePosition,value) )
    ( (This)->lpVtbl->CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientation(This,relativePosition,relativeOrientation,value) )
    ( (This)->lpVtbl->CreateAttachedFrameOfReferenceAtCurrentHeadingWithPositionAndOrientationAndRelativeHeading(This,relativePosition,relativeOrientation,relativeHeadingInRadians,value) )
    ( (This)->lpVtbl->CreateStationaryFrameOfReferenceAtCurrentLocation(This,value) )
    ( (This)->lpVtbl->CreateStationaryFrameOfReferenceAtCurrentLocationWithPosition(This,relativePosition,value) )
    ( (This)->lpVtbl->CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientation(This,relativePosition,relativeOrientation,value) )
    ( (This)->lpVtbl->CreateStationaryFrameOfReferenceAtCurrentLocationWithPositionAndOrientationAndRelativeHeading(This,relativePosition,relativeOrientation,relativeHeadingInRadians,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialLocatorAttachedFrameOfReference[] = L"Windows.Perception.Spatial.ISpatialLocatorAttachedFrameOfReference";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RelativePosition )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RelativePosition )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RelativeOrientation )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RelativeOrientation )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion value
        );
    HRESULT ( STDMETHODCALLTYPE *AdjustHeading )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
                  DOUBLE headingOffsetInRadians
        );
    HRESULT ( STDMETHODCALLTYPE *GetStationaryCoordinateSystemAtTimestamp )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * timestamp,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetRelativeHeadingAtTimestamp )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * timestamp,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReferenceVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReferenceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RelativePosition(This,value) )
    ( (This)->lpVtbl->put_RelativePosition(This,value) )
    ( (This)->lpVtbl->get_RelativeOrientation(This,value) )
    ( (This)->lpVtbl->put_RelativeOrientation(This,value) )
    ( (This)->lpVtbl->AdjustHeading(This,headingOffsetInRadians) )
    ( (This)->lpVtbl->GetStationaryCoordinateSystemAtTimestamp(This,timestamp,value) )
    ( (This)->lpVtbl->TryGetRelativeHeadingAtTimestamp(This,timestamp,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorAttachedFrameOfReference;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialLocatorPositionalTrackingDeactivatingEventArgs[] = L"Windows.Perception.Spatial.ISpatialLocatorPositionalTrackingDeactivatingEventArgs";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Canceled )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Canceled )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgsVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Canceled(This,value) )
    ( (This)->lpVtbl->put_Canceled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorPositionalTrackingDeactivatingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialLocatorStatics[] = L"Windows.Perception.Spatial.ISpatialLocatorStatics";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetDefault )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStaticsVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetDefault(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialLocatorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialStageFrameOfReference[] = L"Windows.Perception.Spatial.ISpatialStageFrameOfReference";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CoordinateSystem )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MovementRange )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This,
                           __RPC__out __x_ABI_CWindows_CPerception_CSpatial_CSpatialMovementRange * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LookDirectionRange )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This,
                           __RPC__out __x_ABI_CWindows_CPerception_CSpatial_CSpatialLookDirectionRange * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCoordinateSystemAtCurrentLocation )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialLocator * locator,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetMovementBounds )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                   __RPC__out UINT32 * __valueSize,
                                                      __RPC__deref_out_ecount_full_opt(*(__valueSize)) __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CoordinateSystem(This,value) )
    ( (This)->lpVtbl->get_MovementRange(This,value) )
    ( (This)->lpVtbl->get_LookDirectionRange(This,value) )
    ( (This)->lpVtbl->GetCoordinateSystemAtCurrentLocation(This,locator,result) )
    ( (This)->lpVtbl->TryGetMovementBounds(This,coordinateSystem,__valueSize,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialStageFrameOfReferenceStatics[] = L"Windows.Perception.Spatial.ISpatialStageFrameOfReferenceStatics";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReference * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CurrentChanged )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CurrentChanged )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This,
                  EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *RequestNewStageAsync )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CSpatial__CSpatialStageFrameOfReference * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStaticsVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Current(This,value) )
    ( (This)->lpVtbl->add_CurrentChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_CurrentChanged(This,cookie) )
    ( (This)->lpVtbl->RequestNewStageAsync(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialStageFrameOfReferenceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Perception_Spatial_ISpatialStationaryFrameOfReference[] = L"Windows.Perception.Spatial.ISpatialStationaryFrameOfReference";
typedef struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReferenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CoordinateSystem )(
        __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReferenceVtbl;
interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference
{
    CONST_VTBL struct __x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReferenceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CoordinateSystem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CPerception_CSpatial_CISpatialStationaryFrameOfReference;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialAnchor[] = L"Windows.Perception.Spatial.SpatialAnchor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialAnchorExportSufficiency[] = L"Windows.Perception.Spatial.SpatialAnchorExportSufficiency";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialAnchorExporter[] = L"Windows.Perception.Spatial.SpatialAnchorExporter";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialAnchorManager[] = L"Windows.Perception.Spatial.SpatialAnchorManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialAnchorRawCoordinateSystemAdjustedEventArgs[] = L"Windows.Perception.Spatial.SpatialAnchorRawCoordinateSystemAdjustedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialAnchorStore[] = L"Windows.Perception.Spatial.SpatialAnchorStore";
DEPRECATED("Use SpatialEntityStore instead of SpatialAnchorTransferManager. For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialAnchorTransferManager[] = L"Windows.Perception.Spatial.SpatialAnchorTransferManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialBoundingVolume[] = L"Windows.Perception.Spatial.SpatialBoundingVolume";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialCoordinateSystem[] = L"Windows.Perception.Spatial.SpatialCoordinateSystem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialEntity[] = L"Windows.Perception.Spatial.SpatialEntity";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialEntityAddedEventArgs[] = L"Windows.Perception.Spatial.SpatialEntityAddedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialEntityRemovedEventArgs[] = L"Windows.Perception.Spatial.SpatialEntityRemovedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialEntityStore[] = L"Windows.Perception.Spatial.SpatialEntityStore";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialEntityUpdatedEventArgs[] = L"Windows.Perception.Spatial.SpatialEntityUpdatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialEntityWatcher[] = L"Windows.Perception.Spatial.SpatialEntityWatcher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialLocation[] = L"Windows.Perception.Spatial.SpatialLocation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialLocator[] = L"Windows.Perception.Spatial.SpatialLocator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialLocatorAttachedFrameOfReference[] = L"Windows.Perception.Spatial.SpatialLocatorAttachedFrameOfReference";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialLocatorPositionalTrackingDeactivatingEventArgs[] = L"Windows.Perception.Spatial.SpatialLocatorPositionalTrackingDeactivatingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialStageFrameOfReference[] = L"Windows.Perception.Spatial.SpatialStageFrameOfReference";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Perception_Spatial_SpatialStationaryFrameOfReference[] = L"Windows.Perception.Spatial.SpatialStationaryFrameOfReference";
       
       
#pragma clang diagnostic pop
