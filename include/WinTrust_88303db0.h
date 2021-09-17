#include <winapifamily.h>
#pragma region Desktop Family or Wintrust Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINTRUST)
#include <wincrypt.h>
extern "C"
{
#include <pshpack8.h>
typedef struct _WINTRUST_DATA
{
    DWORD cbStruct;
    LPVOID pPolicyCallbackData;
    LPVOID pSIPClientData;
    DWORD dwUIChoice;
    DWORD fdwRevocationChecks;
    DWORD dwUnionChoice;
    union
    {
        struct WINTRUST_FILE_INFO_ *pFile;
        struct WINTRUST_CATALOG_INFO_ *pCatalog;
        struct WINTRUST_BLOB_INFO_ *pBlob;
        struct WINTRUST_SGNR_INFO_ *pSgnr;
        struct WINTRUST_CERT_INFO_ *pCert;
    };
    DWORD dwStateAction;
    HANDLE hWVTStateData;
    WCHAR *pwszURLReference;
    DWORD dwProvFlags;
    DWORD dwUIContext;
    struct WINTRUST_SIGNATURE_SETTINGS_ *pSignatureSettings;
} WINTRUST_DATA, *PWINTRUST_DATA;
typedef struct WINTRUST_SIGNATURE_SETTINGS_
{
    DWORD cbStruct;
    DWORD dwIndex;
    DWORD dwFlags;
    DWORD cSecondarySigs;
    DWORD dwVerifiedSigIndex;
    PCERT_STRONG_SIGN_PARA pCryptoPolicy;
} WINTRUST_SIGNATURE_SETTINGS, *PWINTRUST_SIGNATURE_SETTINGS;
typedef struct WINTRUST_FILE_INFO_
{
    DWORD cbStruct;
    LPCWSTR pcwszFilePath;
    HANDLE hFile;
    GUID *pgKnownSubject;
} WINTRUST_FILE_INFO, *PWINTRUST_FILE_INFO;
typedef HANDLE HCATADMIN;
typedef struct WINTRUST_CATALOG_INFO_
{
    DWORD cbStruct;
    DWORD dwCatalogVersion;
    LPCWSTR pcwszCatalogFilePath;
    LPCWSTR pcwszMemberTag;
    LPCWSTR pcwszMemberFilePath;
    HANDLE hMemberFile;
    _Field_size_(cbCalculatedFileHash) BYTE *pbCalculatedFileHash;
    DWORD cbCalculatedFileHash;
    PCCTL_CONTEXT pcCatalogContext;
    HCATADMIN hCatAdmin;
} WINTRUST_CATALOG_INFO, *PWINTRUST_CATALOG_INFO;
typedef struct WINTRUST_BLOB_INFO_
{
    DWORD cbStruct;
    GUID gSubject;
    LPCWSTR pcwszDisplayName;
    DWORD cbMemObject;
    BYTE *pbMemObject;
    DWORD cbMemSignedMsg;
    BYTE *pbMemSignedMsg;
} WINTRUST_BLOB_INFO, *PWINTRUST_BLOB_INFO;
typedef struct WINTRUST_SGNR_INFO_
{
    DWORD cbStruct;
    LPCWSTR pcwszDisplayName;
    CMSG_SIGNER_INFO *psSignerInfo;
    DWORD chStores;
    HCERTSTORE *pahStores;
} WINTRUST_SGNR_INFO, *PWINTRUST_SGNR_INFO;
typedef struct WINTRUST_CERT_INFO_
{
    DWORD cbStruct;
    LPCWSTR pcwszDisplayName;
    CERT_CONTEXT *psCertContext;
    DWORD chStores;
    HCERTSTORE *pahStores;
    DWORD dwFlags;
    FILETIME *psftVerifyAsOf;
} WINTRUST_CERT_INFO, *PWINTRUST_CERT_INFO;
#include <poppack.h>
extern LONG WINAPI WinVerifyTrust(HWND hwnd, GUID *pgActionID,
                                  LPVOID pWVTData);
extern HRESULT WINAPI WinVerifyTrustEx(HWND hwnd, GUID *pgActionID,
                                       WINTRUST_DATA *pWinTrustData);
extern void WINAPI WintrustGetRegPolicyFlags(DWORD *pdwPolicyFlags);
extern BOOL WINAPI WintrustSetRegPolicyFlags(DWORD dwPolicyFlags);
typedef void *(*PFN_CPD_MEM_ALLOC)(_In_ DWORD cbSize);
typedef void (*PFN_CPD_MEM_FREE)(_In_ void *pvMem2Free);
struct _CRYPT_PROVIDER_DATA;
struct _CRYPT_PROVIDER_SGNR;
struct _CRYPT_PROVIDER_PRIVDATA;
typedef BOOL (*PFN_CPD_ADD_STORE)(_In_ struct _CRYPT_PROVIDER_DATA *pProvData,
                                         _In_ HCERTSTORE hStore2Add);
typedef BOOL (*PFN_CPD_ADD_SGNR)(_In_ struct _CRYPT_PROVIDER_DATA *pProvData,
                                        _In_ BOOL fCounterSigner,
                                        _In_opt_ DWORD idxSigner,
                                        _In_ struct _CRYPT_PROVIDER_SGNR *pSgnr2Add);
typedef BOOL (*PFN_CPD_ADD_CERT)(_In_ struct _CRYPT_PROVIDER_DATA *pProvData,
                                        _In_ DWORD idxSigner,
                                        _In_ BOOL fCounterSigner,
                                        _In_opt_ DWORD idxCounterSigner,
                                        _In_ PCCERT_CONTEXT pCert2Add);
typedef BOOL (*PFN_CPD_ADD_PRIVDATA)(_In_ struct _CRYPT_PROVIDER_DATA *pProvData,
                                            _In_ struct _CRYPT_PROVIDER_PRIVDATA *pPrivData2Add);
typedef HRESULT (*PFN_PROVIDER_INIT_CALL)(_Inout_ struct _CRYPT_PROVIDER_DATA *pProvData);
typedef HRESULT (*PFN_PROVIDER_OBJTRUST_CALL)(_Inout_ struct _CRYPT_PROVIDER_DATA *pProvData);
typedef HRESULT (*PFN_PROVIDER_SIGTRUST_CALL)(_Inout_ struct _CRYPT_PROVIDER_DATA *pProvData);
typedef HRESULT (*PFN_PROVIDER_CERTTRUST_CALL)(_Inout_ struct _CRYPT_PROVIDER_DATA *pProvData);
typedef HRESULT (*PFN_PROVIDER_FINALPOLICY_CALL)(_Inout_ struct _CRYPT_PROVIDER_DATA *pProvData);
typedef HRESULT (*PFN_PROVIDER_TESTFINALPOLICY_CALL)(_Inout_ struct _CRYPT_PROVIDER_DATA *pProvData);
typedef HRESULT (*PFN_PROVIDER_CLEANUP_CALL)(_Inout_ struct _CRYPT_PROVIDER_DATA *pProvData);
typedef BOOL (*PFN_PROVIDER_CERTCHKPOLICY_CALL)( _In_ struct _CRYPT_PROVIDER_DATA *pProvData,
                                                        _In_ DWORD idxSigner,
                                                        _In_ BOOL fCounterSignerChain,
                                                        _In_opt_ DWORD idxCounterSigner);
 ((WVT_OFFSETOF(structtypedef, member) + sizeof(((structtypedef *) 0)->member) <= structpassedsize) ? TRUE : FALSE)
                    WVT_ISINSTRUCT(structtypedef, structpassedsize, member)
#include <pshpack8.h>
typedef struct _CRYPT_PROVIDER_DATA
{
    DWORD cbStruct;
    WINTRUST_DATA *pWintrustData;
    BOOL fOpenedFile;
    HWND hWndParent;
    GUID *pgActionID;
    HCRYPTPROV hProv;
    DWORD dwError;
    DWORD dwRegSecuritySettings;
    DWORD dwRegPolicySettings;
    struct _CRYPT_PROVIDER_FUNCTIONS *psPfns;
    DWORD cdwTrustStepErrors;
    DWORD *padwTrustStepErrors;
    DWORD chStores;
    HCERTSTORE *pahStores;
    DWORD dwEncoding;
    HCRYPTMSG hMsg;
    DWORD csSigners;
    struct _CRYPT_PROVIDER_SGNR *pasSigners;
    DWORD csProvPrivData;
    struct _CRYPT_PROVIDER_PRIVDATA *pasProvPrivData;
    DWORD dwSubjectChoice;
    union
    {
        struct _PROVDATA_SIP *pPDSip;
    };
    char *pszUsageOID;
    BOOL fRecallWithState;
    FILETIME sftSystemTime;
    char *pszCTLSignerUsageOID;
    DWORD dwProvFlags;
    DWORD dwFinalError;
    PCERT_USAGE_MATCH pRequestUsage;
    DWORD dwTrustPubSettings;
    DWORD dwUIStateFlags;
    struct _CRYPT_PROVIDER_SIGSTATE *pSigState;
    struct WINTRUST_SIGNATURE_SETTINGS_ *pSigSettings;
} CRYPT_PROVIDER_DATA, *PCRYPT_PROVIDER_DATA;
typedef struct _CRYPT_PROVIDER_SIGSTATE
{
                                   DWORD cbStruct;
    _Field_size_(cSecondarySigs) HCRYPTMSG *rhSecondarySigs;
                                   HCRYPTMSG hPrimarySig;
                                   BOOL fFirstAttemptMade;
                                   BOOL fNoMoreSigs;
                                   DWORD cSecondarySigs;
                                   DWORD dwCurrentIndex;
                                   BOOL fSupportMultiSig;
                                   DWORD dwCryptoPolicySupport;
                                   DWORD iAttemptCount;
                                   BOOL fCheckedSealing;
                                   struct _SEALING_SIGNATURE_ATTRIBUTE *pSealingSignature;
} CRYPT_PROVIDER_SIGSTATE, *PCRYPT_PROVIDER_SIGSTATE;
typedef struct _CRYPT_PROVIDER_FUNCTIONS
{
    DWORD cbStruct;
    PFN_CPD_MEM_ALLOC pfnAlloc;
    PFN_CPD_MEM_FREE pfnFree;
    PFN_CPD_ADD_STORE pfnAddStore2Chain;
    PFN_CPD_ADD_SGNR pfnAddSgnr2Chain;
    PFN_CPD_ADD_CERT pfnAddCert2Chain;
    PFN_CPD_ADD_PRIVDATA pfnAddPrivData2Chain;
    PFN_PROVIDER_INIT_CALL pfnInitialize;
    PFN_PROVIDER_OBJTRUST_CALL pfnObjectTrust;
    PFN_PROVIDER_SIGTRUST_CALL pfnSignatureTrust;
    PFN_PROVIDER_CERTTRUST_CALL pfnCertificateTrust;
    PFN_PROVIDER_FINALPOLICY_CALL pfnFinalPolicy;
    PFN_PROVIDER_CERTCHKPOLICY_CALL pfnCertCheckPolicy;
    PFN_PROVIDER_TESTFINALPOLICY_CALL pfnTestFinalPolicy;
    struct _CRYPT_PROVUI_FUNCS *psUIpfns;
    PFN_PROVIDER_CLEANUP_CALL pfnCleanupPolicy;
} CRYPT_PROVIDER_FUNCTIONS, *PCRYPT_PROVIDER_FUNCTIONS;
typedef BOOL (*PFN_PROVUI_CALL)(_In_ HWND hWndSecurityDialog, _In_ struct _CRYPT_PROVIDER_DATA *pProvData);
typedef struct _CRYPT_PROVUI_FUNCS
{
    DWORD cbStruct;
    struct _CRYPT_PROVUI_DATA *psUIData;
    PFN_PROVUI_CALL pfnOnMoreInfoClick;
    PFN_PROVUI_CALL pfnOnMoreInfoClickDefault;
    PFN_PROVUI_CALL pfnOnAdvancedClick;
    PFN_PROVUI_CALL pfnOnAdvancedClickDefault;
} CRYPT_PROVUI_FUNCS, *PCRYPT_PROVUI_FUNCS;
typedef struct _CRYPT_PROVUI_DATA
{
    DWORD cbStruct;
    DWORD dwFinalError;
    WCHAR *pYesButtonText;
    WCHAR *pNoButtonText;
    WCHAR *pMoreInfoButtonText;
    WCHAR *pAdvancedLinkText;
    WCHAR *pCopyActionText;
    WCHAR *pCopyActionTextNoTS;
    WCHAR *pCopyActionTextNotSigned;
} CRYPT_PROVUI_DATA, *PCRYPT_PROVUI_DATA;
typedef struct _CRYPT_PROVIDER_SGNR
{
    DWORD cbStruct;
    FILETIME sftVerifyAsOf;
    DWORD csCertChain;
    struct _CRYPT_PROVIDER_CERT *pasCertChain;
    DWORD dwSignerType;
    CMSG_SIGNER_INFO *psSigner;
    DWORD dwError;
    DWORD csCounterSigners;
    struct _CRYPT_PROVIDER_SGNR *pasCounterSigners;
    PCCERT_CHAIN_CONTEXT pChainContext;
} CRYPT_PROVIDER_SGNR, *PCRYPT_PROVIDER_SGNR;
typedef struct _CRYPT_PROVIDER_CERT
{
    DWORD cbStruct;
    PCCERT_CONTEXT pCert;
    BOOL fCommercial;
    BOOL fTrustedRoot;
    BOOL fSelfSigned;
    BOOL fTestCert;
    DWORD dwRevokedReason;
    DWORD dwConfidence;
    DWORD dwError;
    CTL_CONTEXT *pTrustListContext;
    BOOL fTrustListSignerCert;
    PCCTL_CONTEXT pCtlContext;
    DWORD dwCtlError;
    BOOL fIsCyclic;
    PCERT_CHAIN_ELEMENT pChainElement;
} CRYPT_PROVIDER_CERT, *PCRYPT_PROVIDER_CERT;
typedef struct _CRYPT_PROVIDER_PRIVDATA
{
    DWORD cbStruct;
    GUID gProviderID;
    DWORD cbProvData;
    void *pvProvData;
} CRYPT_PROVIDER_PRIVDATA, *PCRYPT_PROVIDER_PRIVDATA;
typedef struct _PROVDATA_SIP
{
    DWORD cbStruct;
    GUID gSubject;
    struct SIP_DISPATCH_INFO_ *pSip;
    struct SIP_DISPATCH_INFO_ *pCATSip;
    struct SIP_SUBJECTINFO_ *psSipSubjectInfo;
    struct SIP_SUBJECTINFO_ *psSipCATSubjectInfo;
    struct SIP_INDIRECT_DATA_ *psIndirectData;
} PROVDATA_SIP, *PPROVDATA_SIP;
typedef struct _CRYPT_TRUST_REG_ENTRY
{
    DWORD cbStruct;
    WCHAR *pwszDLLName;
    WCHAR *pwszFunctionName;
} CRYPT_TRUST_REG_ENTRY, *PCRYPT_TRUST_REG_ENTRY;
typedef struct _CRYPT_REGISTER_ACTIONID
{
    DWORD cbStruct;
    CRYPT_TRUST_REG_ENTRY sInitProvider;
    CRYPT_TRUST_REG_ENTRY sObjectProvider;
    CRYPT_TRUST_REG_ENTRY sSignatureProvider;
    CRYPT_TRUST_REG_ENTRY sCertificateProvider;
    CRYPT_TRUST_REG_ENTRY sCertificatePolicyProvider;
    CRYPT_TRUST_REG_ENTRY sFinalPolicyProvider;
    CRYPT_TRUST_REG_ENTRY sTestPolicyProvider;
    CRYPT_TRUST_REG_ENTRY sCleanupProvider;
} CRYPT_REGISTER_ACTIONID, *PCRYPT_REGISTER_ACTIONID;
struct _CRYPT_PROVIDER_DEFUSAGE;
typedef BOOL (*PFN_ALLOCANDFILLDEFUSAGE)(_In_ const char *pszUsageOID,
                                         _In_ struct _CRYPT_PROVIDER_DEFUSAGE *psDefUsage);
typedef BOOL (*PFN_FREEDEFUSAGE)(_In_ const char *pszUsageOID,
                                 _In_ struct _CRYPT_PROVIDER_DEFUSAGE *psDefUsage);
typedef struct _CRYPT_PROVIDER_REGDEFUSAGE
{
    DWORD cbStruct;
    GUID *pgActionID;
    WCHAR *pwszDllName;
    char *pwszLoadCallbackDataFunctionName;
    char *pwszFreeCallbackDataFunctionName;
} CRYPT_PROVIDER_REGDEFUSAGE, *PCRYPT_PROVIDER_REGDEFUSAGE;
typedef struct _CRYPT_PROVIDER_DEFUSAGE
{
    DWORD cbStruct;
    GUID gActionID;
    LPVOID pDefPolicyCallbackData;
    LPVOID pDefSIPClientData;
} CRYPT_PROVIDER_DEFUSAGE, *PCRYPT_PROVIDER_DEFUSAGE;
#include <poppack.h>
extern BOOL WINAPI WintrustAddActionID(_In_ GUID *pgActionID,
                                        _In_ DWORD fdwFlags,
                                        _In_ CRYPT_REGISTER_ACTIONID *psProvInfo);
extern BOOL WINAPI WintrustRemoveActionID(_In_ GUID *pgActionID);
extern BOOL WINAPI WintrustLoadFunctionPointers(GUID *pgActionID, CRYPT_PROVIDER_FUNCTIONS *pPfns);
extern BOOL WINAPI WintrustAddDefaultForUsage(_In_ const char *pszUsageOID,
                                                           _In_ CRYPT_PROVIDER_REGDEFUSAGE *psDefUsage);
extern BOOL WINAPI WintrustGetDefaultForUsage(_In_ DWORD dwAction,
                                                           _In_ const char *pszUsageOID,
                                                           _Inout_ CRYPT_PROVIDER_DEFUSAGE *psUsage);
extern CRYPT_PROVIDER_SGNR * WINAPI WTHelperGetProvSignerFromChain(CRYPT_PROVIDER_DATA *pProvData,
                                                                       DWORD idxSigner,
                                                                       BOOL fCounterSigner,
                                                                       DWORD idxCounterSigner);
extern CRYPT_PROVIDER_CERT * WINAPI WTHelperGetProvCertFromChain(CRYPT_PROVIDER_SGNR *pSgnr,
                                                                     DWORD idxCert);
extern CRYPT_PROVIDER_DATA * WINAPI WTHelperProvDataFromStateData(HANDLE hStateData);
extern CRYPT_PROVIDER_PRIVDATA * WINAPI WTHelperGetProvPrivateDataFromChain(CRYPT_PROVIDER_DATA *pProvData,
                                                                            GUID *pgProviderID);
extern BOOL WINAPI WTHelperCertIsSelfSigned(DWORD dwEncoding, CERT_INFO *pCert);
extern HRESULT WINAPI WTHelperCertCheckValidSignature(CRYPT_PROVIDER_DATA *pProvData);
#include <pshpack8.h>
typedef BYTE SPC_UUID[SPC_UUID_LENGTH];
                                                 0xB4, 0xA1, 0x24, 0x66, \
                                                 0xAE, 0x05, 0xA2, 0x17, \
                                                 0xDA, 0x8E, 0x60, 0xD6}
typedef struct _SPC_SERIALIZED_OBJECT
{
    SPC_UUID ClassId;
    CRYPT_DATA_BLOB SerializedData;
} SPC_SERIALIZED_OBJECT, *PSPC_SERIALIZED_OBJECT;
typedef struct SPC_SIGINFO_
{
    DWORD dwSipVersion;
    GUID gSIPGuid;
    DWORD dwReserved1;
    DWORD dwReserved2;
    DWORD dwReserved3;
    DWORD dwReserved4;
    DWORD dwReserved5;
} SPC_SIGINFO, *PSPC_SIGINFO;
typedef struct SPC_LINK_
{
    DWORD dwLinkChoice;
    union
    {
        LPWSTR pwszUrl;
        SPC_SERIALIZED_OBJECT Moniker;
        LPWSTR pwszFile;
    };
} SPC_LINK, *PSPC_LINK;
typedef struct _SPC_PE_IMAGE_DATA
{
    CRYPT_BIT_BLOB Flags;
    PSPC_LINK pFile;
} SPC_PE_IMAGE_DATA, *PSPC_PE_IMAGE_DATA;
typedef struct _SPC_INDIRECT_DATA_CONTENT
{
    CRYPT_ATTRIBUTE_TYPE_VALUE Data;
    CRYPT_ALGORITHM_IDENTIFIER DigestAlgorithm;
    CRYPT_HASH_BLOB Digest;
} SPC_INDIRECT_DATA_CONTENT, *PSPC_INDIRECT_DATA_CONTENT;
typedef struct _SPC_FINANCIAL_CRITERIA
{
    BOOL fFinancialInfoAvailable;
    BOOL fMeetsCriteria;
} SPC_FINANCIAL_CRITERIA, *PSPC_FINANCIAL_CRITERIA;
typedef struct _SPC_IMAGE
{
    struct SPC_LINK_ *pImageLink;
    CRYPT_DATA_BLOB Bitmap;
    CRYPT_DATA_BLOB Metafile;
    CRYPT_DATA_BLOB EnhancedMetafile;
    CRYPT_DATA_BLOB GifFile;
} SPC_IMAGE, *PSPC_IMAGE;
typedef struct _SPC_SP_AGENCY_INFO
{
    struct SPC_LINK_ *pPolicyInformation;
    LPWSTR pwszPolicyDisplayText;
    PSPC_IMAGE pLogoImage;
    struct SPC_LINK_ *pLogoLink;
} SPC_SP_AGENCY_INFO, *PSPC_SP_AGENCY_INFO;
typedef struct _SPC_STATEMENT_TYPE
{
    DWORD cKeyPurposeId;
    LPSTR *rgpszKeyPurposeId;
} SPC_STATEMENT_TYPE, *PSPC_STATEMENT_TYPE;
typedef struct _SPC_SP_OPUS_INFO
{
    LPCWSTR pwszProgramName;
    struct SPC_LINK_ *pMoreInfo;
    struct SPC_LINK_ *pPublisherInfo;
} SPC_SP_OPUS_INFO, *PSPC_SP_OPUS_INFO;
typedef struct _CAT_NAMEVALUE
{
    LPWSTR pwszTag;
    DWORD fdwFlags;
    CRYPT_DATA_BLOB Value;
} CAT_NAMEVALUE, *PCAT_NAMEVALUE;
typedef struct _CAT_MEMBERINFO
{
    LPWSTR pwszSubjGuid;
    DWORD dwCertVersion;
} CAT_MEMBERINFO, *PCAT_MEMBERINFO;
typedef struct _CAT_MEMBERINFO2
{
    GUID SubjectGuid;
    DWORD dwCertVersion;
} CAT_MEMBERINFO2, *PCAT_MEMBERINFO2;
typedef struct _INTENT_TO_SEAL_ATTRIBUTE
{
    ULONG version;
    BOOLEAN seal;
} INTENT_TO_SEAL_ATTRIBUTE, *PINTENT_TO_SEAL_ATTRIBUTE;
typedef struct _SEALING_SIGNATURE_ATTRIBUTE
{
    ULONG version;
    ULONG signerIndex;
    CRYPT_ALGORITHM_IDENTIFIER signatureAlgorithm;
    CRYPT_DIGEST_BLOB encryptedDigest;
} SEALING_SIGNATURE_ATTRIBUTE, *PSEALING_SIGNATURE_ATTRIBUTE;
typedef struct _SEALING_TIMESTAMP_ATTRIBUTE
{
    ULONG version;
    ULONG signerIndex;
    CRYPT_DATA_BLOB sealTimeStampToken;
} SEALING_TIMESTAMP_ATTRIBUTE, *PSEALING_TIMESTAMP_ATTRIBUTE;
#include <poppack.h>
typedef struct _WIN_CERTIFICATE
{
    DWORD dwLength;
    WORD wRevision;
    WORD wCertificateType;
    BYTE bCertificate[ANYSIZE_ARRAY];
} WIN_CERTIFICATE, *LPWIN_CERTIFICATE;
typedef LPVOID WIN_TRUST_SUBJECT;
typedef struct _WIN_TRUST_ACTDATA_CONTEXT_WITH_SUBJECT
{
    HANDLE hClientToken;
    GUID * SubjectType;
    WIN_TRUST_SUBJECT Subject;
} WIN_TRUST_ACTDATA_CONTEXT_WITH_SUBJECT, *LPWIN_TRUST_ACTDATA_CONTEXT_WITH_SUBJECT ;
typedef struct _WIN_TRUST_ACTDATA_SUBJECT_ONLY
{
    GUID * SubjectType;
    WIN_TRUST_SUBJECT Subject;
} WIN_TRUST_ACTDATA_SUBJECT_ONLY, *LPWIN_TRUST_ACTDATA_SUBJECT_ONLY;
            { 0x959dc450, \
              0x8d9e, \
              0x11cf, \
              {0x87, 0x36, 0x00, 0xaa, 0x00, 0xa4, 0x85, 0xeb} \
            }
            { 0x43c9a1e0, \
              0x8da0, \
              0x11cf, \
              {0x87, 0x36, 0x00, 0xaa, 0x00, 0xa4, 0x85, 0xeb} \
            }
            { 0x08ad3990, \
              0x8da1, \
              0x11cf, \
              {0x87, 0x36, 0x00, 0xaa, 0x00, 0xa4, 0x85, 0xeb} \
            }
            { 0xd17c5374, \
              0xa392, \
              0x11cf, \
              { 0x9d, 0xf5, 0x0, 0xaa, 0x0, 0xc1, 0x84, 0xe0 } \
            }
typedef struct _WIN_TRUST_SUBJECT_FILE
{
    HANDLE hFile;
    LPCWSTR lpPath;
} WIN_TRUST_SUBJECT_FILE, *LPWIN_TRUST_SUBJECT_FILE;
            { 0x6f458110, \
              0xc2f1, \
              0x11cf, \
              { 0x8a, 0x69, 0x0, 0xaa, 0x0, 0x6c, 0x37, 0x6 } \
            }
            { 0x6f458111, \
              0xc2f1, \
              0x11cf, \
              { 0x8a, 0x69, 0x0, 0xaa, 0x0, 0x6c, 0x37, 0x6 } \
            }
            { 0x6f458113, \
              0xc2f1, \
              0x11cf, \
              { 0x8a, 0x69, 0x0, 0xaa, 0x0, 0x6c, 0x37, 0x6 } \
            }
            { 0x6f458114, \
              0xc2f1, \
              0x11cf, \
              { 0x8a, 0x69, 0x0, 0xaa, 0x0, 0x6c, 0x37, 0x6 } \
            }
typedef struct _WIN_TRUST_SUBJECT_FILE_AND_DISPLAY
{
    HANDLE hFile;
    LPCWSTR lpPath;
    LPCWSTR lpDisplayName;
} WIN_TRUST_SUBJECT_FILE_AND_DISPLAY, *LPWIN_TRUST_SUBJECT_FILE_AND_DISPLAY;
            { 0xc257e740, \
              0x8da0, \
              0x11cf, \
              {0x87, 0x36, 0x00, 0xaa, 0x00, 0xa4, 0x85, 0xeb} \
            }
            { 0x66426730, \
              0x8da1, \
              0x11cf, \
              {0x87, 0x36, 0x00, 0xaa, 0x00, 0xa4, 0x85, 0xeb} \
            }
            { 0x8bc96b00, \
              0x8da1, \
              0x11cf, \
              {0x87, 0x36, 0x00, 0xaa, 0x00, 0xa4, 0x85, 0xeb} \
            }
            { 0x64b9d180, \
              0x8da2, \
              0x11cf, \
              {0x87, 0x36, 0x00, 0xaa, 0x00, 0xa4, 0x85, 0xeb} \
            }
typedef struct _WIN_SPUB_TRUSTED_PUBLISHER_DATA
{
    HANDLE hClientToken;
    LPWIN_CERTIFICATE lpCertificate;
} WIN_SPUB_TRUSTED_PUBLISHER_DATA, *LPWIN_SPUB_TRUSTED_PUBLISHER_DATA;
extern BOOL WINAPI OpenPersonalTrustDBDialogEx(
    _In_opt_ HWND hwndParent,
    _In_ DWORD dwFlags,
    _Inout_opt_ PVOID *pvReserved
    );
extern BOOL WINAPI OpenPersonalTrustDBDialog(
    _In_opt_ HWND hwndParent
    );
extern
void
WINAPI
WintrustSetDefaultIncludePEPageHashes(
    BOOL fIncludePEPageHashes
    );
}
#endif
#pragma endregion
