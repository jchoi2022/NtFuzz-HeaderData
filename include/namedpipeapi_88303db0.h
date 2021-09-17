       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
extern "C" {
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
CreatePipe(
    _Out_ PHANDLE hReadPipe,
    _Out_ PHANDLE hWritePipe,
    _In_opt_ LPSECURITY_ATTRIBUTES lpPipeAttributes,
    _In_ DWORD nSize
    );
WINBASEAPI
BOOL
WINAPI
ConnectNamedPipe(
    _In_ HANDLE hNamedPipe,
    _Inout_opt_ LPOVERLAPPED lpOverlapped
    );
WINBASEAPI
BOOL
WINAPI
DisconnectNamedPipe(
    _In_ HANDLE hNamedPipe
    );
WINBASEAPI
BOOL
WINAPI
SetNamedPipeHandleState(
    _In_ HANDLE hNamedPipe,
    _In_opt_ LPDWORD lpMode,
    _In_opt_ LPDWORD lpMaxCollectionCount,
    _In_opt_ LPDWORD lpCollectDataTimeout
    );
WINBASEAPI
BOOL
WINAPI
PeekNamedPipe(
    _In_ HANDLE hNamedPipe,
    _Out_writes_bytes_to_opt_(nBufferSize,*lpBytesRead) LPVOID lpBuffer,
    _In_ DWORD nBufferSize,
    _Out_opt_ LPDWORD lpBytesRead,
    _Out_opt_ LPDWORD lpTotalBytesAvail,
    _Out_opt_ LPDWORD lpBytesLeftThisMessage
    );
WINBASEAPI
BOOL
WINAPI
TransactNamedPipe(
    _In_ HANDLE hNamedPipe,
    _In_reads_bytes_opt_(nInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD nInBufferSize,
    _Out_writes_bytes_to_opt_(nOutBufferSize,*lpBytesRead) LPVOID lpOutBuffer,
    _In_ DWORD nOutBufferSize,
    _Out_ LPDWORD lpBytesRead,
    _Inout_opt_ LPOVERLAPPED lpOverlapped
    );
WINBASEAPI
HANDLE
WINAPI
CreateNamedPipeW(
    _In_ LPCWSTR lpName,
    _In_ DWORD dwOpenMode,
    _In_ DWORD dwPipeMode,
    _In_ DWORD nMaxInstances,
    _In_ DWORD nOutBufferSize,
    _In_ DWORD nInBufferSize,
    _In_ DWORD nDefaultTimeOut,
    _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );
WINBASEAPI
BOOL
WINAPI
WaitNamedPipeW(
    _In_ LPCWSTR lpNamedPipeName,
    _In_ DWORD nTimeOut
    );
WINBASEAPI
BOOL
WINAPI
GetNamedPipeClientComputerNameW(
    _In_ HANDLE Pipe,
    _Out_writes_bytes_(ClientComputerNameLength) LPWSTR ClientComputerName,
    _In_ ULONG ClientComputerNameLength
    );
WINADVAPI
_Must_inspect_result_
BOOL
WINAPI
ImpersonateNamedPipeClient(
    _In_ HANDLE hNamedPipe
    );
#endif
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
GetNamedPipeInfo(
    _In_ HANDLE hNamedPipe,
    _Out_opt_ LPDWORD lpFlags,
    _Out_opt_ LPDWORD lpOutBufferSize,
    _Out_opt_ LPDWORD lpInBufferSize,
    _Out_opt_ LPDWORD lpMaxInstances
    );
WINBASEAPI
BOOL
WINAPI
GetNamedPipeHandleStateW(
    _In_ HANDLE hNamedPipe,
    _Out_opt_ LPDWORD lpState,
    _Out_opt_ LPDWORD lpCurInstances,
    _Out_opt_ LPDWORD lpMaxCollectionCount,
    _Out_opt_ LPDWORD lpCollectDataTimeout,
    _Out_writes_opt_(nMaxUserNameSize) LPWSTR lpUserName,
    _In_ DWORD nMaxUserNameSize
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
CallNamedPipeW(
    _In_ LPCWSTR lpNamedPipeName,
    _In_reads_bytes_opt_(nInBufferSize) LPVOID lpInBuffer,
    _In_ DWORD nInBufferSize,
    _Out_writes_bytes_to_opt_(nOutBufferSize,*lpBytesRead) LPVOID lpOutBuffer,
    _In_ DWORD nOutBufferSize,
    _Out_ LPDWORD lpBytesRead,
    _In_ DWORD nTimeOut
    );
#endif
#pragma endregion
}
