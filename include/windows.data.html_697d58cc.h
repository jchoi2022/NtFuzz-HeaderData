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
typedef interface __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Data_Html_IHtmlUtilities[] = L"Windows.Data.Html.IHtmlUtilities";
typedef struct __x_ABI_CWindows_CData_CHtml_CIHtmlUtilitiesVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *ConvertToText )(
        __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities * This,
                  __RPC__in HSTRING html,
                           __RPC__deref_out_opt HSTRING * text
        );
    END_INTERFACE
} __x_ABI_CWindows_CData_CHtml_CIHtmlUtilitiesVtbl;
interface __x_ABI_CWindows_CData_CHtml_CIHtmlUtilities
{
    CONST_VTBL struct __x_ABI_CWindows_CData_CHtml_CIHtmlUtilitiesVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->ConvertToText(This,html,text) )
EXTERN_C const IID IID___x_ABI_CWindows_CData_CHtml_CIHtmlUtilities;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Data_Html_HtmlUtilities[] = L"Windows.Data.Html.HtmlUtilities";
       
       
#pragma clang diagnostic pop
