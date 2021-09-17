#include <winapifamily.h>
#pragma region Desktop Family or Wintrust Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINTRUST)
#include <wintrust.h>
extern "C"
{
#include <pshpack8.h>
            { 0xaac56b, \
              0xcd44, \
              0x11d0, \
              { 0x8c, 0xc2, 0x0, 0xc0, 0x4f, 0xc2, 0x95, 0xee } \
            }
            { 0x573e31f8, \
              0xddba, \
              0x11d0, \
              { 0x8c, 0xcb, 0x0, 0xc0, 0x4f, 0xc2, 0x95, 0xee } \
            }
            { 0x189a3842, \
              0x3041, \
              0x11d1, \
              { 0x85, 0xe1, 0x0, 0xc0, 0x4f, 0xc2, 0x95, 0xee } \
            }
            { 0xfc451c16, \
              0xac75, \
              0x11d1, \
              { 0xb4, 0xb8, 0x00, 0xc0, 0x4f, 0xb6, 0x6e, 0xa0 }\
            }
typedef struct _WTD_GENERIC_CHAIN_POLICY_SIGNER_INFO
    WTD_GENERIC_CHAIN_POLICY_SIGNER_INFO,
        *PWTD_GENERIC_CHAIN_POLICY_SIGNER_INFO;
struct _WTD_GENERIC_CHAIN_POLICY_SIGNER_INFO {
    union {
        DWORD cbStruct;
        DWORD cbSize;
    };
    PCCERT_CHAIN_CONTEXT pChainContext;
    DWORD dwSignerType;
    PCMSG_SIGNER_INFO pMsgSignerInfo;
    DWORD dwError;
    DWORD cCounterSigner;
    PWTD_GENERIC_CHAIN_POLICY_SIGNER_INFO *rgpCounterSigner;
};
typedef HRESULT (WINAPI *PFN_WTD_GENERIC_CHAIN_POLICY_CALLBACK)(
    IN PCRYPT_PROVIDER_DATA pProvData,
    IN DWORD dwStepError,
    IN DWORD dwRegPolicySettings,
    IN DWORD cSigner,
    IN PWTD_GENERIC_CHAIN_POLICY_SIGNER_INFO *rgpSigner,
    IN void *pvPolicyArg
    );
typedef struct _WTD_GENERIC_CHAIN_POLICY_CREATE_INFO {
    union {
        DWORD cbStruct;
        DWORD cbSize;
    };
    HCERTCHAINENGINE hChainEngine;
    PCERT_CHAIN_PARA pChainPara;
    DWORD dwFlags;
    void *pvReserved;
} WTD_GENERIC_CHAIN_POLICY_CREATE_INFO, *PWTD_GENERIC_CHAIN_POLICY_CREATE_INFO;
typedef struct _WTD_GENERIC_CHAIN_POLICY_DATA {
    union {
        DWORD cbStruct;
        DWORD cbSize;
    };
    PWTD_GENERIC_CHAIN_POLICY_CREATE_INFO pSignerChainInfo;
    PWTD_GENERIC_CHAIN_POLICY_CREATE_INFO pCounterSignerChainInfo;
    PFN_WTD_GENERIC_CHAIN_POLICY_CALLBACK pfnPolicyCallback;
    void *pvPolicyArg;
} WTD_GENERIC_CHAIN_POLICY_DATA, *PWTD_GENERIC_CHAIN_POLICY_DATA;
            { 0x573e31f8, \
              0xaaba, \
              0x11d0, \
              { 0x8c, 0xcb, 0x0, 0xc0, 0x4f, 0xc2, 0x95, 0xee } \
            }
                { 0x5555c2cd, \
                  0x17fb, \
                  0x11d1, \
                  { 0x85, 0xc4, 0x0, 0xc0, 0x4f, 0xc2, 0x95, 0xee } \
                }
                { 0xf750e6c3, \
                  0x38ee, \
                  0x11d1, \
                  { 0x85, 0xe5, 0x0, 0xc0, 0x4f, 0xc2, 0x95, 0xee } \
                }
typedef struct DRIVER_VER_MAJORMINOR_
{
    DWORD dwMajor;
    DWORD dwMinor;
} DRIVER_VER_MAJORMINOR;
typedef struct DRIVER_VER_INFO_
{
    DWORD cbStruct;
    ULONG_PTR dwReserved1;
    ULONG_PTR dwReserved2;
    DWORD dwPlatform;
    DWORD dwVersion;
    WCHAR wszVersion[MAX_PATH];
    WCHAR wszSignedBy[MAX_PATH];
    PCCERT_CONTEXT pcSignerCertContext;
    DRIVER_VER_MAJORMINOR sOSVersionLow;
    DRIVER_VER_MAJORMINOR sOSVersionHigh;
    DWORD dwBuildNumberLow;
    DWORD dwBuildNumberHigh;
} DRIVER_VER_INFO, *PDRIVER_VER_INFO;
    { 0x6078065b, \
        0x8f22, \
        0x4b13, \
        {0xbd, 0x9b, 0x5b, 0x76, 0x27, 0x76, 0xf3, 0x86} \
    }
typedef struct CONFIG_CI_PROV_INFO_RESULT_
{
    HRESULT hr;
    DWORD dwResult;
    DWORD dwPolicyIndex;
    BOOLEAN fIsExplicitDeny;
} CONFIG_CI_PROV_INFO_RESULT;
typedef struct CONFIG_CI_PROV_INFO_
{
    DWORD cbSize;
    DWORD dwPolicies;
    _Field_size_(dwPolicies) CRYPT_DATA_BLOB *pPolicies;
    CONFIG_CI_PROV_INFO_RESULT result;
} CONFIG_CI_PROV_INFO;
#include <poppack.h>
}
#endif
#pragma endregion
