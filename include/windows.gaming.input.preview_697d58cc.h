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
#include "Windows.Gaming.Input.h"
#include "Windows.Gaming.Input.Custom.h"
typedef interface __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics;
typedef interface __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Gaming_Input_Preview_IGameControllerProviderInfoStatics[] = L"Windows.Gaming.Input.Preview.IGameControllerProviderInfoStatics";
typedef struct __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetParentProviderId )(
        __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * provider,
                           __RPC__deref_out_opt HSTRING * value
        );
    HRESULT ( STDMETHODCALLTYPE *GetProviderId )(
        __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics * This,
                  __RPC__in_opt __x_ABI_CWindows_CGaming_CInput_CCustom_CIGameControllerProvider * provider,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStaticsVtbl;
interface __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetParentProviderId(This,provider,value) )
    ( (This)->lpVtbl->GetProviderId(This,provider,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CGaming_CInput_CPreview_CIGameControllerProviderInfoStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Gaming_Input_Preview_GameControllerProviderInfo[] = L"Windows.Gaming.Input.Preview.GameControllerProviderInfo";
       
       
#pragma clang diagnostic pop
