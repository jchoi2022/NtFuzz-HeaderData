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
#include "Windows.System.h"
#include "Windows.UI.h"
#include "Windows.UI.Input.h"
#include "Windows.UI.Input.Inking.h"
#include "Windows.UI.Input.Inking.Core.h"
#include "Windows.UI.Popups.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler;
typedef interface __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler;
typedef interface __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs;
typedef interface __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2 __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreCursor __x_ABI_CWindows_CUI_CCore_CICoreCursor;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreDispatcher __x_ABI_CWindows_CUI_CCore_CICoreDispatcher;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2 __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2;
typedef interface __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource;
typedef interface __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource2 __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource2;
typedef interface __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow __x_ABI_CWindows_CUI_CCore_CICoreWindow;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow2 __x_ABI_CWindows_CUI_CCore_CICoreWindow2;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow3 __x_ABI_CWindows_CUI_CCore_CICoreWindow3;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow4 __x_ABI_CWindows_CUI_CCore_CICoreWindow4;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow5 __x_ABI_CWindows_CUI_CCore_CICoreWindow5;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowWithContext __x_ABI_CWindows_CUI_CCore_CICoreWindowWithContext;
typedef interface __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs;
typedef interface __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow;
typedef interface __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs;
typedef interface __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs;
typedef interface __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2 __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs;
typedef interface __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager;
typedef interface __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2;
typedef interface __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics;
typedef interface __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs;
typedef interface __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs;
typedef interface __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs;
typedef struct __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgsVtbl;
interface __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs;
typedef struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs * This, __RPC__in_opt IInspectable * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs;
typedef struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs * This, __RPC__in_opt IInspectable * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgsVtbl;
interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs;
typedef struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs * This, __RPC__in_opt IInspectable * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgsVtbl;
interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs;
typedef struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs * This, __RPC__in_opt IInspectable * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgsVtbl;
interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs;
typedef struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * This, __RPC__in_opt IInspectable * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgsVtbl;
interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs;
typedef struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs * This, __RPC__in_opt IInspectable * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgsVtbl;
interface __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource;
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CCore_CICoreInkIndependentInputSource * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CCore__CCoreInkIndependentInputSource_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput;
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkStrokeInput * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkStrokeInput_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput;
typedef interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CInput_CInking_CIInkUnprocessedInput * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CInput__CInking__CInkUnprocessedInput_Windows__CUI__CCore__CPointerEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor __x_ABI_CWindows_CUI_CInput_CIKeyboardDeliveryInterceptor;
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
typedef interface __x_ABI_CWindows_CUI_CPopups_CIUICommand __x_ABI_CWindows_CUI_CPopups_CIUICommand;
typedef interface __FIIterator_1_Windows__CUI__CPopups__CIUICommand __FIIterator_1_Windows__CUI__CPopups__CIUICommand;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CPopups__CIUICommand;
typedef struct __FIIterator_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__out __x_ABI_CWindows_CUI_CPopups_CIUICommand * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CPopups__CIUICommand * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CPopups__CIUICommandVtbl;
interface __FIIterator_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CPopups__CIUICommand __FIIterable_1_Windows__CUI__CPopups__CIUICommand;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CPopups__CIUICommand;
typedef struct __FIIterable_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CPopups__CIUICommand **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CPopups__CIUICommandVtbl;
interface __FIIterable_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CPopups__CIUICommand __FIVectorView_1_Windows__CUI__CPopups__CIUICommand;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CPopups__CIUICommand;
typedef struct __FIVectorView_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CPopups_CIUICommand * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                       __x_ABI_CWindows_CUI_CPopups_CIUICommand * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CPopups__CIUICommand * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CPopups__CIUICommandVtbl;
interface __FIVectorView_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
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
typedef interface __FIVector_1_Windows__CUI__CPopups__CIUICommand __FIVector_1_Windows__CUI__CPopups__CIUICommand;
EXTERN_C const IID IID___FIVector_1_Windows__CUI__CPopups__CIUICommand;
typedef struct __FIVector_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
                       __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
                   unsigned int index,
                            __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommand * *item);
                    HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
                            __RPC__out unsigned int *size);
    HRESULT ( STDMETHODCALLTYPE *GetView )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CPopups__CIUICommand **view);
    HRESULT ( STDMETHODCALLTYPE *IndexOf )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
                   __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item,
                    __RPC__out unsigned int *index,
                            __RPC__out boolean *found);
    HRESULT ( STDMETHODCALLTYPE *SetAt )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item);
    HRESULT ( STDMETHODCALLTYPE *InsertAt )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
                   unsigned int index,
                   __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAt )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, unsigned int index);
    HRESULT ( STDMETHODCALLTYPE *Append )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__in __x_ABI_CWindows_CUI_CPopups_CIUICommand * item);
    HRESULT ( STDMETHODCALLTYPE *RemoveAtEnd )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *Clear )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
                   unsigned int startIndex,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *items,
                            __RPC__out unsigned int *actual);
    HRESULT ( STDMETHODCALLTYPE *ReplaceAll )(__RPC__in __FIVector_1_Windows__CUI__CPopups__CIUICommand * This,
                   unsigned int count,
                            __RPC__in_ecount_full(count) __x_ABI_CWindows_CUI_CPopups_CIUICommand * *value);
    END_INTERFACE
} __FIVector_1_Windows__CUI__CPopups__CIUICommandVtbl;
interface __FIVector_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIVector_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
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
typedef interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand;
EXTERN_C const IID IID___FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand;
typedef interface __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand;
typedef struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__in_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand *asyncInfo, AsyncStatus status);
    END_INTERFACE
} __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommandVtbl;
interface __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,asyncInfo,status) )
typedef interface __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand;
EXTERN_C const IID IID___FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand;
typedef struct __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommandVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *put_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__in_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand *handler);
                    HRESULT ( STDMETHODCALLTYPE *get_Completed )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__deref_out_opt __FIAsyncOperationCompletedHandler_1_Windows__CUI__CPopups__CIUICommand **handler);
    HRESULT ( STDMETHODCALLTYPE *GetResults )(__RPC__in __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * This, __RPC__out __x_ABI_CWindows_CUI_CPopups_CIUICommand * *results);
    END_INTERFACE
} __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommandVtbl;
interface __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand
{
    CONST_VTBL struct __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommandVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef interface __x_ABI_CWindows_CSystem_CIDispatcherQueue __x_ABI_CWindows_CSystem_CIDispatcherQueue;
typedef enum __x_ABI_CWindows_CSystem_CVirtualKey __x_ABI_CWindows_CSystem_CVirtualKey;
typedef enum __x_ABI_CWindows_CSystem_CVirtualKeyModifiers __x_ABI_CWindows_CSystem_CVirtualKeyModifiers;
typedef interface __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler;
typedef interface __x_ABI_CWindows_CUI_CIUIContext __x_ABI_CWindows_CUI_CIUIContext;
typedef enum __x_ABI_CWindows_CUI_CCore_CAppViewBackButtonVisibility __x_ABI_CWindows_CUI_CCore_CAppViewBackButtonVisibility;
typedef enum __x_ABI_CWindows_CUI_CCore_CCoreAcceleratorKeyEventType __x_ABI_CWindows_CUI_CCore_CCoreAcceleratorKeyEventType;
typedef enum __x_ABI_CWindows_CUI_CCore_CCoreCursorType __x_ABI_CWindows_CUI_CCore_CCoreCursorType;
typedef enum __x_ABI_CWindows_CUI_CCore_CCoreDispatcherPriority __x_ABI_CWindows_CUI_CCore_CCoreDispatcherPriority;
typedef enum __x_ABI_CWindows_CUI_CCore_CCoreInputDeviceTypes __x_ABI_CWindows_CUI_CCore_CCoreInputDeviceTypes;
typedef enum __x_ABI_CWindows_CUI_CCore_CCoreProcessEventsOption __x_ABI_CWindows_CUI_CCore_CCoreProcessEventsOption;
typedef enum __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluationScore __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluationScore;
typedef enum __x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates __x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates;
typedef enum __x_ABI_CWindows_CUI_CCore_CCoreWindowActivationMode __x_ABI_CWindows_CUI_CCore_CCoreWindowActivationMode;
typedef enum __x_ABI_CWindows_CUI_CCore_CCoreWindowActivationState __x_ABI_CWindows_CUI_CCore_CCoreWindowActivationState;
typedef enum __x_ABI_CWindows_CUI_CCore_CCoreWindowFlowDirection __x_ABI_CWindows_CUI_CCore_CCoreWindowFlowDirection;
typedef struct __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus;
typedef struct __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluation __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluation;
enum __x_ABI_CWindows_CUI_CCore_CAppViewBackButtonVisibility
{
    AppViewBackButtonVisibility_Visible = 0,
    AppViewBackButtonVisibility_Collapsed = 1,
    AppViewBackButtonVisibility_Disabled = 2,
};
enum __x_ABI_CWindows_CUI_CCore_CCoreAcceleratorKeyEventType
{
    CoreAcceleratorKeyEventType_Character = 2,
    CoreAcceleratorKeyEventType_DeadCharacter = 3,
    CoreAcceleratorKeyEventType_KeyDown = 0,
    CoreAcceleratorKeyEventType_KeyUp = 1,
    CoreAcceleratorKeyEventType_SystemCharacter = 6,
    CoreAcceleratorKeyEventType_SystemDeadCharacter = 7,
    CoreAcceleratorKeyEventType_SystemKeyDown = 4,
    CoreAcceleratorKeyEventType_SystemKeyUp = 5,
    CoreAcceleratorKeyEventType_UnicodeCharacter = 8,
};
enum __x_ABI_CWindows_CUI_CCore_CCoreCursorType
{
    CoreCursorType_Arrow = 0,
    CoreCursorType_Cross = 1,
    CoreCursorType_Custom = 2,
    CoreCursorType_Hand = 3,
    CoreCursorType_Help = 4,
    CoreCursorType_IBeam = 5,
    CoreCursorType_SizeAll = 6,
    CoreCursorType_SizeNortheastSouthwest = 7,
    CoreCursorType_SizeNorthSouth = 8,
    CoreCursorType_SizeNorthwestSoutheast = 9,
    CoreCursorType_SizeWestEast = 10,
    CoreCursorType_UniversalNo = 11,
    CoreCursorType_UpArrow = 12,
    CoreCursorType_Wait = 13,
    CoreCursorType_Pin = 14,
    CoreCursorType_Person = 15,
};
enum __x_ABI_CWindows_CUI_CCore_CCoreDispatcherPriority
{
    CoreDispatcherPriority_Idle = -2,
    CoreDispatcherPriority_Low = -1,
    CoreDispatcherPriority_Normal = 0,
    CoreDispatcherPriority_High = 1,
};
enum __x_ABI_CWindows_CUI_CCore_CCoreInputDeviceTypes
{
    CoreInputDeviceTypes_None = 0,
    CoreInputDeviceTypes_Touch = 0x1,
    CoreInputDeviceTypes_Pen = 0x2,
    CoreInputDeviceTypes_Mouse = 0x4,
};
enum __x_ABI_CWindows_CUI_CCore_CCoreProcessEventsOption
{
    CoreProcessEventsOption_ProcessOneAndAllPending = 0,
    CoreProcessEventsOption_ProcessOneIfPresent = 1,
    CoreProcessEventsOption_ProcessUntilQuit = 2,
    CoreProcessEventsOption_ProcessAllIfPresent = 3,
};
enum __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluationScore
{
    CoreProximityEvaluationScore_Closest = 0,
    CoreProximityEvaluationScore_Farthest = 2147483647,
};
enum __x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates
{
    CoreVirtualKeyStates_None = 0,
    CoreVirtualKeyStates_Down = 0x1,
    CoreVirtualKeyStates_Locked = 0x2,
};
enum __x_ABI_CWindows_CUI_CCore_CCoreWindowActivationMode
{
    CoreWindowActivationMode_None = 0,
    CoreWindowActivationMode_Deactivated = 1,
    CoreWindowActivationMode_ActivatedNotForeground = 2,
    CoreWindowActivationMode_ActivatedInForeground = 3,
};
enum __x_ABI_CWindows_CUI_CCore_CCoreWindowActivationState
{
    CoreWindowActivationState_CodeActivated = 0,
    CoreWindowActivationState_Deactivated = 1,
    CoreWindowActivationState_PointerActivated = 2,
};
enum __x_ABI_CWindows_CUI_CCore_CCoreWindowFlowDirection
{
    CoreWindowFlowDirection_LeftToRight = 0,
    CoreWindowFlowDirection_RightToLeft = 1,
};
struct __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus
{
    UINT32 RepeatCount;
    UINT32 ScanCode;
    boolean IsExtendedKey;
    boolean IsMenuKeyDown;
    boolean WasKeyDown;
    boolean IsKeyReleased;
};
struct __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluation
{
    INT32 Score;
    __x_ABI_CWindows_CFoundation_CPoint AdjustedPoint;
};
typedef struct __x_ABI_CWindows_CUI_CCore_CIDispatchedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CIDispatchedHandlerVtbl;
interface __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIDispatchedHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIDispatchedHandler;
typedef struct __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject);
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler * This);
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler * This);
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs * e
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerVtbl;
interface __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
    ( (This)->lpVtbl->Invoke(This,e) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IAcceleratorKeyEventArgs[] = L"Windows.UI.Core.IAcceleratorKeyEventArgs";
typedef struct __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_EventType )(
        __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCoreAcceleratorKeyEventType * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VirtualKey )(
        __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyStatus )(
        __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_EventType(This,value) )
    ( (This)->lpVtbl->get_VirtualKey(This,value) )
    ( (This)->lpVtbl->get_KeyStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IAcceleratorKeyEventArgs2[] = L"Windows.UI.Core.IAcceleratorKeyEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIAcceleratorKeyEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IAutomationProviderRequestedEventArgs[] = L"Windows.UI.Core.IAutomationProviderRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AutomationProvider )(
        __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AutomationProvider )(
        __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs * This,
                  __RPC__in_opt IInspectable * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AutomationProvider(This,value) )
    ( (This)->lpVtbl->put_AutomationProvider(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIAutomationProviderRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IBackRequestedEventArgs[] = L"Windows.UI.Core.IBackRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIBackRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICharacterReceivedEventArgs[] = L"Windows.UI.Core.ICharacterReceivedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_KeyCode )(
        __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyStatus )(
        __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_KeyCode(This,value) )
    ( (This)->lpVtbl->get_KeyStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICharacterReceivedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IClosestInteractiveBoundsRequestedEventArgs[] = L"Windows.UI.Core.IClosestInteractiveBoundsRequestedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PointerPosition )(
        __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SearchBounds )(
        __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ClosestInteractiveBounds )(
        __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ClosestInteractiveBounds )(
        __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs * This,
                  __x_ABI_CWindows_CFoundation_CRect value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PointerPosition(This,value) )
    ( (This)->lpVtbl->get_SearchBounds(This,value) )
    ( (This)->lpVtbl->get_ClosestInteractiveBounds(This,value) )
    ( (This)->lpVtbl->put_ClosestInteractiveBounds(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIClosestInteractiveBoundsRequestedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreAcceleratorKeys[] = L"Windows.UI.Core.ICoreAcceleratorKeys";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeysVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_AcceleratorKeyActivated )(
        __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreDispatcher_Windows__CUI__CCore__CAcceleratorKeyEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AcceleratorKeyActivated )(
        __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeysVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeysVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_AcceleratorKeyActivated(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_AcceleratorKeyActivated(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreAcceleratorKeys;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreClosestInteractiveBoundsRequested[] = L"Windows.UI.Core.ICoreClosestInteractiveBoundsRequested";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequestedVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ClosestInteractiveBoundsRequested )(
        __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreComponentInputSource_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ClosestInteractiveBoundsRequested )(
        __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequestedVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequestedVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ClosestInteractiveBoundsRequested(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_ClosestInteractiveBoundsRequested(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreClosestInteractiveBoundsRequested;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreComponentFocusable[] = L"Windows.UI.Core.ICoreComponentFocusable";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HasFocus )(
        __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_GotFocus )(
        __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_GotFocus )(
        __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_LostFocus )(
        __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCoreWindowEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_LostFocus )(
        __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusableVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreComponentFocusableVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HasFocus(This,value) )
    ( (This)->lpVtbl->add_GotFocus(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_GotFocus(This,cookie) )
    ( (This)->lpVtbl->add_LostFocus(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_LostFocus(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreComponentFocusable;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreCursor[] = L"Windows.UI.Core.ICoreCursor";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreCursorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursor * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursor * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursor * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursor * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursor * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursor * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CUI_CCore_CICoreCursor * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Type )(
        __x_ABI_CWindows_CUI_CCore_CICoreCursor * This,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCoreCursorType * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreCursorVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreCursor
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreCursorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->get_Type(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreCursor;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreCursorFactory[] = L"Windows.UI.Core.ICoreCursorFactory";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreCursorFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCursor )(
        __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory * This,
                  __x_ABI_CWindows_CUI_CCore_CCoreCursorType type,
                  UINT32 id,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreCursor * * cursor
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreCursorFactoryVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreCursorFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreCursorFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateCursor(This,type,id,cursor) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreCursorFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreDispatcher[] = L"Windows.UI.Core.ICoreDispatcher";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreDispatcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HasThreadAccess )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *ProcessEvents )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This,
                  __x_ABI_CWindows_CUI_CCore_CCoreProcessEventsOption options
        );
    HRESULT ( STDMETHODCALLTYPE *RunAsync )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This,
                  __x_ABI_CWindows_CUI_CCore_CCoreDispatcherPriority priority,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler * agileCallback,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    HRESULT ( STDMETHODCALLTYPE *RunIdleAsync )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler * agileCallback,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * asyncAction
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreDispatcherVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreDispatcher
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreDispatcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HasThreadAccess(This,value) )
    ( (This)->lpVtbl->ProcessEvents(This,options) )
    ( (This)->lpVtbl->RunAsync(This,priority,agileCallback,asyncAction) )
    ( (This)->lpVtbl->RunIdleAsync(This,agileCallback,asyncAction) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreDispatcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreDispatcher2[] = L"Windows.UI.Core.ICoreDispatcher2";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryRunAsync )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 * This,
                  __x_ABI_CWindows_CUI_CCore_CCoreDispatcherPriority priority,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIDispatchedHandler * agileCallback,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncOperation
        );
    HRESULT ( STDMETHODCALLTYPE *TryRunIdleAsync )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandler * agileCallback,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * asyncOperation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2Vtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreDispatcher2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryRunAsync(This,priority,agileCallback,asyncOperation) )
    ( (This)->lpVtbl->TryRunIdleAsync(This,agileCallback,asyncOperation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreDispatcher2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreDispatcherWithTaskPriority[] = L"Windows.UI.Core.ICoreDispatcherWithTaskPriority";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriorityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CurrentPriority )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCoreDispatcherPriority * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CurrentPriority )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This,
                  __x_ABI_CWindows_CUI_CCore_CCoreDispatcherPriority value
        );
                    HRESULT ( STDMETHODCALLTYPE *ShouldYield )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *ShouldYieldToPriority )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This,
                  __x_ABI_CWindows_CUI_CCore_CCoreDispatcherPriority priority,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *StopProcessEvents )(
        __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriorityVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriorityVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CurrentPriority(This,value) )
    ( (This)->lpVtbl->put_CurrentPriority(This,value) )
    ( (This)->lpVtbl->ShouldYield(This,value) )
    ( (This)->lpVtbl->ShouldYieldToPriority(This,priority,value) )
    ( (This)->lpVtbl->StopProcessEvents(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreDispatcherWithTaskPriority;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreInputSourceBase[] = L"Windows.UI.Core.ICoreInputSourceBase";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBaseVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Dispatcher )(
        __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInputEnabled )(
        __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsInputEnabled )(
        __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This,
                  boolean value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_InputEnabled )(
        __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CInputEnabledEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_InputEnabled )(
        __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBaseVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreInputSourceBaseVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Dispatcher(This,value) )
    ( (This)->lpVtbl->get_IsInputEnabled(This,value) )
    ( (This)->lpVtbl->put_IsInputEnabled(This,value) )
    ( (This)->lpVtbl->add_InputEnabled(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_InputEnabled(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreInputSourceBase;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreKeyboardInputSource[] = L"Windows.UI.Core.ICoreKeyboardInputSource";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentKeyState )(
        __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
                  __x_ABI_CWindows_CSystem_CVirtualKey virtualKey,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates * KeyState
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CharacterReceived )(
        __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CCharacterReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CharacterReceived )(
        __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_KeyDown )(
        __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_KeyDown )(
        __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_KeyUp )(
        __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CKeyEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_KeyUp )(
        __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSourceVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentKeyState(This,virtualKey,KeyState) )
    ( (This)->lpVtbl->add_CharacterReceived(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_CharacterReceived(This,cookie) )
    ( (This)->lpVtbl->add_KeyDown(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_KeyDown(This,cookie) )
    ( (This)->lpVtbl->add_KeyUp(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_KeyUp(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreKeyboardInputSource2[] = L"Windows.UI.Core.ICoreKeyboardInputSource2";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetCurrentKeyEventDeviceId )(
        __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2Vtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetCurrentKeyEventDeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreKeyboardInputSource2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICorePointerInputSource[] = L"Windows.UI.Core.ICorePointerInputSource";
typedef struct __x_ABI_CWindows_CUI_CCore_CICorePointerInputSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ReleasePointerCapture )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetPointerCapture )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HasCapture )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerPosition )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerCursor )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreCursor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PointerCursor )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreCursor * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerCaptureLost )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerCaptureLost )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerEntered )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerEntered )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerExited )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerExited )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerMoved )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerMoved )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerPressed )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerPressed )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerReleased )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerReleased )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerWheelChanged )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerWheelChanged )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICorePointerInputSourceVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICorePointerInputSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ReleasePointerCapture(This) )
    ( (This)->lpVtbl->SetPointerCapture(This) )
    ( (This)->lpVtbl->get_HasCapture(This,value) )
    ( (This)->lpVtbl->get_PointerPosition(This,value) )
    ( (This)->lpVtbl->get_PointerCursor(This,value) )
    ( (This)->lpVtbl->put_PointerCursor(This,value) )
    ( (This)->lpVtbl->add_PointerCaptureLost(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerCaptureLost(This,cookie) )
    ( (This)->lpVtbl->add_PointerEntered(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerEntered(This,cookie) )
    ( (This)->lpVtbl->add_PointerExited(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerExited(This,cookie) )
    ( (This)->lpVtbl->add_PointerMoved(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerMoved(This,cookie) )
    ( (This)->lpVtbl->add_PointerPressed(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerPressed(This,cookie) )
    ( (This)->lpVtbl->add_PointerReleased(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerReleased(This,cookie) )
    ( (This)->lpVtbl->add_PointerWheelChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerWheelChanged(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICorePointerInputSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICorePointerInputSource2[] = L"Windows.UI.Core.ICorePointerInputSource2";
typedef struct __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DispatcherQueue )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIDispatcherQueue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource2Vtbl;
interface __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICorePointerInputSource2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DispatcherQueue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICorePointerInputSource2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICorePointerRedirector[] = L"Windows.UI.Core.ICorePointerRedirector";
typedef struct __x_ABI_CWindows_CUI_CCore_CICorePointerRedirectorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_PointerRoutedAway )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerRoutedAway )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerRoutedTo )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerRoutedTo )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerRoutedReleased )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CICorePointerRedirector_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerRoutedReleased )(
        __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICorePointerRedirectorVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICorePointerRedirector
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICorePointerRedirectorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_PointerRoutedAway(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerRoutedAway(This,cookie) )
    ( (This)->lpVtbl->add_PointerRoutedTo(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerRoutedTo(This,cookie) )
    ( (This)->lpVtbl->add_PointerRoutedReleased(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerRoutedReleased(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICorePointerRedirector;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreTouchHitTesting[] = L"Windows.UI.Core.ICoreTouchHitTesting";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTestingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_TouchHitTesting )(
        __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting * This,
                  __RPC__in_opt __FITypedEventHandler_2_IInspectable_Windows__CUI__CCore__CTouchHitTestingEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TouchHitTesting )(
        __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTestingVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreTouchHitTestingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_TouchHitTesting(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_TouchHitTesting(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreTouchHitTesting;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindow[] = L"Windows.UI.Core.ICoreWindow";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AutomationHostProvider )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                           __RPC__deref_out_opt IInspectable * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Bounds )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomProperties )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CCollections_CIPropertySet * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Dispatcher )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FlowDirection )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCoreWindowFlowDirection * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FlowDirection )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __x_ABI_CWindows_CUI_CCore_CCoreWindowFlowDirection value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInputEnabled )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsInputEnabled )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerCursor )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreCursor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PointerCursor )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreCursor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PointerPosition )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Visible )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *Activate )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This
        );
    HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This
        );
    HRESULT ( STDMETHODCALLTYPE *GetAsyncKeyState )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __x_ABI_CWindows_CSystem_CVirtualKey virtualKey,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates * KeyState
        );
    HRESULT ( STDMETHODCALLTYPE *GetKeyState )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __x_ABI_CWindows_CSystem_CVirtualKey virtualKey,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCoreVirtualKeyStates * KeyState
        );
    HRESULT ( STDMETHODCALLTYPE *ReleasePointerCapture )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetPointerCapture )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Activated )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowActivatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Activated )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AutomationProviderRequested )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CAutomationProviderRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AutomationProviderRequested )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_CharacterReceived )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCharacterReceivedEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CharacterReceived )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Closed )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Closed )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_InputEnabled )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CInputEnabledEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_InputEnabled )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_KeyDown )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_KeyDown )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_KeyUp )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CKeyEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_KeyUp )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerCaptureLost )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerCaptureLost )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerEntered )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerEntered )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerExited )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerExited )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerMoved )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerMoved )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerPressed )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerPressed )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerReleased )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerReleased )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TouchHitTesting )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CTouchHitTestingEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TouchHitTesting )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_PointerWheelChanged )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CPointerEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_PointerWheelChanged )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_SizeChanged )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CWindowSizeChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_SizeChanged )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_VisibilityChanged )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CVisibilityChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_VisibilityChanged )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreWindowVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreWindow
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AutomationHostProvider(This,value) )
    ( (This)->lpVtbl->get_Bounds(This,value) )
    ( (This)->lpVtbl->get_CustomProperties(This,value) )
    ( (This)->lpVtbl->get_Dispatcher(This,value) )
    ( (This)->lpVtbl->get_FlowDirection(This,value) )
    ( (This)->lpVtbl->put_FlowDirection(This,value) )
    ( (This)->lpVtbl->get_IsInputEnabled(This,value) )
    ( (This)->lpVtbl->put_IsInputEnabled(This,value) )
    ( (This)->lpVtbl->get_PointerCursor(This,value) )
    ( (This)->lpVtbl->put_PointerCursor(This,value) )
    ( (This)->lpVtbl->get_PointerPosition(This,value) )
    ( (This)->lpVtbl->get_Visible(This,value) )
    ( (This)->lpVtbl->Activate(This) )
    ( (This)->lpVtbl->Close(This) )
    ( (This)->lpVtbl->GetAsyncKeyState(This,virtualKey,KeyState) )
    ( (This)->lpVtbl->GetKeyState(This,virtualKey,KeyState) )
    ( (This)->lpVtbl->ReleasePointerCapture(This) )
    ( (This)->lpVtbl->SetPointerCapture(This) )
    ( (This)->lpVtbl->add_Activated(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_Activated(This,cookie) )
    ( (This)->lpVtbl->add_AutomationProviderRequested(This,handler,cookie) )
    ( (This)->lpVtbl->remove_AutomationProviderRequested(This,cookie) )
    ( (This)->lpVtbl->add_CharacterReceived(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_CharacterReceived(This,cookie) )
    ( (This)->lpVtbl->add_Closed(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_Closed(This,cookie) )
    ( (This)->lpVtbl->add_InputEnabled(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_InputEnabled(This,cookie) )
    ( (This)->lpVtbl->add_KeyDown(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_KeyDown(This,cookie) )
    ( (This)->lpVtbl->add_KeyUp(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_KeyUp(This,cookie) )
    ( (This)->lpVtbl->add_PointerCaptureLost(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerCaptureLost(This,cookie) )
    ( (This)->lpVtbl->add_PointerEntered(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerEntered(This,cookie) )
    ( (This)->lpVtbl->add_PointerExited(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerExited(This,cookie) )
    ( (This)->lpVtbl->add_PointerMoved(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerMoved(This,cookie) )
    ( (This)->lpVtbl->add_PointerPressed(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerPressed(This,cookie) )
    ( (This)->lpVtbl->add_PointerReleased(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerReleased(This,cookie) )
    ( (This)->lpVtbl->add_TouchHitTesting(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_TouchHitTesting(This,cookie) )
    ( (This)->lpVtbl->add_PointerWheelChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_PointerWheelChanged(This,cookie) )
    ( (This)->lpVtbl->add_SizeChanged(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_SizeChanged(This,cookie) )
    ( (This)->lpVtbl->add_VisibilityChanged(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_VisibilityChanged(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindow;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindow2[] = L"Windows.UI.Core.ICoreWindow2";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindow2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_PointerPosition )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow2 * This,
                  __x_ABI_CWindows_CFoundation_CPoint value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreWindow2Vtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreWindow2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindow2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_PointerPosition(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindow2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindow3[] = L"Windows.UI.Core.ICoreWindow3";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindow3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ClosestInteractiveBoundsRequested )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow3 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CClosestInteractiveBoundsRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ClosestInteractiveBoundsRequested )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow3 * This,
                  EventRegistrationToken cookie
        );
    HRESULT ( STDMETHODCALLTYPE *GetCurrentKeyEventDeviceId )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow3 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreWindow3Vtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreWindow3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindow3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ClosestInteractiveBoundsRequested(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_ClosestInteractiveBoundsRequested(This,cookie) )
    ( (This)->lpVtbl->GetCurrentKeyEventDeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindow3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindow4[] = L"Windows.UI.Core.ICoreWindow4";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindow4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_ResizeStarted )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ResizeStarted )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This,
                  EventRegistrationToken cookie
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ResizeCompleted )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_IInspectable * handler,
                           __RPC__out EventRegistrationToken * pCookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ResizeCompleted )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow4 * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreWindow4Vtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreWindow4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindow4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_ResizeStarted(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_ResizeStarted(This,cookie) )
    ( (This)->lpVtbl->add_ResizeCompleted(This,handler,pCookie) )
    ( (This)->lpVtbl->remove_ResizeCompleted(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindow4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindow5[] = L"Windows.UI.Core.ICoreWindow5";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindow5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindow5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DispatcherQueue )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow5 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIDispatcherQueue * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ActivationMode )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindow5 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCoreWindowActivationMode * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreWindow5Vtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreWindow5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindow5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DispatcherQueue(This,value) )
    ( (This)->lpVtbl->get_ActivationMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindow5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowDialog[] = L"Windows.UI.Core.ICoreWindowDialog";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Showing )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Showing )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                  EventRegistrationToken cookie
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxSize )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinSize )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInteractionDelayed )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsInteractionDelayed )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Commands )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CPopups__CIUICommand * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultCommandIndex )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DefaultCommandIndex )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CancelCommandIndex )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CancelCommandIndex )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackButtonCommand )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BackButtonCommand )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAsync )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Showing(This,handler,cookie) )
    ( (This)->lpVtbl->remove_Showing(This,cookie) )
    ( (This)->lpVtbl->get_MaxSize(This,value) )
    ( (This)->lpVtbl->get_MinSize(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_IsInteractionDelayed(This,value) )
    ( (This)->lpVtbl->put_IsInteractionDelayed(This,value) )
    ( (This)->lpVtbl->get_Commands(This,value) )
    ( (This)->lpVtbl->get_DefaultCommandIndex(This,value) )
    ( (This)->lpVtbl->put_DefaultCommandIndex(This,value) )
    ( (This)->lpVtbl->get_CancelCommandIndex(This,value) )
    ( (This)->lpVtbl->put_CancelCommandIndex(This,value) )
    ( (This)->lpVtbl->get_BackButtonCommand(This,value) )
    ( (This)->lpVtbl->put_BackButtonCommand(This,value) )
    ( (This)->lpVtbl->ShowAsync(This,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowDialog;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowDialogFactory[] = L"Windows.UI.Core.ICoreWindowDialogFactory";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateWithTitle )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory * This,
                  __RPC__in HSTRING title,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreWindowDialog * * coreWindowDialog
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactoryVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateWithTitle(This,title,coreWindowDialog) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowDialogFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowEventArgs[] = L"Windows.UI.Core.ICoreWindowEventArgs";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowFlyout[] = L"Windows.UI.Core.ICoreWindowFlyout";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Showing )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CCore__CCoreWindow_Windows__CUI__CCore__CCoreWindowPopupShowingEventArgs * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Showing )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
                  EventRegistrationToken cookie
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxSize )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinSize )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsInteractionDelayed )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsInteractionDelayed )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
                  INT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Commands )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CPopups__CIUICommand * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DefaultCommandIndex )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_DefaultCommandIndex )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackButtonCommand )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BackButtonCommand )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CPopups_CIUICommandInvokedHandler * value
        );
    HRESULT ( STDMETHODCALLTYPE *ShowAsync )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_Windows__CUI__CPopups__CIUICommand * * asyncInfo
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Showing(This,handler,cookie) )
    ( (This)->lpVtbl->remove_Showing(This,cookie) )
    ( (This)->lpVtbl->get_MaxSize(This,value) )
    ( (This)->lpVtbl->get_MinSize(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_IsInteractionDelayed(This,value) )
    ( (This)->lpVtbl->put_IsInteractionDelayed(This,value) )
    ( (This)->lpVtbl->get_Commands(This,value) )
    ( (This)->lpVtbl->get_DefaultCommandIndex(This,value) )
    ( (This)->lpVtbl->put_DefaultCommandIndex(This,value) )
    ( (This)->lpVtbl->get_BackButtonCommand(This,value) )
    ( (This)->lpVtbl->put_BackButtonCommand(This,value) )
    ( (This)->lpVtbl->ShowAsync(This,asyncInfo) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowFlyoutFactory[] = L"Windows.UI.Core.ICoreWindowFlyoutFactory";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Create )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory * This,
                  __x_ABI_CWindows_CFoundation_CPoint position,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * * coreWindowFlyout
        );
    HRESULT ( STDMETHODCALLTYPE *CreateWithTitle )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory * This,
                  __x_ABI_CWindows_CFoundation_CPoint position,
                  __RPC__in HSTRING title,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyout * * coreWindowFlyout
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactoryVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Create(This,position,coreWindowFlyout) )
    ( (This)->lpVtbl->CreateWithTitle(This,position,title,coreWindowFlyout) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowFlyoutFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowPopupShowingEventArgs[] = L"Windows.UI.Core.ICoreWindowPopupShowingEventArgs";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetDesiredSize )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs * This,
                  __x_ABI_CWindows_CFoundation_CSize value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetDesiredSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowPopupShowingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowResizeManager[] = L"Windows.UI.Core.ICoreWindowResizeManager";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *NotifyLayoutCompleted )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->NotifyLayoutCompleted(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowResizeManagerLayoutCapability[] = L"Windows.UI.Core.ICoreWindowResizeManagerLayoutCapability";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapabilityVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ShouldWaitForLayoutCompletion )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ShouldWaitForLayoutCompletion )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapabilityVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapabilityVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ShouldWaitForLayoutCompletion(This,value) )
    ( (This)->lpVtbl->get_ShouldWaitForLayoutCompletion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerLayoutCapability;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowResizeManagerStatics[] = L"Windows.UI.Core.ICoreWindowResizeManagerStatics";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManager * * CoreWindowResizeManager
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,CoreWindowResizeManager) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowResizeManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowStatic[] = L"Windows.UI.Core.ICoreWindowStatic";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowStaticVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentThread )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * * ppWindow
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreWindowStaticVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreWindowStatic
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowStaticVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentThread(This,ppWindow) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowStatic;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowWithContext[] = L"Windows.UI.Core.ICoreWindowWithContext";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowWithContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowWithContext * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowWithContext * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowWithContext * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowWithContext * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowWithContext * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowWithContext * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UIContext )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowWithContext * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CIUIContext * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreWindowWithContextVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreWindowWithContext
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowWithContextVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UIContext(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowWithContext;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IIdleDispatchedHandlerArgs[] = L"Windows.UI.Core.IIdleDispatchedHandlerArgs";
typedef struct __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsDispatcherIdle )(
        __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsDispatcherIdle(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIIdleDispatchedHandlerArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IInitializeWithCoreWindow[] = L"Windows.UI.Core.IInitializeWithCoreWindow";
typedef struct __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindowVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Initialize )(
        __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * window
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindowVtbl;
interface __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindowVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Initialize(This,window) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIInitializeWithCoreWindow;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IInputEnabledEventArgs[] = L"Windows.UI.Core.IInputEnabledEventArgs";
typedef struct __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_InputEnabled )(
        __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_InputEnabled(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIInputEnabledEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IKeyEventArgs[] = L"Windows.UI.Core.IKeyEventArgs";
typedef struct __x_ABI_CWindows_CUI_CCore_CIKeyEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_VirtualKey )(
        __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKey * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyStatus )(
        __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCorePhysicalKeyStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CIKeyEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIKeyEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_VirtualKey(This,value) )
    ( (This)->lpVtbl->get_KeyStatus(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIKeyEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IKeyEventArgs2[] = L"Windows.UI.Core.IKeyEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DeviceId )(
        __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DeviceId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIKeyEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IPointerEventArgs[] = L"Windows.UI.Core.IPointerEventArgs";
typedef struct __x_ABI_CWindows_CUI_CCore_CIPointerEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CurrentPoint )(
        __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIPointerPoint * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_KeyModifiers )(
        __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CVirtualKeyModifiers * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetIntermediatePoints )(
        __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs * This,
                           __RPC__deref_out_opt __FIVector_1_Windows__CUI__CInput__CPointerPoint * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CIPointerEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CIPointerEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIPointerEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CurrentPoint(This,value) )
    ( (This)->lpVtbl->get_KeyModifiers(This,value) )
    ( (This)->lpVtbl->GetIntermediatePoints(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIPointerEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ISystemNavigationManager[] = L"Windows.UI.Core.ISystemNavigationManager";
typedef struct __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_BackRequested )(
        __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CUI__CCore__CBackRequestedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_BackRequested )(
        __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerVtbl;
interface __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_BackRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_BackRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CISystemNavigationManager;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ISystemNavigationManager2[] = L"Windows.UI.Core.ISystemNavigationManager2";
typedef struct __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AppViewBackButtonVisibility )(
        __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CAppViewBackButtonVisibility * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_AppViewBackButtonVisibility )(
        __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2 * This,
                  __x_ABI_CWindows_CUI_CCore_CAppViewBackButtonVisibility value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2Vtbl;
interface __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AppViewBackButtonVisibility(This,value) )
    ( (This)->lpVtbl->put_AppViewBackButtonVisibility(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CISystemNavigationManager2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ISystemNavigationManagerStatics[] = L"Windows.UI.Core.ISystemNavigationManagerStatics";
typedef struct __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CISystemNavigationManager * * loader
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,loader) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CISystemNavigationManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ITouchHitTestingEventArgs[] = L"Windows.UI.Core.ITouchHitTestingEventArgs";
typedef struct __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ProximityEvaluation )(
        __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProximityEvaluation )(
        __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
                  __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluation value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Point )(
        __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CPoint * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BoundingBox )(
        __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                                      HRESULT ( STDMETHODCALLTYPE *EvaluateProximityToRect )(
        __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
                  __x_ABI_CWindows_CFoundation_CRect controlBoundingBox,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluation * proximityEvaluation
        );
                    HRESULT ( STDMETHODCALLTYPE *EvaluateProximityToPolygon )(
        __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs * This,
                  UINT32 __controlVerticesSize,
                                                  __RPC__in_ecount_full(__controlVerticesSize) __x_ABI_CWindows_CFoundation_CPoint * controlVertices,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCoreProximityEvaluation * proximityEvaluation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ProximityEvaluation(This,value) )
    ( (This)->lpVtbl->put_ProximityEvaluation(This,value) )
    ( (This)->lpVtbl->get_Point(This,value) )
    ( (This)->lpVtbl->get_BoundingBox(This,value) )
    ( (This)->lpVtbl->EvaluateProximityToRect(This,controlBoundingBox,proximityEvaluation) )
    ( (This)->lpVtbl->EvaluateProximityToPolygon(This,__controlVerticesSize,controlVertices,proximityEvaluation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CITouchHitTestingEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IVisibilityChangedEventArgs[] = L"Windows.UI.Core.IVisibilityChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Visible )(
        __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Visible(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIVisibilityChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IWindowActivatedEventArgs[] = L"Windows.UI.Core.IWindowActivatedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WindowActivationState )(
        __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CUI_CCore_CCoreWindowActivationState * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WindowActivationState(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIWindowActivatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_IWindowSizeChangedEventArgs[] = L"Windows.UI.Core.IWindowSizeChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Size )(
        __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Size(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CIWindowSizeChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AcceleratorKeyEventArgs[] = L"Windows.UI.Core.AcceleratorKeyEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_AutomationProviderRequestedEventArgs[] = L"Windows.UI.Core.AutomationProviderRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_BackRequestedEventArgs[] = L"Windows.UI.Core.BackRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CharacterReceivedEventArgs[] = L"Windows.UI.Core.CharacterReceivedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_ClosestInteractiveBoundsRequestedEventArgs[] = L"Windows.UI.Core.ClosestInteractiveBoundsRequestedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreAcceleratorKeys[] = L"Windows.UI.Core.CoreAcceleratorKeys";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreComponentInputSource[] = L"Windows.UI.Core.CoreComponentInputSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreCursor[] = L"Windows.UI.Core.CoreCursor";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreDispatcher[] = L"Windows.UI.Core.CoreDispatcher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreIndependentInputSource[] = L"Windows.UI.Core.CoreIndependentInputSource";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreWindow[] = L"Windows.UI.Core.CoreWindow";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreWindowDialog[] = L"Windows.UI.Core.CoreWindowDialog";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreWindowEventArgs[] = L"Windows.UI.Core.CoreWindowEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreWindowFlyout[] = L"Windows.UI.Core.CoreWindowFlyout";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreWindowPopupShowingEventArgs[] = L"Windows.UI.Core.CoreWindowPopupShowingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_CoreWindowResizeManager[] = L"Windows.UI.Core.CoreWindowResizeManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_IdleDispatchedHandlerArgs[] = L"Windows.UI.Core.IdleDispatchedHandlerArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_InputEnabledEventArgs[] = L"Windows.UI.Core.InputEnabledEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_KeyEventArgs[] = L"Windows.UI.Core.KeyEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_PointerEventArgs[] = L"Windows.UI.Core.PointerEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_SystemNavigationManager[] = L"Windows.UI.Core.SystemNavigationManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_TouchHitTestingEventArgs[] = L"Windows.UI.Core.TouchHitTestingEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_VisibilityChangedEventArgs[] = L"Windows.UI.Core.VisibilityChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_WindowActivatedEventArgs[] = L"Windows.UI.Core.WindowActivatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_WindowSizeChangedEventArgs[] = L"Windows.UI.Core.WindowSizeChangedEventArgs";
       
       
#pragma clang diagnostic pop
