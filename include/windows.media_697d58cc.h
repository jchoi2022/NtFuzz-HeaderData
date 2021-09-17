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
#include "Windows.ApplicationModel.AppService.h"
#include "Windows.Graphics.DirectX.h"
#include "Windows.Graphics.DirectX.Direct3D11.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CIAudioBuffer __x_ABI_CWindows_CMedia_CIAudioBuffer;
typedef interface __x_ABI_CWindows_CMedia_CIAudioFrame __x_ABI_CWindows_CMedia_CIAudioFrame;
typedef interface __x_ABI_CWindows_CMedia_CIAudioFrameFactory __x_ABI_CWindows_CMedia_CIAudioFrameFactory;
typedef interface __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CIImageDisplayProperties __x_ABI_CWindows_CMedia_CIImageDisplayProperties;
typedef interface __x_ABI_CWindows_CMedia_CIMediaControl __x_ABI_CWindows_CMedia_CIMediaControl;
typedef interface __x_ABI_CWindows_CMedia_CIMediaExtension __x_ABI_CWindows_CMedia_CIMediaExtension;
typedef interface __x_ABI_CWindows_CMedia_CIMediaExtensionManager __x_ABI_CWindows_CMedia_CIMediaExtensionManager;
typedef interface __x_ABI_CWindows_CMedia_CIMediaExtensionManager2 __x_ABI_CWindows_CMedia_CIMediaExtensionManager2;
typedef interface __x_ABI_CWindows_CMedia_CIMediaFrame __x_ABI_CWindows_CMedia_CIMediaFrame;
typedef interface __x_ABI_CWindows_CMedia_CIMediaMarker __x_ABI_CWindows_CMedia_CIMediaMarker;
typedef interface __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics;
typedef interface __x_ABI_CWindows_CMedia_CIMediaMarkers __x_ABI_CWindows_CMedia_CIMediaMarkers;
typedef interface __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails;
typedef interface __x_ABI_CWindows_CMedia_CIMediaTimelineController __x_ABI_CWindows_CMedia_CIMediaTimelineController;
typedef interface __x_ABI_CWindows_CMedia_CIMediaTimelineController2 __x_ABI_CWindows_CMedia_CIMediaTimelineController2;
typedef interface __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CIMusicDisplayProperties __x_ABI_CWindows_CMedia_CIMusicDisplayProperties;
typedef interface __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2;
typedef interface __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3;
typedef interface __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControls __x_ABI_CWindows_CMedia_CISystemMediaTransportControls;
typedef interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2;
typedef interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater;
typedef interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics;
typedef interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties;
typedef interface __x_ABI_CWindows_CMedia_CIVideoDisplayProperties __x_ABI_CWindows_CMedia_CIVideoDisplayProperties;
typedef interface __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2 __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2;
typedef interface __x_ABI_CWindows_CMedia_CIVideoEffectsStatics __x_ABI_CWindows_CMedia_CIVideoEffectsStatics;
typedef interface __x_ABI_CWindows_CMedia_CIVideoFrame __x_ABI_CWindows_CMedia_CIVideoFrame;
typedef interface __x_ABI_CWindows_CMedia_CIVideoFrame2 __x_ABI_CWindows_CMedia_CIVideoFrame2;
typedef interface __x_ABI_CWindows_CMedia_CIVideoFrameFactory __x_ABI_CWindows_CMedia_CIVideoFrameFactory;
typedef interface __x_ABI_CWindows_CMedia_CIVideoFrameStatics __x_ABI_CWindows_CMedia_CIVideoFrameStatics;
typedef interface __FIIterator_1_Windows__CMedia__CIMediaMarker __FIIterator_1_Windows__CMedia__CIMediaMarker;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CIMediaMarker;
typedef struct __FIIterator_1_Windows__CMedia__CIMediaMarkerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, __RPC__out __x_ABI_CWindows_CMedia_CIMediaMarker * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CIMediaMarker * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CIMediaMarker * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CIMediaMarkerVtbl;
interface __FIIterator_1_Windows__CMedia__CIMediaMarker
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CIMediaMarkerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CIMediaMarker __FIIterable_1_Windows__CMedia__CIMediaMarker;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CIMediaMarker;
typedef struct __FIIterable_1_Windows__CMedia__CIMediaMarkerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CIMediaMarker * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CIMediaMarker **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CIMediaMarkerVtbl;
interface __FIIterable_1_Windows__CMedia__CIMediaMarker
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CIMediaMarkerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
struct __x_ABI_CWindows_CMedia_CMediaTimeRange;
typedef interface __FIIterator_1_Windows__CMedia__CMediaTimeRange __FIIterator_1_Windows__CMedia__CMediaTimeRange;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CMediaTimeRange;
typedef struct __FIIterator_1_Windows__CMedia__CMediaTimeRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This, __RPC__out struct __x_ABI_CWindows_CMedia_CMediaTimeRange *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaTimeRange * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CMedia_CMediaTimeRange *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CMediaTimeRangeVtbl;
interface __FIIterator_1_Windows__CMedia__CMediaTimeRange
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CMediaTimeRangeVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CMediaTimeRange __FIIterable_1_Windows__CMedia__CMediaTimeRange;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CMediaTimeRange;
typedef struct __FIIterable_1_Windows__CMedia__CMediaTimeRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CMediaTimeRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaTimeRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaTimeRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaTimeRange * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaTimeRange * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaTimeRange * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaTimeRange * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CMediaTimeRange **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CMediaTimeRangeVtbl;
interface __FIIterable_1_Windows__CMedia__CMediaTimeRange
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CMediaTimeRangeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CIMediaMarker __FIVectorView_1_Windows__CMedia__CIMediaMarker;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CIMediaMarker;
typedef struct __FIVectorView_1_Windows__CMedia__CIMediaMarkerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CIMediaMarker * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                       __x_ABI_CWindows_CMedia_CIMediaMarker * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CIMediaMarker * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CIMediaMarker * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CIMediaMarkerVtbl;
interface __FIVectorView_1_Windows__CMedia__CIMediaMarker
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CIMediaMarkerVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CMediaTimeRange __FIVectorView_1_Windows__CMedia__CMediaTimeRange;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CMediaTimeRange;
typedef struct __FIVectorView_1_Windows__CMedia__CMediaTimeRangeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This,
                                                    unsigned int index,
                                                             __RPC__out struct __x_ABI_CWindows_CMedia_CMediaTimeRange *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This,
                       struct __x_ABI_CWindows_CMedia_CMediaTimeRange item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaTimeRange * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CMedia_CMediaTimeRange *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CMediaTimeRangeVtbl;
interface __FIVectorView_1_Windows__CMedia__CMediaTimeRange
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CMediaTimeRangeVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtensionVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtensionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CIMediaExtension;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CIMediaExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CIMediaExtension **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension * This, __RPC__out __x_ABI_CWindows_CMedia_CIMediaExtension * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CIMediaExtensionVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CIMediaExtension
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CIMediaExtensionVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CVideoFrame __FIAsyncOperation_1_Windows__CMedia__CVideoFrame;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CVideoFrame *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrameVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrameVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CVideoFrame __FIAsyncOperation_1_Windows__CMedia__CVideoFrame;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CVideoFrame;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CVideoFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CVideoFrame **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CVideoFrame * This, __RPC__out __x_ABI_CWindows_CMedia_CIVideoFrame * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CVideoFrameVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CVideoFrame
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CVideoFrameVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode;
typedef interface __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode;
EXTERN_C const IID IID___FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode;
typedef struct __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatModeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode * This, __RPC__out enum __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode *value);
    END_INTERFACE
} __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatModeVtbl;
interface __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatMode
{
    CONST_VTBL struct __FIReference_1_Windows__CMedia__CMediaPlaybackAutoRepeatModeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
enum __x_ABI_CWindows_CMedia_CMediaPlaybackType;
typedef interface __FIReference_1_Windows__CMedia__CMediaPlaybackType __FIReference_1_Windows__CMedia__CMediaPlaybackType;
EXTERN_C const IID IID___FIReference_1_Windows__CMedia__CMediaPlaybackType;
typedef struct __FIReference_1_Windows__CMedia__CMediaPlaybackTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackType * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackType * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackType * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackType * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CMedia__CMediaPlaybackType * This, __RPC__out enum __x_ABI_CWindows_CMedia_CMediaPlaybackType *value);
    END_INTERFACE
} __FIReference_1_Windows__CMedia__CMediaPlaybackTypeVtbl;
interface __FIReference_1_Windows__CMedia__CMediaPlaybackType
{
    CONST_VTBL struct __FIReference_1_Windows__CMedia__CMediaPlaybackTypeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CIMediaTimelineController * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CIMediaTimelineController * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
struct __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __FIReference_1_Windows__CFoundation__CTimeSpan __FIReference_1_Windows__CFoundation__CTimeSpan;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CTimeSpan;
typedef struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CTimeSpan * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CTimeSpan *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CTimeSpanVtbl;
interface __FIReference_1_Windows__CFoundation__CTimeSpan
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CTimeSpanVtbl *lpVtbl;
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
typedef interface __FIIterator_1_HSTRING __FIIterator_1_HSTRING;
EXTERN_C const IID IID___FIIterator_1_HSTRING;
typedef struct __FIIterator_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out HSTRING *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_HSTRINGVtbl;
interface __FIIterator_1_HSTRING
{
    CONST_VTBL struct __FIIterator_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterable_1_HSTRING __FIIterable_1_HSTRING;
EXTERN_C const IID IID___FIIterable_1_HSTRING;
typedef struct __FIIterable_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_HSTRING * This, __RPC__deref_out_opt __FIIterator_1_HSTRING **first);
    END_INTERFACE
} __FIIterable_1_HSTRINGVtbl;
interface __FIIterable_1_HSTRING
{
    CONST_VTBL struct __FIIterable_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_HSTRING __FIVectorView_1_HSTRING;
EXTERN_C const IID IID___FIVectorView_1_HSTRING;
typedef struct __FIVectorView_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_HSTRING * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_HSTRING * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_HSTRING * This,
                                                    unsigned int index,
                                                             __RPC__out HSTRING *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_HSTRING * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       HSTRING item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_HSTRING * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_HSTRINGVtbl;
interface __FIVectorView_1_HSTRING
{
    CONST_VTBL struct __FIVectorView_1_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIVector_1_HSTRING __FIVector_1_HSTRING;
EXTERN_C const IID IID___FIVector_1_HSTRING;
typedef struct __FIVector_1_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_HSTRING * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                            __RPC__deref_out_opt HSTRING *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_HSTRING * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_HSTRING * This, __RPC__deref_out_opt __FIVectorView_1_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_HSTRING * This,
                   __RPC__in HSTRING item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                   __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int index,
                   __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_HSTRING * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_HSTRING * This, __RPC__in HSTRING item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) HSTRING *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_HSTRING * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) HSTRING *value);
    END_INTERFACE
} __FIVector_1_HSTRINGVtbl;
interface __FIVector_1_HSTRING
{
    CONST_VTBL struct __FIVector_1_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> GetAt(This,index,item) )
    ( (This)->lpVtbl -> get_Size(This,size) )
    ( (This)->lpVtbl -> GetView(This,view) )
    ( (This)->lpVtbl -> IndexOf(This,item,index,found) )
    ( (This)->lpVtbl -> SetAt(This,index,item) )
    ( (This)->lpVtbl -> InsertAt(This,index,item) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
    ( (This)->lpVtbl -> Append(This,item) )
    ( (This)->lpVtbl -> RemoveAtEnd(This) )
    ( (This)->lpVtbl -> Clear(This) )
    ( (This)->lpVtbl -> GetMany(This,startIndex,capacity,items,actual) )
    ( (This)->lpVtbl -> ReplaceAll(This,count,value) )
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
struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds;
typedef interface __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds;
EXTERN_C const IID IID___FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds;
typedef struct __FIReference_1_Windows__CGraphics__CImaging__CBitmapBoundsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds * This, __RPC__out struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds *value);
    END_INTERFACE
} __FIReference_1_Windows__CGraphics__CImaging__CBitmapBoundsVtbl;
interface __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds
{
    CONST_VTBL struct __FIReference_1_Windows__CGraphics__CImaging__CBitmapBoundsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection;
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef interface __x_ABI_CWindows_CFoundation_CIMemoryBuffer __x_ABI_CWindows_CFoundation_CIMemoryBuffer;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice;
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;
typedef enum __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode;
typedef struct __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds __x_ABI_CWindows_CGraphics_CImaging_CBitmapBounds;
typedef enum __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat;
typedef interface __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef enum __x_ABI_CWindows_CMedia_CAudioBufferAccessMode __x_ABI_CWindows_CMedia_CAudioBufferAccessMode;
typedef enum __x_ABI_CWindows_CMedia_CAudioProcessing __x_ABI_CWindows_CMedia_CAudioProcessing;
typedef enum __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode;
typedef enum __x_ABI_CWindows_CMedia_CMediaPlaybackStatus __x_ABI_CWindows_CMedia_CMediaPlaybackStatus;
typedef enum __x_ABI_CWindows_CMedia_CMediaPlaybackType __x_ABI_CWindows_CMedia_CMediaPlaybackType;
typedef enum __x_ABI_CWindows_CMedia_CMediaTimelineControllerState __x_ABI_CWindows_CMedia_CMediaTimelineControllerState;
typedef enum __x_ABI_CWindows_CMedia_CSoundLevel __x_ABI_CWindows_CMedia_CSoundLevel;
typedef enum __x_ABI_CWindows_CMedia_CSystemMediaTransportControlsButton __x_ABI_CWindows_CMedia_CSystemMediaTransportControlsButton;
typedef enum __x_ABI_CWindows_CMedia_CSystemMediaTransportControlsProperty __x_ABI_CWindows_CMedia_CSystemMediaTransportControlsProperty;
typedef struct __x_ABI_CWindows_CMedia_CMediaTimeRange __x_ABI_CWindows_CMedia_CMediaTimeRange;
enum __x_ABI_CWindows_CMedia_CAudioBufferAccessMode
{
    AudioBufferAccessMode_Read = 0,
    AudioBufferAccessMode_ReadWrite = 1,
    AudioBufferAccessMode_Write = 2,
};
enum __x_ABI_CWindows_CMedia_CAudioProcessing
{
    AudioProcessing_Default = 0,
    AudioProcessing_Raw = 1,
};
enum __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode
{
    MediaPlaybackAutoRepeatMode_None = 0,
    MediaPlaybackAutoRepeatMode_Track = 1,
    MediaPlaybackAutoRepeatMode_List = 2,
};
enum __x_ABI_CWindows_CMedia_CMediaPlaybackStatus
{
    MediaPlaybackStatus_Closed = 0,
    MediaPlaybackStatus_Changing = 1,
    MediaPlaybackStatus_Stopped = 2,
    MediaPlaybackStatus_Playing = 3,
    MediaPlaybackStatus_Paused = 4,
};
enum __x_ABI_CWindows_CMedia_CMediaPlaybackType
{
    MediaPlaybackType_Unknown = 0,
    MediaPlaybackType_Music = 1,
    MediaPlaybackType_Video = 2,
    MediaPlaybackType_Image = 3,
};
enum __x_ABI_CWindows_CMedia_CMediaTimelineControllerState
{
    MediaTimelineControllerState_Paused = 0,
    MediaTimelineControllerState_Running = 1,
    MediaTimelineControllerState_Stalled = 2,
    MediaTimelineControllerState_Error = 3,
};
enum __x_ABI_CWindows_CMedia_CSoundLevel
{
    SoundLevel_Muted = 0,
    SoundLevel_Low = 1,
    SoundLevel_Full = 2,
};
enum __x_ABI_CWindows_CMedia_CSystemMediaTransportControlsButton
{
    SystemMediaTransportControlsButton_Play = 0,
    SystemMediaTransportControlsButton_Pause = 1,
    SystemMediaTransportControlsButton_Stop = 2,
    SystemMediaTransportControlsButton_Record = 3,
    SystemMediaTransportControlsButton_FastForward = 4,
    SystemMediaTransportControlsButton_Rewind = 5,
    SystemMediaTransportControlsButton_Next = 6,
    SystemMediaTransportControlsButton_Previous = 7,
    SystemMediaTransportControlsButton_ChannelUp = 8,
    SystemMediaTransportControlsButton_ChannelDown = 9,
};
enum __x_ABI_CWindows_CMedia_CSystemMediaTransportControlsProperty
{
    SystemMediaTransportControlsProperty_SoundLevel = 0,
};
struct __x_ABI_CWindows_CMedia_CMediaTimeRange
{
    __x_ABI_CWindows_CFoundation_CTimeSpan Start;
    __x_ABI_CWindows_CFoundation_CTimeSpan End;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IAudioBuffer[] = L"Windows.Media.IAudioBuffer";
typedef struct __x_ABI_CWindows_CMedia_CIAudioBufferVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioBuffer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioBuffer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioBuffer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioBuffer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioBuffer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioBuffer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Capacity )(
        __x_ABI_CWindows_CMedia_CIAudioBuffer * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Length )(
        __x_ABI_CWindows_CMedia_CIAudioBuffer * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Length )(
        __x_ABI_CWindows_CMedia_CIAudioBuffer * This,
                  UINT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIAudioBufferVtbl;
interface __x_ABI_CWindows_CMedia_CIAudioBuffer
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIAudioBufferVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Capacity(This,value) )
    ( (This)->lpVtbl->get_Length(This,value) )
    ( (This)->lpVtbl->put_Length(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIAudioBuffer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IAudioFrame[] = L"Windows.Media.IAudioFrame";
typedef struct __x_ABI_CWindows_CMedia_CIAudioFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *LockBuffer )(
        __x_ABI_CWindows_CMedia_CIAudioFrame * This,
                  __x_ABI_CWindows_CMedia_CAudioBufferAccessMode mode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIAudioBuffer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIAudioFrameVtbl;
interface __x_ABI_CWindows_CMedia_CIAudioFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIAudioFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LockBuffer(This,mode,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIAudioFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IAudioFrameFactory[] = L"Windows.Media.IAudioFrameFactory";
typedef struct __x_ABI_CWindows_CMedia_CIAudioFrameFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrameFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrameFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrameFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrameFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrameFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAudioFrameFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CIAudioFrameFactory * This,
                                        __RPC__in_range(0,0x7fffffff) UINT32 capacity,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIAudioFrame * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIAudioFrameFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CIAudioFrameFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIAudioFrameFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,capacity,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIAudioFrameFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IAutoRepeatModeChangeRequestedEventArgs[] = L"Windows.Media.IAutoRepeatModeChangeRequestedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequestedAutoRepeatMode )(
        __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequestedAutoRepeatMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIAutoRepeatModeChangeRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IImageDisplayProperties[] = L"Windows.Media.IImageDisplayProperties";
typedef struct __x_ABI_CWindows_CMedia_CIImageDisplayPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subtitle )(
        __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Subtitle )(
        __x_ABI_CWindows_CMedia_CIImageDisplayProperties * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIImageDisplayPropertiesVtbl;
interface __x_ABI_CWindows_CMedia_CIImageDisplayProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIImageDisplayPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_Subtitle(This,value) )
    ( (This)->lpVtbl->put_Subtitle(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIImageDisplayProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaControl[] = L"Windows.Media.IMediaControl";
typedef struct
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
__x_ABI_CWindows_CMedia_CIMediaControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                HRESULT ( STDMETHODCALLTYPE *add_SoundLevelChanged )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_SoundLevelChanged )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  EventRegistrationToken cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                HRESULT ( STDMETHODCALLTYPE *add_PlayPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_PlayPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  EventRegistrationToken cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                HRESULT ( STDMETHODCALLTYPE *add_PausePressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_PausePressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  EventRegistrationToken cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                HRESULT ( STDMETHODCALLTYPE *add_StopPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_StopPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  EventRegistrationToken cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                HRESULT ( STDMETHODCALLTYPE *add_PlayPauseTogglePressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_PlayPauseTogglePressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  EventRegistrationToken cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                HRESULT ( STDMETHODCALLTYPE *add_RecordPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_RecordPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  EventRegistrationToken cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                HRESULT ( STDMETHODCALLTYPE *add_NextTrackPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_NextTrackPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  EventRegistrationToken cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                HRESULT ( STDMETHODCALLTYPE *add_PreviousTrackPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_PreviousTrackPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  EventRegistrationToken cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                HRESULT ( STDMETHODCALLTYPE *add_FastForwardPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_FastForwardPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  EventRegistrationToken cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                HRESULT ( STDMETHODCALLTYPE *add_RewindPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_RewindPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  EventRegistrationToken cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                HRESULT ( STDMETHODCALLTYPE *add_ChannelUpPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_ChannelUpPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  EventRegistrationToken cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                HRESULT ( STDMETHODCALLTYPE *add_ChannelDownPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_ChannelDownPressed )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  EventRegistrationToken cookie
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                               HRESULT ( STDMETHODCALLTYPE *get_SoundLevel )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSoundLevel * value
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                               HRESULT ( STDMETHODCALLTYPE *put_TrackName )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                               HRESULT ( STDMETHODCALLTYPE *get_TrackName )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                               HRESULT ( STDMETHODCALLTYPE *put_ArtistName )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  __RPC__in HSTRING value
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                               HRESULT ( STDMETHODCALLTYPE *get_ArtistName )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                               HRESULT ( STDMETHODCALLTYPE *put_IsPlaying )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  boolean value
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                               HRESULT ( STDMETHODCALLTYPE *get_IsPlaying )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                               HRESULT ( STDMETHODCALLTYPE *put_AlbumArt )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
                               HRESULT ( STDMETHODCALLTYPE *get_AlbumArt )(
        __x_ABI_CWindows_CMedia_CIMediaControl * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIMediaControlVtbl;
interface __x_ABI_CWindows_CMedia_CIMediaControl
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->add_SoundLevelChanged(This,handler,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->remove_SoundLevelChanged(This,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->add_PlayPressed(This,handler,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->remove_PlayPressed(This,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->add_PausePressed(This,handler,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->remove_PausePressed(This,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->add_StopPressed(This,handler,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->remove_StopPressed(This,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->add_PlayPauseTogglePressed(This,handler,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->remove_PlayPauseTogglePressed(This,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->add_RecordPressed(This,handler,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->remove_RecordPressed(This,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->add_NextTrackPressed(This,handler,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->remove_NextTrackPressed(This,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->add_PreviousTrackPressed(This,handler,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->remove_PreviousTrackPressed(This,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->add_FastForwardPressed(This,handler,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->remove_FastForwardPressed(This,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->add_RewindPressed(This,handler,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->remove_RewindPressed(This,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->add_ChannelUpPressed(This,handler,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->remove_ChannelUpPressed(This,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->add_ChannelDownPressed(This,handler,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->remove_ChannelDownPressed(This,cookie) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->get_SoundLevel(This,value) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->put_TrackName(This,value) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->get_TrackName(This,value) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->put_ArtistName(This,value) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->get_ArtistName(This,value) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->put_IsPlaying(This,value) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->get_IsPlaying(This,value) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->put_AlbumArt(This,value) )
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
    ( (This)->lpVtbl->get_AlbumArt(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaExtension[] = L"Windows.Media.IMediaExtension";
typedef struct __x_ABI_CWindows_CMedia_CIMediaExtensionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtension * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetProperties )(
        __x_ABI_CWindows_CMedia_CIMediaExtension * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIMediaExtensionVtbl;
interface __x_ABI_CWindows_CMedia_CIMediaExtension
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaExtensionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetProperties(This,configuration) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaExtension;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaExtensionManager[] = L"Windows.Media.IMediaExtensionManager";
typedef struct __x_ABI_CWindows_CMedia_CIMediaExtensionManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *RegisterSchemeHandler )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
                  __RPC__in HSTRING activatableClassId,
                  __RPC__in HSTRING scheme
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterSchemeHandlerWithSettings )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
                  __RPC__in HSTRING activatableClassId,
                  __RPC__in HSTRING scheme,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterByteStreamHandler )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
                  __RPC__in HSTRING activatableClassId,
                  __RPC__in HSTRING fileExtension,
                  __RPC__in HSTRING mimeType
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterByteStreamHandlerWithSettings )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
                  __RPC__in HSTRING activatableClassId,
                  __RPC__in HSTRING fileExtension,
                  __RPC__in HSTRING mimeType,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterAudioDecoder )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
                  __RPC__in HSTRING activatableClassId,
                  GUID inputSubtype,
                  GUID outputSubtype
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterAudioDecoderWithSettings )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
                  __RPC__in HSTRING activatableClassId,
                  GUID inputSubtype,
                  GUID outputSubtype,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterAudioEncoder )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
                  __RPC__in HSTRING activatableClassId,
                  GUID inputSubtype,
                  GUID outputSubtype
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterAudioEncoderWithSettings )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
                  __RPC__in HSTRING activatableClassId,
                  GUID inputSubtype,
                  GUID outputSubtype,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterVideoDecoder )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
                  __RPC__in HSTRING activatableClassId,
                  GUID inputSubtype,
                  GUID outputSubtype
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterVideoDecoderWithSettings )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
                  __RPC__in HSTRING activatableClassId,
                  GUID inputSubtype,
                  GUID outputSubtype,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterVideoEncoder )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
                  __RPC__in HSTRING activatableClassId,
                  GUID inputSubtype,
                  GUID outputSubtype
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterVideoEncoderWithSettings )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager * This,
                  __RPC__in HSTRING activatableClassId,
                  GUID inputSubtype,
                  GUID outputSubtype,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIMediaExtensionManagerVtbl;
interface __x_ABI_CWindows_CMedia_CIMediaExtensionManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaExtensionManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RegisterSchemeHandler(This,activatableClassId,scheme) )
    ( (This)->lpVtbl->RegisterSchemeHandlerWithSettings(This,activatableClassId,scheme,configuration) )
    ( (This)->lpVtbl->RegisterByteStreamHandler(This,activatableClassId,fileExtension,mimeType) )
    ( (This)->lpVtbl->RegisterByteStreamHandlerWithSettings(This,activatableClassId,fileExtension,mimeType,configuration) )
    ( (This)->lpVtbl->RegisterAudioDecoder(This,activatableClassId,inputSubtype,outputSubtype) )
    ( (This)->lpVtbl->RegisterAudioDecoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration) )
    ( (This)->lpVtbl->RegisterAudioEncoder(This,activatableClassId,inputSubtype,outputSubtype) )
    ( (This)->lpVtbl->RegisterAudioEncoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration) )
    ( (This)->lpVtbl->RegisterVideoDecoder(This,activatableClassId,inputSubtype,outputSubtype) )
    ( (This)->lpVtbl->RegisterVideoDecoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration) )
    ( (This)->lpVtbl->RegisterVideoEncoder(This,activatableClassId,inputSubtype,outputSubtype) )
    ( (This)->lpVtbl->RegisterVideoEncoderWithSettings(This,activatableClassId,inputSubtype,outputSubtype,configuration) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaExtensionManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaExtensionManager2[] = L"Windows.Media.IMediaExtensionManager2";
typedef struct __x_ABI_CWindows_CMedia_CIMediaExtensionManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaExtensionManager2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RegisterMediaExtensionForAppService )(
        __x_ABI_CWindows_CMedia_CIMediaExtensionManager2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CIMediaExtension * extension,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CAppService_CIAppServiceConnection * connection
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIMediaExtensionManager2Vtbl;
interface __x_ABI_CWindows_CMedia_CIMediaExtensionManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaExtensionManager2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RegisterMediaExtensionForAppService(This,extension,connection) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaExtensionManager2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaFrame[] = L"Windows.Media.IMediaFrame";
typedef struct __x_ABI_CWindows_CMedia_CIMediaFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RelativeTime )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RelativeTime )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SystemRelativeTime )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SystemRelativeTime )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsDiscontinuous )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsDiscontinuous )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedProperties )(
        __x_ABI_CWindows_CMedia_CIMediaFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIMediaFrameVtbl;
interface __x_ABI_CWindows_CMedia_CIMediaFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->get_IsReadOnly(This,value) )
    ( (This)->lpVtbl->put_RelativeTime(This,value) )
    ( (This)->lpVtbl->get_RelativeTime(This,value) )
    ( (This)->lpVtbl->put_SystemRelativeTime(This,value) )
    ( (This)->lpVtbl->get_SystemRelativeTime(This,value) )
    ( (This)->lpVtbl->put_Duration(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->put_IsDiscontinuous(This,value) )
    ( (This)->lpVtbl->get_IsDiscontinuous(This,value) )
    ( (This)->lpVtbl->get_ExtendedProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaMarker[] = L"Windows.Media.IMediaMarker";
typedef struct __x_ABI_CWindows_CMedia_CIMediaMarkerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarker * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarker * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarker * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarker * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarker * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarker * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Time )(
        __x_ABI_CWindows_CMedia_CIMediaMarker * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaMarkerType )(
        __x_ABI_CWindows_CMedia_CIMediaMarker * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CMedia_CIMediaMarker * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIMediaMarkerVtbl;
interface __x_ABI_CWindows_CMedia_CIMediaMarker
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaMarkerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Time(This,value) )
    ( (This)->lpVtbl->get_MediaMarkerType(This,value) )
    ( (This)->lpVtbl->get_Text(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaMarker;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaMarkerTypesStatics[] = L"Windows.Media.IMediaMarkerTypesStatics";
typedef struct __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Bookmark )(
        __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaMarkerTypesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Bookmark(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaMarkerTypesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaMarkers[] = L"Windows.Media.IMediaMarkers";
typedef struct __x_ABI_CWindows_CMedia_CIMediaMarkersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkers * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkers * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkers * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkers * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkers * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaMarkers * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Markers )(
        __x_ABI_CWindows_CMedia_CIMediaMarkers * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CIMediaMarker * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIMediaMarkersVtbl;
interface __x_ABI_CWindows_CMedia_CIMediaMarkers
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaMarkersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Markers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaMarkers;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaProcessingTriggerDetails[] = L"Windows.Media.IMediaProcessingTriggerDetails";
typedef struct __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetailsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Arguments )(
        __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetailsVtbl;
interface __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetailsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Arguments(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaProcessingTriggerDetails;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaTimelineController[] = L"Windows.Media.IMediaTimelineController";
typedef struct __x_ABI_CWindows_CMedia_CIMediaTimelineControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Start )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This
        );
    HRESULT ( STDMETHODCALLTYPE *Resume )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This
        );
    HRESULT ( STDMETHODCALLTYPE *Pause )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ClockRate )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ClockRate )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMediaTimelineControllerState * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PositionChanged )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable * positionChangedEventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PositionChanged )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
                  EventRegistrationToken eventCookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_StateChanged )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable * stateChangedEventHandler,
                           __RPC__out EventRegistrationToken * eventCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_StateChanged )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController * This,
                  EventRegistrationToken eventCookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIMediaTimelineControllerVtbl;
interface __x_ABI_CWindows_CMedia_CIMediaTimelineController
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaTimelineControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Start(This) )
    ( (This)->lpVtbl->Resume(This) )
    ( (This)->lpVtbl->Pause(This) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->put_Position(This,value) )
    ( (This)->lpVtbl->get_ClockRate(This,value) )
    ( (This)->lpVtbl->put_ClockRate(This,value) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->add_PositionChanged(This,positionChangedEventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_PositionChanged(This,eventCookie) )
    ( (This)->lpVtbl->add_StateChanged(This,stateChangedEventHandler,eventCookie) )
    ( (This)->lpVtbl->remove_StateChanged(This,eventCookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaTimelineController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaTimelineController2[] = L"Windows.Media.IMediaTimelineController2";
typedef struct __x_ABI_CWindows_CMedia_CIMediaTimelineController2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Duration )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsLoopingEnabled )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsLoopingEnabled )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
                  boolean value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Failed )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_Windows__CMedia__CMediaTimelineControllerFailedEventArgs * eventHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Failed )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Ended )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CMediaTimelineController_IInspectable * eventHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Ended )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineController2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIMediaTimelineController2Vtbl;
interface __x_ABI_CWindows_CMedia_CIMediaTimelineController2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaTimelineController2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->put_Duration(This,value) )
    ( (This)->lpVtbl->get_IsLoopingEnabled(This,value) )
    ( (This)->lpVtbl->put_IsLoopingEnabled(This,value) )
    ( (This)->lpVtbl->add_Failed(This,eventHandler,token) )
    ( (This)->lpVtbl->remove_Failed(This,token) )
    ( (This)->lpVtbl->add_Ended(This,eventHandler,token) )
    ( (This)->lpVtbl->remove_Ended(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaTimelineController2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMediaTimelineControllerFailedEventArgs[] = L"Windows.Media.IMediaTimelineControllerFailedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMediaTimelineControllerFailedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMusicDisplayProperties[] = L"Windows.Media.IMusicDisplayProperties";
typedef struct __x_ABI_CWindows_CMedia_CIMusicDisplayPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AlbumArtist )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AlbumArtist )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Artist )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Artist )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIMusicDisplayPropertiesVtbl;
interface __x_ABI_CWindows_CMedia_CIMusicDisplayProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMusicDisplayPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_AlbumArtist(This,value) )
    ( (This)->lpVtbl->put_AlbumArtist(This,value) )
    ( (This)->lpVtbl->get_Artist(This,value) )
    ( (This)->lpVtbl->put_Artist(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMusicDisplayProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMusicDisplayProperties2[] = L"Windows.Media.IMusicDisplayProperties2";
typedef struct __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AlbumTitle )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AlbumTitle )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrackNumber )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TrackNumber )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Genres )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2 * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2Vtbl;
interface __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMusicDisplayProperties2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AlbumTitle(This,value) )
    ( (This)->lpVtbl->put_AlbumTitle(This,value) )
    ( (This)->lpVtbl->get_TrackNumber(This,value) )
    ( (This)->lpVtbl->put_TrackNumber(This,value) )
    ( (This)->lpVtbl->get_Genres(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMusicDisplayProperties2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IMusicDisplayProperties3[] = L"Windows.Media.IMusicDisplayProperties3";
typedef struct __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AlbumTrackCount )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AlbumTrackCount )(
        __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3 * This,
                  UINT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3Vtbl;
interface __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIMusicDisplayProperties3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AlbumTrackCount(This,value) )
    ( (This)->lpVtbl->put_AlbumTrackCount(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIMusicDisplayProperties3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IPlaybackPositionChangeRequestedEventArgs[] = L"Windows.Media.IPlaybackPositionChangeRequestedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequestedPlaybackPosition )(
        __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequestedPlaybackPosition(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIPlaybackPositionChangeRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IPlaybackRateChangeRequestedEventArgs[] = L"Windows.Media.IPlaybackRateChangeRequestedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequestedPlaybackRate )(
        __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequestedPlaybackRate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIPlaybackRateChangeRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IShuffleEnabledChangeRequestedEventArgs[] = L"Windows.Media.IShuffleEnabledChangeRequestedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequestedShuffleEnabled )(
        __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequestedShuffleEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIShuffleEnabledChangeRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControls[] = L"Windows.Media.ISystemMediaTransportControls";
typedef struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PlaybackStatus )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMediaPlaybackStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PlaybackStatus )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                  __x_ABI_CWindows_CMedia_CMediaPlaybackStatus value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayUpdater )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SoundLevel )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSoundLevel * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPlayEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsPlayEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsStopEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsStopEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPauseEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsPauseEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRecordEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsRecordEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsFastForwardEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsFastForwardEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRewindEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsRewindEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPreviousEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsPreviousEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsNextEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsNextEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsChannelUpEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsChannelUpEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsChannelDownEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsChannelDownEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                  boolean value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ButtonPressed )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsButtonPressedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ButtonPressed )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PropertyChanged )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CSystemMediaTransportControlsPropertyChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PropertyChanged )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsVtbl;
interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControls
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PlaybackStatus(This,value) )
    ( (This)->lpVtbl->put_PlaybackStatus(This,value) )
    ( (This)->lpVtbl->get_DisplayUpdater(This,value) )
    ( (This)->lpVtbl->get_SoundLevel(This,value) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_IsPlayEnabled(This,value) )
    ( (This)->lpVtbl->put_IsPlayEnabled(This,value) )
    ( (This)->lpVtbl->get_IsStopEnabled(This,value) )
    ( (This)->lpVtbl->put_IsStopEnabled(This,value) )
    ( (This)->lpVtbl->get_IsPauseEnabled(This,value) )
    ( (This)->lpVtbl->put_IsPauseEnabled(This,value) )
    ( (This)->lpVtbl->get_IsRecordEnabled(This,value) )
    ( (This)->lpVtbl->put_IsRecordEnabled(This,value) )
    ( (This)->lpVtbl->get_IsFastForwardEnabled(This,value) )
    ( (This)->lpVtbl->put_IsFastForwardEnabled(This,value) )
    ( (This)->lpVtbl->get_IsRewindEnabled(This,value) )
    ( (This)->lpVtbl->put_IsRewindEnabled(This,value) )
    ( (This)->lpVtbl->get_IsPreviousEnabled(This,value) )
    ( (This)->lpVtbl->put_IsPreviousEnabled(This,value) )
    ( (This)->lpVtbl->get_IsNextEnabled(This,value) )
    ( (This)->lpVtbl->put_IsNextEnabled(This,value) )
    ( (This)->lpVtbl->get_IsChannelUpEnabled(This,value) )
    ( (This)->lpVtbl->put_IsChannelUpEnabled(This,value) )
    ( (This)->lpVtbl->get_IsChannelDownEnabled(This,value) )
    ( (This)->lpVtbl->put_IsChannelDownEnabled(This,value) )
    ( (This)->lpVtbl->add_ButtonPressed(This,handler,token) )
    ( (This)->lpVtbl->remove_ButtonPressed(This,token) )
    ( (This)->lpVtbl->add_PropertyChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_PropertyChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControls;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControls2[] = L"Windows.Media.ISystemMediaTransportControls2";
typedef struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AutoRepeatMode )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutoRepeatMode )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
                  __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShuffleEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShuffleEnabled )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaybackRate )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PlaybackRate )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
                  DOUBLE value
        );
    HRESULT ( STDMETHODCALLTYPE *UpdateTimelineProperties )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * timelineProperties
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PlaybackPositionChangeRequested )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackPositionChangeRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PlaybackPositionChangeRequested )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PlaybackRateChangeRequested )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CPlaybackRateChangeRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PlaybackRateChangeRequested )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ShuffleEnabledChangeRequested )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CShuffleEnabledChangeRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ShuffleEnabledChangeRequested )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AutoRepeatModeChangeRequested )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CSystemMediaTransportControls_Windows__CMedia__CAutoRepeatModeChangeRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AutoRepeatModeChangeRequested )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2Vtbl;
interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControls2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AutoRepeatMode(This,value) )
    ( (This)->lpVtbl->put_AutoRepeatMode(This,value) )
    ( (This)->lpVtbl->get_ShuffleEnabled(This,value) )
    ( (This)->lpVtbl->put_ShuffleEnabled(This,value) )
    ( (This)->lpVtbl->get_PlaybackRate(This,value) )
    ( (This)->lpVtbl->put_PlaybackRate(This,value) )
    ( (This)->lpVtbl->UpdateTimelineProperties(This,timelineProperties) )
    ( (This)->lpVtbl->add_PlaybackPositionChangeRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_PlaybackPositionChangeRequested(This,token) )
    ( (This)->lpVtbl->add_PlaybackRateChangeRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_PlaybackRateChangeRequested(This,token) )
    ( (This)->lpVtbl->add_ShuffleEnabledChangeRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_ShuffleEnabledChangeRequested(This,token) )
    ( (This)->lpVtbl->add_AutoRepeatModeChangeRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_AutoRepeatModeChangeRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControls2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControlsButtonPressedEventArgs[] = L"Windows.Media.ISystemMediaTransportControlsButtonPressedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Button )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSystemMediaTransportControlsButton * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Button(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControlsButtonPressedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControlsDisplayUpdater[] = L"Windows.Media.ISystemMediaTransportControlsDisplayUpdater";
typedef struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdaterVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMediaPlaybackType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Type )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
                  __x_ABI_CWindows_CMedia_CMediaPlaybackType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppMediaId )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AppMediaId )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Thumbnail )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MusicProperties )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoProperties )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ImageProperties )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIImageDisplayProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CopyFromFileAsync )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This,
                  __x_ABI_CWindows_CMedia_CMediaPlaybackType type,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * source,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *ClearAll )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This
        );
    HRESULT ( STDMETHODCALLTYPE *Update )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdaterVtbl;
interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdaterVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->put_Type(This,value) )
    ( (This)->lpVtbl->get_AppMediaId(This,value) )
    ( (This)->lpVtbl->put_AppMediaId(This,value) )
    ( (This)->lpVtbl->get_Thumbnail(This,value) )
    ( (This)->lpVtbl->put_Thumbnail(This,value) )
    ( (This)->lpVtbl->get_MusicProperties(This,value) )
    ( (This)->lpVtbl->get_VideoProperties(This,value) )
    ( (This)->lpVtbl->get_ImageProperties(This,value) )
    ( (This)->lpVtbl->CopyFromFileAsync(This,type,source,operation) )
    ( (This)->lpVtbl->ClearAll(This) )
    ( (This)->lpVtbl->Update(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControlsDisplayUpdater;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControlsPropertyChangedEventArgs[] = L"Windows.Media.ISystemMediaTransportControlsPropertyChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Property )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CSystemMediaTransportControlsProperty * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Property(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControlsPropertyChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControlsStatics[] = L"Windows.Media.ISystemMediaTransportControlsStatics";
typedef struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * * mediaControl
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,mediaControl) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControlsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_ISystemMediaTransportControlsTimelineProperties[] = L"Windows.Media.ISystemMediaTransportControlsTimelineProperties";
typedef struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelinePropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartTime )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndTime )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EndTime )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinSeekTime )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinSeekTime )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxSeekTime )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxSeekTime )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelinePropertiesVtbl;
interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelinePropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StartTime(This,value) )
    ( (This)->lpVtbl->put_StartTime(This,value) )
    ( (This)->lpVtbl->get_EndTime(This,value) )
    ( (This)->lpVtbl->put_EndTime(This,value) )
    ( (This)->lpVtbl->get_MinSeekTime(This,value) )
    ( (This)->lpVtbl->put_MinSeekTime(This,value) )
    ( (This)->lpVtbl->get_MaxSeekTime(This,value) )
    ( (This)->lpVtbl->put_MaxSeekTime(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->put_Position(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CISystemMediaTransportControlsTimelineProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IVideoDisplayProperties[] = L"Windows.Media.IVideoDisplayProperties";
typedef struct __x_ABI_CWindows_CMedia_CIVideoDisplayPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Subtitle )(
        __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Subtitle )(
        __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIVideoDisplayPropertiesVtbl;
interface __x_ABI_CWindows_CMedia_CIVideoDisplayProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIVideoDisplayPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_Subtitle(This,value) )
    ( (This)->lpVtbl->put_Subtitle(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIVideoDisplayProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IVideoDisplayProperties2[] = L"Windows.Media.IVideoDisplayProperties2";
typedef struct __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Genres )(
        __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2 * This,
                           __RPC__deref_out_opt __FIVector_1_HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2Vtbl;
interface __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIVideoDisplayProperties2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Genres(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIVideoDisplayProperties2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IVideoEffectsStatics[] = L"Windows.Media.IVideoEffectsStatics";
typedef struct __x_ABI_CWindows_CMedia_CIVideoEffectsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VideoStabilization )(
        __x_ABI_CWindows_CMedia_CIVideoEffectsStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIVideoEffectsStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CIVideoEffectsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIVideoEffectsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VideoStabilization(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIVideoEffectsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IVideoFrame[] = L"Windows.Media.IVideoFrame";
typedef struct __x_ABI_CWindows_CMedia_CIVideoFrameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrame * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrame * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrame * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrame * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrame * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrame * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SoftwareBitmap )(
        __x_ABI_CWindows_CMedia_CIVideoFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CopyToAsync )(
        __x_ABI_CWindows_CMedia_CIVideoFrame * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CIVideoFrame * frame,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Direct3DSurface )(
        __x_ABI_CWindows_CMedia_CIVideoFrame * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIVideoFrameVtbl;
interface __x_ABI_CWindows_CMedia_CIVideoFrame
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIVideoFrameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SoftwareBitmap(This,value) )
    ( (This)->lpVtbl->CopyToAsync(This,frame,value) )
    ( (This)->lpVtbl->get_Direct3DSurface(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIVideoFrame;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IVideoFrame2[] = L"Windows.Media.IVideoFrame2";
typedef struct __x_ABI_CWindows_CMedia_CIVideoFrame2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrame2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrame2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrame2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrame2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrame2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrame2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CopyToWithBoundsAsync )(
        __x_ABI_CWindows_CMedia_CIVideoFrame2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CIVideoFrame * frame,
                  __RPC__in_opt __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds * sourceBounds,
                  __RPC__in_opt __FIReference_1_Windows__CGraphics__CImaging__CBitmapBounds * destinationBounds,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIVideoFrame2Vtbl;
interface __x_ABI_CWindows_CMedia_CIVideoFrame2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIVideoFrame2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CopyToWithBoundsAsync(This,frame,sourceBounds,destinationBounds,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIVideoFrame2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IVideoFrameFactory[] = L"Windows.Media.IVideoFrameFactory";
typedef struct __x_ABI_CWindows_CMedia_CIVideoFrameFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrameFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrameFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrameFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrameFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrameFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrameFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CIVideoFrameFactory * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat format,
                  INT32 width,
                  INT32 height,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithAlpha )(
        __x_ABI_CWindows_CMedia_CIVideoFrameFactory * This,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapPixelFormat format,
                  INT32 width,
                  INT32 height,
                  __x_ABI_CWindows_CGraphics_CImaging_CBitmapAlphaMode alpha,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIVideoFrameFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CIVideoFrameFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIVideoFrameFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,format,width,height,value) )
    ( (This)->lpVtbl->CreateWithAlpha(This,format,width,height,alpha,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIVideoFrameFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_IVideoFrameStatics[] = L"Windows.Media.IVideoFrameStatics";
typedef struct __x_ABI_CWindows_CMedia_CIVideoFrameStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrameStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrameStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrameStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrameStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrameStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CIVideoFrameStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateAsDirect3D11SurfaceBacked )(
        __x_ABI_CWindows_CMedia_CIVideoFrameStatics * This,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat format,
                  INT32 width,
                  INT32 height,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateAsDirect3D11SurfaceBackedWithDevice )(
        __x_ABI_CWindows_CMedia_CIVideoFrameStatics * This,
                  __x_ABI_CWindows_CGraphics_CDirectX_CDirectXPixelFormat format,
                  INT32 width,
                  INT32 height,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * device,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithSoftwareBitmap )(
        __x_ABI_CWindows_CMedia_CIVideoFrameStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CImaging_CISoftwareBitmap * bitmap,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithDirect3D11Surface )(
        __x_ABI_CWindows_CMedia_CIVideoFrameStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * surface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CIVideoFrameStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CIVideoFrameStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CIVideoFrameStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAsDirect3D11SurfaceBacked(This,format,width,height,result) )
    ( (This)->lpVtbl->CreateAsDirect3D11SurfaceBackedWithDevice(This,format,width,height,device,result) )
    ( (This)->lpVtbl->CreateWithSoftwareBitmap(This,bitmap,result) )
    ( (This)->lpVtbl->CreateWithDirect3D11Surface(This,surface,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CIVideoFrameStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AudioBuffer[] = L"Windows.Media.AudioBuffer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AudioFrame[] = L"Windows.Media.AudioFrame";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_AutoRepeatModeChangeRequestedEventArgs[] = L"Windows.Media.AutoRepeatModeChangeRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_ImageDisplayProperties[] = L"Windows.Media.ImageDisplayProperties";
DEPRECATED("MediaControl may be altered or unavailable for releases after Windows 8.1. Instead, use SystemMediaTransportControls.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaControl[] = L"Windows.Media.MediaControl";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaExtensionManager[] = L"Windows.Media.MediaExtensionManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaMarkerTypes[] = L"Windows.Media.MediaMarkerTypes";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaProcessingTriggerDetails[] = L"Windows.Media.MediaProcessingTriggerDetails";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaTimelineController[] = L"Windows.Media.MediaTimelineController";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MediaTimelineControllerFailedEventArgs[] = L"Windows.Media.MediaTimelineControllerFailedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_MusicDisplayProperties[] = L"Windows.Media.MusicDisplayProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlaybackPositionChangeRequestedEventArgs[] = L"Windows.Media.PlaybackPositionChangeRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_PlaybackRateChangeRequestedEventArgs[] = L"Windows.Media.PlaybackRateChangeRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_ShuffleEnabledChangeRequestedEventArgs[] = L"Windows.Media.ShuffleEnabledChangeRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SystemMediaTransportControls[] = L"Windows.Media.SystemMediaTransportControls";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SystemMediaTransportControlsButtonPressedEventArgs[] = L"Windows.Media.SystemMediaTransportControlsButtonPressedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SystemMediaTransportControlsDisplayUpdater[] = L"Windows.Media.SystemMediaTransportControlsDisplayUpdater";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SystemMediaTransportControlsPropertyChangedEventArgs[] = L"Windows.Media.SystemMediaTransportControlsPropertyChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_SystemMediaTransportControlsTimelineProperties[] = L"Windows.Media.SystemMediaTransportControlsTimelineProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_VideoDisplayProperties[] = L"Windows.Media.VideoDisplayProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_VideoEffects[] = L"Windows.Media.VideoEffects";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_VideoFrame[] = L"Windows.Media.VideoFrame";
       
       
#pragma clang diagnostic pop
