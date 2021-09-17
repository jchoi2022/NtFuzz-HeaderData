#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct _PROTECTED_FILE_DATA {
    WCHAR FileName[MAX_PATH];
    DWORD FileNumber;
} PROTECTED_FILE_DATA, *PPROTECTED_FILE_DATA;
BOOL
WINAPI
SfcGetNextProtectedFile(
    IN HANDLE RpcHandle,
    IN PPROTECTED_FILE_DATA ProtFileData
    );
BOOL
WINAPI
SfcIsFileProtected(
    IN HANDLE RpcHandle,
    IN LPCWSTR ProtFileName
    );
BOOL
WINAPI
SfcIsKeyProtected(
    IN HKEY KeyHandle,
    IN LPCWSTR SubKeyName OPTIONAL,
    IN REGSAM KeySam
    );
BOOL
WINAPI
SfpVerifyFile(
    _In_ LPCSTR pszFileName,
    _In_reads_(dwErrSize) LPSTR pszError,
    _In_ DWORD dwErrSize
    );
}
#endif
#pragma endregion
