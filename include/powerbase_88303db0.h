#include <apiset.h>
#include <apisetcconv.h>
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <minwindef.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef PVOID HPOWERNOTIFY, *PHPOWERNOTIFY;
NTSTATUS
WINAPI
CallNtPowerInformation(
    _In_ POWER_INFORMATION_LEVEL InformationLevel,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength
    );
BOOLEAN
WINAPI
GetPwrCapabilities(
    _Out_ PSYSTEM_POWER_CAPABILITIES lpspc
    );
POWER_PLATFORM_ROLE
WINAPI
PowerDeterminePlatformRoleEx(
    _In_ ULONG Version
    );
DWORD
WINAPI
PowerRegisterSuspendResumeNotification(
    _In_ DWORD Flags,
    _In_ HANDLE Recipient,
    _Out_ PHPOWERNOTIFY RegistrationHandle
    );
DWORD
WINAPI
PowerUnregisterSuspendResumeNotification(
    _Inout_ HPOWERNOTIFY RegistrationHandle
    );
#endif
#pragma endregion
}
