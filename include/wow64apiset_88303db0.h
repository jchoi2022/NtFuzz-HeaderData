       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
Wow64DisableWow64FsRedirection(
    _Out_ PVOID* OldValue
    );
WINBASEAPI
BOOL
WINAPI
Wow64RevertWow64FsRedirection(
    _In_ PVOID OlValue
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
IsWow64Process(
    _In_ HANDLE hProcess,
    _Out_ PBOOL Wow64Process
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
GetSystemWow64DirectoryA(
    _Out_writes_to_opt_(uSize,return + 1) LPSTR lpBuffer,
    _In_ UINT uSize
    );
WINBASEAPI
_Must_inspect_result_
_Success_(return != 0 && return < uSize)
UINT
WINAPI
GetSystemWow64DirectoryW(
    _Out_writes_to_opt_(uSize,return + 1) LPWSTR lpBuffer,
    _In_ UINT uSize
    );
WINBASEAPI
USHORT
WINAPI
Wow64SetThreadDefaultGuestMachine(
    _In_ USHORT Machine
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
IsWow64Process2(
    _In_ HANDLE hProcess,
    _Out_ USHORT* pProcessMachine,
    _Out_opt_ USHORT* pNativeMachine
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
GetSystemWow64Directory2A(
    _Out_writes_to_opt_(uSize,return + 1) LPSTR lpBuffer,
    _In_ UINT uSize,
    _In_ WORD ImageFileMachineType
    );
WINBASEAPI
_Must_inspect_result_
_Success_(return != 0 && return < uSize)
UINT
WINAPI
GetSystemWow64Directory2W(
    _Out_writes_to_opt_(uSize,return + 1) LPWSTR lpBuffer,
    _In_ UINT uSize,
    _In_ WORD ImageFileMachineType
    );
WINBASEAPI
_Must_inspect_result_
HRESULT
WINAPI
IsWow64GuestMachineSupported(
    _In_ USHORT WowGuestMachine,
    _Out_ BOOL* MachineIsSupported
    );
#endif
#pragma endregion
}
