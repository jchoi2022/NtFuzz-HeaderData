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
#include "Windows.UI.Input.h"
#include "Windows.UI.WindowManagement.h"
typedef interface __x_ABI_CWindows_CUI_CInput_CPreview_CIInputActivationListenerPreviewStatics __x_ABI_CWindows_CUI_CInput_CPreview_CIInputActivationListenerPreviewStatics;
typedef interface __x_ABI_CWindows_CUI_CInput_CIInputActivationListener __x_ABI_CWindows_CUI_CInput_CIInputActivationListener;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Preview_IInputActivationListenerPreviewStatics[] = L"Windows.UI.Input.Preview.IInputActivationListenerPreviewStatics";
typedef struct __x_ABI_CWindows_CUI_CInput_CPreview_CIInputActivationListenerPreviewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CIInputActivationListenerPreviewStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CIInputActivationListenerPreviewStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CIInputActivationListenerPreviewStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CIInputActivationListenerPreviewStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CIInputActivationListenerPreviewStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CPreview_CIInputActivationListenerPreviewStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateForApplicationWindow )(
        __x_ABI_CWindows_CUI_CInput_CPreview_CIInputActivationListenerPreviewStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * window,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIInputActivationListener * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CPreview_CIInputActivationListenerPreviewStaticsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CPreview_CIInputActivationListenerPreviewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CPreview_CIInputActivationListenerPreviewStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateForApplicationWindow(This,window,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CPreview_CIInputActivationListenerPreviewStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Preview_InputActivationListenerPreview[] = L"Windows.UI.Input.Preview.InputActivationListenerPreview";
       
       
#pragma clang diagnostic pop
