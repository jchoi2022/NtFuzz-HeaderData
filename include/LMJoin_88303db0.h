#include <winapifamily.h>
extern "C" {
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef enum _NETSETUP_NAME_TYPE {
    NetSetupUnknown = 0,
    NetSetupMachine,
    NetSetupWorkgroup,
    NetSetupDomain,
    NetSetupNonExistentDomain,
    NetSetupDnsMachine
} NETSETUP_NAME_TYPE, *PNETSETUP_NAME_TYPE;
#endif
#pragma endregion
#pragma region Desktop Family or App Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_APP)
typedef enum _DSREG_JOIN_TYPE{
    DSREG_UNKNOWN_JOIN = 0,
    DSREG_DEVICE_JOIN = 1,
    DSREG_WORKPLACE_JOIN = 2
} DSREG_JOIN_TYPE, *PDSREG_JOIN_TYPE;
typedef struct _DSREG_USER_INFO
{
    LPWSTR pszUserEmail;
    LPWSTR pszUserKeyId;
    LPWSTR pszUserKeyName;
} DSREG_USER_INFO, *PDSREG_USER_INFO;
typedef const struct _CERT_CONTEXT *PCCERT_CONTEXT;
typedef struct _DSREG_JOIN_INFO
{
    DSREG_JOIN_TYPE joinType;
    PCCERT_CONTEXT pJoinCertificate;
    LPWSTR pszDeviceId;
    LPWSTR pszIdpDomain;
    LPWSTR pszTenantId;
    LPWSTR pszJoinUserEmail;
    LPWSTR pszTenantDisplayName;
    LPWSTR pszMdmEnrollmentUrl;
    LPWSTR pszMdmTermsOfUseUrl;
    LPWSTR pszMdmComplianceUrl;
    LPWSTR pszUserSettingSyncUrl;
    DSREG_USER_INFO *pUserInfo;
} DSREG_JOIN_INFO, *PDSREG_JOIN_INFO;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
                                         NETSETUP_DOMAIN_JOIN_IF_JOINED | \
                                         NETSETUP_JOIN_WITH_NEW_NAME | \
                                         NETSETUP_DONT_CONTROL_SERVICES | \
                                         NETSETUP_MACHINE_PWD_PASSED)
NET_API_STATUS
NET_API_FUNCTION
NetJoinDomain(
    _In_opt_ LPCWSTR lpServer,
    _In_ LPCWSTR lpDomain,
    _In_opt_ LPCWSTR lpMachineAccountOU,
    _In_opt_ LPCWSTR lpAccount,
    _In_opt_ LPCWSTR lpPassword,
    _In_ DWORD fJoinOptions
    );
NET_API_STATUS
NET_API_FUNCTION
NetUnjoinDomain(
    _In_opt_ LPCWSTR lpServer,
    _In_opt_ LPCWSTR lpAccount,
    _In_opt_ LPCWSTR lpPassword,
    _In_ DWORD fUnjoinOptions
    );
NET_API_STATUS
NET_API_FUNCTION
NetRenameMachineInDomain(
    _In_opt_ LPCWSTR lpServer,
    _In_opt_ LPCWSTR lpNewMachineName,
    _In_opt_ LPCWSTR lpAccount,
    _In_opt_ LPCWSTR lpPassword,
    _In_ DWORD fRenameOptions
    );
NET_API_STATUS
NET_API_FUNCTION
NetValidateName(
    _In_opt_ LPCWSTR lpServer,
    _In_ LPCWSTR lpName,
    _In_opt_ LPCWSTR lpAccount,
    _In_opt_ LPCWSTR lpPassword,
    _In_ NETSETUP_NAME_TYPE NameType
    );
NET_API_STATUS
NET_API_FUNCTION
NetGetJoinableOUs(
    _In_ LPCWSTR lpServer,
    _In_ LPCWSTR lpDomain,
    _In_opt_ LPCWSTR lpAccount,
    _In_opt_ LPCWSTR lpPassword,
    _Out_ DWORD *OUCount,
    _Outptr_result_buffer_(*OUCount) LPWSTR **OUs
    );
NET_API_STATUS
NET_API_FUNCTION
NetAddAlternateComputerName(
    _In_opt_ LPCWSTR Server,
    _In_ LPCWSTR AlternateName,
    _In_opt_ LPCWSTR DomainAccount,
    _In_opt_ LPCWSTR DomainAccountPassword,
    _In_ ULONG Reserved
    );
NET_API_STATUS
NET_API_FUNCTION
NetRemoveAlternateComputerName(
    _In_opt_ LPCWSTR Server,
    _In_ LPCWSTR AlternateName,
    _In_opt_ LPCWSTR DomainAccount,
    _In_opt_ LPCWSTR DomainAccountPassword,
    _In_ ULONG Reserved
    );
NET_API_STATUS
NET_API_FUNCTION
NetSetPrimaryComputerName(
    _In_opt_ LPCWSTR Server,
    _In_ LPCWSTR PrimaryName,
    _In_opt_ LPCWSTR DomainAccount,
    _In_opt_ LPCWSTR DomainAccountPassword,
    _In_ ULONG Reserved
    );
typedef enum _NET_COMPUTER_NAME_TYPE {
    NetPrimaryComputerName,
    NetAlternateComputerNames,
    NetAllComputerNames,
    NetComputerNameTypeMax
} NET_COMPUTER_NAME_TYPE, *PNET_COMPUTER_NAME_TYPE;
NET_API_STATUS
NET_API_FUNCTION
NetEnumerateComputerNames(
    _In_opt_ LPCWSTR Server,
    _In_ NET_COMPUTER_NAME_TYPE NameType,
    _In_ ULONG Reserved,
    _Out_ PDWORD EntryCount,
    _Outptr_result_buffer_(*EntryCount) LPWSTR **ComputerNames
    );
NET_API_STATUS
NET_API_FUNCTION
NetProvisionComputerAccount(
   _In_z_ LPCWSTR lpDomain,
   _In_z_ LPCWSTR lpMachineName,
   _In_opt_z_ LPCWSTR lpMachineAccountOU,
   _In_opt_z_ LPCWSTR lpDcName,
   _In_ DWORD dwOptions,
   _Outptr_opt_result_bytebuffer_maybenull_(*pdwProvisionBinDataSize)
                   PBYTE *pProvisionBinData,
   _Out_opt_ DWORD *pdwProvisionBinDataSize,
   _Outptr_opt_result_maybenull_z_
                   LPWSTR *pProvisionTextData
);
NET_API_STATUS
NET_API_FUNCTION
NetRequestOfflineDomainJoin(
    _In_reads_bytes_(cbProvisionBinDataSize) BYTE *pProvisionBinData,
    _In_ DWORD cbProvisionBinDataSize,
    _In_ DWORD dwOptions,
    _In_z_ LPCWSTR lpWindowsPath
);
typedef struct _NETSETUP_PROVISIONING_PARAMS
{
    DWORD dwVersion;
    LPCWSTR lpDomain;
    LPCWSTR lpHostName;
    LPCWSTR lpMachineAccountOU;
    LPCWSTR lpDcName;
    DWORD dwProvisionOptions;
    LPCWSTR *aCertTemplateNames;
    DWORD cCertTemplateNames;
    LPCWSTR *aMachinePolicyNames;
    DWORD cMachinePolicyNames;
    LPCWSTR *aMachinePolicyPaths;
    DWORD cMachinePolicyPaths;
    LPWSTR lpNetbiosName;
    LPWSTR lpSiteName;
    LPWSTR lpPrimaryDNSDomain;
} NETSETUP_PROVISIONING_PARAMS, *PNETSETUP_PROVISIONING_PARAMS;
NET_API_STATUS
NET_API_FUNCTION
NetCreateProvisioningPackage(
    _In_ PNETSETUP_PROVISIONING_PARAMS pProvisioningParams,
    _Outptr_opt_result_bytebuffer_maybenull_(*pdwPackageBinDataSize)
                                    PBYTE *ppPackageBinData,
    _Out_opt_ DWORD *pdwPackageBinDataSize,
    _Outptr_opt_result_maybenull_z_ LPWSTR *ppPackageTextData
    );
NET_API_STATUS
NET_API_FUNCTION
NetRequestProvisioningPackageInstall(
    _In_reads_bytes_(dwPackageBinDataSize) BYTE *pPackageBinData,
    _In_ DWORD dwPackageBinDataSize,
    _In_ DWORD dwProvisionOptions,
    _In_z_ LPCWSTR lpWindowsPath,
    _Reserved_ PVOID pvReserved
    );
HRESULT
NET_API_FUNCTION
NetGetAadJoinInformation(
    _In_opt_ LPCWSTR pcszTenantId,
    _Outptr_result_maybenull_ PDSREG_JOIN_INFO *ppJoinInfo
    );
VOID
NET_API_FUNCTION
NetFreeAadJoinInformation(
    _In_opt_ PDSREG_JOIN_INFO pJoinInfo
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_APP)
typedef enum _NETSETUP_JOIN_STATUS {
    NetSetupUnknownStatus = 0,
    NetSetupUnjoined,
    NetSetupWorkgroupName,
    NetSetupDomainName
} NETSETUP_JOIN_STATUS, *PNETSETUP_JOIN_STATUS;
NET_API_STATUS
NET_API_FUNCTION
NetGetJoinInformation(
    _In_opt_ LPCWSTR lpServer,
    _Outptr_ LPWSTR *lpNameBuffer,
    _Out_ PNETSETUP_JOIN_STATUS BufferType
    );
#endif
#pragma endregion
}
