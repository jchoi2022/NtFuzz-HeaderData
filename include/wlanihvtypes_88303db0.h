#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <EapTypes.h>
#include <WlanTypes.h>
typedef
struct _DOT11_MSSECURITY_SETTINGS
{
   DOT11_AUTH_ALGORITHM dot11AuthAlgorithm;
   DOT11_CIPHER_ALGORITHM dot11CipherAlgorithm;
   BOOL fOneXEnabled;
   EAP_METHOD_TYPE eapMethodType;
   DWORD dwEapConnectionDataLen;
   [size_is(dwEapConnectionDataLen)]
   BYTE* pEapConnectionData;
}
DOT11_MSSECURITY_SETTINGS, *PDOT11_MSSECURITY_SETTINGS;
typedef
struct _DOT11EXT_IHV_SSID_LIST
{
    ULONG ulCount;
    [unique, size_is(ulCount)] DOT11_SSID SSIDs[*];
}
DOT11EXT_IHV_SSID_LIST, * PDOT11EXT_IHV_SSID_LIST;
typedef
struct _DOT11EXT_IHV_PROFILE_PARAMS
{
   PDOT11EXT_IHV_SSID_LIST pSsidList;
   DOT11_BSS_TYPE BssType;
   PDOT11_MSSECURITY_SETTINGS pMSSecuritySettings;
}
DOT11EXT_IHV_PROFILE_PARAMS, *PDOT11EXT_IHV_PROFILE_PARAMS;
typedef
struct _DOT11EXT_IHV_PARAMS
{
   DOT11EXT_IHV_PROFILE_PARAMS dot11ExtIhvProfileParams;
   WCHAR wstrProfileName[MS_MAX_PROFILE_NAME_LENGTH];
   DWORD dwProfileTypeFlags;
   GUID interfaceGuid;
}
DOT11EXT_IHV_PARAMS, *PDOT11EXT_IHV_PARAMS;
#endif
#pragma endregion
