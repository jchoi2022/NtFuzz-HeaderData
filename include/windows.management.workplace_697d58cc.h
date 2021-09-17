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
typedef interface __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics;
typedef interface __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2;
typedef interface __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics;
typedef enum __x_ABI_CWindows_CManagement_CWorkplace_CMessagingSyncPolicy __x_ABI_CWindows_CManagement_CWorkplace_CMessagingSyncPolicy;
enum __x_ABI_CWindows_CManagement_CWorkplace_CMessagingSyncPolicy
{
    MessagingSyncPolicy_Disallowed = 0,
    MessagingSyncPolicy_Allowed = 1,
    MessagingSyncPolicy_Required = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Workplace_IMdmAllowPolicyStatics[] = L"Windows.Management.Workplace.IMdmAllowPolicyStatics";
typedef struct __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *IsBrowserAllowed )(
        __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsCameraAllowed )(
        __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsMicrosoftAccountAllowed )(
        __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
                           __RPC__out boolean * value
        );
    HRESULT ( STDMETHODCALLTYPE *IsStoreAllowed )(
        __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStaticsVtbl;
interface __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->IsBrowserAllowed(This,value) )
    ( (This)->lpVtbl->IsCameraAllowed(This,value) )
    ( (This)->lpVtbl->IsMicrosoftAccountAllowed(This,value) )
    ( (This)->lpVtbl->IsStoreAllowed(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CWorkplace_CIMdmAllowPolicyStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Workplace_IMdmPolicyStatics2[] = L"Windows.Management.Workplace.IMdmPolicyStatics2";
typedef struct __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2Vtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This,
                 __RPC__out TrustLevel *trustLevel
    );
HRESULT ( STDMETHODCALLTYPE *GetMessagingSyncPolicy )(
        __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2 * This,
                           __RPC__out __x_ABI_CWindows_CManagement_CWorkplace_CMessagingSyncPolicy * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2Vtbl;
interface __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2Vtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->GetMessagingSyncPolicy(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CWorkplace_CIMdmPolicyStatics2;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_Management_Workplace_IWorkplaceSettingsStatics[] = L"Windows.Management.Workplace.IWorkplaceSettingsStatics";
typedef struct __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_IsMicrosoftAccountOptional )(
        __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics * This,
                           __RPC__out boolean * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStaticsVtbl;
interface __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_IsMicrosoftAccountOptional(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CManagement_CWorkplace_CIWorkplaceSettingsStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Workplace_MdmPolicy[] = L"Windows.Management.Workplace.MdmPolicy";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_Management_Workplace_WorkplaceSettings[] = L"Windows.Management.Workplace.WorkplaceSettings";
       
       
#pragma clang diagnostic pop
