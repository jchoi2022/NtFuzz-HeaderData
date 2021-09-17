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
#include "Windows.Devices.Enumeration.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Graphics.DirectX.Direct3D11.h"
#include "Windows.Media.h"
#include "Windows.Media.Audio.h"
#include "Windows.Media.Casting.h"
#include "Windows.Media.Core.h"
#include "Windows.Media.MediaProperties.h"
#include "Windows.Media.Protection.h"
#include "Windows.Storage.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.Composition.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs2 __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs2;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakEndedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakEndedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakFactory __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakFactory;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSeekedOverEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSeekedOverEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSkippedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSkippedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakStartedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakStartedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaEnginePlaybackSource __x_ABI_CWindows_CMedia_CPlayback_CIMediaEnginePlaybackSource;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerFastForwardReceivedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerFastForwardReceivedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerNextReceivedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerNextReceivedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPauseReceivedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPauseReceivedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPlayReceivedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPlayReceivedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPositionReceivedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPositionReceivedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPreviousReceivedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPreviousReceivedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRateReceivedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRateReceivedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRewindReceivedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRewindReceivedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerShuffleReceivedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerShuffleReceivedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2 __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem3 __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem3;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemError __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemError;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory2 __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory2;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFailedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFailedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemOpenedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemOpenedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemStatics __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemStatics;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2 __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList3 __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList3;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession3 __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession3;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionBufferingStartedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionBufferingStartedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionOutputDegradationPolicyState __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionOutputDegradationPolicyState;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSource __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSource;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackTimedMetadataTrackList __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackTimedMetadataTrackList;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer2 __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer2;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer4 __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer4;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5 __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer6 __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer6;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer7 __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer7;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerDataReceivedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerDataReceivedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects2 __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects2;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerFailedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerFailedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerRateChangedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerRateChangedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource2 __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource2;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSurface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSurface;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerFactory __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerFactory;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerReachedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerReachedEventArgs;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerSequence __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerSequence;
typedef interface __x_ABI_CWindows_CMedia_CPlayback_CITimedMetadataPresentationModeChangedEventArgs __x_ABI_CWindows_CMedia_CPlayback_CITimedMetadataPresentationModeChangedEventArgs;
typedef interface __FIIterator_1_Windows__CMedia__CPlayback__CMediaBreak __FIIterator_1_Windows__CMedia__CPlayback__CMediaBreak;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CPlayback__CMediaBreak;
typedef struct __FIIterator_1_Windows__CMedia__CPlayback__CMediaBreakVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaBreak * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaBreak * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaBreak * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaBreak * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaBreak * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaBreak * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaBreak * This, __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaBreak * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaBreak * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaBreak * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CPlayback__CMediaBreakVtbl;
interface __FIIterator_1_Windows__CMedia__CPlayback__CMediaBreak
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CPlayback__CMediaBreakVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CPlayback__CMediaBreak __FIIterable_1_Windows__CMedia__CPlayback__CMediaBreak;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CPlayback__CMediaBreak;
typedef struct __FIIterable_1_Windows__CMedia__CPlayback__CMediaBreakVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CMediaBreak * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CMediaBreak * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CMediaBreak * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CMediaBreak * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CMediaBreak * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CMediaBreak * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CMediaBreak * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CPlayback__CMediaBreak **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CPlayback__CMediaBreakVtbl;
interface __FIIterable_1_Windows__CMedia__CPlayback__CMediaBreak
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CPlayback__CMediaBreakVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CPlayback__CMediaPlaybackItem __FIIterator_1_Windows__CMedia__CPlayback__CMediaPlaybackItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CPlayback__CMediaPlaybackItem;
typedef struct __FIIterator_1_Windows__CMedia__CPlayback__CMediaPlaybackItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This, __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CPlayback__CMediaPlaybackItemVtbl;
interface __FIIterator_1_Windows__CMedia__CPlayback__CMediaPlaybackItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CPlayback__CMediaPlaybackItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CPlayback__CMediaPlaybackItem __FIIterable_1_Windows__CMedia__CPlayback__CMediaPlaybackItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CPlayback__CMediaPlaybackItem;
typedef struct __FIIterable_1_Windows__CMedia__CPlayback__CMediaPlaybackItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CPlayback__CMediaPlaybackItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CPlayback__CMediaPlaybackItemVtbl;
interface __FIIterable_1_Windows__CMedia__CPlayback__CMediaPlaybackItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CPlayback__CMediaPlaybackItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker __FIIterator_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker;
typedef struct __FIIterator_1_Windows__CMedia__CPlayback__CPlaybackMediaMarkerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker * This, __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CPlayback__CPlaybackMediaMarkerVtbl;
interface __FIIterator_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CPlayback__CPlaybackMediaMarkerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker __FIIterable_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker;
typedef struct __FIIterable_1_Windows__CMedia__CPlayback__CPlaybackMediaMarkerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CPlayback__CPlaybackMediaMarkerVtbl;
interface __FIIterable_1_Windows__CMedia__CPlayback__CPlaybackMediaMarker
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CPlayback__CPlaybackMediaMarkerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItem __FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItem;
typedef struct __FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                       __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItemVtbl;
interface __FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItemVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem;
typedef struct __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItem **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This, __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItemVtbl;
interface __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItemVtbl *lpVtbl;
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
typedef interface __FVectorChangedEventHandler_1_Windows__CMedia__CPlayback__CMediaPlaybackItem __FVectorChangedEventHandler_1_Windows__CMedia__CPlayback__CMediaPlaybackItem;
EXTERN_C const IID IID___FVectorChangedEventHandler_1_Windows__CMedia__CPlayback__CMediaPlaybackItem;
typedef interface __FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem __FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem;
typedef struct __FVectorChangedEventHandler_1_Windows__CMedia__CPlayback__CMediaPlaybackItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FVectorChangedEventHandler_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FVectorChangedEventHandler_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FVectorChangedEventHandler_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FVectorChangedEventHandler_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                   __RPC__in_opt __FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem *sender,
                   __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs *e);
    END_INTERFACE
} __FVectorChangedEventHandler_1_Windows__CMedia__CPlayback__CMediaPlaybackItemVtbl;
interface __FVectorChangedEventHandler_1_Windows__CMedia__CPlayback__CMediaPlaybackItem
{
    CONST_VTBL struct __FVectorChangedEventHandler_1_Windows__CMedia__CPlayback__CMediaPlaybackItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem __FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem;
EXTERN_C const IID IID___FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem;
typedef struct __FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *add_VectorChanged )(__RPC__in __FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This,
                   __RPC__in_opt __FVectorChangedEventHandler_1_Windows__CMedia__CPlayback__CMediaPlaybackItem *handler,
                            __RPC__out EventRegistrationToken *token);
    HRESULT ( STDMETHODCALLTYPE *remove_VectorChanged )(__RPC__in __FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * This, EventRegistrationToken token);
    END_INTERFACE
} __FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItemVtbl;
interface __FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem
{
    CONST_VTBL struct __FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> add_VectorChanged(This,handler,token) )
    ( (This)->lpVtbl -> remove_VectorChanged(This,token) )
typedef interface __FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreak __FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreak;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreak;
typedef struct __FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreakVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreak * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreak * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreak * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreak * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreak * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreak * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreak * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreak * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreak * This,
                       __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreak * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreakVtbl;
interface __FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreak
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreakVtbl *lpVtbl;
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
typedef interface __FIEventHandler_1_Windows__CMedia__CPlayback__CMediaPlayerDataReceivedEventArgs __FIEventHandler_1_Windows__CMedia__CPlayback__CMediaPlayerDataReceivedEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CMedia__CPlayback__CMediaPlayerDataReceivedEventArgs;
typedef struct __FIEventHandler_1_Windows__CMedia__CPlayback__CMediaPlayerDataReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CMedia__CPlayback__CMediaPlayerDataReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CMedia__CPlayback__CMediaPlayerDataReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CMedia__CPlayback__CMediaPlayerDataReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CMedia__CPlayback__CMediaPlayerDataReceivedEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerDataReceivedEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CMedia__CPlayback__CMediaPlayerDataReceivedEventArgsVtbl;
interface __FIEventHandler_1_Windows__CMedia__CPlayback__CMediaPlayerDataReceivedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CMedia__CPlayback__CMediaPlayerDataReceivedEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakEndedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakEndedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakEndedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakEndedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakEndedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakEndedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakEndedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakEndedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakEndedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakEndedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakEndedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakEndedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSeekedOverEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSeekedOverEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSeekedOverEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSeekedOverEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSeekedOverEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSeekedOverEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSeekedOverEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSeekedOverEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSeekedOverEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSeekedOverEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSeekedOverEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSeekedOverEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSkippedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSkippedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSkippedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSkippedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSkippedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSkippedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSkippedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSkippedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSkippedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSkippedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSkippedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSkippedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakStartedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakStartedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakStartedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakStartedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakStartedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakStartedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakStartedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakStartedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakStartedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakStartedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakSchedule_IInspectable __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakSchedule_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakSchedule_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakSchedule_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakSchedule_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakSchedule_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakSchedule_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakSchedule_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakSchedule_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakSchedule_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakSchedule_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerFastForwardReceivedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerFastForwardReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerFastForwardReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerFastForwardReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerFastForwardReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerFastForwardReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerFastForwardReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerFastForwardReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerFastForwardReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerFastForwardReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerFastForwardReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerFastForwardReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerNextReceivedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerNextReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerNextReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerNextReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerNextReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerNextReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerNextReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerNextReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerNextReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerNextReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerNextReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerNextReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPauseReceivedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPauseReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPauseReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPauseReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPauseReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPauseReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPauseReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPauseReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPauseReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPauseReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPauseReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPauseReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPlayReceivedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPlayReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPlayReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPlayReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPlayReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPlayReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPlayReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPlayReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPlayReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPlayReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPlayReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPlayReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPositionReceivedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPositionReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPositionReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPositionReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPositionReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPositionReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPositionReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPositionReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPositionReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPositionReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPositionReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPositionReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPreviousReceivedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPreviousReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPreviousReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPreviousReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPreviousReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPreviousReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPreviousReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPreviousReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPreviousReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPreviousReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPreviousReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPreviousReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRateReceivedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRateReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRateReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRateReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRateReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRateReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRateReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRateReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRateReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRateReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRateReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRateReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRewindReceivedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRewindReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRewindReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRewindReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRewindReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRewindReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRewindReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRewindReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRewindReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRewindReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRewindReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRewindReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerShuffleReceivedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerShuffleReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerShuffleReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerShuffleReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerShuffleReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerShuffleReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerShuffleReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerShuffleReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerShuffleReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerShuffleReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerShuffleReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerShuffleReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerCommandBehavior_IInspectable __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerCommandBehavior_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerCommandBehavior_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerCommandBehavior_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerCommandBehavior_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerCommandBehavior_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerCommandBehavior_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerCommandBehavior_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerCommandBehavior_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerCommandBehavior_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerCommandBehavior_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CCurrentMediaPlaybackItemChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CCurrentMediaPlaybackItemChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CCurrentMediaPlaybackItemChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CCurrentMediaPlaybackItemChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CCurrentMediaPlaybackItemChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CCurrentMediaPlaybackItemChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CCurrentMediaPlaybackItemChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CCurrentMediaPlaybackItemChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CCurrentMediaPlaybackItemChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CCurrentMediaPlaybackItemChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CCurrentMediaPlaybackItemChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemFailedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemFailedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemFailedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemFailedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemFailedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemFailedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemFailedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFailedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemFailedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemFailedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemFailedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemOpenedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemOpenedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemOpenedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemOpenedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemOpenedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemOpenedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemOpenedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemOpenedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemOpenedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemOpenedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemOpenedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemOpenedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack;
typedef interface __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CTimedMetadataTrack **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrack
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                       __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrackVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackTimedMetadataTrackList_Windows__CMedia__CPlayback__CTimedMetadataPresentationModeChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackTimedMetadataTrackList_Windows__CMedia__CPlayback__CTimedMetadataPresentationModeChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackTimedMetadataTrackList_Windows__CMedia__CPlayback__CTimedMetadataPresentationModeChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackTimedMetadataTrackList_Windows__CMedia__CPlayback__CTimedMetadataPresentationModeChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackTimedMetadataTrackList_Windows__CMedia__CPlayback__CTimedMetadataPresentationModeChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackTimedMetadataTrackList_Windows__CMedia__CPlayback__CTimedMetadataPresentationModeChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackTimedMetadataTrackList_Windows__CMedia__CPlayback__CTimedMetadataPresentationModeChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackTimedMetadataTrackList_Windows__CMedia__CPlayback__CTimedMetadataPresentationModeChangedEventArgs * This, __RPC__in_opt __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CITimedMetadataPresentationModeChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackTimedMetadataTrackList_Windows__CMedia__CPlayback__CTimedMetadataPresentationModeChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackTimedMetadataTrackList_Windows__CMedia__CPlayback__CTimedMetadataPresentationModeChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackTimedMetadataTrackList_Windows__CMedia__CPlayback__CTimedMetadataPresentationModeChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerFailedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerFailedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerFailedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerFailedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerFailedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerFailedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerFailedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerFailedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerFailedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerFailedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerFailedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerRateChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerRateChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerRateChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerRateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerRateChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerRateChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerRateChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerRateChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerRateChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerRateChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerRateChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerRateChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CPlaybackMediaMarkerReachedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CPlaybackMediaMarkerReachedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CPlaybackMediaMarkerReachedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CPlaybackMediaMarkerReachedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CPlaybackMediaMarkerReachedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CPlaybackMediaMarkerReachedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CPlaybackMediaMarkerReachedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CPlaybackMediaMarkerReachedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * sender, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerReachedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CPlaybackMediaMarkerReachedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CPlaybackMediaMarkerReachedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CPlaybackMediaMarkerReachedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackItem___F__CIVectorChangedEventArgs __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackItem___F__CIVectorChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackItem___F__CIVectorChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackItem___F__CIVectorChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackItem___F__CIVectorChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackItem___F__CIVectorChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackItem___F__CIVectorChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackItem___F__CIVectorChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * sender, __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIVectorChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackItem___F__CIVectorChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackItem___F__CIVectorChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackItem___F__CIVectorChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaTrack __x_ABI_CWindows_CMedia_CCore_CIMediaTrack;
typedef interface __FIIterator_1_Windows__CMedia__CCore__CAudioTrack __FIIterator_1_Windows__CMedia__CCore__CAudioTrack;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CAudioTrack;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CAudioTrack * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CAudioTrackVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CAudioTrack
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CAudioTrackVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CAudioTrack __FIIterable_1_Windows__CMedia__CCore__CAudioTrack;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CAudioTrack;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioTrack * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioTrack * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioTrack * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CAudioTrack * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CAudioTrack **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CAudioTrackVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CAudioTrack
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CAudioTrackVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CAudioTrack;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This,
                       __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CAudioTrackVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CAudioTrackVtbl *lpVtbl;
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
typedef interface __FIIterator_1_Windows__CMedia__CCore__CVideoTrack __FIIterator_1_Windows__CMedia__CCore__CVideoTrack;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CCore__CVideoTrack;
typedef struct __FIIterator_1_Windows__CMedia__CCore__CVideoTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This, __RPC__out __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CCore__CVideoTrack * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CCore__CVideoTrackVtbl;
interface __FIIterator_1_Windows__CMedia__CCore__CVideoTrack
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CCore__CVideoTrackVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CCore__CVideoTrack __FIIterable_1_Windows__CMedia__CCore__CVideoTrack;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CCore__CVideoTrack;
typedef struct __FIIterable_1_Windows__CMedia__CCore__CVideoTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoTrack * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoTrack * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoTrack * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CCore__CVideoTrack * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CCore__CVideoTrack **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CCore__CVideoTrackVtbl;
interface __FIIterable_1_Windows__CMedia__CCore__CVideoTrack
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CCore__CVideoTrackVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CCore__CVideoTrack;
typedef struct __FIVectorView_1_Windows__CMedia__CCore__CVideoTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This,
                       __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CCore_CIMediaTrack * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CCore__CVideoTrackVtbl;
interface __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CCore__CVideoTrackVtbl *lpVtbl;
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
typedef interface __FIReference_1_UINT32 __FIReference_1_UINT32;
EXTERN_C const IID IID___FIReference_1_UINT32;
typedef struct __FIReference_1_UINT32Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_UINT32 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_UINT32 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_UINT32 * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_UINT32 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_UINT32 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_UINT32 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_UINT32 * This, __RPC__out unsigned int *value);
    END_INTERFACE
} __FIReference_1_UINT32Vtbl;
interface __FIReference_1_UINT32
{
    CONST_VTBL struct __FIReference_1_UINT32Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;
typedef interface __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor;
typedef interface __x_ABI_CWindows_CMedia_CCasting_CICastingSource __x_ABI_CWindows_CMedia_CCasting_CICastingSource;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource __x_ABI_CWindows_CMedia_CCore_CIMediaSource;
typedef interface __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackList __x_ABI_CWindows_CMedia_CCore_CISingleSelectMediaTrackList;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 __x_ABI_CWindows_CMedia_CCore_CIMediaSource2;
typedef enum __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode;
typedef enum __x_ABI_CWindows_CMedia_CMediaPlaybackType __x_ABI_CWindows_CMedia_CMediaPlaybackType;
typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaRotation __x_ABI_CWindows_CMedia_CMediaProperties_CMediaRotation;
typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CSphericalVideoFrameFormat __x_ABI_CWindows_CMedia_CMediaProperties_CSphericalVideoFrameFormat;
typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CStereoscopicVideoPackingMode __x_ABI_CWindows_CMedia_CMediaProperties_CStereoscopicVideoPackingMode;
typedef struct __x_ABI_CWindows_CMedia_CMediaTimeRange __x_ABI_CWindows_CMedia_CMediaTimeRange;
typedef interface __x_ABI_CWindows_CMedia_CIMediaTimelineController __x_ABI_CWindows_CMedia_CIMediaTimelineController;
typedef interface __x_ABI_CWindows_CMedia_CIMusicDisplayProperties __x_ABI_CWindows_CMedia_CIMusicDisplayProperties;
typedef interface __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager;
typedef interface __x_ABI_CWindows_CMedia_CISystemMediaTransportControls __x_ABI_CWindows_CMedia_CISystemMediaTransportControls;
typedef interface __x_ABI_CWindows_CMedia_CIVideoDisplayProperties __x_ABI_CWindows_CMedia_CIVideoDisplayProperties;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositor __x_ABI_CWindows_CUI_CComposition_CICompositor;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionSurface __x_ABI_CWindows_CUI_CComposition_CICompositionSurface;
typedef enum __x_ABI_CWindows_CMedia_CPlayback_CAutoLoadedDisplayPropertyKind __x_ABI_CWindows_CMedia_CPlayback_CAutoLoadedDisplayPropertyKind;
typedef enum __x_ABI_CWindows_CMedia_CPlayback_CFailedMediaStreamKind __x_ABI_CWindows_CMedia_CPlayback_CFailedMediaStreamKind;
typedef enum __x_ABI_CWindows_CMedia_CPlayback_CMediaBreakInsertionMethod __x_ABI_CWindows_CMedia_CPlayback_CMediaBreakInsertionMethod;
typedef enum __x_ABI_CWindows_CMedia_CPlayback_CMediaCommandEnablingRule __x_ABI_CWindows_CMedia_CPlayback_CMediaCommandEnablingRule;
typedef enum __x_ABI_CWindows_CMedia_CPlayback_CMediaPlaybackItemChangedReason __x_ABI_CWindows_CMedia_CPlayback_CMediaPlaybackItemChangedReason;
typedef enum __x_ABI_CWindows_CMedia_CPlayback_CMediaPlaybackItemErrorCode __x_ABI_CWindows_CMedia_CPlayback_CMediaPlaybackItemErrorCode;
typedef enum __x_ABI_CWindows_CMedia_CPlayback_CMediaPlaybackSessionVideoConstrictionReason __x_ABI_CWindows_CMedia_CPlayback_CMediaPlaybackSessionVideoConstrictionReason;
typedef enum __x_ABI_CWindows_CMedia_CPlayback_CMediaPlaybackState __x_ABI_CWindows_CMedia_CPlayback_CMediaPlaybackState;
typedef enum __x_ABI_CWindows_CMedia_CPlayback_CMediaPlayerAudioCategory __x_ABI_CWindows_CMedia_CPlayback_CMediaPlayerAudioCategory;
typedef enum __x_ABI_CWindows_CMedia_CPlayback_CMediaPlayerAudioDeviceType __x_ABI_CWindows_CMedia_CPlayback_CMediaPlayerAudioDeviceType;
typedef enum __x_ABI_CWindows_CMedia_CPlayback_CMediaPlayerError __x_ABI_CWindows_CMedia_CPlayback_CMediaPlayerError;
typedef enum __x_ABI_CWindows_CMedia_CPlayback_CMediaPlayerState __x_ABI_CWindows_CMedia_CPlayback_CMediaPlayerState;
typedef enum __x_ABI_CWindows_CMedia_CPlayback_CSphericalVideoProjectionMode __x_ABI_CWindows_CMedia_CPlayback_CSphericalVideoProjectionMode;
typedef enum __x_ABI_CWindows_CMedia_CPlayback_CStereoscopicVideoRenderMode __x_ABI_CWindows_CMedia_CPlayback_CStereoscopicVideoRenderMode;
typedef enum __x_ABI_CWindows_CMedia_CPlayback_CTimedMetadataTrackPresentationMode __x_ABI_CWindows_CMedia_CPlayback_CTimedMetadataTrackPresentationMode;
enum __x_ABI_CWindows_CMedia_CPlayback_CAutoLoadedDisplayPropertyKind
{
    AutoLoadedDisplayPropertyKind_None = 0,
    AutoLoadedDisplayPropertyKind_MusicOrVideo = 1,
    AutoLoadedDisplayPropertyKind_Music = 2,
    AutoLoadedDisplayPropertyKind_Video = 3,
};
enum __x_ABI_CWindows_CMedia_CPlayback_CFailedMediaStreamKind
{
    FailedMediaStreamKind_Unknown = 0,
    FailedMediaStreamKind_Audio = 1,
    FailedMediaStreamKind_Video = 2,
};
enum __x_ABI_CWindows_CMedia_CPlayback_CMediaBreakInsertionMethod
{
    MediaBreakInsertionMethod_Interrupt = 0,
    MediaBreakInsertionMethod_Replace = 1,
};
enum __x_ABI_CWindows_CMedia_CPlayback_CMediaCommandEnablingRule
{
    MediaCommandEnablingRule_Auto = 0,
    MediaCommandEnablingRule_Always = 1,
    MediaCommandEnablingRule_Never = 2,
};
enum __x_ABI_CWindows_CMedia_CPlayback_CMediaPlaybackItemChangedReason
{
    MediaPlaybackItemChangedReason_InitialItem = 0,
    MediaPlaybackItemChangedReason_EndOfStream = 1,
    MediaPlaybackItemChangedReason_Error = 2,
    MediaPlaybackItemChangedReason_AppRequested = 3,
};
enum __x_ABI_CWindows_CMedia_CPlayback_CMediaPlaybackItemErrorCode
{
    MediaPlaybackItemErrorCode_None = 0,
    MediaPlaybackItemErrorCode_Aborted = 1,
    MediaPlaybackItemErrorCode_NetworkError = 2,
    MediaPlaybackItemErrorCode_DecodeError = 3,
    MediaPlaybackItemErrorCode_SourceNotSupportedError = 4,
    MediaPlaybackItemErrorCode_EncryptionError = 5,
};
enum __x_ABI_CWindows_CMedia_CPlayback_CMediaPlaybackSessionVideoConstrictionReason
{
    MediaPlaybackSessionVideoConstrictionReason_None = 0,
    MediaPlaybackSessionVideoConstrictionReason_VirtualMachine = 1,
    MediaPlaybackSessionVideoConstrictionReason_UnsupportedDisplayAdapter = 2,
    MediaPlaybackSessionVideoConstrictionReason_UnsignedDriver = 3,
    MediaPlaybackSessionVideoConstrictionReason_FrameServerEnabled = 4,
    MediaPlaybackSessionVideoConstrictionReason_OutputProtectionFailed = 5,
    MediaPlaybackSessionVideoConstrictionReason_Unknown = 6,
};
enum __x_ABI_CWindows_CMedia_CPlayback_CMediaPlaybackState
{
    MediaPlaybackState_None = 0,
    MediaPlaybackState_Opening = 1,
    MediaPlaybackState_Buffering = 2,
    MediaPlaybackState_Playing = 3,
    MediaPlaybackState_Paused = 4,
};
enum __x_ABI_CWindows_CMedia_CPlayback_CMediaPlayerAudioCategory
{
    MediaPlayerAudioCategory_Other = 0,
    MediaPlayerAudioCategory_Communications = 3,
    MediaPlayerAudioCategory_Alerts = 4,
    MediaPlayerAudioCategory_SoundEffects = 5,
    MediaPlayerAudioCategory_GameEffects = 6,
    MediaPlayerAudioCategory_GameMedia = 7,
    MediaPlayerAudioCategory_GameChat = 8,
    MediaPlayerAudioCategory_Speech = 9,
    MediaPlayerAudioCategory_Movie = 10,
    MediaPlayerAudioCategory_Media = 11,
};
enum __x_ABI_CWindows_CMedia_CPlayback_CMediaPlayerAudioDeviceType
{
    MediaPlayerAudioDeviceType_Console = 0,
    MediaPlayerAudioDeviceType_Multimedia = 1,
    MediaPlayerAudioDeviceType_Communications = 2,
};
enum __x_ABI_CWindows_CMedia_CPlayback_CMediaPlayerError
{
    MediaPlayerError_Unknown = 0,
    MediaPlayerError_Aborted = 1,
    MediaPlayerError_NetworkError = 2,
    MediaPlayerError_DecodingError = 3,
    MediaPlayerError_SourceNotSupported = 4,
};
enum
DEPRECATED("Use MediaPlaybackState instead of MediaPlayerState.  For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CPlayback_CMediaPlayerState
{
    MediaPlayerState_Closed = 0,
    MediaPlayerState_Opening = 1,
    MediaPlayerState_Buffering = 2,
    MediaPlayerState_Playing = 3,
    MediaPlayerState_Paused = 4,
    MediaPlayerState_Stopped = 5,
};
enum __x_ABI_CWindows_CMedia_CPlayback_CSphericalVideoProjectionMode
{
    SphericalVideoProjectionMode_Spherical = 0,
    SphericalVideoProjectionMode_Flat = 1,
};
enum __x_ABI_CWindows_CMedia_CPlayback_CStereoscopicVideoRenderMode
{
    StereoscopicVideoRenderMode_Mono = 0,
    StereoscopicVideoRenderMode_Stereo = 1,
};
enum __x_ABI_CWindows_CMedia_CPlayback_CTimedMetadataTrackPresentationMode
{
    TimedMetadataTrackPresentationMode_Disabled = 0,
    TimedMetadataTrackPresentationMode_Hidden = 1,
    TimedMetadataTrackPresentationMode_ApplicationPresented = 2,
    TimedMetadataTrackPresentationMode_PlatformPresented = 3,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IBackgroundMediaPlayerStatics[] = L"Windows.Media.Playback.IBackgroundMediaPlayerStatics";
typedef struct
DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Current )(
        __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * * player
        );
    DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_MessageReceivedFromBackground )(
        __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CMedia__CPlayback__CMediaPlayerDataReceivedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_MessageReceivedFromBackground )(
        __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics * This,
                  EventRegistrationToken token
        );
    DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_MessageReceivedFromForeground )(
        __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CMedia__CPlayback__CMediaPlayerDataReceivedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_MessageReceivedFromForeground )(
        __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics * This,
                  EventRegistrationToken token
        );
    DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *SendMessageToBackground )(
        __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * value
        );
    DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *SendMessageToForeground )(
        __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * value
        );
    DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *IsMediaPlaying )(
        __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics * This,
                           __RPC__out boolean * isMediaPlaying
        );
    DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *Shutdown )(
        __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
    ( (This)->lpVtbl->get_Current(This,player) )
DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
    ( (This)->lpVtbl->add_MessageReceivedFromBackground(This,value,token) )
DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
    ( (This)->lpVtbl->remove_MessageReceivedFromBackground(This,token) )
DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
    ( (This)->lpVtbl->add_MessageReceivedFromForeground(This,value,token) )
DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
    ( (This)->lpVtbl->remove_MessageReceivedFromForeground(This,token) )
DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
    ( (This)->lpVtbl->SendMessageToBackground(This,value) )
DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
    ( (This)->lpVtbl->SendMessageToForeground(This,value) )
DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
    ( (This)->lpVtbl->IsMediaPlaying(This,isMediaPlaying) )
DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
    ( (This)->lpVtbl->Shutdown(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIBackgroundMediaPlayerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_ICurrentMediaPlaybackItemChangedEventArgs[] = L"Windows.Media.Playback.ICurrentMediaPlaybackItemChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NewItem )(
        __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OldItem )(
        __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NewItem(This,value) )
    ( (This)->lpVtbl->get_OldItem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_ICurrentMediaPlaybackItemChangedEventArgs2[] = L"Windows.Media.Playback.ICurrentMediaPlaybackItemChangedEventArgs2";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Reason )(
        __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CMediaPlaybackItemChangedReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs2Vtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Reason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CICurrentMediaPlaybackItemChangedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaBreak[] = L"Windows.Media.Playback.IMediaBreak";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PlaybackList )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PresentationPosition )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InsertionMethod )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CMediaBreakInsertionMethod * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomProperties )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanStart )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanStart )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PlaybackList(This,value) )
    ( (This)->lpVtbl->get_PresentationPosition(This,value) )
    ( (This)->lpVtbl->get_InsertionMethod(This,value) )
    ( (This)->lpVtbl->get_CustomProperties(This,value) )
    ( (This)->lpVtbl->get_CanStart(This,value) )
    ( (This)->lpVtbl->put_CanStart(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaBreakEndedEventArgs[] = L"Windows.Media.Playback.IMediaBreakEndedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakEndedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakEndedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakEndedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakEndedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakEndedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakEndedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakEndedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MediaBreak )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakEndedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakEndedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakEndedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakEndedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MediaBreak(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakEndedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaBreakFactory[] = L"Windows.Media.Playback.IMediaBreakFactory";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakFactory * This,
                  __x_ABI_CWindows_CMedia_CPlayback_CMediaBreakInsertionMethod insertionMethod,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithPresentationPosition )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakFactory * This,
                  __x_ABI_CWindows_CMedia_CPlayback_CMediaBreakInsertionMethod insertionMethod,
                  __x_ABI_CWindows_CFoundation_CTimeSpan presentationPosition,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,insertionMethod,result) )
    ( (This)->lpVtbl->CreateWithPresentationPosition(This,insertionMethod,presentationPosition,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaBreakManager[] = L"Windows.Media.Playback.IMediaBreakManager";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_BreaksSeekedOver )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSeekedOverEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BreaksSeekedOver )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BreakStarted )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakStartedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BreakStarted )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BreakEnded )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakEndedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BreakEnded )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BreakSkipped )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakManager_Windows__CMedia__CPlayback__CMediaBreakSkippedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BreakSkipped )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentBreak )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaybackSession )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * * value
        );
    HRESULT ( STDMETHODCALLTYPE *PlayBreak )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * value
        );
    HRESULT ( STDMETHODCALLTYPE *SkipCurrentBreak )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManagerVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_BreaksSeekedOver(This,handler,token) )
    ( (This)->lpVtbl->remove_BreaksSeekedOver(This,token) )
    ( (This)->lpVtbl->add_BreakStarted(This,handler,token) )
    ( (This)->lpVtbl->remove_BreakStarted(This,token) )
    ( (This)->lpVtbl->add_BreakEnded(This,handler,token) )
    ( (This)->lpVtbl->remove_BreakEnded(This,token) )
    ( (This)->lpVtbl->add_BreakSkipped(This,handler,token) )
    ( (This)->lpVtbl->remove_BreakSkipped(This,token) )
    ( (This)->lpVtbl->get_CurrentBreak(This,value) )
    ( (This)->lpVtbl->get_PlaybackSession(This,value) )
    ( (This)->lpVtbl->PlayBreak(This,value) )
    ( (This)->lpVtbl->SkipCurrentBreak(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaBreakSchedule[] = L"Windows.Media.Playback.IMediaBreakSchedule";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakScheduleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ScheduleChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaBreakSchedule_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ScheduleChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *InsertMidrollBreak )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * mediaBreak
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveMidrollBreak )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * mediaBreak
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MidrollBreaks )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreak * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PrerollBreak )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PrerollBreak )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PostrollBreak )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PostrollBreak )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaybackItem )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakScheduleVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakScheduleVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ScheduleChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ScheduleChanged(This,token) )
    ( (This)->lpVtbl->InsertMidrollBreak(This,mediaBreak) )
    ( (This)->lpVtbl->RemoveMidrollBreak(This,mediaBreak) )
    ( (This)->lpVtbl->get_MidrollBreaks(This,value) )
    ( (This)->lpVtbl->put_PrerollBreak(This,value) )
    ( (This)->lpVtbl->get_PrerollBreak(This,value) )
    ( (This)->lpVtbl->put_PostrollBreak(This,value) )
    ( (This)->lpVtbl->get_PostrollBreak(This,value) )
    ( (This)->lpVtbl->get_PlaybackItem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaBreakSeekedOverEventArgs[] = L"Windows.Media.Playback.IMediaBreakSeekedOverEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSeekedOverEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSeekedOverEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSeekedOverEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSeekedOverEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSeekedOverEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSeekedOverEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSeekedOverEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SeekedOverBreaks )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSeekedOverEventArgs * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CPlayback__CMediaBreak * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OldPosition )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSeekedOverEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewPosition )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSeekedOverEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSeekedOverEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSeekedOverEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSeekedOverEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SeekedOverBreaks(This,value) )
    ( (This)->lpVtbl->get_OldPosition(This,value) )
    ( (This)->lpVtbl->get_NewPosition(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSeekedOverEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaBreakSkippedEventArgs[] = L"Windows.Media.Playback.IMediaBreakSkippedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSkippedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSkippedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSkippedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSkippedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSkippedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSkippedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSkippedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MediaBreak )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSkippedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSkippedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSkippedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSkippedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MediaBreak(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSkippedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaBreakStartedEventArgs[] = L"Windows.Media.Playback.IMediaBreakStartedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakStartedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakStartedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakStartedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakStartedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakStartedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakStartedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MediaBreak )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakStartedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreak * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakStartedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakStartedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MediaBreak(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakStartedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaEnginePlaybackSource[] = L"Windows.Media.Playback.IMediaEnginePlaybackSource";
typedef struct
DEPRECATED("Use MediaPlayer instead of MediaEngine. For more info, see MSDN.")
__x_ABI_CWindows_CMedia_CPlayback_CIMediaEnginePlaybackSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaEnginePlaybackSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaEnginePlaybackSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaEnginePlaybackSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaEnginePlaybackSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaEnginePlaybackSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaEnginePlaybackSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use MediaPlayer instead of MediaEngine. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_CurrentItem )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaEnginePlaybackSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * value
        );
    DEPRECATED("Use MediaPlayer instead of MediaEngine. For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *SetPlaybackSource )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaEnginePlaybackSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSource * source
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaEnginePlaybackSourceVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaEnginePlaybackSource
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaEnginePlaybackSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use MediaPlayer instead of MediaEngine. For more info, see MSDN.")
    ( (This)->lpVtbl->get_CurrentItem(This,value) )
DEPRECATED("Use MediaPlayer instead of MediaEngine. For more info, see MSDN.")
    ( (This)->lpVtbl->SetPlaybackSource(This,source) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaEnginePlaybackSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaItemDisplayProperties[] = L"Windows.Media.Playback.IMediaItemDisplayProperties";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMediaPlaybackType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Type )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties * This,
                  __x_ABI_CWindows_CMedia_CMediaPlaybackType value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MusicProperties )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIMusicDisplayProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoProperties )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoDisplayProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Thumbnail )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Thumbnail )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * value
        );
    HRESULT ( STDMETHODCALLTYPE *ClearAll )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayPropertiesVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->put_Type(This,value) )
    ( (This)->lpVtbl->get_MusicProperties(This,value) )
    ( (This)->lpVtbl->get_VideoProperties(This,value) )
    ( (This)->lpVtbl->get_Thumbnail(This,value) )
    ( (This)->lpVtbl->put_Thumbnail(This,value) )
    ( (This)->lpVtbl->ClearAll(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackCommandManager[] = L"Windows.Media.Playback.IMediaPlaybackCommandManager";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaPlayer )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlayBehavior )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PauseBehavior )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NextBehavior )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreviousBehavior )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FastForwardBehavior )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RewindBehavior )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShuffleBehavior )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoRepeatModeBehavior )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PositionBehavior )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RateBehavior )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PlayReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPlayReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PlayReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PauseReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPauseReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PauseReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_NextReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerNextReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NextReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PreviousReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPreviousReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PreviousReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_FastForwardReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerFastForwardReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_FastForwardReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RewindReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRewindReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RewindReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ShuffleReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerShuffleReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ShuffleReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AutoRepeatModeReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AutoRepeatModeReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PositionReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerPositionReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PositionReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RateReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManager_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerRateReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RateReceived )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_MediaPlayer(This,value) )
    ( (This)->lpVtbl->get_PlayBehavior(This,value) )
    ( (This)->lpVtbl->get_PauseBehavior(This,value) )
    ( (This)->lpVtbl->get_NextBehavior(This,value) )
    ( (This)->lpVtbl->get_PreviousBehavior(This,value) )
    ( (This)->lpVtbl->get_FastForwardBehavior(This,value) )
    ( (This)->lpVtbl->get_RewindBehavior(This,value) )
    ( (This)->lpVtbl->get_ShuffleBehavior(This,value) )
    ( (This)->lpVtbl->get_AutoRepeatModeBehavior(This,value) )
    ( (This)->lpVtbl->get_PositionBehavior(This,value) )
    ( (This)->lpVtbl->get_RateBehavior(This,value) )
    ( (This)->lpVtbl->add_PlayReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_PlayReceived(This,token) )
    ( (This)->lpVtbl->add_PauseReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_PauseReceived(This,token) )
    ( (This)->lpVtbl->add_NextReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_NextReceived(This,token) )
    ( (This)->lpVtbl->add_PreviousReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_PreviousReceived(This,token) )
    ( (This)->lpVtbl->add_FastForwardReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_FastForwardReceived(This,token) )
    ( (This)->lpVtbl->add_RewindReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_RewindReceived(This,token) )
    ( (This)->lpVtbl->add_ShuffleReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_ShuffleReceived(This,token) )
    ( (This)->lpVtbl->add_AutoRepeatModeReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_AutoRepeatModeReceived(This,token) )
    ( (This)->lpVtbl->add_PositionReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_PositionReceived(This,token) )
    ( (This)->lpVtbl->add_RateReceived(This,handler,token) )
    ( (This)->lpVtbl->remove_RateReceived(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs[] = L"Windows.Media.Playback.IMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoRepeatMode )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMediaPlaybackAutoRepeatMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->get_AutoRepeatMode(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackCommandManagerCommandBehavior[] = L"Windows.Media.Playback.IMediaPlaybackCommandManagerCommandBehavior";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehaviorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CommandManager )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EnablingRule )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CMediaCommandEnablingRule * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EnablingRule )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * This,
                  __x_ABI_CWindows_CMedia_CPlayback_CMediaCommandEnablingRule value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_IsEnabledChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackCommandManagerCommandBehavior_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_IsEnabledChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehaviorVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehaviorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CommandManager(This,value) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_EnablingRule(This,value) )
    ( (This)->lpVtbl->put_EnablingRule(This,value) )
    ( (This)->lpVtbl->add_IsEnabledChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_IsEnabledChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerCommandBehavior;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackCommandManagerFastForwardReceivedEventArgs[] = L"Windows.Media.Playback.IMediaPlaybackCommandManagerFastForwardReceivedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerFastForwardReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerFastForwardReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerFastForwardReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerFastForwardReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerFastForwardReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerFastForwardReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerFastForwardReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerFastForwardReceivedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerFastForwardReceivedEventArgs * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerFastForwardReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerFastForwardReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerFastForwardReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerFastForwardReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerFastForwardReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackCommandManagerNextReceivedEventArgs[] = L"Windows.Media.Playback.IMediaPlaybackCommandManagerNextReceivedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerNextReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerNextReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerNextReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerNextReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerNextReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerNextReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerNextReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerNextReceivedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerNextReceivedEventArgs * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerNextReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerNextReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerNextReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerNextReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerNextReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackCommandManagerPauseReceivedEventArgs[] = L"Windows.Media.Playback.IMediaPlaybackCommandManagerPauseReceivedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPauseReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPauseReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPauseReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPauseReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPauseReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPauseReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPauseReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPauseReceivedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPauseReceivedEventArgs * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPauseReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPauseReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPauseReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPauseReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPauseReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackCommandManagerPlayReceivedEventArgs[] = L"Windows.Media.Playback.IMediaPlaybackCommandManagerPlayReceivedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPlayReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPlayReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPlayReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPlayReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPlayReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPlayReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPlayReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPlayReceivedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPlayReceivedEventArgs * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPlayReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPlayReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPlayReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPlayReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPlayReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackCommandManagerPositionReceivedEventArgs[] = L"Windows.Media.Playback.IMediaPlaybackCommandManagerPositionReceivedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPositionReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPositionReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPositionReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPositionReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPositionReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPositionReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPositionReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPositionReceivedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPositionReceivedEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPositionReceivedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPositionReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPositionReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPositionReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPositionReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPositionReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackCommandManagerPreviousReceivedEventArgs[] = L"Windows.Media.Playback.IMediaPlaybackCommandManagerPreviousReceivedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPreviousReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPreviousReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPreviousReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPreviousReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPreviousReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPreviousReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPreviousReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPreviousReceivedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPreviousReceivedEventArgs * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPreviousReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPreviousReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPreviousReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPreviousReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerPreviousReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackCommandManagerRateReceivedEventArgs[] = L"Windows.Media.Playback.IMediaPlaybackCommandManagerRateReceivedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRateReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRateReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRateReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRateReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRateReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRateReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRateReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRateReceivedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRateReceivedEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaybackRate )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRateReceivedEventArgs * This,
                           __RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRateReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRateReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRateReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRateReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->get_PlaybackRate(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRateReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackCommandManagerRewindReceivedEventArgs[] = L"Windows.Media.Playback.IMediaPlaybackCommandManagerRewindReceivedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRewindReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRewindReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRewindReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRewindReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRewindReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRewindReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRewindReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRewindReceivedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRewindReceivedEventArgs * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRewindReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRewindReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRewindReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRewindReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerRewindReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackCommandManagerShuffleReceivedEventArgs[] = L"Windows.Media.Playback.IMediaPlaybackCommandManagerShuffleReceivedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerShuffleReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerShuffleReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerShuffleReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerShuffleReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerShuffleReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerShuffleReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerShuffleReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerShuffleReceivedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerShuffleReceivedEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsShuffleRequested )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerShuffleReceivedEventArgs * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerShuffleReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerShuffleReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerShuffleReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerShuffleReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->get_IsShuffleRequested(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManagerShuffleReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackItem[] = L"Windows.Media.Playback.IMediaPlaybackItem";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_AudioTracksChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackItem___F__CIVectorChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AudioTracksChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_VideoTracksChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackItem___F__CIVectorChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_VideoTracksChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TimedMetadataTracksChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackItem___F__CIVectorChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TimedMetadataTracksChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioTracks )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CAudioTrack * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoTracks )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CVideoTrack * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimedMetadataTracks )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CCore__CTimedMetadataTrack * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_AudioTracksChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_AudioTracksChanged(This,token) )
    ( (This)->lpVtbl->add_VideoTracksChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_VideoTracksChanged(This,token) )
    ( (This)->lpVtbl->add_TimedMetadataTracksChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_TimedMetadataTracksChanged(This,token) )
    ( (This)->lpVtbl->get_Source(This,value) )
    ( (This)->lpVtbl->get_AudioTracks(This,value) )
    ( (This)->lpVtbl->get_VideoTracks(This,value) )
    ( (This)->lpVtbl->get_TimedMetadataTracks(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackItem2[] = L"Windows.Media.Playback.IMediaPlaybackItem2";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_BreakSchedule )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakSchedule * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartTime )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DurationLimit )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanSkip )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanSkip )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2 * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDisplayProperties )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *ApplyDisplayProperties )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaItemDisplayProperties * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2Vtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_BreakSchedule(This,value) )
    ( (This)->lpVtbl->get_StartTime(This,value) )
    ( (This)->lpVtbl->get_DurationLimit(This,value) )
    ( (This)->lpVtbl->get_CanSkip(This,value) )
    ( (This)->lpVtbl->put_CanSkip(This,value) )
    ( (This)->lpVtbl->GetDisplayProperties(This,value) )
    ( (This)->lpVtbl->ApplyDisplayProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackItem3[] = L"Windows.Media.Playback.IMediaPlaybackItem3";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsDisabledInPlaybackList )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsDisabledInPlaybackList )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TotalDownloadProgress )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem3 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoLoadedDisplayProperties )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem3 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CAutoLoadedDisplayPropertyKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutoLoadedDisplayProperties )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem3 * This,
                  __x_ABI_CWindows_CMedia_CPlayback_CAutoLoadedDisplayPropertyKind value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem3Vtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsDisabledInPlaybackList(This,value) )
    ( (This)->lpVtbl->put_IsDisabledInPlaybackList(This,value) )
    ( (This)->lpVtbl->get_TotalDownloadProgress(This,value) )
    ( (This)->lpVtbl->get_AutoLoadedDisplayProperties(This,value) )
    ( (This)->lpVtbl->put_AutoLoadedDisplayProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackItemError[] = L"Windows.Media.Playback.IMediaPlaybackItemError";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemErrorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemError * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemError * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemError * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemError * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemError * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemError * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemError * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CMediaPlaybackItemErrorCode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedError )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemError * This,
                           __RPC__out HRESULT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemErrorVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemError
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemErrorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ErrorCode(This,value) )
    ( (This)->lpVtbl->get_ExtendedError(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemError;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackItemFactory[] = L"Windows.Media.Playback.IMediaPlaybackItemFactory";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * source,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,source,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackItemFactory2[] = L"Windows.Media.Playback.IMediaPlaybackItemFactory2";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithStartTime )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * source,
                  __x_ABI_CWindows_CFoundation_CTimeSpan startTime,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithStartTimeAndDurationLimit )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * source,
                  __x_ABI_CWindows_CFoundation_CTimeSpan startTime,
                  __x_ABI_CWindows_CFoundation_CTimeSpan durationLimit,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory2Vtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithStartTime(This,source,startTime,result) )
    ( (This)->lpVtbl->CreateWithStartTimeAndDurationLimit(This,source,startTime,durationLimit,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFactory2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackItemFailedEventArgs[] = L"Windows.Media.Playback.IMediaPlaybackItemFailedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFailedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFailedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFailedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFailedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFailedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFailedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Item )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFailedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFailedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemError * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFailedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFailedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFailedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Item(This,value) )
    ( (This)->lpVtbl->get_Error(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemFailedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackItemOpenedEventArgs[] = L"Windows.Media.Playback.IMediaPlaybackItemOpenedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemOpenedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemOpenedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemOpenedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemOpenedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemOpenedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemOpenedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemOpenedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Item )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemOpenedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemOpenedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemOpenedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemOpenedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Item(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemOpenedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackItemStatics[] = L"Windows.Media.Playback.IMediaPlaybackItemStatics";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindFromMediaSource )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource2 * source,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindFromMediaSource(This,source,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItemStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackList[] = L"Windows.Media.Playback.IMediaPlaybackList";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ItemFailed )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemFailedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ItemFailed )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CurrentItemChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CCurrentMediaPlaybackItemChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CurrentItemChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ItemOpened )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackList_Windows__CMedia__CPlayback__CMediaPlaybackItemOpenedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ItemOpened )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Items )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                           __RPC__deref_out_opt __FIObservableVector_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoRepeatEnabled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutoRepeatEnabled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShuffleEnabled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShuffleEnabled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentItem )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CurrentItemIndex )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * item
        );
    HRESULT ( STDMETHODCALLTYPE *MovePrevious )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * item
        );
    HRESULT ( STDMETHODCALLTYPE *MoveTo )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList * This,
                  UINT32 itemIndex,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * item
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackListVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackListVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ItemFailed(This,handler,token) )
    ( (This)->lpVtbl->remove_ItemFailed(This,token) )
    ( (This)->lpVtbl->add_CurrentItemChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_CurrentItemChanged(This,token) )
    ( (This)->lpVtbl->add_ItemOpened(This,handler,token) )
    ( (This)->lpVtbl->remove_ItemOpened(This,token) )
    ( (This)->lpVtbl->get_Items(This,value) )
    ( (This)->lpVtbl->get_AutoRepeatEnabled(This,value) )
    ( (This)->lpVtbl->put_AutoRepeatEnabled(This,value) )
    ( (This)->lpVtbl->get_ShuffleEnabled(This,value) )
    ( (This)->lpVtbl->put_ShuffleEnabled(This,value) )
    ( (This)->lpVtbl->get_CurrentItem(This,value) )
    ( (This)->lpVtbl->get_CurrentItemIndex(This,value) )
    ( (This)->lpVtbl->MoveNext(This,item) )
    ( (This)->lpVtbl->MovePrevious(This,item) )
    ( (This)->lpVtbl->MoveTo(This,itemIndex,item) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackList2[] = L"Windows.Media.Playback.IMediaPlaybackList2";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxPrefetchTime )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CTimeSpan * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxPrefetchTime )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2 * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartingItem )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StartingItem )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackItem * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShuffledItems )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetShuffledItems )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CMedia__CPlayback__CMediaPlaybackItem * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2Vtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxPrefetchTime(This,value) )
    ( (This)->lpVtbl->put_MaxPrefetchTime(This,value) )
    ( (This)->lpVtbl->get_StartingItem(This,value) )
    ( (This)->lpVtbl->put_StartingItem(This,value) )
    ( (This)->lpVtbl->get_ShuffledItems(This,value) )
    ( (This)->lpVtbl->SetShuffledItems(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackList3[] = L"Windows.Media.Playback.IMediaPlaybackList3";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_MaxPlayedItemsToKeepOpen )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList3 * This,
                           __RPC__deref_out_opt __FIReference_1_UINT32 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxPlayedItemsToKeepOpen )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList3 * This,
                  __RPC__in_opt __FIReference_1_UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList3Vtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_MaxPlayedItemsToKeepOpen(This,value) )
    ( (This)->lpVtbl->put_MaxPlayedItemsToKeepOpen(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackList3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackSession[] = L"Windows.Media.Playback.IMediaPlaybackSession";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_PlaybackStateChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PlaybackStateChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PlaybackRateChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PlaybackRateChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SeekCompleted )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SeekCompleted )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BufferingStarted )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BufferingStarted )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BufferingEnded )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BufferingEnded )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_BufferingProgressChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BufferingProgressChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_DownloadProgressChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_DownloadProgressChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_NaturalDurationChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NaturalDurationChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PositionChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PositionChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_NaturalVideoSizeChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NaturalVideoSizeChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaPlayer )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NaturalDuration )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaybackState )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CMediaPlaybackState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanSeek )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanPause )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsProtected )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaybackRate )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PlaybackRate )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BufferingProgress )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DownloadProgress )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NaturalVideoHeight )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NaturalVideoWidth )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NormalizedSourceRect )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NormalizedSourceRect )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  __x_ABI_CWindows_CFoundation_CRect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StereoscopicVideoPackingMode )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CStereoscopicVideoPackingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StereoscopicVideoPackingMode )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CStereoscopicVideoPackingMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_PlaybackStateChanged(This,value,token) )
    ( (This)->lpVtbl->remove_PlaybackStateChanged(This,token) )
    ( (This)->lpVtbl->add_PlaybackRateChanged(This,value,token) )
    ( (This)->lpVtbl->remove_PlaybackRateChanged(This,token) )
    ( (This)->lpVtbl->add_SeekCompleted(This,value,token) )
    ( (This)->lpVtbl->remove_SeekCompleted(This,token) )
    ( (This)->lpVtbl->add_BufferingStarted(This,value,token) )
    ( (This)->lpVtbl->remove_BufferingStarted(This,token) )
    ( (This)->lpVtbl->add_BufferingEnded(This,value,token) )
    ( (This)->lpVtbl->remove_BufferingEnded(This,token) )
    ( (This)->lpVtbl->add_BufferingProgressChanged(This,value,token) )
    ( (This)->lpVtbl->remove_BufferingProgressChanged(This,token) )
    ( (This)->lpVtbl->add_DownloadProgressChanged(This,value,token) )
    ( (This)->lpVtbl->remove_DownloadProgressChanged(This,token) )
    ( (This)->lpVtbl->add_NaturalDurationChanged(This,value,token) )
    ( (This)->lpVtbl->remove_NaturalDurationChanged(This,token) )
    ( (This)->lpVtbl->add_PositionChanged(This,value,token) )
    ( (This)->lpVtbl->remove_PositionChanged(This,token) )
    ( (This)->lpVtbl->add_NaturalVideoSizeChanged(This,value,token) )
    ( (This)->lpVtbl->remove_NaturalVideoSizeChanged(This,token) )
    ( (This)->lpVtbl->get_MediaPlayer(This,value) )
    ( (This)->lpVtbl->get_NaturalDuration(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->put_Position(This,value) )
    ( (This)->lpVtbl->get_PlaybackState(This,value) )
    ( (This)->lpVtbl->get_CanSeek(This,value) )
    ( (This)->lpVtbl->get_CanPause(This,value) )
    ( (This)->lpVtbl->get_IsProtected(This,value) )
    ( (This)->lpVtbl->get_PlaybackRate(This,value) )
    ( (This)->lpVtbl->put_PlaybackRate(This,value) )
    ( (This)->lpVtbl->get_BufferingProgress(This,value) )
    ( (This)->lpVtbl->get_DownloadProgress(This,value) )
    ( (This)->lpVtbl->get_NaturalVideoHeight(This,value) )
    ( (This)->lpVtbl->get_NaturalVideoWidth(This,value) )
    ( (This)->lpVtbl->get_NormalizedSourceRect(This,value) )
    ( (This)->lpVtbl->put_NormalizedSourceRect(This,value) )
    ( (This)->lpVtbl->get_StereoscopicVideoPackingMode(This,value) )
    ( (This)->lpVtbl->put_StereoscopicVideoPackingMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackSession2[] = L"Windows.Media.Playback.IMediaPlaybackSession2";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_BufferedRangesChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BufferedRangesChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PlayedRangesChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PlayedRangesChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SeekableRangesChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SeekableRangesChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SupportedPlaybackRatesChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackSession_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SupportedPlaybackRatesChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SphericalVideoProjection )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsMirroring )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsMirroring )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetBufferedRanges )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CMediaTimeRange * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPlayedRanges )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CMediaTimeRange * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSeekableRanges )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CMediaTimeRange * * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsSupportedPlaybackRateRange )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2 * This,
                  DOUBLE rate1,
                  DOUBLE rate2,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2Vtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_BufferedRangesChanged(This,value,token) )
    ( (This)->lpVtbl->remove_BufferedRangesChanged(This,token) )
    ( (This)->lpVtbl->add_PlayedRangesChanged(This,value,token) )
    ( (This)->lpVtbl->remove_PlayedRangesChanged(This,token) )
    ( (This)->lpVtbl->add_SeekableRangesChanged(This,value,token) )
    ( (This)->lpVtbl->remove_SeekableRangesChanged(This,token) )
    ( (This)->lpVtbl->add_SupportedPlaybackRatesChanged(This,value,token) )
    ( (This)->lpVtbl->remove_SupportedPlaybackRatesChanged(This,token) )
    ( (This)->lpVtbl->get_SphericalVideoProjection(This,value) )
    ( (This)->lpVtbl->get_IsMirroring(This,value) )
    ( (This)->lpVtbl->put_IsMirroring(This,value) )
    ( (This)->lpVtbl->GetBufferedRanges(This,value) )
    ( (This)->lpVtbl->GetPlayedRanges(This,value) )
    ( (This)->lpVtbl->GetSeekableRanges(This,value) )
    ( (This)->lpVtbl->IsSupportedPlaybackRateRange(This,rate1,rate2,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackSession3[] = L"Windows.Media.Playback.IMediaPlaybackSession3";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PlaybackRotation )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession3 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CMediaRotation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PlaybackRotation )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession3 * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CMediaRotation value
        );
    HRESULT ( STDMETHODCALLTYPE *GetOutputDegradationPolicyState )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionOutputDegradationPolicyState * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession3Vtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PlaybackRotation(This,value) )
    ( (This)->lpVtbl->put_PlaybackRotation(This,value) )
    ( (This)->lpVtbl->GetOutputDegradationPolicyState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackSessionBufferingStartedEventArgs[] = L"Windows.Media.Playback.IMediaPlaybackSessionBufferingStartedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionBufferingStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionBufferingStartedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionBufferingStartedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionBufferingStartedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionBufferingStartedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionBufferingStartedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionBufferingStartedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsPlaybackInterruption )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionBufferingStartedEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionBufferingStartedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionBufferingStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionBufferingStartedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsPlaybackInterruption(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionBufferingStartedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackSessionOutputDegradationPolicyState[] = L"Windows.Media.Playback.IMediaPlaybackSessionOutputDegradationPolicyState";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionOutputDegradationPolicyStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionOutputDegradationPolicyState * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionOutputDegradationPolicyState * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionOutputDegradationPolicyState * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionOutputDegradationPolicyState * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionOutputDegradationPolicyState * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionOutputDegradationPolicyState * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VideoConstrictionReason )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionOutputDegradationPolicyState * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CMediaPlaybackSessionVideoConstrictionReason * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionOutputDegradationPolicyStateVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionOutputDegradationPolicyState
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionOutputDegradationPolicyStateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VideoConstrictionReason(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSessionOutputDegradationPolicyState;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackSource[] = L"Windows.Media.Playback.IMediaPlaybackSource";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSourceVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSource
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackSphericalVideoProjection[] = L"Windows.Media.Playback.IMediaPlaybackSphericalVideoProjection";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameFormat )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CSphericalVideoFrameFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FrameFormat )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CSphericalVideoFrameFormat value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HorizontalFieldOfViewInDegrees )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HorizontalFieldOfViewInDegrees )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ViewOrientation )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ViewOrientation )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProjectionMode )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CSphericalVideoProjectionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProjectionMode )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection * This,
                  __x_ABI_CWindows_CMedia_CPlayback_CSphericalVideoProjectionMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjectionVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_FrameFormat(This,value) )
    ( (This)->lpVtbl->put_FrameFormat(This,value) )
    ( (This)->lpVtbl->get_HorizontalFieldOfViewInDegrees(This,value) )
    ( (This)->lpVtbl->put_HorizontalFieldOfViewInDegrees(This,value) )
    ( (This)->lpVtbl->get_ViewOrientation(This,value) )
    ( (This)->lpVtbl->put_ViewOrientation(This,value) )
    ( (This)->lpVtbl->get_ProjectionMode(This,value) )
    ( (This)->lpVtbl->put_ProjectionMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSphericalVideoProjection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlaybackTimedMetadataTrackList[] = L"Windows.Media.Playback.IMediaPlaybackTimedMetadataTrackList";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackTimedMetadataTrackListVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackTimedMetadataTrackList * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackTimedMetadataTrackList * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackTimedMetadataTrackList * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackTimedMetadataTrackList * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackTimedMetadataTrackList * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackTimedMetadataTrackList * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_PresentationModeChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackTimedMetadataTrackList * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlaybackTimedMetadataTrackList_Windows__CMedia__CPlayback__CTimedMetadataPresentationModeChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PresentationModeChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackTimedMetadataTrackList * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetPresentationMode )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackTimedMetadataTrackList * This,
                  UINT32 index,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CTimedMetadataTrackPresentationMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetPresentationMode )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackTimedMetadataTrackList * This,
                  UINT32 index,
                  __x_ABI_CWindows_CMedia_CPlayback_CTimedMetadataTrackPresentationMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackTimedMetadataTrackListVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackTimedMetadataTrackList
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackTimedMetadataTrackListVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_PresentationModeChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_PresentationModeChanged(This,token) )
    ( (This)->lpVtbl->GetPresentationMode(This,index,value) )
    ( (This)->lpVtbl->SetPresentationMode(This,index,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackTimedMetadataTrackList;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlayer[] = L"Windows.Media.Playback.IMediaPlayer";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AutoPlay )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutoPlay )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  boolean value
        );
    DEPRECATED("Use PlaybackSession.NaturalDuration instead of NaturalDuration.  For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_NaturalDuration )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    DEPRECATED("Use PlaybackSession.Position instead of Position.  For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
    DEPRECATED("Use PlaybackSession.Position instead of Position.  For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
    DEPRECATED("Use PlaybackSession.BufferingProgress instead of BufferingProgress.  For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_BufferingProgress )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                           __RPC__out DOUBLE * value
        );
    DEPRECATED("Use PlaybackSession.State instead of CurrentState.  For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_CurrentState )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CMediaPlayerState * value
        );
    DEPRECATED("Use PlaybackSession.CanSeek instead of CanSeek.  For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_CanSeek )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("Use PlaybackSession.CanPause instead of CanPause.  For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_CanPause )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsLoopingEnabled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsLoopingEnabled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  boolean value
        );
    DEPRECATED("Use PlaybackSession.IsProtected instead of IsProtected.  For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_IsProtected )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsMuted )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsMuted )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  boolean value
        );
    DEPRECATED("Use PlaybackSession.PlaybackRate instead of PlaybackRate.  For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_PlaybackRate )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                           __RPC__out DOUBLE * value
        );
    DEPRECATED("Use PlaybackSession.PlaybackRate instead of PlaybackRate.  For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_PlaybackRate )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Volume )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Volume )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  DOUBLE value
        );
    DEPRECATED("Use media tracks on MediaPlaybackItem instead of PlaybackMediaMarkers.  For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_PlaybackMediaMarkers )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerSequence * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MediaOpened )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MediaOpened )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MediaEnded )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MediaEnded )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_MediaFailed )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerFailedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_MediaFailed )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  EventRegistrationToken token
        );
    DEPRECATED("Use PlaybackSession.PlaybackStateChanged instead of CurrentStateChanged.  For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_CurrentStateChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("Use PlaybackSession.PlaybackStateChanged instead of CurrentStateChanged.  For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_CurrentStateChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  EventRegistrationToken token
        );
    DEPRECATED("Use media tracks on MediaPlaybackItem instead of PlaybackMediaMarkers.  For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_PlaybackMediaMarkerReached )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CPlaybackMediaMarkerReachedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("Use media tracks on MediaPlaybackItem instead of PlaybackMediaMarkers.  For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_PlaybackMediaMarkerReached )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  EventRegistrationToken token
        );
    DEPRECATED("Use PlaybackSession.PlaybackRateChanged instead of MediaPlayerRateChanged.  For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_MediaPlayerRateChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_Windows__CMedia__CPlayback__CMediaPlayerRateChangedEventArgs * value,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("Use PlaybackSession.PlaybackRateChanged instead of MediaPlayerRateChanged.  For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_MediaPlayerRateChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_VolumeChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_VolumeChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  EventRegistrationToken token
        );
    DEPRECATED("Use PlaybackSession.SeekCompleted instead of SeekCompleted.  For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_SeekCompleted )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("Use PlaybackSession.SeekCompleted instead of SeekCompleted.  For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_SeekCompleted )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  EventRegistrationToken token
        );
    DEPRECATED("Use PlaybackSession.BufferingStarted instead of BufferingStarted.  For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_BufferingStarted )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("Use PlaybackSession.BufferingStarted instead of BufferingStarted.  For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_BufferingStarted )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  EventRegistrationToken token
        );
    DEPRECATED("Use PlaybackSession.BufferingEnded instead of BufferingEnded.  For more info, see MSDN.")
                                HRESULT ( STDMETHODCALLTYPE *add_BufferingEnded )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
    DEPRECATED("Use PlaybackSession.BufferingEnded instead of BufferingEnded.  For more info, see MSDN.")
                                   HRESULT ( STDMETHODCALLTYPE *remove_BufferingEnded )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *Play )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This
        );
    HRESULT ( STDMETHODCALLTYPE *Pause )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This
        );
    DEPRECATED("Use Source instead of SetUriSource.  For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *SetUriSource )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * This,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AutoPlay(This,value) )
    ( (This)->lpVtbl->put_AutoPlay(This,value) )
DEPRECATED("Use PlaybackSession.NaturalDuration instead of NaturalDuration.  For more info, see MSDN.")
    ( (This)->lpVtbl->get_NaturalDuration(This,value) )
DEPRECATED("Use PlaybackSession.Position instead of Position.  For more info, see MSDN.")
    ( (This)->lpVtbl->get_Position(This,value) )
DEPRECATED("Use PlaybackSession.Position instead of Position.  For more info, see MSDN.")
    ( (This)->lpVtbl->put_Position(This,value) )
DEPRECATED("Use PlaybackSession.BufferingProgress instead of BufferingProgress.  For more info, see MSDN.")
    ( (This)->lpVtbl->get_BufferingProgress(This,value) )
DEPRECATED("Use PlaybackSession.State instead of CurrentState.  For more info, see MSDN.")
    ( (This)->lpVtbl->get_CurrentState(This,value) )
DEPRECATED("Use PlaybackSession.CanSeek instead of CanSeek.  For more info, see MSDN.")
    ( (This)->lpVtbl->get_CanSeek(This,value) )
DEPRECATED("Use PlaybackSession.CanPause instead of CanPause.  For more info, see MSDN.")
    ( (This)->lpVtbl->get_CanPause(This,value) )
    ( (This)->lpVtbl->get_IsLoopingEnabled(This,value) )
    ( (This)->lpVtbl->put_IsLoopingEnabled(This,value) )
DEPRECATED("Use PlaybackSession.IsProtected instead of IsProtected.  For more info, see MSDN.")
    ( (This)->lpVtbl->get_IsProtected(This,value) )
    ( (This)->lpVtbl->get_IsMuted(This,value) )
    ( (This)->lpVtbl->put_IsMuted(This,value) )
DEPRECATED("Use PlaybackSession.PlaybackRate instead of PlaybackRate.  For more info, see MSDN.")
    ( (This)->lpVtbl->get_PlaybackRate(This,value) )
DEPRECATED("Use PlaybackSession.PlaybackRate instead of PlaybackRate.  For more info, see MSDN.")
    ( (This)->lpVtbl->put_PlaybackRate(This,value) )
    ( (This)->lpVtbl->get_Volume(This,value) )
    ( (This)->lpVtbl->put_Volume(This,value) )
DEPRECATED("Use media tracks on MediaPlaybackItem instead of PlaybackMediaMarkers.  For more info, see MSDN.")
    ( (This)->lpVtbl->get_PlaybackMediaMarkers(This,value) )
    ( (This)->lpVtbl->add_MediaOpened(This,value,token) )
    ( (This)->lpVtbl->remove_MediaOpened(This,token) )
    ( (This)->lpVtbl->add_MediaEnded(This,value,token) )
    ( (This)->lpVtbl->remove_MediaEnded(This,token) )
    ( (This)->lpVtbl->add_MediaFailed(This,value,token) )
    ( (This)->lpVtbl->remove_MediaFailed(This,token) )
DEPRECATED("Use PlaybackSession.PlaybackStateChanged instead of CurrentStateChanged.  For more info, see MSDN.")
    ( (This)->lpVtbl->add_CurrentStateChanged(This,value,token) )
DEPRECATED("Use PlaybackSession.PlaybackStateChanged instead of CurrentStateChanged.  For more info, see MSDN.")
    ( (This)->lpVtbl->remove_CurrentStateChanged(This,token) )
DEPRECATED("Use media tracks on MediaPlaybackItem instead of PlaybackMediaMarkers.  For more info, see MSDN.")
    ( (This)->lpVtbl->add_PlaybackMediaMarkerReached(This,value,token) )
DEPRECATED("Use media tracks on MediaPlaybackItem instead of PlaybackMediaMarkers.  For more info, see MSDN.")
    ( (This)->lpVtbl->remove_PlaybackMediaMarkerReached(This,token) )
DEPRECATED("Use PlaybackSession.PlaybackRateChanged instead of MediaPlayerRateChanged.  For more info, see MSDN.")
    ( (This)->lpVtbl->add_MediaPlayerRateChanged(This,value,token) )
DEPRECATED("Use PlaybackSession.PlaybackRateChanged instead of MediaPlayerRateChanged.  For more info, see MSDN.")
    ( (This)->lpVtbl->remove_MediaPlayerRateChanged(This,token) )
    ( (This)->lpVtbl->add_VolumeChanged(This,value,token) )
    ( (This)->lpVtbl->remove_VolumeChanged(This,token) )
DEPRECATED("Use PlaybackSession.SeekCompleted instead of SeekCompleted.  For more info, see MSDN.")
    ( (This)->lpVtbl->add_SeekCompleted(This,value,token) )
DEPRECATED("Use PlaybackSession.SeekCompleted instead of SeekCompleted.  For more info, see MSDN.")
    ( (This)->lpVtbl->remove_SeekCompleted(This,token) )
DEPRECATED("Use PlaybackSession.BufferingStarted instead of BufferingStarted.  For more info, see MSDN.")
    ( (This)->lpVtbl->add_BufferingStarted(This,value,token) )
DEPRECATED("Use PlaybackSession.BufferingStarted instead of BufferingStarted.  For more info, see MSDN.")
    ( (This)->lpVtbl->remove_BufferingStarted(This,token) )
DEPRECATED("Use PlaybackSession.BufferingEnded instead of BufferingEnded.  For more info, see MSDN.")
    ( (This)->lpVtbl->add_BufferingEnded(This,value,token) )
DEPRECATED("Use PlaybackSession.BufferingEnded instead of BufferingEnded.  For more info, see MSDN.")
    ( (This)->lpVtbl->remove_BufferingEnded(This,token) )
    ( (This)->lpVtbl->Play(This) )
    ( (This)->lpVtbl->Pause(This) )
DEPRECATED("Use Source instead of SetUriSource.  For more info, see MSDN.")
    ( (This)->lpVtbl->SetUriSource(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlayer2[] = L"Windows.Media.Playback.IMediaPlayer2";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SystemMediaTransportControls )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CISystemMediaTransportControls * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioCategory )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CMediaPlayerAudioCategory * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AudioCategory )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer2 * This,
                  __x_ABI_CWindows_CMedia_CPlayback_CMediaPlayerAudioCategory value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioDeviceType )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer2 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CMediaPlayerAudioDeviceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AudioDeviceType )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer2 * This,
                  __x_ABI_CWindows_CMedia_CPlayback_CMediaPlayerAudioDeviceType value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer2Vtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SystemMediaTransportControls(This,value) )
    ( (This)->lpVtbl->get_AudioCategory(This,value) )
    ( (This)->lpVtbl->put_AudioCategory(This,value) )
    ( (This)->lpVtbl->get_AudioDeviceType(This,value) )
    ( (This)->lpVtbl->put_AudioDeviceType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlayer3[] = L"Windows.Media.Playback.IMediaPlayer3";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_IsMutedChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_IsMutedChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SourceChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SourceChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioBalance )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AudioBalance )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RealTimePlayback )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RealTimePlayback )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StereoscopicVideoRenderMode )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CStereoscopicVideoRenderMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StereoscopicVideoRenderMode )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                  __x_ABI_CWindows_CMedia_CPlayback_CStereoscopicVideoRenderMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BreakManager )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaBreakManager * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CommandManager )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackCommandManager * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioDevice )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AudioDevice )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimelineController )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIMediaTimelineController * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TimelineController )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CIMediaTimelineController * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimelineControllerPositionOffset )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TimelineControllerPositionOffset )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PlaybackSession )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSession * * value
        );
    HRESULT ( STDMETHODCALLTYPE *StepForwardOneFrame )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This
        );
    HRESULT ( STDMETHODCALLTYPE *StepBackwardOneFrame )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetAsCastingSource )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCasting_CICastingSource * * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3Vtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_IsMutedChanged(This,value,token) )
    ( (This)->lpVtbl->remove_IsMutedChanged(This,token) )
    ( (This)->lpVtbl->add_SourceChanged(This,value,token) )
    ( (This)->lpVtbl->remove_SourceChanged(This,token) )
    ( (This)->lpVtbl->get_AudioBalance(This,value) )
    ( (This)->lpVtbl->put_AudioBalance(This,value) )
    ( (This)->lpVtbl->get_RealTimePlayback(This,value) )
    ( (This)->lpVtbl->put_RealTimePlayback(This,value) )
    ( (This)->lpVtbl->get_StereoscopicVideoRenderMode(This,value) )
    ( (This)->lpVtbl->put_StereoscopicVideoRenderMode(This,value) )
    ( (This)->lpVtbl->get_BreakManager(This,value) )
    ( (This)->lpVtbl->get_CommandManager(This,value) )
    ( (This)->lpVtbl->get_AudioDevice(This,value) )
    ( (This)->lpVtbl->put_AudioDevice(This,value) )
    ( (This)->lpVtbl->get_TimelineController(This,value) )
    ( (This)->lpVtbl->put_TimelineController(This,value) )
    ( (This)->lpVtbl->get_TimelineControllerPositionOffset(This,value) )
    ( (This)->lpVtbl->put_TimelineControllerPositionOffset(This,value) )
    ( (This)->lpVtbl->get_PlaybackSession(This,value) )
    ( (This)->lpVtbl->StepForwardOneFrame(This) )
    ( (This)->lpVtbl->StepBackwardOneFrame(This) )
    ( (This)->lpVtbl->GetAsCastingSource(This,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlayer4[] = L"Windows.Media.Playback.IMediaPlayer4";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetSurfaceSize )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer4 * This,
                  __x_ABI_CWindows_CFoundation_CSize size
        );
    HRESULT ( STDMETHODCALLTYPE *GetSurface )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * compositor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSurface * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer4Vtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer4
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetSurfaceSize(This,size) )
    ( (This)->lpVtbl->GetSurface(This,compositor,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlayer5[] = L"Windows.Media.Playback.IMediaPlayer5";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_VideoFrameAvailable )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable * value,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_VideoFrameAvailable )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5 * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsVideoFrameServerEnabled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsVideoFrameServerEnabled )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5 * This,
                  boolean value
        );
                    HRESULT ( STDMETHODCALLTYPE *CopyFrameToVideoSurface )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * destination
        );
                    HRESULT ( STDMETHODCALLTYPE *CopyFrameToVideoSurfaceWithTargetRectangle )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * destination,
                  __x_ABI_CWindows_CFoundation_CRect targetRectangle
        );
    HRESULT ( STDMETHODCALLTYPE *CopyFrameToStereoscopicVideoSurfaces )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * destinationLeftEye,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * destinationRightEye
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5Vtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_VideoFrameAvailable(This,value,token) )
    ( (This)->lpVtbl->remove_VideoFrameAvailable(This,token) )
    ( (This)->lpVtbl->get_IsVideoFrameServerEnabled(This,value) )
    ( (This)->lpVtbl->put_IsVideoFrameServerEnabled(This,value) )
    ( (This)->lpVtbl->CopyFrameToVideoSurface(This,destination) )
    ( (This)->lpVtbl->CopyFrameToVideoSurfaceWithTargetRectangle(This,destination,targetRectangle) )
    ( (This)->lpVtbl->CopyFrameToStereoscopicVideoSurfaces(This,destinationLeftEye,destinationRightEye) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlayer6[] = L"Windows.Media.Playback.IMediaPlayer6";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_SubtitleFrameChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer6 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CPlayback__CMediaPlayer_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SubtitleFrameChanged )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer6 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *RenderSubtitlesToSurface )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer6 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * destination,
                           __RPC__out boolean * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RenderSubtitlesToSurfaceWithTargetRectangle )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer6 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * destination,
                  __x_ABI_CWindows_CFoundation_CRect targetRectangle,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer6Vtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer6
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_SubtitleFrameChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_SubtitleFrameChanged(This,token) )
    ( (This)->lpVtbl->RenderSubtitlesToSurface(This,destination,result) )
    ( (This)->lpVtbl->RenderSubtitlesToSurfaceWithTargetRectangle(This,destination,targetRectangle,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlayer7[] = L"Windows.Media.Playback.IMediaPlayer7";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer7Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer7 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer7 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer7 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer7 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer7 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer7 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AudioStateMonitor )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer7 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CAudio_CIAudioStateMonitor * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer7Vtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer7
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer7Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AudioStateMonitor(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer7;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlayerDataReceivedEventArgs[] = L"Windows.Media.Playback.IMediaPlayerDataReceivedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerDataReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerDataReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerDataReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerDataReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerDataReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerDataReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerDataReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Data )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerDataReceivedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerDataReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerDataReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerDataReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Data(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerDataReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlayerEffects[] = L"Windows.Media.Playback.IMediaPlayerEffects";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffectsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddAudioEffect )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects * This,
                  __RPC__in HSTRING activatableClassId,
                  boolean effectOptional,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * configuration
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAllEffects )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffectsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffectsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddAudioEffect(This,activatableClassId,effectOptional,configuration) )
    ( (This)->lpVtbl->RemoveAllEffects(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlayerEffects2[] = L"Windows.Media.Playback.IMediaPlayerEffects2";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *AddVideoEffect )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects2 * This,
                  __RPC__in HSTRING activatableClassId,
                  boolean effectOptional,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * effectConfiguration
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects2Vtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->AddVideoEffect(This,activatableClassId,effectOptional,effectConfiguration) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerEffects2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlayerFailedEventArgs[] = L"Windows.Media.Playback.IMediaPlayerFailedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerFailedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerFailedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerFailedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerFailedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerFailedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerFailedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerFailedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Error )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerFailedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CMediaPlayerError * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExtendedErrorCode )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerFailedEventArgs * This,
                           __RPC__out HRESULT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ErrorMessage )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerFailedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerFailedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerFailedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerFailedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Error(This,value) )
    ( (This)->lpVtbl->get_ExtendedErrorCode(This,value) )
    ( (This)->lpVtbl->get_ErrorMessage(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerFailedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlayerRateChangedEventArgs[] = L"Windows.Media.Playback.IMediaPlayerRateChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerRateChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerRateChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerRateChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerRateChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerRateChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerRateChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerRateChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NewRate )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerRateChangedEventArgs * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerRateChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerRateChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerRateChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NewRate(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerRateChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlayerSource[] = L"Windows.Media.Playback.IMediaPlayerSource";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProtectionManager )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProtectionManager )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CProtection_CIMediaProtectionManager * value
        );
    DEPRECATED("Use Source instead of SetFileSource.  For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *SetFileSource )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file
        );
    DEPRECATED("Use Source instead of SetStreamSource.  For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *SetStreamSource )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStream * stream
        );
    DEPRECATED("Use Source instead of SetMediaSource.  For more info, see MSDN.")
                      HRESULT ( STDMETHODCALLTYPE *SetMediaSource )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CCore_CIMediaSource * source
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSourceVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProtectionManager(This,value) )
    ( (This)->lpVtbl->put_ProtectionManager(This,value) )
DEPRECATED("Use Source instead of SetFileSource.  For more info, see MSDN.")
    ( (This)->lpVtbl->SetFileSource(This,file) )
DEPRECATED("Use Source instead of SetStreamSource.  For more info, see MSDN.")
    ( (This)->lpVtbl->SetStreamSource(This,stream) )
DEPRECATED("Use Source instead of SetMediaSource.  For more info, see MSDN.")
    ( (This)->lpVtbl->SetMediaSource(This,source) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlayerSource2[] = L"Windows.Media.Playback.IMediaPlayerSource2";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Source )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlaybackSource * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource2Vtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Source(This,value) )
    ( (This)->lpVtbl->put_Source(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSource2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IMediaPlayerSurface[] = L"Windows.Media.Playback.IMediaPlayerSurface";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSurfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSurface * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSurface * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSurface * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSurface * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSurface * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSurface * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CompositionSurface )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSurface * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositionSurface * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Compositor )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSurface * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaPlayer )(
        __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSurface * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSurfaceVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSurface
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSurfaceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CompositionSurface(This,value) )
    ( (This)->lpVtbl->get_Compositor(This,value) )
    ( (This)->lpVtbl->get_MediaPlayer(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIMediaPlayerSurface;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IPlaybackMediaMarker[] = L"Windows.Media.Playback.IPlaybackMediaMarker";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Time )(
        __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MediaMarkerType )(
        __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerVtbl *lpVtbl;
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
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IPlaybackMediaMarkerFactory[] = L"Windows.Media.Playback.IPlaybackMediaMarkerFactory";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromTime )(
        __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerFactory * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker * * marker
        );
    HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerFactory * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value,
                  __RPC__in HSTRING mediaMarketType,
                  __RPC__in HSTRING text,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker * * marker
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromTime(This,value,marker) )
    ( (This)->lpVtbl->Create(This,value,mediaMarketType,text,marker) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IPlaybackMediaMarkerReachedEventArgs[] = L"Windows.Media.Playback.IPlaybackMediaMarkerReachedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerReachedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerReachedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerReachedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerReachedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerReachedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerReachedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerReachedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PlaybackMediaMarker )(
        __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerReachedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerReachedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerReachedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerReachedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PlaybackMediaMarker(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerReachedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_IPlaybackMediaMarkerSequence[] = L"Windows.Media.Playback.IPlaybackMediaMarkerSequence";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerSequenceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerSequence * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerSequence * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerSequence * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerSequence * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerSequence * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerSequence * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerSequence * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *Insert )(
        __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerSequence * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarker * value
        );
    HRESULT ( STDMETHODCALLTYPE *Clear )(
        __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerSequence * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerSequenceVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerSequence
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerSequenceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Size(This,value) )
    ( (This)->lpVtbl->Insert(This,value) )
    ( (This)->lpVtbl->Clear(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CIPlaybackMediaMarkerSequence;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Playback_ITimedMetadataPresentationModeChangedEventArgs[] = L"Windows.Media.Playback.ITimedMetadataPresentationModeChangedEventArgs";
typedef struct __x_ABI_CWindows_CMedia_CPlayback_CITimedMetadataPresentationModeChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CITimedMetadataPresentationModeChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CITimedMetadataPresentationModeChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CITimedMetadataPresentationModeChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CITimedMetadataPresentationModeChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CITimedMetadataPresentationModeChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CPlayback_CITimedMetadataPresentationModeChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Track )(
        __x_ABI_CWindows_CMedia_CPlayback_CITimedMetadataPresentationModeChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CITimedMetadataTrack * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OldPresentationMode )(
        __x_ABI_CWindows_CMedia_CPlayback_CITimedMetadataPresentationModeChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CTimedMetadataTrackPresentationMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewPresentationMode )(
        __x_ABI_CWindows_CMedia_CPlayback_CITimedMetadataPresentationModeChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CTimedMetadataTrackPresentationMode * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CPlayback_CITimedMetadataPresentationModeChangedEventArgsVtbl;
interface __x_ABI_CWindows_CMedia_CPlayback_CITimedMetadataPresentationModeChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CPlayback_CITimedMetadataPresentationModeChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Track(This,value) )
    ( (This)->lpVtbl->get_OldPresentationMode(This,value) )
    ( (This)->lpVtbl->get_NewPresentationMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CPlayback_CITimedMetadataPresentationModeChangedEventArgs;
DEPRECATED("Use MediaPlayer instead of BackgroundMediaPlayer.  For more info, see MSDN.")
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_BackgroundMediaPlayer[] = L"Windows.Media.Playback.BackgroundMediaPlayer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_CurrentMediaPlaybackItemChangedEventArgs[] = L"Windows.Media.Playback.CurrentMediaPlaybackItemChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaBreak[] = L"Windows.Media.Playback.MediaBreak";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaBreakEndedEventArgs[] = L"Windows.Media.Playback.MediaBreakEndedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaBreakManager[] = L"Windows.Media.Playback.MediaBreakManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaBreakSchedule[] = L"Windows.Media.Playback.MediaBreakSchedule";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaBreakSeekedOverEventArgs[] = L"Windows.Media.Playback.MediaBreakSeekedOverEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaBreakSkippedEventArgs[] = L"Windows.Media.Playback.MediaBreakSkippedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaBreakStartedEventArgs[] = L"Windows.Media.Playback.MediaBreakStartedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaItemDisplayProperties[] = L"Windows.Media.Playback.MediaItemDisplayProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackAudioTrackList[] = L"Windows.Media.Playback.MediaPlaybackAudioTrackList";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackCommandManager[] = L"Windows.Media.Playback.MediaPlaybackCommandManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs[] = L"Windows.Media.Playback.MediaPlaybackCommandManagerAutoRepeatModeReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackCommandManagerCommandBehavior[] = L"Windows.Media.Playback.MediaPlaybackCommandManagerCommandBehavior";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackCommandManagerFastForwardReceivedEventArgs[] = L"Windows.Media.Playback.MediaPlaybackCommandManagerFastForwardReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackCommandManagerNextReceivedEventArgs[] = L"Windows.Media.Playback.MediaPlaybackCommandManagerNextReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackCommandManagerPauseReceivedEventArgs[] = L"Windows.Media.Playback.MediaPlaybackCommandManagerPauseReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackCommandManagerPlayReceivedEventArgs[] = L"Windows.Media.Playback.MediaPlaybackCommandManagerPlayReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackCommandManagerPositionReceivedEventArgs[] = L"Windows.Media.Playback.MediaPlaybackCommandManagerPositionReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackCommandManagerPreviousReceivedEventArgs[] = L"Windows.Media.Playback.MediaPlaybackCommandManagerPreviousReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackCommandManagerRateReceivedEventArgs[] = L"Windows.Media.Playback.MediaPlaybackCommandManagerRateReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackCommandManagerRewindReceivedEventArgs[] = L"Windows.Media.Playback.MediaPlaybackCommandManagerRewindReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackCommandManagerShuffleReceivedEventArgs[] = L"Windows.Media.Playback.MediaPlaybackCommandManagerShuffleReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackItem[] = L"Windows.Media.Playback.MediaPlaybackItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackItemError[] = L"Windows.Media.Playback.MediaPlaybackItemError";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackItemFailedEventArgs[] = L"Windows.Media.Playback.MediaPlaybackItemFailedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackItemOpenedEventArgs[] = L"Windows.Media.Playback.MediaPlaybackItemOpenedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackList[] = L"Windows.Media.Playback.MediaPlaybackList";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackSession[] = L"Windows.Media.Playback.MediaPlaybackSession";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackSessionBufferingStartedEventArgs[] = L"Windows.Media.Playback.MediaPlaybackSessionBufferingStartedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackSessionOutputDegradationPolicyState[] = L"Windows.Media.Playback.MediaPlaybackSessionOutputDegradationPolicyState";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackSphericalVideoProjection[] = L"Windows.Media.Playback.MediaPlaybackSphericalVideoProjection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackTimedMetadataTrackList[] = L"Windows.Media.Playback.MediaPlaybackTimedMetadataTrackList";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlaybackVideoTrackList[] = L"Windows.Media.Playback.MediaPlaybackVideoTrackList";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlayer[] = L"Windows.Media.Playback.MediaPlayer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlayerDataReceivedEventArgs[] = L"Windows.Media.Playback.MediaPlayerDataReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlayerFailedEventArgs[] = L"Windows.Media.Playback.MediaPlayerFailedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlayerRateChangedEventArgs[] = L"Windows.Media.Playback.MediaPlayerRateChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_MediaPlayerSurface[] = L"Windows.Media.Playback.MediaPlayerSurface";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_PlaybackMediaMarker[] = L"Windows.Media.Playback.PlaybackMediaMarker";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_PlaybackMediaMarkerReachedEventArgs[] = L"Windows.Media.Playback.PlaybackMediaMarkerReachedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_PlaybackMediaMarkerSequence[] = L"Windows.Media.Playback.PlaybackMediaMarkerSequence";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Playback_TimedMetadataPresentationModeChangedEventArgs[] = L"Windows.Media.Playback.TimedMetadataPresentationModeChangedEventArgs";
       
       
#pragma clang diagnostic pop
