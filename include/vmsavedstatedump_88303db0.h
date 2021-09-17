#include "VmSavedStateDumpDefs.h"
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
VOID
WINAPI
SetInfoVerboseHandler(
    _In_opt_ VM_SAVED_STATE_DUMP_VERBOSE_HANDLER InfoHandler
    );
VOID
WINAPI
SetErrorVerboseHandler(
    _In_opt_ VM_SAVED_STATE_DUMP_VERBOSE_HANDLER ErrorHandler
    );
VOID
WINAPI
SetDebugVerboseHandler(
    _In_opt_ VM_SAVED_STATE_DUMP_VERBOSE_HANDLER DebugHandler
    );
HRESULT
WINAPI
LocateSavedStateFiles(
    _In_ LPCWSTR VmName,
    _In_opt_ LPCWSTR SnapshotName,
    _Out_ LPWSTR* BinPath,
    _Out_ LPWSTR* VsvPath,
    _Out_ LPWSTR* VmrsPath
    );
HRESULT
WINAPI
LoadSavedStateFile(
    _In_ LPCWSTR VmrsFile,
    _Out_ VM_SAVED_STATE_DUMP_HANDLE* VmSavedStateDumpHandle
    );
HRESULT
WINAPI
ApplyPendingSavedStateFileReplayLog(
    _In_ LPCWSTR VmrsFile
    );
HRESULT
WINAPI
LoadSavedStateFiles(
    _In_ LPCWSTR BinFile,
    _In_ LPCWSTR VsvFile,
    _Out_ VM_SAVED_STATE_DUMP_HANDLE* VmSavedStateDumpHandle
    );
HRESULT
WINAPI
ReleaseSavedStateFiles(
    _In_ VM_SAVED_STATE_DUMP_HANDLE VmSavedStateDumpHandle
    );
HRESULT
WINAPI
GetVpCount(
    _In_ VM_SAVED_STATE_DUMP_HANDLE VmSavedStateDumpHandle,
    _Out_ UINT32* VpCount
    );
HRESULT
WINAPI
GetArchitecture(
    _In_ VM_SAVED_STATE_DUMP_HANDLE VmSavedStateDumpHandle,
    _In_ UINT32 VpId,
    _Out_ VIRTUAL_PROCESSOR_ARCH* Architecture
    );
HRESULT
WINAPI
ForceArchitecture(
    _In_ VM_SAVED_STATE_DUMP_HANDLE VmSavedStateDumpHandle,
    _In_ UINT32 VpId,
    _In_ VIRTUAL_PROCESSOR_ARCH Architecture
    );
HRESULT
WINAPI
InKernelSpace(
    _In_ VM_SAVED_STATE_DUMP_HANDLE VmSavedStateDumpHandle,
    _In_ UINT32 VpId,
    _Out_ BOOL* InKernelSpace
    );
HRESULT
WINAPI
GetRegisterValue(
    _In_ VM_SAVED_STATE_DUMP_HANDLE VmSavedStateDumpHandle,
    _In_ UINT32 VpId,
    _Inout_ VIRTUAL_PROCESSOR_REGISTER* Register
    );
HRESULT
WINAPI
GetPagingMode(
    _In_ VM_SAVED_STATE_DUMP_HANDLE VmSavedStateDumpHandle,
    _In_ UINT32 VpId,
    _Out_ PAGING_MODE* PagingMode
    );
HRESULT
WINAPI
ForcePagingMode(
    _In_ VM_SAVED_STATE_DUMP_HANDLE VmSavedStateDumpHandle,
    _In_ UINT32 VpId,
    _In_ PAGING_MODE PagingMode
    );
HRESULT
WINAPI
ReadGuestPhysicalAddress(
    _In_ VM_SAVED_STATE_DUMP_HANDLE VmSavedStateDumpHandle,
    _In_ GUEST_PHYSICAL_ADDRESS PhysicalAddress,
    _Out_writes_bytes_(BufferSize) LPVOID Buffer,
    _In_ UINT32 BufferSize,
    _Out_opt_ UINT32* BytesRead
    );
HRESULT
WINAPI
GuestVirtualAddressToPhysicalAddress(
    _In_ VM_SAVED_STATE_DUMP_HANDLE VmSavedStateDumpHandle,
    _In_ UINT32 VpId,
    _In_ const GUEST_VIRTUAL_ADDRESS VirtualAddress,
    _Out_ GUEST_PHYSICAL_ADDRESS* PhysicalAddress
    );
HRESULT
WINAPI
GetGuestPhysicalMemoryChunks(
    _In_ VM_SAVED_STATE_DUMP_HANDLE VmSavedStateDumpHandle,
    _Out_ UINT64* MemoryChunkPageSize,
    _Out_ GPA_MEMORY_CHUNK* MemoryChunks,
    _Inout_ UINT64* MemoryChunkCount
    );
HRESULT
WINAPI
GuestPhysicalAddressToRawSavedMemoryOffset(
    _In_ VM_SAVED_STATE_DUMP_HANDLE VmSavedStateDumpHandle,
    _In_ GUEST_PHYSICAL_ADDRESS PhysicalAddress,
    _Out_ UINT64* RawSavedMemoryOffset
    );
HRESULT
WINAPI
ReadGuestRawSavedMemory(
    _In_ VM_SAVED_STATE_DUMP_HANDLE VmSavedStateDumpHandle,
    _In_ UINT64 RawSavedMemoryOffset,
    _Out_writes_bytes_(BufferSize) LPVOID Buffer,
    _In_ UINT32 BufferSize,
    _Out_opt_ UINT32* BytesRead
    );
HRESULT
WINAPI
GetGuestRawSavedMemorySize(
    _In_ VM_SAVED_STATE_DUMP_HANDLE VmSavedStateDumpHandle,
    _Out_ UINT64* GuestRawSavedMemorySize
    );
}
#endif
#pragma endregion
