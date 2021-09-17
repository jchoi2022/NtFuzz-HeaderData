       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
extern "C" {
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_
_Post_writable_byte_size_(dwSize)
LPVOID
WINAPI
VirtualAlloc(
    _In_opt_ LPVOID lpAddress,
    _In_ SIZE_T dwSize,
    _In_ DWORD flAllocationType,
    _In_ DWORD flProtect
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
VirtualProtect(
    _In_ LPVOID lpAddress,
    _In_ SIZE_T dwSize,
    _In_ DWORD flNewProtect,
    _Out_ PDWORD lpflOldProtect
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_When_(((dwFreeType&(MEM_RELEASE|MEM_DECOMMIT)))==(MEM_RELEASE|MEM_DECOMMIT),
    __drv_reportError("Passing both MEM_RELEASE and MEM_DECOMMIT to VirtualFree is not allowed. This results in the failure of this call"))
_When_(dwFreeType==0,
    __drv_reportError("Passing zero as the dwFreeType parameter to VirtualFree is not allowed. This results in the failure of this call"))
_When_(((dwFreeType&MEM_RELEASE))!=0 && dwSize!=0,
    __drv_reportError("Passing MEM_RELEASE and a non-zero dwSize parameter to VirtualFree is not allowed. This results in the failure of this call"))
_Success_(return != FALSE)
WINBASEAPI
BOOL
WINAPI
VirtualFree(
    _Pre_notnull_ _When_(dwFreeType == MEM_DECOMMIT,_Post_invalid_) _When_(dwFreeType == MEM_RELEASE,_Post_ptr_invalid_) LPVOID lpAddress,
    _In_ SIZE_T dwSize,
    _In_ DWORD dwFreeType
    );
WINBASEAPI
SIZE_T
WINAPI
VirtualQuery(
    _In_opt_ LPCVOID lpAddress,
    _Out_writes_bytes_to_(dwLength,return) PMEMORY_BASIC_INFORMATION lpBuffer,
    _In_ SIZE_T dwLength
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_
_Post_writable_byte_size_(dwSize)
LPVOID
WINAPI
VirtualAllocEx(
    _In_ HANDLE hProcess,
    _In_opt_ LPVOID lpAddress,
    _In_ SIZE_T dwSize,
    _In_ DWORD flAllocationType,
    _In_ DWORD flProtect
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
VirtualProtectEx(
    _In_ HANDLE hProcess,
    _In_ LPVOID lpAddress,
    _In_ SIZE_T dwSize,
    _In_ DWORD flNewProtect,
    _Out_ PDWORD lpflOldProtect
    );
WINBASEAPI
SIZE_T
WINAPI
VirtualQueryEx(
    _In_ HANDLE hProcess,
    _In_opt_ LPCVOID lpAddress,
    _Out_writes_bytes_to_(dwLength,return) PMEMORY_BASIC_INFORMATION lpBuffer,
    _In_ SIZE_T dwLength
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
ReadProcessMemory(
    _In_ HANDLE hProcess,
    _In_ LPCVOID lpBaseAddress,
    _Out_writes_bytes_to_(nSize,*lpNumberOfBytesRead) LPVOID lpBuffer,
    _In_ SIZE_T nSize,
    _Out_opt_ SIZE_T* lpNumberOfBytesRead
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
WriteProcessMemory(
    _In_ HANDLE hProcess,
    _In_ LPVOID lpBaseAddress,
    _In_reads_bytes_(nSize) LPCVOID lpBuffer,
    _In_ SIZE_T nSize,
    _Out_opt_ SIZE_T* lpNumberOfBytesWritten
    );
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
CreateFileMappingW(
    _In_ HANDLE hFile,
    _In_opt_ LPSECURITY_ATTRIBUTES lpFileMappingAttributes,
    _In_ DWORD flProtect,
    _In_ DWORD dwMaximumSizeHigh,
    _In_ DWORD dwMaximumSizeLow,
    _In_opt_ LPCWSTR lpName
    );
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
OpenFileMappingW(
    _In_ DWORD dwDesiredAccess,
    _In_ BOOL bInheritHandle,
    _In_ LPCWSTR lpName
    );
WINBASEAPI
_Ret_maybenull_ __out_data_source(FILE)
LPVOID
WINAPI
MapViewOfFile(
    _In_ HANDLE hFileMappingObject,
    _In_ DWORD dwDesiredAccess,
    _In_ DWORD dwFileOffsetHigh,
    _In_ DWORD dwFileOffsetLow,
    _In_ SIZE_T dwNumberOfBytesToMap
    );
WINBASEAPI
_Ret_maybenull_ __out_data_source(FILE)
LPVOID
WINAPI
MapViewOfFileEx(
    _In_ HANDLE hFileMappingObject,
    _In_ DWORD dwDesiredAccess,
    _In_ DWORD dwFileOffsetHigh,
    _In_ DWORD dwFileOffsetLow,
    _In_ SIZE_T dwNumberOfBytesToMap,
    _In_opt_ LPVOID lpBaseAddress
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
_When_(((dwFreeType&(MEM_RELEASE|MEM_DECOMMIT)))==(MEM_RELEASE|MEM_DECOMMIT),
    __drv_reportError("Passing both MEM_RELEASE and MEM_DECOMMIT to VirtualFree is not allowed. This results in the failure of this call"))
_When_(dwFreeType==0,
    __drv_reportError("Passing zero as the dwFreeType parameter to VirtualFree is not allowed. This results in the failure of this call"))
_When_(((dwFreeType&MEM_RELEASE))!=0 && dwSize!=0,
    __drv_reportError("Passing MEM_RELEASE and a non-zero dwSize parameter to VirtualFree is not allowed. This results in the failure of this call"))
_When_(((dwFreeType&MEM_DECOMMIT))!=0,
    __drv_reportError("Calling VirtualFreeEx without the MEM_RELEASE flag frees memory but not address descriptors (VADs); results in address space leaks"))
_Success_(return != FALSE)
WINBASEAPI
BOOL
WINAPI
VirtualFreeEx(
    _In_ HANDLE hProcess,
    _Pre_notnull_ _When_(dwFreeType == MEM_DECOMMIT,_Post_invalid_) _When_(dwFreeType == MEM_RELEASE,_Post_ptr_invalid_) LPVOID lpAddress,
    _In_ SIZE_T dwSize,
    _In_ DWORD dwFreeType
    );
WINBASEAPI
BOOL
WINAPI
FlushViewOfFile(
    _In_ LPCVOID lpBaseAddress,
    _In_ SIZE_T dwNumberOfBytesToFlush
    );
WINBASEAPI
BOOL
WINAPI
UnmapViewOfFile(
    _In_ LPCVOID lpBaseAddress
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
SIZE_T
WINAPI
GetLargePageMinimum(
    VOID
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
GetProcessWorkingSetSizeEx(
    _In_ HANDLE hProcess,
    _Out_ PSIZE_T lpMinimumWorkingSetSize,
    _Out_ PSIZE_T lpMaximumWorkingSetSize,
    _Out_ PDWORD Flags
    );
WINBASEAPI
BOOL
WINAPI
SetProcessWorkingSetSizeEx(
    _In_ HANDLE hProcess,
    _In_ SIZE_T dwMinimumWorkingSetSize,
    _In_ SIZE_T dwMaximumWorkingSetSize,
    _In_ DWORD Flags
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
VirtualLock(
    _In_ LPVOID lpAddress,
    _In_ SIZE_T dwSize
    );
WINBASEAPI
BOOL
WINAPI
VirtualUnlock(
    _In_ LPVOID lpAddress,
    _In_ SIZE_T dwSize
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Success_(return == 0)
UINT
WINAPI
GetWriteWatch(
    _In_ DWORD dwFlags,
    _In_ PVOID lpBaseAddress,
    _In_ SIZE_T dwRegionSize,
    _Out_writes_to_opt_(*lpdwCount,*lpdwCount) PVOID* lpAddresses,
    _Inout_opt_ ULONG_PTR* lpdwCount,
    _Out_opt_ LPDWORD lpdwGranularity
    );
WINBASEAPI
UINT
WINAPI
ResetWriteWatch(
    _In_ LPVOID lpBaseAddress,
    _In_ SIZE_T dwRegionSize
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef enum _MEMORY_RESOURCE_NOTIFICATION_TYPE {
    LowMemoryResourceNotification,
    HighMemoryResourceNotification
} MEMORY_RESOURCE_NOTIFICATION_TYPE;
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
CreateMemoryResourceNotification(
    _In_ MEMORY_RESOURCE_NOTIFICATION_TYPE NotificationType
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
QueryMemoryResourceNotification(
    _In_ HANDLE ResourceNotificationHandle,
    _Out_ PBOOL ResourceState
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
GetSystemFileCacheSize(
    _Out_ PSIZE_T lpMinimumFileCacheSize,
    _Out_ PSIZE_T lpMaximumFileCacheSize,
    _Out_ PDWORD lpFlags
    );
WINBASEAPI
BOOL
WINAPI
SetSystemFileCacheSize(
    _In_ SIZE_T MinimumFileCacheSize,
    _In_ SIZE_T MaximumFileCacheSize,
    _In_ DWORD Flags
    );
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
CreateFileMappingNumaW(
    _In_ HANDLE hFile,
    _In_opt_ LPSECURITY_ATTRIBUTES lpFileMappingAttributes,
    _In_ DWORD flProtect,
    _In_ DWORD dwMaximumSizeHigh,
    _In_ DWORD dwMaximumSizeLow,
    _In_opt_ LPCWSTR lpName,
    _In_ DWORD nndPreferred
    );
typedef struct _WIN32_MEMORY_RANGE_ENTRY {
    PVOID VirtualAddress;
    SIZE_T NumberOfBytes;
} WIN32_MEMORY_RANGE_ENTRY, *PWIN32_MEMORY_RANGE_ENTRY;
WINBASEAPI
BOOL
WINAPI
PrefetchVirtualMemory(
    _In_ HANDLE hProcess,
    _In_ ULONG_PTR NumberOfEntries,
    _In_reads_(NumberOfEntries) PWIN32_MEMORY_RANGE_ENTRY VirtualAddresses,
    _In_ ULONG Flags
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
CreateFileMappingFromApp(
    _In_ HANDLE hFile,
    _In_opt_ PSECURITY_ATTRIBUTES SecurityAttributes,
    _In_ ULONG PageProtection,
    _In_ ULONG64 MaximumSize,
    _In_opt_ PCWSTR Name
    );
WINBASEAPI
_Ret_maybenull_ __out_data_source(FILE)
PVOID
WINAPI
MapViewOfFileFromApp(
    _In_ HANDLE hFileMappingObject,
    _In_ ULONG DesiredAccess,
    _In_ ULONG64 FileOffset,
    _In_ SIZE_T NumberOfBytesToMap
    );
WINBASEAPI
BOOL
WINAPI
UnmapViewOfFileEx(
    _In_ PVOID BaseAddress,
    _In_ ULONG UnmapFlags
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
AllocateUserPhysicalPages(
    _In_ HANDLE hProcess,
    _Inout_ PULONG_PTR NumberOfPages,
    _Out_writes_to_(*NumberOfPages,*NumberOfPages) PULONG_PTR PageArray
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
FreeUserPhysicalPages(
    _In_ HANDLE hProcess,
    _Inout_ PULONG_PTR NumberOfPages,
    _In_reads_(*NumberOfPages) PULONG_PTR PageArray
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
MapUserPhysicalPages(
    _In_ PVOID VirtualAddress,
    _In_ ULONG_PTR NumberOfPages,
    _In_reads_opt_(NumberOfPages) PULONG_PTR PageArray
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
AllocateUserPhysicalPagesNuma(
    _In_ HANDLE hProcess,
    _Inout_ PULONG_PTR NumberOfPages,
    _Out_writes_to_(*NumberOfPages,*NumberOfPages) PULONG_PTR PageArray,
    _In_ DWORD nndPreferred
    );
WINBASEAPI
_Post_writable_byte_size_(dwSize)
LPVOID
WINAPI
VirtualAllocExNuma(
    _In_ HANDLE hProcess,
    _In_opt_ LPVOID lpAddress,
    _In_ SIZE_T dwSize,
    _In_ DWORD flAllocationType,
    _In_ DWORD flProtect,
    _In_ DWORD nndPreferred
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
GetMemoryErrorHandlingCapabilities(
    _Out_ PULONG Capabilities
    );
_Function_class_(BAD_MEMORY_CALLBACK_ROUTINE)
typedef
VOID
WINAPI
BAD_MEMORY_CALLBACK_ROUTINE(
    VOID
    );
typedef BAD_MEMORY_CALLBACK_ROUTINE *PBAD_MEMORY_CALLBACK_ROUTINE;
WINBASEAPI
_Success_(return != NULL)
PVOID
WINAPI
RegisterBadMemoryNotification(
    _In_ PBAD_MEMORY_CALLBACK_ROUTINE Callback
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
UnregisterBadMemoryNotification(
    _In_ PVOID RegistrationHandle
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
SetProcessValidCallTargets(
    _In_ HANDLE hProcess,
    _In_ PVOID VirtualAddress,
    _In_ SIZE_T RegionSize,
    _In_ ULONG NumberOfOffsets,
    _Inout_updates_(NumberOfOffsets) PCFG_CALL_TARGET_INFO OffsetInformation
    );
WINBASEAPI
BOOL
WINAPI
SetProcessValidCallTargetsForMappedView(
    _In_ HANDLE Process,
    _In_ PVOID VirtualAddress,
    _In_ SIZE_T RegionSize,
    _In_ ULONG NumberOfOffsets,
    _Inout_updates_(NumberOfOffsets) PCFG_CALL_TARGET_INFO OffsetInformation,
    _In_ HANDLE Section,
    _In_ ULONG64 ExpectedFileOffset
    );
WINBASEAPI
_Ret_maybenull_
_Post_writable_byte_size_(Size)
PVOID
WINAPI
VirtualAllocFromApp(
    _In_opt_ PVOID BaseAddress,
    _In_ SIZE_T Size,
    _In_ ULONG AllocationType,
    _In_ ULONG Protection
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
VirtualProtectFromApp(
    _In_ PVOID Address,
    _In_ SIZE_T Size,
    _In_ ULONG NewProtection,
    _Out_ PULONG OldProtection
    );
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
OpenFileMappingFromApp(
    _In_ ULONG DesiredAccess,
    _In_ BOOL InheritHandle,
    _In_ PCWSTR Name
    );
#endif
#pragma endregion
#pragma region Application Family
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef enum WIN32_MEMORY_INFORMATION_CLASS {
    MemoryRegionInfo
} WIN32_MEMORY_INFORMATION_CLASS;
typedef struct WIN32_MEMORY_REGION_INFORMATION {
    PVOID AllocationBase;
    ULONG AllocationProtect;
    union {
        ULONG Flags;
        struct {
            ULONG Private : 1;
            ULONG MappedDataFile : 1;
            ULONG MappedImage : 1;
            ULONG MappedPageFile : 1;
            ULONG MappedPhysical : 1;
            ULONG DirectMapped : 1;
            ULONG Reserved : 26;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
    SIZE_T RegionSize;
    SIZE_T CommitSize;
} WIN32_MEMORY_REGION_INFORMATION;
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
QueryVirtualMemoryInformation(
    _In_ HANDLE Process,
    _In_ const VOID* VirtualAddress,
    _In_ WIN32_MEMORY_INFORMATION_CLASS MemoryInformationClass,
    _Out_writes_bytes_(MemoryInformationSize) PVOID MemoryInformation,
    _In_ SIZE_T MemoryInformationSize,
    _Out_opt_ PSIZE_T ReturnSize
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_ __out_data_source(FILE)
PVOID
WINAPI
MapViewOfFileNuma2(
    _In_ HANDLE FileMappingHandle,
    _In_ HANDLE ProcessHandle,
    _In_ ULONG64 Offset,
    _In_opt_ PVOID BaseAddress,
    _In_ SIZE_T ViewSize,
    _In_ ULONG AllocationType,
    _In_ ULONG PageProtection,
    _In_ ULONG PreferredNode
    );
FORCEINLINE
_Ret_maybenull_ __out_data_source(FILE)
PVOID
MapViewOfFile2(
    _In_ HANDLE FileMappingHandle,
    _In_ HANDLE ProcessHandle,
    _In_ ULONG64 Offset,
    _In_opt_ PVOID BaseAddress,
    _In_ SIZE_T ViewSize,
    _In_ ULONG AllocationType,
    _In_ ULONG PageProtection
    )
{
    return MapViewOfFileNuma2(FileMappingHandle,
                              ProcessHandle,
                              Offset,
                              BaseAddress,
                              ViewSize,
                              AllocationType,
                              PageProtection,
                              NUMA_NO_PREFERRED_NODE);
}
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
UnmapViewOfFile2(
    _In_ HANDLE Process,
    _In_ PVOID BaseAddress,
    _In_ ULONG UnmapFlags
    );
WINBASEAPI
BOOL
WINAPI
VirtualUnlockEx(
    _In_opt_ HANDLE Process,
    _In_ LPVOID Address,
    _In_ SIZE_T Size
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_
_Post_writable_byte_size_(Size)
PVOID
WINAPI
VirtualAlloc2(
    _In_opt_ HANDLE Process,
    _In_opt_ PVOID BaseAddress,
    _In_ SIZE_T Size,
    _In_ ULONG AllocationType,
    _In_ ULONG PageProtection,
    _Inout_updates_opt_(ParameterCount) MEM_EXTENDED_PARAMETER* ExtendedParameters,
    _In_ ULONG ParameterCount
    );
WINBASEAPI
_Ret_maybenull_ __out_data_source(FILE)
PVOID
WINAPI
MapViewOfFile3(
    _In_ HANDLE FileMapping,
    _In_opt_ HANDLE Process,
    _In_opt_ PVOID BaseAddress,
    _In_ ULONG64 Offset,
    _In_ SIZE_T ViewSize,
    _In_ ULONG AllocationType,
    _In_ ULONG PageProtection,
    _Inout_updates_opt_(ParameterCount) MEM_EXTENDED_PARAMETER* ExtendedParameters,
    _In_ ULONG ParameterCount
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_
_Post_writable_byte_size_(Size)
PVOID
WINAPI
VirtualAlloc2FromApp(
    _In_opt_ HANDLE Process,
    _In_opt_ PVOID BaseAddress,
    _In_ SIZE_T Size,
    _In_ ULONG AllocationType,
    _In_ ULONG PageProtection,
    _Inout_updates_opt_(ParameterCount) MEM_EXTENDED_PARAMETER* ExtendedParameters,
    _In_ ULONG ParameterCount
    );
WINBASEAPI
_Ret_maybenull_ __out_data_source(FILE)
PVOID
WINAPI
MapViewOfFile3FromApp(
    _In_ HANDLE FileMapping,
    _In_opt_ HANDLE Process,
    _In_opt_ PVOID BaseAddress,
    _In_ ULONG64 Offset,
    _In_ SIZE_T ViewSize,
    _In_ ULONG AllocationType,
    _In_ ULONG PageProtection,
    _Inout_updates_opt_(ParameterCount) MEM_EXTENDED_PARAMETER* ExtendedParameters,
    _In_ ULONG ParameterCount
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Ret_maybenull_
HANDLE
WINAPI
CreateFileMapping2(
    _In_ HANDLE File,
    _In_opt_ SECURITY_ATTRIBUTES* SecurityAttributes,
    _In_ ULONG DesiredAccess,
    _In_ ULONG PageProtection,
    _In_ ULONG AllocationAttributes,
    _In_ ULONG64 MaximumSize,
    _In_opt_ PCWSTR Name,
    _Inout_updates_opt_(ParameterCount) MEM_EXTENDED_PARAMETER* ExtendedParameters,
    _In_ ULONG ParameterCount
    );
#endif
#pragma endregion
}
