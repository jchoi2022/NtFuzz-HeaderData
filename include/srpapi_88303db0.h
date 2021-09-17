#include <apiset.h>
#include <apisetcconv.h>
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <apiquery.h>
#include <Windows.h>
#include <nlsp.h>
#include <nls.h>
#include <setupapi.h>
#include <cfgmgr32.h>
#include <winsafer.h>
#include <minwindef.h>
#include <minwinbase.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct HTHREAD_NETWORK_CONTEXT
{
    DWORD ThreadId;
    HANDLE ThreadContext;
} HTHREAD_NETWORK_CONTEXT;
STDAPI
SrpCreateThreadNetworkContext(
    _In_ PCWSTR enterpriseId,
    _Out_ HTHREAD_NETWORK_CONTEXT* threadNetworkContext
    );
STDAPI
SrpCloseThreadNetworkContext(
    _Inout_ HTHREAD_NETWORK_CONTEXT* threadNetworkContext
    );
STDAPI
SrpSetTokenEnterpriseId(
    _In_ HANDLE tokenHandle,
    _In_opt_ PCWSTR enterpriseId
    );
STDAPI
SrpGetEnterpriseIds(
    _In_ HANDLE tokenHandle,
    _Inout_opt_ PULONG numberOfBytes,
    _Out_writes_bytes_opt_(*numberOfBytes) PCWSTR* enterpriseIds,
    _Out_ PULONG enterpriseIdCount
    );
STDAPI
SrpEnablePermissiveModeFileEncryption(
    _In_opt_ PCWSTR enterpriseId
    );
STDAPI
SrpDisablePermissiveModeFileEncryption(
    VOID
    );
typedef enum
{
    ENTERPRISE_POLICY_NONE = 0x0,
    ENTERPRISE_POLICY_ALLOWED = 0x1,
    ENTERPRISE_POLICY_ENLIGHTENED = 0x2,
    ENTERPRISE_POLICY_EXEMPT = 0x4
} ENTERPRISE_DATA_POLICIES;
DEFINE_ENUM_FLAG_OPERATORS(ENTERPRISE_DATA_POLICIES);
STDAPI
SrpGetEnterprisePolicy(
    _In_ HANDLE tokenHandle,
    _Out_ ENTERPRISE_DATA_POLICIES* policyFlags
    );
NTSTATUS
SrpIsTokenService(
    _In_ HANDLE TokenHandle,
    _Out_ BOOLEAN* IsTokenService
    );
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
#include <appmodel.h>
STDAPI
SrpDoesPolicyAllowAppExecution(
    _In_ const PACKAGE_ID* packageId,
    _Out_ BOOL* isAllowed
    );
#endif
#pragma endregion
}
extern "C" {
BOOLEAN
__stdcall
IsSrpCreateThreadNetworkContextPresent(
    VOID
    );
BOOLEAN
__stdcall
IsSrpCloseThreadNetworkContextPresent(
    VOID
    );
BOOLEAN
__stdcall
IsSrpSetTokenEnterpriseIdPresent(
    VOID
    );
BOOLEAN
__stdcall
IsSrpGetEnterpriseIdsPresent(
    VOID
    );
BOOLEAN
__stdcall
IsSrpEnablePermissiveModeFileEncryptionPresent(
    VOID
    );
BOOLEAN
__stdcall
IsSrpDisablePermissiveModeFileEncryptionPresent(
    VOID
    );
BOOLEAN
__stdcall
IsSrpGetEnterprisePolicyPresent(
    VOID
    );
BOOLEAN
__stdcall
IsSrpIsTokenServicePresent(
    VOID
    );
BOOLEAN
__stdcall
IsSrpDoesPolicyAllowAppExecutionPresent(
    VOID
    );
}
