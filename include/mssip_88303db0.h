#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
    extern "C"
    {
#pragma pack (8)
typedef CRYPT_HASH_BLOB CRYPT_DIGEST_DATA;
typedef struct SIP_SUBJECTINFO_
{
    DWORD cbSize;
    GUID *pgSubjectType;
    HANDLE hFile;
    LPCWSTR pwsFileName;
    LPCWSTR pwsDisplayName;
    DWORD dwReserved1;
    DWORD dwIntVersion;
    HCRYPTPROV hProv;
    CRYPT_ALGORITHM_IDENTIFIER DigestAlgorithm;
    DWORD dwFlags;
    DWORD dwEncodingType;
    DWORD dwReserved2;
    DWORD fdwCAPISettings;
    DWORD fdwSecuritySettings;
    DWORD dwIndex;
    DWORD dwUnionChoice;
    union
    {
        struct MS_ADDINFO_FLAT_ *psFlat;
        struct MS_ADDINFO_CATALOGMEMBER_ *psCatMember;
        struct MS_ADDINFO_BLOB_ *psBlob;
    };
    LPVOID pClientData;
} SIP_SUBJECTINFO, *LPSIP_SUBJECTINFO;
typedef struct MS_ADDINFO_FLAT_
{
    DWORD cbStruct;
    struct SIP_INDIRECT_DATA_ *pIndirectData;
} MS_ADDINFO_FLAT, *PMS_ADDINFO_FLAT;
typedef struct MS_ADDINFO_CATALOGMEMBER_
{
    DWORD cbStruct;
    struct CRYPTCATSTORE_ *pStore;
    struct CRYPTCATMEMBER_ *pMember;
} MS_ADDINFO_CATALOGMEMBER, *PMS_ADDINFO_CATALOGMEMBER;
typedef struct MS_ADDINFO_BLOB_
{
    DWORD cbStruct;
    DWORD cbMemObject;
    BYTE *pbMemObject;
    DWORD cbMemSignedMsg;
    BYTE *pbMemSignedMsg;
} MS_ADDINFO_BLOB, *PMS_ADDINFO_BLOB;
typedef struct _SIP_CAP_SET_V2
{
    DWORD cbSize;
    DWORD dwVersion;
    BOOL isMultiSign;
    DWORD dwReserved;
} SIP_CAP_SET_V2, *PSIP_CAP_SET_V2;
typedef struct _SIP_CAP_SET_V3
{
    DWORD cbSize;
    DWORD dwVersion;
    BOOL isMultiSign;
    union
    {
        DWORD dwFlags;
        DWORD dwReserved;
    };
} SIP_CAP_SET_V3, *PSIP_CAP_SET_V3;
typedef SIP_CAP_SET_V3 SIP_CAP_SET;
typedef PSIP_CAP_SET_V3 PSIP_CAP_SET;
typedef struct SIP_INDIRECT_DATA_
{
    CRYPT_ATTRIBUTE_TYPE_VALUE Data;
    CRYPT_ALGORITHM_IDENTIFIER DigestAlgorithm;
    CRYPT_HASH_BLOB Digest;
} SIP_INDIRECT_DATA, *PSIP_INDIRECT_DATA;
#pragma pack()
extern BOOL WINAPI CryptSIPGetSignedDataMsg(
                                IN SIP_SUBJECTINFO *pSubjectInfo,
                                OUT DWORD *pdwEncodingType,
                                IN DWORD dwIndex,
                                IN OUT DWORD *pcbSignedDataMsg,
                                OUT BYTE *pbSignedDataMsg);
typedef BOOL (WINAPI * pCryptSIPGetSignedDataMsg)(
                                IN SIP_SUBJECTINFO *pSubjectInfo,
                                OUT DWORD *pdwEncodingType,
                                IN DWORD dwIndex,
                                IN OUT DWORD *pcbSignedDataMsg,
                                OUT BYTE *pbSignedDataMsg);
extern BOOL WINAPI CryptSIPPutSignedDataMsg(
                                IN SIP_SUBJECTINFO *pSubjectInfo,
                                IN DWORD dwEncodingType,
                                OUT DWORD *pdwIndex,
                                IN DWORD cbSignedDataMsg,
                                IN BYTE *pbSignedDataMsg);
typedef BOOL (WINAPI * pCryptSIPPutSignedDataMsg)(
                                IN SIP_SUBJECTINFO *pSubjectInfo,
                                IN DWORD dwEncodingType,
                                OUT DWORD *pdwIndex,
                                IN DWORD cbSignedDataMsg,
                                IN BYTE *pbSignedDataMsg);
extern BOOL WINAPI CryptSIPCreateIndirectData(
                                IN SIP_SUBJECTINFO *pSubjectInfo,
                                IN OUT DWORD *pcbIndirectData,
                                OUT SIP_INDIRECT_DATA *pIndirectData);
typedef BOOL (WINAPI * pCryptSIPCreateIndirectData)(
                                IN SIP_SUBJECTINFO *pSubjectInfo,
                                IN OUT DWORD *pcbIndirectData,
                                OUT SIP_INDIRECT_DATA *pIndirectData);
extern BOOL WINAPI CryptSIPVerifyIndirectData(
                                IN SIP_SUBJECTINFO *pSubjectInfo,
                                IN SIP_INDIRECT_DATA *pIndirectData);
typedef BOOL (WINAPI * pCryptSIPVerifyIndirectData)(
                                IN SIP_SUBJECTINFO *pSubjectInfo,
                                IN SIP_INDIRECT_DATA *pIndirectData);
extern BOOL WINAPI CryptSIPRemoveSignedDataMsg(
                                IN SIP_SUBJECTINFO *pSubjectInfo,
                                IN DWORD dwIndex);
typedef BOOL (WINAPI * pCryptSIPRemoveSignedDataMsg)(
                                IN SIP_SUBJECTINFO *pSubjectInfo,
                                IN DWORD dwIndex);
#pragma pack(8)
typedef struct SIP_DISPATCH_INFO_
{
    DWORD cbSize;
    HANDLE hSIP;
    pCryptSIPGetSignedDataMsg pfGet;
    pCryptSIPPutSignedDataMsg pfPut;
    pCryptSIPCreateIndirectData pfCreate;
    pCryptSIPVerifyIndirectData pfVerify;
    pCryptSIPRemoveSignedDataMsg pfRemove;
} SIP_DISPATCH_INFO, *LPSIP_DISPATCH_INFO;
typedef BOOL (WINAPI *pfnIsFileSupported)(IN HANDLE hFile,
                                   OUT GUID *pgSubject);
typedef BOOL (WINAPI *pfnIsFileSupportedName)(IN WCHAR *pwszFileName,
                                       OUT GUID *pgSubject);
typedef struct SIP_ADD_NEWPROVIDER_
{
    DWORD cbStruct;
    GUID *pgSubject;
    WCHAR *pwszDLLFileName;
    WCHAR *pwszMagicNumber;
    WCHAR *pwszIsFunctionName;
    WCHAR *pwszGetFuncName;
    WCHAR *pwszPutFuncName;
    WCHAR *pwszCreateFuncName;
    WCHAR *pwszVerifyFuncName;
    WCHAR *pwszRemoveFuncName;
    WCHAR *pwszIsFunctionNameFmt2;
    PWSTR pwszGetCapFuncName;
} SIP_ADD_NEWPROVIDER, *PSIP_ADD_NEWPROVIDER;
#pragma pack()
extern BOOL WINAPI CryptSIPLoad(IN const GUID *pgSubject,
                                IN DWORD dwFlags,
                                IN OUT SIP_DISPATCH_INFO *pSipDispatch);
extern BOOL WINAPI CryptSIPRetrieveSubjectGuid(IN LPCWSTR FileName,
                                               IN OPTIONAL HANDLE hFileIn,
                                               OUT GUID *pgSubject);
extern BOOL WINAPI CryptSIPRetrieveSubjectGuidForCatalogFile(IN LPCWSTR FileName,
                                                             IN OPTIONAL HANDLE hFileIn,
                                                             OUT GUID *pgSubject);
extern BOOL WINAPI CryptSIPAddProvider(IN SIP_ADD_NEWPROVIDER *psNewProv);
extern BOOL WINAPI CryptSIPRemoveProvider(IN GUID *pgProv);
extern BOOL WINAPI CryptSIPGetCaps(_In_ SIP_SUBJECTINFO * pSubjInfo,
                                   _Inout_ SIP_CAP_SET *pCaps);
typedef BOOL (WINAPI *pCryptSIPGetCaps)(_In_ SIP_SUBJECTINFO * pSubjInfo,
                                        _Inout_ SIP_CAP_SET *pCaps);
extern
_Success_(return != FALSE)
BOOL WINAPI CryptSIPGetSealedDigest(_In_ SIP_SUBJECTINFO *pSubjectInfo,
                                           _In_opt_count_(dwSig) const BYTE *pSig,
                                           _In_ DWORD dwSig,
                                           _Out_writes_opt_(*pcbDigest) BYTE *pbDigest,
                                           _Inout_ DWORD *pcbDigest);
typedef
    _Success_(return != FALSE)
    BOOL (WINAPI *pCryptSIPGetSealedDigest)(_In_ SIP_SUBJECTINFO *pSubjectInfo,
                                           _In_opt_count_(dwSig) const BYTE *pSig,
                                           _In_ DWORD dwSig,
                                           _Out_writes_opt_(*pcbDigest) BYTE *pbDigest,
                                           _Inout_ DWORD *pcbDigest);
}
#endif
#pragma endregion
