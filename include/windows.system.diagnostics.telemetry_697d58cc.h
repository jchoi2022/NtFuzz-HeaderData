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
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult;
typedef interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings;
typedef enum __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CPlatformTelemetryRegistrationStatus __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CPlatformTelemetryRegistrationStatus;
enum __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CPlatformTelemetryRegistrationStatus
{
    PlatformTelemetryRegistrationStatus_Success = 0,
    PlatformTelemetryRegistrationStatus_SettingsOutOfRange = 1,
    PlatformTelemetryRegistrationStatus_UnknownFailure = 2,
};
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryClientStatics[] = L"Windows.System.Diagnostics.Telemetry.IPlatformTelemetryClientStatics";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStaticsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This,
                 __RPC__out TrustLevel *trustLevel
    );
                HRESULT ( STDMETHODCALLTYPE *Register )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This,
                  __RPC__in HSTRING id,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * * result
        );
                    HRESULT ( STDMETHODCALLTYPE *RegisterWithSettings )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics * This,
                  __RPC__in HSTRING id,
                  __RPC__in_opt __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * settings,
                           __RPC__deref_out_opt __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * * result
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStaticsVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStaticsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->Register(This,id,result) )
    ( (This)->lpVtbl->RegisterWithSettings(This,id,settings,result) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryClientStatics;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationResult[] = L"Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationResult";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResultVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_Status )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult * This,
                           __RPC__out __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CPlatformTelemetryRegistrationStatus * value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResultVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResultVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_Status(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationResult;
extern const __declspec(selectany) _Null_terminated_ WCHAR InterfaceName_Windows_System_Diagnostics_Telemetry_IPlatformTelemetryRegistrationSettings[] = L"Windows.System.Diagnostics.Telemetry.IPlatformTelemetryRegistrationSettings";
typedef struct __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettingsVtbl
{
    BEGIN_INTERFACE
    HRESULT ( STDMETHODCALLTYPE *QueryInterface)(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
               __RPC__in REFIID riid,
    _COM_Outptr_ void **ppvObject
    );
ULONG ( STDMETHODCALLTYPE *AddRef )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This
    );
ULONG ( STDMETHODCALLTYPE *Release )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This
    );
HRESULT ( STDMETHODCALLTYPE *GetIids )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
                __RPC__out ULONG *iidCount,
                                  __RPC__deref_out_ecount_full_opt(*iidCount) IID **iids
    );
HRESULT ( STDMETHODCALLTYPE *GetRuntimeClassName )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
                __RPC__deref_out_opt HSTRING *className
    );
HRESULT ( STDMETHODCALLTYPE *GetTrustLevel )(
    __RPC__in __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
                 __RPC__out TrustLevel *trustLevel
    );
               HRESULT ( STDMETHODCALLTYPE *get_StorageSize )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_StorageSize )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
                  UINT32 value
        );
                   HRESULT ( STDMETHODCALLTYPE *get_UploadQuotaSize )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
                           __RPC__out UINT32 * value
        );
                   HRESULT ( STDMETHODCALLTYPE *put_UploadQuotaSize )(
        __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings * This,
                  UINT32 value
        );
    END_INTERFACE
} __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettingsVtbl;
interface __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings
{
    CONST_VTBL struct __x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettingsVtbl *lpVtbl;
};
( (This)->lpVtbl->QueryInterface(This,riid,ppvObject) )
        ( (This)->lpVtbl->AddRef(This) )
        ( (This)->lpVtbl->Release(This) )
        ( (This)->lpVtbl->GetIids(This,iidCount,iids) )
        ( (This)->lpVtbl->GetRuntimeClassName(This,className) )
        ( (This)->lpVtbl->GetTrustLevel(This,trustLevel) )
    ( (This)->lpVtbl->get_StorageSize(This,value) )
    ( (This)->lpVtbl->put_StorageSize(This,value) )
    ( (This)->lpVtbl->get_UploadQuotaSize(This,value) )
    ( (This)->lpVtbl->put_UploadQuotaSize(This,value) )
EXTERN_C const IID IID___x_ABI_CWindows_CSystem_CDiagnostics_CTelemetry_CIPlatformTelemetryRegistrationSettings;
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_Telemetry_PlatformTelemetryClient[] = L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryClient";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationResult[] = L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationResult";
extern const __declspec(selectany) _Null_terminated_ WCHAR RuntimeClass_Windows_System_Diagnostics_Telemetry_PlatformTelemetryRegistrationSettings[] = L"Windows.System.Diagnostics.Telemetry.PlatformTelemetryRegistrationSettings";
       
       
#pragma clang diagnostic pop
