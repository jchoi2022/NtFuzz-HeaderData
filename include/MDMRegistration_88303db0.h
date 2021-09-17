       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
typedef struct _MANAGEMENT_SERVICE_INFO
{
    LPWSTR pszMDMServiceUri;
    LPWSTR pszAuthenticationUri;
}MANAGEMENT_SERVICE_INFO,*PMANAGEMENT_SERVICE_INFO;
typedef struct _MANAGEMENT_REGISTRATION_INFO
{
    BOOL fDeviceRegisteredWithManagement;
    DWORD dwDeviceRegistionKind;
    LPWSTR pszUPN;
    LPWSTR pszMDMServiceUri;
}MANAGEMENT_REGISTRATION_INFO, *PMANAGEMENT_REGISTRATION_INFO;
typedef enum _REGISTRATION_INFORMATION_CLASS {
    DeviceRegistrationBasicInfo = 1,
    MaxDeviceInfoClass
} REGISTRATION_INFORMATION_CLASS, *PREGISTRATION_INFORMATION_CLASS;
HRESULT WINAPI
GetDeviceRegistrationInfo(
    _In_ REGISTRATION_INFORMATION_CLASS DeviceInformationClass,
    _Out_ PVOID* ppDeviceRegistrationInfo
);
HRESULT WINAPI
IsDeviceRegisteredWithManagement(
    _Out_ BOOL *pfIsDeviceRegisteredWithManagement,
    _In_ DWORD cchUPN,
    _Out_opt_z_cap_(cchUPN) LPWSTR pszUPN
    );
HRESULT WINAPI
IsManagementRegistrationAllowed(
    _Out_ BOOL *pfIsManagementRegistrationAllowed
    );
HRESULT WINAPI
IsMdmUxWithoutAadAllowed(
    _Out_ BOOL* isEnrollmentAllowed
    );
HRESULT WINAPI
SetManagedExternally(
    _In_ BOOL IsManagedExternally
    );
HRESULT WINAPI
DiscoverManagementService(
    _In_z_ LPCWSTR pszUPN,
    _Out_ PMANAGEMENT_SERVICE_INFO* ppMgmtInfo
    );
HRESULT WINAPI
RegisterDeviceWithManagementUsingAADCredentials(HANDLE UserToken);
HRESULT WINAPI
RegisterDeviceWithManagementUsingAADDeviceCredentials();
HRESULT WINAPI
RegisterDeviceWithManagement(
    _In_z_ LPCWSTR pszUPN,
    _In_z_ LPCWSTR ppszMDMServiceUri,
    _In_z_ LPCWSTR ppzsAccessToken
    );
HRESULT WINAPI
UnregisterDeviceWithManagement(
    _In_opt_z_ LPCWSTR enrollmentID
    );
HRESULT WINAPI
GetManagementAppHyperlink(
    _In_ DWORD cchHyperlink,
    _Out_z_cap_(cchHyperlink) LPWSTR pszHyperlink
    );
}
#endif
#pragma endregion
