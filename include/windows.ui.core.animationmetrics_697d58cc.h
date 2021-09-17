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
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription;
typedef interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory;
typedef interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation;
typedef interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation;
typedef interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation;
typedef interface __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation;
typedef struct __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This, __RPC__out __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimationVtbl;
interface __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimationVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation;
typedef struct __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimationVtbl;
interface __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimationVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation;
typedef struct __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
                       __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimationVtbl;
interface __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimationVtbl *lpVtbl;
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
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CTimeSpan __x_ABI_CWindows_CFoundation_CTimeSpan;
typedef enum __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CAnimationEffect __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CAnimationEffect;
typedef enum __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CAnimationEffectTarget __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CAnimationEffectTarget;
typedef enum __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CPropertyAnimationType __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CPropertyAnimationType;
enum __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CAnimationEffect
{
    AnimationEffect_Expand = 0,
    AnimationEffect_Collapse = 1,
    AnimationEffect_Reposition = 2,
    AnimationEffect_FadeIn = 3,
    AnimationEffect_FadeOut = 4,
    AnimationEffect_AddToList = 5,
    AnimationEffect_DeleteFromList = 6,
    AnimationEffect_AddToGrid = 7,
    AnimationEffect_DeleteFromGrid = 8,
    AnimationEffect_AddToSearchGrid = 9,
    AnimationEffect_DeleteFromSearchGrid = 10,
    AnimationEffect_AddToSearchList = 11,
    AnimationEffect_DeleteFromSearchList = 12,
    AnimationEffect_ShowEdgeUI = 13,
    AnimationEffect_ShowPanel = 14,
    AnimationEffect_HideEdgeUI = 15,
    AnimationEffect_HidePanel = 16,
    AnimationEffect_ShowPopup = 17,
    AnimationEffect_HidePopup = 18,
    AnimationEffect_PointerDown = 19,
    AnimationEffect_PointerUp = 20,
    AnimationEffect_DragSourceStart = 21,
    AnimationEffect_DragSourceEnd = 22,
    AnimationEffect_TransitionContent = 23,
    AnimationEffect_Reveal = 24,
    AnimationEffect_Hide = 25,
    AnimationEffect_DragBetweenEnter = 26,
    AnimationEffect_DragBetweenLeave = 27,
    AnimationEffect_SwipeSelect = 28,
    AnimationEffect_SwipeDeselect = 29,
    AnimationEffect_SwipeReveal = 30,
    AnimationEffect_EnterPage = 31,
    AnimationEffect_TransitionPage = 32,
    AnimationEffect_CrossFade = 33,
    AnimationEffect_Peek = 34,
    AnimationEffect_UpdateBadge = 35,
};
enum __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CAnimationEffectTarget
{
    AnimationEffectTarget_Primary = 0,
    AnimationEffectTarget_Added = 1,
    AnimationEffectTarget_Affected = 2,
    AnimationEffectTarget_Background = 3,
    AnimationEffectTarget_Content = 4,
    AnimationEffectTarget_Deleted = 5,
    AnimationEffectTarget_Deselected = 6,
    AnimationEffectTarget_DragSource = 7,
    AnimationEffectTarget_Hidden = 8,
    AnimationEffectTarget_Incoming = 9,
    AnimationEffectTarget_Outgoing = 10,
    AnimationEffectTarget_Outline = 11,
    AnimationEffectTarget_Remaining = 12,
    AnimationEffectTarget_Revealed = 13,
    AnimationEffectTarget_RowIn = 14,
    AnimationEffectTarget_RowOut = 15,
    AnimationEffectTarget_Selected = 16,
    AnimationEffectTarget_Selection = 17,
    AnimationEffectTarget_Shown = 18,
    AnimationEffectTarget_Tapped = 19,
};
enum __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CPropertyAnimationType
{
    PropertyAnimationType_Scale = 0,
    PropertyAnimationType_Translation = 1,
    PropertyAnimationType_Opacity = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_AnimationMetrics_IAnimationDescription[] = L"Windows.UI.Core.AnimationMetrics.IAnimationDescription";
typedef struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Animations )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CCore__CAnimationMetrics__CIPropertyAnimation * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StaggerDelay )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StaggerDelayFactor )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DelayLimit )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZOrder )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionVtbl;
interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Animations(This,value) )
    ( (This)->lpVtbl->get_StaggerDelay(This,value) )
    ( (This)->lpVtbl->get_StaggerDelayFactor(This,value) )
    ( (This)->lpVtbl->get_DelayLimit(This,value) )
    ( (This)->lpVtbl->get_ZOrder(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_AnimationMetrics_IAnimationDescriptionFactory[] = L"Windows.UI.Core.AnimationMetrics.IAnimationDescriptionFactory";
typedef struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory * This,
                  __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CAnimationEffect effect,
                  __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CAnimationEffectTarget target,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescription * * animation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactoryVtbl;
interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,effect,target,animation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIAnimationDescriptionFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_AnimationMetrics_IOpacityAnimation[] = L"Windows.UI.Core.AnimationMetrics.IOpacityAnimation";
typedef struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InitialOpacity )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation * This,
                           __RPC__deref_out_opt __FIReference_1_float * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FinalOpacity )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation * This,
                           __RPC__out FLOAT * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimationVtbl;
interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InitialOpacity(This,value) )
    ( (This)->lpVtbl->get_FinalOpacity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIOpacityAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_AnimationMetrics_IPropertyAnimation[] = L"Windows.UI.Core.AnimationMetrics.IPropertyAnimation";
typedef struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CPropertyAnimationType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Delay )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Duration )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CTimeSpan * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Control1 )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Control2 )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimationVtbl;
interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Type(This,value) )
    ( (This)->lpVtbl->get_Delay(This,value) )
    ( (This)->lpVtbl->get_Duration(This,value) )
    ( (This)->lpVtbl->get_Control1(This,value) )
    ( (This)->lpVtbl->get_Control2(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIPropertyAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_AnimationMetrics_IScaleAnimation[] = L"Windows.UI.Core.AnimationMetrics.IScaleAnimation";
typedef struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InitialScaleX )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This,
                           __RPC__deref_out_opt __FIReference_1_float * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InitialScaleY )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This,
                           __RPC__deref_out_opt __FIReference_1_float * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FinalScaleX )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FinalScaleY )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NormalizedOrigin )(
        __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimationVtbl;
interface __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InitialScaleX(This,value) )
    ( (This)->lpVtbl->get_InitialScaleY(This,value) )
    ( (This)->lpVtbl->get_FinalScaleX(This,value) )
    ( (This)->lpVtbl->get_FinalScaleY(This,value) )
    ( (This)->lpVtbl->get_NormalizedOrigin(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CAnimationMetrics_CIScaleAnimation;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AnimationMetrics_AnimationDescription[] = L"Windows.UI.Core.AnimationMetrics.AnimationDescription";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AnimationMetrics_OpacityAnimation[] = L"Windows.UI.Core.AnimationMetrics.OpacityAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AnimationMetrics_PropertyAnimation[] = L"Windows.UI.Core.AnimationMetrics.PropertyAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AnimationMetrics_ScaleAnimation[] = L"Windows.UI.Core.AnimationMetrics.ScaleAnimation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AnimationMetrics_TranslationAnimation[] = L"Windows.UI.Core.AnimationMetrics.TranslationAnimation";
       
       
#pragma clang diagnostic pop
