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
#include "Windows.Graphics.DirectX.Direct3D11.h"
#include "Windows.Graphics.Imaging.h"
#include "Windows.Media.Core.h"
#include "Windows.Media.Effects.h"
#include "Windows.Media.MediaProperties.h"
#include "Windows.Media.Transcoding.h"
#include "Windows.Storage.h"
#include "Windows.UI.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack;
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics;
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack;
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaClip __x_ABI_CWindows_CMedia_CEditing_CIMediaClip;
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics;
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2 __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2;
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition;
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2 __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2;
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics;
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay;
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory;
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer;
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory;
typedef interface __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;
typedef struct __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl;
interface __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;
typedef struct __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CEditing__CBackgroundAudioTrack **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl;
interface __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrack
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack;
typedef struct __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This, __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrackVtbl;
interface __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrackVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack;
typedef struct __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrackVtbl;
interface __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CEditing__CEmbeddedAudioTrackVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CEditing__CMediaClip __FIIterator_1_Windows__CMedia__CEditing__CMediaClip;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CEditing__CMediaClip;
typedef struct __FIIterator_1_Windows__CMedia__CEditing__CMediaClipVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This, __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaClip * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CEditing__CMediaClipVtbl;
interface __FIIterator_1_Windows__CMedia__CEditing__CMediaClip
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CEditing__CMediaClipVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CEditing__CMediaClip __FIIterable_1_Windows__CMedia__CEditing__CMediaClip;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CEditing__CMediaClip;
typedef struct __FIIterable_1_Windows__CMedia__CEditing__CMediaClipVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaClip * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaClip * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaClip * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaClip * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaClip * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaClip * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaClip * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CEditing__CMediaClip **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CEditing__CMediaClipVtbl;
interface __FIIterable_1_Windows__CMedia__CEditing__CMediaClip
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CEditing__CMediaClipVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay;
typedef struct __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This, __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayVtbl;
interface __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay;
typedef struct __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlay **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayVtbl;
interface __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlay
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer;
typedef struct __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl;
interface __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer;
typedef struct __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CEditing__CMediaOverlayLayer **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl;
interface __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayer
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;
typedef struct __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                       __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl;
interface __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack;
typedef struct __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
                       __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrackVtbl;
interface __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrackVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CEditing__CMediaClip;
typedef struct __FIVectorView_1_Windows__CMedia__CEditing__CMediaClipVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This,
                       __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CEditing__CMediaClipVtbl;
interface __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CEditing__CMediaClipVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay;
typedef struct __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                       __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayVtbl;
interface __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer;
typedef struct __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                       __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl;
interface __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;
typedef struct __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEditing__CBackgroundAudioTrack **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl;
interface __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CEditing__CMediaClip __FIVector_1_Windows__CMedia__CEditing__CMediaClip;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CEditing__CMediaClip;
typedef struct __FIVector_1_Windows__CMedia__CEditing__CMediaClipVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEditing__CMediaClip **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This, __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaClip * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CEditing__CMediaClipVtbl;
interface __FIVector_1_Windows__CMedia__CEditing__CMediaClip
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CEditing__CMediaClipVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CEditing__CMediaOverlay;
typedef struct __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlay **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This, __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayVtbl;
interface __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer;
typedef struct __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEditing__CMediaOverlayLayer **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This, __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl;
interface __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayerVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CBackgroundAudioTrack **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * This, __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrackVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClipVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClipVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClipVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClipVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaClip **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * This, __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClipVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClipVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition;
typedef interface __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaCompositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaCompositionVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaCompositionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition;
typedef struct __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaCompositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CMedia__CEditing__CMediaComposition **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * This, __RPC__out __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaCompositionVtbl;
interface __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaCompositionVtbl *lpVtbl;
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
typedef interface __FIKeyValuePair_2_HSTRING_HSTRING __FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This,
                        __RPC__out ULONG *iidCount,
                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Key )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out HSTRING *key);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *value);
    END_INTERFACE
} __FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Key(This,key) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out __FIKeyValuePair_2_HSTRING_HSTRING * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __FIKeyValuePair_2_HSTRING_HSTRING * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING;
typedef struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIIterator_1___FIKeyValuePair_2_HSTRING_HSTRING **first);
    END_INTERFACE
} __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl;
interface __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIIterable_1___FIKeyValuePair_2_HSTRING_HSTRINGVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIMapView_2_HSTRING_HSTRING __FIMapView_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMapView_2_HSTRING_HSTRING;
typedef struct __FIMapView_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This,
                   __RPC__in HSTRING key,
                            __RPC__deref_out_opt HSTRING *value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__in HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *Split )(__RPC__in __FIMapView_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **firstPartition,
                    __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **secondPartition);
    END_INTERFACE
} __FIMapView_2_HSTRING_HSTRINGVtbl;
interface __FIMapView_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMapView_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __FIMap_2_HSTRING_HSTRING __FIMap_2_HSTRING_HSTRING;
EXTERN_C const IID IID___FIMap_2_HSTRING_HSTRING;
typedef struct __FIMap_2_HSTRING_HSTRINGVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *Lookup )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   HSTRING key,
                            __RPC__deref_out_opt HSTRING **value);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *HasKey )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, HSTRING key, __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, __RPC__deref_out_opt __FIMapView_2_HSTRING_HSTRING **view);
    HRESULT ( STDMETHODCALLTYPE *Insert )(__RPC__in __FIMap_2_HSTRING_HSTRING * This,
                   HSTRING key,
                   __RPC__in_opt HSTRING *value,
                            __RPC__out boolean *replaced);
    HRESULT ( STDMETHODCALLTYPE *Remove )(__RPC__in __FIMap_2_HSTRING_HSTRING * This, HSTRING key);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIMap_2_HSTRING_HSTRING * This);
    END_INTERFACE
} __FIMap_2_HSTRING_HSTRINGVtbl;
interface __FIMap_2_HSTRING_HSTRING
{
    CONST_VTBL struct __FIMap_2_HSTRING_HSTRINGVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition;
typedef interface __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;
typedef struct __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__out __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl;
interface __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;
typedef struct __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CEffects__CIAudioEffectDefinition **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl;
interface __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinition
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;
typedef struct __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                       __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl;
interface __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition;
typedef struct __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEffects__CIAudioEffectDefinition **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This, __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl;
interface __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinitionVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition;
typedef interface __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition;
typedef struct __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, __RPC__out __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl;
interface __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition;
typedef struct __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CEffects__CIVideoEffectDefinition **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl;
interface __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinition
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition;
typedef struct __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                       __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl;
interface __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition;
EXTERN_C const IID IID___FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition;
typedef struct __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEffects__CIVideoEffectDefinition **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                   __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This, __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * *value);
    END_INTERFACE
} __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl;
interface __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition
{
    CONST_VTBL struct __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinitionVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream;
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStreamVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream;
typedef struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CGraphics__CImaging__CImageStream **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStreamVtbl;
interface __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __FIIterator_1_Windows__CFoundation__CTimeSpan __FIIterator_1_Windows__CFoundation__CTimeSpan;
EXTERN_C const IID IID___FIIterator_1_Windows__CFoundation__CTimeSpan;
typedef struct __FIIterator_1_Windows__CFoundation__CTimeSpanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CTimeSpan *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CFoundation__CTimeSpan * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) struct __x_ABI_CWindows_CFoundation_CTimeSpan *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CFoundation__CTimeSpanVtbl;
interface __FIIterator_1_Windows__CFoundation__CTimeSpan
{
    CONST_VTBL struct __FIIterator_1_Windows__CFoundation__CTimeSpanVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CFoundation__CTimeSpan __FIIterable_1_Windows__CFoundation__CTimeSpan;
EXTERN_C const IID IID___FIIterable_1_Windows__CFoundation__CTimeSpan;
typedef struct __FIIterable_1_Windows__CFoundation__CTimeSpanVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CFoundation__CTimeSpan * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CFoundation__CTimeSpan * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CFoundation__CTimeSpan * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CFoundation__CTimeSpan * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CFoundation__CTimeSpan * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CFoundation__CTimeSpan * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CFoundation__CTimeSpan * This, __RPC__deref_out_opt __FIIterator_1_Windows__CFoundation__CTimeSpan **first);
    END_INTERFACE
} __FIIterable_1_Windows__CFoundation__CTimeSpanVtbl;
interface __FIIterable_1_Windows__CFoundation__CTimeSpan
{
    CONST_VTBL struct __FIIterable_1_Windows__CFoundation__CTimeSpanVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CGraphics__CImaging__CImageStream __FIIterator_1_Windows__CGraphics__CImaging__CImageStream;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CImaging__CImageStream;
typedef struct __FIIterator_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CImaging__CImageStream * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CImaging__CImageStreamVtbl;
interface __FIIterator_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CImaging__CImageStream __FIIterable_1_Windows__CGraphics__CImaging__CImageStream;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CImaging__CImageStream;
typedef struct __FIIterable_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CImaging__CImageStream **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CImaging__CImageStreamVtbl;
interface __FIIterable_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;
typedef struct __FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                       __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl;
interface __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;
typedef struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__in_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl;
interface __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;
EXTERN_C const IID IID___FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream;
typedef struct __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * This, __RPC__out __FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * *results);
    END_INTERFACE
} __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl;
interface __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream
{
    CONST_VTBL struct __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStreamVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason;
typedef interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;
EXTERN_C const IID IID___FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;
typedef struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double *asyncInfo, double progressInfo);
    END_INTERFACE
} __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl;
interface __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double
{
    CONST_VTBL struct __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,progressInfo) )
typedef interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;
EXTERN_C const IID IID___FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;
typedef struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, __RPC__in_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl;
interface __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double
{
    CONST_VTBL struct __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;
EXTERN_C const IID IID___FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double;
typedef struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, __RPC__in_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Progress )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, __RPC__deref_out_opt __FIAsyncOperationProgressHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double **handler);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, __RPC__in_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, __RPC__deref_out_opt __FIAsyncOperationWithProgressCompletedHandler_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * This, __RPC__deref_out_opt enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason *results);
    END_INTERFACE
} __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl;
interface __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double
{
    CONST_VTBL struct __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> put_Progress(This,handler) )
    ( (This)->lpVtbl -> get_Progress(This,handler) )
    ( (This)->lpVtbl -> put_Completed(This,handler) )
    ( (This)->lpVtbl -> get_Completed(This,handler) )
    ( (This)->lpVtbl -> GetResults(This,results) )
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;
typedef interface __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile;
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties;
typedef enum __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason __x_ABI_CWindows_CMedia_CTranscoding_CTranscodeFailureReason;
typedef interface __x_ABI_CWindows_CStorage_CIStorageFile __x_ABI_CWindows_CStorage_CIStorageFile;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef enum __x_ABI_CWindows_CMedia_CEditing_CMediaTrimmingPreference __x_ABI_CWindows_CMedia_CEditing_CMediaTrimmingPreference;
typedef enum __x_ABI_CWindows_CMedia_CEditing_CVideoFramePrecision __x_ABI_CWindows_CMedia_CEditing_CVideoFramePrecision;
enum __x_ABI_CWindows_CMedia_CEditing_CMediaTrimmingPreference
{
    MediaTrimmingPreference_Fast = 0,
    MediaTrimmingPreference_Precise = 1,
};
enum __x_ABI_CWindows_CMedia_CEditing_CVideoFramePrecision
{
    VideoFramePrecision_NearestFrame = 0,
    VideoFramePrecision_NearestKeyFrame = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IBackgroundAudioTrack[] = L"Windows.Media.Editing.IBackgroundAudioTrack";
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TrimTimeFromStart )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TrimTimeFromStart )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrimTimeFromEnd )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TrimTimeFromEnd )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OriginalDuration )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrimmedDuration )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserData )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Delay )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Delay )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Volume )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Volume )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
                           __RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *Clone )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAudioEncodingProperties )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioEffectDefinitions )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackVtbl;
interface __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TrimTimeFromStart(This,value) )
    ( (This)->lpVtbl->put_TrimTimeFromStart(This,value) )
    ( (This)->lpVtbl->get_TrimTimeFromEnd(This,value) )
    ( (This)->lpVtbl->put_TrimTimeFromEnd(This,value) )
    ( (This)->lpVtbl->get_OriginalDuration(This,value) )
    ( (This)->lpVtbl->get_TrimmedDuration(This,value) )
    ( (This)->lpVtbl->get_UserData(This,value) )
    ( (This)->lpVtbl->put_Delay(This,value) )
    ( (This)->lpVtbl->get_Delay(This,value) )
    ( (This)->lpVtbl->put_Volume(This,value) )
    ( (This)->lpVtbl->get_Volume(This,value) )
    ( (This)->lpVtbl->Clone(This,value) )
    ( (This)->lpVtbl->GetAudioEncodingProperties(This,value) )
    ( (This)->lpVtbl->get_AudioEffectDefinitions(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IBackgroundAudioTrackStatics[] = L"Windows.Media.Editing.IBackgroundAudioTrackStatics";
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromEmbeddedAudioTrack )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * embeddedAudioTrack,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrack * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromFileAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromEmbeddedAudioTrack(This,embeddedAudioTrack,value) )
    ( (This)->lpVtbl->CreateFromFileAsync(This,file,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIBackgroundAudioTrackStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IEmbeddedAudioTrack[] = L"Windows.Media.Editing.IEmbeddedAudioTrack";
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrackVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetAudioEncodingProperties )(
        __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrackVtbl;
interface __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrackVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetAudioEncodingProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIEmbeddedAudioTrack;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaClip[] = L"Windows.Media.Editing.IMediaClip";
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaClipVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TrimTimeFromStart )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TrimTimeFromStart )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrimTimeFromEnd )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TrimTimeFromEnd )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OriginalDuration )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TrimmedDuration )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserData )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Clone )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StartTimeInComposition )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EndTimeInComposition )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EmbeddedAudioTracks )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEditing__CEmbeddedAudioTrack * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectedEmbeddedAudioTrackIndex )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SelectedEmbeddedAudioTrackIndex )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Volume )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Volume )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                           __RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetVideoEncodingProperties )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioEffectDefinitions )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEffects__CIAudioEffectDefinition * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VideoEffectDefinitions )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEffects__CIVideoEffectDefinition * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEditing_CIMediaClipVtbl;
interface __x_ABI_CWindows_CMedia_CEditing_CIMediaClip
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaClipVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TrimTimeFromStart(This,value) )
    ( (This)->lpVtbl->put_TrimTimeFromStart(This,value) )
    ( (This)->lpVtbl->get_TrimTimeFromEnd(This,value) )
    ( (This)->lpVtbl->put_TrimTimeFromEnd(This,value) )
    ( (This)->lpVtbl->get_OriginalDuration(This,value) )
    ( (This)->lpVtbl->get_TrimmedDuration(This,value) )
    ( (This)->lpVtbl->get_UserData(This,value) )
    ( (This)->lpVtbl->Clone(This,result) )
    ( (This)->lpVtbl->get_StartTimeInComposition(This,value) )
    ( (This)->lpVtbl->get_EndTimeInComposition(This,value) )
    ( (This)->lpVtbl->get_EmbeddedAudioTracks(This,value) )
    ( (This)->lpVtbl->get_SelectedEmbeddedAudioTrackIndex(This,value) )
    ( (This)->lpVtbl->put_SelectedEmbeddedAudioTrackIndex(This,value) )
    ( (This)->lpVtbl->put_Volume(This,value) )
    ( (This)->lpVtbl->get_Volume(This,value) )
    ( (This)->lpVtbl->GetVideoEncodingProperties(This,value) )
    ( (This)->lpVtbl->get_AudioEffectDefinitions(This,value) )
    ( (This)->lpVtbl->get_VideoEffectDefinitions(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaClip;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaClipStatics[] = L"Windows.Media.Editing.IMediaClipStatics";
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromColor )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics * This,
                  __x_ABI_CWindows_CUI_CColor color,
                  __x_ABI_CWindows_CFoundation_CTimeSpan originalDuration,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromFileAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromImageFileAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                  __x_ABI_CWindows_CFoundation_CTimeSpan originalDuration,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaClip * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromColor(This,color,originalDuration,value) )
    ( (This)->lpVtbl->CreateFromFileAsync(This,file,operation) )
    ( (This)->lpVtbl->CreateFromImageFileAsync(This,file,originalDuration,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaClipStatics2[] = L"Windows.Media.Editing.IMediaClipStatics2";
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromSurface )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * surface,
                  __x_ABI_CWindows_CFoundation_CTimeSpan originalDuration,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2Vtbl;
interface __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromSurface(This,surface,originalDuration,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaClipStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaComposition[] = L"Windows.Media.Editing.IMediaComposition";
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Clips )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEditing__CMediaClip * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackgroundAudioTracks )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEditing__CBackgroundAudioTrack * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UserData )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
                           __RPC__deref_out_opt __FIMap_2_HSTRING_HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *Clone )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SaveAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetThumbnailAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan timeFromStart,
                  INT32 scaledWidth,
                  INT32 scaledHeight,
                  __x_ABI_CWindows_CMedia_CEditing_CVideoFramePrecision framePrecision,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CGraphics__CImaging__CImageStream * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetThumbnailsAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
                  __RPC__in_opt __FIIterable_1_Windows__CFoundation__CTimeSpan * timesFromStart,
                  INT32 scaledWidth,
                  INT32 scaledHeight,
                  __x_ABI_CWindows_CMedia_CEditing_CVideoFramePrecision framePrecision,
                           __RPC__deref_out_opt __FIAsyncOperation_1___FIVectorView_1_Windows__CGraphics__CImaging__CImageStream * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RenderToFileAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * destination,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RenderToFileWithTrimmingPreferenceAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * destination,
                  __x_ABI_CWindows_CMedia_CEditing_CMediaTrimmingPreference trimmingPreference,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RenderToFileWithProfileAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * destination,
                  __x_ABI_CWindows_CMedia_CEditing_CMediaTrimmingPreference trimmingPreference,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * encodingProfile,
                           __RPC__deref_out_opt __FIAsyncOperationWithProgress_2_Windows__CMedia__CTranscoding__CTranscodeFailureReason_double * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *CreateDefaultEncodingProfile )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GenerateMediaStreamSource )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *GenerateMediaStreamSourceWithProfile )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIMediaEncodingProfile * encodingProfile,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GeneratePreviewMediaStreamSource )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition * This,
                  INT32 scaledWidth,
                  INT32 scaledHeight,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CCore_CIMediaStreamSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionVtbl;
interface __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->get_Clips(This,value) )
    ( (This)->lpVtbl->get_BackgroundAudioTracks(This,value) )
    ( (This)->lpVtbl->get_UserData(This,value) )
    ( (This)->lpVtbl->Clone(This,result) )
    ( (This)->lpVtbl->SaveAsync(This,file,operation) )
    ( (This)->lpVtbl->GetThumbnailAsync(This,timeFromStart,scaledWidth,scaledHeight,framePrecision,operation) )
    ( (This)->lpVtbl->GetThumbnailsAsync(This,timesFromStart,scaledWidth,scaledHeight,framePrecision,operation) )
    ( (This)->lpVtbl->RenderToFileAsync(This,destination,operation) )
    ( (This)->lpVtbl->RenderToFileWithTrimmingPreferenceAsync(This,destination,trimmingPreference,operation) )
    ( (This)->lpVtbl->RenderToFileWithProfileAsync(This,destination,trimmingPreference,encodingProfile,operation) )
    ( (This)->lpVtbl->CreateDefaultEncodingProfile(This,value) )
    ( (This)->lpVtbl->GenerateMediaStreamSource(This,value) )
    ( (This)->lpVtbl->GenerateMediaStreamSourceWithProfile(This,encodingProfile,value) )
    ( (This)->lpVtbl->GeneratePreviewMediaStreamSource(This,scaledWidth,scaledHeight,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaComposition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaComposition2[] = L"Windows.Media.Editing.IMediaComposition2";
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OverlayLayers )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2 * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEditing__CMediaOverlayLayer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2Vtbl;
interface __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OverlayLayers(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaComposition2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaCompositionStatics[] = L"Windows.Media.Editing.IMediaCompositionStatics";
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *LoadAsync )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CIStorageFile * file,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CMedia__CEditing__CMediaComposition * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->LoadAsync(This,file,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaCompositionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaOverlay[] = L"Windows.Media.Editing.IMediaOverlay";
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Position )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
                  __x_ABI_CWindows_CFoundation_CRect value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Delay )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
                  __x_ABI_CWindows_CFoundation_CTimeSpan value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Delay )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Opacity )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Opacity )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
                  DOUBLE value
        );
    HRESULT ( STDMETHODCALLTYPE *Clone )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Clip )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AudioEnabled )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AudioEnabled )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayVtbl;
interface __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->put_Position(This,value) )
    ( (This)->lpVtbl->put_Delay(This,value) )
    ( (This)->lpVtbl->get_Delay(This,value) )
    ( (This)->lpVtbl->get_Opacity(This,value) )
    ( (This)->lpVtbl->put_Opacity(This,value) )
    ( (This)->lpVtbl->Clone(This,result) )
    ( (This)->lpVtbl->get_Clip(This,value) )
    ( (This)->lpVtbl->get_AudioEnabled(This,value) )
    ( (This)->lpVtbl->put_AudioEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaOverlayFactory[] = L"Windows.Media.Editing.IMediaOverlayFactory";
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * clip,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * * mediaOverlay
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithPositionAndOpacity )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaClip * clip,
                  __x_ABI_CWindows_CFoundation_CRect position,
                  DOUBLE opacity,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * * mediaOverlay
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,clip,mediaOverlay) )
    ( (This)->lpVtbl->CreateWithPositionAndOpacity(This,clip,position,opacity,mediaOverlay) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaOverlayLayer[] = L"Windows.Media.Editing.IMediaOverlayLayer";
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Clone )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Overlays )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CMedia__CEditing__CMediaOverlay * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomCompositorDefinition )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerVtbl;
interface __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Clone(This,result) )
    ( (This)->lpVtbl->get_Overlays(This,value) )
    ( (This)->lpVtbl->get_CustomCompositorDefinition(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Editing_IMediaOverlayLayerFactory[] = L"Windows.Media.Editing.IMediaOverlayLayerFactory";
typedef struct __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithCompositorDefinition )(
        __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * compositorDefinition,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayer * * mediaOverlayLayer
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithCompositorDefinition(This,compositorDefinition,mediaOverlayLayer) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEditing_CIMediaOverlayLayerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Editing_BackgroundAudioTrack[] = L"Windows.Media.Editing.BackgroundAudioTrack";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Editing_EmbeddedAudioTrack[] = L"Windows.Media.Editing.EmbeddedAudioTrack";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Editing_MediaClip[] = L"Windows.Media.Editing.MediaClip";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Editing_MediaComposition[] = L"Windows.Media.Editing.MediaComposition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Editing_MediaOverlay[] = L"Windows.Media.Editing.MediaOverlay";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Editing_MediaOverlayLayer[] = L"Windows.Media.Editing.MediaOverlayLayer";
       
       
#pragma clang diagnostic pop
