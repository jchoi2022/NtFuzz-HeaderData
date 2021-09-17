#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#include <wbemcli.h>
extern "C" {
#include <profinfo.h>
USERENVAPI
BOOL
WINAPI
LoadUserProfileA(
    _In_ HANDLE hToken,
    _Inout_ LPPROFILEINFOA lpProfileInfo);
USERENVAPI
BOOL
WINAPI
LoadUserProfileW(
    _In_ HANDLE hToken,
    _Inout_ LPPROFILEINFOW lpProfileInfo);
USERENVAPI
BOOL
WINAPI
UnloadUserProfile(
    _In_ HANDLE hToken,
    _In_ HANDLE hProfile);
USERENVAPI
BOOL
WINAPI
GetProfilesDirectoryA(
    _Out_writes_opt_(*lpcchSize) LPSTR lpProfileDir,
    _Inout_ LPDWORD lpcchSize);
USERENVAPI
BOOL
WINAPI
GetProfilesDirectoryW(
    _Out_writes_opt_(*lpcchSize) LPWSTR lpProfileDir,
    _Inout_ LPDWORD lpcchSize);
USERENVAPI
BOOL
WINAPI
GetProfileType(
    _Out_ DWORD *dwFlags);
USERENVAPI
BOOL
WINAPI
DeleteProfileA (
    _In_ LPCSTR lpSidString,
    _In_opt_ LPCSTR lpProfilePath,
    _In_opt_ LPCSTR lpComputerName);
USERENVAPI
BOOL
WINAPI
DeleteProfileW (
    _In_ LPCWSTR lpSidString,
    _In_opt_ LPCWSTR lpProfilePath,
    _In_opt_ LPCWSTR lpComputerName);
USERENVAPI
HRESULT
WINAPI
CreateProfile(
    _In_ LPCWSTR pszUserSid,
    _In_ LPCWSTR pszUserName,
    _Out_writes_(cchProfilePath) LPWSTR pszProfilePath,
    _In_ DWORD cchProfilePath);
USERENVAPI
BOOL
WINAPI
GetDefaultUserProfileDirectoryA(
    _Out_writes_opt_(*lpcchSize) LPSTR lpProfileDir,
    _Inout_ LPDWORD lpcchSize);
USERENVAPI
BOOL
WINAPI
GetDefaultUserProfileDirectoryW(
    _Out_writes_opt_(*lpcchSize) LPWSTR lpProfileDir,
    _Inout_ LPDWORD lpcchSize);
USERENVAPI
BOOL
WINAPI
GetAllUsersProfileDirectoryA(
    _Out_writes_opt_(*lpcchSize) LPSTR lpProfileDir,
    _Inout_ LPDWORD lpcchSize);
USERENVAPI
BOOL
WINAPI
GetAllUsersProfileDirectoryW(
    _Out_writes_opt_(*lpcchSize) LPWSTR lpProfileDir,
    _Inout_ LPDWORD lpcchSize);
USERENVAPI
BOOL
WINAPI
GetUserProfileDirectoryA(
    _In_ HANDLE hToken,
    _Out_writes_opt_(*lpcchSize) LPSTR lpProfileDir,
    _Inout_ LPDWORD lpcchSize);
USERENVAPI
BOOL
WINAPI
GetUserProfileDirectoryW(
    _In_ HANDLE hToken,
    _Out_writes_opt_(*lpcchSize) LPWSTR lpProfileDir,
    _Inout_ LPDWORD lpcchSize);
BOOL
WINAPI
CreateEnvironmentBlock(
    _At_((PZZWSTR *)lpEnvironment, _Outptr_) LPVOID *lpEnvironment,
    _In_opt_ HANDLE hToken,
    _In_ BOOL bInherit);
BOOL
WINAPI
DestroyEnvironmentBlock(
    _In_ LPVOID lpEnvironment);
USERENVAPI
BOOL
WINAPI
ExpandEnvironmentStringsForUserA(
    _In_opt_ HANDLE hToken,
    _In_ LPCSTR lpSrc,
    _Out_writes_(dwSize) LPSTR lpDest,
    _In_ DWORD dwSize);
USERENVAPI
BOOL
WINAPI
ExpandEnvironmentStringsForUserW(
    _In_opt_ HANDLE hToken,
    _In_ LPCWSTR lpSrc,
    _Out_writes_(dwSize) LPWSTR lpDest,
    _In_ DWORD dwSize);
USERENVAPI
BOOL
WINAPI
RefreshPolicy(
    _In_ BOOL bMachine);
USERENVAPI
BOOL
WINAPI
RefreshPolicyEx(
    _In_ BOOL bMachine,
    _In_ DWORD dwOptions);
USERENVAPI
HANDLE
WINAPI
EnterCriticalPolicySection(
    _In_ BOOL bMachine);
USERENVAPI
BOOL
WINAPI
LeaveCriticalPolicySection(
    _In_ HANDLE hSection);
USERENVAPI
BOOL
WINAPI
RegisterGPNotification(
    _In_ HANDLE hEvent,
    _In_ BOOL bMachine);
USERENVAPI
BOOL
WINAPI
UnregisterGPNotification(
    _In_ HANDLE hEvent);
typedef enum _GPO_LINK {
    GPLinkUnknown = 0,
    GPLinkMachine,
    GPLinkSite,
    GPLinkDomain,
    GPLinkOrganizationalUnit
} GPO_LINK, *PGPO_LINK;
typedef struct _GROUP_POLICY_OBJECTA {
    DWORD dwOptions;
    DWORD dwVersion;
    LPSTR lpDSPath;
    LPSTR lpFileSysPath;
    LPSTR lpDisplayName;
    CHAR szGPOName[50];
    GPO_LINK GPOLink;
    LPARAM lParam;
    struct _GROUP_POLICY_OBJECTA * pNext;
    struct _GROUP_POLICY_OBJECTA * pPrev;
    LPSTR lpExtensions;
    LPARAM lParam2;
    LPSTR lpLink;
} GROUP_POLICY_OBJECTA, *PGROUP_POLICY_OBJECTA;
typedef struct _GROUP_POLICY_OBJECTW {
    DWORD dwOptions;
    DWORD dwVersion;
    LPWSTR lpDSPath;
    LPWSTR lpFileSysPath;
    LPWSTR lpDisplayName;
    WCHAR szGPOName[50];
    GPO_LINK GPOLink;
    LPARAM lParam;
    struct _GROUP_POLICY_OBJECTW * pNext;
    struct _GROUP_POLICY_OBJECTW * pPrev;
    LPWSTR lpExtensions;
    LPARAM lParam2;
    LPWSTR lpLink;
} GROUP_POLICY_OBJECTW, *PGROUP_POLICY_OBJECTW;
typedef GROUP_POLICY_OBJECTW GROUP_POLICY_OBJECT;
typedef PGROUP_POLICY_OBJECTW PGROUP_POLICY_OBJECT;
USERENVAPI
BOOL
WINAPI
GetGPOListA (
    _In_opt_ HANDLE hToken,
    _In_opt_ LPCSTR lpName,
    _In_opt_ LPCSTR lpHostName,
    _In_opt_ LPCSTR lpComputerName,
    _In_ DWORD dwFlags,
    _Outptr_ PGROUP_POLICY_OBJECTA * pGPOList);
USERENVAPI
BOOL
WINAPI
GetGPOListW (
    _In_opt_ HANDLE hToken,
    _In_opt_ LPCWSTR lpName,
    _In_opt_ LPCWSTR lpHostName,
    _In_opt_ LPCWSTR lpComputerName,
    _In_ DWORD dwFlags,
    _Outptr_ PGROUP_POLICY_OBJECTW * pGPOList);
USERENVAPI
BOOL
WINAPI
FreeGPOListA (
    _In_ PGROUP_POLICY_OBJECTA pGPOList);
USERENVAPI
BOOL
WINAPI
FreeGPOListW (
    _In_ PGROUP_POLICY_OBJECTW pGPOList);
USERENVAPI
DWORD
WINAPI
GetAppliedGPOListA (
    _In_ DWORD dwFlags,
    _In_opt_ LPCSTR pMachineName,
    _In_opt_ PSID pSidUser,
    _In_ GUID *pGuidExtension,
    _Outptr_ PGROUP_POLICY_OBJECTA *ppGPOList);
USERENVAPI
DWORD
WINAPI
GetAppliedGPOListW (
    _In_ DWORD dwFlags,
    _In_opt_ LPCWSTR pMachineName,
    _In_opt_ PSID pSidUser,
    _In_ GUID *pGuidExtension,
    _Outptr_ PGROUP_POLICY_OBJECTW *ppGPOList);
typedef UINT_PTR ASYNCCOMPLETIONHANDLE;
typedef DWORD (*PFNSTATUSMESSAGECALLBACK)(_In_ BOOL bVerbose, _In_ LPWSTR lpMessage);
typedef DWORD(*PFNPROCESSGROUPPOLICY)(
    _In_ DWORD dwFlags,
    _In_ HANDLE hToken,
    _In_ HKEY hKeyRoot,
    _In_ PGROUP_POLICY_OBJECT pDeletedGPOList,
    _In_ PGROUP_POLICY_OBJECT pChangedGPOList,
    _In_ ASYNCCOMPLETIONHANDLE pHandle,
    _Inout_ BOOL *pbAbort,
    _In_opt_ PFNSTATUSMESSAGECALLBACK pStatusCallback);
typedef DWORD(*PFNPROCESSGROUPPOLICYEX)(
    _In_ DWORD dwFlags,
    _In_ HANDLE hToken,
    _In_ HKEY hKeyRoot,
    _In_ PGROUP_POLICY_OBJECT pDeletedGPOList,
    _In_ PGROUP_POLICY_OBJECT pChangedGPOList,
    _In_ ASYNCCOMPLETIONHANDLE pHandle,
    _Inout_ BOOL *pbAbort,
    _In_opt_ PFNSTATUSMESSAGECALLBACK pStatusCallback,
    _In_opt_ IWbemServices *pWbemServices,
    _Out_ HRESULT *pRsopStatus);
typedef PVOID PRSOPTOKEN;
typedef struct _RSOP_TARGET {
    WCHAR * pwszAccountName;
    WCHAR * pwszNewSOM;
    SAFEARRAY * psaSecurityGroups;
    PRSOPTOKEN pRsopToken;
    PGROUP_POLICY_OBJECT pGPOList;
    IWbemServices * pWbemServices;
} RSOP_TARGET, *PRSOP_TARGET;
typedef DWORD(*PFNGENERATEGROUPPOLICY)(
    _In_ DWORD dwFlags,
    _Inout_ BOOL *pbAbort,
    _In_opt_ WCHAR *pwszSite,
    _In_opt_ PRSOP_TARGET pComputerTarget,
    _In_opt_ PRSOP_TARGET pUserTarget );
typedef GUID *REFGPEXTENSIONID;
USERENVAPI
DWORD
WINAPI
ProcessGroupPolicyCompleted(
    _In_ REFGPEXTENSIONID extensionId,
    _In_ ASYNCCOMPLETIONHANDLE pAsyncHandle,
    _In_ DWORD dwStatus);
USERENVAPI
DWORD
WINAPI
ProcessGroupPolicyCompletedEx(
    _In_ REFGPEXTENSIONID extensionId,
    _In_ ASYNCCOMPLETIONHANDLE pAsyncHandle,
    _In_ DWORD dwStatus,
    _In_ HRESULT RsopStatus);
USERENVAPI
HRESULT
WINAPI
RsopAccessCheckByType(
    _In_ PSECURITY_DESCRIPTOR pSecurityDescriptor,
    _In_opt_ PSID pPrincipalSelfSid,
    _In_ PRSOPTOKEN pRsopToken,
    _In_ DWORD dwDesiredAccessMask,
    _In_reads_opt_(ObjectTypeListLength) POBJECT_TYPE_LIST pObjectTypeList,
    _In_ DWORD ObjectTypeListLength,
    _In_ PGENERIC_MAPPING pGenericMapping,
    _In_reads_bytes_opt_(*pdwPrivilegeSetLength) PPRIVILEGE_SET pPrivilegeSet,
    _In_opt_ LPDWORD pdwPrivilegeSetLength,
    _Out_ LPDWORD pdwGrantedAccessMask,
    _Out_ LPBOOL pbAccessStatus);
USERENVAPI
HRESULT
WINAPI
RsopFileAccessCheck(
    _In_ LPWSTR pszFileName,
    _In_ PRSOPTOKEN pRsopToken,
    _In_ DWORD dwDesiredAccessMask,
    _Out_ LPDWORD pdwGrantedAccessMask,
    _Out_ LPBOOL pbAccessStatus);
typedef enum _SETTINGSTATUS
{
        RSOPUnspecified = 0,
        RSOPApplied,
        RSOPIgnored,
        RSOPFailed,
        RSOPSubsettingFailed
} SETTINGSTATUS;
typedef struct _POLICYSETTINGSTATUSINFO
{
        LPWSTR szKey;
        LPWSTR szEventSource;
        LPWSTR szEventLogName;
        DWORD dwEventID;
        DWORD dwErrorCode;
        SETTINGSTATUS status;
        SYSTEMTIME timeLogged;
} POLICYSETTINGSTATUSINFO, *LPPOLICYSETTINGSTATUSINFO;
USERENVAPI
HRESULT
WINAPI
RsopSetPolicySettingStatus( _In_ DWORD dwFlags,
                            _In_ IWbemServices* pServices,
                            _In_ IWbemClassObject* pSettingInstance,
                            _In_ DWORD nInfo,
                            _In_reads_(nInfo) POLICYSETTINGSTATUSINFO* pStatus );
USERENVAPI
HRESULT
WINAPI
RsopResetPolicySettingStatus( _In_ DWORD dwFlags,
                              _In_ IWbemServices* pServices,
                              _In_ IWbemClassObject* pSettingInstance );
USERENVAPI
DWORD
WINAPI
GenerateGPNotification (
                            _In_ BOOL bMachine,
                            _In_ LPCWSTR lpwszMgmtProduct,
                            _In_ DWORD dwMgmtProductOptions);
USERENVAPI
HRESULT
WINAPI
CreateAppContainerProfile(
    _In_ PCWSTR pszAppContainerName,
    _In_ PCWSTR pszDisplayName,
    _In_ PCWSTR pszDescription,
    _In_reads_opt_(dwCapabilityCount) PSID_AND_ATTRIBUTES pCapabilities,
    _In_ DWORD dwCapabilityCount,
    _Outptr_ PSID* ppSidAppContainerSid);
USERENVAPI
HRESULT
WINAPI
DeleteAppContainerProfile(
    _In_ PCWSTR pszAppContainerName);
USERENVAPI
HRESULT
WINAPI
GetAppContainerRegistryLocation(
    _In_ REGSAM desiredAccess,
    _Outptr_ PHKEY phAppContainerKey);
USERENVAPI
HRESULT
WINAPI
GetAppContainerFolderPath(
    _In_ PCWSTR pszAppContainerSid,
    _Outptr_ PWSTR *ppszPath);
USERENVAPI
HRESULT
WINAPI
DeriveAppContainerSidFromAppContainerName(
    _In_ PCWSTR pszAppContainerName,
    _Outptr_ PSID *ppsidAppContainerSid);
USERENVAPI
HRESULT
WINAPI
DeriveRestrictedAppContainerSidFromAppContainerSidAndRestrictedName(
    _In_ PSID psidAppContainerSid,
    _In_ PCWSTR pszRestrictedAppContainerName,
    _Outptr_ PSID *ppsidRestrictedAppContainerSid
    );
}
#endif
#pragma endregion
