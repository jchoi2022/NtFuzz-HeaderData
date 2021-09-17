       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
extern "C" {
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct _SYSTEM_INFO {
    union {
        DWORD dwOemId;
        struct {
            WORD wProcessorArchitecture;
            WORD wReserved;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
    DWORD dwPageSize;
    LPVOID lpMinimumApplicationAddress;
    LPVOID lpMaximumApplicationAddress;
    DWORD_PTR dwActiveProcessorMask;
    DWORD dwNumberOfProcessors;
    DWORD dwProcessorType;
    DWORD dwAllocationGranularity;
    WORD wProcessorLevel;
    WORD wProcessorRevision;
} SYSTEM_INFO, *LPSYSTEM_INFO;
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct _MEMORYSTATUSEX {
    DWORD dwLength;
    DWORD dwMemoryLoad;
    DWORDLONG ullTotalPhys;
    DWORDLONG ullAvailPhys;
    DWORDLONG ullTotalPageFile;
    DWORDLONG ullAvailPageFile;
    DWORDLONG ullTotalVirtual;
    DWORDLONG ullAvailVirtual;
    DWORDLONG ullAvailExtendedVirtual;
} MEMORYSTATUSEX, *LPMEMORYSTATUSEX;
WINBASEAPI
BOOL
WINAPI
GlobalMemoryStatusEx(
    _Out_ LPMEMORYSTATUSEX lpBuffer
    );
WINBASEAPI
VOID
WINAPI
GetSystemInfo(
    _Out_ LPSYSTEM_INFO lpSystemInfo
    );
WINBASEAPI
VOID
WINAPI
GetSystemTime(
    _Out_ LPSYSTEMTIME lpSystemTime
    );
WINBASEAPI
VOID
WINAPI
GetSystemTimeAsFileTime(
    _Out_ LPFILETIME lpSystemTimeAsFileTime
    );
WINBASEAPI
VOID
WINAPI
GetLocalTime(
    _Out_ LPSYSTEMTIME lpSystemTime
    );
WINBASEAPI
BOOL
WINAPI
GetSystemLeapSecondInformation(
    _Out_ PBOOL Enabled,
    _Out_ PDWORD Flags
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NOT_BUILD_WINDOWS_DEPRECATE
WINBASEAPI
__drv_preferredFunction("IsWindows*", "Deprecated. Use VerifyVersionInfo* or IsWindows* macros from VersionHelpers.")
DWORD
WINAPI
GetVersion(
    VOID
    );
WINBASEAPI
BOOL
WINAPI
SetLocalTime(
    _In_ CONST SYSTEMTIME* lpSystemTime
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
__drv_preferredFunction("GetTickCount64", "GetTickCount overflows roughly every 49 days.  Code that does not take that into account can loop indefinitely.  GetTickCount64 operates on 64 bit values and does not have that problem")
WINBASEAPI
DWORD
WINAPI
GetTickCount(
    VOID
    );
WINBASEAPI
ULONGLONG
WINAPI
GetTickCount64(
    VOID
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
GetSystemTimeAdjustment(
    _Out_ PDWORD lpTimeAdjustment,
    _Out_ PDWORD lpTimeIncrement,
    _Out_ PBOOL lpTimeAdjustmentDisabled
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
GetSystemTimeAdjustmentPrecise(
    _Out_ PDWORD64 lpTimeAdjustment,
    _Out_ PDWORD64 lpTimeIncrement,
    _Out_ PBOOL lpTimeAdjustmentDisabled
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Success_(return != 0 && return < uSize)
UINT
WINAPI
GetSystemDirectoryA(
    _Out_writes_to_opt_(uSize,return + 1) LPSTR lpBuffer,
    _In_ UINT uSize
    );
WINBASEAPI
_Success_(return != 0 && return < uSize)
UINT
WINAPI
GetSystemDirectoryW(
    _Out_writes_to_opt_(uSize,return + 1) LPWSTR lpBuffer,
    _In_ UINT uSize
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Must_inspect_result_
_Success_(return != 0 && return < uSize)
UINT
WINAPI
GetWindowsDirectoryA(
    _Out_writes_to_opt_(uSize,return + 1) LPSTR lpBuffer,
    _In_ UINT uSize
    );
WINBASEAPI
_Must_inspect_result_
_Success_(return != 0 && return < uSize)
UINT
WINAPI
GetWindowsDirectoryW(
    _Out_writes_to_opt_(uSize,return + 1) LPWSTR lpBuffer,
    _In_ UINT uSize
    );
WINBASEAPI
_Success_(return != 0 && return < uSize)
UINT
WINAPI
GetSystemWindowsDirectoryA(
    _Out_writes_to_opt_(uSize,return + 1) LPSTR lpBuffer,
    _In_ UINT uSize
    );
WINBASEAPI
_Success_(return != 0 && return < uSize)
UINT
WINAPI
GetSystemWindowsDirectoryW(
    _Out_writes_to_opt_(uSize,return + 1) LPWSTR lpBuffer,
    _In_ UINT uSize
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef enum _COMPUTER_NAME_FORMAT {
    ComputerNameNetBIOS,
    ComputerNameDnsHostname,
    ComputerNameDnsDomain,
    ComputerNameDnsFullyQualified,
    ComputerNamePhysicalNetBIOS,
    ComputerNamePhysicalDnsHostname,
    ComputerNamePhysicalDnsDomain,
    ComputerNamePhysicalDnsFullyQualified,
    ComputerNameMax
} COMPUTER_NAME_FORMAT ;
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
GetComputerNameExA(
    _In_ COMPUTER_NAME_FORMAT NameType,
    _Out_writes_to_opt_(*nSize,*nSize + 1) LPSTR lpBuffer,
    _Inout_ LPDWORD nSize
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
GetComputerNameExW(
    _In_ COMPUTER_NAME_FORMAT NameType,
    _Out_writes_to_opt_(*nSize,*nSize + 1) LPWSTR lpBuffer,
    _Inout_ LPDWORD nSize
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
SetComputerNameExW(
    _In_ COMPUTER_NAME_FORMAT NameType,
    _In_ LPCWSTR lpBuffer
    );
WINBASEAPI
BOOL
WINAPI
SetSystemTime(
    _In_ CONST SYSTEMTIME* lpSystemTime
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
NOT_BUILD_WINDOWS_DEPRECATE
WINBASEAPI
__drv_preferredFunction("IsWindows*", "Deprecated. Use VerifyVersionInfo* or IsWindows* macros from VersionHelpers.")
BOOL
WINAPI
GetVersionExA(
    _Inout_ LPOSVERSIONINFOA lpVersionInformation
    );
NOT_BUILD_WINDOWS_DEPRECATE
WINBASEAPI
__drv_preferredFunction("IsWindows*", "Deprecated. Use VerifyVersionInfo* or IsWindows* macros from VersionHelpers.")
BOOL
WINAPI
GetVersionExW(
    _Inout_ LPOSVERSIONINFOW lpVersionInformation
    );
WINBASEAPI
BOOL
WINAPI
GetLogicalProcessorInformation(
    _Out_writes_bytes_to_opt_(*ReturnedLength,*ReturnedLength) PSYSTEM_LOGICAL_PROCESSOR_INFORMATION Buffer,
    _Inout_ PDWORD ReturnedLength
    );
WINBASEAPI
BOOL
WINAPI
GetLogicalProcessorInformationEx(
    _In_ LOGICAL_PROCESSOR_RELATIONSHIP RelationshipType,
    _Out_writes_bytes_to_opt_(*ReturnedLength,*ReturnedLength) PSYSTEM_LOGICAL_PROCESSOR_INFORMATION_EX Buffer,
    _Inout_ PDWORD ReturnedLength
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
VOID
WINAPI
GetNativeSystemInfo(
    _Out_ LPSYSTEM_INFO lpSystemInfo
    );
WINBASEAPI
VOID
WINAPI
GetSystemTimePreciseAsFileTime(
    _Out_ LPFILETIME lpSystemTimeAsFileTime
    );
WINBASEAPI
BOOL
WINAPI
GetProductInfo(
    _In_ DWORD dwOSMajorVersion,
    _In_ DWORD dwOSMinorVersion,
    _In_ DWORD dwSpMajorVersion,
    _In_ DWORD dwSpMinorVersion,
    _Out_ PDWORD pdwReturnedProductType
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
NTSYSAPI
ULONGLONG
NTAPI
VerSetConditionMask(
    _In_ ULONGLONG ConditionMask,
    _In_ ULONG TypeMask,
    _In_ UCHAR Condition
    );
WINBASEAPI
BOOL
WINAPI
GetOsSafeBootMode(
    _Out_ PDWORD Flags
    );
#endif
#pragma endregion
#pragma region OneCore Family or App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP)
WINBASEAPI
UINT
WINAPI
EnumSystemFirmwareTables(
    _In_ DWORD FirmwareTableProviderSignature,
    _Out_writes_bytes_to_opt_(BufferSize,return) PVOID pFirmwareTableEnumBuffer,
    _In_ DWORD BufferSize
    );
WINBASEAPI
UINT
WINAPI
GetSystemFirmwareTable(
    _In_ DWORD FirmwareTableProviderSignature,
    _In_ DWORD FirmwareTableID,
    _Out_writes_bytes_to_opt_(BufferSize,return) PVOID pFirmwareTableBuffer,
    _In_ DWORD BufferSize
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
DnsHostnameToComputerNameExW(
    _In_ LPCWSTR Hostname,
    _Out_writes_to_opt_(*nSize,*nSize + 1) LPWSTR ComputerName,
    _Inout_ LPDWORD nSize
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
GetPhysicallyInstalledSystemMemory(
    _Out_ PULONGLONG TotalMemoryInKilobytes
    );
WINBASEAPI
BOOL
WINAPI
SetComputerNameEx2W(
    _In_ COMPUTER_NAME_FORMAT NameType,
    _In_ DWORD Flags,
    _In_ LPCWSTR lpBuffer
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
SetSystemTimeAdjustment(
    _In_ DWORD dwTimeAdjustment,
    _In_ BOOL bTimeAdjustmentDisabled
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
SetSystemTimeAdjustmentPrecise(
    _In_ DWORD64 dwTimeAdjustment,
    _In_ BOOL bTimeAdjustmentDisabled
    );
WINBASEAPI
BOOL
WINAPI
InstallELAMCertificateInfo(
    _In_ HANDLE ELAMFile
    );
#endif
#pragma endregion
WINBASEAPI
BOOL
WINAPI
GetProcessorSystemCycleTime(
    _In_ USHORT Group,
    _Out_writes_bytes_to_opt_(*ReturnedLength,*ReturnedLength) PSYSTEM_PROCESSOR_CYCLE_TIME_INFORMATION Buffer,
    _Inout_ PDWORD ReturnedLength
    );
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
GetOsManufacturingMode(
    _Out_ PBOOL pbEnabled
    );
#endif
#pragma endregion
#pragma region App Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
HRESULT
WINAPI
GetIntegratedDisplaySize(
    _Out_ double* sizeInInches
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
SetComputerNameA(
    _In_ LPCSTR lpComputerName
    );
WINBASEAPI
BOOL
WINAPI
SetComputerNameW(
    _In_ LPCWSTR lpComputerName
    );
WINBASEAPI
BOOL
WINAPI
SetComputerNameExA(
    _In_ COMPUTER_NAME_FORMAT NameType,
    _In_ LPCSTR lpBuffer
    );
#endif
#pragma endregion
}
