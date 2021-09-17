#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef WCHAR CSBFT;
typedef void *HCSBC;
typedef struct tagCSEDB_RSTMAPW {
    RPC_STRING WCHAR *pwszDatabaseName;
    RPC_STRING WCHAR *pwszNewDatabaseName;
} CSEDB_RSTMAPW;
typedef HRESULT (CERTBCLI_CALL FNCERTSRVISSERVERONLINEW)(
    IN WCHAR const *pwszServerName,
    OUT BOOL *pfServerOnline);
HRESULT
CERTBCLI_API
CertSrvIsServerOnlineW(
    IN WCHAR const *pwszServerName,
    OUT BOOL *pfServerOnline);
FNCERTSRVISSERVERONLINEW *pfnCertSrvIsServerOnline = CertSrvIsServerOnline;
typedef HRESULT (CERTBCLI_CALL FNCERTSRVBACKUPGETDYNAMICFILELISTW)(
    IN HCSBC hbc,
    OUT WCHAR **ppwszzFileList,
    OUT DWORD *pcbSize);
HRESULT
CERTBCLI_API
CertSrvBackupGetDynamicFileListW(
    _In_ IN HCSBC hbc,
    _Outptr_ PWSTR *ppwszzFileList,
    _Out_ OUT DWORD *pcbSize);
FNCERTSRVBACKUPGETDYNAMICFILELISTW *pfnCertSrvBackupGetDynamicFileList = CertSrvBackupGetDynamicFileList;
typedef HRESULT (CERTBCLI_CALL FNCERTSRVBACKUPPREPAREW)(
    IN WCHAR const *pwszServerName,
    IN ULONG grbitJet,
    IN ULONG dwBackupFlags,
    OUT HCSBC *phbc);
HRESULT
CERTBCLI_API
CertSrvBackupPrepareW(
    IN WCHAR const *pwszServerName,
    IN ULONG grbitJet,
    IN ULONG dwBackupFlags,
    OUT HCSBC *phbc);
FNCERTSRVBACKUPPREPAREW *pfnCertSrvBackupPrepare = CertSrvBackupPrepare;
typedef HRESULT (CERTBCLI_CALL FNCERTSRVBACKUPGETDATABASENAMESW)(
    IN HCSBC hbc,
    OUT WCHAR **ppwszzAttachmentInformation,
    OUT DWORD *pcbSize);
HRESULT
CERTBCLI_API
CertSrvBackupGetDatabaseNamesW(
    _In_ IN HCSBC hbc,
    _Outptr_ PWSTR *ppwszzAttachmentInformation,
    _Out_ OUT DWORD *pcbSize);
FNCERTSRVBACKUPGETDATABASENAMESW *pfnCertSrvBackupGetDatabaseNames = CertSrvBackupGetDatabaseNames;
typedef HRESULT (CERTBCLI_CALL FNCERTSRVBACKUPOPENFILEW)(
    IN HCSBC hbc,
    IN WCHAR const *pwszAttachmentName,
    IN DWORD cbReadHintSize,
    OUT LARGE_INTEGER *pliFileSize);
HRESULT
CERTBCLI_API
CertSrvBackupOpenFileW(
    IN HCSBC hbc,
    IN WCHAR const *pwszAttachmentName,
    IN DWORD cbReadHintSize,
    OUT LARGE_INTEGER *pliFileSize);
FNCERTSRVBACKUPOPENFILEW *pfnCertSrvBackupOpenFile = CertSrvBackupOpenFile;
typedef HRESULT (CERTBCLI_CALL FNCERTSRVBACKUPREAD)(
    IN HCSBC hbc,
    OUT VOID *pvBuffer,
    IN DWORD cbBuffer,
    OUT DWORD *pcbRead);
HRESULT
CERTBCLI_API
CertSrvBackupRead(
    IN HCSBC hbc,
    OUT VOID *pvBuffer,
    IN DWORD cbBuffer,
    OUT DWORD *pcbRead);
FNCERTSRVBACKUPREAD *pfnCertSrvBackupRead = CertSrvBackupRead;
typedef HRESULT (CERTBCLI_CALL FNCERTSRVBACKUPCLOSE)(
    IN HCSBC hbc);
HRESULT
CERTBCLI_API
CertSrvBackupClose(
    IN HCSBC hbc);
FNCERTSRVBACKUPCLOSE *pfnCertSrvBackupClose = CertSrvBackupClose;
typedef HRESULT (CERTBCLI_CALL FNCERTSRVBACKUPGETBACKUPLOGSW)(
    IN HCSBC hbc,
    OUT WCHAR **ppwszzBackupLogFiles,
    OUT DWORD *pcbSize);
HRESULT
CERTBCLI_API
CertSrvBackupGetBackupLogsW(
    _In_ IN HCSBC hbc,
    _Outptr_ PWSTR *ppwszzBackupLogFiles,
    _Out_ OUT DWORD *pcbSize);
FNCERTSRVBACKUPGETBACKUPLOGSW *pfnCertSrvBackupGetBackupLogs = CertSrvBackupGetBackupLogs;
typedef HRESULT (CERTBCLI_CALL FNCERTSRVBACKUPTRUNCATELOGS)(
    IN HCSBC hbc);
HRESULT
CERTBCLI_API
CertSrvBackupTruncateLogs(
    IN HCSBC hbc);
FNCERTSRVBACKUPTRUNCATELOGS *pfnCertSrvBackupTruncateLogs = CertSrvBackupTruncateLogs;
typedef HRESULT (CERTBCLI_CALL FNCERTSRVBACKUPEND)(
    IN HCSBC hbc);
HRESULT
CERTBCLI_API
CertSrvBackupEnd(
    IN HCSBC hbc);
FNCERTSRVBACKUPEND *pfnCertSrvBackupEnd = CertSrvBackupEnd;
typedef VOID (CERTBCLI_CALL FNCERTSRVBACKUPFREE)(
    IN VOID *pv);
VOID
CERTBCLI_API
CertSrvBackupFree(
    IN VOID *pv);
FNCERTSRVBACKUPFREE *pfnCertSrvBackupFree = CertSrvBackupFree;
typedef HRESULT (CERTBCLI_CALL FNCERTSRVRESTOREGETDATABASELOCATIONSW)(
    IN HCSBC hbc,
    OUT WCHAR **ppwszzDatabaseLocationList,
    OUT DWORD *pcbSize);
HRESULT
CERTBCLI_API
CertSrvRestoreGetDatabaseLocationsW(
    _In_ IN HCSBC hbc,
    _Outptr_ PWSTR *ppwszzDatabaseLocationList,
    _Out_ OUT DWORD *pcbSize);
FNCERTSRVRESTOREGETDATABASELOCATIONSW *pfnCertSrvRestoreGetDatabaseLocations = CertSrvRestoreGetDatabaseLocations;
typedef HRESULT (CERTBCLI_CALL FNCERTSRVRESTOREPREPAREW)(
    IN WCHAR const *pwszServerName,
    IN ULONG dwRestoreFlags,
    OUT HCSBC *phbc);
HRESULT
CERTBCLI_API
CertSrvRestorePrepareW(
    IN WCHAR const *pwszServerName,
    IN ULONG dwRestoreFlags,
    OUT HCSBC *phbc);
FNCERTSRVRESTOREPREPAREW *pfnCertSrvRestorePrepare = CertSrvRestorePrepare;
typedef HRESULT (CERTBCLI_CALL FNCERTSRVRESTOREREGISTERW)(
    OPTIONAL IN HCSBC hbc,
    OPTIONAL IN WCHAR const *pwszCheckPointFilePath,
    OPTIONAL IN WCHAR const *pwszLogPath,
    OPTIONAL IN CSEDB_RSTMAPW rgrstmap[],
    IN LONG crstmap,
    OPTIONAL IN WCHAR const *pwszBackupLogPath,
    IN ULONG genLow,
    IN ULONG genHigh);
HRESULT
CERTBCLI_API
CertSrvRestoreRegisterW(
    OPTIONAL IN HCSBC hbc,
    OPTIONAL IN WCHAR const *pwszCheckPointFilePath,
    OPTIONAL IN WCHAR const *pwszLogPath,
    OPTIONAL IN CSEDB_RSTMAPW rgrstmap[],
    IN LONG crstmap,
    OPTIONAL IN WCHAR const *pwszBackupLogPath,
    IN ULONG genLow,
    IN ULONG genHigh);
HRESULT
CERTBCLI_API
CertSrvRestoreRegisterThroughFile(
    IN HCSBC hbc,
    OPTIONAL IN WCHAR const *pwszCheckPointFilePath,
    OPTIONAL IN WCHAR const *pwszLogPath,
    OPTIONAL IN CSEDB_RSTMAPW rgrstmap[],
    IN LONG crstmap,
    OPTIONAL IN WCHAR const *pwszBackupLogPath,
    IN ULONG genLow,
    IN ULONG genHigh);
FNCERTSRVRESTOREREGISTERW *pfnCertSrvRestoreRegister = CertSrvRestoreRegister;
typedef HRESULT (CERTBCLI_CALL FNCERTSRVRESTOREREGISTERCOMPLETE)(
    OPTIONAL IN HCSBC hbc,
    IN HRESULT hrRestoreState);
HRESULT
CERTBCLI_API
CertSrvRestoreRegisterComplete(
    OPTIONAL IN HCSBC hbc,
    IN HRESULT hrRestoreState);
FNCERTSRVRESTOREREGISTERCOMPLETE *pfnCertSrvRestoreRegisterComplete = CertSrvRestoreRegisterComplete;
typedef HRESULT (CERTBCLI_CALL FNCERTSRVRESTOREEND)(
    IN HCSBC hbc);
HRESULT
CERTBCLI_API
CertSrvRestoreEnd(
    IN HCSBC hbc);
FNCERTSRVRESTOREEND *pfnCertSrvRestoreEnd = CertSrvRestoreEnd;
typedef HRESULT (CERTBCLI_CALL FNCERTSRVSERVERCONTROLW)(
    IN WCHAR const *pwszServerName,
    IN DWORD dwControlFlags,
    OPTIONAL OUT DWORD *pcbOut,
    OPTIONAL OUT BYTE **ppbOut);
HRESULT
CERTBCLI_API
CertSrvServerControlW(
    IN WCHAR const *pwszServerName,
    IN DWORD dwControlFlags,
    OPTIONAL OUT DWORD *pcbOut,
    OPTIONAL OUT BYTE **ppbOut);
FNCERTSRVSERVERCONTROLW *pfnCertSrvServerControl = CertSrvServerControl;
}
#endif
#pragma endregion
