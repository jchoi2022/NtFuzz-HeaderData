       
#include <apiset.h>
#include <apisetcconv.h>
#include <nt.h>
#include <ntrtl.h>
#include <nturtl.h>
#include <wtypes.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SERVER)
BOOL
WslIsDistributionRegistered(
    _In_ PCWSTR distributionName
    );
HRESULT
WslRegisterDistribution(
    _In_ PCWSTR distributionName,
    _In_ PCWSTR tarGzFilename
    );
HRESULT
WslUnregisterDistribution(
    _In_ PCWSTR distributionName
    );
typedef enum
{
    WSL_DISTRIBUTION_FLAGS_NONE = 0x0,
    WSL_DISTRIBUTION_FLAGS_ENABLE_INTEROP = 0x1,
    WSL_DISTRIBUTION_FLAGS_APPEND_NT_PATH = 0x2,
    WSL_DISTRIBUTION_FLAGS_ENABLE_DRIVE_MOUNTING = 0x4
} WSL_DISTRIBUTION_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(WSL_DISTRIBUTION_FLAGS);
HRESULT
WslConfigureDistribution(
    _In_ PCWSTR distributionName,
    _In_ ULONG defaultUID,
    _In_ WSL_DISTRIBUTION_FLAGS wslDistributionFlags
    );
HRESULT
WslGetDistributionConfiguration(
    _In_ PCWSTR distributionName,
    _Out_ ULONG* distributionVersion,
    _Out_ ULONG* defaultUID,
    _Out_ WSL_DISTRIBUTION_FLAGS* wslDistributionFlags,
    _Outptr_result_buffer_(*defaultEnvironmentVariableCount) PSTR** defaultEnvironmentVariables,
    _Out_ ULONG* defaultEnvironmentVariableCount
    );
HRESULT
WslLaunchInteractive(
    _In_ PCWSTR distributionName,
    _In_opt_ PCWSTR command,
    _In_ BOOL useCurrentWorkingDirectory,
    _Out_ DWORD* exitCode
    );
HRESULT
WslLaunch(
    _In_ PCWSTR distributionName,
    _In_opt_ PCWSTR command,
    _In_ BOOL useCurrentWorkingDirectory,
    _In_ HANDLE stdIn,
    _In_ HANDLE stdOut,
    _In_ HANDLE stdErr,
    _Out_ HANDLE* process
    );
#endif
#pragma endregion
}
