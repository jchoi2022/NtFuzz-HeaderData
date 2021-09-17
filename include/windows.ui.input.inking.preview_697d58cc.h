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
#include "Windows.UI.Composition.h"
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreview __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreview;
typedef interface __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreviewStatics __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreviewStatics;
typedef interface __x_ABI_CWindows_CFoundation_CIClosable __x_ABI_CWindows_CFoundation_CIClosable;
typedef struct __x_ABI_CWindows_CFoundation_CRect __x_ABI_CWindows_CFoundation_CRect;
typedef interface __x_ABI_CWindows_CUI_CComposition_CIVisual __x_ABI_CWindows_CUI_CComposition_CIVisual;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Preview_IPalmRejectionDelayZonePreview[] = L"Windows.UI.Input.Inking.Preview.IPalmRejectionDelayZonePreview";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreviewVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreview
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Inking_Preview_IPalmRejectionDelayZonePreviewStatics[] = L"Windows.UI.Input.Inking.Preview.IPalmRejectionDelayZonePreviewStatics";
typedef struct __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreviewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreviewStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreviewStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreviewStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreviewStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreviewStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreviewStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *CreateForVisual )(
        __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreviewStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * inputPanelVisual,
                  __x_ABI_CWindows_CFoundation_CRect inputPanelRect,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreview * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *CreateForVisualWithViewportClip )(
        __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreviewStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * inputPanelVisual,
                  __x_ABI_CWindows_CFoundation_CRect inputPanelRect,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CComposition_CIVisual * viewportVisual,
                  __x_ABI_CWindows_CFoundation_CRect viewportRect,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreview * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreviewStaticsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreviewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreviewStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateForVisual(This,inputPanelVisual,inputPanelRect,result) )
    ( (This)->lpVtbl->CreateForVisualWithViewportClip(This,inputPanelVisual,inputPanelRect,viewportVisual,viewportRect,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CInking_CPreview_CIPalmRejectionDelayZonePreviewStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Inking_Preview_PalmRejectionDelayZonePreview[] = L"Windows.UI.Input.Inking.Preview.PalmRejectionDelayZonePreview";
       
       
#pragma clang diagnostic pop
