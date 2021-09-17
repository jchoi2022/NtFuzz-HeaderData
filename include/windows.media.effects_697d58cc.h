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
#include "Windows.Graphics.DirectX.Direct3D11.h"
#include "Windows.Media.h"
#include "Windows.Media.Capture.h"
#include "Windows.Media.Editing.h"
#include "Windows.Media.MediaProperties.h"
#include "Windows.Media.Playback.h"
#include "Windows.Media.Render.h"
#include "Windows.Media.Transcoding.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition2 __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition2;
typedef interface __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection;
typedef interface __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CEffects__CAudioEffect;
typedef struct __FIIterator_1_Windows__CMedia__CEffects__CAudioEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This, __RPC__out __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CEffects__CAudioEffectVtbl;
interface __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CEffects__CAudioEffectVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CEffects__CAudioEffect;
typedef struct __FIIterable_1_Windows__CMedia__CEffects__CAudioEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CEffects__CAudioEffect **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CEffects__CAudioEffectVtbl;
interface __FIIterable_1_Windows__CMedia__CEffects__CAudioEffect
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CEffects__CAudioEffectVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
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
typedef interface __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect;
typedef struct __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This,
                       __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffectVtbl;
interface __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffectVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties;
typedef interface __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;
typedef struct __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl;
interface __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;
typedef struct __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl;
interface __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties;
typedef struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                       __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl;
interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingPropertiesVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties;
typedef interface __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;
EXTERN_C const IID IID___FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;
typedef struct __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl;
interface __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
{
    CONST_VTBL struct __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;
EXTERN_C const IID IID___FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;
typedef struct __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This, __RPC__deref_out_opt __FIIterator_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties **first);
    END_INTERFACE
} __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl;
interface __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
{
    CONST_VTBL struct __FIIterable_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;
EXTERN_C const IID IID___FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties;
typedef struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                       __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl;
interface __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties
{
    CONST_VTBL struct __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingPropertiesVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface;
typedef interface __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;
EXTERN_C const IID IID___FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;
typedef struct __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl;
interface __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface
{
    CONST_VTBL struct __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;
EXTERN_C const IID IID___FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;
typedef struct __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This, __RPC__deref_out_opt __FIIterator_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface **first);
    END_INTERFACE
} __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl;
interface __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface
{
    CONST_VTBL struct __FIIterable_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;
EXTERN_C const IID IID___FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface;
typedef struct __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                       __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl;
interface __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface
{
    CONST_VTBL struct __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurfaceVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef interface __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice;
typedef interface __x_ABI_CWindows_CMedia_CIAudioFrame __x_ABI_CWindows_CMedia_CIAudioFrame;
typedef enum __x_ABI_CWindows_CMedia_CAudioProcessing __x_ABI_CWindows_CMedia_CAudioProcessing;
typedef enum __x_ABI_CWindows_CMedia_CCapture_CMediaCategory __x_ABI_CWindows_CMedia_CCapture_CMediaCategory;
typedef interface __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay;
typedef interface __x_ABI_CWindows_CMedia_CIMediaExtension __x_ABI_CWindows_CMedia_CIMediaExtension;
typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaMirroringOptions __x_ABI_CWindows_CMedia_CMediaProperties_CMediaMirroringOptions;
typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CMediaRotation __x_ABI_CWindows_CMedia_CMediaProperties_CMediaRotation;
typedef enum __x_ABI_CWindows_CMedia_CMediaProperties_CSphericalVideoFrameFormat __x_ABI_CWindows_CMedia_CMediaProperties_CSphericalVideoFrameFormat;
typedef enum __x_ABI_CWindows_CMedia_CPlayback_CSphericalVideoProjectionMode __x_ABI_CWindows_CMedia_CPlayback_CSphericalVideoProjectionMode;
typedef enum __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory;
typedef enum __x_ABI_CWindows_CMedia_CTranscoding_CMediaVideoProcessingAlgorithm __x_ABI_CWindows_CMedia_CTranscoding_CMediaVideoProcessingAlgorithm;
typedef interface __x_ABI_CWindows_CMedia_CIVideoFrame __x_ABI_CWindows_CMedia_CIVideoFrame;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef enum __x_ABI_CWindows_CMedia_CEffects_CAudioEffectType __x_ABI_CWindows_CMedia_CEffects_CAudioEffectType;
typedef enum __x_ABI_CWindows_CMedia_CEffects_CMediaEffectClosedReason __x_ABI_CWindows_CMedia_CEffects_CMediaEffectClosedReason;
typedef enum __x_ABI_CWindows_CMedia_CEffects_CMediaMemoryTypes __x_ABI_CWindows_CMedia_CEffects_CMediaMemoryTypes;
enum __x_ABI_CWindows_CMedia_CEffects_CAudioEffectType
{
    AudioEffectType_Other = 0,
    AudioEffectType_AcousticEchoCancellation = 1,
    AudioEffectType_NoiseSuppression = 2,
    AudioEffectType_AutomaticGainControl = 3,
    AudioEffectType_BeamForming = 4,
    AudioEffectType_ConstantToneRemoval = 5,
    AudioEffectType_Equalizer = 6,
    AudioEffectType_LoudnessEqualizer = 7,
    AudioEffectType_BassBoost = 8,
    AudioEffectType_VirtualSurround = 9,
    AudioEffectType_VirtualHeadphones = 10,
    AudioEffectType_SpeakerFill = 11,
    AudioEffectType_RoomCorrection = 12,
    AudioEffectType_BassManagement = 13,
    AudioEffectType_EnvironmentalEffects = 14,
    AudioEffectType_SpeakerProtection = 15,
    AudioEffectType_SpeakerCompensation = 16,
    AudioEffectType_DynamicRangeCompression = 17,
};
enum __x_ABI_CWindows_CMedia_CEffects_CMediaEffectClosedReason
{
    MediaEffectClosedReason_Done = 0,
    MediaEffectClosedReason_UnknownError = 1,
    MediaEffectClosedReason_UnsupportedEncodingFormat = 2,
    MediaEffectClosedReason_EffectCurrentlyUnloaded = 3,
};
enum __x_ABI_CWindows_CMedia_CEffects_CMediaMemoryTypes
{
    MediaMemoryTypes_Gpu = 0,
    MediaMemoryTypes_Cpu = 1,
    MediaMemoryTypes_GpuAndCpu = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioCaptureEffectsManager[] = L"Windows.Media.Effects.IAudioCaptureEffectsManager";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_AudioCaptureEffectsChanged )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioCaptureEffectsManager_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AudioCaptureEffectsChanged )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetAudioCaptureEffects )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * * effects
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManagerVtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_AudioCaptureEffectsChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_AudioCaptureEffectsChanged(This,token) )
    ( (This)->lpVtbl->GetAudioCaptureEffects(This,effects) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioEffect[] = L"Windows.Media.Effects.IAudioEffect";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AudioEffectType )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CEffects_CAudioEffectType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectVtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AudioEffectType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioEffect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioEffectDefinition[] = L"Windows.Media.Effects.IAudioEffectDefinition";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActivatableClassId )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionVtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActivatableClassId(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioEffectDefinitionFactory[] = L"Windows.Media.Effects.IAudioEffectDefinitionFactory";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory * This,
                  __RPC__in HSTRING activatableClassId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithProperties )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory * This,
                  __RPC__in HSTRING activatableClassId,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * props,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinition * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,activatableClassId,value) )
    ( (This)->lpVtbl->CreateWithProperties(This,activatableClassId,props,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioEffectDefinitionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioEffectsManagerStatics[] = L"Windows.Media.Effects.IAudioEffectsManagerStatics";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateAudioRenderEffectsManager )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This,
                  __RPC__in HSTRING deviceId,
                  __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory category,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateAudioRenderEffectsManagerWithMode )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This,
                  __RPC__in HSTRING deviceId,
                  __x_ABI_CWindows_CMedia_CRender_CAudioRenderCategory category,
                  __x_ABI_CWindows_CMedia_CAudioProcessing mode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateAudioCaptureEffectsManager )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This,
                  __RPC__in HSTRING deviceId,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaCategory category,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * * value
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateAudioCaptureEffectsManagerWithMode )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics * This,
                  __RPC__in HSTRING deviceId,
                  __x_ABI_CWindows_CMedia_CCapture_CMediaCategory category,
                  __x_ABI_CWindows_CMedia_CAudioProcessing mode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIAudioCaptureEffectsManager * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStaticsVtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateAudioRenderEffectsManager(This,deviceId,category,value) )
    ( (This)->lpVtbl->CreateAudioRenderEffectsManagerWithMode(This,deviceId,category,mode,value) )
    ( (This)->lpVtbl->CreateAudioCaptureEffectsManager(This,deviceId,category,value) )
    ( (This)->lpVtbl->CreateAudioCaptureEffectsManagerWithMode(This,deviceId,category,mode,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioEffectsManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioRenderEffectsManager[] = L"Windows.Media.Effects.IAudioRenderEffectsManager";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_AudioRenderEffectsChanged )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CMedia__CEffects__CAudioRenderEffectsManager_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AudioRenderEffectsChanged )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetAudioRenderEffects )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CEffects__CAudioEffect * * effects
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManagerVtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_AudioRenderEffectsChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_AudioRenderEffectsChanged(This,token) )
    ( (This)->lpVtbl->GetAudioRenderEffects(This,effects) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IAudioRenderEffectsManager2[] = L"Windows.Media.Effects.IAudioRenderEffectsManager2";
typedef struct
DEPRECATED("Not supported starting in windows 10")
__x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Not supported starting in windows 10")
                               HRESULT ( STDMETHODCALLTYPE *get_EffectsProviderThumbnail )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * * value
        );
    DEPRECATED("Not supported starting in windows 10")
                               HRESULT ( STDMETHODCALLTYPE *get_EffectsProviderSettingsLabel )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    DEPRECATED("Not supported starting in windows 10")
                      HRESULT ( STDMETHODCALLTYPE *ShowSettingsUI )(
        __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2Vtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Not supported starting in windows 10")
    ( (This)->lpVtbl->get_EffectsProviderThumbnail(This,value) )
DEPRECATED("Not supported starting in windows 10")
    ( (This)->lpVtbl->get_EffectsProviderSettingsLabel(This,value) )
DEPRECATED("Not supported starting in windows 10")
    ( (This)->lpVtbl->ShowSettingsUI(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIAudioRenderEffectsManager2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IBasicAudioEffect[] = L"Windows.Media.Effects.IBasicAudioEffect";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UseInputFrameForOutput )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedEncodingProperties )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CMediaProperties__CAudioEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetEncodingProperties )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIAudioEncodingProperties * encodingProperties
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessFrame )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext * context
        );
    HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This,
                  __x_ABI_CWindows_CMedia_CEffects_CMediaEffectClosedReason reason
        );
    HRESULT ( STDMETHODCALLTYPE *DiscardQueuedFrames )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffectVtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UseInputFrameForOutput(This,value) )
    ( (This)->lpVtbl->get_SupportedEncodingProperties(This,value) )
    ( (This)->lpVtbl->SetEncodingProperties(This,encodingProperties) )
    ( (This)->lpVtbl->ProcessFrame(This,context) )
    ( (This)->lpVtbl->Close(This,reason) )
    ( (This)->lpVtbl->DiscardQueuedFrames(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIBasicAudioEffect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IBasicVideoEffect[] = L"Windows.Media.Effects.IBasicVideoEffect";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedMemoryTypes )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CEffects_CMediaMemoryTypes * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TimeIndependent )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedEncodingProperties )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CMedia__CMediaProperties__CVideoEncodingProperties * * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetEncodingProperties )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * encodingProperties,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * device
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessFrame )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext * context
        );
    HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This,
                  __x_ABI_CWindows_CMedia_CEffects_CMediaEffectClosedReason reason
        );
    HRESULT ( STDMETHODCALLTYPE *DiscardQueuedFrames )(
        __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffectVtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsReadOnly(This,value) )
    ( (This)->lpVtbl->get_SupportedMemoryTypes(This,value) )
    ( (This)->lpVtbl->get_TimeIndependent(This,value) )
    ( (This)->lpVtbl->get_SupportedEncodingProperties(This,value) )
    ( (This)->lpVtbl->SetEncodingProperties(This,encodingProperties,device) )
    ( (This)->lpVtbl->ProcessFrame(This,context) )
    ( (This)->lpVtbl->Close(This,reason) )
    ( (This)->lpVtbl->DiscardQueuedFrames(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIBasicVideoEffect;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_ICompositeVideoFrameContext[] = L"Windows.Media.Effects.ICompositeVideoFrameContext";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SurfacesToOverlay )(
        __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CGraphics__CDirectX__CDirect3D11__CIDirect3DSurface * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackgroundFrame )(
        __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutputFrame )(
        __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetOverlayForSurface )(
        __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * This,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DSurface * surfaceToOverlay,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEditing_CIMediaOverlay * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContextVtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContextVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SurfacesToOverlay(This,value) )
    ( (This)->lpVtbl->get_BackgroundFrame(This,value) )
    ( (This)->lpVtbl->get_OutputFrame(This,value) )
    ( (This)->lpVtbl->GetOverlayForSurface(This,surfaceToOverlay,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IProcessAudioFrameContext[] = L"Windows.Media.Effects.IProcessAudioFrameContext";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InputFrame )(
        __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIAudioFrame * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutputFrame )(
        __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIAudioFrame * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContextVtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContextVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InputFrame(This,value) )
    ( (This)->lpVtbl->get_OutputFrame(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIProcessAudioFrameContext;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IProcessVideoFrameContext[] = L"Windows.Media.Effects.IProcessVideoFrameContext";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InputFrame )(
        __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutputFrame )(
        __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CIVideoFrame * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContextVtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContextVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InputFrame(This,value) )
    ( (This)->lpVtbl->get_OutputFrame(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIProcessVideoFrameContext;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoCompositor[] = L"Windows.Media.Effects.IVideoCompositor";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TimeIndependent )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetEncodingProperties )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CMediaProperties_CIVideoEncodingProperties * backgroundProperties,
                  __RPC__in_opt __x_ABI_CWindows_CGraphics_CDirectX_CDirect3D11_CIDirect3DDevice * device
        );
    HRESULT ( STDMETHODCALLTYPE *CompositeFrame )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This,
                  __RPC__in_opt __x_ABI_CWindows_CMedia_CEffects_CICompositeVideoFrameContext * context
        );
    HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This,
                  __x_ABI_CWindows_CMedia_CEffects_CMediaEffectClosedReason reason
        );
    HRESULT ( STDMETHODCALLTYPE *DiscardQueuedFrames )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorVtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TimeIndependent(This,value) )
    ( (This)->lpVtbl->SetEncodingProperties(This,backgroundProperties,device) )
    ( (This)->lpVtbl->CompositeFrame(This,context) )
    ( (This)->lpVtbl->Close(This,reason) )
    ( (This)->lpVtbl->DiscardQueuedFrames(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoCompositor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoCompositorDefinition[] = L"Windows.Media.Effects.IVideoCompositorDefinition";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActivatableClassId )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionVtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActivatableClassId(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoCompositorDefinitionFactory[] = L"Windows.Media.Effects.IVideoCompositorDefinitionFactory";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory * This,
                  __RPC__in HSTRING activatableClassId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithProperties )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory * This,
                  __RPC__in HSTRING activatableClassId,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * props,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinition * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,activatableClassId,value) )
    ( (This)->lpVtbl->CreateWithProperties(This,activatableClassId,props,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoCompositorDefinitionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoEffectDefinition[] = L"Windows.Media.Effects.IVideoEffectDefinition";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ActivatableClassId )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionVtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ActivatableClassId(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoEffectDefinitionFactory[] = L"Windows.Media.Effects.IVideoEffectDefinitionFactory";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory * This,
                  __RPC__in HSTRING activatableClassId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithProperties )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory * This,
                  __RPC__in HSTRING activatableClassId,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * props,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinition * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactoryVtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,activatableClassId,value) )
    ( (This)->lpVtbl->CreateWithProperties(This,activatableClassId,props,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoEffectDefinitionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoTransformEffectDefinition[] = L"Windows.Media.Effects.IVideoTransformEffectDefinition";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinitionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PaddingColor )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PaddingColor )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
                  __x_ABI_CWindows_CUI_CColor value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OutputSize )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_OutputSize )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
                  __x_ABI_CWindows_CFoundation_CSize value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CropRectangle )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CropRectangle )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
                  __x_ABI_CWindows_CFoundation_CRect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Rotation )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CMediaRotation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Rotation )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CMediaRotation value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Mirror )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CMediaMirroringOptions * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mirror )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CMediaMirroringOptions value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProcessingAlgorithm )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
                  __x_ABI_CWindows_CMedia_CTranscoding_CMediaVideoProcessingAlgorithm value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProcessingAlgorithm )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CTranscoding_CMediaVideoProcessingAlgorithm * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinitionVtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinitionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PaddingColor(This,value) )
    ( (This)->lpVtbl->put_PaddingColor(This,value) )
    ( (This)->lpVtbl->get_OutputSize(This,value) )
    ( (This)->lpVtbl->put_OutputSize(This,value) )
    ( (This)->lpVtbl->get_CropRectangle(This,value) )
    ( (This)->lpVtbl->put_CropRectangle(This,value) )
    ( (This)->lpVtbl->get_Rotation(This,value) )
    ( (This)->lpVtbl->put_Rotation(This,value) )
    ( (This)->lpVtbl->get_Mirror(This,value) )
    ( (This)->lpVtbl->put_Mirror(This,value) )
    ( (This)->lpVtbl->put_ProcessingAlgorithm(This,value) )
    ( (This)->lpVtbl->get_ProcessingAlgorithm(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoTransformEffectDefinition2[] = L"Windows.Media.Effects.IVideoTransformEffectDefinition2";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SphericalProjection )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition2Vtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition2
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SphericalProjection(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoTransformEffectDefinition2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Media_Effects_IVideoTransformSphericalProjection[] = L"Windows.Media.Effects.IVideoTransformSphericalProjection";
typedef struct __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameFormat )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CMediaProperties_CSphericalVideoFrameFormat * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FrameFormat )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection * This,
                  __x_ABI_CWindows_CMedia_CMediaProperties_CSphericalVideoFrameFormat value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProjectionMode )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection * This,
                           __RPC__out __x_ABI_CWindows_CMedia_CPlayback_CSphericalVideoProjectionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProjectionMode )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection * This,
                  __x_ABI_CWindows_CMedia_CPlayback_CSphericalVideoProjectionMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HorizontalFieldOfViewInDegrees )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HorizontalFieldOfViewInDegrees )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ViewOrientation )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ViewOrientation )(
        __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion value
        );
    END_INTERFACE
} __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjectionVtbl;
interface __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection
{
    CONST_VTBL struct __x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjectionVtbl *lpVtbl;
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
    ( (This)->lpVtbl->get_ProjectionMode(This,value) )
    ( (This)->lpVtbl->put_ProjectionMode(This,value) )
    ( (This)->lpVtbl->get_HorizontalFieldOfViewInDegrees(This,value) )
    ( (This)->lpVtbl->put_HorizontalFieldOfViewInDegrees(This,value) )
    ( (This)->lpVtbl->get_ViewOrientation(This,value) )
    ( (This)->lpVtbl->put_ViewOrientation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CMedia_CEffects_CIVideoTransformSphericalProjection;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_AudioCaptureEffectsManager[] = L"Windows.Media.Effects.AudioCaptureEffectsManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_AudioEffect[] = L"Windows.Media.Effects.AudioEffect";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_AudioEffectDefinition[] = L"Windows.Media.Effects.AudioEffectDefinition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_AudioEffectsManager[] = L"Windows.Media.Effects.AudioEffectsManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_AudioRenderEffectsManager[] = L"Windows.Media.Effects.AudioRenderEffectsManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_CompositeVideoFrameContext[] = L"Windows.Media.Effects.CompositeVideoFrameContext";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_ProcessAudioFrameContext[] = L"Windows.Media.Effects.ProcessAudioFrameContext";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_ProcessVideoFrameContext[] = L"Windows.Media.Effects.ProcessVideoFrameContext";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_VideoCompositorDefinition[] = L"Windows.Media.Effects.VideoCompositorDefinition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_VideoEffectDefinition[] = L"Windows.Media.Effects.VideoEffectDefinition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_VideoTransformEffectDefinition[] = L"Windows.Media.Effects.VideoTransformEffectDefinition";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Media_Effects_VideoTransformSphericalProjection[] = L"Windows.Media.Effects.VideoTransformSphericalProjection";
       
       
#pragma clang diagnostic pop
