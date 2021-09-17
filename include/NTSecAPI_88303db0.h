#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
    DEFINE_GUID(
        Audit_System_SecurityStateChange,
        0x0cce9210,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_System_SecurityStateChange_defined
    DEFINE_GUID(
        Audit_System_SecuritySubsystemExtension,
        0x0cce9211,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_System_SecuritySubsystemExtension_defined
    DEFINE_GUID(
        Audit_System_Integrity,
        0x0cce9212,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_System_Integrity_defined
    DEFINE_GUID(
        Audit_System_IPSecDriverEvents,
        0x0cce9213,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_System_IPSecDriverEvents_defined
    DEFINE_GUID(
        Audit_System_Others,
        0x0cce9214,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_System_Others_defined
    DEFINE_GUID(
        Audit_Logon_Logon,
        0x0cce9215,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_Logon_Logon_defined
    DEFINE_GUID(
        Audit_Logon_Logoff,
        0x0cce9216,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_Logon_Logoff_defined
    DEFINE_GUID(
        Audit_Logon_AccountLockout,
        0x0cce9217,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_Logon_AccountLockout_defined
    DEFINE_GUID(
        Audit_Logon_IPSecMainMode,
        0x0cce9218,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_Logon_IPSecMainMode_defined
    DEFINE_GUID(
        Audit_Logon_IPSecQuickMode,
        0x0cce9219,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_Logon_IPSecQuickMode_defined
    DEFINE_GUID(
        Audit_Logon_IPSecUserMode,
        0x0cce921a,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_Logon_IPSecUserMode_defined
    DEFINE_GUID(
        Audit_Logon_SpecialLogon,
        0x0cce921b,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_Logon_SpecialLogon_defined
    DEFINE_GUID(
        Audit_Logon_Others,
        0x0cce921c,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_Logon_Others_defined
    DEFINE_GUID(
        Audit_ObjectAccess_FileSystem,
        0x0cce921d,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_ObjectAccess_FileSystem_defined
    DEFINE_GUID(
        Audit_ObjectAccess_Registry,
        0x0cce921e,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_ObjectAccess_Registry_defined
    DEFINE_GUID(
        Audit_ObjectAccess_Kernel,
        0x0cce921f,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_ObjectAccess_Kernel_defined
    DEFINE_GUID(
        Audit_ObjectAccess_Sam,
        0x0cce9220,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_ObjectAccess_Sam_defined
    DEFINE_GUID(
        Audit_ObjectAccess_CertificationServices,
        0x0cce9221,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_ObjectAccess_CertificationServices_defined
    DEFINE_GUID(
        Audit_ObjectAccess_ApplicationGenerated,
        0x0cce9222,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_ObjectAccess_ApplicationGenerated_defined
    DEFINE_GUID(
        Audit_ObjectAccess_Handle,
        0x0cce9223,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_ObjectAccess_Handle_defined
    DEFINE_GUID(
        Audit_ObjectAccess_Share,
        0x0cce9224,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_ObjectAccess_Share_defined
    DEFINE_GUID(
        Audit_ObjectAccess_FirewallPacketDrops,
        0x0cce9225,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_ObjectAccess_FirewallPacketDrops_defined
    DEFINE_GUID(
        Audit_ObjectAccess_FirewallConnection,
        0x0cce9226,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_ObjectAccess_FirewallConnection_defined
    DEFINE_GUID(
        Audit_ObjectAccess_Other,
        0x0cce9227,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_ObjectAccess_Other_defined
    DEFINE_GUID(
        Audit_PrivilegeUse_Sensitive,
        0x0cce9228,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_PrivilegeUse_Sensitive_defined
    DEFINE_GUID(
        Audit_PrivilegeUse_NonSensitive,
        0x0cce9229,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_PrivilegeUse_NonSensitive_defined
    DEFINE_GUID(
        Audit_PrivilegeUse_Others,
        0x0cce922a,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_PrivilegeUse_Others_defined
    DEFINE_GUID(
        Audit_DetailedTracking_ProcessCreation,
        0x0cce922b,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_DetailedTracking_ProcessCreation_defined
    DEFINE_GUID(
        Audit_DetailedTracking_ProcessTermination,
        0x0cce922c,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_DetailedTracking_ProcessTermination_defined
    DEFINE_GUID(
        Audit_DetailedTracking_DpapiActivity,
        0x0cce922d,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_DetailedTracking_DpapiActivity_defined
    DEFINE_GUID(
        Audit_DetailedTracking_RpcCall,
        0x0cce922e,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_DetailedTracking_RpcCall_defined
    DEFINE_GUID(
        Audit_PolicyChange_AuditPolicy,
        0x0cce922f,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_PolicyChange_AuditPolicy_defined
    DEFINE_GUID(
        Audit_PolicyChange_AuthenticationPolicy,
        0x0cce9230,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_PolicyChange_AuthenticationPolicy_defined
    DEFINE_GUID(
        Audit_PolicyChange_AuthorizationPolicy,
        0x0cce9231,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_PolicyChange_AuthorizationPolicy_defined
    DEFINE_GUID(
        Audit_PolicyChange_MpsscvRulePolicy,
        0x0cce9232,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_PolicyChange_MpsscvRulePolicy_defined
    DEFINE_GUID(
        Audit_PolicyChange_WfpIPSecPolicy,
        0x0cce9233,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_PolicyChange_WfpIPSecPolicy_defined
    DEFINE_GUID(
        Audit_PolicyChange_Others,
        0x0cce9234,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_PolicyChange_Others_defined
    DEFINE_GUID(
        Audit_AccountManagement_UserAccount,
        0x0cce9235,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_AccountManagement_UserAccount_defined
    DEFINE_GUID(
        Audit_AccountManagement_ComputerAccount,
        0x0cce9236,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_AccountManagement_ComputerAccount_defined
    DEFINE_GUID(
        Audit_AccountManagement_SecurityGroup,
        0x0cce9237,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_AccountManagement_SecurityGroup_defined
    DEFINE_GUID(
        Audit_AccountManagement_DistributionGroup,
        0x0cce9238,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_AccountManagement_DistributionGroup_defined
    DEFINE_GUID(
        Audit_AccountManagement_ApplicationGroup,
        0x0cce9239,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_AccountManagement_ApplicationGroup_defined
    DEFINE_GUID(
        Audit_AccountManagement_Others,
        0x0cce923a,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_AccountManagement_Others_defined
    DEFINE_GUID(
        Audit_DSAccess_DSAccess,
        0x0cce923b,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_DSAccess_DSAccess_defined
    DEFINE_GUID(
        Audit_DsAccess_AdAuditChanges,
        0x0cce923c,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_DsAccess_AdAuditChanges_defined
    DEFINE_GUID(
        Audit_Ds_Replication,
        0x0cce923d,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_Ds_Replication_defined
    DEFINE_GUID(
        Audit_Ds_DetailedReplication,
        0x0cce923e,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_Ds_DetailedReplication_defined
    DEFINE_GUID(
        Audit_AccountLogon_CredentialValidation,
        0x0cce923f,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_AccountLogon_CredentialValidation_defined
    DEFINE_GUID(
        Audit_AccountLogon_Kerberos,
        0x0cce9240,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_AccountLogon_Kerberos_defined
    DEFINE_GUID(
        Audit_AccountLogon_Others,
        0x0cce9241,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_AccountLogon_Others_defined
    DEFINE_GUID(
        Audit_AccountLogon_KerbCredentialValidation,
        0x0cce9242,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_AccountLogon_KerbCredentialValidation_defined
    DEFINE_GUID(
        Audit_Logon_NPS,
        0x0cce9243,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_Logon_NPS_defined
    DEFINE_GUID(
        Audit_ObjectAccess_DetailedFileShare,
        0x0cce9244,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_ObjectAccess_DetailedFileShare_defined
    DEFINE_GUID(
        Audit_ObjectAccess_RemovableStorage,
        0x0cce9245,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_ObjectAccess_RemovableStorage_defined
    DEFINE_GUID(
        Audit_ObjectAccess_CbacStaging,
        0x0cce9246,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_ObjectAccess_CbacStaging_defined
    DEFINE_GUID(
        Audit_Logon_Claims,
        0x0cce9247,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_Logon_Claims_defined
    DEFINE_GUID(
        Audit_DetailedTracking_PnpActivity,
        0x0cce9248,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_DetailedTracking_PnpActivity_defined
    DEFINE_GUID(
        Audit_Logon_Groups,
        0x0cce9249,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_Logon_Groups_defined
    DEFINE_GUID(
        Audit_DetailedTracking_TokenRightAdjusted,
        0x0cce924a,
        0x69ae, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_DetailedTracking_TokenRightAdjusted_defined
    DEFINE_GUID(
        Audit_System,
        0x69979848,
        0x797a, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_System_defined
    DEFINE_GUID(
        Audit_Logon,
        0x69979849,
        0x797a, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_Logon_defined
    DEFINE_GUID(
        Audit_ObjectAccess,
        0x6997984a,
        0x797a, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_ObjectAccess_defined
    DEFINE_GUID(
        Audit_PrivilegeUse,
        0x6997984b,
        0x797a, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_PrivilegeUse_defined
    DEFINE_GUID(
        Audit_DetailedTracking,
        0x6997984c,
        0x797a, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_DetailedTracking_defined
    DEFINE_GUID(
        Audit_PolicyChange,
        0x6997984d,
        0x797a, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_PolicyChange_defined
    DEFINE_GUID(
        Audit_AccountManagement,
        0x6997984e,
        0x797a, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_AccountManagement_defined
    DEFINE_GUID(
        Audit_DirectoryServiceAccess,
        0x6997984f,
        0x797a, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_DirectoryServiceAccess_defined
    DEFINE_GUID(
        Audit_AccountLogon,
        0x69979850,
        0x797a, 0x11d9, 0xbe, 0xd3, 0x50, 0x50, 0x54, 0x50, 0x30, 0x30
        );
    #define Audit_AccountLogon_defined
extern "C" {
typedef _Return_type_success_(return >= 0) LONG NTSTATUS, *PNTSTATUS;
#include <lsalookup.h>
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
typedef enum _POLICY_LSA_SERVER_ROLE {
    PolicyServerRoleBackup = 2,
    PolicyServerRolePrimary
} POLICY_LSA_SERVER_ROLE, *PPOLICY_LSA_SERVER_ROLE;
typedef ULONG POLICY_AUDIT_EVENT_OPTIONS, *PPOLICY_AUDIT_EVENT_OPTIONS;
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
typedef PVOID LSA_HANDLE, *PLSA_HANDLE;
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
LsaEnumerateTrustedDomains(
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
    NegMsgReserved1 = 3,
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
typedef LSA_UNICODE_STRING UNICODE_STRING, *PUNICODE_STRING;
typedef LSA_STRING STRING, *PSTRING ;
typedef struct _DOMAIN_PASSWORD_INFORMATION {
    USHORT MinPasswordLength;
    USHORT PasswordHistoryLength;
    ULONG PasswordProperties;
    LARGE_INTEGER MaxPasswordAge;
    LARGE_INTEGER MinPasswordAge;
} DOMAIN_PASSWORD_INFORMATION, *PDOMAIN_PASSWORD_INFORMATION;
typedef NTSTATUS (*PSAM_PASSWORD_NOTIFICATION_ROUTINE) (
    PUNICODE_STRING UserName,
    ULONG RelativeId,
    PUNICODE_STRING NewPassword
);
typedef BOOLEAN (*PSAM_INIT_NOTIFICATION_ROUTINE) (
    VOID
    );
typedef BOOLEAN (*PSAM_PASSWORD_FILTER_ROUTINE) (
    _In_ PUNICODE_STRING AccountName,
    _In_ PUNICODE_STRING FullName,
    _In_ PUNICODE_STRING Password,
    _In_ BOOLEAN SetOperation
    );
typedef enum _MSV1_0_LOGON_SUBMIT_TYPE {
    MsV1_0InteractiveLogon = 2,
    MsV1_0Lm20Logon,
    MsV1_0NetworkLogon,
    MsV1_0SubAuthLogon,
    MsV1_0WorkstationUnlockLogon = 7,
    MsV1_0S4ULogon = 12,
    MsV1_0VirtualLogon = 82,
    MsV1_0NoElevationLogon = 83,
    MsV1_0LuidLogon = 84,
} MSV1_0_LOGON_SUBMIT_TYPE, *PMSV1_0_LOGON_SUBMIT_TYPE;
typedef enum _MSV1_0_PROFILE_BUFFER_TYPE {
    MsV1_0InteractiveProfile = 2,
    MsV1_0Lm20LogonProfile,
    MsV1_0SmartCardProfile
} MSV1_0_PROFILE_BUFFER_TYPE, *PMSV1_0_PROFILE_BUFFER_TYPE;
typedef struct _MSV1_0_INTERACTIVE_LOGON {
    MSV1_0_LOGON_SUBMIT_TYPE MessageType;
    UNICODE_STRING LogonDomainName;
    UNICODE_STRING UserName;
    UNICODE_STRING Password;
} MSV1_0_INTERACTIVE_LOGON, *PMSV1_0_INTERACTIVE_LOGON;
typedef struct _MSV1_0_INTERACTIVE_PROFILE {
    MSV1_0_PROFILE_BUFFER_TYPE MessageType;
    USHORT LogonCount;
    USHORT BadPasswordCount;
    LARGE_INTEGER LogonTime;
    LARGE_INTEGER LogoffTime;
    LARGE_INTEGER KickOffTime;
    LARGE_INTEGER PasswordLastSet;
    LARGE_INTEGER PasswordCanChange;
    LARGE_INTEGER PasswordMustChange;
    UNICODE_STRING LogonScript;
    UNICODE_STRING HomeDirectory;
    UNICODE_STRING FullName;
    UNICODE_STRING ProfilePath;
    UNICODE_STRING HomeDirectoryDrive;
    UNICODE_STRING LogonServer;
    ULONG UserFlags;
} MSV1_0_INTERACTIVE_PROFILE, *PMSV1_0_INTERACTIVE_PROFILE;
typedef struct _MSV1_0_LM20_LOGON {
    MSV1_0_LOGON_SUBMIT_TYPE MessageType;
    UNICODE_STRING LogonDomainName;
    UNICODE_STRING UserName;
    UNICODE_STRING Workstation;
    UCHAR ChallengeToClient[MSV1_0_CHALLENGE_LENGTH];
    STRING CaseSensitiveChallengeResponse;
    STRING CaseInsensitiveChallengeResponse;
    ULONG ParameterControl;
} MSV1_0_LM20_LOGON, * PMSV1_0_LM20_LOGON;
typedef struct _MSV1_0_SUBAUTH_LOGON{
    MSV1_0_LOGON_SUBMIT_TYPE MessageType;
    UNICODE_STRING LogonDomainName;
    UNICODE_STRING UserName;
    UNICODE_STRING Workstation;
    UCHAR ChallengeToClient[MSV1_0_CHALLENGE_LENGTH];
    STRING AuthenticationInfo1;
    STRING AuthenticationInfo2;
    ULONG ParameterControl;
    ULONG SubAuthPackageId;
} MSV1_0_SUBAUTH_LOGON, * PMSV1_0_SUBAUTH_LOGON;
typedef struct _MSV1_0_S4U_LOGON {
    MSV1_0_LOGON_SUBMIT_TYPE MessageType;
    ULONG Flags;
    UNICODE_STRING UserPrincipalName;
    UNICODE_STRING DomainName;
} MSV1_0_S4U_LOGON, *PMSV1_0_S4U_LOGON;
typedef struct _MSV1_0_LM20_LOGON_PROFILE {
    MSV1_0_PROFILE_BUFFER_TYPE MessageType;
    LARGE_INTEGER KickOffTime;
    LARGE_INTEGER LogoffTime;
    ULONG UserFlags;
    UCHAR UserSessionKey[MSV1_0_USER_SESSION_KEY_LENGTH];
    UNICODE_STRING LogonDomainName;
    UCHAR LanmanSessionKey[MSV1_0_LANMAN_SESSION_KEY_LENGTH];
    UNICODE_STRING LogonServer;
    UNICODE_STRING UserParameters;
} MSV1_0_LM20_LOGON_PROFILE, * PMSV1_0_LM20_LOGON_PROFILE;
typedef enum _MSV1_0_CREDENTIAL_KEY_TYPE
{
    InvalidCredKey,
    DeprecatedIUMCredKey,
    DomainUserCredKey,
    LocalUserCredKey,
    ExternallySuppliedCredKey
} MSV1_0_CREDENTIAL_KEY_TYPE;
typedef struct _MSV1_0_CREDENTIAL_KEY {
    UCHAR Data[MSV1_0_CREDENTIAL_KEY_LENGTH];
} MSV1_0_CREDENTIAL_KEY, *PMSV1_0_CREDENTIAL_KEY;
typedef struct _MSV1_0_SUPPLEMENTAL_CREDENTIAL {
    ULONG Version;
    ULONG Flags;
    UCHAR LmPassword[MSV1_0_OWF_PASSWORD_LENGTH];
    UCHAR NtPassword[MSV1_0_OWF_PASSWORD_LENGTH];
} MSV1_0_SUPPLEMENTAL_CREDENTIAL, *PMSV1_0_SUPPLEMENTAL_CREDENTIAL;
typedef struct _MSV1_0_SUPPLEMENTAL_CREDENTIAL_V2 {
    ULONG Version;
    ULONG Flags;
    UCHAR NtPassword[MSV1_0_OWF_PASSWORD_LENGTH];
    MSV1_0_CREDENTIAL_KEY CredentialKey;
} MSV1_0_SUPPLEMENTAL_CREDENTIAL_V2, *PMSV1_0_SUPPLEMENTAL_CREDENTIAL_V2;
typedef struct _MSV1_0_SUPPLEMENTAL_CREDENTIAL_V3 {
    ULONG Version;
    ULONG Flags;
    MSV1_0_CREDENTIAL_KEY_TYPE CredentialKeyType;
    UCHAR NtPassword[MSV1_0_OWF_PASSWORD_LENGTH];
    MSV1_0_CREDENTIAL_KEY CredentialKey;
    UCHAR ShaPassword[MSV1_0_SHA_PASSWORD_LENGTH];
} MSV1_0_SUPPLEMENTAL_CREDENTIAL_V3, *PMSV1_0_SUPPLEMENTAL_CREDENTIAL_V3;
typedef struct _MSV1_0_IUM_SUPPLEMENTAL_CREDENTIAL {
    ULONG Version;
    ULONG EncryptedCredsSize;
    [size_is(EncryptedCredsSize)]
    UCHAR EncryptedCreds[*];
} MSV1_0_IUM_SUPPLEMENTAL_CREDENTIAL, *PMSV1_0_IUM_SUPPLEMENTAL_CREDENTIAL;
    (FIELD_OFFSET(MSV1_0_IUM_SUPPLEMENTAL_CREDENTIAL, EncryptedCreds) + (Creds)->EncryptedCredsSize)
#pragma pack(push,1)
typedef struct _MSV1_0_REMOTE_SUPPLEMENTAL_CREDENTIAL {
    ULONG Version;
    ULONG Flags;
    MSV1_0_CREDENTIAL_KEY CredentialKey;
    MSV1_0_CREDENTIAL_KEY_TYPE CredentialKeyType;
    ULONG EncryptedCredsSize;
    UCHAR EncryptedCreds[ANYSIZE_ARRAY];
} MSV1_0_REMOTE_SUPPLEMENTAL_CREDENTIAL, *PMSV1_0_REMOTE_SUPPLEMENTAL_CREDENTIAL;
#pragma pack(pop)
typedef struct _MSV1_0_NTLM3_RESPONSE {
    UCHAR Response[MSV1_0_NTLM3_RESPONSE_LENGTH];
    UCHAR RespType;
    UCHAR HiRespType;
    USHORT Flags;
    ULONG MsgWord;
    ULONGLONG TimeStamp;
    UCHAR ChallengeFromClient[MSV1_0_CHALLENGE_LENGTH];
    ULONG AvPairsOff;
    UCHAR Buffer[1];
} MSV1_0_NTLM3_RESPONSE, *PMSV1_0_NTLM3_RESPONSE;
typedef enum {
    MsvAvEOL,
    MsvAvNbComputerName,
    MsvAvNbDomainName,
    MsvAvDnsComputerName,
    MsvAvDnsDomainName,
    MsvAvDnsTreeName,
    MsvAvFlags,
    MsvAvTimestamp,
    MsvAvRestrictions,
    MsvAvTargetName,
    MsvAvChannelBindings,
} MSV1_0_AVID;
typedef struct _MSV1_0_AV_PAIR {
    USHORT AvId;
    USHORT AvLen;
} MSV1_0_AV_PAIR, *PMSV1_0_AV_PAIR;
typedef enum _MSV1_0_PROTOCOL_MESSAGE_TYPE {
    MsV1_0Lm20ChallengeRequest = 0,
    MsV1_0Lm20GetChallengeResponse,
    MsV1_0EnumerateUsers,
    MsV1_0GetUserInfo,
    MsV1_0ReLogonUsers,
    MsV1_0ChangePassword,
    MsV1_0ChangeCachedPassword,
    MsV1_0GenericPassthrough,
    MsV1_0CacheLogon,
    MsV1_0SubAuth,
    MsV1_0DeriveCredential,
    MsV1_0CacheLookup,
    MsV1_0SetProcessOption,
    MsV1_0ConfigLocalAliases,
    MsV1_0ClearCachedCredentials,
    MsV1_0LookupToken,
    MsV1_0ValidateAuth,
    MsV1_0CacheLookupEx,
    MsV1_0GetCredentialKey,
    MsV1_0SetThreadOption,
    MsV1_0DecryptDpapiMasterKey,
    MsV1_0GetStrongCredentialKey,
    MsV1_0TransferCred,
    MsV1_0ProvisionTbal,
    MsV1_0DeleteTbalSecrets,
} MSV1_0_PROTOCOL_MESSAGE_TYPE, *PMSV1_0_PROTOCOL_MESSAGE_TYPE;
typedef struct _MSV1_0_CHANGEPASSWORD_REQUEST {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    UNICODE_STRING DomainName;
    UNICODE_STRING AccountName;
    UNICODE_STRING OldPassword;
    UNICODE_STRING NewPassword;
    BOOLEAN Impersonating;
} MSV1_0_CHANGEPASSWORD_REQUEST, *PMSV1_0_CHANGEPASSWORD_REQUEST;
typedef struct _MSV1_0_CHANGEPASSWORD_RESPONSE {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    BOOLEAN PasswordInfoValid;
    DOMAIN_PASSWORD_INFORMATION DomainPasswordInfo;
} MSV1_0_CHANGEPASSWORD_RESPONSE, *PMSV1_0_CHANGEPASSWORD_RESPONSE;
typedef struct _MSV1_0_PASSTHROUGH_REQUEST {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    UNICODE_STRING DomainName;
    UNICODE_STRING PackageName;
    ULONG DataLength;
    PUCHAR LogonData;
    ULONG Pad ;
} MSV1_0_PASSTHROUGH_REQUEST, *PMSV1_0_PASSTHROUGH_REQUEST;
typedef struct _MSV1_0_PASSTHROUGH_RESPONSE {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG Pad;
    ULONG DataLength;
    PUCHAR ValidationData;
} MSV1_0_PASSTHROUGH_RESPONSE, *PMSV1_0_PASSTHROUGH_RESPONSE;
typedef struct _MSV1_0_SUBAUTH_REQUEST{
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG SubAuthPackageId;
    ULONG SubAuthInfoLength;
    PUCHAR SubAuthSubmitBuffer;
} MSV1_0_SUBAUTH_REQUEST, *PMSV1_0_SUBAUTH_REQUEST;
typedef struct _MSV1_0_SUBAUTH_RESPONSE{
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG SubAuthInfoLength;
    PUCHAR SubAuthReturnBuffer;
} MSV1_0_SUBAUTH_RESPONSE, *PMSV1_0_SUBAUTH_RESPONSE;
BOOLEAN
__stdcall
RtlGenRandom(
    _Out_writes_bytes_(RandomBufferLength) PVOID RandomBuffer,
    _In_ ULONG RandomBufferLength
    );
NTSTATUS
__stdcall
RtlEncryptMemory(
    _Inout_updates_bytes_(MemorySize) PVOID Memory,
    _In_ ULONG MemorySize,
    _In_ ULONG OptionFlags
    );
NTSTATUS
__stdcall
RtlDecryptMemory(
    _Inout_updates_bytes_(MemorySize) PVOID Memory,
    _In_ ULONG MemorySize,
    _In_ ULONG OptionFlags
    );
                                         AUTH_REQ_ALLOW_PROXIABLE | \
                                         AUTH_REQ_ALLOW_POSTDATE | \
                                         AUTH_REQ_ALLOW_RENEWABLE | \
                                         AUTH_REQ_ALLOW_VALIDATE )
typedef enum _KERB_LOGON_SUBMIT_TYPE {
    KerbInteractiveLogon = 2,
    KerbSmartCardLogon = 6,
    KerbWorkstationUnlockLogon = 7,
    KerbSmartCardUnlockLogon = 8,
    KerbProxyLogon = 9,
    KerbTicketLogon = 10,
    KerbTicketUnlockLogon = 11,
    KerbS4ULogon = 12,
    KerbCertificateLogon = 13,
    KerbCertificateS4ULogon = 14,
    KerbCertificateUnlockLogon = 15,
    KerbNoElevationLogon = 83,
    KerbLuidLogon = 84,
} KERB_LOGON_SUBMIT_TYPE, *PKERB_LOGON_SUBMIT_TYPE;
typedef struct _KERB_INTERACTIVE_LOGON {
    KERB_LOGON_SUBMIT_TYPE MessageType;
    UNICODE_STRING LogonDomainName;
    UNICODE_STRING UserName;
    UNICODE_STRING Password;
} KERB_INTERACTIVE_LOGON, *PKERB_INTERACTIVE_LOGON;
typedef struct _KERB_INTERACTIVE_UNLOCK_LOGON {
    KERB_INTERACTIVE_LOGON Logon;
    LUID LogonId;
} KERB_INTERACTIVE_UNLOCK_LOGON, *PKERB_INTERACTIVE_UNLOCK_LOGON;
typedef struct _KERB_SMART_CARD_LOGON {
    KERB_LOGON_SUBMIT_TYPE MessageType;
    UNICODE_STRING Pin;
    ULONG CspDataLength;
    PUCHAR CspData;
} KERB_SMART_CARD_LOGON, *PKERB_SMART_CARD_LOGON;
typedef struct _KERB_SMART_CARD_UNLOCK_LOGON {
    KERB_SMART_CARD_LOGON Logon;
    LUID LogonId;
} KERB_SMART_CARD_UNLOCK_LOGON, *PKERB_SMART_CARD_UNLOCK_LOGON;
typedef struct _KERB_CERTIFICATE_LOGON {
    KERB_LOGON_SUBMIT_TYPE MessageType;
    UNICODE_STRING DomainName;
    UNICODE_STRING UserName;
    UNICODE_STRING Pin;
    ULONG Flags;
    ULONG CspDataLength;
    PUCHAR CspData;
} KERB_CERTIFICATE_LOGON, *PKERB_CERTIFICATE_LOGON;
typedef struct _KERB_CERTIFICATE_UNLOCK_LOGON {
    KERB_CERTIFICATE_LOGON Logon;
    LUID LogonId;
} KERB_CERTIFICATE_UNLOCK_LOGON, *PKERB_CERTIFICATE_UNLOCK_LOGON;
typedef struct _KERB_CERTIFICATE_S4U_LOGON {
    KERB_LOGON_SUBMIT_TYPE MessageType;
    ULONG Flags;
    UNICODE_STRING UserPrincipalName;
    UNICODE_STRING DomainName;
    ULONG CertificateLength;
    PUCHAR Certificate;
} KERB_CERTIFICATE_S4U_LOGON, *PKERB_CERTIFICATE_S4U_LOGON;
typedef struct _KERB_TICKET_LOGON {
    KERB_LOGON_SUBMIT_TYPE MessageType;
    ULONG Flags;
    ULONG ServiceTicketLength;
    ULONG TicketGrantingTicketLength;
    PUCHAR ServiceTicket;
    PUCHAR TicketGrantingTicket;
} KERB_TICKET_LOGON, *PKERB_TICKET_LOGON;
typedef struct _KERB_TICKET_UNLOCK_LOGON {
    KERB_TICKET_LOGON Logon;
    LUID LogonId;
} KERB_TICKET_UNLOCK_LOGON, *PKERB_TICKET_UNLOCK_LOGON;
typedef struct _KERB_S4U_LOGON {
    KERB_LOGON_SUBMIT_TYPE MessageType;
    ULONG Flags;
    UNICODE_STRING ClientUpn;
    UNICODE_STRING ClientRealm;
} KERB_S4U_LOGON, *PKERB_S4U_LOGON;
typedef enum _KERB_PROFILE_BUFFER_TYPE {
    KerbInteractiveProfile = 2,
    KerbSmartCardProfile = 4,
    KerbTicketProfile = 6
} KERB_PROFILE_BUFFER_TYPE, *PKERB_PROFILE_BUFFER_TYPE;
typedef struct _KERB_INTERACTIVE_PROFILE {
    KERB_PROFILE_BUFFER_TYPE MessageType;
    USHORT LogonCount;
    USHORT BadPasswordCount;
    LARGE_INTEGER LogonTime;
    LARGE_INTEGER LogoffTime;
    LARGE_INTEGER KickOffTime;
    LARGE_INTEGER PasswordLastSet;
    LARGE_INTEGER PasswordCanChange;
    LARGE_INTEGER PasswordMustChange;
    UNICODE_STRING LogonScript;
    UNICODE_STRING HomeDirectory;
    UNICODE_STRING FullName;
    UNICODE_STRING ProfilePath;
    UNICODE_STRING HomeDirectoryDrive;
    UNICODE_STRING LogonServer;
    ULONG UserFlags;
} KERB_INTERACTIVE_PROFILE, *PKERB_INTERACTIVE_PROFILE;
typedef struct _KERB_SMART_CARD_PROFILE {
    KERB_INTERACTIVE_PROFILE Profile;
    ULONG CertificateSize;
    PUCHAR CertificateData;
} KERB_SMART_CARD_PROFILE, *PKERB_SMART_CARD_PROFILE;
typedef struct KERB_CRYPTO_KEY {
    LONG KeyType;
    ULONG Length;
    PUCHAR Value;
} KERB_CRYPTO_KEY, *PKERB_CRYPTO_KEY;
typedef struct KERB_CRYPTO_KEY32 {
    LONG KeyType;
    ULONG Length;
    ULONG Offset;
} KERB_CRYPTO_KEY32, *PKERB_CRYPTO_KEY32;
typedef struct _KERB_TICKET_PROFILE {
    KERB_INTERACTIVE_PROFILE Profile;
    KERB_CRYPTO_KEY SessionKey;
} KERB_TICKET_PROFILE, *PKERB_TICKET_PROFILE;
typedef enum _KERB_PROTOCOL_MESSAGE_TYPE {
    KerbDebugRequestMessage = 0,
    KerbQueryTicketCacheMessage,
    KerbChangeMachinePasswordMessage,
    KerbVerifyPacMessage,
    KerbRetrieveTicketMessage,
    KerbUpdateAddressesMessage,
    KerbPurgeTicketCacheMessage,
    KerbChangePasswordMessage,
    KerbRetrieveEncodedTicketMessage,
    KerbDecryptDataMessage,
    KerbAddBindingCacheEntryMessage,
    KerbSetPasswordMessage,
    KerbSetPasswordExMessage,
    KerbVerifyCredentialsMessage,
    KerbQueryTicketCacheExMessage,
    KerbPurgeTicketCacheExMessage,
    KerbRefreshSmartcardCredentialsMessage,
    KerbAddExtraCredentialsMessage,
    KerbQuerySupplementalCredentialsMessage,
    KerbTransferCredentialsMessage,
    KerbQueryTicketCacheEx2Message,
    KerbSubmitTicketMessage,
    KerbAddExtraCredentialsExMessage,
    KerbQueryKdcProxyCacheMessage,
    KerbPurgeKdcProxyCacheMessage,
    KerbQueryTicketCacheEx3Message,
    KerbCleanupMachinePkinitCredsMessage,
    KerbAddBindingCacheEntryExMessage,
    KerbQueryBindingCacheMessage,
    KerbPurgeBindingCacheMessage,
    KerbPinKdcMessage,
    KerbUnpinAllKdcsMessage,
    KerbQueryDomainExtendedPoliciesMessage,
    KerbQueryS4U2ProxyCacheMessage,
    KerbRetrieveKeyTabMessage,
} KERB_PROTOCOL_MESSAGE_TYPE, *PKERB_PROTOCOL_MESSAGE_TYPE;
typedef struct _KERB_QUERY_TKT_CACHE_REQUEST {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    LUID LogonId;
} KERB_QUERY_TKT_CACHE_REQUEST, *PKERB_QUERY_TKT_CACHE_REQUEST;
typedef struct _KERB_TICKET_CACHE_INFO {
    UNICODE_STRING ServerName;
    UNICODE_STRING RealmName;
    LARGE_INTEGER StartTime;
    LARGE_INTEGER EndTime;
    LARGE_INTEGER RenewTime;
    LONG EncryptionType;
    ULONG TicketFlags;
} KERB_TICKET_CACHE_INFO, *PKERB_TICKET_CACHE_INFO;
typedef struct _KERB_TICKET_CACHE_INFO_EX {
    UNICODE_STRING ClientName;
    UNICODE_STRING ClientRealm;
    UNICODE_STRING ServerName;
    UNICODE_STRING ServerRealm;
    LARGE_INTEGER StartTime;
    LARGE_INTEGER EndTime;
    LARGE_INTEGER RenewTime;
    LONG EncryptionType;
    ULONG TicketFlags;
} KERB_TICKET_CACHE_INFO_EX, *PKERB_TICKET_CACHE_INFO_EX;
typedef struct _KERB_TICKET_CACHE_INFO_EX2 {
    UNICODE_STRING ClientName;
    UNICODE_STRING ClientRealm;
    UNICODE_STRING ServerName;
    UNICODE_STRING ServerRealm;
    LARGE_INTEGER StartTime;
    LARGE_INTEGER EndTime;
    LARGE_INTEGER RenewTime;
    LONG EncryptionType;
    ULONG TicketFlags;
    ULONG SessionKeyType;
    ULONG BranchId;
} KERB_TICKET_CACHE_INFO_EX2, *PKERB_TICKET_CACHE_INFO_EX2;
typedef struct _KERB_TICKET_CACHE_INFO_EX3 {
    UNICODE_STRING ClientName;
    UNICODE_STRING ClientRealm;
    UNICODE_STRING ServerName;
    UNICODE_STRING ServerRealm;
    LARGE_INTEGER StartTime;
    LARGE_INTEGER EndTime;
    LARGE_INTEGER RenewTime;
    LONG EncryptionType;
    ULONG TicketFlags;
    ULONG SessionKeyType;
    ULONG BranchId;
    ULONG CacheFlags;
    UNICODE_STRING KdcCalled;
} KERB_TICKET_CACHE_INFO_EX3, *PKERB_TICKET_CACHE_INFO_EX3;
typedef struct _KERB_QUERY_TKT_CACHE_RESPONSE {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG CountOfTickets;
    KERB_TICKET_CACHE_INFO Tickets[ANYSIZE_ARRAY];
} KERB_QUERY_TKT_CACHE_RESPONSE, *PKERB_QUERY_TKT_CACHE_RESPONSE;
typedef struct _KERB_QUERY_TKT_CACHE_EX_RESPONSE {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG CountOfTickets;
    KERB_TICKET_CACHE_INFO_EX Tickets[ANYSIZE_ARRAY];
} KERB_QUERY_TKT_CACHE_EX_RESPONSE, *PKERB_QUERY_TKT_CACHE_EX_RESPONSE;
typedef struct _KERB_QUERY_TKT_CACHE_EX2_RESPONSE {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG CountOfTickets;
    KERB_TICKET_CACHE_INFO_EX2 Tickets[ANYSIZE_ARRAY];
} KERB_QUERY_TKT_CACHE_EX2_RESPONSE, *PKERB_QUERY_TKT_CACHE_EX2_RESPONSE;
typedef struct _KERB_QUERY_TKT_CACHE_EX3_RESPONSE {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG CountOfTickets;
    KERB_TICKET_CACHE_INFO_EX3 Tickets[ANYSIZE_ARRAY];
} KERB_QUERY_TKT_CACHE_EX3_RESPONSE, *PKERB_QUERY_TKT_CACHE_EX3_RESPONSE;
typedef struct _SecHandle
{
    ULONG_PTR dwLower ;
    ULONG_PTR dwUpper ;
} SecHandle, * PSecHandle ;
typedef struct _KERB_AUTH_DATA {
    ULONG Type;
    ULONG Length;
    PUCHAR Data;
} KERB_AUTH_DATA, *PKERB_AUTH_DATA;
typedef struct _KERB_NET_ADDRESS {
    ULONG Family;
    ULONG Length;
    PCHAR Address;
} KERB_NET_ADDRESS, *PKERB_NET_ADDRESS;
typedef struct _KERB_NET_ADDRESSES {
    ULONG Number;
    KERB_NET_ADDRESS Addresses[ANYSIZE_ARRAY];
} KERB_NET_ADDRESSES, *PKERB_NET_ADDRESSES;
typedef struct _KERB_EXTERNAL_NAME {
    SHORT NameType;
    USHORT NameCount;
    UNICODE_STRING Names[ANYSIZE_ARRAY];
} KERB_EXTERNAL_NAME, *PKERB_EXTERNAL_NAME;
typedef struct _KERB_EXTERNAL_TICKET {
    PKERB_EXTERNAL_NAME ServiceName;
    PKERB_EXTERNAL_NAME TargetName;
    PKERB_EXTERNAL_NAME ClientName;
    UNICODE_STRING DomainName;
    UNICODE_STRING TargetDomainName;
    UNICODE_STRING AltTargetDomainName;
    KERB_CRYPTO_KEY SessionKey;
    ULONG TicketFlags;
    ULONG Flags;
    LARGE_INTEGER KeyExpirationTime;
    LARGE_INTEGER StartTime;
    LARGE_INTEGER EndTime;
    LARGE_INTEGER RenewUntil;
    LARGE_INTEGER TimeSkew;
    ULONG EncodedTicketSize;
    PUCHAR EncodedTicket;
} KERB_EXTERNAL_TICKET, *PKERB_EXTERNAL_TICKET;
typedef struct _KERB_RETRIEVE_TKT_REQUEST {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    LUID LogonId;
    UNICODE_STRING TargetName;
    ULONG TicketFlags;
    ULONG CacheOptions;
    LONG EncryptionType;
    SecHandle CredentialsHandle;
} KERB_RETRIEVE_TKT_REQUEST, *PKERB_RETRIEVE_TKT_REQUEST;
typedef struct _KERB_RETRIEVE_TKT_RESPONSE {
    KERB_EXTERNAL_TICKET Ticket;
} KERB_RETRIEVE_TKT_RESPONSE, *PKERB_RETRIEVE_TKT_RESPONSE;
typedef struct _KERB_PURGE_TKT_CACHE_REQUEST {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    LUID LogonId;
    UNICODE_STRING ServerName;
    UNICODE_STRING RealmName;
} KERB_PURGE_TKT_CACHE_REQUEST, *PKERB_PURGE_TKT_CACHE_REQUEST;
typedef struct _KERB_PURGE_TKT_CACHE_EX_REQUEST {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    LUID LogonId;
    ULONG Flags;
    KERB_TICKET_CACHE_INFO_EX TicketTemplate;
} KERB_PURGE_TKT_CACHE_EX_REQUEST, *PKERB_PURGE_TKT_CACHE_EX_REQUEST;
typedef struct _KERB_SUBMIT_TKT_REQUEST {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    LUID LogonId;
    ULONG Flags;
    KERB_CRYPTO_KEY32 Key;
    ULONG KerbCredSize;
    ULONG KerbCredOffset;
} KERB_SUBMIT_TKT_REQUEST, *PKERB_SUBMIT_TKT_REQUEST;
typedef struct _KERB_QUERY_KDC_PROXY_CACHE_REQUEST
{
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG Flags;
    LUID LogonId;
} KERB_QUERY_KDC_PROXY_CACHE_REQUEST, *PKERB_QUERY_KDC_PROXY_CACHE_REQUEST;
typedef struct _KDC_PROXY_CACHE_ENTRY_DATA
{
    ULONG64 SinceLastUsed;
    UNICODE_STRING DomainName;
    UNICODE_STRING ProxyServerName;
    UNICODE_STRING ProxyServerVdir;
    USHORT ProxyServerPort;
    LUID LogonId;
    UNICODE_STRING CredUserName;
    UNICODE_STRING CredDomainName;
    BOOLEAN GlobalCache;
} KDC_PROXY_CACHE_ENTRY_DATA, *PKDC_PROXY_CACHE_ENTRY_DATA;
typedef struct _KERB_QUERY_KDC_PROXY_CACHE_RESPONSE
{
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG CountOfEntries;
    PKDC_PROXY_CACHE_ENTRY_DATA Entries;
} KERB_QUERY_KDC_PROXY_CACHE_RESPONSE, *PKERB_QUERY_KDC_PROXY_CACHE_RESPONSE;
typedef struct _KERB_PURGE_KDC_PROXY_CACHE_REQUEST
{
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG Flags;
    LUID LogonId;
} KERB_PURGE_KDC_PROXY_CACHE_REQUEST, *PKERB_PURGE_KDC_PROXY_CACHE_REQUEST;
typedef struct _KERB_PURGE_KDC_PROXY_CACHE_RESPONSE
{
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG CountOfPurged;
} KERB_PURGE_KDC_PROXY_CACHE_RESPONSE, *PKERB_PURGE_KDC_PROXY_CACHE_RESPONSE;
typedef struct _KERB_S4U2PROXY_CACHE_ENTRY_INFO
{
    UNICODE_STRING ServerName;
    ULONG Flags;
    NTSTATUS LastStatus;
    LARGE_INTEGER Expiry;
} KERB_S4U2PROXY_CACHE_ENTRY_INFO, *PKERB_S4U2PROXY_CACHE_ENTRY_INFO;
typedef struct _KERB_S4U2PROXY_CRED
{
    UNICODE_STRING UserName;
    UNICODE_STRING DomainName;
    ULONG Flags;
    NTSTATUS LastStatus;
    LARGE_INTEGER Expiry;
    ULONG CountOfEntries;
    PKERB_S4U2PROXY_CACHE_ENTRY_INFO Entries;
} KERB_S4U2PROXY_CRED, *PKERB_S4U2PROXY_CRED;
typedef struct _KERB_QUERY_S4U2PROXY_CACHE_REQUEST
{
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG Flags;
    LUID LogonId;
} KERB_QUERY_S4U2PROXY_CACHE_REQUEST, *PKERB_QUERY_S4U2PROXY_CACHE_REQUEST;
typedef struct _KERB_QUERY_S4U2PROXY_CACHE_RESPONSE
{
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG CountOfCreds;
    PKERB_S4U2PROXY_CRED Creds;
} KERB_QUERY_S4U2PROXY_CACHE_RESPONSE, *PKERB_QUERY_S4U2PROXY_CACHE_RESPONSE;
typedef struct _KERB_RETRIEVE_KEY_TAB_REQUEST
{
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG Flags;
    UNICODE_STRING UserName;
    UNICODE_STRING DomainName;
    UNICODE_STRING Password;
} KERB_RETRIEVE_KEY_TAB_REQUEST, *PKERB_RETRIEVE_KEY_TAB_REQUEST;
typedef struct _KERB_RETRIEVE_KEY_TAB_RESPONSE
{
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG KeyTabLength;
    PUCHAR KeyTab;
} KERB_RETRIEVE_KEY_TAB_RESPONSE, *PKERB_RETRIEVE_KEY_TAB_RESPONSE;
typedef struct _KERB_CHANGEPASSWORD_REQUEST {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    UNICODE_STRING DomainName;
    UNICODE_STRING AccountName;
    UNICODE_STRING OldPassword;
    UNICODE_STRING NewPassword;
    BOOLEAN Impersonating;
} KERB_CHANGEPASSWORD_REQUEST, *PKERB_CHANGEPASSWORD_REQUEST;
typedef struct _KERB_SETPASSWORD_REQUEST {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    LUID LogonId;
    SecHandle CredentialsHandle;
    ULONG Flags;
    UNICODE_STRING DomainName;
    UNICODE_STRING AccountName;
    UNICODE_STRING Password;
} KERB_SETPASSWORD_REQUEST, *PKERB_SETPASSWORD_REQUEST;
typedef struct _KERB_SETPASSWORD_EX_REQUEST {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    LUID LogonId;
    SecHandle CredentialsHandle;
    ULONG Flags;
    UNICODE_STRING AccountRealm;
    UNICODE_STRING AccountName;
    UNICODE_STRING Password;
    UNICODE_STRING ClientRealm;
    UNICODE_STRING ClientName;
    BOOLEAN Impersonating;
    UNICODE_STRING KdcAddress;
    ULONG KdcAddressType;
 } KERB_SETPASSWORD_EX_REQUEST, *PKERB_SETPASSWORD_EX_REQUEST;
typedef struct _KERB_DECRYPT_REQUEST {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    LUID LogonId;
    ULONG Flags;
    LONG CryptoType;
    LONG KeyUsage;
    KERB_CRYPTO_KEY Key;
    ULONG EncryptedDataSize;
    ULONG InitialVectorSize;
    PUCHAR InitialVector;
    PUCHAR EncryptedData;
} KERB_DECRYPT_REQUEST, *PKERB_DECRYPT_REQUEST;
typedef struct _KERB_DECRYPT_RESPONSE {
        UCHAR DecryptedData[ANYSIZE_ARRAY];
} KERB_DECRYPT_RESPONSE, *PKERB_DECRYPT_RESPONSE;
typedef struct _KERB_ADD_BINDING_CACHE_ENTRY_REQUEST {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    UNICODE_STRING RealmName;
    UNICODE_STRING KdcAddress;
    ULONG AddressType;
} KERB_ADD_BINDING_CACHE_ENTRY_REQUEST, *PKERB_ADD_BINDING_CACHE_ENTRY_REQUEST;
typedef struct _KERB_REFRESH_SCCRED_REQUEST {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    UNICODE_STRING CredentialBlob;
    LUID LogonId;
    ULONG Flags;
} KERB_REFRESH_SCCRED_REQUEST, *PKERB_REFRESH_SCCRED_REQUEST;
typedef struct _KERB_ADD_CREDENTIALS_REQUEST {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    UNICODE_STRING UserName;
    UNICODE_STRING DomainName;
    UNICODE_STRING Password;
    LUID LogonId;
    ULONG Flags;
} KERB_ADD_CREDENTIALS_REQUEST, *PKERB_ADD_CREDENTIALS_REQUEST;
typedef struct _KERB_ADD_CREDENTIALS_REQUEST_EX {
    KERB_ADD_CREDENTIALS_REQUEST Credentials;
    ULONG PrincipalNameCount;
    UNICODE_STRING PrincipalNames[ANYSIZE_ARRAY];
} KERB_ADD_CREDENTIALS_REQUEST_EX, *PKERB_ADD_CREDENTIALS_REQUEST_EX;
typedef struct _KERB_TRANSFER_CRED_REQUEST {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    LUID OriginLogonId;
    LUID DestinationLogonId;
    ULONG Flags;
} KERB_TRANSFER_CRED_REQUEST, *PKERB_TRANSFER_CRED_REQUEST;
typedef struct _KERB_CLEANUP_MACHINE_PKINIT_CREDS_REQUEST
{
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    LUID LogonId;
} KERB_CLEANUP_MACHINE_PKINIT_CREDS_REQUEST, *PKERB_CLEANUP_MACHINE_PKINIT_CREDS_REQUEST;
typedef struct _KERB_BINDING_CACHE_ENTRY_DATA {
    ULONG64 DiscoveryTime;
    UNICODE_STRING RealmName;
    UNICODE_STRING KdcAddress;
    ULONG AddressType;
    ULONG Flags;
    ULONG DcFlags;
    ULONG CacheFlags;
    UNICODE_STRING KdcName;
} KERB_BINDING_CACHE_ENTRY_DATA, *PKERB_BINDING_CACHE_ENTRY_DATA;
typedef struct _KERB_QUERY_BINDING_CACHE_RESPONSE {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG CountOfEntries;
    PKERB_BINDING_CACHE_ENTRY_DATA Entries;
} KERB_QUERY_BINDING_CACHE_RESPONSE, *PKERB_QUERY_BINDING_CACHE_RESPONSE;
typedef struct _KERB_ADD_BINDING_CACHE_ENTRY_EX_REQUEST {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    UNICODE_STRING RealmName;
    UNICODE_STRING KdcAddress;
    ULONG AddressType;
    ULONG DcFlags;
} KERB_ADD_BINDING_CACHE_ENTRY_EX_REQUEST, *PKERB_ADD_BINDING_CACHE_ENTRY_EX_REQUEST;
typedef struct _KERB_QUERY_BINDING_CACHE_REQUEST {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
} KERB_QUERY_BINDING_CACHE_REQUEST, *PKERB_QUERY_BINDING_CACHE_REQUEST;
typedef struct _KERB_PURGE_BINDING_CACHE_REQUEST {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
} KERB_PURGE_BINDING_CACHE_REQUEST, *PKERB_PURGE_BINDING_CACHE_REQUEST;
typedef struct _KERB_QUERY_DOMAIN_EXTENDED_POLICIES_REQUEST {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG Flags;
    UNICODE_STRING DomainName;
} KERB_QUERY_DOMAIN_EXTENDED_POLICIES_REQUEST, *PKERB_QUERY_DOMAIN_EXTENDED_POLICIES_REQUEST;
typedef struct _KERB_QUERY_DOMAIN_EXTENDED_POLICIES_RESPONSE {
    KERB_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG Flags;
    ULONG ExtendedPolicies;
    ULONG DsFlags;
} KERB_QUERY_DOMAIN_EXTENDED_POLICIES_RESPONSE, *PKERB_QUERY_DOMAIN_EXTENDED_POLICIES_RESPONSE;
typedef enum _KERB_CERTIFICATE_INFO_TYPE
{
    CertHashInfo = 1,
} KERB_CERTIFICATE_INFO_TYPE, *PKERB_CERTIFICATE_INFO_TYPE;
typedef struct _KERB_CERTIFICATE_HASHINFO
{
    USHORT StoreNameLength;
    USHORT HashLength;
} KERB_CERTIFICATE_HASHINFO, *PKERB_CERTIFICATE_HASHINFO;
typedef struct _KERB_CERTIFICATE_INFO
{
    ULONG CertInfoSize;
    ULONG InfoType;
} KERB_CERTIFICATE_INFO, *PKERB_CERTIFICATE_INFO;
typedef struct _POLICY_AUDIT_SID_ARRAY {
    ULONG UsersCount;
    [size_is(UsersCount)] PAUDIT_SID_RPC* UserSidArray;
} POLICY_AUDIT_SID_ARRAY, *PPOLICY_AUDIT_SID_ARRAY;
typedef struct _AUDIT_POLICY_INFORMATION {
    GUID AuditSubCategoryGuid;
    ULONG AuditingInformation;
    GUID AuditCategoryGuid;
} AUDIT_POLICY_INFORMATION, *PAUDIT_POLICY_INFORMATION;
typedef const PAUDIT_POLICY_INFORMATION PCAUDIT_POLICY_INFORMATION, LPCAUDIT_POLICY_INFORMATION;
                                      AUDIT_SET_SYSTEM_POLICY |\
                                      AUDIT_QUERY_SYSTEM_POLICY |\
                                      AUDIT_SET_USER_POLICY |\
                                      AUDIT_QUERY_USER_POLICY |\
                                      AUDIT_ENUMERATE_USERS |\
                                      AUDIT_SET_MISC_POLICY |\
                                      AUDIT_QUERY_MISC_POLICY)
                                      AUDIT_QUERY_SYSTEM_POLICY |\
                                      AUDIT_QUERY_USER_POLICY |\
                                      AUDIT_ENUMERATE_USERS |\
                                      AUDIT_QUERY_MISC_POLICY)
                                      AUDIT_SET_USER_POLICY |\
                                      AUDIT_SET_MISC_POLICY |\
                                      AUDIT_SET_SYSTEM_POLICY)
BOOLEAN
NTAPI
AuditSetSystemPolicy(
    _In_reads_(dwPolicyCount) PCAUDIT_POLICY_INFORMATION pAuditPolicy,
    _In_ ULONG dwPolicyCount
    );
BOOLEAN
NTAPI
AuditSetPerUserPolicy(
    _In_ const PSID pSid,
    _In_reads_(dwPolicyCount) PCAUDIT_POLICY_INFORMATION pAuditPolicy,
    _In_ ULONG dwPolicyCount
    );
_Check_return_
BOOLEAN
NTAPI
AuditQuerySystemPolicy(
    _In_reads_(dwPolicyCount) const GUID* pSubCategoryGuids,
    _In_ ULONG dwPolicyCount,
    _Outptr_result_buffer_(dwPolicyCount)
    _When_(return != 0, __drv_allocatesMem(Mem)) PAUDIT_POLICY_INFORMATION* ppAuditPolicy
    );
_Check_return_
BOOLEAN
NTAPI
AuditQueryPerUserPolicy(
    _In_ const PSID pSid,
    _In_reads_(dwPolicyCount) const GUID* pSubCategoryGuids,
    _In_ ULONG dwPolicyCount,
    _Outptr_result_buffer_(dwPolicyCount)
    _When_(return != 0, __drv_allocatesMem(Mem)) PAUDIT_POLICY_INFORMATION* ppAuditPolicy
    );
_Check_return_
BOOLEAN
NTAPI
AuditEnumeratePerUserPolicy(
    _Out_ _When_(return != 0, __drv_allocatesMem(Mem)) PPOLICY_AUDIT_SID_ARRAY* ppAuditSidArray
    );
_Check_return_
BOOLEAN
NTAPI
AuditComputeEffectivePolicyBySid(
    _In_ const PSID pSid,
    _In_reads_(dwPolicyCount) const GUID* pSubCategoryGuids,
    _In_ ULONG dwPolicyCount,
    _Outptr_result_buffer_(dwPolicyCount)
    _When_(return != 0, __drv_allocatesMem(Mem)) PAUDIT_POLICY_INFORMATION* ppAuditPolicy
    );
_Check_return_
BOOLEAN
NTAPI
AuditComputeEffectivePolicyByToken(
    _In_ HANDLE hTokenHandle,
    _In_reads_(dwPolicyCount) const GUID* pSubCategoryGuids,
    _In_ ULONG dwPolicyCount,
    _Outptr_result_buffer_(dwPolicyCount)
    _When_(return != 0, __drv_allocatesMem(Mem)) PAUDIT_POLICY_INFORMATION* ppAuditPolicy
    );
_Check_return_
BOOLEAN
NTAPI
AuditEnumerateCategories(
    _Outptr_result_buffer_(*pdwCountReturned)
    _When_(return != 0, __drv_allocatesMem(Mem)) GUID** ppAuditCategoriesArray,
    _Out_ PULONG pdwCountReturned
    );
_Check_return_
BOOLEAN
NTAPI
AuditEnumerateSubCategories(
    _In_opt_ const GUID* pAuditCategoryGuid,
    _In_ BOOLEAN bRetrieveAllSubCategories,
    _Outptr_result_buffer_(*pdwCountReturned)
    _When_(return != 0, __drv_allocatesMem(Mem)) GUID** ppAuditSubCategoriesArray,
    _Out_ PULONG pdwCountReturned
    );
_Check_return_
BOOLEAN
NTAPI
AuditLookupCategoryNameW(
    _In_ const GUID* pAuditCategoryGuid,
    _Outptr_ _When_(return != 0, __drv_allocatesMem(Mem)) PWSTR* ppszCategoryName
    );
_Check_return_
BOOLEAN
NTAPI
AuditLookupCategoryNameA(
    _In_ const GUID* pAuditCategoryGuid,
    _Outptr_ _When_(return != 0, __drv_allocatesMem(Mem)) PSTR* ppszCategoryName
    );
_Check_return_
BOOLEAN
NTAPI
AuditLookupSubCategoryNameW(
    _In_ const GUID* pAuditSubCategoryGuid,
    _Outptr_ _When_(return != 0, __drv_allocatesMem(Mem)) PWSTR* ppszSubCategoryName
    );
_Check_return_
BOOLEAN
NTAPI
AuditLookupSubCategoryNameA(
    _In_ const GUID* pAuditSubCategoryGuid,
    _Outptr_ _When_(return != 0, __drv_allocatesMem(Mem)) PSTR* ppszSubCategoryName
    );
BOOLEAN
NTAPI
AuditLookupCategoryIdFromCategoryGuid(
    _In_ const GUID* pAuditCategoryGuid,
    _Out_ PPOLICY_AUDIT_EVENT_TYPE pAuditCategoryId
    );
BOOLEAN
NTAPI
AuditLookupCategoryGuidFromCategoryId(
    _In_ POLICY_AUDIT_EVENT_TYPE AuditCategoryId,
    _Out_ GUID* pAuditCategoryGuid
    );
BOOLEAN
NTAPI
AuditSetSecurity(
    _In_ SECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR pSecurityDescriptor
    );
_Check_return_
BOOLEAN
NTAPI
AuditQuerySecurity(
    _In_ SECURITY_INFORMATION SecurityInformation,
    _Outptr_ _When_(return != 0, __drv_allocatesMem(Mem)) PSECURITY_DESCRIPTOR *ppSecurityDescriptor
    );
BOOLEAN
NTAPI
AuditSetGlobalSaclW(
    _In_ PCWSTR ObjectTypeName,
    _In_opt_ PACL Acl
    );
BOOLEAN
NTAPI
AuditSetGlobalSaclA(
    _In_ PCSTR ObjectTypeName,
    _In_opt_ PACL Acl
    );
_Check_return_
BOOLEAN
NTAPI
AuditQueryGlobalSaclW(
    _In_ PCWSTR ObjectTypeName,
    _Out_ _When_(return != 0, __drv_allocatesMem(Mem)) PACL *Acl
    );
_Check_return_
BOOLEAN
NTAPI
AuditQueryGlobalSaclA(
    _In_ PCSTR ObjectTypeName,
    _Out_ _When_(return != 0, __drv_allocatesMem(Mem)) PACL *Acl
    );
VOID
NTAPI
AuditFree(
    _In_ __drv_freesMem(Mem) _Post_invalid_ PVOID Buffer
    );
typedef struct _PKU2U_CERT_BLOB {
    ULONG CertOffset;
    USHORT CertLength;
} PKU2U_CERT_BLOB, *PPKU2U_CERT_BLOB;
typedef struct _PKU2U_CREDUI_CONTEXT {
    ULONG64 Version;
    USHORT cbHeaderLength;
    ULONG cbStructureLength;
    USHORT CertArrayCount;
    ULONG CertArrayOffset;
} PKU2U_CREDUI_CONTEXT, *PPKU2U_CREDUI_CONTEXT;
typedef enum _PKU2U_LOGON_SUBMIT_TYPE {
    Pku2uCertificateS4ULogon = 14,
} PKU2U_LOGON_SUBMIT_TYPE, *PPKU2U_LOGON_SUBMIT_TYPE;
typedef struct _PKU2U_CERTIFICATE_S4U_LOGON {
    PKU2U_LOGON_SUBMIT_TYPE MessageType;
    ULONG Flags;
    UNICODE_STRING UserPrincipalName;
    _Reserved_ UNICODE_STRING DomainName;
    ULONG CertificateLength;
    _Field_size_bytes_(CertificateLength) PUCHAR Certificate;
} PKU2U_CERTIFICATE_S4U_LOGON, *PPKU2U_CERTIFICATE_S4U_LOGON;
}
#endif
#pragma endregion
