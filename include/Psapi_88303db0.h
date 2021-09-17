#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
BOOL
WINAPI
EnumProcesses(
    _Out_writes_bytes_(cb) DWORD* lpidProcess,
    _In_ DWORD cb,
    _Out_ LPDWORD lpcbNeeded
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
BOOL
WINAPI
EnumProcessModules(
    _In_ HANDLE hProcess,
    _Out_writes_bytes_(cb) HMODULE* lphModule,
    _In_ DWORD cb,
    _Out_ LPDWORD lpcbNeeded
    );
BOOL
WINAPI
EnumProcessModulesEx(
    _In_ HANDLE hProcess,
    _Out_writes_bytes_(cb) HMODULE* lphModule,
    _In_ DWORD cb,
    _Out_ LPDWORD lpcbNeeded,
    _In_ DWORD dwFilterFlag
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
DWORD
WINAPI
GetModuleBaseNameA(
    _In_ HANDLE hProcess,
    _In_opt_ HMODULE hModule,
    _Out_writes_(nSize) LPSTR lpBaseName,
    _In_ DWORD nSize
    );
DWORD
WINAPI
GetModuleBaseNameW(
    _In_ HANDLE hProcess,
    _In_opt_ HMODULE hModule,
    _Out_writes_(nSize) LPWSTR lpBaseName,
    _In_ DWORD nSize
    );
_Success_(return != 0)
_Ret_range_(1, nSize)
DWORD
WINAPI
GetModuleFileNameExA(
    _In_opt_ HANDLE hProcess,
    _In_opt_ HMODULE hModule,
    _When_(return < nSize, _Out_writes_to_(nSize, return + 1))
    _When_(return == nSize, _Out_writes_all_(nSize))
         LPSTR lpFilename,
    _In_ DWORD nSize
    );
_Success_(return != 0)
_Ret_range_(1, nSize)
DWORD
WINAPI
GetModuleFileNameExW(
    _In_opt_ HANDLE hProcess,
    _In_opt_ HMODULE hModule,
    _When_(return < nSize, _Out_writes_to_(nSize, return + 1))
    _When_(return == nSize, _Out_writes_all_(nSize))
         LPWSTR lpFilename,
    _In_ DWORD nSize
    );
typedef struct _MODULEINFO {
    LPVOID lpBaseOfDll;
    DWORD SizeOfImage;
    LPVOID EntryPoint;
} MODULEINFO, *LPMODULEINFO;
BOOL
WINAPI
GetModuleInformation(
    _In_ HANDLE hProcess,
    _In_ HMODULE hModule,
    _Out_ LPMODULEINFO lpmodinfo,
    _In_ DWORD cb
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
BOOL
WINAPI
EmptyWorkingSet(
    _In_ HANDLE hProcess
    );
#pragma warning(disable:4201)
#pragma warning(disable:4214)
typedef union _PSAPI_WORKING_SET_BLOCK {
    ULONG_PTR Flags;
    struct {
        ULONG_PTR Protection : 5;
        ULONG_PTR ShareCount : 3;
        ULONG_PTR Shared : 1;
        ULONG_PTR Reserved : 3;
        ULONG_PTR VirtualPage : 52;
    };
} PSAPI_WORKING_SET_BLOCK, *PPSAPI_WORKING_SET_BLOCK;
typedef struct _PSAPI_WORKING_SET_INFORMATION {
    ULONG_PTR NumberOfEntries;
    PSAPI_WORKING_SET_BLOCK WorkingSetInfo[1];
} PSAPI_WORKING_SET_INFORMATION, *PPSAPI_WORKING_SET_INFORMATION;
typedef union _PSAPI_WORKING_SET_EX_BLOCK {
    ULONG_PTR Flags;
    union {
        struct {
            ULONG_PTR Valid : 1;
            ULONG_PTR ShareCount : 3;
            ULONG_PTR Win32Protection : 11;
            ULONG_PTR Shared : 1;
            ULONG_PTR Node : 6;
            ULONG_PTR Locked : 1;
            ULONG_PTR LargePage : 1;
            ULONG_PTR Reserved : 7;
            ULONG_PTR Bad : 1;
            ULONG_PTR ReservedUlong : 32;
        };
        struct {
            ULONG_PTR Valid : 1;
            ULONG_PTR Reserved0 : 14;
            ULONG_PTR Shared : 1;
            ULONG_PTR Reserved1 : 15;
            ULONG_PTR Bad : 1;
            ULONG_PTR ReservedUlong : 32;
        } Invalid;
    };
} PSAPI_WORKING_SET_EX_BLOCK, *PPSAPI_WORKING_SET_EX_BLOCK;
typedef struct _PSAPI_WORKING_SET_EX_INFORMATION {
    PVOID VirtualAddress;
    PSAPI_WORKING_SET_EX_BLOCK VirtualAttributes;
} PSAPI_WORKING_SET_EX_INFORMATION, *PPSAPI_WORKING_SET_EX_INFORMATION;
#pragma warning(default:4214)
#pragma warning(default:4201)
BOOL
WINAPI
QueryWorkingSet(
    _In_ HANDLE hProcess,
    _Out_writes_bytes_(cb) PVOID pv,
    _In_ DWORD cb
    );
BOOL
WINAPI
QueryWorkingSetEx(
    _In_ HANDLE hProcess,
    _Out_writes_bytes_(cb) PVOID pv,
    _In_ DWORD cb
    );
BOOL
WINAPI
InitializeProcessForWsWatch(
    _In_ HANDLE hProcess
    );
typedef struct _PSAPI_WS_WATCH_INFORMATION {
    LPVOID FaultingPc;
    LPVOID FaultingVa;
} PSAPI_WS_WATCH_INFORMATION, *PPSAPI_WS_WATCH_INFORMATION;
typedef struct _PSAPI_WS_WATCH_INFORMATION_EX {
    PSAPI_WS_WATCH_INFORMATION BasicInfo;
    ULONG_PTR FaultingThreadId;
    ULONG_PTR Flags;
} PSAPI_WS_WATCH_INFORMATION_EX, *PPSAPI_WS_WATCH_INFORMATION_EX;
BOOL
WINAPI
GetWsChanges(
    _In_ HANDLE hProcess,
    _Out_writes_bytes_(cb) PPSAPI_WS_WATCH_INFORMATION lpWatchInfo,
    _In_ DWORD cb
    );
BOOL
WINAPI
GetWsChangesEx(
    _In_ HANDLE hProcess,
    _Out_writes_bytes_to_(*cb, *cb) PPSAPI_WS_WATCH_INFORMATION_EX lpWatchInfoEx,
    _Inout_ PDWORD cb
    );
DWORD
WINAPI
GetMappedFileNameW (
    _In_ HANDLE hProcess,
    _In_ LPVOID lpv,
    _Out_writes_(nSize) LPWSTR lpFilename,
    _In_ DWORD nSize
    );
DWORD
WINAPI
GetMappedFileNameA (
    _In_ HANDLE hProcess,
    _In_ LPVOID lpv,
    _Out_writes_(nSize) LPSTR lpFilename,
    _In_ DWORD nSize
    );
BOOL
WINAPI
EnumDeviceDrivers (
    _Out_writes_bytes_(cb) LPVOID *lpImageBase,
    _In_ DWORD cb,
    _Out_ LPDWORD lpcbNeeded
    );
DWORD
WINAPI
GetDeviceDriverBaseNameA (
    _In_ LPVOID ImageBase,
    _Out_writes_(nSize) LPSTR lpFilename,
    _In_ DWORD nSize
    );
DWORD
WINAPI
GetDeviceDriverBaseNameW (
    _In_ LPVOID ImageBase,
    _Out_writes_(nSize) LPWSTR lpBaseName,
    _In_ DWORD nSize
    );
DWORD
WINAPI
GetDeviceDriverFileNameA (
    _In_ LPVOID ImageBase,
    _Out_writes_(nSize) LPSTR lpFilename,
    _In_ DWORD nSize
    );
DWORD
WINAPI
GetDeviceDriverFileNameW (
    _In_ LPVOID ImageBase,
    _Out_writes_(nSize) LPWSTR lpFilename,
    _In_ DWORD nSize
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct _PROCESS_MEMORY_COUNTERS {
    DWORD cb;
    DWORD PageFaultCount;
    SIZE_T PeakWorkingSetSize;
    SIZE_T WorkingSetSize;
    SIZE_T QuotaPeakPagedPoolUsage;
    SIZE_T QuotaPagedPoolUsage;
    SIZE_T QuotaPeakNonPagedPoolUsage;
    SIZE_T QuotaNonPagedPoolUsage;
    SIZE_T PagefileUsage;
    SIZE_T PeakPagefileUsage;
} PROCESS_MEMORY_COUNTERS;
typedef PROCESS_MEMORY_COUNTERS *PPROCESS_MEMORY_COUNTERS;
typedef struct _PROCESS_MEMORY_COUNTERS_EX {
    DWORD cb;
    DWORD PageFaultCount;
    SIZE_T PeakWorkingSetSize;
    SIZE_T WorkingSetSize;
    SIZE_T QuotaPeakPagedPoolUsage;
    SIZE_T QuotaPagedPoolUsage;
    SIZE_T QuotaPeakNonPagedPoolUsage;
    SIZE_T QuotaNonPagedPoolUsage;
    SIZE_T PagefileUsage;
    SIZE_T PeakPagefileUsage;
    SIZE_T PrivateUsage;
} PROCESS_MEMORY_COUNTERS_EX;
typedef PROCESS_MEMORY_COUNTERS_EX *PPROCESS_MEMORY_COUNTERS_EX;
BOOL
WINAPI
GetProcessMemoryInfo(
    HANDLE Process,
    PPROCESS_MEMORY_COUNTERS ppsmemCounters,
    DWORD cb
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef struct _PERFORMANCE_INFORMATION {
    DWORD cb;
    SIZE_T CommitTotal;
    SIZE_T CommitLimit;
    SIZE_T CommitPeak;
    SIZE_T PhysicalTotal;
    SIZE_T PhysicalAvailable;
    SIZE_T SystemCache;
    SIZE_T KernelTotal;
    SIZE_T KernelPaged;
    SIZE_T KernelNonpaged;
    SIZE_T PageSize;
    DWORD HandleCount;
    DWORD ProcessCount;
    DWORD ThreadCount;
} PERFORMANCE_INFORMATION, *PPERFORMANCE_INFORMATION, PERFORMACE_INFORMATION, *PPERFORMACE_INFORMATION;
BOOL
WINAPI
GetPerformanceInfo (
    PPERFORMANCE_INFORMATION pPerformanceInformation,
    DWORD cb
    );
typedef struct _ENUM_PAGE_FILE_INFORMATION {
    DWORD cb;
    DWORD Reserved;
    SIZE_T TotalSize;
    SIZE_T TotalInUse;
    SIZE_T PeakUsage;
} ENUM_PAGE_FILE_INFORMATION, *PENUM_PAGE_FILE_INFORMATION;
typedef BOOL (__stdcall *PENUM_PAGE_FILE_CALLBACKW) (LPVOID pContext, PENUM_PAGE_FILE_INFORMATION pPageFileInfo, LPCWSTR lpFilename);
typedef BOOL (__stdcall *PENUM_PAGE_FILE_CALLBACKA) (LPVOID pContext, PENUM_PAGE_FILE_INFORMATION pPageFileInfo, LPCSTR lpFilename);
BOOL
WINAPI
EnumPageFilesW (
    PENUM_PAGE_FILE_CALLBACKW pCallBackRoutine,
    LPVOID pContext
    );
BOOL
WINAPI
EnumPageFilesA (
    PENUM_PAGE_FILE_CALLBACKA pCallBackRoutine,
    LPVOID pContext
    );
DWORD
WINAPI
GetProcessImageFileNameA (
    _In_ HANDLE hProcess,
    _Out_writes_(nSize) LPSTR lpImageFileName,
    _In_ DWORD nSize
    );
DWORD
WINAPI
GetProcessImageFileNameW (
    _In_ HANDLE hProcess,
    _Out_writes_(nSize) LPWSTR lpImageFileName,
    _In_ DWORD nSize
    );
#endif
#pragma endregion
}
