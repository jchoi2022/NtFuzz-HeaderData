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
#include "Windows.Phone.h"
#include "Windows.UI.h"
#include "Windows.UI.Core.h"
#include "Windows.UI.Popups.h"
#include "Windows.UI.WindowManagement.h"
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView7 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView7;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView9 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView9;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics4 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics4;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewWithContext __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewWithContext;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPane __x_ABI_CWindows_CUI_CViewManagement_CIInputPane;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics2 __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics2;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicator __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicator;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarStatics __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarStatics;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettings __x_ABI_CWindows_CUI_CViewManagement_CIUISettings;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettings5 __x_ABI_CWindows_CUI_CViewManagement_CIUISettings5;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsAutoHideScrollBarsChangedEventArgs __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsAutoHideScrollBarsChangedEventArgs;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences;
typedef interface __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics;
enum __x_ABI_CWindows_CUI_CViewManagement_CUIElementType;
typedef interface __FIReference_1_Windows__CUI__CViewManagement__CUIElementType __FIReference_1_Windows__CUI__CViewManagement__CUIElementType;
EXTERN_C const IID IID___FIReference_1_Windows__CUI__CViewManagement__CUIElementType;
typedef struct __FIReference_1_Windows__CUI__CViewManagement__CUIElementTypeVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CUI__CViewManagement__CUIElementType * This, __RPC__out enum __x_ABI_CWindows_CUI_CViewManagement_CUIElementType *value);
    END_INTERFACE
} __FIReference_1_Windows__CUI__CViewManagement__CUIElementTypeVtbl;
interface __FIReference_1_Windows__CUI__CViewManagement__CUIElementType
{
    CONST_VTBL struct __FIReference_1_Windows__CUI__CViewManagement__CUIElementTypeVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgsVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CStatusBar_IInspectable __FITypedEventHandler_2_Windows__CUI__CViewManagement__CStatusBar_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CViewManagement__CStatusBar_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CStatusBar_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CStatusBar_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CStatusBar_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CStatusBar_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CStatusBar_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CViewManagement__CStatusBar_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CStatusBar_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CStatusBar_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable;
typedef struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectableVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable * This, __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * sender, __RPC__in_opt IInspectable * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectableVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectableVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_Windows__CUI__CViewManagement__CUISettingsAutoHideScrollBarsChangedEventArgs __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_Windows__CUI__CViewManagement__CUISettingsAutoHideScrollBarsChangedEventArgs;
EXTERN_C const IID IID___FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_Windows__CUI__CViewManagement__CUISettingsAutoHideScrollBarsChangedEventArgs;
typedef struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_Windows__CUI__CViewManagement__CUISettingsAutoHideScrollBarsChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_Windows__CUI__CViewManagement__CUISettingsAutoHideScrollBarsChangedEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_Windows__CUI__CViewManagement__CUISettingsAutoHideScrollBarsChangedEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_Windows__CUI__CViewManagement__CUISettingsAutoHideScrollBarsChangedEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_Windows__CUI__CViewManagement__CUISettingsAutoHideScrollBarsChangedEventArgs * This, __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * sender, __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsAutoHideScrollBarsChangedEventArgs * e);
    END_INTERFACE
} __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_Windows__CUI__CViewManagement__CUISettingsAutoHideScrollBarsChangedEventArgsVtbl;
interface __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_Windows__CUI__CViewManagement__CUISettingsAutoHideScrollBarsChangedEventArgs
{
    CONST_VTBL struct __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_Windows__CUI__CViewManagement__CUISettingsAutoHideScrollBarsChangedEventArgsVtbl *lpVtbl;
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
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion;
typedef interface __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion;
EXTERN_C const IID IID___FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion;
typedef struct __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                    __RPC__out ULONG *iidCount,
                                      __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Current )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This, __RPC__out __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * *current);
                    HRESULT ( STDMETHODCALLTYPE *get_HasCurrent )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *MoveNext )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This, __RPC__out boolean *hasCurrent);
    HRESULT ( STDMETHODCALLTYPE *GetMany )(__RPC__in __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                   unsigned int capacity,
                                        __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * *items,
                            __RPC__out unsigned int *actual);
    END_INTERFACE
} __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegionVtbl;
interface __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion
{
    CONST_VTBL struct __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegionVtbl *lpVtbl;
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
typedef interface __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion;
EXTERN_C const IID IID___FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion;
typedef struct __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                                                       __RPC__out ULONG *iidCount,
                                                                         __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion * This, __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *First )(__RPC__in __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion * This, __RPC__deref_out_opt __FIIterator_1_Windows__CUI__CWindowManagement__CDisplayRegion **first);
    END_INTERFACE
} __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegionVtbl;
interface __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegion
{
    CONST_VTBL struct __FIIterable_1_Windows__CUI__CWindowManagement__CDisplayRegionVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> First(This,first) )
typedef interface __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion;
EXTERN_C const IID IID___FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion;
typedef struct __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegionVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
        __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This);
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This);
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
        __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                        __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
        __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                        __RPC__out TrustLevel *trustLevel);
    HRESULT ( STDMETHODCALLTYPE *GetAt )(
                                         __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                                                    unsigned int index,
                                                             __RPC__out __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * *item);
                        HRESULT ( STDMETHODCALLTYPE *get_Size )(
            __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                                __RPC__out unsigned int *size);
        HRESULT ( STDMETHODCALLTYPE *IndexOf )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                       __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * item,
                        __RPC__out unsigned int *index,
                                __RPC__out boolean *found);
        HRESULT ( STDMETHODCALLTYPE *GetMany )(
                                               __RPC__in __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * This,
                       unsigned int startIndex,
                       unsigned int capacity,
                                            __RPC__out_ecount_part(capacity, *actual) __x_ABI_CWindows_CUI_CWindowManagement_CIDisplayRegion * *items,
                                __RPC__out unsigned int *actual);
        END_INTERFACE
} __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegionVtbl;
interface __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion
{
    CONST_VTBL struct __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegionVtbl *lpVtbl;
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
struct __x_ABI_CWindows_CUI_CColor;
typedef interface __FIReference_1_Windows__CUI__CColor __FIReference_1_Windows__CUI__CColor;
EXTERN_C const IID IID___FIReference_1_Windows__CUI__CColor;
typedef struct __FIReference_1_Windows__CUI__CColorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_Windows__CUI__CColor * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_Windows__CUI__CColor * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_Windows__CUI__CColor * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_Windows__CUI__CColor * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_Windows__CUI__CColor * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_Windows__CUI__CColor * This, __RPC__out struct __x_ABI_CWindows_CUI_CColor *value);
    END_INTERFACE
} __FIReference_1_Windows__CUI__CColorVtbl;
interface __FIReference_1_Windows__CUI__CColor
{
    CONST_VTBL struct __FIReference_1_Windows__CUI__CColorVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
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
typedef interface __FIReference_1_double __FIReference_1_double;
EXTERN_C const IID IID___FIReference_1_double;
typedef struct __FIReference_1_doubleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIReference_1_double * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )( __RPC__in __FIReference_1_double * This );
    ULONG ( STDMETHODCALLTYPE *Release )( __RPC__in __FIReference_1_double * This );
    HRESULT ( STDMETHODCALLTYPE *GetIids )( __RPC__in __FIReference_1_double * This,
                                                        __RPC__out ULONG *iidCount,
                                                                          __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids);
    HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )( __RPC__in __FIReference_1_double * This, __RPC__deref_out_opt HSTRING *className);
    HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )( __RPC__in __FIReference_1_double * This, __RPC__out TrustLevel *trustLevel);
                    HRESULT ( STDMETHODCALLTYPE *get_Value )(__RPC__in __FIReference_1_double * This, __RPC__out double *value);
    END_INTERFACE
} __FIReference_1_doubleVtbl;
interface __FIReference_1_double
{
    CONST_VTBL struct __FIReference_1_doubleVtbl *lpVtbl;
};
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIids(This,iidCount,iids) )
    ( (This)->lpVtbl -> GetRuntimeClassName(This,className) )
    ( (This)->lpVtbl -> GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl -> get_Value(This,value) )
typedef interface __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation;
typedef interface __x_ABI_CWindows_CFoundation_CIAsyncAction __x_ABI_CWindows_CFoundation_CIAsyncAction;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindow __x_ABI_CWindows_CUI_CCore_CICoreWindow;
typedef enum __x_ABI_CWindows_CUI_CPopups_CPlacement __x_ABI_CWindows_CUI_CPopups_CPlacement;
typedef interface __x_ABI_CWindows_CUI_CIUIContext __x_ABI_CWindows_CUI_CIUIContext;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment;
typedef enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewBoundsMode __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewBoundsMode;
typedef enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode;
typedef enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewOrientation __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewOrientation;
typedef enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewState __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewState;
typedef enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewSwitchingOptions __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewSwitchingOptions;
typedef enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewWindowingMode __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewWindowingMode;
typedef enum __x_ABI_CWindows_CUI_CViewManagement_CFullScreenSystemOverlayMode __x_ABI_CWindows_CUI_CViewManagement_CFullScreenSystemOverlayMode;
typedef enum __x_ABI_CWindows_CUI_CViewManagement_CHandPreference __x_ABI_CWindows_CUI_CViewManagement_CHandPreference;
typedef enum __x_ABI_CWindows_CUI_CViewManagement_CUIColorType __x_ABI_CWindows_CUI_CViewManagement_CUIColorType;
typedef enum __x_ABI_CWindows_CUI_CViewManagement_CUIElementType __x_ABI_CWindows_CUI_CViewManagement_CUIElementType;
typedef enum __x_ABI_CWindows_CUI_CViewManagement_CUserInteractionMode __x_ABI_CWindows_CUI_CViewManagement_CUserInteractionMode;
typedef enum __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference;
enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewBoundsMode
{
    ApplicationViewBoundsMode_UseVisible = 0,
    ApplicationViewBoundsMode_UseCoreWindow = 1,
};
enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode
{
    ApplicationViewMode_Default = 0,
    ApplicationViewMode_CompactOverlay = 1,
};
enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewOrientation
{
    ApplicationViewOrientation_Landscape = 0,
    ApplicationViewOrientation_Portrait = 1,
};
enum
DEPRECATED("ApplicationViewState may be altered or unavailable for releases after Windows 8.1. Instead, query for window layout sizes directly.")
__x_ABI_CWindows_CUI_CViewManagement_CApplicationViewState
{
    ApplicationViewState_FullScreenLandscape = 0,
    ApplicationViewState_Filled = 1,
    ApplicationViewState_Snapped = 2,
    ApplicationViewState_FullScreenPortrait = 3,
};
enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewSwitchingOptions
{
    ApplicationViewSwitchingOptions_Default = 0,
    ApplicationViewSwitchingOptions_SkipAnimation = 0x1,
    ApplicationViewSwitchingOptions_ConsolidateViews = 0x2,
};
enum __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewWindowingMode
{
    ApplicationViewWindowingMode_Auto = 0,
    ApplicationViewWindowingMode_PreferredLaunchViewSize = 1,
    ApplicationViewWindowingMode_FullScreen = 2,
    ApplicationViewWindowingMode_CompactOverlay = 3,
    ApplicationViewWindowingMode_Maximized = 4,
};
enum __x_ABI_CWindows_CUI_CViewManagement_CFullScreenSystemOverlayMode
{
    FullScreenSystemOverlayMode_Standard = 0,
    FullScreenSystemOverlayMode_Minimal = 1,
};
enum __x_ABI_CWindows_CUI_CViewManagement_CHandPreference
{
    HandPreference_LeftHanded = 0,
    HandPreference_RightHanded = 1,
};
enum __x_ABI_CWindows_CUI_CViewManagement_CUIColorType
{
    UIColorType_Background = 0,
    UIColorType_Foreground = 1,
    UIColorType_AccentDark3 = 2,
    UIColorType_AccentDark2 = 3,
    UIColorType_AccentDark1 = 4,
    UIColorType_Accent = 5,
    UIColorType_AccentLight1 = 6,
    UIColorType_AccentLight2 = 7,
    UIColorType_AccentLight3 = 8,
    UIColorType_Complement = 9,
};
enum __x_ABI_CWindows_CUI_CViewManagement_CUIElementType
{
    UIElementType_ActiveCaption = 0,
    UIElementType_Background = 1,
    UIElementType_ButtonFace = 2,
    UIElementType_ButtonText = 3,
    UIElementType_CaptionText = 4,
    UIElementType_GrayText = 5,
    UIElementType_Highlight = 6,
    UIElementType_HighlightText = 7,
    UIElementType_Hotlight = 8,
    UIElementType_InactiveCaption = 9,
    UIElementType_InactiveCaptionText = 10,
    UIElementType_Window = 11,
    UIElementType_WindowText = 12,
    UIElementType_AccentColor = 1000,
    UIElementType_TextHigh = 1001,
    UIElementType_TextMedium = 1002,
    UIElementType_TextLow = 1003,
    UIElementType_TextContrastWithHigh = 1004,
    UIElementType_NonTextHigh = 1005,
    UIElementType_NonTextMediumHigh = 1006,
    UIElementType_NonTextMedium = 1007,
    UIElementType_NonTextMediumLow = 1008,
    UIElementType_NonTextLow = 1009,
    UIElementType_PageBackground = 1010,
    UIElementType_PopupBackground = 1011,
    UIElementType_OverlayOutsidePopup = 1012,
};
enum __x_ABI_CWindows_CUI_CViewManagement_CUserInteractionMode
{
    UserInteractionMode_Mouse = 0,
    UserInteractionMode_Touch = 1,
};
enum __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference
{
    ViewSizePreference_Default = 0,
    ViewSizePreference_UseLess = 1,
    ViewSizePreference_UseHalf = 2,
    ViewSizePreference_UseMore = 3,
    ViewSizePreference_UseMinimum = 4,
    ViewSizePreference_UseNone = 5,
    ViewSizePreference_Custom = 6,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IAccessibilitySettings[] = L"Windows.UI.ViewManagement.IAccessibilitySettings";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HighContrast )(
        __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HighContrastScheme )(
        __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_HighContrastChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CAccessibilitySettings_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_HighContrastChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettingsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HighContrast(This,value) )
    ( (This)->lpVtbl->get_HighContrastScheme(This,value) )
    ( (This)->lpVtbl->add_HighContrastChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_HighContrastChanged(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIAccessibilitySettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IActivationViewSwitcher[] = L"Windows.UI.ViewManagement.IActivationViewSwitcher";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcherVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *ShowAsStandaloneAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * This,
                  INT32 viewId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *ShowAsStandaloneWithSizePreferenceAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * This,
                  INT32 viewId,
                  __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference sizePreference,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *IsViewPresentedOnActivationVirtualDesktop )(
        __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher * This,
                  INT32 viewId,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcherVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcherVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ShowAsStandaloneAsync(This,viewId,operation) )
    ( (This)->lpVtbl->ShowAsStandaloneWithSizePreferenceAsync(This,viewId,sizePreference,operation) )
    ( (This)->lpVtbl->IsViewPresentedOnActivationVirtualDesktop(This,viewId,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIActivationViewSwitcher;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationView[] = L"Windows.UI.ViewManagement.IApplicationView";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Orientation )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
                           __RPC__out __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewOrientation * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AdjacentToLeftDisplayEdge )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AdjacentToRightDisplayEdge )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("To check full screen mode, use IsFullScreenMode. To check if the view is adjacent to both edges, use AdjacentToLeftDisplayEdge and AdjacentToRightDisplayEdge. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_IsFullScreen )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsOnLockScreen )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsScreenCaptureEnabled )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_IsScreenCaptureEnabled )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Title )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Title )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Id )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
                           __RPC__out INT32 * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Consolidated )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_Windows__CUI__CViewManagement__CApplicationViewConsolidatedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Consolidated )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Orientation(This,value) )
    ( (This)->lpVtbl->get_AdjacentToLeftDisplayEdge(This,value) )
    ( (This)->lpVtbl->get_AdjacentToRightDisplayEdge(This,value) )
DEPRECATED("To check full screen mode, use IsFullScreenMode. To check if the view is adjacent to both edges, use AdjacentToLeftDisplayEdge and AdjacentToRightDisplayEdge. For more info, see MSDN.")
    ( (This)->lpVtbl->get_IsFullScreen(This,value) )
    ( (This)->lpVtbl->get_IsOnLockScreen(This,value) )
    ( (This)->lpVtbl->get_IsScreenCaptureEnabled(This,value) )
    ( (This)->lpVtbl->put_IsScreenCaptureEnabled(This,value) )
    ( (This)->lpVtbl->put_Title(This,value) )
    ( (This)->lpVtbl->get_Title(This,value) )
    ( (This)->lpVtbl->get_Id(This,value) )
    ( (This)->lpVtbl->add_Consolidated(This,handler,token) )
    ( (This)->lpVtbl->remove_Consolidated(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationView;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationView2[] = L"Windows.UI.ViewManagement.IApplicationView2";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Use the TryEnterFullScreen method and IsFullScreenMode property instead of SuppressSystemOverlays. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *get_SuppressSystemOverlays )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
                           __RPC__out boolean * value
        );
    DEPRECATED("Use the TryEnterFullScreen method and IsFullScreenMode property instead of SuppressSystemOverlays. For more info, see MSDN.")
                               HRESULT ( STDMETHODCALLTYPE *put_SuppressSystemOverlays )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VisibleBounds )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_VisibleBoundsChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CApplicationView_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_VisibleBoundsChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
                  EventRegistrationToken token
        );
    HRESULT ( STDMETHODCALLTYPE *SetDesiredBoundsMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
                  __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewBoundsMode boundsMode,
                           __RPC__out boolean * success
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DesiredBoundsMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewBoundsMode * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Use the TryEnterFullScreen method and IsFullScreenMode property instead of SuppressSystemOverlays. For more info, see MSDN.")
    ( (This)->lpVtbl->get_SuppressSystemOverlays(This,value) )
DEPRECATED("Use the TryEnterFullScreen method and IsFullScreenMode property instead of SuppressSystemOverlays. For more info, see MSDN.")
    ( (This)->lpVtbl->put_SuppressSystemOverlays(This,value) )
    ( (This)->lpVtbl->get_VisibleBounds(This,value) )
    ( (This)->lpVtbl->add_VisibleBoundsChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_VisibleBoundsChanged(This,token) )
    ( (This)->lpVtbl->SetDesiredBoundsMode(This,boundsMode,success) )
    ( (This)->lpVtbl->get_DesiredBoundsMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationView2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationView3[] = L"Windows.UI.ViewManagement.IApplicationView3";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TitleBar )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FullScreenSystemOverlayMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CViewManagement_CFullScreenSystemOverlayMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_FullScreenSystemOverlayMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
                  __x_ABI_CWindows_CUI_CViewManagement_CFullScreenSystemOverlayMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsFullScreenMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *TryEnterFullScreenMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
                           __RPC__out boolean * success
        );
    HRESULT ( STDMETHODCALLTYPE *ExitFullScreenMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This
        );
    HRESULT ( STDMETHODCALLTYPE *ShowStandardSystemOverlays )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This
        );
    HRESULT ( STDMETHODCALLTYPE *TryResizeView )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
                  __x_ABI_CWindows_CFoundation_CSize value,
                           __RPC__out boolean * success
        );
    HRESULT ( STDMETHODCALLTYPE *SetPreferredMinSize )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3 * This,
                  __x_ABI_CWindows_CFoundation_CSize minSize
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TitleBar(This,value) )
    ( (This)->lpVtbl->get_FullScreenSystemOverlayMode(This,value) )
    ( (This)->lpVtbl->put_FullScreenSystemOverlayMode(This,value) )
    ( (This)->lpVtbl->get_IsFullScreenMode(This,value) )
    ( (This)->lpVtbl->TryEnterFullScreenMode(This,success) )
    ( (This)->lpVtbl->ExitFullScreenMode(This) )
    ( (This)->lpVtbl->ShowStandardSystemOverlays(This) )
    ( (This)->lpVtbl->TryResizeView(This,value,success) )
    ( (This)->lpVtbl->SetPreferredMinSize(This,minSize) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationView3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationView4[] = L"Windows.UI.ViewManagement.IApplicationView4";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ViewMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsViewModeSupported )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This,
                  __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode viewMode,
                           __RPC__out boolean * isViewModeSupported
        );
                    HRESULT ( STDMETHODCALLTYPE *TryEnterViewModeAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This,
                  __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode viewMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TryEnterViewModeWithPreferencesAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This,
                  __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode viewMode,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * viewModePreferences,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *TryConsolidateAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4 * This,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ViewMode(This,value) )
    ( (This)->lpVtbl->IsViewModeSupported(This,viewMode,isViewModeSupported) )
    ( (This)->lpVtbl->TryEnterViewModeAsync(This,viewMode,operation) )
    ( (This)->lpVtbl->TryEnterViewModeWithPreferencesAsync(This,viewMode,viewModePreferences,operation) )
    ( (This)->lpVtbl->TryConsolidateAsync(This,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationView4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationView7[] = L"Windows.UI.ViewManagement.IApplicationView7";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView7Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView7 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView7 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView7 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView7 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView7 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView7 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PersistedStateId )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView7 * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PersistedStateId )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView7 * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView7Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView7
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView7Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PersistedStateId(This,value) )
    ( (This)->lpVtbl->put_PersistedStateId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationView7;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationView9[] = L"Windows.UI.ViewManagement.IApplicationView9";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView9Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView9 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView9 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView9 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView9 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView9 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView9 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_WindowingEnvironment )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView9 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CWindowManagement_CIWindowingEnvironment * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDisplayRegions )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView9 * This,
                           __RPC__deref_out_opt __FIVectorView_1_Windows__CUI__CWindowManagement__CDisplayRegion * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView9Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView9
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView9Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_WindowingEnvironment(This,value) )
    ( (This)->lpVtbl->GetDisplayRegions(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationView9;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewConsolidatedEventArgs[] = L"Windows.UI.ViewManagement.IApplicationViewConsolidatedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsUserInitiated )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsUserInitiated(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewConsolidatedEventArgs2[] = L"Windows.UI.ViewManagement.IApplicationViewConsolidatedEventArgs2";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsAppInitiated )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2 * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsAppInitiated(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewConsolidatedEventArgs2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewFullscreenStatics[] = L"Windows.UI.ViewManagement.IApplicationViewFullscreenStatics";
typedef struct
DEPRECATED("IApplicationViewFullscreenStatics is deprecated after Windows 8. Please use other resize APIs.")
__x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("IApplicationViewFullscreenStatics is deprecated after Windows 8. Please use other resize APIs.")
                      HRESULT ( STDMETHODCALLTYPE *TryUnsnapToFullscreen )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics * This,
                           __RPC__out boolean * success
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStaticsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("IApplicationViewFullscreenStatics is deprecated after Windows 8. Please use other resize APIs.")
    ( (This)->lpVtbl->TryUnsnapToFullscreen(This,success) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewFullscreenStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewInteropStatics[] = L"Windows.UI.ViewManagement.IApplicationViewInteropStatics";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetApplicationViewIdForWindow )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * window,
                           __RPC__out INT32 * id
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStaticsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetApplicationViewIdForWindow(This,window,id) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewInteropStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewScaling[] = L"Windows.UI.ViewManagement.IApplicationViewScaling";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScaling;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewScalingStatics[] = L"Windows.UI.ViewManagement.IApplicationViewScalingStatics";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisableLayoutScaling )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *TrySetDisableLayoutScaling )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics * This,
                  boolean disableLayoutScaling,
                           __RPC__out boolean * success
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStaticsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisableLayoutScaling(This,value) )
    ( (This)->lpVtbl->TrySetDisableLayoutScaling(This,disableLayoutScaling,success) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewScalingStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewStatics[] = L"Windows.UI.ViewManagement.IApplicationViewStatics";
typedef struct
DEPRECATED("ApplicationView static methods may be altered or unavailable for releases after Windows 8.1. Instead, use ApplicationView.GetForCurrentView to get an instance of ApplicationView.")
__x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
    DEPRECATED("Value may be altered or unavailable for releases after Windows 8.1. Instead, query for window layout sizes directly.")
                               HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics * This,
                           __RPC__out __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewState * value
        );
    DEPRECATED("TryUnsnap may be altered or unavailable for releases after Windows 8.1. Apps can be continuously resized, but cannot be snapped, starting in Windows 8.1.")
                      HRESULT ( STDMETHODCALLTYPE *TryUnsnap )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics * This,
                           __RPC__out boolean * success
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStaticsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
DEPRECATED("Value may be altered or unavailable for releases after Windows 8.1. Instead, query for window layout sizes directly.")
    ( (This)->lpVtbl->get_Value(This,value) )
DEPRECATED("TryUnsnap may be altered or unavailable for releases after Windows 8.1. Apps can be continuously resized, but cannot be snapped, starting in Windows 8.1.")
    ( (This)->lpVtbl->TryUnsnap(This,success) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewStatics2[] = L"Windows.UI.ViewManagement.IApplicationViewStatics2";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CViewManagement_CIApplicationView * * current
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TerminateAppOnFinalViewClose )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_TerminateAppOnFinalViewClose )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2 * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,current) )
    ( (This)->lpVtbl->get_TerminateAppOnFinalViewClose(This,value) )
    ( (This)->lpVtbl->put_TerminateAppOnFinalViewClose(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewStatics3[] = L"Windows.UI.ViewManagement.IApplicationViewStatics3";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_PreferredLaunchWindowingMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This,
                           __RPC__out __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewWindowingMode * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PreferredLaunchWindowingMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This,
                  __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewWindowingMode value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_PreferredLaunchViewSize )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_PreferredLaunchViewSize )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3 * This,
                  __x_ABI_CWindows_CFoundation_CSize value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_PreferredLaunchWindowingMode(This,value) )
    ( (This)->lpVtbl->put_PreferredLaunchWindowingMode(This,value) )
    ( (This)->lpVtbl->get_PreferredLaunchViewSize(This,value) )
    ( (This)->lpVtbl->put_PreferredLaunchViewSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewStatics4[] = L"Windows.UI.ViewManagement.IApplicationViewStatics4";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ClearAllPersistedState )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics4 * This
        );
    HRESULT ( STDMETHODCALLTYPE *ClearPersistedState )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics4 * This,
                  __RPC__in HSTRING key
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics4Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ClearAllPersistedState(This) )
    ( (This)->lpVtbl->ClearPersistedState(This,key) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewStatics4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics[] = L"Windows.UI.ViewManagement.IApplicationViewSwitcherStatics";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *DisableShowingMainViewOnActivation )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This
        );
                    HRESULT ( STDMETHODCALLTYPE *TryShowAsStandaloneAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
                  INT32 viewId,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TryShowAsStandaloneWithSizePreferenceAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
                  INT32 viewId,
                  __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference sizePreference,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TryShowAsStandaloneWithAnchorViewAndSizePreferenceAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
                  INT32 viewId,
                  __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference sizePreference,
                  INT32 anchorViewId,
                  __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference anchorSizePreference,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *SwitchAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
                  INT32 viewId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *SwitchFromViewAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
                  INT32 toViewId,
                  INT32 fromViewId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *SwitchFromViewWithOptionsAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
                  INT32 toViewId,
                  INT32 fromViewId,
                  __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewSwitchingOptions options,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *PrepareForCustomAnimatedSwitchAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics * This,
                  INT32 toViewId,
                  INT32 fromViewId,
                  __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewSwitchingOptions options,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStaticsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->DisableShowingMainViewOnActivation(This) )
    ( (This)->lpVtbl->TryShowAsStandaloneAsync(This,viewId,operation) )
    ( (This)->lpVtbl->TryShowAsStandaloneWithSizePreferenceAsync(This,viewId,sizePreference,operation) )
    ( (This)->lpVtbl->TryShowAsStandaloneWithAnchorViewAndSizePreferenceAsync(This,viewId,sizePreference,anchorViewId,anchorSizePreference,operation) )
    ( (This)->lpVtbl->SwitchAsync(This,viewId,operation) )
    ( (This)->lpVtbl->SwitchFromViewAsync(This,toViewId,fromViewId,operation) )
    ( (This)->lpVtbl->SwitchFromViewWithOptionsAsync(This,toViewId,fromViewId,options,operation) )
    ( (This)->lpVtbl->PrepareForCustomAnimatedSwitchAsync(This,toViewId,fromViewId,options,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics2[] = L"Windows.UI.ViewManagement.IApplicationViewSwitcherStatics2";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *DisableSystemViewActivationPolicy )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->DisableSystemViewActivationPolicy(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewSwitcherStatics3[] = L"Windows.UI.ViewManagement.IApplicationViewSwitcherStatics3";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *TryShowAsViewModeAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 * This,
                  INT32 viewId,
                  __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode viewMode,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *TryShowAsViewModeWithPreferencesAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3 * This,
                  INT32 viewId,
                  __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode viewMode,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * viewModePreferences,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryShowAsViewModeAsync(This,viewId,viewMode,operation) )
    ( (This)->lpVtbl->TryShowAsViewModeWithPreferencesAsync(This,viewId,viewMode,viewModePreferences,operation) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewSwitcherStatics3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewTitleBar[] = L"Windows.UI.ViewManagement.IApplicationViewTitleBar";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *put_ForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ButtonForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ButtonForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ButtonBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ButtonBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ButtonHoverForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ButtonHoverForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ButtonHoverBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ButtonHoverBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ButtonPressedForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ButtonPressedForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ButtonPressedBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ButtonPressedBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InactiveForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InactiveForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_InactiveBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InactiveBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ButtonInactiveForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ButtonInactiveForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ButtonInactiveBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ButtonInactiveBackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBarVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBarVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->put_ForegroundColor(This,value) )
    ( (This)->lpVtbl->get_ForegroundColor(This,value) )
    ( (This)->lpVtbl->put_BackgroundColor(This,value) )
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )
    ( (This)->lpVtbl->put_ButtonForegroundColor(This,value) )
    ( (This)->lpVtbl->get_ButtonForegroundColor(This,value) )
    ( (This)->lpVtbl->put_ButtonBackgroundColor(This,value) )
    ( (This)->lpVtbl->get_ButtonBackgroundColor(This,value) )
    ( (This)->lpVtbl->put_ButtonHoverForegroundColor(This,value) )
    ( (This)->lpVtbl->get_ButtonHoverForegroundColor(This,value) )
    ( (This)->lpVtbl->put_ButtonHoverBackgroundColor(This,value) )
    ( (This)->lpVtbl->get_ButtonHoverBackgroundColor(This,value) )
    ( (This)->lpVtbl->put_ButtonPressedForegroundColor(This,value) )
    ( (This)->lpVtbl->get_ButtonPressedForegroundColor(This,value) )
    ( (This)->lpVtbl->put_ButtonPressedBackgroundColor(This,value) )
    ( (This)->lpVtbl->get_ButtonPressedBackgroundColor(This,value) )
    ( (This)->lpVtbl->put_InactiveForegroundColor(This,value) )
    ( (This)->lpVtbl->get_InactiveForegroundColor(This,value) )
    ( (This)->lpVtbl->put_InactiveBackgroundColor(This,value) )
    ( (This)->lpVtbl->get_InactiveBackgroundColor(This,value) )
    ( (This)->lpVtbl->put_ButtonInactiveForegroundColor(This,value) )
    ( (This)->lpVtbl->get_ButtonInactiveForegroundColor(This,value) )
    ( (This)->lpVtbl->put_ButtonInactiveBackgroundColor(This,value) )
    ( (This)->lpVtbl->get_ButtonInactiveBackgroundColor(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTitleBar;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewTransferContext[] = L"Windows.UI.ViewManagement.IApplicationViewTransferContext";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ViewId )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ViewId )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext * This,
                  INT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ViewId(This,value) )
    ( (This)->lpVtbl->put_ViewId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContext;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewTransferContextStatics[] = L"Windows.UI.ViewManagement.IApplicationViewTransferContextStatics";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DataPackageFormatId )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStaticsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DataPackageFormatId(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewTransferContextStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IApplicationViewWithContext[] = L"Windows.UI.ViewManagement.IApplicationViewWithContext";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewWithContextVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewWithContext * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewWithContext * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewWithContext * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewWithContext * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewWithContext * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewWithContext * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UIContext )(
        __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewWithContext * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CIUIContext * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewWithContextVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewWithContext
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewWithContextVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UIContext(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIApplicationViewWithContext;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IInputPane[] = L"Windows.UI.ViewManagement.IInputPane";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_Showing )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Showing )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Hiding )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CInputPane_Windows__CUI__CViewManagement__CInputPaneVisibilityEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Hiding )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This,
                  EventRegistrationToken token
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OccludedRect )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPane
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_Showing(This,handler,token) )
    ( (This)->lpVtbl->remove_Showing(This,token) )
    ( (This)->lpVtbl->add_Hiding(This,handler,token) )
    ( (This)->lpVtbl->remove_Hiding(This,token) )
    ( (This)->lpVtbl->get_OccludedRect(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIInputPane;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IInputPane2[] = L"Windows.UI.ViewManagement.IInputPane2";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *TryShow )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 * This,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *TryHide )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2 * This,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPane2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->TryShow(This,result) )
    ( (This)->lpVtbl->TryHide(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIInputPane2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IInputPaneControl[] = L"Windows.UI.ViewManagement.IInputPaneControl";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControlVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Visible )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Visible )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl * This,
                  boolean value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControlVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControlVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Visible(This,value) )
    ( (This)->lpVtbl->put_Visible(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIInputPaneControl;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IInputPaneStatics[] = L"Windows.UI.ViewManagement.IInputPaneStatics";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * * inputPane
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStaticsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,inputPane) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IInputPaneStatics2[] = L"Windows.UI.ViewManagement.IInputPaneStatics2";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForUIContext )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CIUIContext * context,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CViewManagement_CIInputPane * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForUIContext(This,context,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIInputPaneStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IInputPaneVisibilityEventArgs[] = L"Windows.UI.ViewManagement.IInputPaneVisibilityEventArgs";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_OccludedRect )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_EnsuredFocusedElementInView )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * This,
                  boolean value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_EnsuredFocusedElementInView )(
        __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_OccludedRect(This,value) )
    ( (This)->lpVtbl->put_EnsuredFocusedElementInView(This,value) )
    ( (This)->lpVtbl->get_EnsuredFocusedElementInView(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIInputPaneVisibilityEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IProjectionManagerStatics[] = L"Windows.UI.ViewManagement.IProjectionManagerStatics";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *StartProjectingAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
                  INT32 projectionViewId,
                  INT32 anchorViewId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *SwapDisplaysForViewsAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
                  INT32 projectionViewId,
                  INT32 anchorViewId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *StopProjectingAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
                  INT32 projectionViewId,
                  INT32 anchorViewId,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProjectionDisplayAvailable )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ProjectionDisplayAvailableChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
                  __RPC__in_opt __FIEventHandler_1_IInspectable * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ProjectionDisplayAvailableChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStaticsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StartProjectingAsync(This,projectionViewId,anchorViewId,operation) )
    ( (This)->lpVtbl->SwapDisplaysForViewsAsync(This,projectionViewId,anchorViewId,operation) )
    ( (This)->lpVtbl->StopProjectingAsync(This,projectionViewId,anchorViewId,operation) )
    ( (This)->lpVtbl->get_ProjectionDisplayAvailable(This,value) )
    ( (This)->lpVtbl->add_ProjectionDisplayAvailableChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_ProjectionDisplayAvailableChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IProjectionManagerStatics2[] = L"Windows.UI.ViewManagement.IProjectionManagerStatics2";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *StartProjectingWithDeviceInfoAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This,
                  INT32 projectionViewId,
                  INT32 anchorViewId,
                  __RPC__in_opt __x_ABI_CWindows_CDevices_CEnumeration_CIDeviceInformation * displayDeviceInfo,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestStartProjectingAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This,
                  INT32 projectionViewId,
                  INT32 anchorViewId,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
                    HRESULT ( STDMETHODCALLTYPE *RequestStartProjectingWithPlacementAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This,
                  INT32 projectionViewId,
                  INT32 anchorViewId,
                  __x_ABI_CWindows_CFoundation_CRect selection,
                  __x_ABI_CWindows_CUI_CPopups_CPlacement prefferedPlacement,
                           __RPC__deref_out_opt __FIAsyncOperation_1_boolean * * operation
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeviceSelector )(
        __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2 * This,
                           __RPC__deref_out_opt HSTRING * selector
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->StartProjectingWithDeviceInfoAsync(This,projectionViewId,anchorViewId,displayDeviceInfo,operation) )
    ( (This)->lpVtbl->RequestStartProjectingAsync(This,projectionViewId,anchorViewId,selection,operation) )
    ( (This)->lpVtbl->RequestStartProjectingWithPlacementAsync(This,projectionViewId,anchorViewId,selection,prefferedPlacement,operation) )
    ( (This)->lpVtbl->GetDeviceSelector(This,selector) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIProjectionManagerStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IStatusBar[] = L"Windows.UI.ViewManagement.IStatusBar";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ShowAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *HideAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * returnValue
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackgroundOpacity )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BackgroundOpacity )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This,
                  DOUBLE value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ForegroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_BackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This,
                           __RPC__deref_out_opt __FIReference_1_Windows__CUI__CColor * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_BackgroundColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This,
                  __RPC__in_opt __FIReference_1_Windows__CUI__CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProgressIndicator )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicator * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_OccludedRect )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CRect * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Showing )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CStatusBar_IInspectable * eventHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Showing )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This,
                  EventRegistrationToken token
        );
                    HRESULT ( STDMETHODCALLTYPE *add_Hiding )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CStatusBar_IInspectable * eventHandler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_Hiding )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ShowAsync(This,returnValue) )
    ( (This)->lpVtbl->HideAsync(This,returnValue) )
    ( (This)->lpVtbl->get_BackgroundOpacity(This,value) )
    ( (This)->lpVtbl->put_BackgroundOpacity(This,value) )
    ( (This)->lpVtbl->get_ForegroundColor(This,value) )
    ( (This)->lpVtbl->put_ForegroundColor(This,value) )
    ( (This)->lpVtbl->get_BackgroundColor(This,value) )
    ( (This)->lpVtbl->put_BackgroundColor(This,value) )
    ( (This)->lpVtbl->get_ProgressIndicator(This,value) )
    ( (This)->lpVtbl->get_OccludedRect(This,value) )
    ( (This)->lpVtbl->add_Showing(This,eventHandler,token) )
    ( (This)->lpVtbl->remove_Showing(This,token) )
    ( (This)->lpVtbl->add_Hiding(This,eventHandler,token) )
    ( (This)->lpVtbl->remove_Hiding(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIStatusBar;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IStatusBarProgressIndicator[] = L"Windows.UI.ViewManagement.IStatusBarProgressIndicator";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicatorVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicator * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicator * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicator * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicator * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicator * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicator * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ShowAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicator * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *HideAsync )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicator * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIAsyncAction * * returnValue
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Text )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicator * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Text )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicator * This,
                  __RPC__in HSTRING value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ProgressValue )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicator * This,
                           __RPC__deref_out_opt __FIReference_1_double * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ProgressValue )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicator * This,
                  __RPC__in_opt __FIReference_1_double * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicatorVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicator
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicatorVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ShowAsync(This,returnValue) )
    ( (This)->lpVtbl->HideAsync(This,returnValue) )
    ( (This)->lpVtbl->get_Text(This,value) )
    ( (This)->lpVtbl->put_Text(This,value) )
    ( (This)->lpVtbl->get_ProgressValue(This,value) )
    ( (This)->lpVtbl->put_ProgressValue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIStatusBarProgressIndicator;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IStatusBarStatics[] = L"Windows.UI.ViewManagement.IStatusBarStatics";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CViewManagement_CIStatusBar * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarStaticsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIStatusBarStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIStatusBarStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUISettings[] = L"Windows.UI.ViewManagement.IUISettings";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HandPreference )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
                           __RPC__out __x_ABI_CWindows_CUI_CViewManagement_CHandPreference * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CursorSize )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScrollBarSize )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScrollBarArrowSize )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ScrollBarThumbBoxSize )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MessageDuration )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AnimationsEnabled )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CaretBrowsingEnabled )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CaretBlinkRate )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CaretWidth )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DoubleClickTime )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MouseHoverTime )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
                           __RPC__out UINT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *UIElementColor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings * This,
                  __x_ABI_CWindows_CUI_CViewManagement_CUIElementType desiredElement,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HandPreference(This,value) )
    ( (This)->lpVtbl->get_CursorSize(This,value) )
    ( (This)->lpVtbl->get_ScrollBarSize(This,value) )
    ( (This)->lpVtbl->get_ScrollBarArrowSize(This,value) )
    ( (This)->lpVtbl->get_ScrollBarThumbBoxSize(This,value) )
    ( (This)->lpVtbl->get_MessageDuration(This,value) )
    ( (This)->lpVtbl->get_AnimationsEnabled(This,value) )
    ( (This)->lpVtbl->get_CaretBrowsingEnabled(This,value) )
    ( (This)->lpVtbl->get_CaretBlinkRate(This,value) )
    ( (This)->lpVtbl->get_CaretWidth(This,value) )
    ( (This)->lpVtbl->get_DoubleClickTime(This,value) )
    ( (This)->lpVtbl->get_MouseHoverTime(This,value) )
    ( (This)->lpVtbl->UIElementColor(This,desiredElement,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUISettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUISettings2[] = L"Windows.UI.ViewManagement.IUISettings2";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TextScaleFactor )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 * This,
                           __RPC__out DOUBLE * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_TextScaleFactorChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_TextScaleFactorChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2 * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettings2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TextScaleFactor(This,value) )
    ( (This)->lpVtbl->add_TextScaleFactorChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_TextScaleFactorChanged(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUISettings2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUISettings3[] = L"Windows.UI.ViewManagement.IUISettings3";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetColorValue )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 * This,
                  __x_ABI_CWindows_CUI_CViewManagement_CUIColorType desiredColor,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_ColorValuesChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_ColorValuesChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3 * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettings3Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetColorValue(This,desiredColor,value) )
    ( (This)->lpVtbl->add_ColorValuesChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_ColorValuesChanged(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUISettings3;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUISettings4[] = L"Windows.UI.ViewManagement.IUISettings4";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AdvancedEffectsEnabled )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AdvancedEffectsEnabledChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_IInspectable * handler,
                           __RPC__out EventRegistrationToken * cookie
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AdvancedEffectsEnabledChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4 * This,
                  EventRegistrationToken cookie
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettings4Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AdvancedEffectsEnabled(This,value) )
    ( (This)->lpVtbl->add_AdvancedEffectsEnabledChanged(This,handler,cookie) )
    ( (This)->lpVtbl->remove_AdvancedEffectsEnabledChanged(This,cookie) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUISettings4;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUISettings5[] = L"Windows.UI.ViewManagement.IUISettings5";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettings5Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings5 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings5 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings5 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings5 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings5 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettings5 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AutoHideScrollBars )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings5 * This,
                           __RPC__out boolean * value
        );
                    HRESULT ( STDMETHODCALLTYPE *add_AutoHideScrollBarsChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings5 * This,
                  __RPC__in_opt __FITypedEventHandler_2_Windows__CUI__CViewManagement__CUISettings_Windows__CUI__CViewManagement__CUISettingsAutoHideScrollBarsChangedEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_AutoHideScrollBarsChanged )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUISettings5 * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIUISettings5Vtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettings5
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettings5Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AutoHideScrollBars(This,value) )
    ( (This)->lpVtbl->add_AutoHideScrollBarsChanged(This,handler,token) )
    ( (This)->lpVtbl->remove_AutoHideScrollBarsChanged(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUISettings5;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUISettingsAutoHideScrollBarsChangedEventArgs[] = L"Windows.UI.ViewManagement.IUISettingsAutoHideScrollBarsChangedEventArgs";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsAutoHideScrollBarsChangedEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsAutoHideScrollBarsChangedEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsAutoHideScrollBarsChangedEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsAutoHideScrollBarsChangedEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsAutoHideScrollBarsChangedEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsAutoHideScrollBarsChangedEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsAutoHideScrollBarsChangedEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsAutoHideScrollBarsChangedEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsAutoHideScrollBarsChangedEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIUISettingsAutoHideScrollBarsChangedEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUISettingsAutoHideScrollBarsChangedEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUIViewSettings[] = L"Windows.UI.ViewManagement.IUIViewSettings";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_UserInteractionMode )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings * This,
                           __RPC__out __x_ABI_CWindows_CUI_CViewManagement_CUserInteractionMode * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_UserInteractionMode(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IUIViewSettingsStatics[] = L"Windows.UI.ViewManagement.IUIViewSettingsStatics";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettings * * current
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStaticsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,current) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIUIViewSettingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IViewModePreferences[] = L"Windows.UI.ViewManagement.IViewModePreferences";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ViewSizePreference )(
        __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This,
                           __RPC__out __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_ViewSizePreference )(
        __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This,
                  __x_ABI_CWindows_CUI_CViewManagement_CViewSizePreference value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CustomSize )(
        __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This,
                           __RPC__out __x_ABI_CWindows_CFoundation_CSize * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_CustomSize )(
        __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * This,
                  __x_ABI_CWindows_CFoundation_CSize value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ViewSizePreference(This,value) )
    ( (This)->lpVtbl->put_ViewSizePreference(This,value) )
    ( (This)->lpVtbl->get_CustomSize(This,value) )
    ( (This)->lpVtbl->put_CustomSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_ViewManagement_IViewModePreferencesStatics[] = L"Windows.UI.ViewManagement.IViewModePreferencesStatics";
typedef struct __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateDefault )(
        __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics * This,
                  __x_ABI_CWindows_CUI_CViewManagement_CApplicationViewMode mode,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferences * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStaticsVtbl;
interface __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateDefault(This,mode,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CViewManagement_CIViewModePreferencesStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_AccessibilitySettings[] = L"Windows.UI.ViewManagement.AccessibilitySettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ActivationViewSwitcher[] = L"Windows.UI.ViewManagement.ActivationViewSwitcher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ApplicationView[] = L"Windows.UI.ViewManagement.ApplicationView";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ApplicationViewConsolidatedEventArgs[] = L"Windows.UI.ViewManagement.ApplicationViewConsolidatedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ApplicationViewScaling[] = L"Windows.UI.ViewManagement.ApplicationViewScaling";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ApplicationViewSwitcher[] = L"Windows.UI.ViewManagement.ApplicationViewSwitcher";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ApplicationViewTitleBar[] = L"Windows.UI.ViewManagement.ApplicationViewTitleBar";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ApplicationViewTransferContext[] = L"Windows.UI.ViewManagement.ApplicationViewTransferContext";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_InputPane[] = L"Windows.UI.ViewManagement.InputPane";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_InputPaneVisibilityEventArgs[] = L"Windows.UI.ViewManagement.InputPaneVisibilityEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ProjectionManager[] = L"Windows.UI.ViewManagement.ProjectionManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_StatusBar[] = L"Windows.UI.ViewManagement.StatusBar";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_StatusBarProgressIndicator[] = L"Windows.UI.ViewManagement.StatusBarProgressIndicator";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_UISettings[] = L"Windows.UI.ViewManagement.UISettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_UISettingsAutoHideScrollBarsChangedEventArgs[] = L"Windows.UI.ViewManagement.UISettingsAutoHideScrollBarsChangedEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_UIViewSettings[] = L"Windows.UI.ViewManagement.UIViewSettings";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_ViewManagement_ViewModePreferences[] = L"Windows.UI.ViewManagement.ViewModePreferences";
       
       
#pragma clang diagnostic pop
