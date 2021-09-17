       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum _WSC_SECURITY_PROVIDER
{
    WSC_SECURITY_PROVIDER_FIREWALL = 0x1,
    WSC_SECURITY_PROVIDER_AUTOUPDATE_SETTINGS = 0x2,
    WSC_SECURITY_PROVIDER_ANTIVIRUS = 0x4,
    WSC_SECURITY_PROVIDER_ANTISPYWARE = 0x8,
    WSC_SECURITY_PROVIDER_INTERNET_SETTINGS = 0x10,
    WSC_SECURITY_PROVIDER_USER_ACCOUNT_CONTROL = 0x20,
    WSC_SECURITY_PROVIDER_SERVICE = 0x40,
    WSC_SECURITY_PROVIDER_NONE = 0,
    WSC_SECURITY_PROVIDER_ALL = WSC_SECURITY_PROVIDER_FIREWALL |
                                                            WSC_SECURITY_PROVIDER_AUTOUPDATE_SETTINGS |
                                                            WSC_SECURITY_PROVIDER_ANTIVIRUS |
                                                            WSC_SECURITY_PROVIDER_ANTISPYWARE |
                                                            WSC_SECURITY_PROVIDER_INTERNET_SETTINGS |
                                                            WSC_SECURITY_PROVIDER_USER_ACCOUNT_CONTROL |
                                                            WSC_SECURITY_PROVIDER_SERVICE
} WSC_SECURITY_PROVIDER, *PWSC_SECURITY_PROVIDER;
typedef enum _WSC_SECURITY_PROVIDER_HEALTH
{
    WSC_SECURITY_PROVIDER_HEALTH_GOOD,
    WSC_SECURITY_PROVIDER_HEALTH_NOTMONITORED,
    WSC_SECURITY_PROVIDER_HEALTH_POOR,
    WSC_SECURITY_PROVIDER_HEALTH_SNOOZE,
} WSC_SECURITY_PROVIDER_HEALTH, *PWSC_SECURITY_PROVIDER_HEALTH;
STDAPI WscRegisterForChanges(LPVOID Reserved,
                             PHANDLE phCallbackRegistration,
                             LPTHREAD_START_ROUTINE lpCallbackAddress,
                             PVOID pContext);
STDAPI WscUnRegisterChanges(HANDLE hRegistrationHandle);
STDAPI WscRegisterForUserNotifications();
STDAPI WscGetSecurityProviderHealth(DWORD Providers,
                                    PWSC_SECURITY_PROVIDER_HEALTH pHealth);
HRESULT wscShowAMSCN(_In_ DWORD InputFlags, _Out_opt_ PDWORD pdwResultFlags);
HRESULT wscLaunchAdminMakeDefaultUI(_In_z_ PCWSTR pwszProductName);
STDAPI WscQueryAntiMalwareUri();
STDAPI WscGetAntiMalwareUri(_Outptr_ LPWSTR *ppszUri);
#endif
#pragma endregion
