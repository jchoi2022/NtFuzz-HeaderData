#include <winapifamily.h>
#pragma region Desktop Family or Wintrust Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINTRUST)
#include "mssip.h"
    extern "C"
    {
#include <pshpack8.h>
typedef struct CRYPTCATSTORE_
{
    DWORD cbStruct;
    DWORD dwPublicVersion;
    LPWSTR pwszP7File;
    HCRYPTPROV hProv;
    DWORD dwEncodingType;
    DWORD fdwStoreFlags;
    HANDLE hReserved;
    HANDLE hAttrs;
    HCRYPTMSG hCryptMsg;
    HANDLE hSorted;
} CRYPTCATSTORE;
typedef struct CRYPTCATMEMBER_
{
    DWORD cbStruct;
    LPWSTR pwszReferenceTag;
    LPWSTR pwszFileName;
    GUID gSubjectType;
    DWORD fdwMemberFlags;
    struct SIP_INDIRECT_DATA_ *pIndirectData;
    DWORD dwCertVersion;
    DWORD dwReserved;
    HANDLE hReserved;
    CRYPT_ATTR_BLOB sEncodedIndirectData;
    CRYPT_ATTR_BLOB sEncodedMemberInfo;
} CRYPTCATMEMBER;
typedef struct CRYPTCATATTRIBUTE_
{
    DWORD cbStruct;
    LPWSTR pwszReferenceTag;
    DWORD dwAttrTypeAndAction;
    DWORD cbValue;
    BYTE *pbValue;
    DWORD dwReserved;
} CRYPTCATATTRIBUTE;
typedef struct CRYPTCATCDF_
{
    DWORD cbStruct;
    HANDLE hFile;
    DWORD dwCurFilePos;
    DWORD dwLastMemberOffset;
    BOOL fEOF;
    LPWSTR pwszResultDir;
    HANDLE hCATStore;
} CRYPTCATCDF;
typedef struct CATALOG_INFO_
{
    DWORD cbStruct;
    _Field_z_
    WCHAR wszCatalogFile[MAX_PATH];
} CATALOG_INFO;
typedef HANDLE HCATADMIN;
typedef HANDLE HCATINFO;
#include <poppack.h>
typedef void (WINAPI *PFN_CDF_PARSE_ERROR_CALLBACK)(IN DWORD dwErrorArea,
                                                    IN DWORD dwLocalError,
                                                    IN WCHAR *pwszLine);
extern HANDLE WINAPI CryptCATOpen(_In_ LPWSTR pwszFileName,
                                  IN DWORD fdwOpenFlags,
                                  IN OPTIONAL HCRYPTPROV hProv,
                                  IN OPTIONAL DWORD dwPublicVersion,
                                  IN OPTIONAL DWORD dwEncodingType);
extern void WINAPI
CryptCATSetCreatePageHashesFlag( IN HANDLE hCatalog, IN BOOL newCreatePageHashesFlag );
extern BOOL WINAPI CryptCATClose(IN HANDLE hCatalog);
extern CRYPTCATSTORE * WINAPI CryptCATStoreFromHandle(IN HANDLE hCatalog);
extern HANDLE WINAPI CryptCATHandleFromStore(IN CRYPTCATSTORE *pCatStore);
extern BOOL WINAPI CryptCATPersistStore(IN HANDLE hCatalog);
extern CRYPTCATATTRIBUTE * WINAPI CryptCATGetCatAttrInfo(IN HANDLE hCatalog,
                                                         _In_ LPWSTR pwszReferenceTag);
extern CRYPTCATATTRIBUTE * WINAPI CryptCATPutCatAttrInfo(IN HANDLE hCatalog,
                                                         _In_ LPWSTR pwszReferenceTag,
                                                         IN DWORD dwAttrTypeAndAction,
                                                         IN DWORD cbData,
                                                         IN BYTE *pbData);
extern CRYPTCATATTRIBUTE * WINAPI CryptCATEnumerateCatAttr(IN HANDLE hCatalog,
                                                           IN CRYPTCATATTRIBUTE *pPrevAttr);
extern CRYPTCATMEMBER * WINAPI CryptCATGetMemberInfo(IN HANDLE hCatalog,
                                                     _In_ LPWSTR pwszReferenceTag);
extern CRYPTCATMEMBER * WINAPI CryptCATAllocSortedMemberInfo(IN HANDLE hCatalog,
                                                     _In_ LPWSTR pwszReferenceTag);
extern void WINAPI CryptCATFreeSortedMemberInfo(IN HANDLE hCatalog,
                                                      IN CRYPTCATMEMBER *pCatMember);
extern CRYPTCATATTRIBUTE * WINAPI CryptCATGetAttrInfo(IN HANDLE hCatalog,
                                                      IN CRYPTCATMEMBER *pCatMember,
                                                      _In_ LPWSTR pwszReferenceTag);
extern CRYPTCATMEMBER * WINAPI CryptCATPutMemberInfo(IN HANDLE hCatalog,
                                                     _In_opt_ LPWSTR pwszFileName,
                                                     _In_ LPWSTR pwszReferenceTag,
                                                     IN GUID *pgSubjectType,
                                                     IN DWORD dwCertVersion,
                                                     IN DWORD cbSIPIndirectData,
                                                     IN BYTE *pbSIPIndirectData);
extern CRYPTCATATTRIBUTE * WINAPI CryptCATPutAttrInfo(IN HANDLE hCatalog,
                                                      IN CRYPTCATMEMBER *pCatMember,
                                                      _In_ LPWSTR pwszReferenceTag,
                                                      IN DWORD dwAttrTypeAndAction,
                                                      IN DWORD cbData,
                                                      IN BYTE *pbData);
extern CRYPTCATMEMBER * WINAPI CryptCATEnumerateMember(IN HANDLE hCatalog,
                                                       IN CRYPTCATMEMBER *pPrevMember);
extern CRYPTCATATTRIBUTE * WINAPI CryptCATEnumerateAttr(IN HANDLE hCatalog,
                                                        IN CRYPTCATMEMBER *pCatMember,
                                                        IN CRYPTCATATTRIBUTE *pPrevAttr);
extern CRYPTCATCDF * WINAPI CryptCATCDFOpen(_In_ LPWSTR pwszFilePath,
                                            _In_opt_ PFN_CDF_PARSE_ERROR_CALLBACK pfnParseError);
extern BOOL WINAPI CryptCATCDFClose(IN CRYPTCATCDF *pCDF);
extern CRYPTCATATTRIBUTE * WINAPI CryptCATCDFEnumCatAttributes(CRYPTCATCDF *pCDF,
                                                               CRYPTCATATTRIBUTE *pPrevAttr,
                                                                PFN_CDF_PARSE_ERROR_CALLBACK pfnParseError);
extern CRYPTCATMEMBER * WINAPI CryptCATCDFEnumMembers(IN CRYPTCATCDF *pCDF,
                                                      IN CRYPTCATMEMBER *pPrevMember,
                                                      IN OPTIONAL PFN_CDF_PARSE_ERROR_CALLBACK pfnParseError);
extern CRYPTCATATTRIBUTE *WINAPI CryptCATCDFEnumAttributes(IN CRYPTCATCDF *pCDF,
                                                           IN CRYPTCATMEMBER *pMember,
                                                           IN CRYPTCATATTRIBUTE *pPrevAttr,
                                                           IN OPTIONAL PFN_CDF_PARSE_ERROR_CALLBACK pfnParseError);
extern BOOL WINAPI IsCatalogFile(IN OPTIONAL HANDLE hFile,
                                      _In_opt_z_ WCHAR *pwszFileName);
_Success_(return != FALSE)
extern BOOL WINAPI CryptCATAdminAcquireContext(
    _Out_ HCATADMIN *phCatAdmin,
    _In_opt_ const GUID *pgSubsystem,
    _Reserved_ DWORD dwFlags
    );
_Success_(return != FALSE)
extern BOOL WINAPI CryptCATAdminAcquireContext2(
    _Out_ HCATADMIN *phCatAdmin,
    _In_opt_ const GUID *pgSubsystem,
    _In_opt_ PCWSTR pwszHashAlgorithm,
    _In_opt_ PCCERT_STRONG_SIGN_PARA
                            pStrongHashPolicy,
    _Reserved_ DWORD dwFlags
    );
extern BOOL WINAPI CryptCATAdminReleaseContext(IN HCATADMIN hCatAdmin,
                                                    IN DWORD dwFlags);
extern BOOL WINAPI CryptCATAdminReleaseCatalogContext(IN HCATADMIN hCatAdmin,
                                                      IN HCATINFO hCatInfo,
                                                      IN DWORD dwFlags);
extern HCATINFO WINAPI CryptCATAdminEnumCatalogFromHash(
    _In_ HCATADMIN hCatAdmin,
    _In_reads_bytes_(cbHash) BYTE *pbHash,
    _In_ DWORD cbHash,
    _Reserved_ DWORD dwFlags,
    _Inout_opt_ HCATINFO *phPrevCatInfo);
_Success_(return != FALSE)
extern BOOL WINAPI CryptCATAdminCalcHashFromFileHandle(
    _In_ HANDLE hFile,
    _Inout_ DWORD *pcbHash,
    _Out_writes_bytes_to_opt_(*pcbHash, *pcbHash) BYTE *pbHash,
    _Reserved_ DWORD dwFlags
    );
_Success_(return != FALSE)
extern BOOL WINAPI CryptCATAdminCalcHashFromFileHandle2(
    _In_ HCATADMIN hCatAdmin,
    _In_ HANDLE hFile,
    _Inout_ DWORD *pcbHash,
    _Out_writes_bytes_to_opt_(*pcbHash, *pcbHash) BYTE *pbHash,
    _Reserved_ DWORD dwFlags
    );
extern HCATINFO WINAPI CryptCATAdminAddCatalog(
    _In_ HCATADMIN hCatAdmin,
    _In_ PWSTR pwszCatalogFile,
    _In_opt_ PWSTR pwszSelectBaseName,
    _In_ DWORD dwFlags
    );
extern BOOL WINAPI CryptCATAdminRemoveCatalog(IN HCATADMIN hCatAdmin,
                                              IN LPCWSTR pwszCatalogFile,
                                              IN DWORD dwFlags);
_Success_(return != FALSE)
extern BOOL WINAPI CryptCATCatalogInfoFromContext(
    _In_ HCATINFO hCatInfo,
    _Inout_ CATALOG_INFO *psCatInfo,
    _In_ DWORD dwFlags
    );
_Success_(return != FALSE)
extern BOOL WINAPI CryptCATAdminResolveCatalogPath(
    _In_ HCATADMIN hCatAdmin,
    _In_z_ WCHAR *pwszCatalogFile,
    _Inout_ CATALOG_INFO *psCatInfo,
    _In_ DWORD dwFlags
    );
extern BOOL WINAPI CryptCATAdminPauseServiceForBackup(IN DWORD dwFlags,
                                                      IN BOOL fResume);
}
#endif
#pragma endregion
