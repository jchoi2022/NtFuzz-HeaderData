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
#include <windows.foundation.collections.h>
typedef interface __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreview __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreview;
typedef interface __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreviewStatics __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreviewStatics;
typedef interface __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationCloseRequestedPreviewEventArgs __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationCloseRequestedPreviewEventArgs;
typedef interface __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreview __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreview;
typedef interface __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreviewStatics __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreviewStatics;
typedef interface __FIEventHandler_1_Windows__CUI__CCore__CPreview__CSystemNavigationCloseRequestedPreviewEventArgs __FIEventHandler_1_Windows__CUI__CCore__CPreview__CSystemNavigationCloseRequestedPreviewEventArgs;
EXTERN_C const IID IID___FIEventHandler_1_Windows__CUI__CCore__CPreview__CSystemNavigationCloseRequestedPreviewEventArgs;
typedef struct __FIEventHandler_1_Windows__CUI__CCore__CPreview__CSystemNavigationCloseRequestedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface )(__RPC__in __FIEventHandler_1_Windows__CUI__CCore__CPreview__CSystemNavigationCloseRequestedPreviewEventArgs * This,
                   __RPC__in REFIID riid,
        _COM_Outptr_ void **ppvObject);
    ULONG ( STDMETHODCALLTYPE *AddRef )(__RPC__in __FIEventHandler_1_Windows__CUI__CCore__CPreview__CSystemNavigationCloseRequestedPreviewEventArgs * This);
    ULONG ( STDMETHODCALLTYPE *Release )(__RPC__in __FIEventHandler_1_Windows__CUI__CCore__CPreview__CSystemNavigationCloseRequestedPreviewEventArgs * This);
    HRESULT ( STDMETHODCALLTYPE *Invoke )(__RPC__in __FIEventHandler_1_Windows__CUI__CCore__CPreview__CSystemNavigationCloseRequestedPreviewEventArgs * This, __RPC__in_opt IInspectable *sender, __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationCloseRequestedPreviewEventArgs * *e);
    END_INTERFACE
} __FIEventHandler_1_Windows__CUI__CCore__CPreview__CSystemNavigationCloseRequestedPreviewEventArgsVtbl;
interface __FIEventHandler_1_Windows__CUI__CCore__CPreview__CSystemNavigationCloseRequestedPreviewEventArgs
{
    CONST_VTBL struct __FIEventHandler_1_Windows__CUI__CCore__CPreview__CSystemNavigationCloseRequestedPreviewEventArgsVtbl *lpVtbl;
};
        ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl -> AddRef(This) )
        ( (This)->lpVtbl -> Release(This) )
        ( (This)->lpVtbl -> Invoke(This,sender,e) )
typedef interface __x_ABI_CWindows_CFoundation_CIDeferral __x_ABI_CWindows_CFoundation_CIDeferral;
typedef interface __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_Preview_ICoreAppWindowPreview[] = L"Windows.UI.Core.Preview.ICoreAppWindowPreview";
typedef struct __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreviewVtbl;
interface __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_Preview_ICoreAppWindowPreviewStatics[] = L"Windows.UI.Core.Preview.ICoreAppWindowPreviewStatics";
typedef struct __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreviewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreviewStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreviewStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreviewStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreviewStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreviewStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreviewStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetIdFromWindow )(
        __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreviewStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CWindowManagement_CIAppWindow * window,
                           __RPC__out INT32 * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreviewStaticsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreviewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreviewStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetIdFromWindow(This,window,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CPreview_CICoreAppWindowPreviewStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_Preview_ISystemNavigationCloseRequestedPreviewEventArgs[] = L"Windows.UI.Core.Preview.ISystemNavigationCloseRequestedPreviewEventArgs";
typedef struct __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationCloseRequestedPreviewEventArgsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationCloseRequestedPreviewEventArgs * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationCloseRequestedPreviewEventArgs * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationCloseRequestedPreviewEventArgs * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationCloseRequestedPreviewEventArgs * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationCloseRequestedPreviewEventArgs * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationCloseRequestedPreviewEventArgs * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Handled )(
        __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationCloseRequestedPreviewEventArgs * This,
                           __RPC__out boolean * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_Handled )(
        __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationCloseRequestedPreviewEventArgs * This,
                  boolean value
        );
    HRESULT ( STDMETHODCALLTYPE *GetDeferral )(
        __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationCloseRequestedPreviewEventArgs * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CFoundation_CIDeferral * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationCloseRequestedPreviewEventArgsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationCloseRequestedPreviewEventArgs
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationCloseRequestedPreviewEventArgsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Handled(This,value) )
    ( (This)->lpVtbl->put_Handled(This,value) )
    ( (This)->lpVtbl->GetDeferral(This,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationCloseRequestedPreviewEventArgs;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_Preview_ISystemNavigationManagerPreview[] = L"Windows.UI.Core.Preview.ISystemNavigationManagerPreview";
typedef struct __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreviewVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreview * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreview * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreview * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreview * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreview * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreview * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *add_CloseRequested )(
        __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreview * This,
                  __RPC__in_opt __FIEventHandler_1_Windows__CUI__CCore__CPreview__CSystemNavigationCloseRequestedPreviewEventArgs * handler,
                           __RPC__out EventRegistrationToken * token
        );
                       HRESULT ( STDMETHODCALLTYPE *remove_CloseRequested )(
        __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreview * This,
                  EventRegistrationToken token
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreviewVtbl;
interface __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreview
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreviewVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->add_CloseRequested(This,handler,token) )
    ( (This)->lpVtbl->remove_CloseRequested(This,token) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreview;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Core_Preview_ISystemNavigationManagerPreviewStatics[] = L"Windows.UI.Core.Preview.ISystemNavigationManagerPreviewStatics";
typedef struct __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreviewStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreviewStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreviewStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreviewStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreviewStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreviewStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreviewStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetForCurrentView )(
        __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreviewStatics * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreview * * loader
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreviewStaticsVtbl;
interface __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreviewStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreviewStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetForCurrentView(This,loader) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CCore_CPreview_CISystemNavigationManagerPreviewStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_Preview_CoreAppWindowPreview[] = L"Windows.UI.Core.Preview.CoreAppWindowPreview";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_Preview_SystemNavigationCloseRequestedPreviewEventArgs[] = L"Windows.UI.Core.Preview.SystemNavigationCloseRequestedPreviewEventArgs";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Core_Preview_SystemNavigationManagerPreview[] = L"Windows.UI.Core.Preview.SystemNavigationManagerPreview";
       
       
#pragma clang diagnostic pop
