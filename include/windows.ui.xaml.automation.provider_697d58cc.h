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
#include "Windows.UI.h"
#include "Windows.UI.Xaml.h"
#include "Windows.UI.Xaml.Automation.h"
#include "Windows.UI.Xaml.Automation.Peers.h"
#include "Windows.UI.Xaml.Automation.Text.h"
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2 __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider;
typedef struct __x_ABI_CWindows_CFoundation_CPoint __x_ABI_CWindows_CFoundation_CPoint;
typedef struct __x_ABI_CWindows_CUI_CColor __x_ABI_CWindows_CUI_CColor;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType __x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType;
typedef interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CDockPosition __x_ABI_CWindows_CUI_CXaml_CAutomation_CDockPosition;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CExpandCollapseState __x_ABI_CWindows_CUI_CXaml_CAutomation_CExpandCollapseState;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationNavigationDirection __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationNavigationDirection;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CRowOrColumnMajor __x_ABI_CWindows_CUI_CXaml_CAutomation_CRowOrColumnMajor;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CScrollAmount __x_ABI_CWindows_CUI_CXaml_CAutomation_CScrollAmount;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CSupportedTextSelection __x_ABI_CWindows_CUI_CXaml_CAutomation_CSupportedTextSelection;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CSynchronizedInputType __x_ABI_CWindows_CUI_CXaml_CAutomation_CSynchronizedInputType;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextUnit __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextUnit;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CToggleState __x_ABI_CWindows_CUI_CXaml_CAutomation_CToggleState;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowInteractionState __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowInteractionState;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowVisualState __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowVisualState;
typedef enum __x_ABI_CWindows_CUI_CXaml_CAutomation_CZoomUnit __x_ABI_CWindows_CUI_CXaml_CAutomation_CZoomUnit;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IAnnotationProvider[] = L"Windows.UI.Xaml.Automation.Provider.IAnnotationProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_AnnotationTypeId )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_AnnotationTypeName )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Author )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DateTime )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Target )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_AnnotationTypeId(This,value) )
    ( (This)->lpVtbl->get_AnnotationTypeName(This,value) )
    ( (This)->lpVtbl->get_Author(This,value) )
    ( (This)->lpVtbl->get_DateTime(This,value) )
    ( (This)->lpVtbl->get_Target(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIAnnotationProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ICustomNavigationProvider[] = L"Windows.UI.Xaml.Automation.Provider.ICustomNavigationProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *NavigateCustom )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider * This,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CPeers_CAutomationNavigationDirection direction,
                           __RPC__deref_out_opt IInspectable * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->NavigateCustom(This,direction,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CICustomNavigationProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IDockProvider[] = L"Windows.UI.Xaml.Automation.Provider.IDockProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DockPosition )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CDockPosition * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetDockPosition )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider * This,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CDockPosition dockPosition
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DockPosition(This,value) )
    ( (This)->lpVtbl->SetDockPosition(This,dockPosition) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDockProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IDragProvider[] = L"Windows.UI.Xaml.Automation.Provider.IDragProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsGrabbed )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DropEffect )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DropEffects )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This,
                   __RPC__out UINT32 * __valueSize,
                                                      __RPC__deref_out_ecount_full_opt(*(__valueSize)) HSTRING * * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetGrabbedItems )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider * This,
                   __RPC__out UINT32 * __resultSize,
                                                       __RPC__deref_out_ecount_full_opt(*(__resultSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsGrabbed(This,value) )
    ( (This)->lpVtbl->get_DropEffect(This,value) )
    ( (This)->lpVtbl->get_DropEffects(This,__valueSize,value) )
    ( (This)->lpVtbl->GetGrabbedItems(This,__resultSize,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDragProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IDropTargetProvider[] = L"Windows.UI.Xaml.Automation.Provider.IDropTargetProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DropEffect )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DropEffects )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider * This,
                   __RPC__out UINT32 * __valueSize,
                                                      __RPC__deref_out_ecount_full_opt(*(__valueSize)) HSTRING * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DropEffect(This,value) )
    ( (This)->lpVtbl->get_DropEffects(This,__valueSize,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIDropTargetProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IExpandCollapseProvider[] = L"Windows.UI.Xaml.Automation.Provider.IExpandCollapseProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExpandCollapseState )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CExpandCollapseState * value
        );
    HRESULT ( STDMETHODCALLTYPE *Collapse )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *Expand )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExpandCollapseState(This,value) )
    ( (This)->lpVtbl->Collapse(This) )
    ( (This)->lpVtbl->Expand(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIExpandCollapseProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IGridItemProvider[] = L"Windows.UI.Xaml.Automation.Provider.IGridItemProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Column )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ColumnSpan )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ContainingGrid )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Row )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RowSpan )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider * This,
                           __RPC__out INT32 * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Column(This,value) )
    ( (This)->lpVtbl->get_ColumnSpan(This,value) )
    ( (This)->lpVtbl->get_ContainingGrid(This,value) )
    ( (This)->lpVtbl->get_Row(This,value) )
    ( (This)->lpVtbl->get_RowSpan(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridItemProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IGridProvider[] = L"Windows.UI.Xaml.Automation.Provider.IGridProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ColumnCount )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_RowCount )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetItem )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider * This,
                  INT32 row,
                  INT32 column,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ColumnCount(This,value) )
    ( (This)->lpVtbl->get_RowCount(This,value) )
    ( (This)->lpVtbl->GetItem(This,row,column,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIGridProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IIRawElementProviderSimple[] = L"Windows.UI.Xaml.Automation.Provider.IIRawElementProviderSimple";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimpleVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimpleVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimpleVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IInvokeProvider[] = L"Windows.UI.Xaml.Automation.Provider.IInvokeProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Invoke )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Invoke(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIInvokeProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IItemContainerProvider[] = L"Windows.UI.Xaml.Automation.Provider.IItemContainerProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindItemByProperty )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * startAfter,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CIAutomationProperty * automationProperty,
                  __RPC__in_opt IInspectable * value,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindItemByProperty(This,startAfter,automationProperty,value,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIItemContainerProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IMultipleViewProvider[] = L"Windows.UI.Xaml.Automation.Provider.IMultipleViewProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CurrentView )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This,
                           __RPC__out INT32 * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSupportedViews )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This,
                   __RPC__out UINT32 * __resultSize,
                                                       __RPC__deref_out_ecount_full_opt(*(__resultSize)) INT32 * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetViewName )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This,
                  INT32 viewId,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *SetCurrentView )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider * This,
                  INT32 viewId
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CurrentView(This,value) )
    ( (This)->lpVtbl->GetSupportedViews(This,__resultSize,result) )
    ( (This)->lpVtbl->GetViewName(This,viewId,result) )
    ( (This)->lpVtbl->SetCurrentView(This,viewId) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIMultipleViewProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IObjectModelProvider[] = L"Windows.UI.Xaml.Automation.Provider.IObjectModelProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetUnderlyingObjectModel )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider * This,
                           __RPC__deref_out_opt IInspectable * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetUnderlyingObjectModel(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIObjectModelProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IRangeValueProvider[] = L"Windows.UI.Xaml.Automation.Provider.IRangeValueProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_LargeChange )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Maximum )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Minimum )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SmallChange )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
                           __RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetValue )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider * This,
                  DOUBLE value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsReadOnly(This,value) )
    ( (This)->lpVtbl->get_LargeChange(This,value) )
    ( (This)->lpVtbl->get_Maximum(This,value) )
    ( (This)->lpVtbl->get_Minimum(This,value) )
    ( (This)->lpVtbl->get_SmallChange(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->SetValue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIRangeValueProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IScrollItemProvider[] = L"Windows.UI.Xaml.Automation.Provider.IScrollItemProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ScrollIntoView(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollItemProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IScrollProvider[] = L"Windows.UI.Xaml.Automation.Provider.IScrollProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_HorizontallyScrollable )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HorizontalScrollPercent )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_HorizontalViewSize )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticallyScrollable )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalScrollPercent )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VerticalViewSize )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
                           __RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *Scroll )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CScrollAmount horizontalAmount,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CScrollAmount verticalAmount
        );
    HRESULT ( STDMETHODCALLTYPE *SetScrollPercent )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider * This,
                  DOUBLE horizontalPercent,
                  DOUBLE verticalPercent
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_HorizontallyScrollable(This,value) )
    ( (This)->lpVtbl->get_HorizontalScrollPercent(This,value) )
    ( (This)->lpVtbl->get_HorizontalViewSize(This,value) )
    ( (This)->lpVtbl->get_VerticallyScrollable(This,value) )
    ( (This)->lpVtbl->get_VerticalScrollPercent(This,value) )
    ( (This)->lpVtbl->get_VerticalViewSize(This,value) )
    ( (This)->lpVtbl->Scroll(This,horizontalAmount,verticalAmount) )
    ( (This)->lpVtbl->SetScrollPercent(This,horizontalPercent,verticalPercent) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIScrollProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ISelectionItemProvider[] = L"Windows.UI.Xaml.Automation.Provider.ISelectionItemProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsSelected )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SelectionContainer )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * value
        );
    HRESULT ( STDMETHODCALLTYPE *AddToSelection )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveFromSelection )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *Select )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsSelected(This,value) )
    ( (This)->lpVtbl->get_SelectionContainer(This,value) )
    ( (This)->lpVtbl->AddToSelection(This) )
    ( (This)->lpVtbl->RemoveFromSelection(This) )
    ( (This)->lpVtbl->Select(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionItemProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ISelectionProvider[] = L"Windows.UI.Xaml.Automation.Provider.ISelectionProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanSelectMultiple )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsSelectionRequired )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSelection )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider * This,
                   __RPC__out UINT32 * __resultSize,
                                                       __RPC__deref_out_ecount_full_opt(*(__resultSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanSelectMultiple(This,value) )
    ( (This)->lpVtbl->get_IsSelectionRequired(This,value) )
    ( (This)->lpVtbl->GetSelection(This,__resultSize,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISelectionProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ISpreadsheetItemProvider[] = L"Windows.UI.Xaml.Automation.Provider.ISpreadsheetItemProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Formula )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetAnnotationObjects )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider * This,
                   __RPC__out UINT32 * __resultSize,
                                                       __RPC__deref_out_ecount_full_opt(*(__resultSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAnnotationTypes )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider * This,
                   __RPC__out UINT32 * __resultSize,
                                                       __RPC__deref_out_ecount_full_opt(*(__resultSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CAnnotationType * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Formula(This,value) )
    ( (This)->lpVtbl->GetAnnotationObjects(This,__resultSize,result) )
    ( (This)->lpVtbl->GetAnnotationTypes(This,__resultSize,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetItemProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ISpreadsheetProvider[] = L"Windows.UI.Xaml.Automation.Provider.ISpreadsheetProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetItemByName )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider * This,
                  __RPC__in HSTRING name,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetItemByName(This,name,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISpreadsheetProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IStylesProvider[] = L"Windows.UI.Xaml.Automation.Provider.IStylesProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ExtendedProperties )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FillColor )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FillPatternColor )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
                           __RPC__out __x_ABI_CWindows_CUI_CColor * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_FillPatternStyle )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Shape )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StyleId )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
                           __RPC__out INT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_StyleName )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ExtendedProperties(This,value) )
    ( (This)->lpVtbl->get_FillColor(This,value) )
    ( (This)->lpVtbl->get_FillPatternColor(This,value) )
    ( (This)->lpVtbl->get_FillPatternStyle(This,value) )
    ( (This)->lpVtbl->get_Shape(This,value) )
    ( (This)->lpVtbl->get_StyleId(This,value) )
    ( (This)->lpVtbl->get_StyleName(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIStylesProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ISynchronizedInputProvider[] = L"Windows.UI.Xaml.Automation.Provider.ISynchronizedInputProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Cancel )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *StartListening )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider * This,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CSynchronizedInputType inputType
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Cancel(This) )
    ( (This)->lpVtbl->StartListening(This,inputType) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CISynchronizedInputProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITableItemProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITableItemProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetColumnHeaderItems )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider * This,
                   __RPC__out UINT32 * __resultSize,
                                                       __RPC__deref_out_ecount_full_opt(*(__resultSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetRowHeaderItems )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider * This,
                   __RPC__out UINT32 * __resultSize,
                                                       __RPC__deref_out_ecount_full_opt(*(__resultSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetColumnHeaderItems(This,__resultSize,result) )
    ( (This)->lpVtbl->GetRowHeaderItems(This,__resultSize,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableItemProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITableProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITableProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_RowOrColumnMajor )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CRowOrColumnMajor * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetColumnHeaders )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider * This,
                   __RPC__out UINT32 * __resultSize,
                                                       __RPC__deref_out_ecount_full_opt(*(__resultSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetRowHeaders )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider * This,
                   __RPC__out UINT32 * __resultSize,
                                                       __RPC__deref_out_ecount_full_opt(*(__resultSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_RowOrColumnMajor(This,value) )
    ( (This)->lpVtbl->GetColumnHeaders(This,__resultSize,result) )
    ( (This)->lpVtbl->GetRowHeaders(This,__resultSize,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITableProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITextChildProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITextChildProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_TextContainer )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_TextRange )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_TextContainer(This,value) )
    ( (This)->lpVtbl->get_TextRange(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextChildProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITextEditProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITextEditProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetActiveComposition )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetConversionTarget )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetActiveComposition(This,result) )
    ( (This)->lpVtbl->GetConversionTarget(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextEditProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITextProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITextProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DocumentRange )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_SupportedTextSelection )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CSupportedTextSelection * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetSelection )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
                   __RPC__out UINT32 * __resultSize,
                                                       __RPC__deref_out_ecount_full_opt(*(__resultSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetVisibleRanges )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
                   __RPC__out UINT32 * __resultSize,
                                                       __RPC__deref_out_ecount_full_opt(*(__resultSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RangeFromChild )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * childElement,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * result
        );
    HRESULT ( STDMETHODCALLTYPE *RangeFromPoint )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider * This,
                  __x_ABI_CWindows_CFoundation_CPoint screenLocation,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DocumentRange(This,value) )
    ( (This)->lpVtbl->get_SupportedTextSelection(This,value) )
    ( (This)->lpVtbl->GetSelection(This,__resultSize,result) )
    ( (This)->lpVtbl->GetVisibleRanges(This,__resultSize,result) )
    ( (This)->lpVtbl->RangeFromChild(This,childElement,result) )
    ( (This)->lpVtbl->RangeFromPoint(This,screenLocation,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITextProvider2[] = L"Windows.UI.Xaml.Automation.Provider.ITextProvider2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *RangeFromAnnotation )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * annotationElement,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetCaretRange )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2 * This,
                   __RPC__out boolean * isActive,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * returnValue
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->RangeFromAnnotation(This,annotationElement,result) )
    ( (This)->lpVtbl->GetCaretRange(This,isActive,returnValue) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextProvider2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITextRangeProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Clone )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * result
        );
    HRESULT ( STDMETHODCALLTYPE *Compare )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * textRangeProvider,
                           __RPC__out boolean * result
        );
    HRESULT ( STDMETHODCALLTYPE *CompareEndpoints )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint endpoint,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * textRangeProvider,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint targetEndpoint,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *ExpandToEnclosingUnit )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextUnit unit
        );
    HRESULT ( STDMETHODCALLTYPE *FindAttribute )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
                  INT32 attributeId,
                  __RPC__in_opt IInspectable * value,
                  boolean backward,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * result
        );
    HRESULT ( STDMETHODCALLTYPE *FindText )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
                  __RPC__in HSTRING text,
                  boolean backward,
                  boolean ignoreCase,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetAttributeValue )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
                  INT32 attributeId,
                           __RPC__deref_out_opt IInspectable * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetBoundingRectangles )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
                   __RPC__out UINT32 * __returnValueSize,
                                                    __RPC__deref_out_ecount_full_opt(*(__returnValueSize)) DOUBLE * * returnValue
        );
    HRESULT ( STDMETHODCALLTYPE *GetEnclosingElement )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * result
        );
    HRESULT ( STDMETHODCALLTYPE *GetText )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
                  INT32 maxLength,
                           __RPC__deref_out_opt HSTRING * result
        );
    HRESULT ( STDMETHODCALLTYPE *Move )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextUnit unit,
                  INT32 count,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *MoveEndpointByUnit )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint endpoint,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextUnit unit,
                  INT32 count,
                           __RPC__out INT32 * result
        );
    HRESULT ( STDMETHODCALLTYPE *MoveEndpointByRange )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint endpoint,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * textRangeProvider,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CText_CTextPatternRangeEndpoint targetEndpoint
        );
    HRESULT ( STDMETHODCALLTYPE *Select )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *AddToSelection )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *RemoveFromSelection )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *ScrollIntoView )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
                  boolean alignToTop
        );
    HRESULT ( STDMETHODCALLTYPE *GetChildren )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider * This,
                   __RPC__out UINT32 * __resultSize,
                                                       __RPC__deref_out_ecount_full_opt(*(__resultSize)) __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIIRawElementProviderSimple * * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Clone(This,result) )
    ( (This)->lpVtbl->Compare(This,textRangeProvider,result) )
    ( (This)->lpVtbl->CompareEndpoints(This,endpoint,textRangeProvider,targetEndpoint,result) )
    ( (This)->lpVtbl->ExpandToEnclosingUnit(This,unit) )
    ( (This)->lpVtbl->FindAttribute(This,attributeId,value,backward,result) )
    ( (This)->lpVtbl->FindText(This,text,backward,ignoreCase,result) )
    ( (This)->lpVtbl->GetAttributeValue(This,attributeId,result) )
    ( (This)->lpVtbl->GetBoundingRectangles(This,__returnValueSize,returnValue) )
    ( (This)->lpVtbl->GetEnclosingElement(This,result) )
    ( (This)->lpVtbl->GetText(This,maxLength,result) )
    ( (This)->lpVtbl->Move(This,unit,count,result) )
    ( (This)->lpVtbl->MoveEndpointByUnit(This,endpoint,unit,count,result) )
    ( (This)->lpVtbl->MoveEndpointByRange(This,endpoint,textRangeProvider,targetEndpoint) )
    ( (This)->lpVtbl->Select(This) )
    ( (This)->lpVtbl->AddToSelection(This) )
    ( (This)->lpVtbl->RemoveFromSelection(This) )
    ( (This)->lpVtbl->ScrollIntoView(This,alignToTop) )
    ( (This)->lpVtbl->GetChildren(This,__resultSize,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITextRangeProvider2[] = L"Windows.UI.Xaml.Automation.Provider.ITextRangeProvider2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2 * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ShowContextMenu(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITextRangeProvider2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IToggleProvider[] = L"Windows.UI.Xaml.Automation.Provider.IToggleProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_ToggleState )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CToggleState * value
        );
    HRESULT ( STDMETHODCALLTYPE *Toggle )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_ToggleState(This,value) )
    ( (This)->lpVtbl->Toggle(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIToggleProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITransformProvider[] = L"Windows.UI.Xaml.Automation.Provider.ITransformProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanMove )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanResize )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_CanRotate )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *Move )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
                  DOUBLE x,
                  DOUBLE y
        );
    HRESULT ( STDMETHODCALLTYPE *Resize )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
                  DOUBLE width,
                  DOUBLE height
        );
    HRESULT ( STDMETHODCALLTYPE *Rotate )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider * This,
                  DOUBLE degrees
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanMove(This,value) )
    ( (This)->lpVtbl->get_CanResize(This,value) )
    ( (This)->lpVtbl->get_CanRotate(This,value) )
    ( (This)->lpVtbl->Move(This,x,y) )
    ( (This)->lpVtbl->Resize(This,width,height) )
    ( (This)->lpVtbl->Rotate(This,degrees) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_ITransformProvider2[] = L"Windows.UI.Xaml.Automation.Provider.ITransformProvider2";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_CanZoom )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_ZoomLevel )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MaxZoom )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
                           __RPC__out DOUBLE * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_MinZoom )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
                           __RPC__out DOUBLE * value
        );
    HRESULT ( STDMETHODCALLTYPE *Zoom )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
                  DOUBLE zoom
        );
    HRESULT ( STDMETHODCALLTYPE *ZoomByUnit )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2 * This,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CZoomUnit zoomUnit
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2Vtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_CanZoom(This,value) )
    ( (This)->lpVtbl->get_ZoomLevel(This,value) )
    ( (This)->lpVtbl->get_MaxZoom(This,value) )
    ( (This)->lpVtbl->get_MinZoom(This,value) )
    ( (This)->lpVtbl->Zoom(This,zoom) )
    ( (This)->lpVtbl->ZoomByUnit(This,zoomUnit) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CITransformProvider2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IValueProvider[] = L"Windows.UI.Xaml.Automation.Provider.IValueProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsReadOnly )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Value )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *SetValue )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider * This,
                  __RPC__in HSTRING value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsReadOnly(This,value) )
    ( (This)->lpVtbl->get_Value(This,value) )
    ( (This)->lpVtbl->SetValue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIValueProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IVirtualizedItemProvider[] = L"Windows.UI.Xaml.Automation.Provider.IVirtualizedItemProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *Realize )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider * This
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Realize(This) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIVirtualizedItemProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Xaml_Automation_Provider_IWindowProvider[] = L"Windows.UI.Xaml.Automation.Provider.IWindowProvider";
typedef struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProviderVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsModal )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_IsTopmost )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Maximizable )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Minimizable )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_InteractionState )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowInteractionState * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_VisualState )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
                           __RPC__out __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowVisualState * value
        );
    HRESULT ( STDMETHODCALLTYPE *Close )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This
        );
    HRESULT ( STDMETHODCALLTYPE *SetVisualState )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
                  __x_ABI_CWindows_CUI_CXaml_CAutomation_CWindowVisualState state
        );
    HRESULT ( STDMETHODCALLTYPE *WaitForInputIdle )(
        __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider * This,
                  INT32 milliseconds,
                           __RPC__out boolean * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProviderVtbl;
interface __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProviderVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsModal(This,value) )
    ( (This)->lpVtbl->get_IsTopmost(This,value) )
    ( (This)->lpVtbl->get_Maximizable(This,value) )
    ( (This)->lpVtbl->get_Minimizable(This,value) )
    ( (This)->lpVtbl->get_InteractionState(This,value) )
    ( (This)->lpVtbl->get_VisualState(This,value) )
    ( (This)->lpVtbl->Close(This) )
    ( (This)->lpVtbl->SetVisualState(This,state) )
    ( (This)->lpVtbl->WaitForInputIdle(This,milliseconds,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CXaml_CAutomation_CProvider_CIWindowProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Xaml_Automation_Provider_IRawElementProviderSimple[] = L"Windows.UI.Xaml.Automation.Provider.IRawElementProviderSimple";
       
       
#pragma clang diagnostic pop
