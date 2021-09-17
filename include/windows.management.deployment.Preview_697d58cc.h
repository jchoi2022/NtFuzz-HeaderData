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
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics;
typedef interface __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_Preview_IClassicAppManagerStatics[] = L"Windows.Management.Deployment.Preview.IClassicAppManagerStatics";
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *FindInstalledApp )(
        __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics * This,
                  __RPC__in HSTRING appUninstallKey,
                           __RPC__deref_out_opt __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStaticsVtbl;
interface __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->FindInstalledApp(This,appUninstallKey,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CPreview_CIClassicAppManagerStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Deployment_Preview_IInstalledClassicAppInfo[] = L"Windows.Management.Deployment.Preview.IInstalledClassicAppInfo";
typedef struct __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfoVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_DisplayName )(
        __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_DisplayVersion )(
        __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo * This,
                           __RPC__deref_out_opt HSTRING * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfoVtbl;
interface __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfoVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_DisplayName(This,value) )
    ( (This)->lpVtbl->get_DisplayVersion(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CDeployment_CPreview_CIInstalledClassicAppInfo;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_Preview_ClassicAppManager[] = L"Windows.Management.Deployment.Preview.ClassicAppManager";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Deployment_Preview_InstalledClassicAppInfo[] = L"Windows.Management.Deployment.Preview.InstalledClassicAppInfo";
       
       
#pragma clang diagnostic pop
