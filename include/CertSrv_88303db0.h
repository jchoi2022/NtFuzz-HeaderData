#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <certadm.h>
#include <certbcli.h>
#include <certcli.h>
#include <certenc.h>
#include <certexit.h>
#include <certif.h>
#include <certpol.h>
#include <certmod.h>
#include <certview.h>
    TEXT("CurrentControlSet\\Services\\") \
    wszSERVICE_NAME
     DBFLAGS_CHECKPOINTDEPTH60MB | \
     DBFLAGS_LOGBUFFERSHUGE)
    TEXT(szOID_PKIX_KP_CODE_SIGNING) L"\0" \
    TEXT(szOID_KP_KERNEL_MODE_CODE_SIGNING) L"\0"
typedef enum {
    ENUM_ENTERPRISE_ROOTCA = 0,
    ENUM_ENTERPRISE_SUBCA = 1,
    ENUM_STANDALONE_ROOTCA = 3,
    ENUM_STANDALONE_SUBCA = 4,
    ENUM_UNKNOWN_CA = 5,
} ENUM_CATYPES;
typedef struct _CAINFO
{
    DWORD cbSize;
    ENUM_CATYPES CAType;
    DWORD cCASignatureCerts;
    DWORD cCAExchangeCerts;
    DWORD cExitModules;
    LONG lPropIdMax;
    LONG lRoleSeparationEnabled;
    DWORD cKRACertUsedCount;
    DWORD cKRACertCount;
    DWORD fAdvancedServer;
} CAINFO;
                                         IF_LOCKICERTREQUEST | \
                                         IF_ENFORCEENCRYPTICERTREQUEST | \
                                         IF_ENFORCEENCRYPTICERTADMIN)
      EDITF_DISABLEEXTENSIONLIST | \
      EDITF_ADDOLDKEYUSAGE | \
      EDITF_ATTRIBUTEENDDATE | \
      EDITF_BASICCONSTRAINTSCRITICAL | \
      EDITF_BASICCONSTRAINTSCA | \
      EDITF_ENABLEAKIKEYID | \
      EDITF_ATTRIBUTECA | \
      EDITF_ATTRIBUTEEKU)
      EDITF_DISABLEEXTENSIONLIST | \
      EDITF_ADDOLDKEYUSAGE | \
                                         EDITF_BASICCONSTRAINTSCRITICAL | \
                                         EDITF_ENABLEAKIKEYID | \
      EDITF_ENABLEDEFAULTSMIME | \
      EDITF_ENABLECHASECLIENTDC)
        wszPROPSUBJECTDOT wszPROPDISTINGUISHEDNAME
    TEXT("RawPublicKeyAlgorithmParameters")
#endif
#pragma endregion
