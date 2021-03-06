       
#include <apiset.h>
#include <apisetcconv.h>
#include <minwindef.h>
#include <minwinbase.h>
#include <fileapi.h>
extern "C" {
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
WINSTORAGEAPI
BOOL
WINAPI
CopyFileFromAppW(
    _In_ LPCWSTR lpExistingFileName,
    _In_ LPCWSTR lpNewFileName,
    _In_ BOOL bFailIfExists
    );
WINSTORAGEAPI
BOOL
WINAPI
CreateDirectoryFromAppW(
    _In_ LPCWSTR lpPathName,
    _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes
    );
WINSTORAGEAPI
HANDLE
WINAPI
CreateFileFromAppW(
    _In_ LPCWSTR lpFileName,
    _In_ DWORD dwDesiredAccess,
    _In_ DWORD dwShareMode,
    _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes,
    _In_ DWORD dwCreationDisposition,
    _In_ DWORD dwFlagsAndAttributes,
    _In_opt_ HANDLE hTemplateFile
    );
WINSTORAGEAPI
HANDLE
WINAPI
CreateFile2FromAppW(
    _In_ LPCWSTR lpFileName,
    _In_ DWORD dwDesiredAccess,
    _In_ DWORD dwShareMode,
    _In_ DWORD dwCreationDisposition,
    _In_opt_ LPCREATEFILE2_EXTENDED_PARAMETERS pCreateExParams
    );
WINSTORAGEAPI
BOOL
WINAPI
DeleteFileFromAppW(
    _In_ LPCWSTR lpFileName
    );
WINSTORAGEAPI
HANDLE
WINAPI
FindFirstFileExFromAppW(
    _In_ LPCWSTR lpFileName,
    _In_ FINDEX_INFO_LEVELS fInfoLevelId,
    _Out_writes_bytes_(sizeof(WIN32_FIND_DATAW)) LPVOID lpFindFileData,
    _In_ FINDEX_SEARCH_OPS fSearchOp,
    _Reserved_ LPVOID lpSearchFilter,
    _In_ DWORD dwAdditionalFlags
    );
WINSTORAGEAPI
BOOL
WINAPI
GetFileAttributesExFromAppW(
    _In_ LPCWSTR lpFileName,
    _In_ GET_FILEEX_INFO_LEVELS fInfoLevelId,
    _Out_writes_bytes_(sizeof(WIN32_FILE_ATTRIBUTE_DATA)) LPVOID lpFileInformation
    );
WINSTORAGEAPI
BOOL
WINAPI
MoveFileFromAppW(
    _In_ LPCWSTR lpExistingFileName,
    _In_ LPCWSTR lpNewFileName
    );
WINSTORAGEAPI
BOOL
WINAPI
RemoveDirectoryFromAppW(
    _In_ LPCWSTR lpPathName
    );
WINSTORAGEAPI
BOOL
WINAPI
ReplaceFileFromAppW(
    _In_ LPCWSTR lpReplacedFileName,
    _In_ LPCWSTR lpReplacementFileName,
    _In_opt_ LPCWSTR lpBackupFileName,
    _In_ DWORD dwReplaceFlags,
    _Reserved_ LPVOID lpExclude,
    _Reserved_ LPVOID lpReserved
    );
WINSTORAGEAPI
BOOL
WINAPI
SetFileAttributesFromAppW(
    _In_ LPCWSTR lpFileName,
    _In_ DWORD dwFileAttributes
    );
#endif
#pragma endregion
}
