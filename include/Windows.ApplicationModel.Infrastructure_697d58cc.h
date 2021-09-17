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
#include "Windows.UI.Core.CoreWindowFactory.h"
#include "Windows.UI.Core.h"
typedef interface __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_ApplicationModel_Infrastructure_ISetWindowWithWindowFactory[] = L"Windows.ApplicationModel.Infrastructure.ISetWindowWithWindowFactory";
typedef struct __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactoryVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *SetWindow )(
        __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory * This,
                  __RPC__in_opt __x_ABI_CWindows_CUI_CCore_CICoreWindowFactory * windowFactory,
                           __RPC__deref_out_opt __x_ABI_CWindows_CUI_CCore_CICoreWindow * * window
        );
    END_INTERFACE
} __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactoryVtbl;
interface __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory
{
    CONST_VTBL struct __x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactoryVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->SetWindow(This,windowFactory,window) )
EXTERN_C const IID IID___x_ABI_CWindows_CApplicationModel_CInfrastructure_CISetWindowWithWindowFactory;
       
       
#pragma clang diagnostic pop
