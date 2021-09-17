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
#include "Windows.UI.WindowManagement.h"
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreview __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreview;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreviewStatics __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreviewStatics;
typedef struct __x_ABI_CWindows_CFoundation_CSize __x_ABI_CWindows_CFoundation_CSize;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_Preview_IWindowManagementPreview[] = L"Windows.UI.WindowManagement.Preview.IWindowManagementPreview";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreviewVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_WindowManagement_Preview_IWindowManagementPreviewStatics[] = L"Windows.UI.WindowManagement.Preview.IWindowManagementPreviewStatics";
typedef struct __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreviewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreviewStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreviewStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreviewStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreviewStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreviewStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreviewStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetPreferredMinSize )(
        __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreviewStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * window,
                  __x_ABI_CWindows_CFoundation_CSize preferredFrameMinSize
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreviewStaticsVtbl;
interface __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreviewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreviewStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetPreferredMinSize(This,window,preferredFrameMinSize) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CWindowManagement_CPreview_CIWindowManagementPreviewStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_WindowManagement_Preview_WindowManagementPreview[] = L"Windows.UI.WindowManagement.Preview.WindowManagementPreview";
       
       
#pragma clang diagnostic pop
