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
#include "Windows.Devices.Haptics.h"
#include "Windows.Devices.Power.h"
#include "Windows.Foundation.Numerics.h"
#include "Windows.Perception.h"
#include "Windows.Perception.People.h"
#include "Windows.Perception.Spatial.h"
#include "Windows.Storage.Streams.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController3 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController3;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics2 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics2;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource4 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource4;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState3 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState3;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose3 __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose3;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs;
typedef interface __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState;
typedef struct __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This, __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceStateVtbl;
interface __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceStateVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState;
typedef struct __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceStateVtbl;
interface __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceStateVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState;
typedef struct __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
                       __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceStateVtbl;
interface __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceStateVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType;
typedef struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * This, __RPC__out __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamWithContentType * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl;
interface __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentTypeVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver;
typedef interface __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserverVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserverVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver;
typedef struct __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserverVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CPerception__CPeople__CHandMeshObserver **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * This, __RPC__out __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserverVtbl;
interface __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserverVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;
typedef interface __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion;
EXTERN_C const IID IID___FIReference_1_Windows__CFoundation__CNumerics__CQuaternion;
typedef struct __FIReference_1_Windows__CFoundation__CNumerics__CQuaternionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * This, __RPC__out struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion *value);
    END_INTERFACE
} __FIReference_1_Windows__CFoundation__CNumerics__CQuaternionVtbl;
interface __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion
{
    CONST_VTBL struct __FIReference_1_Windows__CFoundation__CNumerics__CQuaternionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController;
typedef interface __x_ABI_CWindows_CDevices_CPower_CIBatteryReport __x_ABI_CWindows_CDevices_CPower_CIBatteryReport;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion;
typedef struct __x_ABI_CWindows_CFoundation_CNumerics_CVector3 __x_ABI_CWindows_CFoundation_CNumerics_CVector3;
typedef interface __x_ABI_CWindows_CPerception_CPeople_CIEyesPose __x_ABI_CWindows_CPerception_CPeople_CIEyesPose;
typedef interface __x_ABI_CWindows_CPerception_CPeople_CIHandPose __x_ABI_CWindows_CPerception_CPeople_CIHandPose;
typedef interface __x_ABI_CWindows_CPerception_CPeople_CIHeadPose __x_ABI_CWindows_CPerception_CPeople_CIHeadPose;
typedef interface __x_ABI_CWindows_CPerception_CIPerceptionTimestamp __x_ABI_CWindows_CPerception_CIPerceptionTimestamp;
typedef interface __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem;
typedef enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialGestureSettings __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialGestureSettings;
typedef enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionPressKind __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionPressKind;
typedef enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceHandedness __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceHandedness;
typedef enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind;
typedef enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourcePositionAccuracy __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourcePositionAccuracy;
enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialGestureSettings
{
    SpatialGestureSettings_None = 0,
    SpatialGestureSettings_Tap = 0x1,
    SpatialGestureSettings_DoubleTap = 0x2,
    SpatialGestureSettings_Hold = 0x4,
    SpatialGestureSettings_ManipulationTranslate = 0x8,
    SpatialGestureSettings_NavigationX = 0x10,
    SpatialGestureSettings_NavigationY = 0x20,
    SpatialGestureSettings_NavigationZ = 0x40,
    SpatialGestureSettings_NavigationRailsX = 0x80,
    SpatialGestureSettings_NavigationRailsY = 0x100,
    SpatialGestureSettings_NavigationRailsZ = 0x200,
};
enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionPressKind
{
    SpatialInteractionPressKind_None = 0,
    SpatialInteractionPressKind_Select = 1,
    SpatialInteractionPressKind_Menu = 2,
    SpatialInteractionPressKind_Grasp = 3,
    SpatialInteractionPressKind_Touchpad = 4,
    SpatialInteractionPressKind_Thumbstick = 5,
};
enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceHandedness
{
    SpatialInteractionSourceHandedness_Unspecified = 0,
    SpatialInteractionSourceHandedness_Left = 1,
    SpatialInteractionSourceHandedness_Right = 2,
};
enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind
{
    SpatialInteractionSourceKind_Other = 0,
    SpatialInteractionSourceKind_Hand = 1,
    SpatialInteractionSourceKind_Voice = 2,
    SpatialInteractionSourceKind_Controller = 3,
};
enum __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourcePositionAccuracy
{
    SpatialInteractionSourcePositionAccuracy_High = 0,
    SpatialInteractionSourcePositionAccuracy_Approximate = 1,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialGestureRecognizer[] = L"Windows.UI.Input.Spatial.ISpatialGestureRecognizer";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_RecognitionStarted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionStartedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RecognitionStarted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RecognitionEnded )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialRecognitionEndedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RecognitionEnded )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Tapped )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialTappedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Tapped )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_HoldStarted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldStartedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_HoldStarted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_HoldCompleted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_HoldCompleted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_HoldCanceled )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialHoldCanceledEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_HoldCanceled )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ManipulationStarted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationStartedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ManipulationStarted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ManipulationUpdated )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationUpdatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ManipulationUpdated )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ManipulationCompleted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ManipulationCompleted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ManipulationCanceled )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialManipulationCanceledEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ManipulationCanceled )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_NavigationStarted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationStartedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NavigationStarted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_NavigationUpdated )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationUpdatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NavigationUpdated )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_NavigationCompleted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NavigationCompleted )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_NavigationCanceled )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialGestureRecognizer_Windows__CUI__CInput__CSpatial__CSpatialNavigationCanceledEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_NavigationCanceled )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *CaptureInteraction )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction * interaction
        );
    HRESULT ( STDMETHODCALLTYPE *CancelPendingGestures )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetGestureSettings )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                  __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialGestureSettings settings,
                           __RPC__out boolean * succeeded
        );
                   HRESULT ( STDMETHODCALLTYPE *get_GestureSettings )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialGestureSettings * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_RecognitionStarted(This,handler,token) )
    ( (This)->lpVtbl->remove_RecognitionStarted(This,token) )
    ( (This)->lpVtbl->add_RecognitionEnded(This,handler,token) )
    ( (This)->lpVtbl->remove_RecognitionEnded(This,token) )
    ( (This)->lpVtbl->add_Tapped(This,handler,token) )
    ( (This)->lpVtbl->remove_Tapped(This,token) )
    ( (This)->lpVtbl->add_HoldStarted(This,handler,token) )
    ( (This)->lpVtbl->remove_HoldStarted(This,token) )
    ( (This)->lpVtbl->add_HoldCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_HoldCompleted(This,token) )
    ( (This)->lpVtbl->add_HoldCanceled(This,handler,token) )
    ( (This)->lpVtbl->remove_HoldCanceled(This,token) )
    ( (This)->lpVtbl->add_ManipulationStarted(This,handler,token) )
    ( (This)->lpVtbl->remove_ManipulationStarted(This,token) )
    ( (This)->lpVtbl->add_ManipulationUpdated(This,handler,token) )
    ( (This)->lpVtbl->remove_ManipulationUpdated(This,token) )
    ( (This)->lpVtbl->add_ManipulationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_ManipulationCompleted(This,token) )
    ( (This)->lpVtbl->add_ManipulationCanceled(This,handler,token) )
    ( (This)->lpVtbl->remove_ManipulationCanceled(This,token) )
    ( (This)->lpVtbl->add_NavigationStarted(This,handler,token) )
    ( (This)->lpVtbl->remove_NavigationStarted(This,token) )
    ( (This)->lpVtbl->add_NavigationUpdated(This,handler,token) )
    ( (This)->lpVtbl->remove_NavigationUpdated(This,token) )
    ( (This)->lpVtbl->add_NavigationCompleted(This,handler,token) )
    ( (This)->lpVtbl->remove_NavigationCompleted(This,token) )
    ( (This)->lpVtbl->add_NavigationCanceled(This,handler,token) )
    ( (This)->lpVtbl->remove_NavigationCanceled(This,token) )
    ( (This)->lpVtbl->CaptureInteraction(This,interaction) )
    ( (This)->lpVtbl->CancelPendingGestures(This) )
    ( (This)->lpVtbl->TrySetGestureSettings(This,settings,succeeded) )
    ( (This)->lpVtbl->get_GestureSettings(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialGestureRecognizerFactory[] = L"Windows.UI.Input.Spatial.ISpatialGestureRecognizerFactory";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory * This,
                  __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialGestureSettings settings,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizer * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactoryVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,settings,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialGestureRecognizerFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialHoldCanceledEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialHoldCanceledEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCanceledEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialHoldCompletedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialHoldCompletedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialHoldStartedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialHoldStartedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetPointerPose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )
    ( (This)->lpVtbl->TryGetPointerPose(This,coordinateSystem,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialHoldStartedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteraction[] = L"Windows.UI.Input.Spatial.ISpatialInteraction";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SourceState )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SourceState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionController[] = L"Windows.UI.Input.Spatial.ISpatialInteractionController";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HasTouchpad )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasThumbstick )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VendorId )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProductId )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
                           __RPC__out UINT16 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Version )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * This,
                           __RPC__out UINT16 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HasTouchpad(This,value) )
    ( (This)->lpVtbl->get_HasThumbstick(This,value) )
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )
    ( (This)->lpVtbl->get_VendorId(This,value) )
    ( (This)->lpVtbl->get_ProductId(This,value) )
    ( (This)->lpVtbl->get_Version(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionController2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionController2";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetRenderableModelAsync )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CStorage__CStreams__CIRandomAccessStreamWithContentType * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetRenderableModelAsync(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionController3[] = L"Windows.UI.Input.Spatial.ISpatialInteractionController3";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetBatteryReport )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CPower_CIBatteryReport * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController3Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetBatteryReport(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionControllerProperties[] = L"Windows.UI.Input.Spatial.ISpatialInteractionControllerProperties";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsTouchpadTouched )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTouchpadPressed )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsThumbstickPressed )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ThumbstickX )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ThumbstickY )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TouchpadX )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TouchpadY )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * This,
                           __RPC__out DOUBLE * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerPropertiesVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsTouchpadTouched(This,value) )
    ( (This)->lpVtbl->get_IsTouchpadPressed(This,value) )
    ( (This)->lpVtbl->get_IsThumbstickPressed(This,value) )
    ( (This)->lpVtbl->get_ThumbstickX(This,value) )
    ( (This)->lpVtbl->get_ThumbstickY(This,value) )
    ( (This)->lpVtbl->get_TouchpadX(This,value) )
    ( (This)->lpVtbl->get_TouchpadY(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionDetectedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialInteractionDetectedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetPointerPose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Interaction )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteraction * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )
    ( (This)->lpVtbl->TryGetPointerPose(This,coordinateSystem,value) )
    ( (This)->lpVtbl->get_Interaction(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionDetectedEventArgs2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionDetectedEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InteractionSource )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InteractionSource(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionDetectedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionManager[] = L"Windows.UI.Input.Spatial.ISpatialInteractionManager";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_SourceDetected )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SourceDetected )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SourceLost )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SourceLost )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SourceUpdated )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SourceUpdated )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SourcePressed )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SourcePressed )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SourceReleased )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SourceReleased )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_InteractionDetected )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CSpatial__CSpatialInteractionManager_Windows__CUI__CInput__CSpatial__CSpatialInteractionDetectedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_InteractionDetected )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *GetDetectedSourcesAtTimestamp )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * timeStamp,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CSpatial__CSpatialInteractionSourceState * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_SourceDetected(This,handler,token) )
    ( (This)->lpVtbl->remove_SourceDetected(This,token) )
    ( (This)->lpVtbl->add_SourceLost(This,handler,token) )
    ( (This)->lpVtbl->remove_SourceLost(This,token) )
    ( (This)->lpVtbl->add_SourceUpdated(This,handler,token) )
    ( (This)->lpVtbl->remove_SourceUpdated(This,token) )
    ( (This)->lpVtbl->add_SourcePressed(This,handler,token) )
    ( (This)->lpVtbl->remove_SourcePressed(This,token) )
    ( (This)->lpVtbl->add_SourceReleased(This,handler,token) )
    ( (This)->lpVtbl->remove_SourceReleased(This,token) )
    ( (This)->lpVtbl->add_InteractionDetected(This,handler,token) )
    ( (This)->lpVtbl->remove_InteractionDetected(This,token) )
    ( (This)->lpVtbl->GetDetectedSourcesAtTimestamp(This,timeStamp,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionManagerStatics[] = L"Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManager * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionManagerStatics2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionManagerStatics2";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSourceKindSupported )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics2 * This,
                  __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind kind,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsSourceKindSupported(This,kind,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSource[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSource";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Kind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSource2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSource2";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsPointingSupported )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsMenuSupported )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsGraspSupported )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Controller )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionController * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetStateAtTimestamp )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * timestamp,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsPointingSupported(This,value) )
    ( (This)->lpVtbl->get_IsMenuSupported(This,value) )
    ( (This)->lpVtbl->get_IsGraspSupported(This,value) )
    ( (This)->lpVtbl->get_Controller(This,value) )
    ( (This)->lpVtbl->TryGetStateAtTimestamp(This,timestamp,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSource3[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSource3";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handedness )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceHandedness * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handedness(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSource4[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSource4";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryCreateHandMeshObserver )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource4 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CPeople_CIHandMeshObserver * * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryCreateHandMeshObserverAsync )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource4 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CPerception__CPeople__CHandMeshObserver * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource4Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryCreateHandMeshObserver(This,result) )
    ( (This)->lpVtbl->TryCreateHandMeshObserverAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceEventArgs2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PressKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionPressKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PressKind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Velocity )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocationVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_Velocity(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation2";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CQuaternion * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Orientation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceLocation3[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceLocation3";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PositionAccuracy )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourcePositionAccuracy * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AngularVelocity )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourcePointerPose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PositionAccuracy(This,value) )
    ( (This)->lpVtbl->get_AngularVelocity(This,value) )
    ( (This)->lpVtbl->get_SourcePointerPose(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceProperties[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceProperties";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourcePropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetSourceLossMitigationDirection )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __FIReference_1_Windows__CFoundation__CNumerics__CVector3 * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SourceLossRisk )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * This,
                           __RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetLocation )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceLocation * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourcePropertiesVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourcePropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetSourceLossMitigationDirection(This,coordinateSystem,value) )
    ( (This)->lpVtbl->get_SourceLossRisk(This,value) )
    ( (This)->lpVtbl->TryGetLocation(This,coordinateSystem,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceState[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceState";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceStateVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Source )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceProperties * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPressed )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetPointerPose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceStateVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceStateVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Source(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
    ( (This)->lpVtbl->get_IsPressed(This,value) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->TryGetPointerPose(This,coordinateSystem,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceState2[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceState2";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSelectPressed )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsMenuPressed )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsGrasped )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectPressedValue )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ControllerProperties )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionControllerProperties * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSelectPressed(This,value) )
    ( (This)->lpVtbl->get_IsMenuPressed(This,value) )
    ( (This)->lpVtbl->get_IsGrasped(This,value) )
    ( (This)->lpVtbl->get_SelectPressedValue(This,value) )
    ( (This)->lpVtbl->get_ControllerProperties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialInteractionSourceState3[] = L"Windows.UI.Input.Spatial.ISpatialInteractionSourceState3";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetHandPose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CPeople_CIHandPose * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState3Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetHandPose(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSourceState3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialManipulationCanceledEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialManipulationCanceledEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCanceledEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialManipulationCompletedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialManipulationCompletedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetCumulativeDelta )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )
    ( (This)->lpVtbl->TryGetCumulativeDelta(This,coordinateSystem,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialManipulationDelta[] = L"Windows.UI.Input.Spatial.ISpatialManipulationDelta";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDeltaVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Translation )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDeltaVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDeltaVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Translation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialManipulationStartedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialManipulationStartedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetPointerPose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )
    ( (This)->lpVtbl->TryGetPointerPose(This,coordinateSystem,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationStartedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialManipulationUpdatedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialManipulationUpdatedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetCumulativeDelta )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationDelta * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )
    ( (This)->lpVtbl->TryGetCumulativeDelta(This,coordinateSystem,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialManipulationUpdatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialNavigationCanceledEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialNavigationCanceledEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCanceledEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialNavigationCompletedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialNavigationCompletedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NormalizedOffset )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )
    ( (This)->lpVtbl->get_NormalizedOffset(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialNavigationStartedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialNavigationStartedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetPointerPose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsNavigatingX )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsNavigatingY )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsNavigatingZ )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )
    ( (This)->lpVtbl->TryGetPointerPose(This,coordinateSystem,value) )
    ( (This)->lpVtbl->get_IsNavigatingX(This,value) )
    ( (This)->lpVtbl->get_IsNavigatingY(This,value) )
    ( (This)->lpVtbl->get_IsNavigatingZ(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationStartedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialNavigationUpdatedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialNavigationUpdatedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NormalizedOffset )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )
    ( (This)->lpVtbl->get_NormalizedOffset(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialNavigationUpdatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialPointerInteractionSourcePose[] = L"Windows.UI.Input.Spatial.ISpatialPointerInteractionSourcePose";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePoseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ForwardDirection )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UpDirection )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CVector3 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePoseVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePoseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_ForwardDirection(This,value) )
    ( (This)->lpVtbl->get_UpDirection(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialPointerInteractionSourcePose2[] = L"Windows.UI.Input.Spatial.ISpatialPointerInteractionSourcePose2";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CNumerics_CQuaternion * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PositionAccuracy )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourcePositionAccuracy * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Orientation(This,value) )
    ( (This)->lpVtbl->get_PositionAccuracy(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialPointerPose[] = L"Windows.UI.Input.Spatial.ISpatialPointerPose";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Head )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CPeople_CIHeadPose * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_Head(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialPointerPose2[] = L"Windows.UI.Input.Spatial.ISpatialPointerPose2";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetInteractionSourcePose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialInteractionSource * source,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerInteractionSourcePose * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetInteractionSourcePose(This,source,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialPointerPose3[] = L"Windows.UI.Input.Spatial.ISpatialPointerPose3";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Eyes )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CPerception_CPeople_CIEyesPose * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHeadCapturedBySystem )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose3 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose3Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Eyes(This,value) )
    ( (This)->lpVtbl->get_IsHeadCapturedBySystem(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialPointerPoseStatics[] = L"Windows.UI.Input.Spatial.ISpatialPointerPoseStatics";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryGetAtTimestamp )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CIPerceptionTimestamp * timestamp,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStaticsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryGetAtTimestamp(This,coordinateSystem,timestamp,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPoseStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialRecognitionEndedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialRecognitionEndedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionEndedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialRecognitionStartedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialRecognitionStartedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetPointerPose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsGesturePossible )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs * This,
                  __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialGestureSettings gesture,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )
    ( (This)->lpVtbl->TryGetPointerPose(This,coordinateSystem,value) )
    ( (This)->lpVtbl->IsGesturePossible(This,gesture,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialRecognitionStartedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Spatial_ISpatialTappedEventArgs[] = L"Windows.UI.Input.Spatial.ISpatialTappedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InteractionSourceKind )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CSpatial_CSpatialInteractionSourceKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetPointerPose )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CPerception_CSpatial_CISpatialCoordinateSystem * coordinateSystem,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialPointerPose * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TapCount )(
        __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InteractionSourceKind(This,value) )
    ( (This)->lpVtbl->TryGetPointerPose(This,coordinateSystem,value) )
    ( (This)->lpVtbl->get_TapCount(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CSpatial_CISpatialTappedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialGestureRecognizer[] = L"Windows.UI.Input.Spatial.SpatialGestureRecognizer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialHoldCanceledEventArgs[] = L"Windows.UI.Input.Spatial.SpatialHoldCanceledEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialHoldCompletedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialHoldCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialHoldStartedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialHoldStartedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteraction[] = L"Windows.UI.Input.Spatial.SpatialInteraction";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionController[] = L"Windows.UI.Input.Spatial.SpatialInteractionController";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionControllerProperties[] = L"Windows.UI.Input.Spatial.SpatialInteractionControllerProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionDetectedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialInteractionDetectedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionManager[] = L"Windows.UI.Input.Spatial.SpatialInteractionManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionSource[] = L"Windows.UI.Input.Spatial.SpatialInteractionSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionSourceEventArgs[] = L"Windows.UI.Input.Spatial.SpatialInteractionSourceEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionSourceLocation[] = L"Windows.UI.Input.Spatial.SpatialInteractionSourceLocation";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionSourceProperties[] = L"Windows.UI.Input.Spatial.SpatialInteractionSourceProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialInteractionSourceState[] = L"Windows.UI.Input.Spatial.SpatialInteractionSourceState";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialManipulationCanceledEventArgs[] = L"Windows.UI.Input.Spatial.SpatialManipulationCanceledEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialManipulationCompletedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialManipulationCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialManipulationDelta[] = L"Windows.UI.Input.Spatial.SpatialManipulationDelta";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialManipulationStartedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialManipulationStartedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialManipulationUpdatedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialManipulationUpdatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialNavigationCanceledEventArgs[] = L"Windows.UI.Input.Spatial.SpatialNavigationCanceledEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialNavigationCompletedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialNavigationCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialNavigationStartedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialNavigationStartedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialNavigationUpdatedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialNavigationUpdatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialPointerInteractionSourcePose[] = L"Windows.UI.Input.Spatial.SpatialPointerInteractionSourcePose";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialPointerPose[] = L"Windows.UI.Input.Spatial.SpatialPointerPose";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialRecognitionEndedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialRecognitionEndedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialRecognitionStartedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialRecognitionStartedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Spatial_SpatialTappedEventArgs[] = L"Windows.UI.Input.Spatial.SpatialTappedEventArgs";
       
       
#pragma clang diagnostic pop
