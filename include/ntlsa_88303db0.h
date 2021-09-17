#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <sdkddkver.h>
#include <lsalookup.h>
extern "C" {
typedef ULONG LSA_OPERATIONAL_MODE, *PLSA_OPERATIONAL_MODE;
typedef enum _SECURITY_LOGON_TYPE {
    UndefinedLogonType = 0,
    Interactive = 2,
    Network,
    Batch,
    Service,
    Proxy,
    Unlock,
    NetworkCleartext,
    NewCredentials,
    RemoteInteractive,
    CachedInteractive,
    CachedRemoteInteractive,
    CachedUnlock
} SECURITY_LOGON_TYPE, *PSECURITY_LOGON_TYPE;
typedef enum _SE_ADT_PARAMETER_TYPE {
    SeAdtParmTypeNone = 0,
    SeAdtParmTypeString,
    SeAdtParmTypeFileSpec,
    SeAdtParmTypeUlong,
    SeAdtParmTypeSid,
    SeAdtParmTypeLogonId,
    SeAdtParmTypeNoLogonId,
    SeAdtParmTypeAccessMask,
    SeAdtParmTypePrivs,
    SeAdtParmTypeObjectTypes,
    SeAdtParmTypeHexUlong,
    SeAdtParmTypePtr,
    SeAdtParmTypeTime,
    SeAdtParmTypeGuid,
    SeAdtParmTypeLuid,
    SeAdtParmTypeHexInt64,
    SeAdtParmTypeStringList,
    SeAdtParmTypeSidList,
    SeAdtParmTypeDuration,
    SeAdtParmTypeUserAccountControl,
    SeAdtParmTypeNoUac,
    SeAdtParmTypeMessage,
    SeAdtParmTypeDateTime,
    SeAdtParmTypeSockAddr,
    SeAdtParmTypeSD,
    SeAdtParmTypeLogonHours,
    SeAdtParmTypeLogonIdNoSid,
    SeAdtParmTypeUlongNoConv,
    SeAdtParmTypeSockAddrNoPort,
    SeAdtParmTypeAccessReason,
    SeAdtParmTypeStagingReason,
    SeAdtParmTypeResourceAttribute,
    SeAdtParmTypeClaims,
    SeAdtParmTypeLogonIdAsSid,
    SeAdtParmTypeMultiSzString,
    SeAdtParmTypeLogonIdEx,
} SE_ADT_PARAMETER_TYPE, *PSE_ADT_PARAMETER_TYPE;
#include <guiddef.h>
typedef struct _SE_ADT_OBJECT_TYPE {
    GUID ObjectType;
    USHORT Flags;
    USHORT Level;
    ACCESS_MASK AccessMask;
} SE_ADT_OBJECT_TYPE, *PSE_ADT_OBJECT_TYPE;
typedef struct _SE_ADT_PARAMETER_ARRAY_ENTRY {
    SE_ADT_PARAMETER_TYPE Type;
    ULONG Length;
    ULONG_PTR Data[2];
    PVOID Address;
} SE_ADT_PARAMETER_ARRAY_ENTRY, *PSE_ADT_PARAMETER_ARRAY_ENTRY;
typedef struct _SE_ADT_ACCESS_REASON{
    ACCESS_MASK AccessMask;
    ULONG AccessReasons[32];
    ULONG ObjectTypeIndex;
    ULONG AccessGranted;
    PSECURITY_DESCRIPTOR SecurityDescriptor;
} SE_ADT_ACCESS_REASON, *PSE_ADT_ACCESS_REASON;
typedef struct _SE_ADT_CLAIMS {
    ULONG Length;
    PCLAIMS_BLOB Claims;
} SE_ADT_CLAIMS, *PSE_ADT_CLAIMS;
typedef struct _SE_ADT_PARAMETER_ARRAY {
    ULONG CategoryId;
    ULONG AuditId;
    ULONG ParameterCount;
    ULONG Length;
    USHORT FlatSubCategoryId;
    USHORT Type;
    ULONG Flags;
    SE_ADT_PARAMETER_ARRAY_ENTRY Parameters[ SE_MAX_AUDIT_PARAMETERS ];
} SE_ADT_PARAMETER_ARRAY, *PSE_ADT_PARAMETER_ARRAY;
typedef struct _SE_ADT_PARAMETER_ARRAY_EX {
    ULONG CategoryId;
    ULONG AuditId;
    ULONG Version;
    ULONG ParameterCount;
    ULONG Length;
    USHORT FlatSubCategoryId;
    USHORT Type;
    ULONG Flags;
    SE_ADT_PARAMETER_ARRAY_ENTRY Parameters[ SE_MAX_AUDIT_PARAMETERS ];
} SE_ADT_PARAMETER_ARRAY_EX, *PSE_ADT_PARAMETER_ARRAY_EX;
     ( sizeof(SE_ADT_PARAMETER_ARRAY) - \
       sizeof(SE_ADT_PARAMETER_ARRAY_ENTRY) * \
       (SE_MAX_AUDIT_PARAMETERS - AuditParameters->ParameterCount) )
typedef struct _LSA_ADT_STRING_LIST_ENTRY
{
    ULONG Flags;
    UNICODE_STRING String;
}
LSA_ADT_STRING_LIST_ENTRY, *PLSA_ADT_STRING_LIST_ENTRY;
typedef struct _LSA_ADT_STRING_LIST
{
    ULONG cStrings;
    PLSA_ADT_STRING_LIST_ENTRY Strings;
}
LSA_ADT_STRING_LIST, *PLSA_ADT_STRING_LIST;
typedef struct _LSA_ADT_SID_LIST_ENTRY
{
    ULONG Flags;
    PSID Sid;
}
LSA_ADT_SID_LIST_ENTRY, *PLSA_ADT_SID_LIST_ENTRY;
typedef struct _LSA_ADT_SID_LIST
{
    ULONG cSids;
    PLSA_ADT_SID_LIST_ENTRY Sids;
}
LSA_ADT_SID_LIST, *PLSA_ADT_SID_LIST;
typedef enum _POLICY_AUDIT_EVENT_TYPE_EX {
    iSystem_SecurityStateChange = SE_ADT_POLICY_AUDIT_EVENT_TYPE_EX_BEGIN,
    iSystem_SecuritySubsystemExtension,
    iSystem_Integrity,
    iSystem_IPSecDriverEvents,
    iSystem_Others,
    iLogon_Logon,
    iLogon_Logoff,
    iLogon_AccountLockout,
    iLogon_IPSecMainMode,
    iLogon_SpecialLogon,
    iLogon_IPSecQuickMode,
    iLogon_IPSecUsermode,
    iLogon_Others,
    iLogon_NPS,
    iLogon_Claims,
    iLogon_Groups,
    iObjectAccess_FileSystem,
    iObjectAccess_Registry,
    iObjectAccess_Kernel,
    iObjectAccess_Sam,
    iObjectAccess_Other,
    iObjectAccess_CertificationAuthority,
    iObjectAccess_ApplicationGenerated,
    iObjectAccess_HandleBasedAudits,
    iObjectAccess_Share,
    iObjectAccess_FirewallPacketDrops,
    iObjectAccess_FirewallConnection,
    iObjectAccess_DetailedFileShare,
    iObjectAccess_RemovableStorage,
    iObjectAccess_CbacStaging,
    iPrivilegeUse_Sensitive,
    iPrivilegeUse_NonSensitive,
    iPrivilegeUse_Others,
    iDetailedTracking_ProcessCreation,
    iDetailedTracking_ProcessTermination,
    iDetailedTracking_DpapiActivity,
    iDetailedTracking_RpcCall,
    iDetailedTracking_PnpActivity,
    iDetailedTracking_TokenRightAdjusted,
    iPolicyChange_AuditPolicy,
    iPolicyChange_AuthenticationPolicy,
    iPolicyChange_AuthorizationPolicy,
    iPolicyChange_MpsscvRulePolicy,
    iPolicyChange_WfpIPSecPolicy,
    iPolicyChange_Others,
    iAccountManagement_UserAccount,
    iAccountManagement_ComputerAccount,
    iAccountManagement_SecurityGroup,
    iAccountManagement_DistributionGroup,
    iAccountManagement_ApplicationGroup,
    iAccountManagement_Others,
    iDSAccess_DSAccess,
    iDSAccess_AdAuditChanges,
    iDS_Replication,
    iDS_DetailedReplication,
    iAccountLogon_CredentialValidation,
    iAccountLogon_Kerberos,
    iAccountLogon_Others,
    iAccountLogon_KerbCredentialValidation,
    iUnknownSubCategory = 999
} POLICY_AUDIT_EVENT_TYPE_EX, *PPOLICY_AUDIT_EVENT_TYPE_EX;
typedef enum _POLICY_AUDIT_EVENT_TYPE {
    AuditCategorySystem = 0,
    AuditCategoryLogon,
    AuditCategoryObjectAccess,
    AuditCategoryPrivilegeUse,
    AuditCategoryDetailedTracking,
    AuditCategoryPolicyChange,
    AuditCategoryAccountManagement,
    AuditCategoryDirectoryServiceAccess,
    AuditCategoryAccountLogon
} POLICY_AUDIT_EVENT_TYPE, *PPOLICY_AUDIT_EVENT_TYPE;
    (POLICY_AUDIT_EVENT_SUCCESS | \
     POLICY_AUDIT_EVENT_FAILURE | \
     POLICY_AUDIT_EVENT_UNCHANGED | \
     POLICY_AUDIT_EVENT_NONE)
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
LsaRegisterLogonProcess (
    _In_ PLSA_STRING LogonProcessName,
    _Out_ PHANDLE LsaHandle,
    _Out_ PLSA_OPERATIONAL_MODE SecurityMode
    );
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
LsaLogonUser (
    _In_ HANDLE LsaHandle,
    _In_ PLSA_STRING OriginName,
    _In_ SECURITY_LOGON_TYPE LogonType,
    _In_ ULONG AuthenticationPackage,
    _In_reads_bytes_(AuthenticationInformationLength) PVOID AuthenticationInformation,
    _In_ ULONG AuthenticationInformationLength,
    _In_opt_ PTOKEN_GROUPS LocalGroups,
    _In_ PTOKEN_SOURCE SourceContext,
    _Out_ PVOID *ProfileBuffer,
    _Out_ PULONG ProfileBufferLength,
    _Inout_ PLUID LogonId,
    _Out_ PHANDLE Token,
    _Out_ PQUOTA_LIMITS Quotas,
    _Out_ PNTSTATUS SubStatus
    );
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
LsaLookupAuthenticationPackage (
    _In_ HANDLE LsaHandle,
    _In_ PLSA_STRING PackageName,
    _Out_ PULONG AuthenticationPackage
    );
_IRQL_requires_same_
NTSTATUS
NTAPI
LsaFreeReturnBuffer (
    _In_ PVOID Buffer
    );
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
LsaCallAuthenticationPackage (
    _In_ HANDLE LsaHandle,
    _In_ ULONG AuthenticationPackage,
    _In_reads_bytes_(SubmitBufferLength) PVOID ProtocolSubmitBuffer,
    _In_ ULONG SubmitBufferLength,
    _Outptr_opt_result_buffer_maybenull_(*ReturnBufferLength) PVOID *ProtocolReturnBuffer,
    _Out_opt_ PULONG ReturnBufferLength,
    _Out_opt_ PNTSTATUS ProtocolStatus
    );
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
LsaDeregisterLogonProcess (
    _In_ HANDLE LsaHandle
    );
_IRQL_requires_same_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
NTAPI
LsaConnectUntrusted (
    _Out_ PHANDLE LsaHandle
    );
__drv_sameIRQL
NTSTATUS
LsaInsertProtectedProcessAddress (
    __in PVOID BufferAddress,
    __in ULONG BufferSize
    );
__drv_sameIRQL
NTSTATUS
LsaRemoveProtectedProcessAddress (
    __in PVOID BufferAddress,
    __in ULONG BufferSize
    );
typedef NTSTATUS
(NTAPI *PFN_LSA_CALL_AUTH_PKG) (
    _In_ HANDLE LsaHandle,
    _In_ ULONG AuthenticationPackage,
    _In_reads_bytes_(SubmitBufferLength) PVOID ProtocolSubmitBuffer,
    _In_ ULONG SubmitBufferLength,
    _Out_opt_ PVOID *ProtocolReturnBuffer,
    _Out_opt_ PULONG ReturnBufferLength,
    _Out_opt_ PNTSTATUS ProtocolStatus
    );
typedef NTSTATUS
(NTAPI *PFN_LSA_DEREGISTER_PROC) (
    _In_ HANDLE LsaHandle
    );
typedef NTSTATUS
(NTAPI *PFN_LSA_FREE_BUFFER) (
    _In_ PVOID Buffer
    );
typedef NTSTATUS
(NTAPI *PFN_LSA_LOGON_USER) (
    _In_ HANDLE LsaHandle,
    _In_ PLSA_STRING OriginName,
    _In_ SECURITY_LOGON_TYPE LogonType,
    _In_ ULONG AuthenticationPackage,
    _In_reads_bytes_(AuthenticationInformationLength) PVOID AuthenticationInformation,
    _In_ ULONG AuthenticationInformationLength,
    _In_opt_ PTOKEN_GROUPS LocalGroups,
    _In_ PTOKEN_SOURCE SourceContext,
    _Out_ PVOID *ProfileBuffer,
    _Out_ PULONG ProfileBufferLength,
    _Out_ PLUID LogonId,
    _Out_ PHANDLE Token,
    _Out_ PQUOTA_LIMITS Quotas,
    _Out_ PNTSTATUS SubStatus
    );
typedef NTSTATUS
(NTAPI *PFN_LOOKUP_AUTH_PKG) (
    _In_ HANDLE LsaHandle,
    _In_ PLSA_STRING PackageName,
    _Out_ PULONG AuthenticationPackage
    );
typedef NTSTATUS
(NTAPI *PFN_LSA_REGISTER_PROC) (
    _In_ PLSA_STRING LogonProcessName,
    _Out_ PHANDLE LsaHandle,
    _Out_ PLSA_OPERATIONAL_MODE SecurityMode
    );
typedef struct _LSA_AUTH_CALLBACKS {
    PFN_LSA_CALL_AUTH_PKG LsaCallAuthPkgFn;
    PFN_LSA_DEREGISTER_PROC LsaDeregisterProcFn;
    PFN_LSA_FREE_BUFFER LsaFreeReturnBufferFn;
    PFN_LSA_LOGON_USER LsaLogonUserFn;
    PFN_LOOKUP_AUTH_PKG LsaLookupAuthPkgFn;
    PFN_LSA_REGISTER_PROC LsaRegisterProcFn;
} LSA_AUTH_CALLBACKS, *PLSA_AUTH_CALLBACKS;
typedef CONST LSA_AUTH_CALLBACKS *PCLSA_AUTH_CALLBACKS;
typedef PVOID *PLSA_CLIENT_REQUEST;
typedef enum _LSA_TOKEN_INFORMATION_TYPE {
    LsaTokenInformationNull,
    LsaTokenInformationV1,
    LsaTokenInformationV2,
    LsaTokenInformationV3
} LSA_TOKEN_INFORMATION_TYPE, *PLSA_TOKEN_INFORMATION_TYPE;
typedef struct _LSA_TOKEN_INFORMATION_NULL {
    LARGE_INTEGER ExpirationTime;
    PTOKEN_GROUPS Groups;
} LSA_TOKEN_INFORMATION_NULL, *PLSA_TOKEN_INFORMATION_NULL;
typedef struct _LSA_TOKEN_INFORMATION_V1 {
    LARGE_INTEGER ExpirationTime;
    TOKEN_USER User;
    PTOKEN_GROUPS Groups;
    TOKEN_PRIMARY_GROUP PrimaryGroup;
    PTOKEN_PRIVILEGES Privileges;
    TOKEN_OWNER Owner;
    TOKEN_DEFAULT_DACL DefaultDacl;
} LSA_TOKEN_INFORMATION_V1, *PLSA_TOKEN_INFORMATION_V1;
typedef LSA_TOKEN_INFORMATION_V1 LSA_TOKEN_INFORMATION_V2, *PLSA_TOKEN_INFORMATION_V2;
typedef struct _LSA_TOKEN_INFORMATION_V3 {
    LARGE_INTEGER ExpirationTime;
    TOKEN_USER User;
    PTOKEN_GROUPS Groups;
    TOKEN_PRIMARY_GROUP PrimaryGroup;
    PTOKEN_PRIVILEGES Privileges;
    TOKEN_OWNER Owner;
    TOKEN_DEFAULT_DACL DefaultDacl;
    TOKEN_USER_CLAIMS UserClaims;
    TOKEN_DEVICE_CLAIMS DeviceClaims;
    PTOKEN_GROUPS DeviceGroups;
} LSA_TOKEN_INFORMATION_V3, *PLSA_TOKEN_INFORMATION_V3;
typedef NTSTATUS
(NTAPI LSA_CREATE_LOGON_SESSION) (
    _Inout_ PLUID LogonId
    );
typedef NTSTATUS
(NTAPI LSA_DELETE_LOGON_SESSION) (
    _In_ PLUID LogonId
    );
typedef NTSTATUS
(NTAPI LSA_ADD_CREDENTIAL) (
    _In_ PLUID LogonId,
    _In_ ULONG AuthenticationPackage,
    _In_ PLSA_STRING PrimaryKeyValue,
    _In_ PLSA_STRING Credentials
    );
typedef NTSTATUS
(NTAPI LSA_GET_CREDENTIALS) (
    _In_ PLUID LogonId,
    _In_ ULONG AuthenticationPackage,
    _Inout_ PULONG QueryContext,
    _In_ BOOLEAN RetrieveAllCredentials,
    _In_ PLSA_STRING PrimaryKeyValue,
    _Out_ PULONG PrimaryKeyLength,
    _In_ PLSA_STRING Credentials
    );
typedef NTSTATUS
(NTAPI LSA_DELETE_CREDENTIAL) (
    _In_ PLUID LogonId,
    _In_ ULONG AuthenticationPackage,
    _In_ PLSA_STRING PrimaryKeyValue
    );
typedef PVOID
(NTAPI LSA_ALLOCATE_LSA_HEAP) (
    _In_ ULONG Length
    );
typedef VOID
(NTAPI LSA_FREE_LSA_HEAP) (
    _In_ PVOID Base
    );
typedef PVOID
(NTAPI LSA_ALLOCATE_PRIVATE_HEAP) (
    _In_ SIZE_T Length
    );
typedef VOID
(NTAPI LSA_FREE_PRIVATE_HEAP) (
    _In_ PVOID Base
    );
typedef NTSTATUS
(NTAPI LSA_ALLOCATE_CLIENT_BUFFER) (
    _In_ PLSA_CLIENT_REQUEST ClientRequest,
    _In_ ULONG LengthRequired,
    _Outptr_result_bytebuffer_(LengthRequired) PVOID *ClientBaseAddress
    );
typedef NTSTATUS
(NTAPI LSA_FREE_CLIENT_BUFFER) (
    _In_ PLSA_CLIENT_REQUEST ClientRequest,
    _In_ PVOID ClientBaseAddress
    );
typedef NTSTATUS
(NTAPI LSA_COPY_TO_CLIENT_BUFFER) (
    _In_ PLSA_CLIENT_REQUEST ClientRequest,
    _In_ ULONG Length,
    _Out_writes_bytes_(Length) PVOID ClientBaseAddress,
    _In_reads_bytes_(Length) PVOID BufferToCopy
    );
typedef NTSTATUS
(NTAPI LSA_COPY_FROM_CLIENT_BUFFER) (
    _In_ PLSA_CLIENT_REQUEST ClientRequest,
    _In_ ULONG Length,
    _Out_writes_bytes_(Length) PVOID BufferToCopy,
    _In_reads_bytes_(Length) PVOID ClientBaseAddress
    );
typedef LSA_CREATE_LOGON_SESSION * PLSA_CREATE_LOGON_SESSION;
typedef LSA_DELETE_LOGON_SESSION * PLSA_DELETE_LOGON_SESSION;
typedef LSA_ADD_CREDENTIAL * PLSA_ADD_CREDENTIAL;
typedef LSA_GET_CREDENTIALS * PLSA_GET_CREDENTIALS;
typedef LSA_DELETE_CREDENTIAL * PLSA_DELETE_CREDENTIAL;
typedef LSA_ALLOCATE_LSA_HEAP * PLSA_ALLOCATE_LSA_HEAP;
typedef LSA_FREE_LSA_HEAP * PLSA_FREE_LSA_HEAP;
typedef LSA_ALLOCATE_PRIVATE_HEAP * PLSA_ALLOCATE_PRIVATE_HEAP;
typedef LSA_FREE_PRIVATE_HEAP * PLSA_FREE_PRIVATE_HEAP;
typedef LSA_ALLOCATE_CLIENT_BUFFER * PLSA_ALLOCATE_CLIENT_BUFFER;
typedef LSA_FREE_CLIENT_BUFFER * PLSA_FREE_CLIENT_BUFFER;
typedef LSA_COPY_TO_CLIENT_BUFFER * PLSA_COPY_TO_CLIENT_BUFFER;
typedef LSA_COPY_FROM_CLIENT_BUFFER * PLSA_COPY_FROM_CLIENT_BUFFER;
typedef struct _LSA_DISPATCH_TABLE {
    PLSA_CREATE_LOGON_SESSION CreateLogonSession;
    PLSA_DELETE_LOGON_SESSION DeleteLogonSession;
    PLSA_ADD_CREDENTIAL AddCredential;
    PLSA_GET_CREDENTIALS GetCredentials;
    PLSA_DELETE_CREDENTIAL DeleteCredential;
    PLSA_ALLOCATE_LSA_HEAP AllocateLsaHeap;
    PLSA_FREE_LSA_HEAP FreeLsaHeap;
    PLSA_ALLOCATE_CLIENT_BUFFER AllocateClientBuffer;
    PLSA_FREE_CLIENT_BUFFER FreeClientBuffer;
    PLSA_COPY_TO_CLIENT_BUFFER CopyToClientBuffer;
    PLSA_COPY_FROM_CLIENT_BUFFER CopyFromClientBuffer;
} LSA_DISPATCH_TABLE, *PLSA_DISPATCH_TABLE;
typedef NTSTATUS
(NTAPI LSA_AP_INITIALIZE_PACKAGE) (
    _In_ ULONG AuthenticationPackageId,
    _In_ PLSA_DISPATCH_TABLE LsaDispatchTable,
    _In_opt_ PLSA_STRING Database,
    _In_opt_ PLSA_STRING Confidentiality,
    _Out_ PLSA_STRING *AuthenticationPackageName
    );
typedef NTSTATUS
(NTAPI LSA_AP_LOGON_USER) (
    _In_ PLSA_CLIENT_REQUEST ClientRequest,
    _In_ SECURITY_LOGON_TYPE LogonType,
    _In_reads_bytes_(AuthenticationInformationLength) PVOID AuthenticationInformation,
    _In_ PVOID ClientAuthenticationBase,
    _In_ ULONG AuthenticationInformationLength,
    _Outptr_result_bytebuffer_(*ProfileBufferLength) PVOID *ProfileBuffer,
    _Out_ PULONG ProfileBufferLength,
    _Out_ PLUID LogonId,
    _Out_ PNTSTATUS SubStatus,
    _Out_ PLSA_TOKEN_INFORMATION_TYPE TokenInformationType,
    _Outptr_ PVOID *TokenInformation,
    _Out_ PLSA_UNICODE_STRING *AccountName,
    _Out_ PLSA_UNICODE_STRING *AuthenticatingAuthority
    );
typedef NTSTATUS
(NTAPI LSA_AP_LOGON_USER_EX) (
    _In_ PLSA_CLIENT_REQUEST ClientRequest,
    _In_ SECURITY_LOGON_TYPE LogonType,
    _In_reads_bytes_(AuthenticationInformationLength) PVOID AuthenticationInformation,
    _In_ PVOID ClientAuthenticationBase,
    _In_ ULONG AuthenticationInformationLength,
    _Outptr_result_bytebuffer_(*ProfileBufferLength) PVOID *ProfileBuffer,
    _Out_ PULONG ProfileBufferLength,
    _Out_ PLUID LogonId,
    _Out_ PNTSTATUS SubStatus,
    _Out_ PLSA_TOKEN_INFORMATION_TYPE TokenInformationType,
    _Outptr_ PVOID *TokenInformation,
    _Out_ PUNICODE_STRING *AccountName,
    _Out_ PUNICODE_STRING *AuthenticatingAuthority,
    _Out_ PUNICODE_STRING *MachineName
    );
typedef NTSTATUS
(NTAPI LSA_AP_CALL_PACKAGE) (
    _In_ PLSA_CLIENT_REQUEST ClientRequest,
    _In_reads_bytes_(SubmitBufferLength) PVOID ProtocolSubmitBuffer,
    _In_ PVOID ClientBufferBase,
    _In_ ULONG SubmitBufferLength,
    _Outptr_result_bytebuffer_(*ReturnBufferLength) PVOID *ProtocolReturnBuffer,
    _Out_ PULONG ReturnBufferLength,
    _Out_ PNTSTATUS ProtocolStatus
    );
typedef NTSTATUS
(NTAPI LSA_AP_CALL_PACKAGE_PASSTHROUGH) (
    _In_ PLSA_CLIENT_REQUEST ClientRequest,
    _In_reads_bytes_(SubmitBufferLength) PVOID ProtocolSubmitBuffer,
    _In_ PVOID ClientBufferBase,
    _In_ ULONG SubmitBufferLength,
    _Outptr_result_bytebuffer_(*ReturnBufferLength) PVOID *ProtocolReturnBuffer,
    _Out_ PULONG ReturnBufferLength,
    _Out_ PNTSTATUS ProtocolStatus
    );
typedef VOID
(NTAPI LSA_AP_LOGON_TERMINATED) (
    _In_ PLUID LogonId
    );
typedef LSA_AP_CALL_PACKAGE LSA_AP_CALL_PACKAGE_UNTRUSTED;
typedef LSA_AP_INITIALIZE_PACKAGE * PLSA_AP_INITIALIZE_PACKAGE;
typedef LSA_AP_LOGON_USER * PLSA_AP_LOGON_USER;
typedef LSA_AP_LOGON_USER_EX * PLSA_AP_LOGON_USER_EX;
typedef LSA_AP_CALL_PACKAGE * PLSA_AP_CALL_PACKAGE;
typedef LSA_AP_CALL_PACKAGE_PASSTHROUGH * PLSA_AP_CALL_PACKAGE_PASSTHROUGH;
typedef LSA_AP_LOGON_TERMINATED * PLSA_AP_LOGON_TERMINATED;
typedef LSA_AP_CALL_PACKAGE_UNTRUSTED * PLSA_AP_CALL_PACKAGE_UNTRUSTED;
                               POLICY_VIEW_LOCAL_INFORMATION |\
                               POLICY_VIEW_AUDIT_INFORMATION |\
                               POLICY_GET_PRIVATE_INFORMATION |\
                               POLICY_TRUST_ADMIN |\
                               POLICY_CREATE_ACCOUNT |\
                               POLICY_CREATE_SECRET |\
                               POLICY_CREATE_PRIVILEGE |\
                               POLICY_SET_DEFAULT_QUOTA_LIMITS |\
                               POLICY_SET_AUDIT_REQUIREMENTS |\
                               POLICY_AUDIT_LOG_ADMIN |\
                               POLICY_SERVER_ADMIN |\
                               POLICY_LOOKUP_NAMES)
                               POLICY_VIEW_AUDIT_INFORMATION |\
                               POLICY_GET_PRIVATE_INFORMATION)
                               POLICY_TRUST_ADMIN |\
                               POLICY_CREATE_ACCOUNT |\
                               POLICY_CREATE_SECRET |\
                               POLICY_CREATE_PRIVILEGE |\
                               POLICY_SET_DEFAULT_QUOTA_LIMITS |\
                               POLICY_SET_AUDIT_REQUIREMENTS |\
                               POLICY_AUDIT_LOG_ADMIN |\
                               POLICY_SERVER_ADMIN)
                               POLICY_VIEW_LOCAL_INFORMATION |\
                               POLICY_LOOKUP_NAMES)
typedef struct _LSA_TRANSLATED_SID {
    SID_NAME_USE Use;
    ULONG RelativeId;
    LONG DomainIndex;
} LSA_TRANSLATED_SID, *PLSA_TRANSLATED_SID;
typedef ULONG POLICY_SYSTEM_ACCESS_MODE, *PPOLICY_SYSTEM_ACCESS_MODE;
                                             POLICY_MODE_NETWORK | \
                                             POLICY_MODE_BATCH | \
                                             POLICY_MODE_SERVICE | \
                                             POLICY_MODE_PROXY | \
                                             POLICY_MODE_DENY_INTERACTIVE | \
                                             POLICY_MODE_DENY_NETWORK | \
                                             SECURITY_ACCESS_DENY_BATCH_LOGON | \
                                             SECURITY_ACCESS_DENY_SERVICE_LOGON | \
                                             POLICY_MODE_REMOTE_INTERACTIVE | \
                                             POLICY_MODE_DENY_REMOTE_INTERACTIVE )
                                             POLICY_MODE_NETWORK | \
                                             POLICY_MODE_BATCH | \
                                             POLICY_MODE_SERVICE | \
                                             POLICY_MODE_PROXY )
typedef enum _POLICY_LSA_SERVER_ROLE {
    PolicyServerRoleBackup = 2,
    PolicyServerRolePrimary
} POLICY_LSA_SERVER_ROLE, *PPOLICY_LSA_SERVER_ROLE;
typedef ULONG POLICY_AUDIT_EVENT_OPTIONS, *PPOLICY_AUDIT_EVENT_OPTIONS;
typedef struct _POLICY_PRIVILEGE_DEFINITION {
    LSA_UNICODE_STRING Name;
    LUID LocalValue;
} POLICY_PRIVILEGE_DEFINITION, *PPOLICY_PRIVILEGE_DEFINITION;
typedef enum _POLICY_INFORMATION_CLASS {
    PolicyAuditLogInformation = 1,
    PolicyAuditEventsInformation,
    PolicyPrimaryDomainInformation,
    PolicyPdAccountInformation,
    PolicyAccountDomainInformation,
    PolicyLsaServerRoleInformation,
    PolicyReplicaSourceInformation,
    PolicyDefaultQuotaInformation,
    PolicyModificationInformation,
    PolicyAuditFullSetInformation,
    PolicyAuditFullQueryInformation,
    PolicyDnsDomainInformation,
    PolicyDnsDomainInformationInt,
    PolicyLocalAccountDomainInformation,
    PolicyMachineAccountInformation,
    PolicyLastEntry
} POLICY_INFORMATION_CLASS, *PPOLICY_INFORMATION_CLASS;
typedef struct _POLICY_AUDIT_LOG_INFO {
    ULONG AuditLogPercentFull;
    ULONG MaximumLogSize;
    LARGE_INTEGER AuditRetentionPeriod;
    BOOLEAN AuditLogFullShutdownInProgress;
    LARGE_INTEGER TimeToShutdown;
    ULONG NextAuditRecordId;
} POLICY_AUDIT_LOG_INFO, *PPOLICY_AUDIT_LOG_INFO;
typedef struct _POLICY_AUDIT_EVENTS_INFO {
    BOOLEAN AuditingMode;
    PPOLICY_AUDIT_EVENT_OPTIONS EventAuditingOptions;
    ULONG MaximumAuditEventCount;
} POLICY_AUDIT_EVENTS_INFO, *PPOLICY_AUDIT_EVENTS_INFO;
typedef struct _POLICY_AUDIT_SUBCATEGORIES_INFO {
    ULONG MaximumSubCategoryCount;
    PPOLICY_AUDIT_EVENT_OPTIONS EventAuditingOptions;
} POLICY_AUDIT_SUBCATEGORIES_INFO, *PPOLICY_AUDIT_SUBCATEGORIES_INFO;
typedef struct _POLICY_AUDIT_CATEGORIES_INFO {
    ULONG MaximumCategoryCount;
    PPOLICY_AUDIT_SUBCATEGORIES_INFO SubCategoriesInfo;
} POLICY_AUDIT_CATEGORIES_INFO, *PPOLICY_AUDIT_CATEGORIES_INFO;
                                          PER_USER_AUDIT_SUCCESS_EXCLUDE | \
                                          PER_USER_AUDIT_FAILURE_INCLUDE | \
                                          PER_USER_AUDIT_FAILURE_EXCLUDE | \
                                          PER_USER_AUDIT_NONE)
typedef struct _POLICY_PRIMARY_DOMAIN_INFO {
    LSA_UNICODE_STRING Name;
    PSID Sid;
} POLICY_PRIMARY_DOMAIN_INFO, *PPOLICY_PRIMARY_DOMAIN_INFO;
typedef struct _POLICY_PD_ACCOUNT_INFO {
    LSA_UNICODE_STRING Name;
} POLICY_PD_ACCOUNT_INFO, *PPOLICY_PD_ACCOUNT_INFO;
typedef struct _POLICY_LSA_SERVER_ROLE_INFO {
    POLICY_LSA_SERVER_ROLE LsaServerRole;
} POLICY_LSA_SERVER_ROLE_INFO, *PPOLICY_LSA_SERVER_ROLE_INFO;
typedef struct _POLICY_REPLICA_SOURCE_INFO {
    LSA_UNICODE_STRING ReplicaSource;
    LSA_UNICODE_STRING ReplicaAccountName;
} POLICY_REPLICA_SOURCE_INFO, *PPOLICY_REPLICA_SOURCE_INFO;
typedef struct _POLICY_DEFAULT_QUOTA_INFO {
    QUOTA_LIMITS QuotaLimits;
} POLICY_DEFAULT_QUOTA_INFO, *PPOLICY_DEFAULT_QUOTA_INFO;
typedef struct _POLICY_MODIFICATION_INFO {
    LARGE_INTEGER ModifiedId;
    LARGE_INTEGER DatabaseCreationTime;
} POLICY_MODIFICATION_INFO, *PPOLICY_MODIFICATION_INFO;
typedef struct _POLICY_AUDIT_FULL_SET_INFO {
    BOOLEAN ShutDownOnFull;
} POLICY_AUDIT_FULL_SET_INFO, *PPOLICY_AUDIT_FULL_SET_INFO;
typedef struct _POLICY_AUDIT_FULL_QUERY_INFO {
    BOOLEAN ShutDownOnFull;
    BOOLEAN LogIsFull;
} POLICY_AUDIT_FULL_QUERY_INFO, *PPOLICY_AUDIT_FULL_QUERY_INFO;
typedef enum _POLICY_DOMAIN_INFORMATION_CLASS {
    PolicyDomainEfsInformation = 2,
    PolicyDomainKerberosTicketInformation
} POLICY_DOMAIN_INFORMATION_CLASS, *PPOLICY_DOMAIN_INFORMATION_CLASS;
typedef struct _POLICY_DOMAIN_EFS_INFO {
    ULONG InfoLength;
    PUCHAR EfsBlob;
} POLICY_DOMAIN_EFS_INFO, *PPOLICY_DOMAIN_EFS_INFO;
typedef struct _POLICY_DOMAIN_KERBEROS_TICKET_INFO {
    ULONG AuthenticationOptions;
    LARGE_INTEGER MaxServiceTicketAge;
    LARGE_INTEGER MaxTicketAge;
    LARGE_INTEGER MaxRenewAge;
    LARGE_INTEGER MaxClockSkew;
    LARGE_INTEGER Reserved;
} POLICY_DOMAIN_KERBEROS_TICKET_INFO, *PPOLICY_DOMAIN_KERBEROS_TICKET_INFO;
typedef struct _POLICY_MACHINE_ACCT_INFO {
    ULONG Rid;
    PSID Sid;
} POLICY_MACHINE_ACCT_INFO, *PPOLICY_MACHINE_ACCT_INFO;
typedef enum _POLICY_NOTIFICATION_INFORMATION_CLASS {
    PolicyNotifyAuditEventsInformation = 1,
    PolicyNotifyAccountDomainInformation,
    PolicyNotifyServerRoleInformation,
    PolicyNotifyDnsDomainInformation,
    PolicyNotifyDomainEfsInformation,
    PolicyNotifyDomainKerberosTicketInformation,
    PolicyNotifyMachineAccountPasswordInformation,
    PolicyNotifyGlobalSaclInformation,
    PolicyNotifyMax
} POLICY_NOTIFICATION_INFORMATION_CLASS, *PPOLICY_NOTIFICATION_INFORMATION_CLASS;
                               ACCOUNT_VIEW |\
                               ACCOUNT_ADJUST_PRIVILEGES |\
                               ACCOUNT_ADJUST_QUOTAS |\
                               ACCOUNT_ADJUST_SYSTEM_ACCESS)
                               ACCOUNT_VIEW)
                               ACCOUNT_ADJUST_PRIVILEGES |\
                               ACCOUNT_ADJUST_QUOTAS |\
                               ACCOUNT_ADJUST_SYSTEM_ACCESS)
typedef PVOID LSA_HANDLE, *PLSA_HANDLE;
                                TRUSTED_QUERY_DOMAIN_NAME |\
                                TRUSTED_QUERY_CONTROLLERS |\
                                TRUSTED_SET_CONTROLLERS |\
                                TRUSTED_QUERY_POSIX |\
                                TRUSTED_SET_POSIX |\
                                TRUSTED_SET_AUTH |\
                                TRUSTED_QUERY_AUTH)
                                TRUSTED_QUERY_DOMAIN_NAME)
                                TRUSTED_SET_CONTROLLERS |\
                                TRUSTED_SET_POSIX |\
                                TRUSTED_SET_AUTH )
                                TRUSTED_QUERY_CONTROLLERS |\
                                TRUSTED_QUERY_POSIX)
typedef enum _TRUSTED_INFORMATION_CLASS {
    TrustedDomainNameInformation = 1,
    TrustedControllersInformation,
    TrustedPosixOffsetInformation,
    TrustedPasswordInformation,
    TrustedDomainInformationBasic,
    TrustedDomainInformationEx,
    TrustedDomainAuthInformation,
    TrustedDomainFullInformation,
    TrustedDomainAuthInformationInternal,
    TrustedDomainFullInformationInternal,
    TrustedDomainInformationEx2Internal,
    TrustedDomainFullInformation2Internal,
    TrustedDomainSupportedEncryptionTypes,
} TRUSTED_INFORMATION_CLASS, *PTRUSTED_INFORMATION_CLASS;
typedef struct _TRUSTED_DOMAIN_NAME_INFO {
    LSA_UNICODE_STRING Name;
} TRUSTED_DOMAIN_NAME_INFO, *PTRUSTED_DOMAIN_NAME_INFO;
typedef struct _TRUSTED_CONTROLLERS_INFO {
    ULONG Entries;
    PLSA_UNICODE_STRING Names;
} TRUSTED_CONTROLLERS_INFO, *PTRUSTED_CONTROLLERS_INFO;
typedef struct _TRUSTED_POSIX_OFFSET_INFO {
    ULONG Offset;
} TRUSTED_POSIX_OFFSET_INFO, *PTRUSTED_POSIX_OFFSET_INFO;
typedef struct _TRUSTED_PASSWORD_INFO {
    LSA_UNICODE_STRING Password;
    LSA_UNICODE_STRING OldPassword;
} TRUSTED_PASSWORD_INFO, *PTRUSTED_PASSWORD_INFO;
typedef LSA_TRUST_INFORMATION TRUSTED_DOMAIN_INFORMATION_BASIC;
typedef PLSA_TRUST_INFORMATION PTRUSTED_DOMAIN_INFORMATION_BASIC;
typedef struct _TRUSTED_DOMAIN_INFORMATION_EX {
    LSA_UNICODE_STRING Name;
    LSA_UNICODE_STRING FlatName;
    PSID Sid;
    ULONG TrustDirection;
    ULONG TrustType;
    ULONG TrustAttributes;
} TRUSTED_DOMAIN_INFORMATION_EX, *PTRUSTED_DOMAIN_INFORMATION_EX;
typedef struct _TRUSTED_DOMAIN_INFORMATION_EX2 {
    LSA_UNICODE_STRING Name;
    LSA_UNICODE_STRING FlatName;
    PSID Sid;
    ULONG TrustDirection;
    ULONG TrustType;
    ULONG TrustAttributes;
    ULONG ForestTrustLength;
    [size_is( ForestTrustLength )]
    PUCHAR ForestTrustInfo;
} TRUSTED_DOMAIN_INFORMATION_EX2, *PTRUSTED_DOMAIN_INFORMATION_EX2;
typedef struct _LSA_AUTH_INFORMATION {
    LARGE_INTEGER LastUpdateTime;
    ULONG AuthType;
    ULONG AuthInfoLength;
    PUCHAR AuthInfo;
} LSA_AUTH_INFORMATION, *PLSA_AUTH_INFORMATION;
typedef struct _TRUSTED_DOMAIN_AUTH_INFORMATION {
    ULONG IncomingAuthInfos;
    PLSA_AUTH_INFORMATION IncomingAuthenticationInformation;
    PLSA_AUTH_INFORMATION IncomingPreviousAuthenticationInformation;
    ULONG OutgoingAuthInfos;
    PLSA_AUTH_INFORMATION OutgoingAuthenticationInformation;
    PLSA_AUTH_INFORMATION OutgoingPreviousAuthenticationInformation;
} TRUSTED_DOMAIN_AUTH_INFORMATION, *PTRUSTED_DOMAIN_AUTH_INFORMATION;
typedef struct _TRUSTED_DOMAIN_FULL_INFORMATION {
    TRUSTED_DOMAIN_INFORMATION_EX Information;
    TRUSTED_POSIX_OFFSET_INFO PosixOffset;
    TRUSTED_DOMAIN_AUTH_INFORMATION AuthInformation;
} TRUSTED_DOMAIN_FULL_INFORMATION, *PTRUSTED_DOMAIN_FULL_INFORMATION;
typedef struct _TRUSTED_DOMAIN_FULL_INFORMATION2 {
    TRUSTED_DOMAIN_INFORMATION_EX2 Information;
    TRUSTED_POSIX_OFFSET_INFO PosixOffset;
    TRUSTED_DOMAIN_AUTH_INFORMATION AuthInformation;
} TRUSTED_DOMAIN_FULL_INFORMATION2, *PTRUSTED_DOMAIN_FULL_INFORMATION2;
typedef struct _TRUSTED_DOMAIN_SUPPORTED_ENCRYPTION_TYPES {
    ULONG SupportedEncryptionTypes;
} TRUSTED_DOMAIN_SUPPORTED_ENCRYPTION_TYPES, *PTRUSTED_DOMAIN_SUPPORTED_ENCRYPTION_TYPES;
typedef enum {
    ForestTrustTopLevelName,
    ForestTrustTopLevelNameEx,
    ForestTrustDomainInfo,
    ForestTrustRecordTypeLast = ForestTrustDomainInfo
} LSA_FOREST_TRUST_RECORD_TYPE;
typedef struct _LSA_FOREST_TRUST_DOMAIN_INFO {
    PISID Sid;
    LSA_UNICODE_STRING DnsName;
    LSA_UNICODE_STRING NetbiosName;
} LSA_FOREST_TRUST_DOMAIN_INFO, *PLSA_FOREST_TRUST_DOMAIN_INFO;
typedef struct _LSA_FOREST_TRUST_BINARY_DATA {
    [range(0, MAX_FOREST_TRUST_BINARY_DATA_SIZE)] ULONG Length;
    [size_is( Length )] PUCHAR Buffer;
} LSA_FOREST_TRUST_BINARY_DATA, *PLSA_FOREST_TRUST_BINARY_DATA;
typedef struct _LSA_FOREST_TRUST_RECORD {
    ULONG Flags;
    LSA_FOREST_TRUST_RECORD_TYPE ForestTrustType;
    LARGE_INTEGER Time;
    [switch_type( LSA_FOREST_TRUST_RECORD_TYPE ), switch_is( ForestTrustType )]
    union {
        [case( ForestTrustTopLevelName,
               ForestTrustTopLevelNameEx )] LSA_UNICODE_STRING TopLevelName;
        [case( ForestTrustDomainInfo )] LSA_FOREST_TRUST_DOMAIN_INFO DomainInfo;
        [default] LSA_FOREST_TRUST_BINARY_DATA Data;
    } ForestTrustData;
} LSA_FOREST_TRUST_RECORD, *PLSA_FOREST_TRUST_RECORD;
typedef struct _LSA_FOREST_TRUST_INFORMATION {
    [range(0, MAX_RECORDS_IN_FOREST_TRUST_INFO)] ULONG RecordCount;
    [size_is( RecordCount )] PLSA_FOREST_TRUST_RECORD * Entries;
} LSA_FOREST_TRUST_INFORMATION, *PLSA_FOREST_TRUST_INFORMATION;
typedef enum {
    CollisionTdo,
    CollisionXref,
    CollisionOther
} LSA_FOREST_TRUST_COLLISION_RECORD_TYPE;
typedef struct _LSA_FOREST_TRUST_COLLISION_RECORD {
    ULONG Index;
    LSA_FOREST_TRUST_COLLISION_RECORD_TYPE Type;
    ULONG Flags;
    LSA_UNICODE_STRING Name;
} LSA_FOREST_TRUST_COLLISION_RECORD, *PLSA_FOREST_TRUST_COLLISION_RECORD;
typedef struct _LSA_FOREST_TRUST_COLLISION_INFORMATION {
    ULONG RecordCount;
    [size_is( RecordCount )]
    PLSA_FOREST_TRUST_COLLISION_RECORD * Entries;
} LSA_FOREST_TRUST_COLLISION_INFORMATION, *PLSA_FOREST_TRUST_COLLISION_INFORMATION;
                               SECRET_SET_VALUE |\
                               SECRET_QUERY_VALUE)
                               SECRET_QUERY_VALUE)
                               SECRET_SET_VALUE)
                ( ( sizeof( LSA_MACHINE_SECRET_PREFIX ) - sizeof( WCHAR ) ) / sizeof( WCHAR ) )
typedef ULONG LSA_ENUMERATION_HANDLE, *PLSA_ENUMERATION_HANDLE;
typedef struct _LSA_ENUMERATION_INFORMATION {
    PSID Sid;
} LSA_ENUMERATION_INFORMATION, *PLSA_ENUMERATION_INFORMATION;
NTSTATUS
NTAPI
LsaFreeMemory(
    _In_opt_ PVOID Buffer
    );
NTSTATUS
NTAPI
LsaClose(
    _In_ LSA_HANDLE ObjectHandle
    );
NTSTATUS
NTAPI
LsaDelete(
    _In_ LSA_HANDLE ObjectHandle
    );
NTSTATUS
NTAPI
LsaQuerySecurityObject(
    _In_ LSA_HANDLE ObjectHandle,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _Out_ PSECURITY_DESCRIPTOR *SecurityDescriptor
    );
NTSTATUS
NTAPI
LsaSetSecurityObject(
    _In_ LSA_HANDLE ObjectHandle,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );
NTSTATUS
NTAPI
LsaChangePassword(
    _In_ PLSA_UNICODE_STRING ServerName,
    _In_ PLSA_UNICODE_STRING DomainName,
    _In_ PLSA_UNICODE_STRING AccountName,
    _In_ PLSA_UNICODE_STRING OldPassword,
    _In_ PLSA_UNICODE_STRING NewPassword
    );
typedef struct _LSA_LAST_INTER_LOGON_INFO {
    LARGE_INTEGER LastSuccessfulLogon;
    LARGE_INTEGER LastFailedLogon;
    ULONG FailedAttemptCountSinceLastSuccessfulLogon;
} LSA_LAST_INTER_LOGON_INFO, *PLSA_LAST_INTER_LOGON_INFO;
typedef struct _SECURITY_LOGON_SESSION_DATA {
    ULONG Size;
    LUID LogonId;
    LSA_UNICODE_STRING UserName;
    LSA_UNICODE_STRING LogonDomain;
    LSA_UNICODE_STRING AuthenticationPackage;
    ULONG LogonType;
    ULONG Session;
    PSID Sid;
    LARGE_INTEGER LogonTime;
    LSA_UNICODE_STRING LogonServer;
    LSA_UNICODE_STRING DnsDomainName;
    LSA_UNICODE_STRING Upn;
    ULONG UserFlags;
    LSA_LAST_INTER_LOGON_INFO LastLogonInfo;
    LSA_UNICODE_STRING LogonScript;
    LSA_UNICODE_STRING ProfilePath;
    LSA_UNICODE_STRING HomeDirectory;
    LSA_UNICODE_STRING HomeDirectoryDrive;
    LARGE_INTEGER LogoffTime;
    LARGE_INTEGER KickOffTime;
    LARGE_INTEGER PasswordLastSet;
    LARGE_INTEGER PasswordCanChange;
    LARGE_INTEGER PasswordMustChange;
} SECURITY_LOGON_SESSION_DATA, * PSECURITY_LOGON_SESSION_DATA;
NTSTATUS
NTAPI
LsaEnumerateLogonSessions(
    _Out_ PULONG LogonSessionCount,
    _Out_ PLUID * LogonSessionList
    );
NTSTATUS
NTAPI
LsaGetLogonSessionData(
    _In_ PLUID LogonId,
    _Out_ PSECURITY_LOGON_SESSION_DATA * ppLogonSessionData
    );
NTSTATUS
NTAPI
LsaOpenPolicy(
    _In_opt_ PLSA_UNICODE_STRING SystemName,
    _In_ PLSA_OBJECT_ATTRIBUTES ObjectAttributes,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PLSA_HANDLE PolicyHandle
    );
NTSTATUS
NTAPI
LsaOpenPolicySce(
    _In_opt_ PLSA_UNICODE_STRING SystemName,
    _In_ PLSA_OBJECT_ATTRIBUTES ObjectAttributes,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PLSA_HANDLE PolicyHandle
    );
        ( \
            CENTRAL_ACCESS_POLICY_OWNER_RIGHTS_PRESENT_FLAG | \
            CENTRAL_ACCESS_POLICY_STAGED_OWNER_RIGHTS_PRESENT_FLAG | \
            CENTRAL_ACCESS_POLICY_STAGED_FLAG \
        )
        ( \
            LSASETCAPS_RELOAD_FLAG \
        )
typedef struct _CENTRAL_ACCESS_POLICY_ENTRY {
    LSA_UNICODE_STRING Name;
    LSA_UNICODE_STRING Description;
    LSA_UNICODE_STRING ChangeId;
    ULONG LengthAppliesTo;
    _Field_size_bytes_(LengthAppliesTo)
    PUCHAR AppliesTo;
    ULONG LengthSD;
    _Field_size_bytes_(LengthSD)
    PSECURITY_DESCRIPTOR SD;
    ULONG LengthStagedSD;
    _Field_size_bytes_(LengthStagedSD)
    PSECURITY_DESCRIPTOR StagedSD;
    ULONG Flags;
}
CENTRAL_ACCESS_POLICY_ENTRY, *PCENTRAL_ACCESS_POLICY_ENTRY;
typedef const CENTRAL_ACCESS_POLICY_ENTRY *PCCENTRAL_ACCESS_POLICY_ENTRY;
typedef struct _CENTRAL_ACCESS_POLICY {
    PSID CAPID;
    LSA_UNICODE_STRING Name;
    LSA_UNICODE_STRING Description;
    LSA_UNICODE_STRING ChangeId;
    ULONG Flags;
    ULONG CAPECount;
    _Field_size_(CAPECount)
    PCENTRAL_ACCESS_POLICY_ENTRY *CAPEs;
}
CENTRAL_ACCESS_POLICY, *PCENTRAL_ACCESS_POLICY;
typedef const CENTRAL_ACCESS_POLICY *PCCENTRAL_ACCESS_POLICY;
NTSTATUS
NTAPI
LsaSetCAPs(
    _In_reads_opt_(CAPDNCount) PLSA_UNICODE_STRING CAPDNs,
    _In_ ULONG CAPDNCount,
    _In_ ULONG Flags
    );
NTSTATUS
NTAPI
LsaGetAppliedCAPIDs(
    _In_opt_ PLSA_UNICODE_STRING SystemName,
    _Outptr_result_buffer_(*CAPIDCount) PSID **CAPIDs,
    _Out_ PULONG CAPIDCount
    );
NTSTATUS
NTAPI
LsaQueryCAPs(
    _In_reads_opt_(CAPIDCount) PSID *CAPIDs,
    _In_ ULONG CAPIDCount,
    _Outptr_result_buffer_(*CAPCount) PCENTRAL_ACCESS_POLICY *CAPs,
    _Out_ PULONG CAPCount
    );
NTSTATUS
NTAPI
LsaQueryInformationPolicy(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ POLICY_INFORMATION_CLASS InformationClass,
    _Out_ PVOID *Buffer
    );
NTSTATUS
NTAPI
LsaSetInformationPolicy(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ POLICY_INFORMATION_CLASS InformationClass,
    _In_ PVOID Buffer
    );
NTSTATUS
NTAPI
LsaQueryDomainInformationPolicy(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ POLICY_DOMAIN_INFORMATION_CLASS InformationClass,
    _Out_ PVOID *Buffer
    );
NTSTATUS
NTAPI
LsaSetDomainInformationPolicy(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ POLICY_DOMAIN_INFORMATION_CLASS InformationClass,
    _In_opt_ PVOID Buffer
    );
NTSTATUS
NTAPI
LsaRegisterPolicyChangeNotification(
    _In_ POLICY_NOTIFICATION_INFORMATION_CLASS InformationClass,
    _In_ HANDLE NotificationEventHandle
    );
NTSTATUS
NTAPI
LsaUnregisterPolicyChangeNotification(
    _In_ POLICY_NOTIFICATION_INFORMATION_CLASS InformationClass,
    _In_ HANDLE NotificationEventHandle
    );
NTSTATUS
NTAPI
LsaClearAuditLog(
    _In_ LSA_HANDLE PolicyHandle
    );
NTSTATUS
NTAPI
LsaCreateAccount(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PSID AccountSid,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PLSA_HANDLE AccountHandle
    );
NTSTATUS
NTAPI
LsaEnumerateAccounts(
    _In_ LSA_HANDLE PolicyHandle,
    _Inout_ PLSA_ENUMERATION_HANDLE EnumerationContext,
    _Out_ PVOID *Buffer,
    _In_ ULONG PreferedMaximumLength,
    _Out_ PULONG CountReturned
    );
NTSTATUS
NTAPI
LsaCreateTrustedDomain(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PLSA_TRUST_INFORMATION TrustedDomainInformation,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PLSA_HANDLE TrustedDomainHandle
    );
NTSTATUS
NTAPI
LsaEnumerateTrustedDomains(
    _In_ LSA_HANDLE PolicyHandle,
    _Inout_ PLSA_ENUMERATION_HANDLE EnumerationContext,
    _Out_ PVOID *Buffer,
    _In_ ULONG PreferedMaximumLength,
    _Out_ PULONG CountReturned
    );
NTSTATUS
NTAPI
LsaEnumeratePrivileges(
    _In_ LSA_HANDLE PolicyHandle,
    _Inout_ PLSA_ENUMERATION_HANDLE EnumerationContext,
    _Out_ PVOID *Buffer,
    _In_ ULONG PreferedMaximumLength,
    _Out_ PULONG CountReturned
    );
NTSTATUS
NTAPI
LsaLookupNames(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ ULONG Count,
    _In_ PLSA_UNICODE_STRING Names,
    _Out_ PLSA_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    _Out_ PLSA_TRANSLATED_SID *Sids
    );
NTSTATUS
NTAPI
LsaLookupNames2(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ ULONG Flags,
    _In_ ULONG Count,
    _In_ PLSA_UNICODE_STRING Names,
    _Out_ PLSA_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    _Out_ PLSA_TRANSLATED_SID2 *Sids
    );
NTSTATUS
NTAPI
LsaLookupSids(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ ULONG Count,
    _In_ PSID *Sids,
    _Out_ PLSA_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    _Out_ PLSA_TRANSLATED_NAME *Names
    );
NTSTATUS
NTAPI
LsaLookupSids2(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ ULONG LookupOptions,
    _In_ ULONG Count,
    _In_ PSID *Sids,
    _Out_ PLSA_REFERENCED_DOMAIN_LIST *ReferencedDomains,
    _Out_ PLSA_TRANSLATED_NAME *Names
    );
NTSTATUS
NTAPI
LsaCreateSecret(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PLSA_UNICODE_STRING SecretName,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PLSA_HANDLE SecretHandle
    );
NTSTATUS
NTAPI
LsaOpenAccount(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PSID AccountSid,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PLSA_HANDLE AccountHandle
    );
NTSTATUS
NTAPI
LsaEnumeratePrivilegesOfAccount(
    _In_ LSA_HANDLE AccountHandle,
    _Out_ PPRIVILEGE_SET *Privileges
    );
NTSTATUS
NTAPI
LsaAddPrivilegesToAccount(
    _In_ LSA_HANDLE AccountHandle,
    _In_ PPRIVILEGE_SET Privileges
    );
NTSTATUS
NTAPI
LsaRemovePrivilegesFromAccount(
    _In_ LSA_HANDLE AccountHandle,
    _In_ BOOLEAN AllPrivileges,
    _In_opt_ PPRIVILEGE_SET Privileges
    );
NTSTATUS
NTAPI
LsaGetQuotasForAccount(
    _In_ LSA_HANDLE AccountHandle,
    _Out_ PQUOTA_LIMITS QuotaLimits
    );
NTSTATUS
NTAPI
LsaSetQuotasForAccount(
    _In_ LSA_HANDLE AccountHandle,
    _In_ PQUOTA_LIMITS QuotaLimits
    );
NTSTATUS
NTAPI
LsaGetSystemAccessAccount(
    _In_ LSA_HANDLE AccountHandle,
    _Out_ PULONG SystemAccess
    );
NTSTATUS
NTAPI
LsaSetSystemAccessAccount(
    _In_ LSA_HANDLE AccountHandle,
    _In_ ULONG SystemAccess
    );
NTSTATUS
NTAPI
LsaOpenTrustedDomain(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PSID TrustedDomainSid,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PLSA_HANDLE TrustedDomainHandle
    );
NTSTATUS
NTAPI
LsaQueryInfoTrustedDomain(
    _In_ LSA_HANDLE TrustedDomainHandle,
    _In_ TRUSTED_INFORMATION_CLASS InformationClass,
    _Out_ PVOID *Buffer
    );
NTSTATUS
NTAPI
LsaSetInformationTrustedDomain(
    _In_ LSA_HANDLE TrustedDomainHandle,
    _In_ TRUSTED_INFORMATION_CLASS InformationClass,
    _In_ PVOID Buffer
    );
NTSTATUS
NTAPI
LsaOpenSecret(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PLSA_UNICODE_STRING SecretName,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PLSA_HANDLE SecretHandle
    );
NTSTATUS
NTAPI
LsaSetSecret(
    _In_ LSA_HANDLE SecretHandle,
    _In_opt_ PLSA_UNICODE_STRING CurrentValue,
    _In_opt_ PLSA_UNICODE_STRING OldValue
    );
NTSTATUS
NTAPI
LsaQuerySecret(
    _In_ LSA_HANDLE SecretHandle,
    _Out_opt_ PLSA_UNICODE_STRING *CurrentValue,
    _Out_opt_ PLARGE_INTEGER CurrentValueSetTime,
    _Out_opt_ PLSA_UNICODE_STRING *OldValue,
    _Out_opt_ PLARGE_INTEGER OldValueSetTime
    );
NTSTATUS
NTAPI
LsaLookupPrivilegeValue(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PLSA_UNICODE_STRING Name,
    _Out_ PLUID Value
    );
NTSTATUS
NTAPI
LsaLookupPrivilegeName(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PLUID Value,
    _Out_ PLSA_UNICODE_STRING *Name
    );
NTSTATUS
NTAPI
LsaLookupPrivilegeDisplayName(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PLSA_UNICODE_STRING Name,
    _Out_ PLSA_UNICODE_STRING *DisplayName,
    _Out_ PSHORT LanguageReturned
    );
NTSTATUS
LsaGetUserName(
    _Outptr_ PLSA_UNICODE_STRING * UserName,
    _Outptr_opt_ PLSA_UNICODE_STRING * DomainName
    );
NTSTATUS
LsaGetRemoteUserName(
    _In_opt_ PLSA_UNICODE_STRING SystemName,
    _Outptr_ PLSA_UNICODE_STRING * UserName,
    _Outptr_opt_ PLSA_UNICODE_STRING * DomainName
    );
NTSTATUS
NTAPI
LsaEnumerateAccountsWithUserRight(
    _In_ LSA_HANDLE PolicyHandle,
    _In_opt_ PLSA_UNICODE_STRING UserRight,
    _Out_ PVOID *Buffer,
    _Out_ PULONG CountReturned
    );
NTSTATUS
NTAPI
LsaEnumerateAccountRights(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PSID AccountSid,
    _Outptr_result_buffer_(*CountOfRights) PLSA_UNICODE_STRING *UserRights,
    _Out_ PULONG CountOfRights
    );
NTSTATUS
NTAPI
LsaAddAccountRights(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PSID AccountSid,
    _In_reads_(CountOfRights) PLSA_UNICODE_STRING UserRights,
    _In_ ULONG CountOfRights
    );
NTSTATUS
NTAPI
LsaRemoveAccountRights(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PSID AccountSid,
    _In_ BOOLEAN AllRights,
    _In_reads_opt_(CountOfRights) PLSA_UNICODE_STRING UserRights,
    _In_ ULONG CountOfRights
    );
NTSTATUS
NTAPI
LsaOpenTrustedDomainByName(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PLSA_UNICODE_STRING TrustedDomainName,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PLSA_HANDLE TrustedDomainHandle
    );
NTSTATUS
NTAPI
LsaQueryTrustedDomainInfo(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PSID TrustedDomainSid,
    _In_ TRUSTED_INFORMATION_CLASS InformationClass,
    _Out_ PVOID *Buffer
    );
NTSTATUS
NTAPI
LsaSetTrustedDomainInformation(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PSID TrustedDomainSid,
    _In_ TRUSTED_INFORMATION_CLASS InformationClass,
    _In_ PVOID Buffer
    );
NTSTATUS
NTAPI
LsaDeleteTrustedDomain(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PSID TrustedDomainSid
    );
NTSTATUS
NTAPI
LsaQueryTrustedDomainInfoByName(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PLSA_UNICODE_STRING TrustedDomainName,
    _In_ TRUSTED_INFORMATION_CLASS InformationClass,
    _Out_ PVOID *Buffer
    );
NTSTATUS
NTAPI
LsaSetTrustedDomainInfoByName(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PLSA_UNICODE_STRING TrustedDomainName,
    _In_ TRUSTED_INFORMATION_CLASS InformationClass,
    _In_ PVOID Buffer
    );
NTSTATUS
NTAPI
LsaEnumerateTrustedDomainsEx(
    _In_ LSA_HANDLE PolicyHandle,
    _Inout_ PLSA_ENUMERATION_HANDLE EnumerationContext,
    _Out_ PVOID *Buffer,
    _In_ ULONG PreferedMaximumLength,
    _Out_ PULONG CountReturned
    );
NTSTATUS
NTAPI
LsaCreateTrustedDomainEx(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PTRUSTED_DOMAIN_INFORMATION_EX TrustedDomainInformation,
    _In_ PTRUSTED_DOMAIN_AUTH_INFORMATION AuthenticationInformation,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PLSA_HANDLE TrustedDomainHandle
    );
NTSTATUS
NTAPI
LsaQueryForestTrustInformation(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PLSA_UNICODE_STRING TrustedDomainName,
    _Out_ PLSA_FOREST_TRUST_INFORMATION * ForestTrustInfo
    );
NTSTATUS
NTAPI
LsaSetForestTrustInformation(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PLSA_UNICODE_STRING TrustedDomainName,
    _In_ PLSA_FOREST_TRUST_INFORMATION ForestTrustInfo,
    _In_ BOOLEAN CheckOnly,
    _Out_ PLSA_FOREST_TRUST_COLLISION_INFORMATION * CollisionInfo
    );
NTSTATUS
NTAPI
LsaForestTrustFindMatch(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ ULONG Type,
    _In_ PLSA_UNICODE_STRING Name,
    _Out_ PLSA_UNICODE_STRING * Match
    );
NTSTATUS
NTAPI
LsaStorePrivateData(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PLSA_UNICODE_STRING KeyName,
    _In_opt_ PLSA_UNICODE_STRING PrivateData
    );
NTSTATUS
NTAPI
LsaRetrievePrivateData(
    _In_ LSA_HANDLE PolicyHandle,
    _In_ PLSA_UNICODE_STRING KeyName,
    _Out_ PLSA_UNICODE_STRING * PrivateData
    );
ULONG
NTAPI
LsaNtStatusToWinError(
    _In_ NTSTATUS Status
    );
enum NEGOTIATE_MESSAGES {
    NegEnumPackagePrefixes = 0,
    NegGetCallerName = 1,
    NegTransferCredentials = 2,
    NegEnumPackageNames = 3,
    NegCallPackageMax
};
typedef struct _NEGOTIATE_PACKAGE_PREFIX {
    ULONG_PTR PackageId;
    PVOID PackageDataA;
    PVOID PackageDataW;
    ULONG_PTR PrefixLen;
    UCHAR Prefix[ NEGOTIATE_MAX_PREFIX ];
} NEGOTIATE_PACKAGE_PREFIX, * PNEGOTIATE_PACKAGE_PREFIX;
typedef struct _NEGOTIATE_PACKAGE_PREFIXES {
    ULONG MessageType;
    ULONG PrefixCount;
    ULONG Offset;
    ULONG Pad;
} NEGOTIATE_PACKAGE_PREFIXES, *PNEGOTIATE_PACKAGE_PREFIXES;
typedef struct _NEGOTIATE_CALLER_NAME_REQUEST {
    ULONG MessageType;
    LUID LogonId;
} NEGOTIATE_CALLER_NAME_REQUEST, *PNEGOTIATE_CALLER_NAME_REQUEST;
typedef struct _NEGOTIATE_CALLER_NAME_RESPONSE {
    ULONG MessageType;
    PWSTR CallerName;
} NEGOTIATE_CALLER_NAME_RESPONSE, * PNEGOTIATE_CALLER_NAME_RESPONSE;
typedef struct _NEGOTIATE_PACKAGE_NAMES {
    ULONG NamesCount;
    UNICODE_STRING Names[1];
} NEGOTIATE_PACKAGE_NAMES, *PNEGOTIATE_PACKAGE_NAMES;
typedef struct _NEGOTIATE_PACKAGE_PREFIX_WOW {
    ULONG PackageId;
    ULONG PackageDataA;
    ULONG PackageDataW;
    ULONG PrefixLen;
    UCHAR Prefix[ NEGOTIATE_MAX_PREFIX ];
} NEGOTIATE_PACKAGE_PREFIX_WOW, * PNEGOTIATE_PACKAGE_PREFIX_WOW;
typedef struct _NEGOTIATE_CALLER_NAME_RESPONSE_WOW {
    ULONG MessageType;
    ULONG CallerName;
} NEGOTIATE_CALLER_NAME_RESPONSE_WOW, * PNEGOTIATE_CALLER_NAME_RESPONSE_WOW;
NTSTATUS
NTAPI
LsaSetPolicyReplicationHandle(
    _Inout_ PLSA_HANDLE PolicyHandle
    );
typedef struct _LSA_USER_REGISTRATION_INFO {
        LSA_UNICODE_STRING Sid;
        LSA_UNICODE_STRING DeviceId;
        LSA_UNICODE_STRING Username;
        LSA_UNICODE_STRING Thumbprint;
        LARGE_INTEGER RegistrationTime;
} LSA_USER_REGISTRATION_INFO, *PLSA_USER_REGISTRATION_INFO;
typedef struct _LSA_REGISTRATION_INFO {
    [range(0, MAX_USER_RECORDS)] ULONG RegisteredCount;
    [size_is( RegisteredCount)] PLSA_USER_REGISTRATION_INFO* UserRegistrationInfo;
} LSA_REGISTRATION_INFO, *PLSA_REGISTRATION_INFO;
NTSTATUS
NTAPI
LsaGetDeviceRegistrationInfo(
    _Out_ PLSA_REGISTRATION_INFO* RegistrationInfo
    );
typedef enum _LSA_CREDENTIAL_KEY_SOURCE_TYPE
{
    eFromPrecomputed = 1,
    eFromClearPassword,
    eFromNtOwf,
} LSA_CREDENTIAL_KEY_SOURCE_TYPE, *PLSA_CREDENTIAL_KEY_SOURCE_TYPE;
NTSTATUS
SeciIsProtectedUser(
    __out PBOOLEAN ProtectedUser
    );
}
#endif
#pragma endregion
