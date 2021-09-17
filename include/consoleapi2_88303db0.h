       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
#include <wincontypes.h>
#include <windef.h>
extern "C" {
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
FillConsoleOutputCharacterA(
    _In_ HANDLE hConsoleOutput,
    _In_ CHAR cCharacter,
    _In_ DWORD nLength,
    _In_ COORD dwWriteCoord,
    _Out_ LPDWORD lpNumberOfCharsWritten
    );
WINBASEAPI
BOOL
WINAPI
FillConsoleOutputCharacterW(
    _In_ HANDLE hConsoleOutput,
    _In_ WCHAR cCharacter,
    _In_ DWORD nLength,
    _In_ COORD dwWriteCoord,
    _Out_ LPDWORD lpNumberOfCharsWritten
    );
WINBASEAPI
BOOL
WINAPI
FillConsoleOutputAttribute(
    _In_ HANDLE hConsoleOutput,
    _In_ WORD wAttribute,
    _In_ DWORD nLength,
    _In_ COORD dwWriteCoord,
    _Out_ LPDWORD lpNumberOfAttrsWritten
    );
WINBASEAPI
BOOL
WINAPI
GenerateConsoleCtrlEvent(
    _In_ DWORD dwCtrlEvent,
    _In_ DWORD dwProcessGroupId
    );
WINBASEAPI
HANDLE
WINAPI
CreateConsoleScreenBuffer(
    _In_ DWORD dwDesiredAccess,
    _In_ DWORD dwShareMode,
    _In_opt_ CONST SECURITY_ATTRIBUTES* lpSecurityAttributes,
    _In_ DWORD dwFlags,
    _Reserved_ LPVOID lpScreenBufferData
    );
WINBASEAPI
BOOL
WINAPI
SetConsoleActiveScreenBuffer(
    _In_ HANDLE hConsoleOutput
    );
WINBASEAPI
BOOL
WINAPI
FlushConsoleInputBuffer(
    _In_ HANDLE hConsoleInput
    );
WINBASEAPI
BOOL
WINAPI
SetConsoleCP(
    _In_ UINT wCodePageID
    );
WINBASEAPI
BOOL
WINAPI
SetConsoleOutputCP(
    _In_ UINT wCodePageID
    );
typedef struct _CONSOLE_CURSOR_INFO {
    DWORD dwSize;
    BOOL bVisible;
} CONSOLE_CURSOR_INFO, *PCONSOLE_CURSOR_INFO;
WINBASEAPI
BOOL
WINAPI
GetConsoleCursorInfo(
    _In_ HANDLE hConsoleOutput,
    _Out_ PCONSOLE_CURSOR_INFO lpConsoleCursorInfo
    );
WINBASEAPI
BOOL
WINAPI
SetConsoleCursorInfo(
    _In_ HANDLE hConsoleOutput,
    _In_ CONST CONSOLE_CURSOR_INFO* lpConsoleCursorInfo
    );
typedef struct _CONSOLE_SCREEN_BUFFER_INFO {
    COORD dwSize;
    COORD dwCursorPosition;
    WORD wAttributes;
    SMALL_RECT srWindow;
    COORD dwMaximumWindowSize;
} CONSOLE_SCREEN_BUFFER_INFO, *PCONSOLE_SCREEN_BUFFER_INFO;
WINBASEAPI
BOOL
WINAPI
GetConsoleScreenBufferInfo(
    _In_ HANDLE hConsoleOutput,
    _Out_ PCONSOLE_SCREEN_BUFFER_INFO lpConsoleScreenBufferInfo
    );
typedef struct _CONSOLE_SCREEN_BUFFER_INFOEX {
    ULONG cbSize;
    COORD dwSize;
    COORD dwCursorPosition;
    WORD wAttributes;
    SMALL_RECT srWindow;
    COORD dwMaximumWindowSize;
    WORD wPopupAttributes;
    BOOL bFullscreenSupported;
    COLORREF ColorTable[16];
} CONSOLE_SCREEN_BUFFER_INFOEX, *PCONSOLE_SCREEN_BUFFER_INFOEX;
WINBASEAPI
BOOL
WINAPI
GetConsoleScreenBufferInfoEx(
    _In_ HANDLE hConsoleOutput,
    _Inout_ PCONSOLE_SCREEN_BUFFER_INFOEX lpConsoleScreenBufferInfoEx
    );
WINBASEAPI
BOOL
WINAPI
SetConsoleScreenBufferInfoEx(
    _In_ HANDLE hConsoleOutput,
    _In_ PCONSOLE_SCREEN_BUFFER_INFOEX lpConsoleScreenBufferInfoEx
    );
WINBASEAPI
BOOL
WINAPI
SetConsoleScreenBufferSize(
    _In_ HANDLE hConsoleOutput,
    _In_ COORD dwSize
    );
WINBASEAPI
BOOL
WINAPI
SetConsoleCursorPosition(
    _In_ HANDLE hConsoleOutput,
    _In_ COORD dwCursorPosition
    );
WINBASEAPI
COORD
WINAPI
GetLargestConsoleWindowSize(
    _In_ HANDLE hConsoleOutput
    );
WINBASEAPI
BOOL
WINAPI
SetConsoleTextAttribute(
    _In_ HANDLE hConsoleOutput,
    _In_ WORD wAttributes
    );
WINBASEAPI
BOOL
WINAPI
SetConsoleWindowInfo(
    _In_ HANDLE hConsoleOutput,
    _In_ BOOL bAbsolute,
    _In_ CONST SMALL_RECT* lpConsoleWindow
    );
WINBASEAPI
BOOL
WINAPI
WriteConsoleOutputCharacterA(
    _In_ HANDLE hConsoleOutput,
    _In_reads_(nLength) LPCSTR lpCharacter,
    _In_ DWORD nLength,
    _In_ COORD dwWriteCoord,
    _Out_ LPDWORD lpNumberOfCharsWritten
    );
WINBASEAPI
BOOL
WINAPI
WriteConsoleOutputCharacterW(
    _In_ HANDLE hConsoleOutput,
    _In_reads_(nLength) LPCWSTR lpCharacter,
    _In_ DWORD nLength,
    _In_ COORD dwWriteCoord,
    _Out_ LPDWORD lpNumberOfCharsWritten
    );
WINBASEAPI
BOOL
WINAPI
WriteConsoleOutputAttribute(
    _In_ HANDLE hConsoleOutput,
    _In_reads_(nLength) CONST WORD* lpAttribute,
    _In_ DWORD nLength,
    _In_ COORD dwWriteCoord,
    _Out_ LPDWORD lpNumberOfAttrsWritten
    );
WINBASEAPI
BOOL
WINAPI
ReadConsoleOutputCharacterA(
    _In_ HANDLE hConsoleOutput,
    _Out_writes_(nLength) LPSTR lpCharacter,
    _In_ DWORD nLength,
    _In_ COORD dwReadCoord,
    _Out_ LPDWORD lpNumberOfCharsRead
    );
WINBASEAPI
BOOL
WINAPI
ReadConsoleOutputCharacterW(
    _In_ HANDLE hConsoleOutput,
    _Out_writes_(nLength) LPWSTR lpCharacter,
    _In_ DWORD nLength,
    _In_ COORD dwReadCoord,
    _Out_ LPDWORD lpNumberOfCharsRead
    );
WINBASEAPI
BOOL
WINAPI
ReadConsoleOutputAttribute(
    _In_ HANDLE hConsoleOutput,
    _Out_writes_(nLength) LPWORD lpAttribute,
    _In_ DWORD nLength,
    _In_ COORD dwReadCoord,
    _Out_ LPDWORD lpNumberOfAttrsRead
    );
WINBASEAPI
BOOL
WINAPI
WriteConsoleInputA(
    _In_ HANDLE hConsoleInput,
    _In_reads_(nLength) CONST INPUT_RECORD* lpBuffer,
    _In_ DWORD nLength,
    _Out_ LPDWORD lpNumberOfEventsWritten
    );
WINBASEAPI
BOOL
WINAPI
WriteConsoleInputW(
    _In_ HANDLE hConsoleInput,
    _In_reads_(nLength) CONST INPUT_RECORD* lpBuffer,
    _In_ DWORD nLength,
    _Out_ LPDWORD lpNumberOfEventsWritten
    );
WINBASEAPI
BOOL
WINAPI
ScrollConsoleScreenBufferA(
    _In_ HANDLE hConsoleOutput,
    _In_ CONST SMALL_RECT* lpScrollRectangle,
    _In_opt_ CONST SMALL_RECT* lpClipRectangle,
    _In_ COORD dwDestinationOrigin,
    _In_ CONST CHAR_INFO* lpFill
    );
WINBASEAPI
BOOL
WINAPI
ScrollConsoleScreenBufferW(
    _In_ HANDLE hConsoleOutput,
    _In_ CONST SMALL_RECT* lpScrollRectangle,
    _In_opt_ CONST SMALL_RECT* lpClipRectangle,
    _In_ COORD dwDestinationOrigin,
    _In_ CONST CHAR_INFO* lpFill
    );
WINBASEAPI
BOOL
WINAPI
WriteConsoleOutputA(
    _In_ HANDLE hConsoleOutput,
    _In_reads_(dwBufferSize.X * dwBufferSize.Y) CONST CHAR_INFO* lpBuffer,
    _In_ COORD dwBufferSize,
    _In_ COORD dwBufferCoord,
    _Inout_ PSMALL_RECT lpWriteRegion
    );
WINBASEAPI
BOOL
WINAPI
WriteConsoleOutputW(
    _In_ HANDLE hConsoleOutput,
    _In_reads_(dwBufferSize.X * dwBufferSize.Y) CONST CHAR_INFO* lpBuffer,
    _In_ COORD dwBufferSize,
    _In_ COORD dwBufferCoord,
    _Inout_ PSMALL_RECT lpWriteRegion
    );
WINBASEAPI
BOOL
WINAPI
ReadConsoleOutputA(
    _In_ HANDLE hConsoleOutput,
    _Out_writes_(dwBufferSize.X * dwBufferSize.Y) PCHAR_INFO lpBuffer,
    _In_ COORD dwBufferSize,
    _In_ COORD dwBufferCoord,
    _Inout_ PSMALL_RECT lpReadRegion
    );
WINBASEAPI
BOOL
WINAPI
ReadConsoleOutputW(
    _In_ HANDLE hConsoleOutput,
    _Out_writes_(dwBufferSize.X * dwBufferSize.Y) PCHAR_INFO lpBuffer,
    _In_ COORD dwBufferSize,
    _In_ COORD dwBufferCoord,
    _Inout_ PSMALL_RECT lpReadRegion
    );
WINBASEAPI
DWORD
WINAPI
GetConsoleTitleA(
    _Out_writes_(nSize) LPSTR lpConsoleTitle,
    _In_ DWORD nSize
    );
WINBASEAPI
DWORD
WINAPI
GetConsoleTitleW(
    _Out_writes_(nSize) LPWSTR lpConsoleTitle,
    _In_ DWORD nSize
    );
WINBASEAPI
DWORD
WINAPI
GetConsoleOriginalTitleA(
    _Out_writes_(nSize) LPSTR lpConsoleTitle,
    _In_ DWORD nSize
    );
WINBASEAPI
DWORD
WINAPI
GetConsoleOriginalTitleW(
    _Out_writes_(nSize) LPWSTR lpConsoleTitle,
    _In_ DWORD nSize
    );
WINBASEAPI
BOOL
WINAPI
SetConsoleTitleA(
    _In_ LPCSTR lpConsoleTitle
    );
WINBASEAPI
BOOL
WINAPI
SetConsoleTitleW(
    _In_ LPCWSTR lpConsoleTitle
    );
#endif
#pragma endregion
}
