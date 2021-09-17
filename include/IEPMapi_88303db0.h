#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum {
    IELAUNCHOPTION_SCRIPTDEBUG = 0x00000001,
    IELAUNCHOPTION_FORCE_COMPAT = 0x00000002,
    IELAUNCHOPTION_FORCE_EDGE = 0x00000004,
    IELAUNCHOPTION_LOCK_ENGINE = 0x00000008,
} IELAUNCHOPTION_FLAGS;
typedef struct _IELAUNCHURLINFO {
    DWORD cbSize;
    DWORD dwCreationFlags;
    DWORD dwLaunchOptionFlags;
} IELAUNCHURLINFO, *LPIELAUNCHURLINFO;
STDAPI IESaveFile(
    _In_ HANDLE hState,
    _In_ LPCWSTR lpwstrSourceFile
    );
STDAPI IECancelSaveFile(
    _In_ HANDLE hState
    );
STDAPI IEShowSaveFileDialog(
    _In_ HWND hwnd,
    _In_ LPCWSTR lpwstrInitialFileName,
    _In_opt_ LPCWSTR lpwstrInitialDir,
    _In_opt_ LPCWSTR lpwstrFilter,
    _In_opt_ LPCWSTR lpwstrDefExt,
    _In_ DWORD dwFilterIndex,
    _In_ DWORD dwFlags,
    _Outptr_ LPWSTR *lppwstrDestinationFilePath,
    _Out_ HANDLE *phState
    );
STDAPI IEShowOpenFileDialog(
    __in HWND hwnd,
    __inout_ecount(cchMaxFileName) LPWSTR lpwstrFileName,
    __in DWORD cchMaxFileName,
    __in_opt LPCWSTR lpwstrInitialDir,
    __in_opt LPCWSTR lpwstrFilter,
    __in_opt LPCWSTR lpwstrDefExt,
    __in DWORD dwFilterIndex,
    __in DWORD dwFlags,
    __out HANDLE *phFile
    );
STDAPI IEGetWriteableLowHKCU(
    _Out_ HKEY *pHKey
    );
STDAPI IEGetWriteableFolderPath(
    _In_ REFGUID clsidFolderID,
    _Outptr_ LPWSTR *lppwstrPath
    );
STDAPI IEIsProtectedModeProcess(
    _Out_ BOOL *pbResult
    );
STDAPI IEIsProtectedModeURL(
    _In_ LPCWSTR lpwstrUrl
    );
STDAPI IELaunchURL(
    _In_ LPCWSTR lpwstrUrl,
    _Inout_ PROCESS_INFORMATION *lpProcInfo,
    _In_opt_ VOID *lpInfo
    );
STDAPI IERefreshElevationPolicy();
STDAPI IEGetProtectedModeCookie(_In_ LPCWSTR lpszURL,
                                _In_ LPCWSTR lpszCookieName,
                                _Inout_updates_(*pcchCookieData) LPWSTR lpszCookieData,
                                _Inout_ DWORD *pcchCookieData,
                                _In_ DWORD dwFlags);
STDAPI IESetProtectedModeCookie(_In_ LPCWSTR lpszURL,
                                _In_ LPCWSTR lpszCookieName,
                                _In_ LPCWSTR lpszCookieData,
                                _In_ DWORD dwFlags);
STDAPI IERegisterWritableRegistryKey(
    GUID guid,
    _In_ LPCWSTR lpSubkey,
    BOOL fSubkeyAllowed
);
STDAPI IERegisterWritableRegistryValue(
    GUID guid,
    _In_ LPCWSTR lpPath,
    _In_ LPCWSTR lpValueName,
    DWORD dwType,
    _In_reads_bytes_opt_(cbMaxData) const BYTE* lpData,
    DWORD cbMaxData
);
STDAPI IEUnregisterWritableRegistry(
    GUID guid
);
STDAPI IERegCreateKeyEx(
  _In_ LPCWSTR lpSubKey,
  _In_ DWORD Reserved,
  _In_opt_ LPWSTR lpClass,
  _In_ DWORD dwOptions,
  _In_ REGSAM samDesired,
  _In_opt_ LPSECURITY_ATTRIBUTES lpSecurityAttributes,
  _Out_ PHKEY phkResult,
  _Out_ LPDWORD lpdwDisposition);
STDAPI IERegSetValueEx(
  _In_ LPCWSTR lpSubKey,
  _In_ LPCWSTR lpValueName,
  _In_ DWORD Reserved,
  _In_ DWORD dwType,
  _In_reads_bytes_(cbData) const BYTE* lpData,
  _In_ DWORD cbData);
HANDLE IECreateFile(
  _In_ LPCWSTR lpFileName,
  DWORD dwDesiredAccess,
  DWORD dwShareMode,
  _In_ LPSECURITY_ATTRIBUTES lpSecurityAttributes,
  DWORD dwCreationDisposition,
  DWORD dwFlagsAndAttributes,
  _In_opt_ HANDLE hTemplateFile
);
BOOL IEDeleteFile(
  _In_ LPCWSTR lpFileName
);
BOOL IERemoveDirectory(
  _In_ LPCWSTR lpPathName
);
BOOL IEMoveFileEx(
  _In_ LPCWSTR lpExistingFileName,
  _In_ LPCWSTR lpNewFileName,
  DWORD dwFlags
);
BOOL IECreateDirectory(
  _In_ LPCWSTR lpPathName,
  _In_ LPSECURITY_ATTRIBUTES lpSecurityAttributes
);
BOOL IEGetFileAttributesEx(
  _In_ LPCWSTR lpFileName,
  GET_FILEEX_INFO_LEVELS fInfoLevelId,
  _In_ LPVOID lpFileInformation
);
HANDLE IEFindFirstFile(
  _In_ LPCWSTR lpFileName,
  _In_ LPWIN32_FIND_DATA lpFindFileData
);
EXTERN_C GUID CATID_AppContainerCompatible;
#endif
#pragma endregion
