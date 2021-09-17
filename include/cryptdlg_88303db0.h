#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <prsht.h>
extern "C" {
typedef BOOL (WINAPI * PFNCMFILTERPROC)(
        IN PCCERT_CONTEXT pCertContext,
        IN LPARAM,
        IN DWORD,
        IN DWORD);
typedef UINT (WINAPI * PFNCMHOOKPROC)(
        IN HWND hwndDialog,
        IN UINT message,
        IN WPARAM wParam,
        IN LPARAM lParam);
typedef struct tagCSSA {
    DWORD dwSize;
    HWND hwndParent;
    HINSTANCE hInstance;
    LPCSTR pTemplateName;
    DWORD dwFlags;
    LPCSTR szTitle;
    DWORD cCertStore;
    HCERTSTORE * arrayCertStore;
    LPCSTR szPurposeOid;
    DWORD cCertContext;
    PCCERT_CONTEXT * arrayCertContext;
    LPARAM lCustData;
    PFNCMHOOKPROC pfnHook;
    PFNCMFILTERPROC pfnFilter;
    LPCSTR szHelpFileName;
    DWORD dwHelpId;
    HCRYPTPROV hprov;
} CERT_SELECT_STRUCT_A, *PCERT_SELECT_STRUCT_A;
typedef struct tagCSSW {
    DWORD dwSize;
    HWND hwndParent;
    HINSTANCE hInstance;
    LPCWSTR pTemplateName;
    DWORD dwFlags;
    LPCWSTR szTitle;
    DWORD cCertStore;
    HCERTSTORE * arrayCertStore;
    LPCSTR szPurposeOid;
    DWORD cCertContext;
    PCCERT_CONTEXT * arrayCertContext;
    LPARAM lCustData;
    PFNCMHOOKPROC pfnHook;
    PFNCMFILTERPROC pfnFilter;
    LPCWSTR szHelpFileName;
    DWORD dwHelpId;
    HCRYPTPROV hprov;
} CERT_SELECT_STRUCT_W, *PCERT_SELECT_STRUCT_W;
typedef CERT_SELECT_STRUCT_W CERT_SELECT_STRUCT;
typedef PCERT_SELECT_STRUCT_W PCERT_SELECT_STRUCT;
CRYPTDLGAPI
BOOL
WINAPI
CertSelectCertificateA(
        IN OUT PCERT_SELECT_STRUCT_A pCertSelectInfo
        );
typedef struct tagCERT_VIEWPROPERTIES_STRUCT_A {
    DWORD dwSize;
    HWND hwndParent;
    HINSTANCE hInstance;
    DWORD dwFlags;
    LPCSTR szTitle;
    PCCERT_CONTEXT pCertContext;
    LPSTR * arrayPurposes;
    DWORD cArrayPurposes;
    DWORD cRootStores;
    HCERTSTORE * rghstoreRoots;
    DWORD cStores;
    HCERTSTORE * rghstoreCAs;
    DWORD cTrustStores;
    HCERTSTORE * rghstoreTrust;
    HCRYPTPROV hprov;
    LPARAM lCustData;
    DWORD dwPad;
    LPCSTR szHelpFileName;
    DWORD dwHelpId;
    DWORD nStartPage;
    DWORD cArrayPropSheetPages;
    PROPSHEETPAGE * arrayPropSheetPages;
} CERT_VIEWPROPERTIES_STRUCT_A, *PCERT_VIEWPROPERTIES_STRUCT_A;
typedef struct tagCERT_VIEWPROPERTIES_STRUCT_W {
    DWORD dwSize;
    HWND hwndParent;
    HINSTANCE hInstance;
    DWORD dwFlags;
    LPCWSTR szTitle;
    PCCERT_CONTEXT pCertContext;
    LPSTR * arrayPurposes;
    DWORD cArrayPurposes;
    DWORD cRootStores;
    HCERTSTORE * rghstoreRoots;
    DWORD cStores;
    HCERTSTORE * rghstoreCAs;
    DWORD cTrustStores;
    HCERTSTORE * rghstoreTrust;
    HCRYPTPROV hprov;
    LPARAM lCustData;
    DWORD dwPad;
    LPCWSTR szHelpFileName;
    DWORD dwHelpId;
    DWORD nStartPage;
    DWORD cArrayPropSheetPages;
    PROPSHEETPAGE * arrayPropSheetPages;
} CERT_VIEWPROPERTIES_STRUCT_W, *PCERT_VIEWPROPERTIES_STRUCT_W;
typedef CERT_VIEWPROPERTIES_STRUCT_W CERT_VIEWPROPERTIES_STRUCT;
typedef PCERT_VIEWPROPERTIES_STRUCT_W PCERT_VIEWPROPERTIES_STRUCT;
CRYPTDLGAPI
BOOL
WINAPI
CertViewPropertiesA(
        PCERT_VIEWPROPERTIES_STRUCT_A pCertViewInfo
        );
typedef struct tagCMOID {
    LPCSTR szExtensionOID;
    DWORD dwTestOperation;
    LPBYTE pbTestData;
    DWORD cbTestData;
} CERT_FILTER_EXTENSION_MATCH;
typedef struct tagCMFLTR {
    DWORD dwSize;
    DWORD cExtensionChecks;
    CERT_FILTER_EXTENSION_MATCH * arrayExtensionChecks;
    DWORD dwCheckingFlags;
} CERT_FILTER_DATA;
CRYPTDLGAPI
DWORD
WINAPI
GetFriendlyNameOfCertA(
    _In_ PCCERT_CONTEXT pccert,
    _Out_writes_to_opt_(cch, return) LPSTR pch,
    _In_ DWORD cch
    );
CRYPTDLGAPI
DWORD
WINAPI
GetFriendlyNameOfCertW(
    _In_ PCCERT_CONTEXT pccert,
    _Out_writes_to_opt_(cwch, return) LPWSTR pwch,
    _In_ DWORD cwch
    );
  { \
    0x7801ebd0, \
    0xcf4b, \
    0x11d0, \
    {0x85, 0x1f, 0x00, 0x60, 0x97, 0x93, 0x87, 0xea} \
  }
    "{7801ebd0-cf4b-11d0-851f-0060979387ea}"
typedef HRESULT (WINAPI * PFNTRUSTHELPER)(
        IN PCCERT_CONTEXT pCertContext,
        IN LPARAM lCustData,
        IN BOOL fLeafCertificate,
        IN LPBYTE pbTrustBlob);
typedef struct _CERT_VERIFY_CERTIFICATE_TRUST {
    DWORD cbSize;
    PCCERT_CONTEXT pccert;
    DWORD dwFlags;
    DWORD dwIgnoreErr;
    DWORD * pdwErrors;
    LPSTR pszUsageOid;
    HCRYPTPROV hprov;
    DWORD cRootStores;
    HCERTSTORE * rghstoreRoots;
    DWORD cStores;
    HCERTSTORE * rghstoreCAs;
    DWORD cTrustStores;
    HCERTSTORE * rghstoreTrust;
    LPARAM lCustData;
    PFNTRUSTHELPER pfnTrustHelper;
    DWORD * pcChain;
    PCCERT_CONTEXT ** prgChain;
    DWORD ** prgdwErrors;
    DATA_BLOB ** prgpbTrustInfo;
} CERT_VERIFY_CERTIFICATE_TRUST, * PCERT_VERIFY_CERTIFICATE_TRUST;
typedef struct _CTL_MODIFY_REQUEST {
    PCCERT_CONTEXT pccert;
    DWORD dwOperation;
    DWORD dwError;
} CTL_MODIFY_REQUEST, * PCTL_MODIFY_REQUEST;
CRYPTDLGAPI
HRESULT
WINAPI
CertModifyCertificatesToTrust(
        int cCerts,
        PCTL_MODIFY_REQUEST rgCerts,
        LPCSTR szPurpose,
        HWND hwnd,
        HCERTSTORE hcertstoreTrust,
        PCCERT_CONTEXT pccertSigner);
BOOL
WINAPI CertConfigureTrustA(void);
BOOL
WINAPI FormatVerisignExtension(
    DWORD ,
    DWORD ,
    DWORD ,
    void * ,
    LPCSTR ,
    const BYTE * ,
    DWORD ,
    void * pbFormat,
    DWORD * pcbFormat);
}
#endif
#pragma endregion
