#include <powerbase.h>
#include <powersetting.h>
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct _GLOBAL_MACHINE_POWER_POLICY{
    ULONG Revision;
    SYSTEM_POWER_STATE LidOpenWakeAc;
    SYSTEM_POWER_STATE LidOpenWakeDc;
    ULONG BroadcastCapacityResolution;
} GLOBAL_MACHINE_POWER_POLICY, *PGLOBAL_MACHINE_POWER_POLICY;
typedef struct _GLOBAL_USER_POWER_POLICY{
    ULONG Revision;
    POWER_ACTION_POLICY PowerButtonAc;
    POWER_ACTION_POLICY PowerButtonDc;
    POWER_ACTION_POLICY SleepButtonAc;
    POWER_ACTION_POLICY SleepButtonDc;
    POWER_ACTION_POLICY LidCloseAc;
    POWER_ACTION_POLICY LidCloseDc;
    SYSTEM_POWER_LEVEL DischargePolicy[NUM_DISCHARGE_POLICIES];
    ULONG GlobalFlags;
} GLOBAL_USER_POWER_POLICY, *PGLOBAL_USER_POWER_POLICY;
typedef struct _GLOBAL_POWER_POLICY{
    GLOBAL_USER_POWER_POLICY user;
    GLOBAL_MACHINE_POWER_POLICY mach;
} GLOBAL_POWER_POLICY, *PGLOBAL_POWER_POLICY;
typedef struct _MACHINE_POWER_POLICY{
    ULONG Revision;
    SYSTEM_POWER_STATE MinSleepAc;
    SYSTEM_POWER_STATE MinSleepDc;
    SYSTEM_POWER_STATE ReducedLatencySleepAc;
    SYSTEM_POWER_STATE ReducedLatencySleepDc;
    ULONG DozeTimeoutAc;
    ULONG DozeTimeoutDc;
    ULONG DozeS4TimeoutAc;
    ULONG DozeS4TimeoutDc;
    UCHAR MinThrottleAc;
    UCHAR MinThrottleDc;
    UCHAR pad1[2];
    POWER_ACTION_POLICY OverThrottledAc;
    POWER_ACTION_POLICY OverThrottledDc;
} MACHINE_POWER_POLICY, *PMACHINE_POWER_POLICY;
typedef struct _MACHINE_PROCESSOR_POWER_POLICY {
    ULONG Revision;
    PROCESSOR_POWER_POLICY ProcessorPolicyAc;
    PROCESSOR_POWER_POLICY ProcessorPolicyDc;
} MACHINE_PROCESSOR_POWER_POLICY, *PMACHINE_PROCESSOR_POWER_POLICY;
typedef struct _USER_POWER_POLICY {
    ULONG Revision;
    POWER_ACTION_POLICY IdleAc;
    POWER_ACTION_POLICY IdleDc;
    ULONG IdleTimeoutAc;
    ULONG IdleTimeoutDc;
    UCHAR IdleSensitivityAc;
    UCHAR IdleSensitivityDc;
    UCHAR ThrottlePolicyAc;
    UCHAR ThrottlePolicyDc;
    SYSTEM_POWER_STATE MaxSleepAc;
    SYSTEM_POWER_STATE MaxSleepDc;
    ULONG Reserved[2];
    ULONG VideoTimeoutAc;
    ULONG VideoTimeoutDc;
    ULONG SpindownTimeoutAc;
    ULONG SpindownTimeoutDc;
    BOOLEAN OptimizeForPowerAc;
    BOOLEAN OptimizeForPowerDc;
    UCHAR FanThrottleToleranceAc;
    UCHAR FanThrottleToleranceDc;
    UCHAR ForcedThrottleAc;
    UCHAR ForcedThrottleDc;
} USER_POWER_POLICY, *PUSER_POWER_POLICY;
typedef struct _POWER_POLICY {
    USER_POWER_POLICY user;
    MACHINE_POWER_POLICY mach;
} POWER_POLICY, *PPOWER_POLICY;
typedef
BOOLEAN
CALLBACK
PWRSCHEMESENUMPROC_V1 (
    _In_ UINT Index,
    _In_ DWORD NameSize,
    _In_reads_bytes_(NameSize) LPTSTR Name,
    _In_ DWORD DescriptionSize,
    _In_reads_bytes_(DescriptionSize) LPTSTR Description,
    _In_ PPOWER_POLICY Policy,
    _Inout_opt_ LPARAM Context
    );
typedef
BOOLEAN
CALLBACK
PWRSCHEMESENUMPROC_V2 (
    _In_ UINT Index,
    _In_ DWORD NameSize,
    _In_reads_bytes_(NameSize) LPWSTR Name,
    _In_ DWORD DescriptionSize,
    _In_reads_bytes_(DescriptionSize) LPWSTR Description,
    _In_ PPOWER_POLICY Policy,
    _Inout_opt_ LPARAM Context
    );
typedef PWRSCHEMESENUMPROC_V2 *PWRSCHEMESENUMPROC;
STDAPI_(BOOLEAN)
GetPwrDiskSpindownRange(
    _Out_ PUINT puiMax,
    _Out_ PUINT puiMin
    );
STDAPI_(BOOLEAN)
EnumPwrSchemes(
    _In_ PWRSCHEMESENUMPROC lpfn,
    _In_ LPARAM lParam
    );
STDAPI_(BOOLEAN)
ReadGlobalPwrPolicy(
    _In_ PGLOBAL_POWER_POLICY pGlobalPowerPolicy
    );
STDAPI_(BOOLEAN)
ReadPwrScheme(
    _In_ UINT uiID,
    _Out_ PPOWER_POLICY pPowerPolicy
    );
STDAPI_(BOOLEAN)
WritePwrScheme(
    _In_ PUINT puiID,
    _In_ LPCWSTR lpszSchemeName,
    _In_opt_ LPCWSTR lpszDescription,
    _In_ PPOWER_POLICY lpScheme
    );
STDAPI_(BOOLEAN)
WriteGlobalPwrPolicy(
        _In_ PGLOBAL_POWER_POLICY pGlobalPowerPolicy
    );
STDAPI_(BOOLEAN)
DeletePwrScheme(
        _In_ UINT uiID
        );
STDAPI_(BOOLEAN)
GetActivePwrScheme(
        _Out_ PUINT puiID
    );
STDAPI_(BOOLEAN)
SetActivePwrScheme(
    _In_ UINT uiID,
    _In_opt_ PGLOBAL_POWER_POLICY pGlobalPowerPolicy,
    _In_opt_ PPOWER_POLICY pPowerPolicy
    );
STDAPI_(BOOLEAN)
IsPwrSuspendAllowed(
        VOID
        );
STDAPI_(BOOLEAN)
IsPwrHibernateAllowed(
        VOID
        );
STDAPI_(BOOLEAN)
IsPwrShutdownAllowed(
        VOID
        );
STDAPI_(BOOLEAN)
IsAdminOverrideActive(
    _In_ PADMINISTRATOR_POWER_POLICY papp
    );
STDAPI_(BOOLEAN)
SetSuspendState(
    _In_ BOOLEAN bHibernate,
    _In_ BOOLEAN bForce,
    _In_ BOOLEAN bWakeupEventsDisabled
    );
STDAPI_(BOOLEAN)
GetCurrentPowerPolicies(
    _Out_ PGLOBAL_POWER_POLICY pGlobalPowerPolicy,
    _Out_ PPOWER_POLICY pPowerPolicy
    );
STDAPI_(BOOLEAN)
CanUserWritePwrScheme(
        VOID
        );
STDAPI_(BOOLEAN)
ReadProcessorPwrScheme(
    _In_ UINT uiID,
    _Out_ PMACHINE_PROCESSOR_POWER_POLICY pMachineProcessorPowerPolicy
    );
STDAPI_(BOOLEAN)
WriteProcessorPwrScheme(
    _In_ UINT uiID,
    _In_ PMACHINE_PROCESSOR_POWER_POLICY pMachineProcessorPowerPolicy
    );
STDAPI_(BOOLEAN)
ValidatePowerPolicies(
    _Inout_opt_ PGLOBAL_POWER_POLICY pGlobalPowerPolicy,
    _Inout_opt_ PPOWER_POLICY pPowerPolicy
    );
typedef enum _POWER_DATA_ACCESSOR {
        ACCESS_AC_POWER_SETTING_INDEX = 0,
        ACCESS_DC_POWER_SETTING_INDEX,
        ACCESS_FRIENDLY_NAME,
        ACCESS_DESCRIPTION,
        ACCESS_POSSIBLE_POWER_SETTING,
        ACCESS_POSSIBLE_POWER_SETTING_FRIENDLY_NAME,
        ACCESS_POSSIBLE_POWER_SETTING_DESCRIPTION,
        ACCESS_DEFAULT_AC_POWER_SETTING,
        ACCESS_DEFAULT_DC_POWER_SETTING,
        ACCESS_POSSIBLE_VALUE_MIN,
        ACCESS_POSSIBLE_VALUE_MAX,
        ACCESS_POSSIBLE_VALUE_INCREMENT,
        ACCESS_POSSIBLE_VALUE_UNITS,
        ACCESS_ICON_RESOURCE,
        ACCESS_DEFAULT_SECURITY_DESCRIPTOR,
        ACCESS_ATTRIBUTES,
        ACCESS_SCHEME,
        ACCESS_SUBGROUP,
        ACCESS_INDIVIDUAL_SETTING,
        ACCESS_ACTIVE_SCHEME,
        ACCESS_CREATE_SCHEME,
        ACCESS_AC_POWER_SETTING_MAX,
        ACCESS_DC_POWER_SETTING_MAX,
        ACCESS_AC_POWER_SETTING_MIN,
        ACCESS_DC_POWER_SETTING_MIN,
        ACCESS_PROFILE,
        ACCESS_OVERLAY_SCHEME,
        ACCESS_ACTIVE_OVERLAY_SCHEME,
} POWER_DATA_ACCESSOR, *PPOWER_DATA_ACCESSOR;
typedef
ULONG
CALLBACK
DEVICE_NOTIFY_CALLBACK_ROUTINE (
    _In_opt_ PVOID Context,
    _In_ ULONG Type,
    _In_ PVOID Setting
    );
typedef DEVICE_NOTIFY_CALLBACK_ROUTINE* PDEVICE_NOTIFY_CALLBACK_ROUTINE;
typedef struct _DEVICE_NOTIFY_SUBSCRIBE_PARAMETERS {
    PDEVICE_NOTIFY_CALLBACK_ROUTINE Callback;
    PVOID Context;
} DEVICE_NOTIFY_SUBSCRIBE_PARAMETERS, *PDEVICE_NOTIFY_SUBSCRIBE_PARAMETERS;
STDAPI_(BOOLEAN)
PowerIsSettingRangeDefined (
    _In_opt_ CONST GUID *SubKeyGuid OPTIONAL,
    _In_opt_ CONST GUID *SettingGuid OPTIONAL
    );
STDAPI_(DWORD)
PowerSettingAccessCheckEx (
    _In_ POWER_DATA_ACCESSOR AccessFlags,
    _In_opt_ CONST GUID *PowerGuid,
    _In_ REGSAM AccessType
    );
STDAPI_(DWORD)
PowerSettingAccessCheck (
    _In_ POWER_DATA_ACCESSOR AccessFlags,
    _In_opt_ CONST GUID *PowerGuid
    );
STDAPI_(DWORD)
PowerReadACValueIndex (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SchemeGuid,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _Out_ LPDWORD AcValueIndex
    );
STDAPI_(DWORD)
PowerReadDCValueIndex (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SchemeGuid,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _Out_ LPDWORD DcValueIndex
    );
STDAPI_(DWORD)
PowerReadFriendlyName (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SchemeGuid,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _Out_writes_bytes_opt_(*BufferSize) PUCHAR Buffer,
    _Inout_ LPDWORD BufferSize
    );
STDAPI_(DWORD)
PowerReadDescription (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SchemeGuid,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _Out_writes_bytes_opt_(*BufferSize) PUCHAR Buffer,
    _Inout_ LPDWORD BufferSize
    );
STDAPI_(DWORD)
PowerReadPossibleValue (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _Out_opt_ PULONG Type,
    _In_ ULONG PossibleSettingIndex,
    _Out_writes_bytes_opt_(*BufferSize) PUCHAR Buffer,
    _Inout_ LPDWORD BufferSize
    );
STDAPI_(DWORD)
PowerReadPossibleFriendlyName (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _In_ ULONG PossibleSettingIndex,
    _Out_writes_bytes_opt_(*BufferSize) PUCHAR Buffer,
    _Inout_ LPDWORD BufferSize
    );
STDAPI_(DWORD)
PowerReadPossibleDescription (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _In_ ULONG PossibleSettingIndex,
    _Out_writes_bytes_opt_(*BufferSize) PUCHAR Buffer,
    _Inout_ LPDWORD BufferSize
    );
STDAPI_(DWORD)
PowerReadValueMin (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _Out_ LPDWORD ValueMinimum
    );
STDAPI_(DWORD)
PowerReadValueMax (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _Out_ LPDWORD ValueMaximum
    );
STDAPI_(DWORD)
PowerReadValueIncrement (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _Out_ LPDWORD ValueIncrement
    );
STDAPI_(DWORD)
PowerReadValueUnitsSpecifier (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _Out_writes_bytes_opt_(*BufferSize) UCHAR *Buffer,
    _Inout_ LPDWORD BufferSize
    );
STDAPI_(DWORD)
PowerReadACDefaultIndex (
    _In_opt_ HKEY RootPowerKey,
    _In_ CONST GUID *SchemePersonalityGuid,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid OPTIONAL,
    _In_ CONST GUID *PowerSettingGuid,
    _Out_ LPDWORD AcDefaultIndex
    );
STDAPI_(DWORD)
PowerReadDCDefaultIndex (
    _In_opt_ HKEY RootPowerKey,
    _In_ CONST GUID *SchemePersonalityGuid,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_ CONST GUID *PowerSettingGuid,
    _Out_ LPDWORD DcDefaultIndex
    );
STDAPI_(DWORD)
PowerReadIconResourceSpecifier (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SchemeGuid,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _Out_writes_bytes_opt_(*BufferSize) PUCHAR Buffer,
    _Inout_ LPDWORD BufferSize
    );
STDAPI_(DWORD)
PowerReadSettingAttributes (
    _In_opt_ CONST GUID *SubGroupGuid,
    _In_opt_ CONST GUID *PowerSettingGuid
    );
STDAPI_(DWORD)
PowerWriteFriendlyName (
    _In_opt_ HKEY RootPowerKey,
    _In_ CONST GUID *SchemeGuid,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _In_reads_bytes_(BufferSize) UCHAR *Buffer,
    _In_ DWORD BufferSize
    );
STDAPI_(DWORD)
PowerWriteDescription (
    _In_opt_ HKEY RootPowerKey,
    _In_ CONST GUID *SchemeGuid,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _In_reads_bytes_(BufferSize) UCHAR *Buffer,
    _In_ DWORD BufferSize
    );
STDAPI_(DWORD)
PowerWritePossibleValue (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _In_ ULONG Type,
    _In_ ULONG PossibleSettingIndex,
    _In_reads_bytes_(BufferSize) UCHAR *Buffer,
    _In_ DWORD BufferSize
    );
STDAPI_(DWORD)
PowerWritePossibleFriendlyName (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _In_ ULONG PossibleSettingIndex,
    _In_reads_bytes_(BufferSize) UCHAR *Buffer,
    _In_ DWORD BufferSize
    );
STDAPI_(DWORD)
PowerWritePossibleDescription (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _In_ ULONG PossibleSettingIndex,
    _In_reads_bytes_(BufferSize) UCHAR *Buffer,
    _In_ DWORD BufferSize
    );
STDAPI_(DWORD)
PowerWriteValueMin (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _In_ DWORD ValueMinimum
    );
STDAPI_(DWORD)
PowerWriteValueMax (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _In_ DWORD ValueMaximum
    );
STDAPI_(DWORD)
PowerWriteValueIncrement (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _In_ DWORD ValueIncrement
    );
STDAPI_(DWORD)
PowerWriteValueUnitsSpecifier (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _In_reads_bytes_(BufferSize) UCHAR *Buffer,
    _In_ DWORD BufferSize
    );
STDAPI_(DWORD)
PowerWriteACDefaultIndex (
    _In_opt_ HKEY RootSystemPowerKey,
    _In_ CONST GUID *SchemePersonalityGuid,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_ CONST GUID *PowerSettingGuid,
    _In_ DWORD DefaultAcIndex
    );
STDAPI_(DWORD)
PowerWriteDCDefaultIndex (
    _In_opt_ HKEY RootSystemPowerKey,
    _In_ CONST GUID *SchemePersonalityGuid,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_ CONST GUID *PowerSettingGuid,
    _In_ DWORD DefaultDcIndex
    );
STDAPI_(DWORD)
PowerWriteIconResourceSpecifier (
    _In_opt_ HKEY RootPowerKey,
    _In_ CONST GUID *SchemeGuid,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _In_reads_bytes_(BufferSize) UCHAR *Buffer,
    _In_ DWORD BufferSize
    );
STDAPI_(DWORD)
PowerWriteSettingAttributes (
    _In_opt_ CONST GUID *SubGroupGuid,
    _In_opt_ CONST GUID *PowerSettingGuid,
    _In_ DWORD Attributes
    );
STDAPI_(DWORD)
PowerDuplicateScheme (
    _In_opt_ HKEY RootPowerKey,
    _In_ const GUID *SourceSchemeGuid,
    _Inout_ GUID **DestinationSchemeGuid
    );
STDAPI_(DWORD)
PowerImportPowerScheme (
    _In_opt_ HKEY RootPowerKey,
    _In_ LPCWSTR ImportFileNamePath,
    _Inout_ GUID **DestinationSchemeGuid
    );
STDAPI_(DWORD)
PowerDeleteScheme (
    _In_opt_ HKEY RootPowerKey,
    _In_ CONST GUID *SchemeGuid
    );
STDAPI_(DWORD)
PowerRemovePowerSetting (
   _In_ CONST GUID *PowerSettingSubKeyGuid,
   _In_ CONST GUID *PowerSettingGuid
   );
STDAPI_(DWORD)
PowerCreateSetting (
    _In_opt_ HKEY RootSystemPowerKey,
    _In_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_ CONST GUID *PowerSettingGuid
    );
STDAPI_(DWORD)
PowerCreatePossibleSetting (
    _In_opt_ HKEY RootSystemPowerKey,
    _In_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_ CONST GUID *PowerSettingGuid,
    _In_ ULONG PossibleSettingIndex
    );
STDAPI_(DWORD)
PowerEnumerate (
    _In_opt_ HKEY RootPowerKey,
    _In_opt_ CONST GUID *SchemeGuid,
    _In_opt_ CONST GUID *SubGroupOfPowerSettingsGuid,
    _In_ POWER_DATA_ACCESSOR AccessFlags,
    _In_ ULONG Index,
    _Out_writes_bytes_opt_(*BufferSize) UCHAR *Buffer,
    _Inout_ DWORD *BufferSize
    );
STDAPI_(DWORD)
PowerOpenUserPowerKey (
    _Out_ HKEY *phUserPowerKey,
    _In_ REGSAM Access,
    _In_ BOOL OpenExisting
    );
STDAPI_(DWORD)
PowerOpenSystemPowerKey (
    _Out_ HKEY *phSystemPowerKey,
    _In_ REGSAM Access,
    _In_ BOOL OpenExisting
    );
STDAPI_(DWORD)
PowerCanRestoreIndividualDefaultPowerScheme (
    _In_ CONST GUID *SchemeGuid
    );
STDAPI_(DWORD)
PowerRestoreIndividualDefaultPowerScheme (
    _In_ CONST GUID *SchemeGuid
    );
STDAPI_(DWORD)
PowerRestoreDefaultPowerSchemes(
    VOID
    );
STDAPI_(DWORD)
PowerReplaceDefaultPowerSchemes(
    VOID
    );
STDAPI_(POWER_PLATFORM_ROLE)
PowerDeterminePlatformRole(
    VOID
    );
STDAPI_(BOOLEAN)
DevicePowerEnumDevices(
    _In_ ULONG QueryIndex,
    _In_ ULONG QueryInterpretationFlags,
    _In_ ULONG QueryFlags,
    _Out_writes_bytes_opt_(*pBufferSize) PBYTE pReturnBuffer,
    _Inout_ PULONG pBufferSize
    );
STDAPI_(DWORD)
DevicePowerSetDeviceState(
    _In_ LPCWSTR DeviceDescription,
    _In_ ULONG SetFlags,
    _In_opt_ PVOID SetData
    );
STDAPI_(BOOLEAN)
DevicePowerOpen(
    _In_opt_ ULONG DebugMask
    );
STDAPI_(BOOLEAN)
DevicePowerClose(
    VOID
    );
typedef struct _THERMAL_EVENT {
    ULONG Version;
    ULONG Size;
    ULONG Type;
    ULONG Temperature;
    ULONG TripPointTemperature;
    LPWSTR Initiator;
} THERMAL_EVENT, *PTHERMAL_EVENT;
STDAPI_(DWORD)
PowerReportThermalEvent (
    _In_ PTHERMAL_EVENT Event
    );
}
#endif
#pragma endregion
