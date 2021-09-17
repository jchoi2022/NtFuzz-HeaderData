#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
                                            WLDP_LOCKDOWN_CONFIG_CI_FLAG | \
                                            WLDP_LOCKDOWN_CONFIG_CI_AUDIT_FLAG | \
                                            WLDP_LOCKDOWN_UMCIENFORCE_FLAG | \
                                            WLDP_LOCKDOWN_AUDIT_FLAG | \
                                            WLDP_LOCKDOWN_EXCLUSION_FLAG)
                                            WLDP_LOCKDOWN_UMCIENFORCE_FLAG | \
                                            WLDP_LOCKDOWN_EXCLUSION_FLAG)
                                            WLDP_LOCKDOWN_UMCIENFORCE_FLAG | \
                                            WLDP_LOCKDOWN_AUDIT_FLAG | \
                                            WLDP_LOCKDOWN_EXCLUSION_FLAG)
                                            WLDP_LOCKDOWN_UMCIENFORCE_FLAG)
                                            WLDP_LOCKDOWN_CONFIG_CI_FLAG | \
                                            WLDP_LOCKDOWN_UMCIENFORCE_FLAG)
                                            WLDP_LOCKDOWN_CONFIG_CI_FLAG | \
                                            WLDP_LOCKDOWN_CONFIG_CI_AUDIT_FLAG | \
                                            WLDP_LOCKDOWN_UMCIENFORCE_FLAG)
                                            WLDP_LOCKDOWN_UMCIENFORCE_FLAG)
                                            WLDP_LOCKDOWN_UMCIENFORCE_FLAG | \
                                            WLDP_LOCKDOWN_AUDIT_FLAG | \
                                            WLDP_LOCKDOWN_EXCLUSION_FLAG)
                                            WLDP_LOCKDOWN_UMCIENFORCE_FLAG | \
                                            WLDP_LOCKDOWN_AUDIT_FLAG | \
                                            WLDP_LOCKDOWN_EXCLUSION_FLAG)
                                            WLDP_LOCKDOWN_UMCIENFORCE_FLAG | \
                                            WLDP_LOCKDOWN_AUDIT_FLAG | \
                                            WLDP_LOCKDOWN_EXCLUSION_FLAG)
                                            WLDP_LOCKDOWN_CONFIG_CI_FLAG | \
                                            WLDP_LOCKDOWN_UMCIENFORCE_FLAG)
                                            WLDP_LOCKDOWN_CONFIG_CI_FLAG | \
                                            WLDP_LOCKDOWN_CONFIG_CI_AUDIT_FLAG | \
                                            WLDP_LOCKDOWN_UMCIENFORCE_FLAG)
typedef enum WLDP_HOST
{
    WLDP_HOST_RUNDLL32 = 0,
    WLDP_HOST_SVCHOST,
    WLDP_HOST_MAX
} WLDP_HOST;
typedef enum WLDP_HOST_ID
{
    WLDP_HOST_ID_UNKNOWN = 0,
    WLDP_HOST_ID_GLOBAL,
    WLDP_HOST_ID_VBA,
    WLDP_HOST_ID_WSH,
    WLDP_HOST_ID_POWERSHELL,
    WLDP_HOST_ID_IE,
    WLDP_HOST_ID_MSI,
    WLDP_HOST_ID_ALL,
    WLDP_HOST_ID_MAX
} WLDP_HOST_ID;
typedef enum DECISION_LOCATION
{
    DECISION_LOCATION_REFRESH_GLOBAL_DATA = 0,
    DECISION_LOCATION_PARAMETER_VALIDATION,
    DECISION_LOCATION_AUDIT,
    DECISION_LOCATION_FAILED_CONVERT_GUID,
    DECISION_LOCATION_ENTERPRISE_DEFINED_CLASS_ID,
    DECISION_LOCATION_GLOBAL_BUILT_IN_LIST,
    DECISION_LOCATION_PROVIDER_BUILT_IN_LIST,
    DECISION_LOCATION_ENFORCE_STATE_LIST,
    DECISION_LOCATION_NOT_FOUND,
    DECISION_LOCATION_UNKNOWN
} DECISION_LOCATION;
typedef enum WLDP_KEY
{
    KEY_UNKNOWN = 0,
    KEY_OVERRIDE,
    KEY_ALL_KEYS
} WLDP_KEY;
typedef enum VALUENAME
{
    VALUENAME_UNKNOWN = 0,
    VALUENAME_ENTERPRISE_DEFINED_CLASS_ID,
    VALUENAME_BUILT_IN_LIST
} VALUENAME;
typedef enum WLDP_WINDOWS_LOCKDOWN_MODE
{
    WLDP_WINDOWS_LOCKDOWN_MODE_UNLOCKED = 0,
    WLDP_WINDOWS_LOCKDOWN_MODE_TRIAL,
    WLDP_WINDOWS_LOCKDOWN_MODE_LOCKED,
    WLDP_WINDOWS_LOCKDOWN_MODE_MAX,
} WLDP_WINDOWS_LOCKDOWN_MODE, *PWLDP_WINDOWS_LOCKDOWN_MODE;
typedef enum WLDP_WINDOWS_LOCKDOWN_RESTRICTION
{
    WLDP_WINDOWS_LOCKDOWN_RESTRICTION_NONE = 0,
    WLDP_WINDOWS_LOCKDOWN_RESTRICTION_NOUNLOCK,
    WLDP_WINDOWS_LOCKDOWN_RESTRICTION_NOUNLOCK_PERMANENT,
    WLDP_WINDOWS_LOCKDOWN_RESTRICTION_MAX,
} WLDP_WINDOWS_LOCKDOWN_RESTRICTION, *PWLDP_WINDOWS_LOCKDOWN_RESTRICTION;
typedef struct WLDP_HOST_INFORMATION
{
    DWORD dwRevision;
    WLDP_HOST_ID dwHostId;
    PCWSTR szSource;
    HANDLE hSource;
} WLDP_HOST_INFORMATION, *PWLDP_HOST_INFORMATION;
STDAPI
WldpGetLockdownPolicy(
    _In_opt_ PWLDP_HOST_INFORMATION hostInformation,
    _Out_ PDWORD lockdownState,
    _In_ DWORD lockdownFlags
    );
STDAPI
WldpIsClassInApprovedList(
    _In_ REFCLSID classID,
    _In_ PWLDP_HOST_INFORMATION hostInformation,
    _Out_ PBOOL isApproved,
    _In_ DWORD optionalFlags
    );
STDAPI
WldpSetDynamicCodeTrust(
    _In_ HANDLE fileHandle
    );
typedef HRESULT(WINAPI *PWLDP_SETDYNAMICCODETRUST_API)(_In_ HANDLE hFileHandle);
STDAPI
WldpIsDynamicCodePolicyEnabled(
    _Out_ PBOOL isEnabled
    );
typedef HRESULT(WINAPI *PWLDP_ISDYNAMICCODEPOLICYENABLED_API)(_Out_ PBOOL pbEnabled);
STDAPI
WldpQueryDynamicCodeTrust(
    _When_(baseImage != NULL, _In_opt_)
    _When_(baseImage == NULL, _In_)
    HANDLE fileHandle,
    _When_(fileHandle == NULL, _In_reads_bytes_opt_(imageSize))
    _When_(fileHandle != NULL, _In_reads_bytes_(imageSize))
    PVOID baseImage,
    _In_ ULONG imageSize
    );
typedef HRESULT(WINAPI *PWLDP_QUERYDYNAMICODETRUST_API)(
    _When_(baseImage == NULL, _In_)
    HANDLE fileHandle,
    _When_(fileHandle == NULL, _In_reads_bytes_opt_(imageSize))
    _When_(fileHandle != NULL, _In_reads_bytes_(imageSize))
    PVOID baseImage,
    _In_ ULONG imageSize
    );
HRESULT
WINAPI
WldpQueryWindowsLockdownMode(
    _Out_ PWLDP_WINDOWS_LOCKDOWN_MODE lockdownMode
    );
typedef HRESULT(WINAPI *PWLDP_QUERYWINDOWSLOCKDOWNMODE_API)(
    _Out_ PWLDP_WINDOWS_LOCKDOWN_MODE lockdownMode);
HRESULT
WINAPI
WldpQueryWindowsLockdownRestriction(
    _Out_ PWLDP_WINDOWS_LOCKDOWN_RESTRICTION LockdownRestriction
);
typedef HRESULT(WINAPI *PWLDP_QUERYWINDOWSLOCKDOWNRESTRICTION_API)(
    _Out_ PWLDP_WINDOWS_LOCKDOWN_RESTRICTION LockdownRestriction);
HRESULT
WINAPI
WldpSetWindowsLockdownRestriction(
    _In_ WLDP_WINDOWS_LOCKDOWN_RESTRICTION LockdownRestriction
    );
typedef HRESULT(WINAPI *PWLDP_SETWINDOWSLOCKDOWNRESTRICTION_API)(
    _In_ WLDP_WINDOWS_LOCKDOWN_RESTRICTION LockdownRestriction);
HRESULT
WINAPI
WldpIsAppApprovedByPolicy(
    _In_ PCWSTR PackageFamilyName,
    _In_ ULONGLONG PackageVersion
);
typedef HRESULT(WINAPI *PWLDP_WLDPISAPPAPPROVEDBYPOLICY_API)(
    _In_ PCWSTR PackageFamilyName,
    _In_ ULONGLONG PackageVersion
    );
#endif
#pragma endregion
