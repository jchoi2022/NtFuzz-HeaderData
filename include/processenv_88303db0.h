       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
SetEnvironmentStringsW(
    _In_ _Pre_ _NullNull_terminated_ LPWCH NewEnvironment
    );
#endif
#pragma endregion
#pragma region PC Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_PC_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
HANDLE
WINAPI
GetStdHandle(
    _In_ DWORD nStdHandle
    );
WINBASEAPI
BOOL
WINAPI
SetStdHandle(
    _In_ DWORD nStdHandle,
    _In_ HANDLE hHandle
    );
WINBASEAPI
BOOL
WINAPI
SetStdHandleEx(
    _In_ DWORD nStdHandle,
    _In_ HANDLE hHandle,
    _Out_opt_ PHANDLE phPrevValue
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
LPSTR
WINAPI
GetCommandLineA(
    VOID
    );
WINBASEAPI
LPWSTR
WINAPI
GetCommandLineW(
    VOID
    );
WINBASEAPI
_NullNull_terminated_
LPCH
WINAPI
GetEnvironmentStrings(
    VOID
    );
WINBASEAPI
_NullNull_terminated_
LPWCH
WINAPI
GetEnvironmentStringsW(
    VOID
    );
WINBASEAPI
BOOL
WINAPI
FreeEnvironmentStringsA(
    _In_ _Pre_ _NullNull_terminated_ LPCH penv
    );
WINBASEAPI
BOOL
WINAPI
FreeEnvironmentStringsW(
    _In_ _Pre_ _NullNull_terminated_ LPWCH penv
    );
WINBASEAPI
_Success_(return != 0 && return < nSize)
DWORD
WINAPI
GetEnvironmentVariableA(
    _In_opt_ LPCSTR lpName,
    _Out_writes_to_opt_(nSize,return + 1) LPSTR lpBuffer,
    _In_ DWORD nSize
    );
WINBASEAPI
_Success_(return != 0 && return < nSize)
DWORD
WINAPI
GetEnvironmentVariableW(
    _In_opt_ LPCWSTR lpName,
    _Out_writes_to_opt_(nSize,return + 1) LPWSTR lpBuffer,
    _In_ DWORD nSize
    );
WINBASEAPI
BOOL
WINAPI
SetEnvironmentVariableA(
    _In_ LPCSTR lpName,
    _In_opt_ LPCSTR lpValue
    );
WINBASEAPI
BOOL
WINAPI
SetEnvironmentVariableW(
    _In_ LPCWSTR lpName,
    _In_opt_ LPCWSTR lpValue
    );
WINBASEAPI
_Success_(return != 0 && return <= nSize)
DWORD
WINAPI
ExpandEnvironmentStringsA(
    _In_ LPCSTR lpSrc,
    _Out_writes_to_opt_(nSize,return) LPSTR lpDst,
    _In_ DWORD nSize
    );
WINBASEAPI
_Success_(return != 0 && return <= nSize)
DWORD
WINAPI
ExpandEnvironmentStringsW(
    _In_ LPCWSTR lpSrc,
    _Out_writes_to_opt_(nSize,return) LPWSTR lpDst,
    _In_ DWORD nSize
    );
WINBASEAPI
BOOL
WINAPI
SetCurrentDirectoryA(
    _In_ LPCSTR lpPathName
    );
WINBASEAPI
BOOL
WINAPI
SetCurrentDirectoryW(
    _In_ LPCWSTR lpPathName
    );
WINBASEAPI
_Success_(return != 0 && return < nBufferLength)
DWORD
WINAPI
GetCurrentDirectoryA(
    _In_ DWORD nBufferLength,
    _Out_writes_to_opt_(nBufferLength,return + 1) LPSTR lpBuffer
    );
WINBASEAPI
_Success_(return != 0 && return < nBufferLength)
DWORD
WINAPI
GetCurrentDirectoryW(
    _In_ DWORD nBufferLength,
    _Out_writes_to_opt_(nBufferLength,return + 1) LPWSTR lpBuffer
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
DWORD
WINAPI
SearchPathW(
    _In_opt_ LPCWSTR lpPath,
    _In_ LPCWSTR lpFileName,
    _In_opt_ LPCWSTR lpExtension,
    _In_ DWORD nBufferLength,
    _Out_writes_to_opt_(nBufferLength,return + 1) LPWSTR lpBuffer,
    _Out_opt_ LPWSTR* lpFilePart
    );
WINBASEAPI
DWORD
APIENTRY
SearchPathA(
    _In_opt_ LPCSTR lpPath,
    _In_ LPCSTR lpFileName,
    _In_opt_ LPCSTR lpExtension,
    _In_ DWORD nBufferLength,
    _Out_writes_to_opt_(nBufferLength,return + 1) LPSTR lpBuffer,
    _Out_opt_ LPSTR* lpFilePart
    );
WINBASEAPI
BOOL
WINAPI
NeedCurrentDirectoryForExePathA(
    _In_ LPCSTR ExeName
    );
WINBASEAPI
BOOL
WINAPI
NeedCurrentDirectoryForExePathW(
    _In_ LPCWSTR ExeName
    );
#endif
#pragma endregion
}
