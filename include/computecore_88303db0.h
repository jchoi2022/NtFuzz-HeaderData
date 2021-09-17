       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include <ComputeDefs.h>
extern "C" {
HRESULT
WINAPI
HcsEnumerateComputeSystems(
    _In_opt_ PCWSTR query,
    _In_ HCS_OPERATION operation
    );
HCS_OPERATION
WINAPI
HcsCreateOperation(
    _In_opt_ const void* context,
    _In_opt_ HCS_OPERATION_COMPLETION callback
    );
void
WINAPI
HcsCloseOperation(
    _In_ HCS_OPERATION operation
    );
void*
WINAPI
HcsGetOperationContext(
    _In_ HCS_OPERATION operation
    );
HRESULT
WINAPI
HcsSetOperationContext(
    _In_ HCS_OPERATION operation,
    _In_opt_ const void* context
    );
HCS_SYSTEM
WINAPI
HcsGetComputeSystemFromOperation(
    _In_ HCS_OPERATION operation
    );
HCS_PROCESS
WINAPI
HcsGetProcessFromOperation(
    _In_ HCS_OPERATION operation
    );
HCS_OPERATION_TYPE
WINAPI
HcsGetOperationType(
    _In_ HCS_OPERATION operation
    );
UINT64
WINAPI
HcsGetOperationId(
    _In_ HCS_OPERATION operation
    );
HRESULT
WINAPI
HcsGetOperationResult(
    _In_ HCS_OPERATION operation,
    _Outptr_opt_ PWSTR* resultDocument
    );
HRESULT
WINAPI
HcsGetOperationResultAndProcessInfo(
    _In_ HCS_OPERATION operation,
    _Out_opt_ HCS_PROCESS_INFORMATION* processInformation,
    _Outptr_opt_ PWSTR* resultDocument
    );
HRESULT
WINAPI
HcsWaitForOperationResult(
    _In_ HCS_OPERATION operation,
    _In_ DWORD timeoutMs,
    _Outptr_opt_ PWSTR* resultDocument
    );
HRESULT
WINAPI
HcsWaitForOperationResultAndProcessInfo(
    _In_ HCS_OPERATION operation,
    _In_ DWORD timeoutMs,
    _Out_opt_ HCS_PROCESS_INFORMATION* processInformation,
    _Outptr_opt_ PWSTR* resultDocument
    );
HRESULT
WINAPI
HcsSetOperationCallback(
    _In_ HCS_OPERATION operation,
    _In_opt_ const void* context,
    _In_ HCS_OPERATION_COMPLETION callback
    );
HRESULT
WINAPI
HcsCancelOperation(
    _In_ HCS_OPERATION operation
    );
HRESULT
WINAPI
HcsCreateComputeSystem(
    _In_ PCWSTR id,
    _In_ PCWSTR configuration,
    _In_ HCS_OPERATION operation,
    _In_opt_ const SECURITY_DESCRIPTOR* securityDescriptor,
    _Out_ HCS_SYSTEM* computeSystem
    );
HRESULT
WINAPI
HcsOpenComputeSystem(
    _In_ PCWSTR id,
    _In_ DWORD requestedAccess,
    _Out_ HCS_SYSTEM* computeSystem
    );
void
WINAPI
HcsCloseComputeSystem(
    _In_ _Post_invalid_ HCS_SYSTEM computeSystem
    );
HRESULT
WINAPI
HcsStartComputeSystem(
    _In_ HCS_SYSTEM computeSystem,
    _In_ HCS_OPERATION operation,
    _In_opt_ PCWSTR options
    );
HRESULT
WINAPI
HcsShutDownComputeSystem(
    _In_ HCS_SYSTEM computeSystem,
    _In_ HCS_OPERATION operation,
    _In_opt_ PCWSTR options
    );
HRESULT
WINAPI
HcsTerminateComputeSystem(
    _In_ HCS_SYSTEM computeSystem,
    _In_ HCS_OPERATION operation,
    _In_opt_ PCWSTR options
    );
HRESULT
WINAPI
HcsPauseComputeSystem(
    _In_ HCS_SYSTEM computeSystem,
    _In_ HCS_OPERATION operation,
    _In_opt_ PCWSTR options
    );
HRESULT
WINAPI
HcsResumeComputeSystem(
    _In_ HCS_SYSTEM computeSystem,
    _In_ HCS_OPERATION operation,
    _In_opt_ PCWSTR options
    );
HRESULT
WINAPI
HcsSaveComputeSystem(
    _In_ HCS_SYSTEM computeSystem,
    _In_ HCS_OPERATION operation,
    _In_opt_ PCWSTR options
    );
HRESULT
WINAPI
HcsGetComputeSystemProperties(
    _In_ HCS_SYSTEM computeSystem,
    _In_ HCS_OPERATION operation,
    _In_opt_ PCWSTR propertyQuery
    );
HRESULT
WINAPI
HcsModifyComputeSystem(
    _In_ HCS_SYSTEM computeSystem,
    _In_ HCS_OPERATION operation,
    _In_ PCWSTR configuration,
    _In_opt_ HANDLE identity
    );
HRESULT
WINAPI
HcsSetComputeSystemCallback(
    _In_ HCS_SYSTEM computeSystem,
    _In_ HCS_EVENT_OPTIONS callbackOptions,
    _In_opt_ const void* context,
    _In_ HCS_EVENT_CALLBACK callback
    );
HRESULT
WINAPI
HcsCreateProcess(
    _In_ HCS_SYSTEM computeSystem,
    _In_ PCWSTR processParameters,
    _In_ HCS_OPERATION operation,
    _In_opt_ const SECURITY_DESCRIPTOR* securityDescriptor,
    _Out_ HCS_PROCESS* process
    );
HRESULT
WINAPI
HcsOpenProcess(
    _In_ HCS_SYSTEM computeSystem,
    _In_ DWORD processId,
    _In_ DWORD requestedAccess,
    _Out_ HCS_PROCESS* process
    );
void
WINAPI
HcsCloseProcess(
    _In_ HCS_PROCESS process
    );
HRESULT
WINAPI
HcsTerminateProcess(
    _In_ HCS_PROCESS process,
    _In_ HCS_OPERATION operation,
    _In_opt_ PCWSTR options
    );
HRESULT
WINAPI
HcsSignalProcess(
    _In_ HCS_PROCESS process,
    _In_ HCS_OPERATION operation,
    _In_opt_ PCWSTR options
    );
HRESULT
WINAPI
HcsGetProcessInfo(
    _In_ HCS_PROCESS process,
    _In_ HCS_OPERATION operation
    );
HRESULT
WINAPI
HcsGetProcessProperties(
    _In_ HCS_PROCESS process,
    _In_ HCS_OPERATION operation,
    _In_opt_ PCWSTR propertyQuery
    );
HRESULT
WINAPI
HcsModifyProcess(
    _In_ HCS_PROCESS process,
    _In_ HCS_OPERATION operation,
    _In_ PCWSTR settings
    );
HRESULT
WINAPI
HcsSetProcessCallback(
    _In_ HCS_PROCESS process,
    _In_ HCS_EVENT_OPTIONS callbackOptions,
    _In_ void* context,
    _In_ HCS_EVENT_CALLBACK callback
    );
HRESULT
WINAPI
HcsGetServiceProperties(
    _In_opt_ PCWSTR propertyQuery,
    _Outptr_ PWSTR* result
    );
HRESULT
WINAPI
HcsModifyServiceSettings(
    _In_ PCWSTR settings,
    _Outptr_opt_ PWSTR* result
    );
HRESULT
WINAPI
HcsSubmitWerReport(
    _In_ PCWSTR settings
    );
HRESULT
WINAPI
HcsCreateEmptyGuestStateFile(
    _In_ PCWSTR guestStateFilePath
    );
HRESULT
WINAPI
HcsCreateEmptyRuntimeStateFile(
    _In_ PCWSTR runtimeStateFilePath
    );
HRESULT
WINAPI
HcsGrantVmAccess(
    _In_ PCWSTR vmId,
    _In_ PCWSTR filePath
    );
HRESULT
WINAPI
HcsRevokeVmAccess(
    _In_ PCWSTR vmId,
    _In_ PCWSTR filePath
    );
}
#endif
#pragma endregion
extern "C" {
BOOLEAN
__stdcall
IsHcsEnumerateComputeSystemsPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsCreateOperationPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsCloseOperationPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsGetOperationContextPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsSetOperationContextPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsGetComputeSystemFromOperationPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsGetProcessFromOperationPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsGetOperationTypePresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsGetOperationIdPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsGetOperationResultPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsGetOperationResultAndProcessInfoPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsWaitForOperationResultPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsWaitForOperationResultAndProcessInfoPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsSetOperationCallbackPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsCancelOperationPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsCreateComputeSystemPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsOpenComputeSystemPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsCloseComputeSystemPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsStartComputeSystemPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsShutDownComputeSystemPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsTerminateComputeSystemPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsPauseComputeSystemPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsResumeComputeSystemPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsSaveComputeSystemPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsGetComputeSystemPropertiesPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsModifyComputeSystemPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsSetComputeSystemCallbackPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsCreateProcessPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsOpenProcessPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsCloseProcessPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsTerminateProcessPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsSignalProcessPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsGetProcessInfoPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsGetProcessPropertiesPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsModifyProcessPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsSetProcessCallbackPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsGetServicePropertiesPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsModifyServiceSettingsPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsSubmitWerReportPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsCreateEmptyGuestStateFilePresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsCreateEmptyRuntimeStateFilePresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsGrantVmAccessPresent(
    VOID
    );
BOOLEAN
__stdcall
IsHcsRevokeVmAccessPresent(
    VOID
    );
}
