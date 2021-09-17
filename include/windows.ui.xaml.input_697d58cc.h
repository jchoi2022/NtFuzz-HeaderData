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
#include "Windows.Devices.Input.h"
#include "Windows.System.h"
#include "Windows.UI.Core.h"
#include "Windows.UI.Input.h"
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Controls.h"
#include "Windows.UI.Xaml.Documents.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CICanExecuteRequestedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CICanExecuteRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CICommand __x_ABI_CWindows_CUI_CXaml_CInput_CICommand;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIExecuteRequestedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIExecuteRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerGotFocusEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerGotFocusEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerLostFocusEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerLostFocusEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2 __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics5 __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics5;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6 __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics7 __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics7;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusMovementResult __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusMovementResult;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs2 __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs3 __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2 __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3 __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs2 __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs2 __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs3 __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs3;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2 __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand2 __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandFactory __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandStatics __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandStatics;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandFactory __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandFactory;
typedef interface __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStatics __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStatics;
typedef interface __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CInput__CInputScopeName **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeName
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CXaml__CInput__CPointer;
typedef struct __FIIterator_1_Windows__CUI__CXaml__CInput__CPointerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CXaml__CInput__CPointerVtbl;
interface __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CXaml__CInput__CPointerVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CXaml__CInput__CPointer;
typedef struct __FIIterable_1_Windows__CUI__CXaml__CInput__CPointerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CXaml__CInput__CPointer **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CXaml__CInput__CPointerVtbl;
interface __FIIterable_1_Windows__CUI__CXaml__CInput__CPointer
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CXaml__CInput__CPointerVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                       __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                       __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl *lpVtbl;
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
typedef interface __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer;
typedef struct __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
                       __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointerVtbl;
interface __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointer
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CXaml__CInput__CPointerVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName;
typedef struct __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CInput__CInputScopeName **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeNameVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator;
typedef struct __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This, __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl;
interface __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorVtbl *lpVtbl;
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
typedef interface __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerGotFocusEventArgs __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerGotFocusEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerGotFocusEventArgs;
typedef struct __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerGotFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerGotFocusEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerGotFocusEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerGotFocusEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerGotFocusEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerGotFocusEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerGotFocusEventArgsVtbl;
interface __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerGotFocusEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerGotFocusEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerLostFocusEventArgs __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerLostFocusEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerLostFocusEventArgs;
typedef struct __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerLostFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerLostFocusEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerLostFocusEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerLostFocusEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerLostFocusEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerLostFocusEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerLostFocusEventArgsVtbl;
interface __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerLostFocusEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerLostFocusEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIEventHandler_1_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs __FIEventHandler_1_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs;
typedef struct __FIEventHandler_1_Windows__CUI__CXaml__CInput__CGettingFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CUI__CXaml__CInput__CGettingFocusEventArgsVtbl;
interface __FIEventHandler_1_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CUI__CXaml__CInput__CGettingFocusEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIEventHandler_1_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs __FIEventHandler_1_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs;
typedef struct __FIEventHandler_1_Windows__CUI__CXaml__CInput__CLosingFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CUI__CXaml__CInput__CLosingFocusEventArgsVtbl;
interface __FIEventHandler_1_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CUI__CXaml__CInput__CLosingFocusEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CInput__CFocusMovementResult __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CInput__CFocusMovementResult;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CInput__CFocusMovementResult;
typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CInput__CFocusMovementResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CInput__CFocusMovementResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CInput__CFocusMovementResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CInput__CFocusMovementResult * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CInput__CFocusMovementResult * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CInput__CFocusMovementResultVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CInput__CFocusMovementResult
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CInput__CFocusMovementResultVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult;
typedef struct __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CInput__CFocusMovementResult *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CXaml__CInput__CFocusMovementResult **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult * This, __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusMovementResult * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResultVtbl;
interface __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResultVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CDocuments_CITextElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CDocuments__CTextElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CCanExecuteRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CCanExecuteRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CCanExecuteRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CCanExecuteRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CCanExecuteRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CCanExecuteRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CCanExecuteRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CCanExecuteRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CICanExecuteRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CCanExecuteRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CCanExecuteRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CCanExecuteRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CExecuteRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CExecuteRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CExecuteRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CExecuteRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CExecuteRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CExecuteRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CExecuteRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CExecuteRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIExecuteRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CExecuteRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CExecuteRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CExecuteRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CXaml_CIUIElement __x_ABI_CWindows_CUI_CXaml_CIUIElement;
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayDismissedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyDisplayRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CAccessKeyInvokedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CCharacterReceivedRoutedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CContextRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CGettingFocusEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CLosingFocusEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CNoFocusCandidateFoundEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CXaml__CUIElement_Windows__CUI__CXaml__CInput__CProcessKeyboardAcceleratorEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_IInspectable_IInspectable __FITypedEventHandler_2_IInspectable_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_IInspectable;
typedef struct __FITypedEventHandler_2_IInspectable_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_IInspectable * This, __RPC__in_opt IInspectable * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_IInspectableVtbl;
interface __FITypedEventHandler_2_IInspectable_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_IInspectableVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CUI_CInput_CIPointerPoint __x_ABI_CWindows_CUI_CInput_CIPointerPoint;
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
typedef enum __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef enum __x_ABI_CWindows_CSystem_CVirtualKey __x_ABI_CWindows_CSystem_CVirtualKey;
typedef enum __x_ABI_CWindows_CSystem_CVirtualKeyModifiers __x_ABI_CWindows_CSystem_CVirtualKeyModifiers;
typedef struct __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus;
typedef enum __x_ABI_CWindows_CUI_CInput_CHoldingState __x_ABI_CWindows_CUI_CInput_CHoldingState;
typedef struct __x_ABI_CWindows_CUI_CInput_CManipulationDelta __x_ABI_CWindows_CUI_CInput_CManipulationDelta;
typedef struct __x_ABI_CWindows_CUI_CInput_CManipulationVelocities __x_ABI_CWindows_CUI_CInput_CManipulationVelocities;
typedef interface __x_ABI_CWindows_CUI_CXaml_CControls_CIIconSource __x_ABI_CWindows_CUI_CXaml_CControls_CIIconSource;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyObject __x_ABI_CWindows_CUI_CXaml_CIDependencyObject;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty;
typedef enum __x_ABI_CWindows_CUI_CXaml_CFocusState __x_ABI_CWindows_CUI_CXaml_CFocusState;
typedef interface __x_ABI_CWindows_CUI_CXaml_CIXamlRoot __x_ABI_CWindows_CUI_CXaml_CIXamlRoot;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CFocusInputDeviceKind __x_ABI_CWindows_CUI_CXaml_CInput_CFocusInputDeviceKind;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CInputScopeNameValue __x_ABI_CWindows_CUI_CXaml_CInput_CInputScopeNameValue;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CKeyTipPlacementMode __x_ABI_CWindows_CUI_CXaml_CInput_CKeyTipPlacementMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CKeyboardAcceleratorPlacementMode __x_ABI_CWindows_CUI_CXaml_CInput_CKeyboardAcceleratorPlacementMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CKeyboardNavigationMode __x_ABI_CWindows_CUI_CXaml_CInput_CKeyboardNavigationMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CManipulationModes __x_ABI_CWindows_CUI_CXaml_CInput_CManipulationModes;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CStandardUICommandKind __x_ABI_CWindows_CUI_CXaml_CInput_CStandardUICommandKind;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusKeyboardNavigationMode __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusKeyboardNavigationMode;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy;
typedef enum __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategyOverride __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategyOverride;
enum __x_ABI_CWindows_CUI_CXaml_CInput_CFocusInputDeviceKind
{
    FocusInputDeviceKind_None = 0,
    FocusInputDeviceKind_Mouse = 1,
    FocusInputDeviceKind_Touch = 2,
    FocusInputDeviceKind_Pen = 3,
    FocusInputDeviceKind_Keyboard = 4,
    FocusInputDeviceKind_GameController = 5,
};
enum __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection
{
    FocusNavigationDirection_Next = 0,
    FocusNavigationDirection_Previous = 1,
    FocusNavigationDirection_Up = 2,
    FocusNavigationDirection_Down = 3,
    FocusNavigationDirection_Left = 4,
    FocusNavigationDirection_Right = 5,
    FocusNavigationDirection_None = 6,
};
enum __x_ABI_CWindows_CUI_CXaml_CInput_CInputScopeNameValue
{
    InputScopeNameValue_Default = 0,
    InputScopeNameValue_Url = 1,
    InputScopeNameValue_EmailSmtpAddress = 5,
    InputScopeNameValue_PersonalFullName = 7,
    InputScopeNameValue_CurrencyAmountAndSymbol = 20,
    InputScopeNameValue_CurrencyAmount = 21,
    InputScopeNameValue_DateMonthNumber = 23,
    InputScopeNameValue_DateDayNumber = 24,
    InputScopeNameValue_DateYear = 25,
    InputScopeNameValue_Digits = 28,
    InputScopeNameValue_Number = 29,
    InputScopeNameValue_Password = 31,
    InputScopeNameValue_TelephoneNumber = 32,
    InputScopeNameValue_TelephoneCountryCode = 33,
    InputScopeNameValue_TelephoneAreaCode = 34,
    InputScopeNameValue_TelephoneLocalNumber = 35,
    InputScopeNameValue_TimeHour = 37,
    InputScopeNameValue_TimeMinutesOrSeconds = 38,
    InputScopeNameValue_NumberFullWidth = 39,
    InputScopeNameValue_AlphanumericHalfWidth = 40,
    InputScopeNameValue_AlphanumericFullWidth = 41,
    InputScopeNameValue_Hiragana = 44,
    InputScopeNameValue_KatakanaHalfWidth = 45,
    InputScopeNameValue_KatakanaFullWidth = 46,
    InputScopeNameValue_Hanja = 47,
    InputScopeNameValue_HangulHalfWidth = 48,
    InputScopeNameValue_HangulFullWidth = 49,
    InputScopeNameValue_Search = 50,
    InputScopeNameValue_Formula = 51,
    InputScopeNameValue_SearchIncremental = 52,
    InputScopeNameValue_ChineseHalfWidth = 53,
    InputScopeNameValue_ChineseFullWidth = 54,
    InputScopeNameValue_NativeScript = 55,
    InputScopeNameValue_Text = 57,
    InputScopeNameValue_Chat = 58,
    InputScopeNameValue_NameOrPhoneNumber = 59,
    InputScopeNameValue_EmailNameOrAddress = 60,
    InputScopeNameValue_Maps = 62,
    InputScopeNameValue_NumericPassword = 63,
    InputScopeNameValue_NumericPin = 64,
    InputScopeNameValue_AlphanumericPin = 65,
    InputScopeNameValue_FormulaNumber = 67,
    InputScopeNameValue_ChatWithoutEmoji = 68,
};
enum __x_ABI_CWindows_CUI_CXaml_CInput_CKeyTipPlacementMode
{
    KeyTipPlacementMode_Auto = 0,
    KeyTipPlacementMode_Bottom = 1,
    KeyTipPlacementMode_Top = 2,
    KeyTipPlacementMode_Left = 3,
    KeyTipPlacementMode_Right = 4,
    KeyTipPlacementMode_Center = 5,
    KeyTipPlacementMode_Hidden = 6,
};
enum __x_ABI_CWindows_CUI_CXaml_CInput_CKeyboardAcceleratorPlacementMode
{
    KeyboardAcceleratorPlacementMode_Auto = 0,
    KeyboardAcceleratorPlacementMode_Hidden = 1,
};
enum __x_ABI_CWindows_CUI_CXaml_CInput_CKeyboardNavigationMode
{
    KeyboardNavigationMode_Local = 0,
    KeyboardNavigationMode_Cycle = 1,
    KeyboardNavigationMode_Once = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CInput_CManipulationModes
{
    ManipulationModes_None = 0,
    ManipulationModes_TranslateX = 0x1,
    ManipulationModes_TranslateY = 0x2,
    ManipulationModes_TranslateRailsX = 0x4,
    ManipulationModes_TranslateRailsY = 0x8,
    ManipulationModes_Rotate = 0x10,
    ManipulationModes_Scale = 0x20,
    ManipulationModes_TranslateInertia = 0x40,
    ManipulationModes_RotateInertia = 0x80,
    ManipulationModes_ScaleInertia = 0x100,
    ManipulationModes_All = 0xffff,
    ManipulationModes_System = 0x10000,
};
enum __x_ABI_CWindows_CUI_CXaml_CInput_CStandardUICommandKind
{
    StandardUICommandKind_None = 0,
    StandardUICommandKind_Cut = 1,
    StandardUICommandKind_Copy = 2,
    StandardUICommandKind_Paste = 3,
    StandardUICommandKind_SelectAll = 4,
    StandardUICommandKind_Delete = 5,
    StandardUICommandKind_Share = 6,
    StandardUICommandKind_Save = 7,
    StandardUICommandKind_Open = 8,
    StandardUICommandKind_Close = 9,
    StandardUICommandKind_Pause = 10,
    StandardUICommandKind_Play = 11,
    StandardUICommandKind_Stop = 12,
    StandardUICommandKind_Forward = 13,
    StandardUICommandKind_Backward = 14,
    StandardUICommandKind_Undo = 15,
    StandardUICommandKind_Redo = 16,
};
enum __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusKeyboardNavigationMode
{
    XYFocusKeyboardNavigationMode_Auto = 0,
    XYFocusKeyboardNavigationMode_Enabled = 1,
    XYFocusKeyboardNavigationMode_Disabled = 2,
};
enum __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategy
{
    XYFocusNavigationStrategy_Auto = 0,
    XYFocusNavigationStrategy_Projection = 1,
    XYFocusNavigationStrategy_NavigationDirectionDistance = 2,
    XYFocusNavigationStrategy_RectilinearDistance = 3,
};
enum __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategyOverride
{
    XYFocusNavigationStrategyOverride_None = 0,
    XYFocusNavigationStrategyOverride_Auto = 1,
    XYFocusNavigationStrategyOverride_Projection = 2,
    XYFocusNavigationStrategyOverride_NavigationDirectionDistance = 3,
    XYFocusNavigationStrategyOverride_RectilinearDistance = 4,
};
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIPointerEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedEventHandler;
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler * This,
                  __RPC__in_opt IInspectable * sender,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandlerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,sender,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CITappedEventHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IAccessKeyDisplayDismissedEventArgs[] = L"Windows.UI.Xaml.Input.IAccessKeyDisplayDismissedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayDismissedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IAccessKeyDisplayRequestedEventArgs[] = L"Windows.UI.Xaml.Input.IAccessKeyDisplayRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PressedKeys )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PressedKeys(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyDisplayRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IAccessKeyInvokedEventArgs[] = L"Windows.UI.Xaml.Input.IAccessKeyInvokedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyInvokedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IAccessKeyManager[] = L"Windows.UI.Xaml.Input.IAccessKeyManager";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IAccessKeyManagerStatics[] = L"Windows.UI.Xaml.Input.IAccessKeyManagerStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsDisplayModeEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_IsDisplayModeEnabledChanged )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_IsDisplayModeEnabledChanged )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *ExitDisplayMode )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsDisplayModeEnabled(This,value) )
    ( (This)->lpVtbl->add_IsDisplayModeEnabledChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_IsDisplayModeEnabledChanged(This,token) )
    ( (This)->lpVtbl->ExitDisplayMode(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IAccessKeyManagerStatics2[] = L"Windows.UI.Xaml.Input.IAccessKeyManagerStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AreKeyTipsEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AreKeyTipsEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AreKeyTipsEnabled(This,value) )
    ( (This)->lpVtbl->put_AreKeyTipsEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIAccessKeyManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_ICanExecuteRequestedEventArgs[] = L"Windows.UI.Xaml.Input.ICanExecuteRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CICanExecuteRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICanExecuteRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICanExecuteRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICanExecuteRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICanExecuteRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICanExecuteRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICanExecuteRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Parameter )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICanExecuteRequestedEventArgs * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanExecute )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICanExecuteRequestedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CanExecute )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICanExecuteRequestedEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CICanExecuteRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CICanExecuteRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CICanExecuteRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Parameter(This,value) )
    ( (This)->lpVtbl->get_CanExecute(This,value) )
    ( (This)->lpVtbl->put_CanExecute(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CICanExecuteRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_ICharacterReceivedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ICharacterReceivedRoutedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Character )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This,
                           __RPC__out WCHAR * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyStatus )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Character(This,value) )
    ( (This)->lpVtbl->get_KeyStatus(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CICharacterReceivedRoutedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_ICommand[] = L"Windows.UI.Xaml.Input.ICommand";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_CanExecuteChanged )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CanExecuteChanged )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *CanExecute )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This,
                  __RPC__in_opt IInspectable * parameter,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *Execute )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * This,
                  __RPC__in_opt IInspectable * parameter
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CICommandVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CICommand
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CICommandVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_CanExecuteChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_CanExecuteChanged(This,token) )
    ( (This)->lpVtbl->CanExecute(This,parameter,result) )
    ( (This)->lpVtbl->Execute(This,parameter) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CICommand;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IContextRequestedEventArgs[] = L"Windows.UI.Xaml.Input.IContextRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *TryGetPosition )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * relativeTo,
                   __RPC__out __x_ABI_CWindows_CFoundation_CPoint * point,
                           __RPC__out boolean * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->TryGetPosition(This,relativeTo,point,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIContextRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IDoubleTappedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IDoubleTappedRoutedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPosition )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * relativeTo,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->GetPosition(This,relativeTo,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIDoubleTappedRoutedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IExecuteRequestedEventArgs[] = L"Windows.UI.Xaml.Input.IExecuteRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIExecuteRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIExecuteRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIExecuteRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIExecuteRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIExecuteRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIExecuteRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIExecuteRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Parameter )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIExecuteRequestedEventArgs * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIExecuteRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIExecuteRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIExecuteRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Parameter(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIExecuteRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFindNextElementOptions[] = L"Windows.UI.Xaml.Input.IFindNextElementOptions";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptionsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_SearchRoot )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_SearchRoot )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExclusionRect )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExclusionRect )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
                  __x_ABI_CWindows_CFoundation_CRect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HintRect )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_HintRect )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
                  __x_ABI_CWindows_CFoundation_CRect value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_XYFocusNavigationStrategyOverride )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategyOverride * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_XYFocusNavigationStrategyOverride )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CXYFocusNavigationStrategyOverride value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptionsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptionsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_SearchRoot(This,value) )
    ( (This)->lpVtbl->put_SearchRoot(This,value) )
    ( (This)->lpVtbl->get_ExclusionRect(This,value) )
    ( (This)->lpVtbl->put_ExclusionRect(This,value) )
    ( (This)->lpVtbl->get_HintRect(This,value) )
    ( (This)->lpVtbl->put_HintRect(This,value) )
    ( (This)->lpVtbl->get_XYFocusNavigationStrategyOverride(This,value) )
    ( (This)->lpVtbl->put_XYFocusNavigationStrategyOverride(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManager[] = L"Windows.UI.Xaml.Input.IFocusManager";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManagerGotFocusEventArgs[] = L"Windows.UI.Xaml.Input.IFocusManagerGotFocusEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerGotFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerGotFocusEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerGotFocusEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerGotFocusEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerGotFocusEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerGotFocusEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerGotFocusEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NewFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerGotFocusEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CorrelationId )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerGotFocusEventArgs * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerGotFocusEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerGotFocusEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerGotFocusEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NewFocusedElement(This,value) )
    ( (This)->lpVtbl->get_CorrelationId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerGotFocusEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManagerLostFocusEventArgs[] = L"Windows.UI.Xaml.Input.IFocusManagerLostFocusEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerLostFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerLostFocusEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerLostFocusEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerLostFocusEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerLostFocusEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerLostFocusEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerLostFocusEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OldFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerLostFocusEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CorrelationId )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerLostFocusEventArgs * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerLostFocusEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerLostFocusEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerLostFocusEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OldFocusedElement(This,value) )
    ( (This)->lpVtbl->get_CorrelationId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerLostFocusEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManagerStatics[] = L"Windows.UI.Xaml.Input.IFocusManagerStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics * This,
                           __RPC__deref_out_opt IInspectable * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetFocusedElement(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManagerStatics2[] = L"Windows.UI.Xaml.Input.IFocusManagerStatics2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *TryMoveFocus )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection focusNavigationDirection,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryMoveFocus(This,focusNavigationDirection,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManagerStatics3[] = L"Windows.UI.Xaml.Input.IFocusManagerStatics3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *FindNextFocusableElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection focusNavigationDirection,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FindNextFocusableElementWithHint )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection focusNavigationDirection,
                  __x_ABI_CWindows_CFoundation_CRect hintRect,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindNextFocusableElement(This,focusNavigationDirection,result) )
    ( (This)->lpVtbl->FindNextFocusableElementWithHint(This,focusNavigationDirection,hintRect,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManagerStatics4[] = L"Windows.UI.Xaml.Input.IFocusManagerStatics4";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *TryMoveFocusWithOptions )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection focusNavigationDirection,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * focusNavigationOptions,
                           __RPC__out boolean * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FindNextElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection focusNavigationDirection,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindFirstFocusableElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * searchScope,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindLastFocusableElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * searchScope,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *FindNextElementWithOptions )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection focusNavigationDirection,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * focusNavigationOptions,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryMoveFocusWithOptions(This,focusNavigationDirection,focusNavigationOptions,result) )
    ( (This)->lpVtbl->FindNextElement(This,focusNavigationDirection,result) )
    ( (This)->lpVtbl->FindFirstFocusableElement(This,searchScope,result) )
    ( (This)->lpVtbl->FindLastFocusableElement(This,searchScope,result) )
    ( (This)->lpVtbl->FindNextElementWithOptions(This,focusNavigationDirection,focusNavigationOptions,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManagerStatics5[] = L"Windows.UI.Xaml.Input.IFocusManagerStatics5";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryFocusAsync )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics5 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                  __x_ABI_CWindows_CUI_CXaml_CFocusState value,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TryMoveFocusAsync )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics5 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection focusNavigationDirection,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TryMoveFocusWithOptionsAsync )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics5 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection focusNavigationDirection,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIFindNextElementOptions * focusNavigationOptions,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CXaml__CInput__CFocusMovementResult * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics5Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryFocusAsync(This,element,value,operation) )
    ( (This)->lpVtbl->TryMoveFocusAsync(This,focusNavigationDirection,operation) )
    ( (This)->lpVtbl->TryMoveFocusWithOptionsAsync(This,focusNavigationDirection,focusNavigationOptions,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManagerStatics6[] = L"Windows.UI.Xaml.Input.IFocusManagerStatics6";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_GotFocus )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6 * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerGotFocusEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GotFocus )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LostFocus )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6 * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CUI__CXaml__CInput__CFocusManagerLostFocusEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LostFocus )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_GettingFocus )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6 * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CUI__CXaml__CInput__CGettingFocusEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GettingFocus )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6 * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LosingFocus )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6 * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CUI__CXaml__CInput__CLosingFocusEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LosingFocus )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_GotFocus(This,handler,token) )
    ( (This)->lpVtbl->remove_GotFocus(This,token) )
    ( (This)->lpVtbl->add_LostFocus(This,handler,token) )
    ( (This)->lpVtbl->remove_LostFocus(This,token) )
    ( (This)->lpVtbl->add_GettingFocus(This,handler,token) )
    ( (This)->lpVtbl->remove_GettingFocus(This,token) )
    ( (This)->lpVtbl->add_LosingFocus(This,handler,token) )
    ( (This)->lpVtbl->remove_LosingFocus(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics6;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusManagerStatics7[] = L"Windows.UI.Xaml.Input.IFocusManagerStatics7";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics7Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics7 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics7 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics7 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics7 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics7 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics7 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *GetFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics7 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIXamlRoot * xamlRoot,
                           __RPC__deref_out_opt IInspectable * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics7Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics7
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics7Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetFocusedElement(This,xamlRoot,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusManagerStatics7;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IFocusMovementResult[] = L"Windows.UI.Xaml.Input.IFocusMovementResult";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusMovementResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusMovementResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusMovementResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusMovementResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusMovementResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusMovementResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusMovementResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Succeeded )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusMovementResult * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusMovementResultVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusMovementResult
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIFocusMovementResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Succeeded(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIFocusMovementResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IGettingFocusEventArgs[] = L"Windows.UI.Xaml.Input.IGettingFocusEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OldFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NewFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusState )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CFocusState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Direction )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputDevice )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CFocusInputDeviceKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OldFocusedElement(This,value) )
    ( (This)->lpVtbl->get_NewFocusedElement(This,value) )
    ( (This)->lpVtbl->put_NewFocusedElement(This,value) )
    ( (This)->lpVtbl->get_FocusState(This,value) )
    ( (This)->lpVtbl->get_Direction(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->get_InputDevice(This,value) )
    ( (This)->lpVtbl->get_Cancel(This,value) )
    ( (This)->lpVtbl->put_Cancel(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IGettingFocusEventArgs2[] = L"Windows.UI.Xaml.Input.IGettingFocusEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryCancel )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs2 * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetNewFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryCancel(This,result) )
    ( (This)->lpVtbl->TrySetNewFocusedElement(This,element,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IGettingFocusEventArgs3[] = L"Windows.UI.Xaml.Input.IGettingFocusEventArgs3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CorrelationId )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs3 * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CorrelationId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIGettingFocusEventArgs3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IHoldingRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IHoldingRoutedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HoldingState )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CHoldingState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPosition )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * relativeTo,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
    ( (This)->lpVtbl->get_HoldingState(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->GetPosition(This,relativeTo,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIHoldingRoutedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IInertiaExpansionBehavior[] = L"Windows.UI.Xaml.Input.IInertiaExpansionBehavior";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehaviorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DesiredDeceleration )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredDeceleration )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredExpansion )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredExpansion )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehaviorVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehaviorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DesiredDeceleration(This,value) )
    ( (This)->lpVtbl->put_DesiredDeceleration(This,value) )
    ( (This)->lpVtbl->get_DesiredExpansion(This,value) )
    ( (This)->lpVtbl->put_DesiredExpansion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IInertiaRotationBehavior[] = L"Windows.UI.Xaml.Input.IInertiaRotationBehavior";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehaviorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DesiredDeceleration )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredDeceleration )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredRotation )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredRotation )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehaviorVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehaviorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DesiredDeceleration(This,value) )
    ( (This)->lpVtbl->put_DesiredDeceleration(This,value) )
    ( (This)->lpVtbl->get_DesiredRotation(This,value) )
    ( (This)->lpVtbl->put_DesiredRotation(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IInertiaTranslationBehavior[] = L"Windows.UI.Xaml.Input.IInertiaTranslationBehavior";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehaviorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DesiredDeceleration )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredDeceleration )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredDisplacement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DesiredDisplacement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehaviorVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehaviorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DesiredDeceleration(This,value) )
    ( (This)->lpVtbl->put_DesiredDeceleration(This,value) )
    ( (This)->lpVtbl->get_DesiredDisplacement(This,value) )
    ( (This)->lpVtbl->put_DesiredDisplacement(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IInputScope[] = L"Windows.UI.Xaml.Input.IInputScope";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Names )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CInput__CInputScopeName * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Names(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIInputScope;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IInputScopeName[] = L"Windows.UI.Xaml.Input.IInputScopeName";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_NameValue )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CInputScopeNameValue * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NameValue )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CInputScopeNameValue value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_NameValue(This,value) )
    ( (This)->lpVtbl->put_NameValue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IInputScopeNameFactory[] = L"Windows.UI.Xaml.Input.IInputScopeNameFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CInputScopeNameValue nameValue,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeName * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,nameValue,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIInputScopeNameFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IKeyRoutedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Key )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyStatus )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Key(This,value) )
    ( (This)->lpVtbl->get_KeyStatus(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyRoutedEventArgs2[] = L"Windows.UI.Xaml.Input.IKeyRoutedEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OriginalKey )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2 * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OriginalKey(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyRoutedEventArgs3[] = L"Windows.UI.Xaml.Input.IKeyRoutedEventArgs3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyRoutedEventArgs3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyboardAccelerator[] = L"Windows.UI.Xaml.Input.IKeyboardAccelerator";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Key )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Key )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
                  __x_ABI_CWindows_CSystem_CVirtualKey value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Modifiers )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKeyModifiers * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Modifiers )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
                  __x_ABI_CWindows_CSystem_CVirtualKeyModifiers value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsEnabled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScopeOwner )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ScopeOwner )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Invoked )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CKeyboardAccelerator_Windows__CUI__CXaml__CInput__CKeyboardAcceleratorInvokedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Invoked )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Key(This,value) )
    ( (This)->lpVtbl->put_Key(This,value) )
    ( (This)->lpVtbl->get_Modifiers(This,value) )
    ( (This)->lpVtbl->put_Modifiers(This,value) )
    ( (This)->lpVtbl->get_IsEnabled(This,value) )
    ( (This)->lpVtbl->put_IsEnabled(This,value) )
    ( (This)->lpVtbl->get_ScopeOwner(This,value) )
    ( (This)->lpVtbl->put_ScopeOwner(This,value) )
    ( (This)->lpVtbl->add_Invoked(This,handler,token) )
    ( (This)->lpVtbl->remove_Invoked(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyboardAcceleratorFactory[] = L"Windows.UI.Xaml.Input.IKeyboardAcceleratorFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyboardAcceleratorInvokedEventArgs[] = L"Windows.UI.Xaml.Input.IKeyboardAcceleratorInvokedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Element )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->get_Element(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyboardAcceleratorInvokedEventArgs2[] = L"Windows.UI.Xaml.Input.IKeyboardAcceleratorInvokedEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KeyboardAccelerator )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAccelerator * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KeyboardAccelerator(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorInvokedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IKeyboardAcceleratorStatics[] = L"Windows.UI.Xaml.Input.IKeyboardAcceleratorStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KeyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ModifiersProperty )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsEnabledProperty )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScopeOwnerProperty )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KeyProperty(This,value) )
    ( (This)->lpVtbl->get_ModifiersProperty(This,value) )
    ( (This)->lpVtbl->get_IsEnabledProperty(This,value) )
    ( (This)->lpVtbl->get_ScopeOwnerProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIKeyboardAcceleratorStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_ILosingFocusEventArgs[] = L"Windows.UI.Xaml.Input.ILosingFocusEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OldFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_NewFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_NewFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FocusState )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CFocusState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Direction )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputDevice )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CFocusInputDeviceKind * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OldFocusedElement(This,value) )
    ( (This)->lpVtbl->get_NewFocusedElement(This,value) )
    ( (This)->lpVtbl->put_NewFocusedElement(This,value) )
    ( (This)->lpVtbl->get_FocusState(This,value) )
    ( (This)->lpVtbl->get_Direction(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->get_InputDevice(This,value) )
    ( (This)->lpVtbl->get_Cancel(This,value) )
    ( (This)->lpVtbl->put_Cancel(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_ILosingFocusEventArgs2[] = L"Windows.UI.Xaml.Input.ILosingFocusEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryCancel )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs2 * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetNewFocusedElement )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyObject * element,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryCancel(This,result) )
    ( (This)->lpVtbl->TrySetNewFocusedElement(This,element,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_ILosingFocusEventArgs3[] = L"Windows.UI.Xaml.Input.ILosingFocusEventArgs3";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CorrelationId )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs3 * This,
                           __RPC__out GUID * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs3Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CorrelationId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CILosingFocusEventArgs3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationCompletedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IManipulationCompletedRoutedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Container )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInertial )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Velocities )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationVelocities * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Container(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_IsInertial(This,value) )
    ( (This)->lpVtbl->get_Cumulative(This,value) )
    ( (This)->lpVtbl->get_Velocities(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationCompletedRoutedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationDeltaRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IManipulationDeltaRoutedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Container )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInertial )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Delta )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Velocities )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationVelocities * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
    HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Container(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_IsInertial(This,value) )
    ( (This)->lpVtbl->get_Delta(This,value) )
    ( (This)->lpVtbl->get_Cumulative(This,value) )
    ( (This)->lpVtbl->get_Velocities(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationDeltaRoutedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationInertiaStartingRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IManipulationInertiaStartingRoutedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Container )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ExpansionBehavior )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ExpansionBehavior )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaExpansionBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RotationBehavior )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_RotationBehavior )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaRotationBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TranslationBehavior )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TranslationBehavior )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIInertiaTranslationBehavior * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Delta )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Velocities )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationVelocities * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Container(This,value) )
    ( (This)->lpVtbl->get_ExpansionBehavior(This,value) )
    ( (This)->lpVtbl->put_ExpansionBehavior(This,value) )
    ( (This)->lpVtbl->get_RotationBehavior(This,value) )
    ( (This)->lpVtbl->put_RotationBehavior(This,value) )
    ( (This)->lpVtbl->get_TranslationBehavior(This,value) )
    ( (This)->lpVtbl->put_TranslationBehavior(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
    ( (This)->lpVtbl->get_Delta(This,value) )
    ( (This)->lpVtbl->get_Cumulative(This,value) )
    ( (This)->lpVtbl->get_Velocities(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationInertiaStartingRoutedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationPivot[] = L"Windows.UI.Xaml.Input.IManipulationPivot";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Center )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Center )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Radius )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Radius )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Center(This,value) )
    ( (This)->lpVtbl->put_Center(This,value) )
    ( (This)->lpVtbl->get_Radius(This,value) )
    ( (This)->lpVtbl->put_Radius(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationPivotFactory[] = L"Windows.UI.Xaml.Input.IManipulationPivotFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithCenterAndRadius )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory * This,
                  __x_ABI_CWindows_CFoundation_CPoint center,
                  DOUBLE radius,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstanceWithCenterAndRadius(This,center,radius,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivotFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IManipulationStartedRoutedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Container )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Position )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Cumulative )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CInput_CManipulationDelta * value
        );
    HRESULT ( STDMETHODCALLTYPE *Complete )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Container(This,value) )
    ( (This)->lpVtbl->get_Position(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
    ( (This)->lpVtbl->get_Cumulative(This,value) )
    ( (This)->lpVtbl->Complete(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationStartedRoutedEventArgsFactory[] = L"Windows.UI.Xaml.Input.IManipulationStartedRoutedEventArgsFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgs * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartedRoutedEventArgsFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IManipulationStartingRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IManipulationStartingRoutedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Mode )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CManipulationModes * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Mode )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CManipulationModes value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Container )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Container )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Pivot )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Pivot )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationPivot * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Mode(This,value) )
    ( (This)->lpVtbl->put_Mode(This,value) )
    ( (This)->lpVtbl->get_Container(This,value) )
    ( (This)->lpVtbl->put_Container(This,value) )
    ( (This)->lpVtbl->get_Pivot(This,value) )
    ( (This)->lpVtbl->put_Pivot(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIManipulationStartingRoutedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_INoFocusCandidateFoundEventArgs[] = L"Windows.UI.Xaml.Input.INoFocusCandidateFoundEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Direction )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CFocusNavigationDirection * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InputDevice )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CFocusInputDeviceKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Direction(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->get_InputDevice(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CINoFocusCandidateFoundEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IPointer[] = L"Windows.UI.Xaml.Input.IPointer";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerId )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInContact )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInRange )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerId(This,value) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
    ( (This)->lpVtbl->get_IsInContact(This,value) )
    ( (This)->lpVtbl->get_IsInRange(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIPointer;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IPointerRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IPointerRoutedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Pointer )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIPointer * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyModifiers )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKeyModifiers * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentPoint )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * relativeTo,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetIntermediatePoints )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * relativeTo,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CInput__CPointerPoint * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Pointer(This,value) )
    ( (This)->lpVtbl->get_KeyModifiers(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->GetCurrentPoint(This,relativeTo,result) )
    ( (This)->lpVtbl->GetIntermediatePoints(This,relativeTo,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IPointerRoutedEventArgs2[] = L"Windows.UI.Xaml.Input.IPointerRoutedEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsGenerated )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsGenerated(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIPointerRoutedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IProcessKeyboardAcceleratorEventArgs[] = L"Windows.UI.Xaml.Input.IProcessKeyboardAcceleratorEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Key )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Modifiers )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKeyModifiers * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Key(This,value) )
    ( (This)->lpVtbl->get_Modifiers(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIProcessKeyboardAcceleratorEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IRightTappedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.IRightTappedRoutedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPosition )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * relativeTo,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->GetPosition(This,relativeTo,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIRightTappedRoutedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IStandardUICommand[] = L"Windows.UI.Xaml.Input.IStandardUICommand";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Kind )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CInput_CStandardUICommandKind * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Kind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IStandardUICommand2[] = L"Windows.UI.Xaml.Input.IStandardUICommand2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_Kind )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CStandardUICommandKind value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_Kind(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IStandardUICommandFactory[] = L"Windows.UI.Xaml.Input.IStandardUICommandFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand * * value
        );
    HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithKind )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandFactory * This,
                  __x_ABI_CWindows_CUI_CXaml_CInput_CStandardUICommandKind kind,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommand * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
    ( (This)->lpVtbl->CreateInstanceWithKind(This,kind,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IStandardUICommandStatics[] = L"Windows.UI.Xaml.Input.IStandardUICommandStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KindProperty )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KindProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIStandardUICommandStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_ITappedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ITappedRoutedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerDeviceType )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CDevices_CInput_CPointerDeviceType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetPosition )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CIUIElement * relativeTo,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerDeviceType(This,value) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->GetPosition(This,relativeTo,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CITappedRoutedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IXamlUICommand[] = L"Windows.UI.Xaml.Input.IXamlUICommand";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Label )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Label )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IconSource )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CControls_CIIconSource * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IconSource )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CControls_CIIconSource * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyboardAccelerators )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CXaml__CInput__CKeyboardAccelerator * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccessKey )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AccessKey )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Description )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Description )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Command )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Command )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CInput_CICommand * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ExecuteRequested )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CExecuteRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ExecuteRequested )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CanExecuteRequested )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CXaml__CInput__CXamlUICommand_Windows__CUI__CXaml__CInput__CCanExecuteRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CanExecuteRequested )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *NotifyCanExecuteChanged )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Label(This,value) )
    ( (This)->lpVtbl->put_Label(This,value) )
    ( (This)->lpVtbl->get_IconSource(This,value) )
    ( (This)->lpVtbl->put_IconSource(This,value) )
    ( (This)->lpVtbl->get_KeyboardAccelerators(This,value) )
    ( (This)->lpVtbl->get_AccessKey(This,value) )
    ( (This)->lpVtbl->put_AccessKey(This,value) )
    ( (This)->lpVtbl->get_Description(This,value) )
    ( (This)->lpVtbl->put_Description(This,value) )
    ( (This)->lpVtbl->get_Command(This,value) )
    ( (This)->lpVtbl->put_Command(This,value) )
    ( (This)->lpVtbl->add_ExecuteRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_ExecuteRequested(This,token) )
    ( (This)->lpVtbl->add_CanExecuteRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_CanExecuteRequested(This,token) )
    ( (This)->lpVtbl->NotifyCanExecuteChanged(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IXamlUICommandFactory[] = L"Windows.UI.Xaml.Input.IXamlUICommandFactory";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandFactory * This,
                  __RPC__in_opt IInspectable * baseInterface,
                   __RPC__deref_out_opt IInspectable * * innerInterface,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommand * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandFactoryVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateInstance(This,baseInterface,innerInterface,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Input_IXamlUICommandStatics[] = L"Windows.UI.Xaml.Input.IXamlUICommandStatics";
typedef struct __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_LabelProperty )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IconSourceProperty )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyboardAcceleratorsProperty )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AccessKeyProperty )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DescriptionProperty )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CommandProperty )(
        __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CIDependencyProperty * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStaticsVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_LabelProperty(This,value) )
    ( (This)->lpVtbl->get_IconSourceProperty(This,value) )
    ( (This)->lpVtbl->get_KeyboardAcceleratorsProperty(This,value) )
    ( (This)->lpVtbl->get_AccessKeyProperty(This,value) )
    ( (This)->lpVtbl->get_DescriptionProperty(This,value) )
    ( (This)->lpVtbl->get_CommandProperty(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CInput_CIXamlUICommandStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_AccessKeyDisplayDismissedEventArgs[] = L"Windows.UI.Xaml.Input.AccessKeyDisplayDismissedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_AccessKeyDisplayRequestedEventArgs[] = L"Windows.UI.Xaml.Input.AccessKeyDisplayRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_AccessKeyInvokedEventArgs[] = L"Windows.UI.Xaml.Input.AccessKeyInvokedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_AccessKeyManager[] = L"Windows.UI.Xaml.Input.AccessKeyManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_CanExecuteRequestedEventArgs[] = L"Windows.UI.Xaml.Input.CanExecuteRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_CharacterReceivedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.CharacterReceivedRoutedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ContextRequestedEventArgs[] = L"Windows.UI.Xaml.Input.ContextRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_DoubleTappedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.DoubleTappedRoutedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ExecuteRequestedEventArgs[] = L"Windows.UI.Xaml.Input.ExecuteRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_FindNextElementOptions[] = L"Windows.UI.Xaml.Input.FindNextElementOptions";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_FocusManager[] = L"Windows.UI.Xaml.Input.FocusManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_FocusManagerGotFocusEventArgs[] = L"Windows.UI.Xaml.Input.FocusManagerGotFocusEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_FocusManagerLostFocusEventArgs[] = L"Windows.UI.Xaml.Input.FocusManagerLostFocusEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_FocusMovementResult[] = L"Windows.UI.Xaml.Input.FocusMovementResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_GettingFocusEventArgs[] = L"Windows.UI.Xaml.Input.GettingFocusEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_HoldingRoutedEventArgs[] = L"Windows.UI.Xaml.Input.HoldingRoutedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_InertiaExpansionBehavior[] = L"Windows.UI.Xaml.Input.InertiaExpansionBehavior";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_InertiaRotationBehavior[] = L"Windows.UI.Xaml.Input.InertiaRotationBehavior";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_InertiaTranslationBehavior[] = L"Windows.UI.Xaml.Input.InertiaTranslationBehavior";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_InputScope[] = L"Windows.UI.Xaml.Input.InputScope";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_InputScopeName[] = L"Windows.UI.Xaml.Input.InputScopeName";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_KeyRoutedEventArgs[] = L"Windows.UI.Xaml.Input.KeyRoutedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_KeyboardAccelerator[] = L"Windows.UI.Xaml.Input.KeyboardAccelerator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_KeyboardAcceleratorInvokedEventArgs[] = L"Windows.UI.Xaml.Input.KeyboardAcceleratorInvokedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_LosingFocusEventArgs[] = L"Windows.UI.Xaml.Input.LosingFocusEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ManipulationCompletedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ManipulationCompletedRoutedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ManipulationDeltaRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ManipulationDeltaRoutedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ManipulationInertiaStartingRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ManipulationInertiaStartingRoutedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ManipulationPivot[] = L"Windows.UI.Xaml.Input.ManipulationPivot";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ManipulationStartedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ManipulationStartedRoutedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ManipulationStartingRoutedEventArgs[] = L"Windows.UI.Xaml.Input.ManipulationStartingRoutedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_NoFocusCandidateFoundEventArgs[] = L"Windows.UI.Xaml.Input.NoFocusCandidateFoundEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_Pointer[] = L"Windows.UI.Xaml.Input.Pointer";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_PointerRoutedEventArgs[] = L"Windows.UI.Xaml.Input.PointerRoutedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_ProcessKeyboardAcceleratorEventArgs[] = L"Windows.UI.Xaml.Input.ProcessKeyboardAcceleratorEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_RightTappedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.RightTappedRoutedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_StandardUICommand[] = L"Windows.UI.Xaml.Input.StandardUICommand";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_TappedRoutedEventArgs[] = L"Windows.UI.Xaml.Input.TappedRoutedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Input_XamlUICommand[] = L"Windows.UI.Xaml.Input.XamlUICommand";
       
       
#pragma clang diagnostic pop
