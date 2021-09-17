       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
extern "C" {
#pragma region Desktop Family or OneCore Or App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP)
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
IsEnclaveTypeSupported(
    _In_ DWORD flEnclaveType
    );
WINBASEAPI
_Ret_maybenull_
_Post_writable_byte_size_(dwSize)
LPVOID
WINAPI
CreateEnclave(
    _In_ HANDLE hProcess,
    _In_opt_ LPVOID lpAddress,
    _In_ SIZE_T dwSize,
    _In_ SIZE_T dwInitialCommitment,
    _In_ DWORD flEnclaveType,
    _In_reads_bytes_(dwInfoLength) LPCVOID lpEnclaveInformation,
    _In_ DWORD dwInfoLength,
    _Out_opt_ LPDWORD lpEnclaveError
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
LoadEnclaveData(
    _In_ HANDLE hProcess,
    _In_ LPVOID lpAddress,
    _In_reads_bytes_(nSize) LPCVOID lpBuffer,
    _In_ SIZE_T nSize,
    _In_ DWORD flProtect,
    _In_reads_bytes_(dwInfoLength) LPCVOID lpPageInformation,
    _In_ DWORD dwInfoLength,
    _Out_ PSIZE_T lpNumberOfBytesWritten,
    _Out_opt_ LPDWORD lpEnclaveError
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
InitializeEnclave(
    _In_ HANDLE hProcess,
    _In_ LPVOID lpAddress,
    _In_reads_bytes_(dwInfoLength) LPCVOID lpEnclaveInformation,
    _In_ DWORD dwInfoLength,
    _Out_opt_ LPDWORD lpEnclaveError
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
LoadEnclaveImageA(
    _In_ LPVOID lpEnclaveAddress,
    _In_ LPCSTR lpImageName
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
LoadEnclaveImageW(
    _In_ LPVOID lpEnclaveAddress,
    _In_ LPCWSTR lpImageName
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
CallEnclave(
    _In_ LPENCLAVE_ROUTINE lpRoutine,
    _In_ LPVOID lpParameter,
    _In_ BOOL fWaitForThread,
    _Out_ LPVOID* lpReturnValue
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
TerminateEnclave(
    _In_ LPVOID lpAddress,
    _In_ BOOL fWait
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
DeleteEnclave(
    _In_ LPVOID lpAddress
    );
#endif
#pragma endregion
}
