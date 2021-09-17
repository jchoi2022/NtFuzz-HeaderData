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
#include "Windows.Devices.Input.h"
#include "Windows.Storage.Streams.h"
#include "Windows.UI.Core.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CInput_CIAttachableInputObject __x_ABI_CWindows_CUI_CInput_CIAttachableInputObject;
typedef interface __x_ABI_CWindows_CUI_CInput_CIAttachableInputObjectFactory __x_ABI_CWindows_CUI_CInput_CIAttachableInputObjectFactory;
typedef interface __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIEdgeGesture __x_ABI_CWindows_CUI_CInput_CIEdgeGesture;
typedef interface __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics;
typedef interface __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer;
typedef interface __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIInputActivationListener __x_ABI_CWindows_CUI_CInput_CIInputActivationListener;
typedef interface __x_ABI_CWindows_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs __x_ABI_CWindows_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor;
typedef interface __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics;
typedef interface __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters;
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerPoint __x_ABI_CWindows_CUI_CInput_CIPointerPoint;
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties;
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2 __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2;
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics;
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform;
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings;
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialController __x_ABI_CWindows_CUI_CInput_CIRadialController;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialController2 __x_ABI_CWindows_CUI_CInput_CIRadialController2;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2 __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CInput_CITappedEventArgs __x_ABI_CWindows_CUI_CInput_CITappedEventArgs;
typedef interface __FIIterator_1_Windows__CUI__CInput__CPointerPoint __FIIterator_1_Windows__CUI__CInput__CPointerPoint;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CPointerPoint;
typedef struct __FIIterator_1_Windows__CUI__CInput__CPointerPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This, __RPC__out __x_ABI_CWindows_CUI_CInput_CIPointerPoint * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CPointerPoint * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CIPointerPoint * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CPointerPointVtbl;
interface __FIIterator_1_Windows__CUI__CInput__CPointerPoint
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CPointerPointVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CInput__CPointerPoint __FIIterable_1_Windows__CUI__CInput__CPointerPoint;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CPointerPoint;
typedef struct __FIIterable_1_Windows__CUI__CInput__CPointerPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CPointerPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPointerPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPointerPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPointerPoint * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPointerPoint * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPointerPoint * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CPointerPoint * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CPointerPoint **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CPointerPointVtbl;
interface __FIIterable_1_Windows__CUI__CInput__CPointerPoint
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CPointerPointVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem;
typedef struct __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, __RPC__out __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl;
interface __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem;
typedef struct __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CRadialControllerMenuItem **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl;
interface __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItem
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
enum __x_ABI_CWindows_CUI_CInput_CRadialControllerSystemMenuItemKind;
typedef interface __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind;
typedef struct __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKindVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This, __RPC__out enum __x_ABI_CWindows_CUI_CInput_CRadialControllerSystemMenuItemKind *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) enum __x_ABI_CWindows_CUI_CInput_CRadialControllerSystemMenuItemKind *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKindVtbl;
interface __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKindVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind;
typedef struct __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKindVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKindVtbl;
interface __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKindVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CInput__CPointerPoint __FIVectorView_1_Windows__CUI__CInput__CPointerPoint;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CInput__CPointerPoint;
typedef struct __FIVectorView_1_Windows__CUI__CInput__CPointerPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CInput_CIPointerPoint * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This,
                       __x_ABI_CWindows_CUI_CInput_CIPointerPoint * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CPointerPoint * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CIPointerPoint * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CInput__CPointerPointVtbl;
interface __FIVectorView_1_Windows__CUI__CInput__CPointerPoint
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CInput__CPointerPointVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem;
typedef struct __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                       __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl;
interface __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CInput__CPointerPoint __FIVector_1_Windows__CUI__CInput__CPointerPoint;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CInput__CPointerPoint;
typedef struct __FIVector_1_Windows__CUI__CInput__CPointerPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CPointerPoint **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This,
                   __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This, __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CIPointerPoint * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CInput__CPointerPoint * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CInput_CIPointerPoint * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CInput__CPointerPointVtbl;
interface __FIVector_1_Windows__CUI__CInput__CPointerPoint
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CInput__CPointerPointVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem;
typedef struct __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CInput__CRadialControllerMenuItem **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                   __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This, __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl;
interface __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItemVtbl *lpVtbl;
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
enum __x_ABI_CWindows_CUI_CInput_CGazeInputAccessStatus;
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus;
typedef interface __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatusVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatusVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus;
typedef struct __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatusVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CInput__CGazeInputAccessStatus **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus * This, __RPC__out enum __x_ABI_CWindows_CUI_CInput_CGazeInputAccessStatus *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatusVtbl;
interface __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatus
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CInput__CGazeInputAccessStatusVtbl *lpVtbl;
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
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInputActivationListener_Windows__CUI__CInput__CInputActivationListenerActivationChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInputActivationListener_Windows__CUI__CInput__CInputActivationListenerActivationChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInputActivationListener_Windows__CUI__CInput__CInputActivationListenerActivationChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInputActivationListener_Windows__CUI__CInput__CInputActivationListenerActivationChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInputActivationListener_Windows__CUI__CInput__CInputActivationListenerActivationChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInputActivationListener_Windows__CUI__CInput__CInputActivationListenerActivationChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInputActivationListener_Windows__CUI__CInput__CInputActivationListenerActivationChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInputActivationListener_Windows__CUI__CInput__CInputActivationListenerActivationChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIInputActivationListener * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInputActivationListener_Windows__CUI__CInput__CInputActivationListenerActivationChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CInputActivationListener_Windows__CUI__CInput__CInputActivationListenerActivationChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInputActivationListener_Windows__CUI__CInput__CInputActivationListenerActivationChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs;
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
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
typedef interface __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController;
typedef interface __x_ABI_CWindows_CDevices_CInput_CIPointerDevice __x_ABI_CWindows_CDevices_CInput_CIPointerDevice;
typedef enum __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef interface __x_ABI_CWindows_CFoundation_CIUriRuntimeClass __x_ABI_CWindows_CFoundation_CIUriRuntimeClass;
typedef interface __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference;
typedef enum __x_ABI_CWindows_CUI_CInput_CCrossSlidingState __x_ABI_CWindows_CUI_CInput_CCrossSlidingState;
typedef enum __x_ABI_CWindows_CUI_CInput_CDraggingState __x_ABI_CWindows_CUI_CInput_CDraggingState;
typedef enum __x_ABI_CWindows_CUI_CInput_CEdgeGestureKind __x_ABI_CWindows_CUI_CInput_CEdgeGestureKind;
typedef enum __x_ABI_CWindows_CUI_CInput_CGazeInputAccessStatus __x_ABI_CWindows_CUI_CInput_CGazeInputAccessStatus;
typedef enum __x_ABI_CWindows_CUI_CInput_CGestureSettings __x_ABI_CWindows_CUI_CInput_CGestureSettings;
typedef enum __x_ABI_CWindows_CUI_CInput_CHoldingState __x_ABI_CWindows_CUI_CInput_CHoldingState;
typedef enum __x_ABI_CWindows_CUI_CInput_CInputActivationState __x_ABI_CWindows_CUI_CInput_CInputActivationState;
typedef enum __x_ABI_CWindows_CUI_CInput_CPointerUpdateKind __x_ABI_CWindows_CUI_CInput_CPointerUpdateKind;
typedef enum __x_ABI_CWindows_CUI_CInput_CRadialControllerMenuKnownIcon __x_ABI_CWindows_CUI_CInput_CRadialControllerMenuKnownIcon;
typedef enum __x_ABI_CWindows_CUI_CInput_CRadialControllerSystemMenuItemKind __x_ABI_CWindows_CUI_CInput_CRadialControllerSystemMenuItemKind;
typedef struct __x_ABI_CWindows_CUI_CInput_CCrossSlideThresholds __x_ABI_CWindows_CUI_CInput_CCrossSlideThresholds;
typedef struct __x_ABI_CWindows_CUI_CInput_CManipulationDelta __x_ABI_CWindows_CUI_CInput_CManipulationDelta;
typedef struct __x_ABI_CWindows_CUI_CInput_CManipulationVelocities __x_ABI_CWindows_CUI_CInput_CManipulationVelocities;
enum __x_ABI_CWindows_CUI_CInput_CCrossSlidingState
{
    CrossSlidingState_Started = 0,
    CrossSlidingState_Dragging = 1,
    CrossSlidingState_Selecting = 2,
    CrossSlidingState_SelectSpeedBumping = 3,
    CrossSlidingState_SpeedBumping = 4,
    CrossSlidingState_Rearranging = 5,
    CrossSlidingState_Completed = 6,
};
enum __x_ABI_CWindows_CUI_CInput_CDraggingState
{
    DraggingState_Started = 0,
    DraggingState_Continuing = 1,
    DraggingState_Completed = 2,
};
enum __x_ABI_CWindows_CUI_CInput_CEdgeGestureKind
{
    EdgeGestureKind_Touch = 0,
    EdgeGestureKind_Keyboard = 1,
    EdgeGestureKind_Mouse = 2,
};
enum __x_ABI_CWindows_CUI_CInput_CGazeInputAccessStatus
{
    GazeInputAccessStatus_Unspecified = 0,
    GazeInputAccessStatus_Allowed = 1,
    GazeInputAccessStatus_DeniedByUser = 2,
    GazeInputAccessStatus_DeniedBySystem = 3,
};
enum __x_ABI_CWindows_CUI_CInput_CGestureSettings
{
    GestureSettings_None = 0,
    GestureSettings_Tap = 0x1,
    GestureSettings_DoubleTap = 0x2,
    GestureSettings_Hold = 0x4,
    GestureSettings_HoldWithMouse = 0x8,
    GestureSettings_RightTap = 0x10,
    GestureSettings_Drag = 0x20,
    GestureSettings_ManipulationTranslateX = 0x40,
    GestureSettings_ManipulationTranslateY = 0x80,
    GestureSettings_ManipulationTranslateRailsX = 0x100,
    GestureSettings_ManipulationTranslateRailsY = 0x200,
    GestureSettings_ManipulationRotate = 0x400,
    GestureSettings_ManipulationScale = 0x800,
    GestureSettings_ManipulationTranslateInertia = 0x1000,
    GestureSettings_ManipulationRotateInertia = 0x2000,
    GestureSettings_ManipulationScaleInertia = 0x4000,
    GestureSettings_CrossSlide = 0x8000,
    GestureSettings_ManipulationMultipleFingerPanning = 0x10000,
};
enum __x_ABI_CWindows_CUI_CInput_CHoldingState
{
    HoldingState_Started = 0,
    HoldingState_Completed = 1,
    HoldingState_Canceled = 2,
};
enum __x_ABI_CWindows_CUI_CInput_CInputActivationState
{
    InputActivationState_None = 0,
    InputActivationState_Deactivated = 1,
    InputActivationState_ActivatedNotForeground = 2,
    InputActivationState_ActivatedInForeground = 3,
};
enum __x_ABI_CWindows_CUI_CInput_CPointerUpdateKind
{
    PointerUpdateKind_Other = 0,
    PointerUpdateKind_LeftButtonPressed = 1,
    PointerUpdateKind_LeftButtonReleased = 2,
    PointerUpdateKind_RightButtonPressed = 3,
    PointerUpdateKind_RightButtonReleased = 4,
    PointerUpdateKind_MiddleButtonPressed = 5,
    PointerUpdateKind_MiddleButtonReleased = 6,
    PointerUpdateKind_XButton1Pressed = 7,
    PointerUpdateKind_XButton1Released = 8,
    PointerUpdateKind_XButton2Pressed = 9,
    PointerUpdateKind_XButton2Released = 10,
};
enum __x_ABI_CWindows_CUI_CInput_CRadialControllerMenuKnownIcon
{
    RadialControllerMenuKnownIcon_Scroll = 0,
    RadialControllerMenuKnownIcon_Zoom = 1,
    RadialControllerMenuKnownIcon_UndoRedo = 2,
    RadialControllerMenuKnownIcon_Volume = 3,
    RadialControllerMenuKnownIcon_NextPreviousTrack = 4,
    RadialControllerMenuKnownIcon_Ruler = 5,
    RadialControllerMenuKnownIcon_InkColor = 6,
    RadialControllerMenuKnownIcon_InkThickness = 7,
    RadialControllerMenuKnownIcon_PenType = 8,
};
enum __x_ABI_CWindows_CUI_CInput_CRadialControllerSystemMenuItemKind
{
    RadialControllerSystemMenuItemKind_Scroll = 0,
    RadialControllerSystemMenuItemKind_Zoom = 1,
    RadialControllerSystemMenuItemKind_UndoRedo = 2,
    RadialControllerSystemMenuItemKind_Volume = 3,
    RadialControllerSystemMenuItemKind_NextPreviousTrack = 4,
};
struct __x_ABI_CWindows_CUI_CInput_CCrossSlideThresholds
{
    FLOAT SelectionStart;
    FLOAT SpeedBumpStart;
    FLOAT SpeedBumpEnd;
    FLOAT RearrangeStart;
};
struct __x_ABI_CWindows_CUI_CInput_CManipulationDelta
{
    __x_ABI_CWindows_CFoundation_CPoint Translation;
    FLOAT Scale;
    FLOAT Rotation;
    FLOAT Expansion;
};
struct __x_ABI_CWindows_CUI_CInput_CManipulationVelocities
{
    __x_ABI_CWindows_CFoundation_CPoint Linear;
    FLOAT Angular;
    FLOAT Expansion;
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IAttachableInputObject[] = L"Windows.UI.Input.IAttachableInputObject";
typedef struct __x_ABI_CWindows_CUI_CInput_CIAttachableInputObjectVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIAttachableInputObject * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIAttachableInputObject * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIAttachableInputObject * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIAttachableInputObject * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIAttachableInputObject * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIAttachableInputObject * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIAttachableInputObjectVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIAttachableInputObject
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIAttachableInputObjectVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIAttachableInputObject;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IAttachableInputObjectFactory[] = L"Windows.UI.Input.IAttachableInputObjectFactory";
typedef struct __x_ABI_CWindows_CUI_CInput_CIAttachableInputObjectFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIAttachableInputObjectFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIAttachableInputObjectFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIAttachableInputObjectFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIAttachableInputObjectFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIAttachableInputObjectFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIAttachableInputObjectFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIAttachableInputObjectFactoryVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIAttachableInputObjectFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIAttachableInputObjectFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIAttachableInputObjectFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_ICrossSlidingEventArgs[] = L"Windows.UI.Input.ICrossSlidingEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CrossSlidingState )(
        __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CCrossSlidingState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_CrossSlidingState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CICrossSlidingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IDraggingEventArgs[] = L"Windows.UI.Input.IDraggingEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DraggingState )(
        __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CDraggingState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIDraggingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_DraggingState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIDraggingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IEdgeGesture[] = L"Windows.UI.Input.IEdgeGesture";
typedef struct __x_ABI_CWindows_CUI_CInput_CIEdgeGestureVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Starting )(
        __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Starting )(
        __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Completed )(
        __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Completed )(
        __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Canceled )(
        __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CEdgeGesture_Windows__CUI__CInput__CEdgeGestureEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Canceled )(
        __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIEdgeGestureVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIEdgeGesture
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIEdgeGestureVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Starting(This,handler,token) )
    ( (This)->lpVtbl->remove_Starting(This,token) )
    ( (This)->lpVtbl->add_Completed(This,handler,token) )
    ( (This)->lpVtbl->remove_Completed(This,token) )
    ( (This)->lpVtbl->add_Canceled(This,handler,token) )
    ( (This)->lpVtbl->remove_Canceled(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIEdgeGesture;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IEdgeGestureEventArgs[] = L"Windows.UI.Input.IEdgeGestureEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CEdgeGestureKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIEdgeGestureEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IEdgeGestureStatics[] = L"Windows.UI.Input.IEdgeGestureStatics";
typedef struct __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIEdgeGesture * * current
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStaticsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIEdgeGestureStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,current) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIEdgeGestureStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IGestureRecognizer[] = L"Windows.UI.Input.IGestureRecognizer";
typedef struct __x_ABI_CWindows_CUI_CInput_CIGestureRecognizerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_GestureSettings )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CGestureSettings * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_GestureSettings )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  __x_ABI_CWindows_CUI_CInput_CGestureSettings value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInertial )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsActive )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShowGestureFeedback )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ShowGestureFeedback )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PivotCenter )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PivotCenter )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PivotRadius )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PivotRadius )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InertiaTranslationDeceleration )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InertiaTranslationDeceleration )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InertiaRotationDeceleration )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InertiaRotationDeceleration )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InertiaExpansionDeceleration )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InertiaExpansionDeceleration )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InertiaTranslationDisplacement )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InertiaTranslationDisplacement )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InertiaRotationAngle )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InertiaRotationAngle )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InertiaExpansion )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InertiaExpansion )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ManipulationExact )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ManipulationExact )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CrossSlideThresholds )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CCrossSlideThresholds * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CrossSlideThresholds )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  __x_ABI_CWindows_CUI_CInput_CCrossSlideThresholds value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CrossSlideHorizontally )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CrossSlideHorizontally )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CrossSlideExact )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CrossSlideExact )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AutoProcessInertia )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutoProcessInertia )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MouseWheelParameters )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CanBeDoubleTap )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * value,
                           __RPC__out boolean * canBeDoubleTap
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessDownEvent )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * value
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessMoveEvents )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  __RPC__in_opt __FIVector_1_Windows__CUI__CInput__CPointerPoint * value
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessUpEvent )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * value
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessMouseWheelEvent )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * value,
                  boolean isShiftKeyDown,
                  boolean isControlKeyDown
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessInertia )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This
        );
    HRESULT ( STDMETHODCALLTYPE *CompleteGesture )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Tapped )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CTappedEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Tapped )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RightTapped )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CRightTappedEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RightTapped )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Holding )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CHoldingEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Holding )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Dragging )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CDraggingEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Dragging )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ManipulationStarted )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationStartedEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ManipulationStarted )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ManipulationUpdated )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationUpdatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ManipulationUpdated )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ManipulationInertiaStarting )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationInertiaStartingEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ManipulationInertiaStarting )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ManipulationCompleted )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CManipulationCompletedEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ManipulationCompleted )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CrossSliding )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CGestureRecognizer_Windows__CUI__CInput__CCrossSlidingEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CrossSliding )(
        __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIGestureRecognizerVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIGestureRecognizer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIGestureRecognizerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_GestureSettings(This,value) )
    ( (This)->lpVtbl->put_GestureSettings(This,value) )
    ( (This)->lpVtbl->get_IsInertial(This,value) )
    ( (This)->lpVtbl->get_IsActive(This,value) )
    ( (This)->lpVtbl->get_ShowGestureFeedback(This,value) )
    ( (This)->lpVtbl->put_ShowGestureFeedback(This,value) )
    ( (This)->lpVtbl->get_PivotCenter(This,value) )
    ( (This)->lpVtbl->put_PivotCenter(This,value) )
    ( (This)->lpVtbl->get_PivotRadius(This,value) )
    ( (This)->lpVtbl->put_PivotRadius(This,value) )
    ( (This)->lpVtbl->get_InertiaTranslationDeceleration(This,value) )
    ( (This)->lpVtbl->put_InertiaTranslationDeceleration(This,value) )
    ( (This)->lpVtbl->get_InertiaRotationDeceleration(This,value) )
    ( (This)->lpVtbl->put_InertiaRotationDeceleration(This,value) )
    ( (This)->lpVtbl->get_InertiaExpansionDeceleration(This,value) )
    ( (This)->lpVtbl->put_InertiaExpansionDeceleration(This,value) )
    ( (This)->lpVtbl->get_InertiaTranslationDisplacement(This,value) )
    ( (This)->lpVtbl->put_InertiaTranslationDisplacement(This,value) )
    ( (This)->lpVtbl->get_InertiaRotationAngle(This,value) )
    ( (This)->lpVtbl->put_InertiaRotationAngle(This,value) )
    ( (This)->lpVtbl->get_InertiaExpansion(This,value) )
    ( (This)->lpVtbl->put_InertiaExpansion(This,value) )
    ( (This)->lpVtbl->get_ManipulationExact(This,value) )
    ( (This)->lpVtbl->put_ManipulationExact(This,value) )
    ( (This)->lpVtbl->get_CrossSlideThresholds(This,value) )
    ( (This)->lpVtbl->put_CrossSlideThresholds(This,value) )
    ( (This)->lpVtbl->get_CrossSlideHorizontally(This,value) )
    ( (This)->lpVtbl->put_CrossSlideHorizontally(This,value) )
    ( (This)->lpVtbl->get_CrossSlideExact(This,value) )
    ( (This)->lpVtbl->put_CrossSlideExact(This,value) )
    ( (This)->lpVtbl->get_AutoProcessInertia(This,value) )
    ( (This)->lpVtbl->put_AutoProcessInertia(This,value) )
    ( (This)->lpVtbl->get_MouseWheelParameters(This,value) )
    ( (This)->lpVtbl->CanBeDoubleTap(This,value,canBeDoubleTap) )
    ( (This)->lpVtbl->ProcessDownEvent(This,value) )
    ( (This)->lpVtbl->ProcessMoveEvents(This,value) )
    ( (This)->lpVtbl->ProcessUpEvent(This,value) )
    ( (This)->lpVtbl->ProcessMouseWheelEvent(This,value,isShiftKeyDown,isControlKeyDown) )
    ( (This)->lpVtbl->ProcessInertia(This) )
    ( (This)->lpVtbl->CompleteGesture(This) )
    ( (This)->lpVtbl->add_Tapped(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_Tapped(This,cookie) )
    ( (This)->lpVtbl->add_RightTapped(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_RightTapped(This,cookie) )
    ( (This)->lpVtbl->add_Holding(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_Holding(This,cookie) )
    ( (This)->lpVtbl->add_Dragging(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_Dragging(This,cookie) )
    ( (This)->lpVtbl->add_ManipulationStarted(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_ManipulationStarted(This,cookie) )
    ( (This)->lpVtbl->add_ManipulationUpdated(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_ManipulationUpdated(This,cookie) )
    ( (This)->lpVtbl->add_ManipulationInertiaStarting(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_ManipulationInertiaStarting(This,cookie) )
    ( (This)->lpVtbl->add_ManipulationCompleted(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_ManipulationCompleted(This,cookie) )
    ( (This)->lpVtbl->add_CrossSliding(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_CrossSliding(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIGestureRecognizer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IHoldingEventArgs[] = L"Windows.UI.Input.IHoldingEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HoldingState )(
        __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CHoldingState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIHoldingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_HoldingState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIHoldingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IInputActivationListener[] = L"Windows.UI.Input.IInputActivationListener";
typedef struct __x_ABI_CWindows_CUI_CInput_CIInputActivationListenerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIInputActivationListener * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIInputActivationListener * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIInputActivationListener * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIInputActivationListener * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIInputActivationListener * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIInputActivationListener * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CUI_CInput_CIInputActivationListener * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CInputActivationState * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_InputActivationChanged )(
        __x_ABI_CWindows_CUI_CInput_CIInputActivationListener * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CInputActivationListener_Windows__CUI__CInput__CInputActivationListenerActivationChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_InputActivationChanged )(
        __x_ABI_CWindows_CUI_CInput_CIInputActivationListener * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIInputActivationListenerVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIInputActivationListener
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIInputActivationListenerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
    ( (This)->lpVtbl->add_InputActivationChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_InputActivationChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIInputActivationListener;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IInputActivationListenerActivationChangedEventArgs[] = L"Windows.UI.Input.IInputActivationListenerActivationChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CIInputActivationListenerActivationChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_State )(
        __x_ABI_CWindows_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CInputActivationState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIInputActivationListenerActivationChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIInputActivationListenerActivationChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_State(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIInputActivationListenerActivationChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IKeyboardDeliveryInterceptor[] = L"Windows.UI.Input.IKeyboardDeliveryInterceptor";
typedef struct __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsInterceptionEnabledWhenInForeground )(
        __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsInterceptionEnabledWhenInForeground )(
        __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
                  boolean value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_KeyDown )(
        __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_KeyDown )(
        __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_KeyUp )(
        __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CKeyboardDeliveryInterceptor_Windows__CUI__CCore__CKeyEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_KeyUp )(
        __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsInterceptionEnabledWhenInForeground(This,value) )
    ( (This)->lpVtbl->put_IsInterceptionEnabledWhenInForeground(This,value) )
    ( (This)->lpVtbl->add_KeyDown(This,handler,token) )
    ( (This)->lpVtbl->remove_KeyDown(This,token) )
    ( (This)->lpVtbl->add_KeyUp(This,handler,token) )
    ( (This)->lpVtbl->remove_KeyUp(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IKeyboardDeliveryInterceptorStatics[] = L"Windows.UI.Input.IKeyboardDeliveryInterceptorStatics";
typedef struct __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor * * keyboardDeliverySettings
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStaticsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,keyboardDeliverySettings) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IManipulationCompletedEventArgs[] = L"Windows.UI.Input.IManipulationCompletedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Velocities )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationVelocities * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_Cumulative(This,value) )
    ( (This)->lpVtbl->get_Velocities(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIManipulationCompletedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IManipulationInertiaStartingEventArgs[] = L"Windows.UI.Input.IManipulationInertiaStartingEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Delta )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Velocities )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationVelocities * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_Delta(This,value) )
    ( (This)->lpVtbl->get_Cumulative(This,value) )
    ( (This)->lpVtbl->get_Velocities(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIManipulationInertiaStartingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IManipulationStartedEventArgs[] = L"Windows.UI.Input.IManipulationStartedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_Cumulative(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIManipulationStartedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IManipulationUpdatedEventArgs[] = L"Windows.UI.Input.IManipulationUpdatedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Delta )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Velocities )(
        __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationVelocities * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_Delta(This,value) )
    ( (This)->lpVtbl->get_Cumulative(This,value) )
    ( (This)->lpVtbl->get_Velocities(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIManipulationUpdatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IMouseWheelParameters[] = L"Windows.UI.Input.IMouseWheelParameters";
typedef struct __x_ABI_CWindows_CUI_CInput_CIMouseWheelParametersVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CharTranslation )(
        __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CharTranslation )(
        __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeltaScale )(
        __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DeltaScale )(
        __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DeltaRotationAngle )(
        __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DeltaRotationAngle )(
        __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
                  FLOAT value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PageTranslation )(
        __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PageTranslation )(
        __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIMouseWheelParametersVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIMouseWheelParametersVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CharTranslation(This,value) )
    ( (This)->lpVtbl->put_CharTranslation(This,value) )
    ( (This)->lpVtbl->get_DeltaScale(This,value) )
    ( (This)->lpVtbl->put_DeltaScale(This,value) )
    ( (This)->lpVtbl->get_DeltaRotationAngle(This,value) )
    ( (This)->lpVtbl->put_DeltaRotationAngle(This,value) )
    ( (This)->lpVtbl->get_PageTranslation(This,value) )
    ( (This)->lpVtbl->put_PageTranslation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIMouseWheelParameters;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerPoint[] = L"Windows.UI.Input.IPointerPoint";
typedef struct __x_ABI_CWindows_CUI_CInput_CIPointerPointVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerDevice )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CInput_CIPointerDevice * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RawPosition )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerId )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FrameId )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Timestamp )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
                           __RPC__out UINT64 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInContact )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Properties )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPoint * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIPointerPointVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIPointerPoint
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIPointerPointVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerDevice(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_RawPosition(This,value) )
    ( (This)->lpVtbl->get_PointerId(This,value) )
    ( (This)->lpVtbl->get_FrameId(This,value) )
    ( (This)->lpVtbl->get_Timestamp(This,value) )
    ( (This)->lpVtbl->get_IsInContact(This,value) )
    ( (This)->lpVtbl->get_Properties(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerPoint;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerPointProperties[] = L"Windows.UI.Input.IPointerPointProperties";
typedef struct __x_ABI_CWindows_CUI_CInput_CIPointerPointPropertiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Pressure )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInverted )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEraser )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XTilt )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_YTilt )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Twist )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out FLOAT * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContactRect )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContactRectRaw )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TouchConfidence )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsLeftButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsRightButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsMiddleButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MouseWheelDelta )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsHorizontalMouseWheel )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsPrimary )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInRange )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsCanceled )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsBarrelButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsXButton1Pressed )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsXButton2Pressed )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerUpdateKind )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CPointerUpdateKind * value
        );
    HRESULT ( STDMETHODCALLTYPE *HasUsage )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                  UINT32 usagePage,
                  UINT32 usageId,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetUsageValue )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties * This,
                  UINT32 usagePage,
                  UINT32 usageId,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIPointerPointPropertiesVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIPointerPointPropertiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Pressure(This,value) )
    ( (This)->lpVtbl->get_IsInverted(This,value) )
    ( (This)->lpVtbl->get_IsEraser(This,value) )
    ( (This)->lpVtbl->get_Orientation(This,value) )
    ( (This)->lpVtbl->get_XTilt(This,value) )
    ( (This)->lpVtbl->get_YTilt(This,value) )
    ( (This)->lpVtbl->get_Twist(This,value) )
    ( (This)->lpVtbl->get_ContactRect(This,value) )
    ( (This)->lpVtbl->get_ContactRectRaw(This,value) )
    ( (This)->lpVtbl->get_TouchConfidence(This,value) )
    ( (This)->lpVtbl->get_IsLeftButtonPressed(This,value) )
    ( (This)->lpVtbl->get_IsRightButtonPressed(This,value) )
    ( (This)->lpVtbl->get_IsMiddleButtonPressed(This,value) )
    ( (This)->lpVtbl->get_MouseWheelDelta(This,value) )
    ( (This)->lpVtbl->get_IsHorizontalMouseWheel(This,value) )
    ( (This)->lpVtbl->get_IsPrimary(This,value) )
    ( (This)->lpVtbl->get_IsInRange(This,value) )
    ( (This)->lpVtbl->get_IsCanceled(This,value) )
    ( (This)->lpVtbl->get_IsBarrelButtonPressed(This,value) )
    ( (This)->lpVtbl->get_IsXButton1Pressed(This,value) )
    ( (This)->lpVtbl->get_IsXButton2Pressed(This,value) )
    ( (This)->lpVtbl->get_PointerUpdateKind(This,value) )
    ( (This)->lpVtbl->HasUsage(This,usagePage,usageId,value) )
    ( (This)->lpVtbl->GetUsageValue(This,usagePage,usageId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerPointProperties;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerPointProperties2[] = L"Windows.UI.Input.IPointerPointProperties2";
typedef struct __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ZDistance )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2 * This,
                           __RPC__deref_out_opt __FIReference_1_float * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ZDistance(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerPointProperties2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerPointStatics[] = L"Windows.UI.Input.IPointerPointStatics";
typedef struct __x_ABI_CWindows_CUI_CInput_CIPointerPointStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetCurrentPoint )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This,
                  UINT32 pointerId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * * pointerPoint
        );
                    HRESULT ( STDMETHODCALLTYPE *GetIntermediatePoints )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This,
                  UINT32 pointerId,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CInput__CPointerPoint * * pointerPoints
        );
                    HRESULT ( STDMETHODCALLTYPE *GetCurrentPointTransformed )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This,
                  UINT32 pointerId,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * transform,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * * pointerPoint
        );
                    HRESULT ( STDMETHODCALLTYPE *GetIntermediatePointsTransformed )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics * This,
                  UINT32 pointerId,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * transform,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CInput__CPointerPoint * * pointerPoints
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIPointerPointStaticsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIPointerPointStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIPointerPointStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentPoint(This,pointerId,pointerPoint) )
    ( (This)->lpVtbl->GetIntermediatePoints(This,pointerId,pointerPoints) )
    ( (This)->lpVtbl->GetCurrentPointTransformed(This,pointerId,transform,pointerPoint) )
    ( (This)->lpVtbl->GetIntermediatePointsTransformed(This,pointerId,transform,pointerPoints) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerPointStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerPointTransform[] = L"Windows.UI.Input.IPointerPointTransform";
typedef struct __x_ABI_CWindows_CUI_CInput_CIPointerPointTransformVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Inverse )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryTransform )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * This,
                  __x_ABI_CWindows_CFoundation_CPoint inPoint,
                   __RPC__out __x_ABI_CWindows_CFoundation_CPoint * outPoint,
                           __RPC__out boolean * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *TransformBounds )(
        __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform * This,
                  __x_ABI_CWindows_CFoundation_CRect rect,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIPointerPointTransformVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIPointerPointTransform
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIPointerPointTransformVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Inverse(This,value) )
    ( (This)->lpVtbl->TryTransform(This,inPoint,outPoint,returnValue) )
    ( (This)->lpVtbl->TransformBounds(This,rect,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerPointTransform;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerVisualizationSettings[] = L"Windows.UI.Input.IPointerVisualizationSettings";
typedef struct __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_IsContactFeedbackEnabled )(
        __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsContactFeedbackEnabled )(
        __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsBarrelButtonFeedbackEnabled )(
        __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsBarrelButtonFeedbackEnabled )(
        __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_IsContactFeedbackEnabled(This,value) )
    ( (This)->lpVtbl->get_IsContactFeedbackEnabled(This,value) )
    ( (This)->lpVtbl->put_IsBarrelButtonFeedbackEnabled(This,value) )
    ( (This)->lpVtbl->get_IsBarrelButtonFeedbackEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IPointerVisualizationSettingsStatics[] = L"Windows.UI.Input.IPointerVisualizationSettingsStatics";
typedef struct __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettings * * visualizationSettings
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStaticsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,visualizationSettings) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIPointerVisualizationSettingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialController[] = L"Windows.UI.Input.IRadialController";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Menu )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationResolutionInDegrees )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationResolutionInDegrees )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UseAutomaticHapticFeedback )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UseAutomaticHapticFeedback )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                  boolean value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ScreenContactStarted )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactStartedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ScreenContactStarted )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ScreenContactEnded )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ScreenContactEnded )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ScreenContactContinued )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerScreenContactContinuedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ScreenContactContinued )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ControlLost )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ControlLost )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_RotationChanged )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerRotationChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_RotationChanged )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ButtonClicked )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonClickedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ButtonClicked )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ControlAcquired )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerControlAcquiredEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ControlAcquired )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialController
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Menu(This,value) )
    ( (This)->lpVtbl->get_RotationResolutionInDegrees(This,value) )
    ( (This)->lpVtbl->put_RotationResolutionInDegrees(This,value) )
    ( (This)->lpVtbl->get_UseAutomaticHapticFeedback(This,value) )
    ( (This)->lpVtbl->put_UseAutomaticHapticFeedback(This,value) )
    ( (This)->lpVtbl->add_ScreenContactStarted(This,handler,cookie) )
    ( (This)->lpVtbl->remove_ScreenContactStarted(This,cookie) )
    ( (This)->lpVtbl->add_ScreenContactEnded(This,handler,cookie) )
    ( (This)->lpVtbl->remove_ScreenContactEnded(This,cookie) )
    ( (This)->lpVtbl->add_ScreenContactContinued(This,handler,cookie) )
    ( (This)->lpVtbl->remove_ScreenContactContinued(This,cookie) )
    ( (This)->lpVtbl->add_ControlLost(This,handler,cookie) )
    ( (This)->lpVtbl->remove_ControlLost(This,cookie) )
    ( (This)->lpVtbl->add_RotationChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_RotationChanged(This,token) )
    ( (This)->lpVtbl->add_ButtonClicked(This,handler,token) )
    ( (This)->lpVtbl->remove_ButtonClicked(This,token) )
    ( (This)->lpVtbl->add_ControlAcquired(This,handler,cookie) )
    ( (This)->lpVtbl->remove_ControlAcquired(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialController2[] = L"Windows.UI.Input.IRadialController2";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialController2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonPressedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ButtonHolding )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonHoldingEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ButtonHolding )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ButtonReleased )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialController_Windows__CUI__CInput__CRadialControllerButtonReleasedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ButtonReleased )(
        __x_ABI_CWindows_CUI_CInput_CIRadialController2 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialController2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialController2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialController2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ButtonPressed(This,handler,token) )
    ( (This)->lpVtbl->remove_ButtonPressed(This,token) )
    ( (This)->lpVtbl->add_ButtonHolding(This,handler,token) )
    ( (This)->lpVtbl->remove_ButtonHolding(This,token) )
    ( (This)->lpVtbl->add_ButtonReleased(This,handler,token) )
    ( (This)->lpVtbl->remove_ButtonReleased(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialController2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerButtonClickedEventArgs[] = L"Windows.UI.Input.IRadialControllerButtonClickedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Contact(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerButtonClickedEventArgs2[] = L"Windows.UI.Input.IRadialControllerButtonClickedEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonClickedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerButtonHoldingEventArgs[] = L"Windows.UI.Input.IRadialControllerButtonHoldingEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Contact(This,value) )
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonHoldingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerButtonPressedEventArgs[] = L"Windows.UI.Input.IRadialControllerButtonPressedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Contact(This,value) )
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonPressedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerButtonReleasedEventArgs[] = L"Windows.UI.Input.IRadialControllerButtonReleasedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Contact(This,value) )
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerButtonReleasedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerConfiguration[] = L"Windows.UI.Input.IRadialControllerConfiguration";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetDefaultMenuItems )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * This,
                  __RPC__in_opt __FIIterable_1_Windows__CUI__CInput__CRadialControllerSystemMenuItemKind * buttons
        );
    HRESULT ( STDMETHODCALLTYPE *ResetToDefaultMenuItems )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * This
        );
    HRESULT ( STDMETHODCALLTYPE *TrySelectDefaultMenuItem )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * This,
                  __x_ABI_CWindows_CUI_CInput_CRadialControllerSystemMenuItemKind type,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetDefaultMenuItems(This,buttons) )
    ( (This)->lpVtbl->ResetToDefaultMenuItems(This) )
    ( (This)->lpVtbl->TrySelectDefaultMenuItem(This,type,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerConfiguration2[] = L"Windows.UI.Input.IRadialControllerConfiguration2";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ActiveControllerWhenMenuIsSuppressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActiveControllerWhenMenuIsSuppressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsMenuSuppressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsMenuSuppressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ActiveControllerWhenMenuIsSuppressed(This,value) )
    ( (This)->lpVtbl->get_ActiveControllerWhenMenuIsSuppressed(This,value) )
    ( (This)->lpVtbl->put_IsMenuSuppressed(This,value) )
    ( (This)->lpVtbl->get_IsMenuSuppressed(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerConfigurationStatics[] = L"Windows.UI.Input.IRadialControllerConfigurationStatics";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfiguration * * configuration
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStaticsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,configuration) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerConfigurationStatics2[] = L"Windows.UI.Input.IRadialControllerConfigurationStatics2";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_AppController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AppController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsAppControllerEnabled )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsAppControllerEnabled )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_AppController(This,value) )
    ( (This)->lpVtbl->get_AppController(This,value) )
    ( (This)->lpVtbl->put_IsAppControllerEnabled(This,value) )
    ( (This)->lpVtbl->get_IsAppControllerEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerConfigurationStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs[] = L"Windows.UI.Input.IRadialControllerControlAcquiredEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Contact(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerControlAcquiredEventArgs2[] = L"Windows.UI.Input.IRadialControllerControlAcquiredEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsButtonPressed(This,value) )
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerControlAcquiredEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerMenu[] = L"Windows.UI.Input.IRadialControllerMenu";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Items )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CInput__CRadialControllerMenuItem * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSelectedMenuItem )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * * result
        );
    HRESULT ( STDMETHODCALLTYPE *SelectMenuItem )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * menuItem
        );
    HRESULT ( STDMETHODCALLTYPE *TrySelectPreviouslySelectedMenuItem )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Items(This,value) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsEnabled(This,value) )
    ( (This)->lpVtbl->GetSelectedMenuItem(This,result) )
    ( (This)->lpVtbl->SelectMenuItem(This,menuItem) )
    ( (This)->lpVtbl->TrySelectPreviouslySelectedMenuItem(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerMenu;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerMenuItem[] = L"Windows.UI.Input.IRadialControllerMenuItem";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayText )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Tag )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Tag )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This,
                  __RPC__in_opt IInspectable * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Invoked )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CInput__CRadialControllerMenuItem_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Invoked )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayText(This,value) )
    ( (This)->lpVtbl->get_Tag(This,value) )
    ( (This)->lpVtbl->put_Tag(This,value) )
    ( (This)->lpVtbl->add_Invoked(This,handler,token) )
    ( (This)->lpVtbl->remove_Invoked(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerMenuItemStatics[] = L"Windows.UI.Input.IRadialControllerMenuItemStatics";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateFromIcon )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics * This,
                  __RPC__in HSTRING displayText,
                  __RPC__in_opt __x_ABI_CWindows_CStorage_CStreams_CIRandomAccessStreamReference * icon,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateFromKnownIcon )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics * This,
                  __RPC__in HSTRING displayText,
                  __x_ABI_CWindows_CUI_CInput_CRadialControllerMenuKnownIcon value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStaticsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromIcon(This,displayText,icon,result) )
    ( (This)->lpVtbl->CreateFromKnownIcon(This,displayText,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerMenuItemStatics2[] = L"Windows.UI.Input.IRadialControllerMenuItemStatics2";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateFromFontGlyph )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 * This,
                  __RPC__in HSTRING displayText,
                  __RPC__in HSTRING glyph,
                  __RPC__in HSTRING fontFamily,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateFromFontGlyphWithUri )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2 * This,
                  __RPC__in HSTRING displayText,
                  __RPC__in HSTRING glyph,
                  __RPC__in HSTRING fontFamily,
                  __RPC__in_opt __x_ABI_CWindows_CFoundation_CIUriRuntimeClass * fontUri,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItem * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateFromFontGlyph(This,displayText,glyph,fontFamily,result) )
    ( (This)->lpVtbl->CreateFromFontGlyphWithUri(This,displayText,glyph,fontFamily,fontUri,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerMenuItemStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerRotationChangedEventArgs[] = L"Windows.UI.Input.IRadialControllerRotationChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RotationDeltaInDegrees )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RotationDeltaInDegrees(This,value) )
    ( (This)->lpVtbl->get_Contact(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerRotationChangedEventArgs2[] = L"Windows.UI.Input.IRadialControllerRotationChangedEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsButtonPressed(This,value) )
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerRotationChangedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerScreenContact[] = L"Windows.UI.Input.IRadialControllerScreenContact";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Bounds )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Bounds(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs[] = L"Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Contact(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerScreenContactContinuedEventArgs2[] = L"Windows.UI.Input.IRadialControllerScreenContactContinuedEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsButtonPressed(This,value) )
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactContinuedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerScreenContactEndedEventArgs[] = L"Windows.UI.Input.IRadialControllerScreenContactEndedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsButtonPressed(This,value) )
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactEndedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs[] = L"Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Contact )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContact * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Contact(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerScreenContactStartedEventArgs2[] = L"Windows.UI.Input.IRadialControllerScreenContactStartedEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsButtonPressed )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SimpleHapticsController )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CDevices_CHaptics_CISimpleHapticsController * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsButtonPressed(This,value) )
    ( (This)->lpVtbl->get_SimpleHapticsController(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerScreenContactStartedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRadialControllerStatics[] = L"Windows.UI.Input.IRadialControllerStatics";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsSupported )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *CreateForCurrentView )(
        __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRadialControllerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRadialControllerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsSupported(This,result) )
    ( (This)->lpVtbl->CreateForCurrentView(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRadialControllerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_IRightTappedEventArgs[] = L"Windows.UI.Input.IRightTappedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CIRightTappedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_ITappedEventArgs[] = L"Windows.UI.Input.ITappedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CInput_CITappedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TapCount )(
        __x_ABI_CWindows_CUI_CInput_CITappedEventArgs * This,
                           __RPC__out UINT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CITappedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CITappedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CITappedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_TapCount(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CITappedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_AttachableInputObject[] = L"Windows.UI.Input.AttachableInputObject";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_CrossSlidingEventArgs[] = L"Windows.UI.Input.CrossSlidingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_DraggingEventArgs[] = L"Windows.UI.Input.DraggingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_EdgeGesture[] = L"Windows.UI.Input.EdgeGesture";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_EdgeGestureEventArgs[] = L"Windows.UI.Input.EdgeGestureEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_GestureRecognizer[] = L"Windows.UI.Input.GestureRecognizer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_HoldingEventArgs[] = L"Windows.UI.Input.HoldingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_InputActivationListener[] = L"Windows.UI.Input.InputActivationListener";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_InputActivationListenerActivationChangedEventArgs[] = L"Windows.UI.Input.InputActivationListenerActivationChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_KeyboardDeliveryInterceptor[] = L"Windows.UI.Input.KeyboardDeliveryInterceptor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_ManipulationCompletedEventArgs[] = L"Windows.UI.Input.ManipulationCompletedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_ManipulationInertiaStartingEventArgs[] = L"Windows.UI.Input.ManipulationInertiaStartingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_ManipulationStartedEventArgs[] = L"Windows.UI.Input.ManipulationStartedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_ManipulationUpdatedEventArgs[] = L"Windows.UI.Input.ManipulationUpdatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_MouseWheelParameters[] = L"Windows.UI.Input.MouseWheelParameters";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_PointerPoint[] = L"Windows.UI.Input.PointerPoint";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_PointerPointProperties[] = L"Windows.UI.Input.PointerPointProperties";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_PointerVisualizationSettings[] = L"Windows.UI.Input.PointerVisualizationSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialController[] = L"Windows.UI.Input.RadialController";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerButtonClickedEventArgs[] = L"Windows.UI.Input.RadialControllerButtonClickedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerButtonHoldingEventArgs[] = L"Windows.UI.Input.RadialControllerButtonHoldingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerButtonPressedEventArgs[] = L"Windows.UI.Input.RadialControllerButtonPressedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerButtonReleasedEventArgs[] = L"Windows.UI.Input.RadialControllerButtonReleasedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerConfiguration[] = L"Windows.UI.Input.RadialControllerConfiguration";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerControlAcquiredEventArgs[] = L"Windows.UI.Input.RadialControllerControlAcquiredEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerMenu[] = L"Windows.UI.Input.RadialControllerMenu";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerMenuItem[] = L"Windows.UI.Input.RadialControllerMenuItem";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerRotationChangedEventArgs[] = L"Windows.UI.Input.RadialControllerRotationChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerScreenContact[] = L"Windows.UI.Input.RadialControllerScreenContact";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerScreenContactContinuedEventArgs[] = L"Windows.UI.Input.RadialControllerScreenContactContinuedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerScreenContactEndedEventArgs[] = L"Windows.UI.Input.RadialControllerScreenContactEndedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RadialControllerScreenContactStartedEventArgs[] = L"Windows.UI.Input.RadialControllerScreenContactStartedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_RightTappedEventArgs[] = L"Windows.UI.Input.RightTappedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_TappedEventArgs[] = L"Windows.UI.Input.TappedEventArgs";
       
       
#pragma clang diagnostic pop
