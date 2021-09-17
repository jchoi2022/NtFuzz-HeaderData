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
DWORD
WINAPI
PowerReadACValue(
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID* SchemeGuid,
    _In_opt_ CONST GUID* SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID* PowerSettingGuid,
    _Out_opt_ PULONG Type,
    _Out_writes_bytes_opt_(*BufferSize) LPBYTE Buffer,
    _Inout_opt_ LPDWORD BufferSize
    );
DWORD
WINAPI
PowerReadDCValue(
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID* SchemeGuid,
    _In_opt_ CONST GUID* SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID* PowerSettingGuid,
    _Out_opt_ PULONG Type,
    _Out_writes_bytes_opt_(*BufferSize) PUCHAR Buffer,
    _Inout_ LPDWORD BufferSize
    );
DWORD
WINAPI
PowerWriteACValueIndex(
    _In_opt_ HKEY RootPowerKey,
    _In_ CONST GUID* SchemeGuid,
    _In_opt_ CONST GUID* SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID* PowerSettingGuid,
    _In_ DWORD AcValueIndex
    );
DWORD
WINAPI
PowerWriteDCValueIndex(
    _In_opt_ HKEY RootPowerKey,
    _In_ CONST GUID* SchemeGuid,
    _In_opt_ CONST GUID* SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID* PowerSettingGuid,
    _In_ DWORD DcValueIndex
    );
DWORD
WINAPI
PowerGetActiveScheme(
    _In_opt_ HKEY UserRootPowerKey,
    _Outptr_ GUID** ActivePolicyGuid
    );
DWORD
WINAPI
PowerSetActiveScheme(
    _In_opt_ HKEY UserRootPowerKey,
    _In_opt_ CONST GUID* SchemeGuid
    );
DWORD
WINAPI
PowerSettingRegisterNotification(
    _In_ LPCGUID SettingGuid,
    _In_ DWORD Flags,
    _In_ HANDLE Recipient,
    _Out_ PHPOWERNOTIFY RegistrationHandle
    );
DWORD
WINAPI
PowerSettingUnregisterNotification(
    _Inout_ HPOWERNOTIFY RegistrationHandle
    );
typedef enum EFFECTIVE_POWER_MODE {
    EffectivePowerModeBatterySaver,
    EffectivePowerModeBetterBattery,
    EffectivePowerModeBalanced,
    EffectivePowerModeHighPerformance,
    EffectivePowerModeMaxPerformance,
    EffectivePowerModeGameMode,
    EffectivePowerModeMixedReality,
} EFFECTIVE_POWER_MODE;
typedef _Function_class_(EFFECTIVE_POWER_MODE_CALLBACK)
VOID
WINAPI
EFFECTIVE_POWER_MODE_CALLBACK (
    _In_ EFFECTIVE_POWER_MODE Mode,
    _In_opt_ VOID *Context
    );
_Must_inspect_result_
HRESULT
WINAPI
PowerRegisterForEffectivePowerModeNotifications(
    _In_ ULONG Version,
    _In_ EFFECTIVE_POWER_MODE_CALLBACK* Callback,
    _In_opt_ VOID* Context,
    _Outptr_ VOID** RegistrationHandle
    );
HRESULT
WINAPI
PowerUnregisterFromEffectivePowerModeNotifications(
    _In_ VOID* RegistrationHandle
    );
#endif
#pragma endregion
}
