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
#include "Windows.UI.Composition.h"
#include "Windows.UI.Input.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValue __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValue;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValueStatics __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValueStatics;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSource __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSource;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfiguration __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfiguration;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker2 __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker3 __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker3;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker4 __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker4;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs2 __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs2 __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifier __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifier;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifierFactory __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifierFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotion __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotion;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotionStatics __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotionStatics;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotion __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotion;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotionStatics __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotionStatics;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValue __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValue;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValueStatics __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValueStatics;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs2 __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs3 __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs3;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs2 __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwner __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwner;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerRequestIgnoredArgs __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerRequestIgnoredArgs;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics2 __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerValuesChangedArgs __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerValuesChangedArgs;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifier __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifier;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifierFactory __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifierFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotion __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotion;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotionStatics __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotionStatics;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2 __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource3 __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource3;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceObjectFactory __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceObjectFactory;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics;
typedef interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics2 __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics2;
typedef interface __FIIterator_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue __FIIterator_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue;
typedef struct __FIIterator_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * This, __RPC__out __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValue * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValue * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValueVtbl;
interface __FIIterator_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValueVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue;
typedef struct __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValueVtbl;
interface __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValueVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource __FIIterator_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource;
typedef struct __FIIterator_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource * This, __RPC__out __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSource * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSource * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSourceVtbl;
interface __FIIterator_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSourceVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource __FIIterable_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource;
typedef struct __FIIterable_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSourceVtbl;
interface __FIIterable_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSource
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CComposition__CInteractions__CICompositionInteractionSourceVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier;
typedef struct __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * This, __RPC__out __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifier * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifier * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifierVtbl;
interface __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifierVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier;
typedef struct __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifierVtbl;
interface __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifierVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier;
typedef struct __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier * This, __RPC__out __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifier * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifier * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifierVtbl;
interface __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifierVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier;
typedef struct __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifierVtbl;
interface __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifierVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef interface __FIReference_1_Windows__CFoundation__CNumerics__CVector3 __FIReference_1_Windows__CFoundation__CNumerics__CVector3;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CNumerics__CVector3;
typedef struct __FIReference_1_Windows__CFoundation__CNumerics__CVector3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CNumerics__CVector3Vtbl;
interface __FIReference_1_Windows__CFoundation__CNumerics__CVector3
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CNumerics__CVector3Vtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FIReference_1_float __FIReference_1_float;
EXTERN_C const IID IID___FIReference_1_float;
typedef struct __FIReference_1_floatVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_float * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_float * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_float * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_float * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_float * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_float * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_float * This, __RPC__out float *value);
    END_INTERFACE
} __FIReference_1_floatVtbl;
interface __FIReference_1_float
{
    CONST_VTBL struct __FIReference_1_floatVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CICompositor __x_ABI_CWindows_CUI_CComposition_CICompositor;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVisualElement __x_ABI_CWindows_CUI_CComposition_CIVisualElement;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVisual __x_ABI_CWindows_CUI_CComposition_CIVisual;
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerPoint __x_ABI_CWindows_CUI_CInput_CIPointerPoint;
typedef enum __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionBindingAxisModes __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionBindingAxisModes;
typedef enum __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionChainingMode __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionChainingMode;
typedef enum __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionSourceMode __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionSourceMode;
typedef enum __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionSourceRedirectionMode __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionSourceRedirectionMode;
typedef enum __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionTrackerClampingOption __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionTrackerClampingOption;
typedef enum __x_ABI_CWindows_CUI_CComposition_CInteractions_CVisualInteractionSourceRedirectionMode __x_ABI_CWindows_CUI_CComposition_CInteractions_CVisualInteractionSourceRedirectionMode;
enum __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionBindingAxisModes
{
    InteractionBindingAxisModes_None = 0,
    InteractionBindingAxisModes_PositionX = 0x1,
    InteractionBindingAxisModes_PositionY = 0x2,
    InteractionBindingAxisModes_Scale = 0x4,
};
enum __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionChainingMode
{
    InteractionChainingMode_Auto = 0,
    InteractionChainingMode_Always = 1,
    InteractionChainingMode_Never = 2,
};
enum __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionSourceMode
{
    InteractionSourceMode_Disabled = 0,
    InteractionSourceMode_EnabledWithInertia = 1,
    InteractionSourceMode_EnabledWithoutInertia = 2,
};
enum __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionSourceRedirectionMode
{
    InteractionSourceRedirectionMode_Disabled = 0,
    InteractionSourceRedirectionMode_Enabled = 1,
};
enum __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionTrackerClampingOption
{
    InteractionTrackerClampingOption_Auto = 0,
    InteractionTrackerClampingOption_Disabled = 1,
};
enum __x_ABI_CWindows_CUI_CComposition_CInteractions_CVisualInteractionSourceRedirectionMode
{
    VisualInteractionSourceRedirectionMode_Off = 0,
    VisualInteractionSourceRedirectionMode_CapableTouchpadOnly = 1,
    VisualInteractionSourceRedirectionMode_PointerWheelOnly = 2,
    VisualInteractionSourceRedirectionMode_CapableTouchpadAndPointerWheel = 3,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_ICompositionConditionalValue[] = L"Windows.UI.Composition.Interactions.ICompositionConditionalValue";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Condition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValue * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Condition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValue * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValue * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Value )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValue * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValueVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValue
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Condition(This,value) )
    ( (This)->lpVtbl->put_Condition(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->put_Value(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_ICompositionConditionalValueStatics[] = L"Windows.UI.Composition.Interactions.ICompositionConditionalValueStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValueStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * compositor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValue * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValueStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,compositor,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionConditionalValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_ICompositionInteractionSource[] = L"Windows.UI.Composition.Interactions.ICompositionInteractionSource";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_ICompositionInteractionSourceCollection[] = L"Windows.UI.Composition.Interactions.ICompositionInteractionSourceCollection";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollectionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Count )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *Add )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSource * value
        );
    HRESULT ( STDMETHODCALLTYPE *Remove )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSource * value
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveAll )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollectionVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollectionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Count(This,value) )
    ( (This)->lpVtbl->Add(This,value) )
    ( (This)->lpVtbl->Remove(This,value) )
    ( (This)->lpVtbl->RemoveAll(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionSourceConfiguration[] = L"Windows.UI.Composition.Interactions.IInteractionSourceConfiguration";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PositionXSourceMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionSourceRedirectionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PositionXSourceMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfiguration * This,
                  __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionSourceRedirectionMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PositionYSourceMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionSourceRedirectionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PositionYSourceMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfiguration * This,
                  __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionSourceRedirectionMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleSourceMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfiguration * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionSourceRedirectionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScaleSourceMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfiguration * This,
                  __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionSourceRedirectionMode value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfigurationVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PositionXSourceMode(This,value) )
    ( (This)->lpVtbl->put_PositionXSourceMode(This,value) )
    ( (This)->lpVtbl->get_PositionYSourceMode(This,value) )
    ( (This)->lpVtbl->put_PositionYSourceMode(This,value) )
    ( (This)->lpVtbl->get_ScaleSourceMode(This,value) )
    ( (This)->lpVtbl->put_ScaleSourceMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTracker[] = L"Windows.UI.Composition.Interactions.IInteractionTracker";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InteractionSources )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CICompositionInteractionSourceCollection * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPositionRoundingSuggested )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxPosition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxPosition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxScale )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MaxScale )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinPosition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinPosition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinScale )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_MinScale )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NaturalRestingPosition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NaturalRestingScale )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Owner )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwner * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PositionInertiaDecayRate )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PositionInertiaDecayRate )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                  __RPC__in_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PositionVelocityInPixelsPerSecond )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Scale )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleInertiaDecayRate )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                           __RPC__deref_out_opt __FIReference_1_float * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScaleInertiaDecayRate )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                  __RPC__in_opt __FIReference_1_float * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleVelocityInPercentPerSecond )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                           __RPC__out FLOAT * value
        );
    HRESULT ( STDMETHODCALLTYPE *AdjustPositionXIfGreaterThanThreshold )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                  FLOAT adjustment,
                  FLOAT positionThreshold
        );
    HRESULT ( STDMETHODCALLTYPE *AdjustPositionYIfGreaterThanThreshold )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                  FLOAT adjustment,
                  FLOAT positionThreshold
        );
    HRESULT ( STDMETHODCALLTYPE *ConfigurePositionXInertiaModifiers )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * modifiers
        );
    HRESULT ( STDMETHODCALLTYPE *ConfigurePositionYInertiaModifiers )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * modifiers
        );
    HRESULT ( STDMETHODCALLTYPE *ConfigureScaleInertiaModifiers )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerInertiaModifier * modifiers
        );
    HRESULT ( STDMETHODCALLTYPE *TryUpdatePosition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryUpdatePositionBy )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 amount,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryUpdatePositionWithAnimation )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * animation,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryUpdatePositionWithAdditionalVelocity )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 velocityInPixelsPerSecond,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryUpdateScale )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                  FLOAT value,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 centerPoint,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryUpdateScaleWithAnimation )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositionAnimation * animation,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 centerPoint,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryUpdateScaleWithAdditionalVelocity )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * This,
                  FLOAT velocityInPercentPerSecond,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 centerPoint,
                           __RPC__out INT32 * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InteractionSources(This,value) )
    ( (This)->lpVtbl->get_IsPositionRoundingSuggested(This,value) )
    ( (This)->lpVtbl->get_MaxPosition(This,value) )
    ( (This)->lpVtbl->put_MaxPosition(This,value) )
    ( (This)->lpVtbl->get_MaxScale(This,value) )
    ( (This)->lpVtbl->put_MaxScale(This,value) )
    ( (This)->lpVtbl->get_MinPosition(This,value) )
    ( (This)->lpVtbl->put_MinPosition(This,value) )
    ( (This)->lpVtbl->get_MinScale(This,value) )
    ( (This)->lpVtbl->put_MinScale(This,value) )
    ( (This)->lpVtbl->get_NaturalRestingPosition(This,value) )
    ( (This)->lpVtbl->get_NaturalRestingScale(This,value) )
    ( (This)->lpVtbl->get_Owner(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_PositionInertiaDecayRate(This,value) )
    ( (This)->lpVtbl->put_PositionInertiaDecayRate(This,value) )
    ( (This)->lpVtbl->get_PositionVelocityInPixelsPerSecond(This,value) )
    ( (This)->lpVtbl->get_Scale(This,value) )
    ( (This)->lpVtbl->get_ScaleInertiaDecayRate(This,value) )
    ( (This)->lpVtbl->put_ScaleInertiaDecayRate(This,value) )
    ( (This)->lpVtbl->get_ScaleVelocityInPercentPerSecond(This,value) )
    ( (This)->lpVtbl->AdjustPositionXIfGreaterThanThreshold(This,adjustment,positionThreshold) )
    ( (This)->lpVtbl->AdjustPositionYIfGreaterThanThreshold(This,adjustment,positionThreshold) )
    ( (This)->lpVtbl->ConfigurePositionXInertiaModifiers(This,modifiers) )
    ( (This)->lpVtbl->ConfigurePositionYInertiaModifiers(This,modifiers) )
    ( (This)->lpVtbl->ConfigureScaleInertiaModifiers(This,modifiers) )
    ( (This)->lpVtbl->TryUpdatePosition(This,value,result) )
    ( (This)->lpVtbl->TryUpdatePositionBy(This,amount,result) )
    ( (This)->lpVtbl->TryUpdatePositionWithAnimation(This,animation,result) )
    ( (This)->lpVtbl->TryUpdatePositionWithAdditionalVelocity(This,velocityInPixelsPerSecond,result) )
    ( (This)->lpVtbl->TryUpdateScale(This,value,centerPoint,result) )
    ( (This)->lpVtbl->TryUpdateScaleWithAnimation(This,animation,centerPoint,result) )
    ( (This)->lpVtbl->TryUpdateScaleWithAdditionalVelocity(This,velocityInPercentPerSecond,centerPoint,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTracker2[] = L"Windows.UI.Composition.Interactions.IInteractionTracker2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ConfigureCenterPointXInertiaModifiers )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker2 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * conditionalValues
        );
    HRESULT ( STDMETHODCALLTYPE *ConfigureCenterPointYInertiaModifiers )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker2 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * conditionalValues
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ConfigureCenterPointXInertiaModifiers(This,conditionalValues) )
    ( (This)->lpVtbl->ConfigureCenterPointYInertiaModifiers(This,conditionalValues) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTracker3[] = L"Windows.UI.Composition.Interactions.IInteractionTracker3";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ConfigureVector2PositionInertiaModifiers )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker3 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CComposition__CInteractions__CInteractionTrackerVector2InertiaModifier * modifiers
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker3Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ConfigureVector2PositionInertiaModifiers(This,modifiers) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTracker4[] = L"Windows.UI.Composition.Interactions.IInteractionTracker4";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *TryUpdatePositionWithOption )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker4 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 value,
                  __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionTrackerClampingOption option,
                           __RPC__out INT32 * result
        );
                    HRESULT ( STDMETHODCALLTYPE *TryUpdatePositionByWithOption )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker4 * This,
                  __x_ABI_CWindows_CFoundation_CNumerics_CVector3 amount,
                  __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionTrackerClampingOption option,
                           __RPC__out INT32 * result
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInertiaFromImpulse )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker4 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker4Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryUpdatePositionWithOption(This,value,option,result) )
    ( (This)->lpVtbl->TryUpdatePositionByWithOption(This,amount,option,result) )
    ( (This)->lpVtbl->get_IsInertiaFromImpulse(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerCustomAnimationStateEnteredArgs[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerCustomAnimationStateEnteredArgs";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequestId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerCustomAnimationStateEnteredArgs2[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerCustomAnimationStateEnteredArgs2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsFromBinding )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsFromBinding(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerIdleStateEnteredArgs[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerIdleStateEnteredArgs";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequestId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerIdleStateEnteredArgs2[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerIdleStateEnteredArgs2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsFromBinding )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsFromBinding(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaModifier[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaModifier";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifier * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifier * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifier * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifier * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifier * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifier * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifierVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifier
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifierVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifier;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaModifierFactory[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaModifierFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifierFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifierFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifierFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifierFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifierFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifierFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifierFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifierFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifierFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifierFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaModifierFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotion[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaMotion";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotion * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotion * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotion * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotion * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotion * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotion * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Condition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotion * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Condition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotion * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Motion )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotion * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Motion )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotion * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotionVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotion
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Condition(This,value) )
    ( (This)->lpVtbl->put_Condition(This,value) )
    ( (This)->lpVtbl->get_Motion(This,value) )
    ( (This)->lpVtbl->put_Motion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotion;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaMotionStatics[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaMotionStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotionStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * compositor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotion * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotionStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,compositor,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaMotionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotion[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaNaturalMotion";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotion * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotion * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotion * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotion * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotion * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotion * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Condition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotion * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Condition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotion * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NaturalMotion )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotion * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NaturalMotion )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotion * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIScalarNaturalMotionAnimation * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotionVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotion
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Condition(This,value) )
    ( (This)->lpVtbl->put_Condition(This,value) )
    ( (This)->lpVtbl->get_NaturalMotion(This,value) )
    ( (This)->lpVtbl->put_NaturalMotion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotion;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaNaturalMotionStatics[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaNaturalMotionStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotionStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * compositor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotion * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotionStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,compositor,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaNaturalMotionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValue[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaRestingValue";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValueVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValue * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValue * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValue * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValue * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValue * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValue * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Condition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValue * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Condition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValue * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RestingValue )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValue * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RestingValue )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValue * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValueVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValue
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValueVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Condition(This,value) )
    ( (This)->lpVtbl->put_Condition(This,value) )
    ( (This)->lpVtbl->get_RestingValue(This,value) )
    ( (This)->lpVtbl->put_RestingValue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValue;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaRestingValueStatics[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaRestingValueStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValueStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValueStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValueStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValueStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValueStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValueStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValueStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValueStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * compositor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValue * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValueStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValueStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValueStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,compositor,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaRestingValueStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaStateEnteredArgs";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ModifiedRestingPosition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ModifiedRestingScale )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs * This,
                           __RPC__deref_out_opt __FIReference_1_float * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NaturalRestingPosition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NaturalRestingScale )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PositionVelocityInPixelsPerSecond )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleVelocityInPercentPerSecond )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs * This,
                           __RPC__out FLOAT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ModifiedRestingPosition(This,value) )
    ( (This)->lpVtbl->get_ModifiedRestingScale(This,value) )
    ( (This)->lpVtbl->get_NaturalRestingPosition(This,value) )
    ( (This)->lpVtbl->get_NaturalRestingScale(This,value) )
    ( (This)->lpVtbl->get_PositionVelocityInPixelsPerSecond(This,value) )
    ( (This)->lpVtbl->get_RequestId(This,value) )
    ( (This)->lpVtbl->get_ScaleVelocityInPercentPerSecond(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs2[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaStateEnteredArgs2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsInertiaFromImpulse )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsInertiaFromImpulse(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerInertiaStateEnteredArgs3[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerInertiaStateEnteredArgs3";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsFromBinding )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs3 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs3Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsFromBinding(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerInteractingStateEnteredArgs[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerInteractingStateEnteredArgs";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequestId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerInteractingStateEnteredArgs2[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerInteractingStateEnteredArgs2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsFromBinding )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsFromBinding(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerOwner[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerOwner";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwnerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwner * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwner * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwner * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwner * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwner * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwner * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CustomAnimationStateEntered )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwner * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerCustomAnimationStateEnteredArgs * args
        );
    HRESULT ( STDMETHODCALLTYPE *IdleStateEntered )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwner * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerIdleStateEnteredArgs * args
        );
    HRESULT ( STDMETHODCALLTYPE *InertiaStateEntered )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwner * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInertiaStateEnteredArgs * args
        );
    HRESULT ( STDMETHODCALLTYPE *InteractingStateEntered )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwner * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerInteractingStateEnteredArgs * args
        );
    HRESULT ( STDMETHODCALLTYPE *RequestIgnored )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwner * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerRequestIgnoredArgs * args
        );
    HRESULT ( STDMETHODCALLTYPE *ValuesChanged )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwner * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerValuesChangedArgs * args
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwnerVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwner
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwnerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CustomAnimationStateEntered(This,sender,args) )
    ( (This)->lpVtbl->IdleStateEntered(This,sender,args) )
    ( (This)->lpVtbl->InertiaStateEntered(This,sender,args) )
    ( (This)->lpVtbl->InteractingStateEntered(This,sender,args) )
    ( (This)->lpVtbl->RequestIgnored(This,sender,args) )
    ( (This)->lpVtbl->ValuesChanged(This,sender,args) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwner;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerRequestIgnoredArgs[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerRequestIgnoredArgs";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerRequestIgnoredArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerRequestIgnoredArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerRequestIgnoredArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerRequestIgnoredArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerRequestIgnoredArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerRequestIgnoredArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerRequestIgnoredArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerRequestIgnoredArgs * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerRequestIgnoredArgsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerRequestIgnoredArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerRequestIgnoredArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RequestId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerRequestIgnoredArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerStatics[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * compositor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithOwner )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * compositor,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerOwner * owner,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,compositor,result) )
    ( (This)->lpVtbl->CreateWithOwner(This,compositor,owner,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerStatics2[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerStatics2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetBindingMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * boundTracker1,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * boundTracker2,
                  __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionBindingAxisModes axisMode
        );
    HRESULT ( STDMETHODCALLTYPE *GetBindingMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * boundTracker1,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTracker * boundTracker2,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionBindingAxisModes * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetBindingMode(This,boundTracker1,boundTracker2,axisMode) )
    ( (This)->lpVtbl->GetBindingMode(This,boundTracker1,boundTracker2,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerValuesChangedArgs[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerValuesChangedArgs";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerValuesChangedArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerValuesChangedArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerValuesChangedArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerValuesChangedArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerValuesChangedArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerValuesChangedArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerValuesChangedArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerValuesChangedArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RequestId )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerValuesChangedArgs * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Scale )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerValuesChangedArgs * This,
                           __RPC__out FLOAT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerValuesChangedArgsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerValuesChangedArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerValuesChangedArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_RequestId(This,value) )
    ( (This)->lpVtbl->get_Scale(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerValuesChangedArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaModifier[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerVector2InertiaModifier";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifierVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifier * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifier * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifier * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifier * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifier * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifier * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifierVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifier
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifierVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifier;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaModifierFactory[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerVector2InertiaModifierFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifierFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifierFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifierFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifierFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifierFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifierFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifierFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifierFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifierFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifierFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaModifierFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotion[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerVector2InertiaNaturalMotion";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotion * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotion * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotion * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotion * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotion * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotion * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Condition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotion * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Condition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotion * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIExpressionAnimation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NaturalMotion )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotion * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NaturalMotion )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotion * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVector2NaturalMotionAnimation * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotionVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotion
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Condition(This,value) )
    ( (This)->lpVtbl->put_Condition(This,value) )
    ( (This)->lpVtbl->get_NaturalMotion(This,value) )
    ( (This)->lpVtbl->put_NaturalMotion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotion;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IInteractionTrackerVector2InertiaNaturalMotionStatics[] = L"Windows.UI.Composition.Interactions.IInteractionTrackerVector2InertiaNaturalMotionStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotionStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotionStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotionStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotionStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotionStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotionStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotionStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotionStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CICompositor * compositor,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotion * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotionStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotionStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotionStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,compositor,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionTrackerVector2InertiaNaturalMotionStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IVisualInteractionSource[] = L"Windows.UI.Composition.Interactions.IVisualInteractionSource";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsPositionXRailsEnabled )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsPositionXRailsEnabled )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPositionYRailsEnabled )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsPositionYRailsEnabled )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ManipulationRedirectionMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CInteractions_CVisualInteractionSourceRedirectionMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ManipulationRedirectionMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                  __x_ABI_CWindows_CUI_CComposition_CInteractions_CVisualInteractionSourceRedirectionMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PositionXChainingMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionChainingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PositionXChainingMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                  __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionChainingMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PositionXSourceMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionSourceMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PositionXSourceMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                  __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionSourceMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PositionYChainingMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionChainingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PositionYChainingMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                  __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionChainingMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PositionYSourceMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionSourceMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PositionYSourceMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                  __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionSourceMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleChainingMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionChainingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScaleChainingMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                  __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionChainingMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleSourceMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                           __RPC__out __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionSourceMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScaleSourceMode )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                  __x_ABI_CWindows_CUI_CComposition_CInteractions_CInteractionSourceMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryRedirectForManipulation )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * pointerPoint
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsPositionXRailsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsPositionXRailsEnabled(This,value) )
    ( (This)->lpVtbl->get_IsPositionYRailsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsPositionYRailsEnabled(This,value) )
    ( (This)->lpVtbl->get_ManipulationRedirectionMode(This,value) )
    ( (This)->lpVtbl->put_ManipulationRedirectionMode(This,value) )
    ( (This)->lpVtbl->get_PositionXChainingMode(This,value) )
    ( (This)->lpVtbl->put_PositionXChainingMode(This,value) )
    ( (This)->lpVtbl->get_PositionXSourceMode(This,value) )
    ( (This)->lpVtbl->put_PositionXSourceMode(This,value) )
    ( (This)->lpVtbl->get_PositionYChainingMode(This,value) )
    ( (This)->lpVtbl->put_PositionYChainingMode(This,value) )
    ( (This)->lpVtbl->get_PositionYSourceMode(This,value) )
    ( (This)->lpVtbl->put_PositionYSourceMode(This,value) )
    ( (This)->lpVtbl->get_ScaleChainingMode(This,value) )
    ( (This)->lpVtbl->put_ScaleChainingMode(This,value) )
    ( (This)->lpVtbl->get_ScaleSourceMode(This,value) )
    ( (This)->lpVtbl->put_ScaleSourceMode(This,value) )
    ( (This)->lpVtbl->get_Source(This,value) )
    ( (This)->lpVtbl->TryRedirectForManipulation(This,pointerPoint) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IVisualInteractionSource2[] = L"Windows.UI.Composition.Interactions.IVisualInteractionSource2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeltaPosition )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeltaScale )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PositionVelocity )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Scale )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2 * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScaleVelocity )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2 * This,
                           __RPC__out FLOAT * value
        );
    HRESULT ( STDMETHODCALLTYPE *ConfigureCenterPointXModifiers )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * conditionalValues
        );
    HRESULT ( STDMETHODCALLTYPE *ConfigureCenterPointYModifiers )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * conditionalValues
        );
    HRESULT ( STDMETHODCALLTYPE *ConfigureDeltaPositionXModifiers )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * conditionalValues
        );
    HRESULT ( STDMETHODCALLTYPE *ConfigureDeltaPositionYModifiers )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * conditionalValues
        );
    HRESULT ( STDMETHODCALLTYPE *ConfigureDeltaScaleModifiers )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2 * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CComposition__CInteractions__CCompositionConditionalValue * conditionalValues
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeltaPosition(This,value) )
    ( (This)->lpVtbl->get_DeltaScale(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_PositionVelocity(This,value) )
    ( (This)->lpVtbl->get_Scale(This,value) )
    ( (This)->lpVtbl->get_ScaleVelocity(This,value) )
    ( (This)->lpVtbl->ConfigureCenterPointXModifiers(This,conditionalValues) )
    ( (This)->lpVtbl->ConfigureCenterPointYModifiers(This,conditionalValues) )
    ( (This)->lpVtbl->ConfigureDeltaPositionXModifiers(This,conditionalValues) )
    ( (This)->lpVtbl->ConfigureDeltaPositionYModifiers(This,conditionalValues) )
    ( (This)->lpVtbl->ConfigureDeltaScaleModifiers(This,conditionalValues) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IVisualInteractionSource3[] = L"Windows.UI.Composition.Interactions.IVisualInteractionSource3";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerWheelConfig )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIInteractionSourceConfiguration * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource3Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerWheelConfig(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IVisualInteractionSourceObjectFactory[] = L"Windows.UI.Composition.Interactions.IVisualInteractionSourceObjectFactory";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceObjectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceObjectFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceObjectFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceObjectFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceObjectFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceObjectFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceObjectFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceObjectFactoryVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceObjectFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceObjectFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceObjectFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IVisualInteractionSourceStatics[] = L"Windows.UI.Composition.Interactions.IVisualInteractionSourceStatics";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * source,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStaticsVtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,source,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Composition_Interactions_IVisualInteractionSourceStatics2[] = L"Windows.UI.Composition.Interactions.IVisualInteractionSourceStatics2";
typedef struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromIVisualElement )(
        __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisualElement * source,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSource * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromIVisualElement(This,source,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CComposition_CInteractions_CIVisualInteractionSourceStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Interactions_CompositionConditionalValue[] = L"Windows.UI.Composition.Interactions.CompositionConditionalValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Interactions_CompositionInteractionSourceCollection[] = L"Windows.UI.Composition.Interactions.CompositionInteractionSourceCollection";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Interactions_InteractionSourceConfiguration[] = L"Windows.UI.Composition.Interactions.InteractionSourceConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Interactions_InteractionTracker[] = L"Windows.UI.Composition.Interactions.InteractionTracker";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Interactions_InteractionTrackerCustomAnimationStateEnteredArgs[] = L"Windows.UI.Composition.Interactions.InteractionTrackerCustomAnimationStateEnteredArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Interactions_InteractionTrackerIdleStateEnteredArgs[] = L"Windows.UI.Composition.Interactions.InteractionTrackerIdleStateEnteredArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Interactions_InteractionTrackerInertiaModifier[] = L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaModifier";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Interactions_InteractionTrackerInertiaMotion[] = L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaMotion";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Interactions_InteractionTrackerInertiaNaturalMotion[] = L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaNaturalMotion";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Interactions_InteractionTrackerInertiaRestingValue[] = L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaRestingValue";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Interactions_InteractionTrackerInertiaStateEnteredArgs[] = L"Windows.UI.Composition.Interactions.InteractionTrackerInertiaStateEnteredArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Interactions_InteractionTrackerInteractingStateEnteredArgs[] = L"Windows.UI.Composition.Interactions.InteractionTrackerInteractingStateEnteredArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Interactions_InteractionTrackerRequestIgnoredArgs[] = L"Windows.UI.Composition.Interactions.InteractionTrackerRequestIgnoredArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Interactions_InteractionTrackerValuesChangedArgs[] = L"Windows.UI.Composition.Interactions.InteractionTrackerValuesChangedArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Interactions_InteractionTrackerVector2InertiaModifier[] = L"Windows.UI.Composition.Interactions.InteractionTrackerVector2InertiaModifier";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Interactions_InteractionTrackerVector2InertiaNaturalMotion[] = L"Windows.UI.Composition.Interactions.InteractionTrackerVector2InertiaNaturalMotion";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Composition_Interactions_VisualInteractionSource[] = L"Windows.UI.Composition.Interactions.VisualInteractionSource";
       
       
#pragma clang diagnostic pop
