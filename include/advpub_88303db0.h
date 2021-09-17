#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <setupapi.h>
#include <cfgmgr32.h>
extern "C" {
HRESULT WINAPI RunSetupCommand(HWND hWnd, LPCSTR szCmdName, LPCSTR szInfSection, LPCSTR szDir, LPCSTR lpszTitle, HANDLE* phEXE, DWORD dwFlags, LPVOID pvReserved);
DWORD WINAPI NeedRebootInit();
BOOL WINAPI NeedReboot(DWORD dwRebootCheck);
HRESULT WINAPI RebootCheckOnInstall(HWND hwnd, LPCSTR pszINF, LPCSTR pszSec, DWORD dwReserved);
HRESULT WINAPI TranslateInfString(
    _In_ LPCSTR pszInfFilename,
    _In_ LPCSTR pszInstallSection,
    _In_ LPCSTR pszTranslateSection,
    _In_ LPCSTR pszTranslateKey,
    _Out_writes_opt_(cchBuffer) LPSTR pszBuffer,
    _In_ DWORD cchBuffer,
    _Out_ PDWORD pdwRequiredSize,
    _Reserved_ PVOID pvReserved
    );
typedef struct _StrEntryA {
    LPSTR pszName;
    LPSTR pszValue;
} STRENTRYA, *LPSTRENTRYA;
typedef struct _StrTableA {
    DWORD cEntries;
    STRENTRYA* pse;
} STRTABLEA, *LPSTRTABLEA;
typedef STRENTRYA STRENTRY;
typedef LPSTRENTRYA LPSTRENTRY;
typedef STRTABLEA STRTABLE;
typedef const STRTABLEA CSTRTABLE;
typedef const STRTABLEA *LPCSTRTABLEA;
HRESULT WINAPI RegInstall(HMODULE hmod, LPCSTR pszSection, const STRTABLEA* pstTable);
typedef HRESULT (WINAPI *REGINSTALLA)(
    HMODULE hm,
    LPCSTR pszSection,
    LPCSTRTABLEA pstTable
);
HRESULT WINAPI LaunchINFSectionEx(
    _In_opt_ HWND hwnd,
    _In_opt_ HINSTANCE hInstance,
    _In_ LPSTR pszParms,
    _In_ INT nShow
    );
typedef struct _CabInfoA {
    LPSTR pszCab;
    LPSTR pszInf;
    LPSTR pszSection;
    CHAR szSrcPath[MAX_PATH];
    DWORD dwFlags;
} CABINFOA, *PCABINFOA;
typedef CABINFOA CABINFO;
typedef PCABINFOA PCABINFO;
HRESULT WINAPI ExecuteCab(HWND hwnd, CABINFOA* pCab, LPVOID pReserved);
HRESULT WINAPI AdvInstallFile(HWND hwnd, LPCSTR lpszSourceDir, LPCSTR lpszSourceFile, LPCSTR lpszDestDir, LPCSTR lpszDestFile, DWORD dwFlags, DWORD dwReserved);
HRESULT WINAPI RegSaveRestore(HWND hWnd, LPCSTR pszTitleString, HKEY hkBckupKey, LPCSTR pcszRootKey, LPCSTR pcszSubKey, LPCSTR pcszValueName, DWORD dwFlags);
HRESULT WINAPI RegSaveRestoreOnINF(HWND hWnd, LPCSTR pszTitle, LPCSTR pszINF, LPCSTR pszSection, HKEY hHKLMBackKey, HKEY hHKCUBackKey, DWORD dwFlags);
HRESULT WINAPI RegRestoreAll(
    _In_opt_ HWND hWnd,
    _In_opt_ LPCSTR pszTitleString,
    _In_ HKEY hkBckupKey
    );
HRESULT WINAPI FileSaveRestore(
    HWND hDlg,
    _In_opt_ LPSTR lpFileList,
    LPCSTR lpDir,
    LPCSTR lpBaseName,
    DWORD dwFlags);
HRESULT WINAPI FileSaveRestoreOnINF(HWND hWnd, LPCSTR pszTitle, LPCSTR pszINF, LPCSTR pszSection, LPCSTR pszBackupDir, LPCSTR pszBaseBackupFile, DWORD dwFlags);
HRESULT WINAPI AddDelBackupEntry(_In_opt_ LPCSTR lpcszFileList, _In_opt_ LPCSTR lpcszBackupDir, _In_opt_ LPCSTR lpcszBaseName, DWORD dwFlags);
HRESULT WINAPI FileSaveMarkNotExist(
    _In_opt_ LPCSTR lpFileList,
    _In_opt_ LPCSTR lpDir,
    _In_opt_ LPCSTR lpBaseName);
HRESULT WINAPI GetVersionFromFile(LPCSTR lpszFilename, _Out_ LPDWORD pdwMSVer, _Out_ LPDWORD pdwLSVer, BOOL bVersion);
HRESULT WINAPI GetVersionFromFileEx(LPCSTR lpszFilename, _Out_ LPDWORD pdwMSVer, _Out_ LPDWORD pdwLSVer, BOOL bVersion);
BOOL WINAPI IsNTAdmin(DWORD dwReserved, DWORD *lpdwReserved);
HRESULT WINAPI DelNode(LPCSTR pszFileOrDirName, DWORD dwFlags);
HRESULT WINAPI DelNodeRunDLL32(HWND hwnd, HINSTANCE hInstance, _Inout_ LPSTR pszParms, INT nShow);
HRESULT WINAPI OpenINFEngine(LPCSTR pszInfFilename, LPCSTR pszInstallSection, DWORD dwFlags, HINF* phInf, PVOID pvReserved);
HRESULT WINAPI TranslateInfStringEx(HINF hInf, LPCSTR pszInfFilename, LPCSTR pszTranslateSection, LPCSTR pszTranslateKey, _Inout_updates_to_(dwBufferSize, *pdwRequiredSize) LPSTR pszBuffer, DWORD dwBufferSize, PDWORD pdwRequiredSize, PVOID pvReserved);
HRESULT WINAPI CloseINFEngine(HINF hInf);
HRESULT WINAPI ExtractFiles(LPCSTR pszCabName, LPCSTR pszExpandDir, DWORD dwFlags, LPCSTR pszFileList, LPVOID lpReserved, DWORD dwReserved);
INT WINAPI LaunchINFSection(HWND hwndOwner, HINSTANCE hInstance, _Inout_ LPSTR pszParams, INT nShow);
HRESULT WINAPI UserInstStubWrapper(HWND hwnd, HINSTANCE hInstance, LPCSTR pszParms, INT nShow);
HRESULT WINAPI UserUnInstStubWrapper(HWND hwnd, HINSTANCE hInstance, LPCSTR pszParms, INT nShow);
typedef struct _PERUSERSECTIONA {
    CHAR szGUID[MAX_GUID_STRING_LEN + 20];
    CHAR szDispName[128];
    CHAR szLocale[10];
    CHAR szStub[MAX_PATH*4];
    CHAR szVersion[32];
    CHAR szCompID[128];
    DWORD dwIsInstalled;
    BOOL bRollback;
} PERUSERSECTIONA, *PPERUSERSECTIONA;
typedef PERUSERSECTIONA PERUSERSECTION;
typedef PPERUSERSECTIONA PPERUSERSECTION;
HRESULT WINAPI SetPerUserSecValues(PERUSERSECTIONA* pPerUser);
}
#endif
#pragma endregion
