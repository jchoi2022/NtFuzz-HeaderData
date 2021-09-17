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
#include "Windows.ApplicationModel.Core.h"
#include "Windows.System.h"
#include "Windows.UI.Core.h"
#include "Windows.UI.Input.h"
typedef interface __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource;
typedef interface __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource2 __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource2;
typedef interface __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics;
typedef interface __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView;
typedef interface __x_ABI_CWindows_CSystem_CIDispatcherQueue __x_ABI_CWindows_CSystem_CIDispatcherQueue;
typedef interface __x_ABI_CWindows_CUI_CCore_CICoreDispatcher __x_ABI_CWindows_CUI_CCore_CICoreDispatcher;
typedef interface __x_ABI_CWindows_CUI_CInput_CIRadialController __x_ABI_CWindows_CUI_CInput_CIRadialController;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Core_IRadialControllerIndependentInputSource[] = L"Windows.UI.Input.Core.IRadialControllerIndependentInputSource";
typedef struct __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Controller )(
        __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CIRadialController * * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_Dispatcher )(
        __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreDispatcher * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceVtbl;
interface __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Controller(This,value) )
    ( (This)->lpVtbl->get_Dispatcher(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Core_IRadialControllerIndependentInputSource2[] = L"Windows.UI.Input.Core.IRadialControllerIndependentInputSource2";
typedef struct __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DispatcherQueue )(
        __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource2 * This,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CIDispatcherQueue * * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource2Vtbl;
interface __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource2
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DispatcherQueue(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_UI_Input_Core_IRadialControllerIndependentInputSourceStatics[] = L"Windows.UI.Input.Core.IRadialControllerIndependentInputSourceStatics";
typedef struct __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *CreateForView )(
        __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CApplicationModel_CCore_CICoreApplicationView * view,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSource * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStaticsVtbl;
interface __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->CreateForView(This,view,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CUI_CInput_CCore_CIRadialControllerIndependentInputSourceStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_UI_Input_Core_RadialControllerIndependentInputSource[] = L"Windows.UI.Input.Core.RadialControllerIndependentInputSource";
       
       
#pragma clang diagnostic pop
