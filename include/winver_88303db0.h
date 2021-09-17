#include <winapifamily.h>
#include <SpecStrings.h>
#include <verrsrc.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
DWORD
APIENTRY
VerFindFileA(
        _In_ DWORD uFlags,
        _In_ LPCSTR szFileName,
        _In_opt_ LPCSTR szWinDir,
        _In_ LPCSTR szAppDir,
        _Out_writes_(*puCurDirLen) LPSTR szCurDir,
        _Inout_ PUINT puCurDirLen,
        _Out_writes_(*puDestDirLen) LPSTR szDestDir,
        _Inout_ PUINT puDestDirLen
        );
DWORD
APIENTRY
VerFindFileW(
        _In_ DWORD uFlags,
        _In_ LPCWSTR szFileName,
        _In_opt_ LPCWSTR szWinDir,
        _In_ LPCWSTR szAppDir,
        _Out_writes_(*puCurDirLen) LPWSTR szCurDir,
        _Inout_ PUINT puCurDirLen,
        _Out_writes_(*puDestDirLen) LPWSTR szDestDir,
        _Inout_ PUINT puDestDirLen
        );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DWORD
APIENTRY
VerInstallFileA(
        _In_ DWORD uFlags,
        _In_ LPCSTR szSrcFileName,
        _In_ LPCSTR szDestFileName,
        _In_ LPCSTR szSrcDir,
        _In_ LPCSTR szDestDir,
        _In_ LPCSTR szCurDir,
        _Out_writes_(*puTmpFileLen) LPSTR szTmpFile,
        _Inout_ PUINT puTmpFileLen
        );
DWORD
APIENTRY
VerInstallFileW(
        _In_ DWORD uFlags,
        _In_ LPCWSTR szSrcFileName,
        _In_ LPCWSTR szDestFileName,
        _In_ LPCWSTR szSrcDir,
        _In_ LPCWSTR szDestDir,
        _In_ LPCWSTR szCurDir,
        _Out_writes_(*puTmpFileLen) LPWSTR szTmpFile,
        _Inout_ PUINT puTmpFileLen
        );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
DWORD
APIENTRY
GetFileVersionInfoSizeA(
        _In_ LPCSTR lptstrFilename,
        _Out_opt_ LPDWORD lpdwHandle
        );
DWORD
APIENTRY
GetFileVersionInfoSizeW(
        _In_ LPCWSTR lptstrFilename,
        _Out_opt_ LPDWORD lpdwHandle
        );
BOOL
APIENTRY
GetFileVersionInfoA(
        _In_ LPCSTR lptstrFilename,
        _Reserved_ DWORD dwHandle,
        _In_ DWORD dwLen,
        _Out_writes_bytes_(dwLen) LPVOID lpData
        );
BOOL
APIENTRY
GetFileVersionInfoW(
        _In_ LPCWSTR lptstrFilename,
        _Reserved_ DWORD dwHandle,
        _In_ DWORD dwLen,
        _Out_writes_bytes_(dwLen) LPVOID lpData
        );
#endif
#pragma endregion
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
DWORD APIENTRY GetFileVersionInfoSizeExA(_In_ DWORD dwFlags, _In_ LPCSTR lpwstrFilename, _Out_ LPDWORD lpdwHandle);
DWORD APIENTRY GetFileVersionInfoSizeExW(_In_ DWORD dwFlags, _In_ LPCWSTR lpwstrFilename, _Out_ LPDWORD lpdwHandle);
BOOL APIENTRY GetFileVersionInfoExA(_In_ DWORD dwFlags,
                                    _In_ LPCSTR lpwstrFilename,
                                    _Reserved_ DWORD dwHandle,
                                    _In_ DWORD dwLen,
                                    _Out_writes_bytes_(dwLen) LPVOID lpData);
BOOL APIENTRY GetFileVersionInfoExW(_In_ DWORD dwFlags,
                                    _In_ LPCWSTR lpwstrFilename,
                                    _Reserved_ DWORD dwHandle,
                                    _In_ DWORD dwLen,
                                    _Out_writes_bytes_(dwLen) LPVOID lpData);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
DWORD
APIENTRY
VerLanguageNameA(
        _In_ DWORD wLang,
        _Out_writes_(cchLang) LPSTR szLang,
        _In_ DWORD cchLang
        );
DWORD
APIENTRY
VerLanguageNameW(
        _In_ DWORD wLang,
        _Out_writes_(cchLang) LPWSTR szLang,
        _In_ DWORD cchLang
        );
BOOL
APIENTRY
VerQueryValueA(
        _In_ LPCVOID pBlock,
        _In_ LPCSTR lpSubBlock,
        _Outptr_result_buffer_(_Inexpressible_("buffer can be PWSTR or DWORD*")) LPVOID * lplpBuffer,
        _Out_ PUINT puLen
        );
BOOL
APIENTRY
VerQueryValueW(
        _In_ LPCVOID pBlock,
        _In_ LPCWSTR lpSubBlock,
        _Outptr_result_buffer_(_Inexpressible_("buffer can be PWSTR or DWORD*")) LPVOID * lplpBuffer,
        _Out_ PUINT puLen
        );
#endif
#pragma endregion
}
