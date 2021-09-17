       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
#include <wincontypes.h>
#include <windef.h>
#include <wingdi.h>
extern "C" {
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINBASEAPI
BOOL
WINAPI
GetNumberOfConsoleMouseButtons(
    _Out_ LPDWORD lpNumberOfMouseButtons
    );
WINBASEAPI
COORD
WINAPI
GetConsoleFontSize(
    _In_ HANDLE hConsoleOutput,
    _In_ DWORD nFont
    );
WINBASEAPI
BOOL
WINAPI
GetCurrentConsoleFont(
    _In_ HANDLE hConsoleOutput,
    _In_ BOOL bMaximumWindow,
    _Out_ PCONSOLE_FONT_INFO lpConsoleCurrentFont
    );
typedef struct _CONSOLE_FONT_INFOEX {
    ULONG cbSize;
    DWORD nFont;
    COORD dwFontSize;
    UINT FontFamily;
    UINT FontWeight;
    WCHAR FaceName[LF_FACESIZE];
} CONSOLE_FONT_INFOEX, *PCONSOLE_FONT_INFOEX;
WINBASEAPI
BOOL
WINAPI
GetCurrentConsoleFontEx(
    _In_ HANDLE hConsoleOutput,
    _In_ BOOL bMaximumWindow,
    _Out_ PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx
    );
WINBASEAPI
BOOL
WINAPI
SetCurrentConsoleFontEx(
    _In_ HANDLE hConsoleOutput,
    _In_ BOOL bMaximumWindow,
    _In_ PCONSOLE_FONT_INFOEX lpConsoleCurrentFontEx
    );
typedef struct _CONSOLE_SELECTION_INFO {
    DWORD dwFlags;
    COORD dwSelectionAnchor;
    SMALL_RECT srSelection;
} CONSOLE_SELECTION_INFO, *PCONSOLE_SELECTION_INFO;
WINBASEAPI
BOOL
WINAPI
GetConsoleSelectionInfo(
    _Out_ PCONSOLE_SELECTION_INFO lpConsoleSelectionInfo
    );
typedef struct _CONSOLE_HISTORY_INFO {
    UINT cbSize;
    UINT HistoryBufferSize;
    UINT NumberOfHistoryBuffers;
    DWORD dwFlags;
} CONSOLE_HISTORY_INFO, *PCONSOLE_HISTORY_INFO;
WINBASEAPI
BOOL
WINAPI
GetConsoleHistoryInfo(
    _Out_ PCONSOLE_HISTORY_INFO lpConsoleHistoryInfo
    );
WINBASEAPI
BOOL
WINAPI
SetConsoleHistoryInfo(
    _In_ PCONSOLE_HISTORY_INFO lpConsoleHistoryInfo
    );
WINBASEAPI
BOOL
APIENTRY
GetConsoleDisplayMode(
    _Out_ LPDWORD lpModeFlags
    );
WINBASEAPI
BOOL
APIENTRY
SetConsoleDisplayMode(
    _In_ HANDLE hConsoleOutput,
    _In_ DWORD dwFlags,
    _Out_opt_ PCOORD lpNewScreenBufferDimensions
    );
WINBASEAPI
HWND
APIENTRY
GetConsoleWindow(
    VOID
    );
WINBASEAPI
BOOL
APIENTRY
AddConsoleAliasA(
    _In_ LPSTR Source,
    _In_ LPSTR Target,
    _In_ LPSTR ExeName
    );
WINBASEAPI
BOOL
APIENTRY
AddConsoleAliasW(
    _In_ LPWSTR Source,
    _In_ LPWSTR Target,
    _In_ LPWSTR ExeName
    );
WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasA(
    _In_ LPSTR Source,
    _Out_writes_(TargetBufferLength) LPSTR TargetBuffer,
    _In_ DWORD TargetBufferLength,
    _In_ LPSTR ExeName
    );
WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasW(
    _In_ LPWSTR Source,
    _Out_writes_(TargetBufferLength) LPWSTR TargetBuffer,
    _In_ DWORD TargetBufferLength,
    _In_ LPWSTR ExeName
    );
WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasesLengthA(
    _In_ LPSTR ExeName
    );
WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasesLengthW(
    _In_ LPWSTR ExeName
    );
WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasExesLengthA(
    VOID
    );
WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasExesLengthW(
    VOID
    );
WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasesA(
    _Out_writes_(AliasBufferLength) LPSTR AliasBuffer,
    _In_ DWORD AliasBufferLength,
    _In_ LPSTR ExeName
    );
WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasesW(
    _Out_writes_(AliasBufferLength) LPWSTR AliasBuffer,
    _In_ DWORD AliasBufferLength,
    _In_ LPWSTR ExeName
    );
WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasExesA(
    _Out_writes_(ExeNameBufferLength) LPSTR ExeNameBuffer,
    _In_ DWORD ExeNameBufferLength
    );
WINBASEAPI
DWORD
APIENTRY
GetConsoleAliasExesW(
    _Out_writes_(ExeNameBufferLength) LPWSTR ExeNameBuffer,
    _In_ DWORD ExeNameBufferLength
    );
WINBASEAPI
VOID
APIENTRY
ExpungeConsoleCommandHistoryA(
    _In_ LPSTR ExeName
    );
WINBASEAPI
VOID
APIENTRY
ExpungeConsoleCommandHistoryW(
    _In_ LPWSTR ExeName
    );
WINBASEAPI
BOOL
APIENTRY
SetConsoleNumberOfCommandsA(
    _In_ DWORD Number,
    _In_ LPSTR ExeName
    );
WINBASEAPI
BOOL
APIENTRY
SetConsoleNumberOfCommandsW(
    _In_ DWORD Number,
    _In_ LPWSTR ExeName
    );
WINBASEAPI
DWORD
APIENTRY
GetConsoleCommandHistoryLengthA(
    _In_ LPSTR ExeName
    );
WINBASEAPI
DWORD
APIENTRY
GetConsoleCommandHistoryLengthW(
    _In_ LPWSTR ExeName
    );
WINBASEAPI
DWORD
APIENTRY
GetConsoleCommandHistoryA(
    _Out_writes_bytes_(CommandBufferLength) LPSTR Commands,
    _In_ DWORD CommandBufferLength,
    _In_ LPSTR ExeName
    );
WINBASEAPI
DWORD
APIENTRY
GetConsoleCommandHistoryW(
    _Out_writes_bytes_(CommandBufferLength) LPWSTR Commands,
    _In_ DWORD CommandBufferLength,
    _In_ LPWSTR ExeName
    );
WINBASEAPI
DWORD
APIENTRY
GetConsoleProcessList(
    _Out_writes_(dwProcessCount) LPDWORD lpdwProcessList,
    _In_ DWORD dwProcessCount
    );
#endif
#pragma endregion
}
