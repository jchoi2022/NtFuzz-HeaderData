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
#include "Windows.UI.Core.h"
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_ICoreWindowFactory[] = L"Windows.UI.Core.ICoreWindowFactory";
typedef struct __x_ABI_CWindows_CUI_CCore_CICoreWindowFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateCoreWindow )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory * This,
                  __RPC__in HSTRING windowTitle,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * * window
        );
                   HRESULT ( STDMETHODCALLTYPE *get_WindowReuseAllowed )(
        __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CICoreWindowFactoryVtbl;
interface __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CICoreWindowFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateCoreWindow(This,windowTitle,window) )
    ( (This)->lpVtbl->get_WindowReuseAllowed(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CICoreWindowFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_HostedCoreWindowFactory[] = L"Windows.UI.Core.HostedCoreWindowFactory";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_ImmersiveCoreWindowFactory[] = L"Windows.UI.Core.ImmersiveCoreWindowFactory";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_UAPCoreWindowFactory[] = L"Windows.UI.Core.UAPCoreWindowFactory";
       
       
#pragma clang diagnostic pop
