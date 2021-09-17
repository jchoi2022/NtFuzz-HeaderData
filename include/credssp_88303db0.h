#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct _SecPkgContext_ClientCreds
{
    ULONG AuthBufferLen;
    PUCHAR AuthBuffer;
} SecPkgContext_ClientCreds, *PSecPkgContext_ClientCreds;
typedef enum _CREDSSP_SUBMIT_TYPE {
    CredsspPasswordCreds = 2,
    CredsspSchannelCreds = 4,
    CredsspCertificateCreds = 13,
    CredsspSubmitBufferBoth = 50,
    CredsspSubmitBufferBothOld = 51,
    CredsspCredEx = 100,
} CREDSPP_SUBMIT_TYPE;
typedef struct _CREDSSP_CRED {
    CREDSPP_SUBMIT_TYPE Type;
    PVOID pSchannelCred;
    PVOID pSpnegoCred;
} CREDSSP_CRED, *PCREDSSP_CRED;
typedef struct _CREDSSP_CRED_EX {
    CREDSPP_SUBMIT_TYPE Type;
    DWORD Version;
    DWORD Flags;
    DWORD Reserved;
    CREDSSP_CRED Cred;
} CREDSSP_CRED_EX, *PCREDSSP_CRED_EX;
static_assert(FIELD_OFFSET(CREDSSP_CRED_EX, Cred) == 16, "CREDSSP_CRED_EX layout changed - this may break WoW64");
PSecurityFunctionTableW
SEC_ENTRY
SpInitSecurityInterfaceW(VOID);
}
#endif
#pragma endregion
