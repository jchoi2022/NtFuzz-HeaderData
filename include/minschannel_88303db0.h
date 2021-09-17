#include <winapifamily.h>
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
typedef unsigned int ALG_ID;
typedef struct _SecPkgCred_SupportedAlgs
{
    DWORD cSupportedAlgs;
    ALG_ID *palgSupportedAlgs;
} SecPkgCred_SupportedAlgs, *PSecPkgCred_SupportedAlgs;
typedef struct _SecPkgCred_CipherStrengths
{
    DWORD dwMinimumCipherStrength;
    DWORD dwMaximumCipherStrength;
} SecPkgCred_CipherStrengths, *PSecPkgCred_CipherStrengths;
typedef struct _SecPkgCred_SupportedProtocols
{
    DWORD grbitProtocol;
} SecPkgCred_SupportedProtocols, *PSecPkgCred_SupportedProtocols;
typedef struct _SecPkgCred_ClientCertPolicy
{
    DWORD dwFlags;
    GUID guidPolicyId;
    DWORD dwCertFlags;
    DWORD dwUrlRetrievalTimeout;
    BOOL fCheckRevocationFreshnessTime;
    DWORD dwRevocationFreshnessTime;
    BOOL fOmitUsageCheck;
    LPWSTR pwszSslCtlStoreName;
    LPWSTR pwszSslCtlIdentifier;
} SecPkgCred_ClientCertPolicy, *PSecPkgCred_ClientCertPolicy;
#endif
#pragma endregion
