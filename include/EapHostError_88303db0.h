       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Default \
        = { 0x00000000, 0x0000, 0x0000, 0, 0, 0, 0, 0, 0, 0, 0 };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_MethodDLLNotFound \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 1 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactSysadmin \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 2 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_CertStoreInaccessible \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 4 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_Generic_AuthFailure \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 1, 4 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_IdentityUnknown \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 2, 4 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_SimNotValid \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 3, 4 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_Server_CertExpired \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 5 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_Server_CertInvalid \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 6 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_Server_CertNotFound \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 7 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_Server_CertRevoked \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 8 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_Server_CertOtherError \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 1, 8 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_CertExpired \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 9 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_CertInvalid \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0xA } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_CertNotFound \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0xB } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_CertOtherError \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0xC } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_CertRejected \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0xD } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_CertRevoked \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0xE } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_Account_OtherProblem \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 1, 0xE } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_CredsRejected \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 2, 0xE } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_Root_CertExpired \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0xF } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_Root_CertInvalid \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x10 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_User_Root_CertNotFound \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x11 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_Server_Root_CertNameRequired \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x12 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_Server_Root_CertNotFound \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 1, 0x12 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_ThirdPartyMethod_Host_Reset \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 2, 0x12 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_EapQecInaccessible \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 3, 0x12 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_Server_ClientSelectServerCert \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x18 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_User_AuthFailure \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x19 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_User_GetNewCert \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x1A } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_User_SelectValidCert \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x1B } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_Retry_Authentication \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 1, 0x1B } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_EapNegotiationFailed \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x1C } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_XmlMalformed \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x1D } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_MethodDoesNotSupportOperation \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x1E } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_AuthFailure \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x1F } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_IdentityUnknown \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x20 }};
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_NegotiationFailed \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x21}};
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_MethodNotFound \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x22} };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_RestartNap \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x23} };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_CertStoreInaccessible \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x24} };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_InvalidUserAccount \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x25} };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_RootCertInvalid \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x26} };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_RootCertNotFound \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x27} };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_RootExpired \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x28} };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_CertNameAbsent \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x29} };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_NoSmartCardReader \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x2A} };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_No_SmartCardReader_Found \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x2B }};
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_ContactAdmin_InvalidUserCert \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x2C }};
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_Method_Not_Support_Sso \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x2D }};
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Repair_No_ValidSim_Found \
        = { 0x9612fc67, 0x6150, 0x4209, { 0xa8, 0x5e, 0xa8, 0xd8, 0, 0, 0, 0x2E }};
 EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Help_ObtainingCerts \
        = { 0xf535eea3, 0x1bdd, 0x46ca, { 0xa2, 0xfc, 0xa6, 0x65, 0x59, 0x39, 0xb7, 0xe8 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Help_Troubleshooting \
        = { 0x33307acf, 0x0698, 0x41ba, { 0xb0, 0x14, 0xea, 0x0a, 0x2e, 0xb8, 0xd0, 0xa8 } };
EXTERN_C const CLSID DECLSPEC_SELECTANY GUID_EapHost_Cause_Method_Config_Does_Not_Support_Sso \
        = { 0xda18bd32, 0x004F, 0x41fa, { 0xae, 0x08, 0x0b, 0xc8, 0x5e, 0x58, 0x45, 0xac } };
}
#endif
#pragma endregion
