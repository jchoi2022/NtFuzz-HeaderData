#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "sql.h"
extern "C" {
__declspec(deprecated("ODBC Installer API: SQLInstallODBC is no-op."))
BOOL INSTAPI SQLInstallODBC (_Reserved_ HWND,
                                      _Reserved_ LPCSTR,
                                      _Reserved_ LPCSTR,
                                      _Reserved_ LPCSTR);
BOOL INSTAPI SQLManageDataSources (HWND hwndParent);
BOOL INSTAPI SQLCreateDataSource (HWND hwndParent,
                                      LPCSTR lpszDSN);
_Success_(return)
BOOL INSTAPI SQLGetTranslator
(
    HWND hwnd,
   _Inout_updates_(cchNameMax) LPSTR lpszName,
   WORD cchNameMax,
   WORD* pcchNameOut,
   _Out_writes_(cchPathMax) LPSTR lpszPath,
   WORD cchPathMax,
   WORD* pcchPathOut,
   DWORD* pvOption
);
_Success_(return)
BOOL INSTAPI SQLInstallDriver
(
    LPCSTR lpszInfFile,
    LPCSTR lpszDriver,
    _Out_writes_opt_(cchPathMax) LPSTR lpszPath,
    WORD cchPathMax,
    WORD* pcchPathOut
);
BOOL INSTAPI SQLInstallDriverManager
(
    _Inout_updates_(cchPathMax) LPSTR lpszPath,
    WORD cchPathMax,
    WORD* pcchPathOut
);
_Success_(return)
BOOL INSTAPI SQLGetInstalledDrivers
(
    _Out_writes_(cchBufMax) LPSTR lpszBuf,
    WORD cchBufMax,
    WORD* pcchBufOut
);
__declspec(deprecated("ODBC API: SQLGetAvailableDrivers is a no-op."))
BOOL INSTAPI SQLGetAvailableDrivers
(
    _Reserved_ LPCSTR,
    _Reserved_ LPSTR,
    _Reserved_ WORD,
    _Reserved_ WORD*
);
BOOL INSTAPI SQLConfigDataSource (HWND hwndParent,
                                      WORD fRequest,
                                      LPCSTR lpszDriver,
                                      LPCSTR lpszAttributes);
BOOL INSTAPI SQLRemoveDefaultDataSource(void);
BOOL INSTAPI SQLWriteDSNToIni (LPCSTR lpszDSN,
                                      LPCSTR lpszDriver);
BOOL INSTAPI SQLRemoveDSNFromIni (LPCSTR lpszDSN);
BOOL INSTAPI SQLValidDSN (LPCSTR lpszDSN);
BOOL INSTAPI SQLWritePrivateProfileString(LPCSTR lpszSection,
                                         LPCSTR lpszEntry,
                                         LPCSTR lpszString,
                                         LPCSTR lpszFilename);
_Success_(return != 0)
int INSTAPI SQLGetPrivateProfileString
(
    LPCSTR lpszSection,
    LPCSTR lpszEntry,
    LPCSTR lpszDefault,
    _Out_writes_opt_(cchRetBuffer) LPSTR lpszRetBuffer,
    int cchRetBuffer,
    LPCSTR lpszFilename
);
BOOL INSTAPI SQLRemoveDriverManager(LPDWORD lpdwUsageCount);
_Success_(return)
BOOL INSTAPI SQLInstallTranslator
(
    LPCSTR lpszInfFile,
    LPCSTR lpszTranslator,
    LPCSTR lpszPathIn,
    _Out_writes_(cchPathOutMax) LPSTR lpszPathOut,
    WORD cchPathOutMax,
    WORD* pcchPathOut,
    WORD fRequest,
    LPDWORD lpdwUsageCount
);
BOOL INSTAPI SQLRemoveTranslator(LPCSTR lpszTranslator,
                                 LPDWORD lpdwUsageCount);
BOOL INSTAPI SQLRemoveDriver(LPCSTR lpszDriver,
                             BOOL fRemoveDSN,
                             LPDWORD lpdwUsageCount);
_Success_(return)
BOOL INSTAPI SQLConfigDriver
(
    HWND hwndParent,
    WORD fRequest,
    LPCSTR lpszDriver,
    LPCSTR lpszArgs,
    _Out_writes_(cchMsgMax) LPSTR lpszMsg,
    WORD cchMsgMax,
    WORD* pcchMsgOut
);
_Success_(return==0 ||return==1)
SQLRETURN INSTAPI SQLInstallerError
(
    WORD iError,
    DWORD* pfErrorCode,
    _Out_writes_opt_(cchErrorMsgMax) LPSTR lpszErrorMsg,
    WORD cchErrorMsgMax,
    WORD* pcchErrorMsg
);
SQLRETURN INSTAPI SQLPostInstallerError(DWORD dwErrorCode, LPCSTR lpszErrMsg);
BOOL INSTAPI SQLWriteFileDSN(LPCSTR lpszFileName,
                             LPCSTR lpszAppName,
                             LPCSTR lpszKeyName,
                             LPCSTR lpszString);
_Success_(return)
BOOL INSTAPI SQLReadFileDSN
(
    LPCSTR lpszFileName,
    LPCSTR lpszAppName,
    LPCSTR lpszKeyName,
    _Out_writes_(cchString) LPSTR lpszString,
    WORD cchString,
    WORD* pcchString
);
_Success_(return)
BOOL INSTAPI SQLInstallDriverEx
(
    LPCSTR lpszDriver,
    LPCSTR lpszPathIn,
    _Out_writes_(cchPathOutMax) LPSTR lpszPathOut,
    WORD cchPathOutMax,
    WORD* pcchPathOut,
    WORD fRequest,
    LPDWORD lpdwUsageCount
);
_Success_(return)
BOOL INSTAPI SQLInstallTranslatorEx
(
    LPCSTR lpszTranslator,
    LPCSTR lpszPathIn,
    _Out_writes_(cchPathOutMax) LPSTR lpszPathOut,
    WORD cchPathOutMax,
    WORD* pcchPathOut,
    WORD fRequest,
    LPDWORD lpdwUsageCount
);
BOOL INSTAPI SQLGetConfigMode(UWORD *pwConfigMode);
BOOL INSTAPI SQLSetConfigMode(UWORD wConfigMode);
BOOL INSTAPI ConfigDSN (HWND hwndParent,
                        WORD fRequest,
                        LPCSTR lpszDriver,
                        LPCSTR lpszAttributes);
BOOL INSTAPI ConfigTranslator ( HWND hwndParent,
                                DWORD *pvOption);
BOOL INSTAPI ConfigDriver
(
    HWND hwndParent,
    WORD fRequest,
    LPCSTR lpszDriver,
    LPCSTR lpszArgs,
    _Out_writes_(cchMsgMax) LPSTR lpszMsg,
    WORD cchMsgMax,
    WORD* pcchMsgOut
);
__declspec(deprecated("ODBC API: SQLInstallODBCW is a no-op."))
BOOL INSTAPI SQLInstallODBCW (_Reserved_ HWND,
                                      _Reserved_ LPCWSTR,
                                      _Reserved_ LPCWSTR,
                                      _Reserved_ LPCWSTR);
BOOL INSTAPI SQLCreateDataSourceW (HWND hwndParent,
                                      LPCWSTR lpszDSN);
_Success_(return)
BOOL INSTAPI SQLGetTranslatorW
(
    HWND hwnd,
   _Out_writes_to_opt_(cchNameMax, *pcchNameOut) LPWSTR lpszName,
   WORD cchNameMax,
   WORD* pcchNameOut,
   _Out_writes_to_opt_(cchPathMax, *pcchPathOut) LPWSTR lpszPath,
   WORD cchPathMax,
   WORD* pcchPathOut,
   DWORD* pvOption
);
_Success_(return)
BOOL INSTAPI SQLInstallDriverW
(
    LPCWSTR lpszInfFile,
    LPCWSTR lpszDriver,
    _Out_writes_(cchPathMax) LPWSTR lpszPath,
    WORD cchPathMax,
    WORD* pcchPathOut
);
BOOL INSTAPI SQLInstallDriverManagerW
(
    _Inout_updates_(cchPathMax) LPWSTR lpszPath,
    WORD cchPathMax,
    WORD* pcchPathOut
);
_Success_(return)
BOOL INSTAPI SQLGetInstalledDriversW
(
    _Out_writes_(cchBufMax) LPWSTR lpszBuf,
    WORD cchBufMax,
    WORD* pcchBufOut
);
__declspec(deprecated("ODBC API: SQLGetAvailableDriversW is a no-op."))
BOOL INSTAPI SQLGetAvailableDriversW
(
    _Reserved_ LPCWSTR,
    _Reserved_ LPWSTR,
    _Reserved_ WORD,
    _Reserved_ WORD*
);
BOOL INSTAPI SQLConfigDataSourceW (HWND hwndParent,
                                      WORD fRequest,
                                      LPCWSTR lpszDriver,
                                      LPCWSTR lpszAttributes);
BOOL INSTAPI SQLWriteDSNToIniW (LPCWSTR lpszDSN,
                                      LPCWSTR lpszDriver);
BOOL INSTAPI SQLRemoveDSNFromIniW (LPCWSTR lpszDSN);
BOOL INSTAPI SQLValidDSNW (LPCWSTR lpszDSN);
BOOL INSTAPI SQLWritePrivateProfileStringW(LPCWSTR lpszSection,
                                         LPCWSTR lpszEntry,
                                         LPCWSTR lpszString,
                                         LPCWSTR lpszFilename);
_Success_(return != 0)
int INSTAPI SQLGetPrivateProfileStringW
(
    _In_opt_ LPCWSTR lpszSection,
    _In_opt_ LPCWSTR lpszEntry,
    _In_opt_ LPCWSTR lpszDefault,
    _Out_writes_opt_(cchRetBuffer) LPWSTR lpszRetBuffer,
    int cchRetBuffer,
    _In_opt_ LPCWSTR lpszFilename
);
_Success_(return)
BOOL INSTAPI SQLInstallTranslatorW
(
    LPCWSTR lpszInfFile,
    LPCWSTR lpszTranslator,
    LPCWSTR lpszPathIn,
    _Out_writes_(cchPathOutMax) LPWSTR lpszPathOut,
    WORD cchPathOutMax,
    WORD* pcchPathOut,
    WORD fRequest,
    LPDWORD lpdwUsageCount
);
BOOL INSTAPI SQLRemoveTranslatorW(LPCWSTR lpszTranslator,
                                 LPDWORD lpdwUsageCount);
BOOL INSTAPI SQLRemoveDriverW(LPCWSTR lpszDriver,
                             BOOL fRemoveDSN,
                             LPDWORD lpdwUsageCount);
_Success_(return)
BOOL INSTAPI SQLConfigDriverW
(
    HWND hwndParent,
    WORD fRequest,
    LPCWSTR lpszDriver,
    LPCWSTR lpszArgs,
    _Out_writes_(cchMsgMax) LPWSTR lpszMsg,
    WORD cchMsgMax,
    WORD* pcchMsgOut
);
_Success_(return==0 ||return==1)
SQLRETURN INSTAPI SQLInstallerErrorW
(
    WORD iError,
    DWORD* pfErrorCode,
    _Out_writes_opt_(cchErrorMsgMax) LPWSTR lpszErrorMsg,
    WORD cchErrorMsgMax,
    WORD* pcchErrorMsg
);
SQLRETURN INSTAPI SQLPostInstallerErrorW(DWORD dwErrorCode,
                            LPCWSTR lpszErrorMsg);
BOOL INSTAPI SQLWriteFileDSNW(LPCWSTR lpszFileName,
                              LPCWSTR lpszAppName,
                              LPCWSTR lpszKeyName,
                              LPCWSTR lpszString);
_Success_(return)
BOOL INSTAPI SQLReadFileDSNW
(
    LPCWSTR lpszFileName,
    LPCWSTR lpszAppName,
    LPCWSTR lpszKeyName,
    _Out_writes_(cchString) LPWSTR lpszString,
    WORD cchString,
    WORD* pcchString
);
_Success_(return)
BOOL INSTAPI SQLInstallDriverExW
(
    LPCWSTR lpszDriver,
    LPCWSTR lpszPathIn,
    _Out_writes_(cchPathOutMax) LPWSTR lpszPathOut,
    WORD cchPathOutMax,
    WORD* pcchPathOut,
    WORD fRequest,
    LPDWORD lpdwUsageCount
);
_Success_(return)
BOOL INSTAPI SQLInstallTranslatorExW
(
    LPCWSTR lpszTranslator,
    LPCWSTR lpszPathIn,
    _Out_writes_(cchPathOutMax) LPWSTR lpszPathOut,
    WORD cchPathOutMax,
    WORD* pcchPathOut,
    WORD fRequest,
    LPDWORD lpdwUsageCount
);
BOOL INSTAPI ConfigDSNW (HWND hwndParent,
                        WORD fRequest,
                        LPCWSTR lpszDriver,
                        LPCWSTR lpszAttributes);
BOOL INSTAPI ConfigDriverW
(
    HWND hwndParent,
    WORD fRequest,
    LPCWSTR lpszDriver,
    LPCWSTR lpszArgs,
    _Out_writes_(cchMsgMax) LPWSTR lpszMsg,
    WORD cchMsgMax,
    WORD* pcchMsgOut
);
}
#endif
#pragma endregion
