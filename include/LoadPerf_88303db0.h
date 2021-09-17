#include <winapifamily.h>
#pragma region Desktop Family or WinMgmt Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT)
extern "C" {
LOADPERF_FUNCTION
InstallPerfDllW(
    _In_opt_ LPCWSTR szComputerName,
    _In_ LPCWSTR lpIniFile,
    _In_ ULONG_PTR dwFlags
);
LOADPERF_FUNCTION
InstallPerfDllA(
    _In_opt_ LPCSTR szComputerName,
    _In_ LPCSTR lpIniFile,
    _In_ ULONG_PTR dwFlags
);
LOADPERF_FUNCTION
LoadPerfCounterTextStringsA(
    _In_ LPSTR lpCommandLine,
    _In_ BOOL bQuietModeArg
);
LOADPERF_FUNCTION
LoadPerfCounterTextStringsW(
    _In_ LPWSTR lpCommandLine,
    _In_ BOOL bQuietModeArg
);
LOADPERF_FUNCTION
UnloadPerfCounterTextStringsW(
    _In_ LPWSTR lpCommandLine,
    _In_ BOOL bQuietModeArg
);
LOADPERF_FUNCTION
UnloadPerfCounterTextStringsA(
    _In_ LPSTR lpCommandLine,
    _In_ BOOL bQuietModeArg
);
LOADPERF_FUNCTION
UpdatePerfNameFilesA(
    _In_ LPCSTR szNewCtrFilePath,
    _In_opt_ LPCSTR szNewHlpFilePath,
    _In_ LPSTR szLanguageID,
    _In_ ULONG_PTR dwFlags
);
LOADPERF_FUNCTION
UpdatePerfNameFilesW(
    _In_ LPCWSTR szNewCtrFilePath,
    _In_opt_ LPCWSTR szNewHlpFilePath,
    _In_ LPWSTR szLanguageID,
    _In_ ULONG_PTR dwFlags
);
LOADPERF_FUNCTION
SetServiceAsTrustedA(
    _In_opt_ LPCSTR szReserved,
    _In_ LPCSTR szServiceName
);
LOADPERF_FUNCTION
SetServiceAsTrustedW(
    _In_opt_ LPCWSTR szReserved,
    _In_ LPCWSTR szServiceName
);
DWORD
BackupPerfRegistryToFileW(
    _In_ LPCWSTR szFileName,
    _In_opt_ LPCWSTR szCommentString
);
DWORD
RestorePerfRegistryFromFileW(
    _In_opt_ LPCWSTR szFileName,
    _In_opt_ LPCWSTR szLangId
);
}
#endif
#pragma endregion
