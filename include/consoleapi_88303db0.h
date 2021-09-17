       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
#include <wincontypes.h>
extern "C" {
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
AllocConsole(
    VOID
    );
WINBASEAPI
BOOL
WINAPI
FreeConsole(
    VOID
    );
WINBASEAPI
BOOL
WINAPI
AttachConsole(
    _In_ DWORD dwProcessId
    );
WINBASEAPI
UINT
WINAPI
GetConsoleCP(
    VOID
    );
WINBASEAPI
UINT
WINAPI
GetConsoleOutputCP(
    VOID
    );
WINBASEAPI
BOOL
WINAPI
GetConsoleMode(
    _In_ HANDLE hConsoleHandle,
    _Out_ LPDWORD lpMode
    );
WINBASEAPI
BOOL
WINAPI
SetConsoleMode(
    _In_ HANDLE hConsoleHandle,
    _In_ DWORD dwMode
    );
WINBASEAPI
BOOL
WINAPI
GetNumberOfConsoleInputEvents(
    _In_ HANDLE hConsoleInput,
    _Out_ LPDWORD lpNumberOfEvents
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
ReadConsoleInputA(
    _In_ HANDLE hConsoleInput,
    _Out_writes_to_(nLength,*lpNumberOfEventsRead) PINPUT_RECORD lpBuffer,
    _In_ DWORD nLength,
    _Out_ _Deref_out_range_(<=,nLength) LPDWORD lpNumberOfEventsRead
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
ReadConsoleInputW(
    _In_ HANDLE hConsoleInput,
    _Out_writes_to_(nLength,*lpNumberOfEventsRead) PINPUT_RECORD lpBuffer,
    _In_ DWORD nLength,
    _Out_ _Deref_out_range_(<=,nLength) LPDWORD lpNumberOfEventsRead
    );
WINBASEAPI
BOOL
WINAPI
PeekConsoleInputA(
    _In_ HANDLE hConsoleInput,
    _Out_writes_(nLength) PINPUT_RECORD lpBuffer,
    _In_ DWORD nLength,
    _Out_ LPDWORD lpNumberOfEventsRead
    );
WINBASEAPI
BOOL
WINAPI
PeekConsoleInputW(
    _In_ HANDLE hConsoleInput,
    _Out_writes_(nLength) PINPUT_RECORD lpBuffer,
    _In_ DWORD nLength,
    _Out_ LPDWORD lpNumberOfEventsRead
    );
typedef struct _CONSOLE_READCONSOLE_CONTROL {
    ULONG nLength;
    ULONG nInitialChars;
    ULONG dwCtrlWakeupMask;
    ULONG dwControlKeyState;
} CONSOLE_READCONSOLE_CONTROL, *PCONSOLE_READCONSOLE_CONTROL;
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
ReadConsoleA(
    _In_ HANDLE hConsoleInput,
    _Out_writes_bytes_to_(nNumberOfCharsToRead * sizeof(TCHAR%),*lpNumberOfCharsRead * sizeof(TCHAR%)) LPVOID lpBuffer,
    _In_ DWORD nNumberOfCharsToRead,
    _Out_ _Deref_out_range_(<=,nNumberOfCharsToRead) LPDWORD lpNumberOfCharsRead,
    _In_opt_ PCONSOLE_READCONSOLE_CONTROL pInputControl
    );
WINBASEAPI
_Success_(return != FALSE)
BOOL
WINAPI
ReadConsoleW(
    _In_ HANDLE hConsoleInput,
    _Out_writes_bytes_to_(nNumberOfCharsToRead * sizeof(TCHAR%),*lpNumberOfCharsRead * sizeof(TCHAR%)) LPVOID lpBuffer,
    _In_ DWORD nNumberOfCharsToRead,
    _Out_ _Deref_out_range_(<=,nNumberOfCharsToRead) LPDWORD lpNumberOfCharsRead,
    _In_opt_ PCONSOLE_READCONSOLE_CONTROL pInputControl
    );
WINBASEAPI
BOOL
WINAPI
WriteConsoleA(
    _In_ HANDLE hConsoleOutput,
    _In_reads_(nNumberOfCharsToWrite) CONST VOID* lpBuffer,
    _In_ DWORD nNumberOfCharsToWrite,
    _Out_opt_ LPDWORD lpNumberOfCharsWritten,
    _Reserved_ LPVOID lpReserved
    );
WINBASEAPI
BOOL
WINAPI
WriteConsoleW(
    _In_ HANDLE hConsoleOutput,
    _In_reads_(nNumberOfCharsToWrite) CONST VOID* lpBuffer,
    _In_ DWORD nNumberOfCharsToWrite,
    _Out_opt_ LPDWORD lpNumberOfCharsWritten,
    _Reserved_ LPVOID lpReserved
    );
typedef
BOOL
(WINAPI *PHANDLER_ROUTINE)(
    _In_ DWORD CtrlType
    );
WINBASEAPI
BOOL
WINAPI
SetConsoleCtrlHandler(
    _In_opt_ PHANDLER_ROUTINE HandlerRoutine,
    _In_ BOOL Add
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
HRESULT
WINAPI
CreatePseudoConsole(
    _In_ COORD size,
    _In_ HANDLE hInput,
    _In_ HANDLE hOutput,
    _In_ DWORD dwFlags,
    _Out_ HPCON* phPC
    );
WINBASEAPI
HRESULT
WINAPI
ResizePseudoConsole(
    _In_ HPCON hPC,
    _In_ COORD size
    );
WINBASEAPI
VOID
WINAPI
ClosePseudoConsole(
    _In_ HPCON hPC
    );
#endif
#pragma endregion
}
