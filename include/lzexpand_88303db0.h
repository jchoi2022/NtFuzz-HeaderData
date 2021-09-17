#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
_Success_(return >= 0)
_Check_return_
INT
APIENTRY
LZStart(
    VOID
    );
VOID
APIENTRY
LZDone(
    VOID
    );
_Success_(return >= 0)
_Check_return_
LONG
APIENTRY
CopyLZFile(
    _In_ INT hfSource,
    _In_ INT hfDest
    );
_Success_(return >= 0)
_Check_return_
LONG
APIENTRY
LZCopy(
    _In_ INT hfSource,
    _In_ INT hfDest
    );
_Success_(return >= 0)
_Check_return_
INT
APIENTRY
LZInit(
    _In_ INT hfSource
    );
_Success_(return >= 0)
_Check_return_
INT
APIENTRY
GetExpandedNameA(
    _In_ LPSTR lpszSource,
    _Out_writes_(MAX_PATH) LPSTR lpszBuffer
    );
_Success_(return >= 0)
_Check_return_
INT
APIENTRY
GetExpandedNameW(
    _In_ LPWSTR lpszSource,
    _Out_writes_(MAX_PATH) LPWSTR lpszBuffer
    );
_Success_(return >= 0)
_Check_return_
INT
APIENTRY
LZOpenFileA(
    _In_ LPSTR lpFileName,
    _Inout_ LPOFSTRUCT lpReOpenBuf,
    _In_ WORD wStyle
    );
_Success_(return >= 0)
_Check_return_
INT
APIENTRY
LZOpenFileW(
    _In_ LPWSTR lpFileName,
    _Inout_ LPOFSTRUCT lpReOpenBuf,
    _In_ WORD wStyle
    );
_Success_(return >= 0)
_Check_return_
LONG
APIENTRY
LZSeek(
    _In_ INT hFile,
    _In_ LONG lOffset,
    _In_ INT iOrigin
    );
_Success_(return >= 0)
_Check_return_
INT
APIENTRY
LZRead(
    _In_ INT hFile,
    _Out_writes_bytes_to_(cbRead, return) CHAR* lpBuffer,
    _In_ INT cbRead
    );
VOID
APIENTRY
LZClose(
    _In_ INT hFile
    );
#endif
#pragma endregion
}
