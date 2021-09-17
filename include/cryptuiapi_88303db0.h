#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <wintrust.h>
#include <wincrypt.h>
#include <prsht.h>
extern "C" {
#include <pshpack8.h>
_Success_(return == TRUE)
BOOL
WINAPI
CryptUIDlgViewContext(
    _In_ DWORD dwContextType,
    _In_ const void *pvContext,
    _In_opt_ HWND hwnd,
    _In_opt_ LPCWSTR pwszTitle,
    _In_ DWORD dwFlags,
    _In_ void *pvReserved
    );
PCCERT_CONTEXT
WINAPI
CryptUIDlgSelectCertificateFromStore(
    _In_ HCERTSTORE hCertStore,
    _In_opt_ HWND hwnd,
    _In_opt_ LPCWSTR pwszTitle,
    _In_opt_ LPCWSTR pwszDisplayString,
    _In_ DWORD dwDontUseColumn,
    _In_ DWORD dwFlags,
    _In_ void *pvReserved
    );
typedef BOOL (WINAPI * PFNCFILTERPROC) (
        PCCERT_CONTEXT pCertContext,
        BOOL *pfInitialSelectedCert,
        void *pvCallbackData
        );
typedef struct {
    HCERTSTORE hStore;
    PCCERT_CHAIN_CONTEXT * prgpChain;
    DWORD cChain;
}CERT_SELECTUI_INPUT, *PCERT_SELECTUI_INPUT;
HRESULT
WINAPI
CertSelectionGetSerializedBlob(
            _In_ PCERT_SELECTUI_INPUT pcsi,
            _Outptr_result_maybenull_ void ** ppOutBuffer,
            _Out_ ULONG *pulOutBufferSize);
typedef struct _CRYPTUI_CERT_MGR_STRUCT
{
    DWORD dwSize;
    HWND hwndParent;
    DWORD dwFlags;
    LPCWSTR pwszTitle;
    LPCSTR pszInitUsageOID;
} CRYPTUI_CERT_MGR_STRUCT, *PCRYPTUI_CERT_MGR_STRUCT;
typedef const CRYPTUI_CERT_MGR_STRUCT *PCCRYPTUI_CERT_MGR_STRUCT;
_Success_(return == TRUE)
BOOL
WINAPI
CryptUIDlgCertMgr(
    _In_ PCCRYPTUI_CERT_MGR_STRUCT pCryptUICertMgr
    );
typedef struct _CRYPTUI_WIZ_DIGITAL_SIGN_BLOB_INFO
{
    DWORD dwSize;
    GUID *pGuidSubject;
    DWORD cbBlob;
    BYTE *pbBlob;
    LPCWSTR pwszDisplayName;
} CRYPTUI_WIZ_DIGITAL_SIGN_BLOB_INFO, *PCRYPTUI_WIZ_DIGITAL_SIGN_BLOB_INFO;
typedef const CRYPTUI_WIZ_DIGITAL_SIGN_BLOB_INFO *PCCRYPTUI_WIZ_DIGITAL_SIGN_BLOB_INFO;
typedef struct _CRYPTUI_WIZ_DIGITAL_SIGN_STORE_INFO
{
    DWORD dwSize;
    DWORD cCertStore;
    HCERTSTORE *rghCertStore;
    PFNCFILTERPROC pFilterCallback;
    void * pvCallbackData;
} CRYPTUI_WIZ_DIGITAL_SIGN_STORE_INFO, *PCRYPTUI_WIZ_DIGITAL_SIGN_STORE_INFO;
typedef const CRYPTUI_WIZ_DIGITAL_SIGN_STORE_INFO *PCCRYPTUI_WIZ_DIGITAL_SIGN_STORE_INFO;
typedef struct _CRYPTUI_WIZ_DIGITAL_SIGN_PVK_FILE_INFO
{
    DWORD dwSize;
    LPWSTR pwszPvkFileName;
    LPWSTR pwszProvName;
    DWORD dwProvType;
} CRYPTUI_WIZ_DIGITAL_SIGN_PVK_FILE_INFO, *PCRYPTUI_WIZ_DIGITAL_SIGN_PVK_FILE_INFO;
typedef const CRYPTUI_WIZ_DIGITAL_SIGN_PVK_FILE_INFO *PCCRYPTUI_WIZ_DIGITAL_SIGN_PVK_FILE_INFO;
typedef struct _CRYPTUI_WIZ_DIGITAL_SIGN_CERT_PVK_INFO
{
    DWORD dwSize;
    LPWSTR pwszSigningCertFileName;
    DWORD dwPvkChoice;
    union
    {
        PCCRYPTUI_WIZ_DIGITAL_SIGN_PVK_FILE_INFO pPvkFileInfo;
        PCRYPT_KEY_PROV_INFO pPvkProvInfo;
    };
} CRYPTUI_WIZ_DIGITAL_SIGN_CERT_PVK_INFO, *PCRYPTUI_WIZ_DIGITAL_SIGN_CERT_PVK_INFO;
typedef const CRYPTUI_WIZ_DIGITAL_SIGN_CERT_PVK_INFO *PCCRYPTUI_WIZ_DIGITAL_SIGN_CERT_PVK_INFO;
typedef struct _CRYPTUI_WIZ_DIGITAL_SIGN_EXTENDED_INFO
{
    DWORD dwSize;
    DWORD dwAttrFlags;
    LPCWSTR pwszDescription;
    LPCWSTR pwszMoreInfoLocation;
    LPCSTR pszHashAlg;
    LPCWSTR pwszSigningCertDisplayString;
    HCERTSTORE hAdditionalCertStore;
    PCRYPT_ATTRIBUTES psAuthenticated;
    PCRYPT_ATTRIBUTES psUnauthenticated;
} CRYPTUI_WIZ_DIGITAL_SIGN_EXTENDED_INFO, *PCRYPTUI_WIZ_DIGITAL_SIGN_EXTENDED_INFO;
typedef const CRYPTUI_WIZ_DIGITAL_SIGN_EXTENDED_INFO *PCCRYPTUI_WIZ_DIGITAL_SIGN_EXTENDED_INFO;
typedef struct _CRYPTUI_WIZ_DIGITAL_SIGN_INFO
{
    DWORD dwSize;
    DWORD dwSubjectChoice;
    union
    {
        LPCWSTR pwszFileName;
        PCCRYPTUI_WIZ_DIGITAL_SIGN_BLOB_INFO pSignBlobInfo;
    };
    DWORD dwSigningCertChoice;
    union
    {
        PCCERT_CONTEXT pSigningCertContext;
        PCCRYPTUI_WIZ_DIGITAL_SIGN_STORE_INFO pSigningCertStore;
        PCCRYPTUI_WIZ_DIGITAL_SIGN_CERT_PVK_INFO pSigningCertPvkInfo;
    };
    LPCWSTR pwszTimestampURL;
    DWORD dwAdditionalCertChoice;
    PCCRYPTUI_WIZ_DIGITAL_SIGN_EXTENDED_INFO pSignExtInfo;
} CRYPTUI_WIZ_DIGITAL_SIGN_INFO, *PCRYPTUI_WIZ_DIGITAL_SIGN_INFO;
typedef const CRYPTUI_WIZ_DIGITAL_SIGN_INFO *PCCRYPTUI_WIZ_DIGITAL_SIGN_INFO;
typedef struct _CRYPTUI_WIZ_DIGITAL_SIGN_CONTEXT
{
    DWORD dwSize;
    DWORD cbBlob;
    BYTE *pbBlob;
} CRYPTUI_WIZ_DIGITAL_SIGN_CONTEXT, *PCRYPTUI_WIZ_DIGITAL_SIGN_CONTEXT;
typedef const CRYPTUI_WIZ_DIGITAL_SIGN_CONTEXT *PCCRYPTUI_WIZ_DIGITAL_SIGN_CONTEXT;
_Success_(return == TRUE)
BOOL
WINAPI
CryptUIWizDigitalSign(
    _In_ DWORD dwFlags,
    _In_opt_ HWND hwndParent,
    _In_opt_ LPCWSTR pwszWizardTitle,
    _In_ PCCRYPTUI_WIZ_DIGITAL_SIGN_INFO pDigitalSignInfo,
    _Outptr_opt_ PCCRYPTUI_WIZ_DIGITAL_SIGN_CONTEXT *ppSignContext
    );
_Success_(return == TRUE)
BOOL
WINAPI
CryptUIWizFreeDigitalSignContext(
    _In_ PCCRYPTUI_WIZ_DIGITAL_SIGN_CONTEXT pSignContext
    );
typedef struct tagCRYPTUI_INITDIALOG_STRUCT {
    LPARAM lParam;
    PCCERT_CONTEXT pCertContext;
} CRYPTUI_INITDIALOG_STRUCT, *PCRYPTUI_INITDIALOG_STRUCT;
typedef struct tagCRYPTUI_VIEWCERTIFICATE_STRUCTW {
    DWORD dwSize;
    HWND hwndParent;
    DWORD dwFlags;
    LPCWSTR szTitle;
    PCCERT_CONTEXT pCertContext;
    LPCSTR * rgszPurposes;
    DWORD cPurposes;
    union
    {
        CRYPT_PROVIDER_DATA const * pCryptProviderData;
        HANDLE hWVTStateData;
    };
    BOOL fpCryptProviderDataTrustedUsage;
    DWORD idxSigner;
    DWORD idxCert;
    BOOL fCounterSigner;
    DWORD idxCounterSigner;
    DWORD cStores;
    HCERTSTORE * rghStores;
    DWORD cPropSheetPages;
    LPCPROPSHEETPAGEW rgPropSheetPages;
    DWORD nStartPage;
} CRYPTUI_VIEWCERTIFICATE_STRUCTW, *PCRYPTUI_VIEWCERTIFICATE_STRUCTW;
typedef const CRYPTUI_VIEWCERTIFICATE_STRUCTW *PCCRYPTUI_VIEWCERTIFICATE_STRUCTW;
typedef struct tagCRYPTUI_VIEWCERTIFICATE_STRUCTA {
    DWORD dwSize;
    HWND hwndParent;
    DWORD dwFlags;
    LPCSTR szTitle;
    PCCERT_CONTEXT pCertContext;
    LPCSTR * rgszPurposes;
    DWORD cPurposes;
    union
    {
        CRYPT_PROVIDER_DATA const * pCryptProviderData;
        HANDLE hWVTStateData;
    };
    BOOL fpCryptProviderDataTrustedUsage;
    DWORD idxSigner;
    DWORD idxCert;
    BOOL fCounterSigner;
    DWORD idxCounterSigner;
    DWORD cStores;
    HCERTSTORE * rghStores;
    DWORD cPropSheetPages;
    LPCPROPSHEETPAGEA rgPropSheetPages;
    DWORD nStartPage;
} CRYPTUI_VIEWCERTIFICATE_STRUCTA, *PCRYPTUI_VIEWCERTIFICATE_STRUCTA;
typedef const CRYPTUI_VIEWCERTIFICATE_STRUCTA *PCCRYPTUI_VIEWCERTIFICATE_STRUCTA;
_Success_(return == TRUE)
BOOL
WINAPI
CryptUIDlgViewCertificateW(
        _In_ PCCRYPTUI_VIEWCERTIFICATE_STRUCTW pCertViewInfo,
        _Out_ BOOL *pfPropertiesChanged
        );
_Success_(return == TRUE)
BOOL
WINAPI
CryptUIDlgViewCertificateA(
        _In_ PCCRYPTUI_VIEWCERTIFICATE_STRUCTA pCertViewInfo,
        _Out_ BOOL *pfPropertiesChanged
        );
typedef struct _CRYPTUI_WIZ_EXPORT_INFO
{
 DWORD dwSize;
    LPCWSTR pwszExportFileName;
 DWORD dwSubjectChoice;
    union
 {
 PCCERT_CONTEXT pCertContext;
        PCCTL_CONTEXT pCTLContext;
        PCCRL_CONTEXT pCRLContext;
        HCERTSTORE hCertStore;
    };
    DWORD cStores;
    HCERTSTORE * rghStores;
}CRYPTUI_WIZ_EXPORT_INFO, *PCRYPTUI_WIZ_EXPORT_INFO;
typedef const CRYPTUI_WIZ_EXPORT_INFO *PCCRYPTUI_WIZ_EXPORT_INFO;
typedef struct _CRYPTUI_WIZ_EXPORT_CERTCONTEXT_INFO
{
 DWORD dwSize;
 DWORD dwExportFormat;
    BOOL fExportChain;
    BOOL fExportPrivateKeys;
    LPCWSTR pwszPassword;
    BOOL fStrongEncryption;
}CRYPTUI_WIZ_EXPORT_CERTCONTEXT_INFO, *PCRYPTUI_WIZ_EXPORT_CERTCONTEXT_INFO;
typedef const CRYPTUI_WIZ_EXPORT_CERTCONTEXT_INFO *PCCRYPTUI_WIZ_EXPORT_CERTCONTEXT_INFO;
_Success_(return == TRUE)
BOOL
WINAPI
CryptUIWizExport(
     _In_ DWORD dwFlags,
     _In_opt_ HWND hwndParent,
     _In_opt_ LPCWSTR pwszWizardTitle,
     _In_ PCCRYPTUI_WIZ_EXPORT_INFO pExportInfo,
     _In_opt_ void *pvoid
);
typedef struct _CRYPTUI_WIZ_IMPORT_SUBJECT_INFO
{
 DWORD dwSize;
 DWORD dwSubjectChoice;
    union
 {
  LPCWSTR pwszFileName;
        PCCERT_CONTEXT pCertContext;
        PCCTL_CONTEXT pCTLContext;
        PCCRL_CONTEXT pCRLContext;
        HCERTSTORE hCertStore;
    };
    DWORD dwFlags;
    LPCWSTR pwszPassword;
}CRYPTUI_WIZ_IMPORT_SRC_INFO, *PCRYPTUI_WIZ_IMPORT_SRC_INFO;
typedef const CRYPTUI_WIZ_IMPORT_SRC_INFO *PCCRYPTUI_WIZ_IMPORT_SRC_INFO;
_Success_(return == TRUE)
BOOL
WINAPI
CryptUIWizImport(
     _In_ DWORD dwFlags,
     _In_opt_ HWND hwndParent,
     _In_opt_ LPCWSTR pwszWizardTitle,
     _In_opt_ PCCRYPTUI_WIZ_IMPORT_SRC_INFO pImportSrc,
     _In_opt_ HCERTSTORE hDestCertStore
);
#include <poppack.h>
}
#endif
#pragma endregion
