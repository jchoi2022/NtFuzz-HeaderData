#error Compiler version not supported by Windows DDK
#pragma warning(disable:4116)
#pragma warning(disable:4115)
#pragma warning(disable:4201)
#pragma warning(disable:4214)
#include <ntddk.h>
#include <excpt.h>
#include <ntdef.h>
#include <ntnls.h>
#include <ntstatus.h>
#include <bugcodes.h>
#include <ntiologc.h>
#include <winapifamily.h>
typedef struct _BUS_HANDLER *PBUS_HANDLER;
typedef struct _CALLBACK_OBJECT *PCALLBACK_OBJECT;
typedef struct _DEVICE_HANDLER_OBJECT *PDEVICE_HANDLER_OBJECT;
typedef struct _IO_TIMER *PIO_TIMER;
typedef struct _KINTERRUPT *PKINTERRUPT;
typedef struct _KPROCESS *PKPROCESS ,*PRKPROCESS, *PEPROCESS;
typedef struct _KTHREAD *PKTHREAD, *PRKTHREAD, *PETHREAD;
typedef struct _OBJECT_TYPE *POBJECT_TYPE;
typedef struct _PEB *PPEB;
typedef struct _ACL *PACL;
extern "C" {
extern NTSYSAPI volatile CCHAR KeNumberProcessors;
typedef UNICODE_STRING LSA_UNICODE_STRING, *PLSA_UNICODE_STRING;
typedef STRING LSA_STRING, *PLSA_STRING;
typedef OBJECT_ATTRIBUTES LSA_OBJECT_ATTRIBUTES, *PLSA_OBJECT_ATTRIBUTES;
typedef struct _SID_IDENTIFIER_AUTHORITY {
    UCHAR Value[6];
} SID_IDENTIFIER_AUTHORITY, *PSID_IDENTIFIER_AUTHORITY;
typedef struct _SID {
   UCHAR Revision;
   UCHAR SubAuthorityCount;
   SID_IDENTIFIER_AUTHORITY IdentifierAuthority;
   [size_is(SubAuthorityCount)] ULONG SubAuthority[*];
} SID, *PISID;
      (sizeof(SID) - sizeof(ULONG) + (SID_MAX_SUB_AUTHORITIES * sizeof(ULONG)))
                                                (SubAuthorityCount_) * sizeof(ULONG))
    (2 + 4 + 15 + (11 * SID_MAX_SUB_AUTHORITIES) + 1)
typedef union _SE_SID {
    SID Sid;
    UCHAR Buffer[SECURITY_MAX_SID_SIZE];
} SE_SID, *PSE_SID;
typedef enum _SID_NAME_USE {
    SidTypeUser = 1,
    SidTypeGroup,
    SidTypeDomain,
    SidTypeAlias,
    SidTypeWellKnownGroup,
    SidTypeDeletedAccount,
    SidTypeInvalid,
    SidTypeUnknown,
    SidTypeComputer,
    SidTypeLabel,
    SidTypeLogonSession
} SID_NAME_USE, *PSID_NAME_USE;
typedef struct _SID_AND_ATTRIBUTES {
    PISID Sid;
    ULONG Attributes;
    } SID_AND_ATTRIBUTES, * PSID_AND_ATTRIBUTES;
typedef SID_AND_ATTRIBUTES SID_AND_ATTRIBUTES_ARRAY[ANYSIZE_ARRAY];
typedef SID_AND_ATTRIBUTES_ARRAY *PSID_AND_ATTRIBUTES_ARRAY;
typedef ULONG_PTR SID_HASH_ENTRY, *PSID_HASH_ENTRY;
typedef struct _SID_AND_ATTRIBUTES_HASH {
    ULONG SidCount;
    PSID_AND_ATTRIBUTES SidAttr;
    SID_HASH_ENTRY Hash[SID_HASH_SIZE];
} SID_AND_ATTRIBUTES_HASH, *PSID_AND_ATTRIBUTES_HASH;
typedef struct _ACE_HEADER {
    UCHAR AceType;
    UCHAR AceFlags;
    USHORT AceSize;
} ACE_HEADER;
typedef ACE_HEADER *PACE_HEADER;
typedef struct _ACCESS_ALLOWED_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    ULONG SidStart;
} ACCESS_ALLOWED_ACE;
typedef ACCESS_ALLOWED_ACE *PACCESS_ALLOWED_ACE;
typedef struct _ACCESS_DENIED_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    ULONG SidStart;
} ACCESS_DENIED_ACE;
typedef ACCESS_DENIED_ACE *PACCESS_DENIED_ACE;
typedef struct _SYSTEM_AUDIT_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    ULONG SidStart;
} SYSTEM_AUDIT_ACE;
typedef SYSTEM_AUDIT_ACE *PSYSTEM_AUDIT_ACE;
typedef struct _SYSTEM_ALARM_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    ULONG SidStart;
} SYSTEM_ALARM_ACE;
typedef SYSTEM_ALARM_ACE *PSYSTEM_ALARM_ACE;
typedef struct _SYSTEM_RESOURCE_ATTRIBUTE_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    ULONG SidStart;
} SYSTEM_RESOURCE_ATTRIBUTE_ACE, *PSYSTEM_RESOURCE_ATTRIBUTE_ACE;
typedef struct _SYSTEM_SCOPED_POLICY_ID_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    ULONG SidStart;
} SYSTEM_SCOPED_POLICY_ID_ACE, *PSYSTEM_SCOPED_POLICY_ID_ACE;
typedef struct _SYSTEM_MANDATORY_LABEL_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    ULONG SidStart;
} SYSTEM_MANDATORY_LABEL_ACE, *PSYSTEM_MANDATORY_LABEL_ACE;
typedef struct _SYSTEM_PROCESS_TRUST_LABEL_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    ULONG SidStart;
} SYSTEM_PROCESS_TRUST_LABEL_ACE, *PSYSTEM_PROCESS_TRUST_LABEL_ACE;
typedef struct _SYSTEM_ACCESS_FILTER_ACE {
    ACE_HEADER Header;
    ACCESS_MASK Mask;
    ULONG SidStart;
} SYSTEM_ACCESS_FILTER_ACE, *PSYSTEM_ACCESS_FILTER_ACE;


typedef USHORT SECURITY_DESCRIPTOR_CONTROL, *PSECURITY_DESCRIPTOR_CONTROL;
typedef struct _SECURITY_DESCRIPTOR_RELATIVE {
    UCHAR Revision;
    UCHAR Sbz1;
    SECURITY_DESCRIPTOR_CONTROL Control;
    ULONG Owner;
    ULONG Group;
    ULONG Sacl;
    ULONG Dacl;
    } SECURITY_DESCRIPTOR_RELATIVE, *PISECURITY_DESCRIPTOR_RELATIVE;
typedef struct _SECURITY_DESCRIPTOR {
   UCHAR Revision;
   UCHAR Sbz1;
   SECURITY_DESCRIPTOR_CONTROL Control;
   PSID Owner;
   PSID Group;
   PACL Sacl;
   PACL Dacl;
   } SECURITY_DESCRIPTOR, *PISECURITY_DESCRIPTOR;
typedef struct _SECURITY_OBJECT_AI_PARAMS {
    ULONG Size;
    ULONG ConstraintMask;
} SECURITY_OBJECT_AI_PARAMS, *PSECURITY_OBJECT_AI_PARAMS;
typedef struct _OBJECT_TYPE_LIST {
    USHORT Level;
    USHORT Sbz;
    GUID *ObjectType;
} OBJECT_TYPE_LIST, *POBJECT_TYPE_LIST;
typedef enum _AUDIT_EVENT_TYPE {
    AuditEventObjectAccess,
    AuditEventDirectoryServiceAccess
} AUDIT_EVENT_TYPE, *PAUDIT_EVENT_TYPE;
typedef enum _ACCESS_REASON_TYPE{
    AccessReasonNone = 0x00000000,
    AccessReasonAllowedAce = 0x00010000,
    AccessReasonDeniedAce = 0x00020000,
    AccessReasonAllowedParentAce = 0x00030000,
    AccessReasonDeniedParentAce = 0x00040000,
    AccessReasonNotGrantedByCape = 0x00050000,
    AccessReasonNotGrantedByParentCape = 0x00060000,
    AccessReasonNotGrantedToAppContainer = 0x00070000,
    AccessReasonMissingPrivilege = 0x00100000,
    AccessReasonFromPrivilege = 0x00200000,
    AccessReasonIntegrityLevel = 0x00300000,
    AccessReasonOwnership = 0x00400000,
    AccessReasonNullDacl = 0x00500000,
    AccessReasonEmptyDacl = 0x00600000,
    AccessReasonNoSD = 0x00700000,
    AccessReasonNoGrant = 0x00800000,
    AccessReasonTrustLabel = 0x00900000,
    AccessReasonFilterAce = 0x00a00000
}
ACCESS_REASON_TYPE;
typedef ULONG ACCESS_REASON;
typedef struct _ACCESS_REASONS{
        ACCESS_REASON Data[32];
} ACCESS_REASONS, *PACCESS_REASONS;
typedef struct _SE_SECURITY_DESCRIPTOR
{
    ULONG Size;
    ULONG Flags;
    PSECURITY_DESCRIPTOR SecurityDescriptor;
} SE_SECURITY_DESCRIPTOR, *PSE_SECURITY_DESCRIPTOR;
typedef struct _SE_ACCESS_REQUEST
{
    ULONG Size;
    PSE_SECURITY_DESCRIPTOR SeSecurityDescriptor;
    ACCESS_MASK DesiredAccess;
    ACCESS_MASK PreviouslyGrantedAccess;
    PSID PrincipalSelfSid;
    PGENERIC_MAPPING GenericMapping;
    ULONG ObjectTypeListCount;
    POBJECT_TYPE_LIST ObjectTypeList;
} SE_ACCESS_REQUEST, *PSE_ACCESS_REQUEST;
typedef struct _SE_ACCESS_REPLY
{
    ULONG Size;
    ULONG ResultListCount;
    PACCESS_MASK GrantedAccess;
    PNTSTATUS AccessStatus;
    PACCESS_REASONS AccessReason;
    PPRIVILEGE_SET* Privileges;
} SE_ACCESS_REPLY, *PSE_ACCESS_REPLY;
typedef enum _SE_AUDIT_OPERATION
{
    AuditPrivilegeObject,
    AuditPrivilegeService,
    AuditAccessCheck,
    AuditOpenObject,
    AuditOpenObjectWithTransaction,
    AuditCloseObject,
    AuditDeleteObject,
    AuditOpenObjectForDelete,
    AuditOpenObjectForDeleteWithTransaction,
    AuditCloseNonObject,
    AuditOpenNonObject,
    AuditObjectReference,
    AuditHandleCreation,
} SE_AUDIT_OPERATION, *PSE_AUDIT_OPERATION;
typedef struct _SE_AUDIT_INFO
{
    ULONG Size;
    AUDIT_EVENT_TYPE AuditType;
    SE_AUDIT_OPERATION AuditOperation;
    ULONG AuditFlags;
    UNICODE_STRING SubsystemName;
    UNICODE_STRING ObjectTypeName;
    UNICODE_STRING ObjectName;
    PVOID HandleId;
    GUID* TransactionId;
    LUID* OperationId;
    BOOLEAN ObjectCreation;
    BOOLEAN GenerateOnClose;
} SE_AUDIT_INFO, *PSE_AUDIT_INFO;















typedef enum _TOKEN_TYPE {
    TokenPrimary = 1,
    TokenImpersonation
    } TOKEN_TYPE;
typedef TOKEN_TYPE *PTOKEN_TYPE;
typedef enum _TOKEN_ELEVATION_TYPE {
    TokenElevationTypeDefault = 1,
    TokenElevationTypeFull,
    TokenElevationTypeLimited,
} TOKEN_ELEVATION_TYPE, *PTOKEN_ELEVATION_TYPE;
typedef enum _TOKEN_INFORMATION_CLASS {
    TokenUser = 1,
    TokenGroups,
    TokenPrivileges,
    TokenOwner,
    TokenPrimaryGroup,
    TokenDefaultDacl,
    TokenSource,
    TokenType,
    TokenImpersonationLevel,
    TokenStatistics,
    TokenRestrictedSids,
    TokenSessionId,
    TokenGroupsAndPrivileges,
    TokenSessionReference,
    TokenSandBoxInert,
    TokenAuditPolicy,
    TokenOrigin,
    TokenElevationType,
    TokenLinkedToken,
    TokenElevation,
    TokenHasRestrictions,
    TokenAccessInformation,
    TokenVirtualizationAllowed,
    TokenVirtualizationEnabled,
    TokenIntegrityLevel,
    TokenUIAccess,
    TokenMandatoryPolicy,
    TokenLogonSid,
    TokenIsAppContainer,
    TokenCapabilities,
    TokenAppContainerSid,
    TokenAppContainerNumber,
    TokenUserClaimAttributes,
    TokenDeviceClaimAttributes,
    TokenRestrictedUserClaimAttributes,
    TokenRestrictedDeviceClaimAttributes,
    TokenDeviceGroups,
    TokenRestrictedDeviceGroups,
    TokenSecurityAttributes,
    TokenIsRestricted,
    TokenProcessTrustLevel,
    TokenPrivateNameSpace,
    TokenSingletonAttributes,
    TokenBnoIsolation,
    TokenChildProcessFlags,
    TokenIsLessPrivilegedAppContainer,
    TokenIsSandboxed,
    TokenOriginatingProcessTrustLevel,
    MaxTokenInfoClass
} TOKEN_INFORMATION_CLASS, *PTOKEN_INFORMATION_CLASS;
typedef struct _TOKEN_USER {
    SID_AND_ATTRIBUTES User;
} TOKEN_USER, *PTOKEN_USER;
typedef struct _SE_TOKEN_USER {
    union {
        TOKEN_USER TokenUser;
        SID_AND_ATTRIBUTES User;
    } DUMMYUNIONNAME;
    union {
        SID Sid;
        UCHAR Buffer[SECURITY_MAX_SID_SIZE];
    } DUMMYUNIONNAME2;
} SE_TOKEN_USER , PSE_TOKEN_USER;
typedef struct _TOKEN_GROUPS {
    ULONG GroupCount;
    [size_is(GroupCount)] SID_AND_ATTRIBUTES Groups[*];
} TOKEN_GROUPS, *PTOKEN_GROUPS;
typedef struct _TOKEN_PRIVILEGES {
    ULONG PrivilegeCount;
    LUID_AND_ATTRIBUTES Privileges[ANYSIZE_ARRAY];
} TOKEN_PRIVILEGES, *PTOKEN_PRIVILEGES;
typedef struct _TOKEN_OWNER {
    PSID Owner;
} TOKEN_OWNER, *PTOKEN_OWNER;
typedef struct _TOKEN_PRIMARY_GROUP {
    PSID PrimaryGroup;
} TOKEN_PRIMARY_GROUP, *PTOKEN_PRIMARY_GROUP;
typedef struct _TOKEN_DEFAULT_DACL {
    PACL DefaultDacl;
} TOKEN_DEFAULT_DACL, *PTOKEN_DEFAULT_DACL;
typedef struct _TOKEN_USER_CLAIMS {
    PCLAIMS_BLOB UserClaims;
} TOKEN_USER_CLAIMS, *PTOKEN_USER_CLAIMS;
typedef struct _TOKEN_DEVICE_CLAIMS {
    PCLAIMS_BLOB DeviceClaims;
} TOKEN_DEVICE_CLAIMS, *PTOKEN_DEVICE_CLAIMS;
typedef struct _TOKEN_GROUPS_AND_PRIVILEGES {
    ULONG SidCount;
    ULONG SidLength;
    PSID_AND_ATTRIBUTES Sids;
    ULONG RestrictedSidCount;
    ULONG RestrictedSidLength;
    PSID_AND_ATTRIBUTES RestrictedSids;
    ULONG PrivilegeCount;
    ULONG PrivilegeLength;
    PLUID_AND_ATTRIBUTES Privileges;
    LUID AuthenticationId;
} TOKEN_GROUPS_AND_PRIVILEGES, *PTOKEN_GROUPS_AND_PRIVILEGES;
typedef struct _TOKEN_LINKED_TOKEN {
    HANDLE LinkedToken;
} TOKEN_LINKED_TOKEN, *PTOKEN_LINKED_TOKEN;
typedef struct _TOKEN_ELEVATION {
    ULONG TokenIsElevated;
} TOKEN_ELEVATION, *PTOKEN_ELEVATION;
typedef struct _TOKEN_MANDATORY_LABEL {
    SID_AND_ATTRIBUTES Label;
} TOKEN_MANDATORY_LABEL, *PTOKEN_MANDATORY_LABEL;
                                                TOKEN_MANDATORY_POLICY_NEW_PROCESS_MIN)
typedef struct _TOKEN_MANDATORY_POLICY {
    ULONG Policy;
} TOKEN_MANDATORY_POLICY, *PTOKEN_MANDATORY_POLICY;
typedef PVOID PSECURITY_ATTRIBUTES_OPAQUE;
typedef struct _TOKEN_ACCESS_INFORMATION {
    PSID_AND_ATTRIBUTES_HASH SidHash;
    PSID_AND_ATTRIBUTES_HASH RestrictedSidHash;
    PTOKEN_PRIVILEGES Privileges;
    LUID AuthenticationId;
    TOKEN_TYPE TokenType;
    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    TOKEN_MANDATORY_POLICY MandatoryPolicy;
    ULONG Flags;
    ULONG AppContainerNumber;
    PSID PackageSid;
    PSID_AND_ATTRIBUTES_HASH CapabilitiesHash;
    PSID TrustLevelSid;
    PSECURITY_ATTRIBUTES_OPAQUE SecurityAttributes;
} TOKEN_ACCESS_INFORMATION, *PTOKEN_ACCESS_INFORMATION;
typedef struct _TOKEN_AUDIT_POLICY {
    UCHAR PerUserPolicy[((POLICY_AUDIT_SUBCATEGORY_COUNT) >> 1) + 1];
} TOKEN_AUDIT_POLICY, *PTOKEN_AUDIT_POLICY;
typedef struct _TOKEN_SOURCE {
    CHAR SourceName[TOKEN_SOURCE_LENGTH];
    LUID SourceIdentifier;
} TOKEN_SOURCE, *PTOKEN_SOURCE;
typedef struct _TOKEN_STATISTICS {
    LUID TokenId;
    LUID AuthenticationId;
    LARGE_INTEGER ExpirationTime;
    TOKEN_TYPE TokenType;
    SECURITY_IMPERSONATION_LEVEL ImpersonationLevel;
    ULONG DynamicCharged;
    ULONG DynamicAvailable;
    ULONG GroupCount;
    ULONG PrivilegeCount;
    LUID ModifiedId;
} TOKEN_STATISTICS, *PTOKEN_STATISTICS;
typedef struct _TOKEN_CONTROL {
    LUID TokenId;
    LUID AuthenticationId;
    LUID ModifiedId;
    TOKEN_SOURCE TokenSource;
} TOKEN_CONTROL, *PTOKEN_CONTROL;
typedef struct _TOKEN_ORIGIN {
    LUID OriginatingLogonSession ;
} TOKEN_ORIGIN, * PTOKEN_ORIGIN ;
typedef enum _MANDATORY_LEVEL {
    MandatoryLevelUntrusted = 0,
    MandatoryLevelLow,
    MandatoryLevelMedium,
    MandatoryLevelHigh,
    MandatoryLevelSystem,
    MandatoryLevelSecureProcess,
    MandatoryLevelCount
} MANDATORY_LEVEL, *PMANDATORY_LEVEL;
typedef struct _TOKEN_APPCONTAINER_INFORMATION {
    PSID TokenAppContainer;
} TOKEN_APPCONTAINER_INFORMATION, *PTOKEN_APPCONTAINER_INFORMATION;
typedef struct _TOKEN_SID_INFORMATION {
    PSID Sid;
} TOKEN_SID_INFORMATION, *PTOKEN_SID_INFORMATION;
typedef struct _TOKEN_BNO_ISOLATION_INFORMATION {
    PWSTR IsolationPrefix;
    BOOLEAN IsolationEnabled;
} TOKEN_BNO_ISOLATION_INFORMATION, *PTOKEN_BNO_ISOLATION_INFORMATION;
typedef struct _CLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE {
    ULONG64 Version;
    PWSTR Name;
} CLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE, *PCLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE;
typedef struct _CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE {
    PVOID pValue;
    ULONG ValueLength;
} CLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE,
    *PCLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE;






typedef struct _CLAIM_SECURITY_ATTRIBUTE_V1 {
    PWSTR Name;
    USHORT ValueType;
    USHORT Reserved;
    ULONG Flags;
    ULONG ValueCount;
    union {
        PLONG64 pInt64;
        PULONG64 pUint64;
        PWSTR *ppString;
        PCLAIM_SECURITY_ATTRIBUTE_FQBN_VALUE pFqbn;
        PCLAIM_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE pOctetString;
    } Values;
} CLAIM_SECURITY_ATTRIBUTE_V1, *PCLAIM_SECURITY_ATTRIBUTE_V1;
typedef struct _CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1 {
    ULONG Name;
    USHORT ValueType;
    USHORT Reserved;
    ULONG Flags;
    ULONG ValueCount;
    union {
        ULONG pInt64[ANYSIZE_ARRAY];
        ULONG pUint64[ANYSIZE_ARRAY];
        ULONG ppString[ANYSIZE_ARRAY];
        ULONG pFqbn[ANYSIZE_ARRAY];
        ULONG pOctetString[ANYSIZE_ARRAY];
    } Values;
} CLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1, *PCLAIM_SECURITY_ATTRIBUTE_RELATIVE_V1;
    CLAIM_SECURITY_ATTRIBUTES_INFORMATION_VERSION_V1
typedef struct _CLAIM_SECURITY_ATTRIBUTES_INFORMATION {
    USHORT Version;
    USHORT Reserved;
    ULONG AttributeCount;
    union {
        PCLAIM_SECURITY_ATTRIBUTE_V1 pAttributeV1;
    } Attribute;
} CLAIM_SECURITY_ATTRIBUTES_INFORMATION, *PCLAIM_SECURITY_ATTRIBUTES_INFORMATION;
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenThreadToken(
    _In_ HANDLE ThreadHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ BOOLEAN OpenAsSelf,
    _Out_ PHANDLE TokenHandle
    );
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenThreadTokenEx(
    _In_ HANDLE ThreadHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ BOOLEAN OpenAsSelf,
    _In_ ULONG HandleAttributes,
    _Out_ PHANDLE TokenHandle
    );
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenProcessToken(
    _In_ HANDLE ProcessHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PHANDLE TokenHandle
    );
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenProcessTokenEx(
    _In_ HANDLE ProcessHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG HandleAttributes,
    _Out_ PHANDLE TokenHandle
    );
_Must_inspect_result_
NTSTATUS
NTAPI
NtOpenJobObjectToken(
    _In_ HANDLE JobHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _Out_ PHANDLE TokenHandle
    );
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtDuplicateToken(
    _In_ HANDLE ExistingTokenHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ BOOLEAN EffectiveOnly,
    _In_ TOKEN_TYPE TokenType,
    _Out_ PHANDLE NewTokenHandle
    );
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtFilterToken (
    _In_ HANDLE ExistingTokenHandle,
    _In_ ULONG Flags,
    _In_opt_ PTOKEN_GROUPS SidsToDisable,
    _In_opt_ PTOKEN_PRIVILEGES PrivilegesToDelete,
    _In_opt_ PTOKEN_GROUPS RestrictedSids,
    _Out_ PHANDLE NewTokenHandle
    );
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtImpersonateAnonymousToken(
    _In_ HANDLE ThreadHandle
    );
_When_(TokenInformationClass == TokenAccessInformation,
       _At_(TokenInformationLength,
            _In_range_(>=, sizeof(TOKEN_ACCESS_INFORMATION))))
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryInformationToken (
    _In_ HANDLE TokenHandle,
    _In_ TOKEN_INFORMATION_CLASS TokenInformationClass,
    _Out_writes_bytes_to_opt_(TokenInformationLength, *ReturnLength) PVOID TokenInformation,
    _In_ ULONG TokenInformationLength,
    _Out_ PULONG ReturnLength
    );
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetInformationToken (
    _In_ HANDLE TokenHandle,
    _In_ TOKEN_INFORMATION_CLASS TokenInformationClass,
    _In_reads_bytes_(TokenInformationLength) PVOID TokenInformation,
    _In_ ULONG TokenInformationLength
    );
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtAdjustPrivilegesToken (
    _In_ HANDLE TokenHandle,
    _In_ BOOLEAN DisableAllPrivileges,
    _In_opt_ PTOKEN_PRIVILEGES NewState,
    _In_ ULONG BufferLength,
    _Out_writes_bytes_to_opt_(BufferLength, *ReturnLength) PTOKEN_PRIVILEGES PreviousState,
    _Out_ _When_(PreviousState == NULL, _Out_opt_) PULONG ReturnLength
    );
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtAdjustGroupsToken (
    _In_ HANDLE TokenHandle,
    _In_ BOOLEAN ResetToDefault,
    _In_opt_ PTOKEN_GROUPS NewState,
    _In_opt_ ULONG BufferLength,
    _Out_writes_bytes_to_opt_(BufferLength, *ReturnLength) PTOKEN_GROUPS PreviousState,
    _Out_ PULONG ReturnLength
    );
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtPrivilegeCheck (
    _In_ HANDLE ClientToken,
    _Inout_ PPRIVILEGE_SET RequiredPrivileges,
    _Out_ PBOOLEAN Result
    );
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtAccessCheckAndAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_ PUNICODE_STRING ObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ BOOLEAN ObjectCreation,
    _Out_ PACCESS_MASK GrantedAccess,
    _Out_ PNTSTATUS AccessStatus,
    _Out_ PBOOLEAN GenerateOnClose
    );
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtAccessCheckByTypeAndAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_ PUNICODE_STRING ObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSID PrincipalSelfSid,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ AUDIT_EVENT_TYPE AuditType,
    _In_ ULONG Flags,
    _In_reads_opt_(ObjectTypeListLength) POBJECT_TYPE_LIST ObjectTypeList,
    _In_ ULONG ObjectTypeListLength,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ BOOLEAN ObjectCreation,
    _Out_ PACCESS_MASK GrantedAccess,
    _Out_ PNTSTATUS AccessStatus,
    _Out_ PBOOLEAN GenerateOnClose
    );
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtAccessCheckByTypeResultListAndAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_ PUNICODE_STRING ObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSID PrincipalSelfSid,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ AUDIT_EVENT_TYPE AuditType,
    _In_ ULONG Flags,
    _In_reads_opt_(ObjectTypeListLength) POBJECT_TYPE_LIST ObjectTypeList,
    _In_ ULONG ObjectTypeListLength,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ BOOLEAN ObjectCreation,
    _Out_writes_(ObjectTypeListLength) PACCESS_MASK GrantedAccess,
    _Out_writes_(ObjectTypeListLength) PNTSTATUS AccessStatus,
    _Out_ PBOOLEAN GenerateOnClose
    );
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtAccessCheckByTypeResultListAndAuditAlarmByHandle (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ HANDLE ClientToken,
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_ PUNICODE_STRING ObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSID PrincipalSelfSid,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ AUDIT_EVENT_TYPE AuditType,
    _In_ ULONG Flags,
    _In_reads_opt_(ObjectTypeListLength) POBJECT_TYPE_LIST ObjectTypeList,
    _In_ ULONG ObjectTypeListLength,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ BOOLEAN ObjectCreation,
    _Out_writes_(ObjectTypeListLength) PACCESS_MASK GrantedAccess,
    _Out_writes_(ObjectTypeListLength) PNTSTATUS AccessStatus,
    _Out_ PBOOLEAN GenerateOnClose
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenObjectAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_ PUNICODE_STRING ObjectName,
    _In_opt_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ HANDLE ClientToken,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ACCESS_MASK GrantedAccess,
    _In_opt_ PPRIVILEGE_SET Privileges,
    _In_ BOOLEAN ObjectCreation,
    _In_ BOOLEAN AccessGranted,
    _Out_ PBOOLEAN GenerateOnClose
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtPrivilegeObjectAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ HANDLE ClientToken,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ PPRIVILEGE_SET Privileges,
    _In_ BOOLEAN AccessGranted
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtCloseObjectAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ BOOLEAN GenerateOnClose
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtDeleteObjectAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_opt_ PVOID HandleId,
    _In_ BOOLEAN GenerateOnClose
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtPrivilegedServiceAuditAlarm (
    _In_ PUNICODE_STRING SubsystemName,
    _In_ PUNICODE_STRING ServiceName,
    _In_ HANDLE ClientToken,
    _In_ PPRIVILEGE_SET Privileges,
    _In_ BOOLEAN AccessGranted
    );
typedef
_Function_class_(RTL_HEAP_COMMIT_ROUTINE)
_IRQL_requires_same_
NTSTATUS
NTAPI
RTL_HEAP_COMMIT_ROUTINE(
    _In_ PVOID Base,
    _Inout_ PVOID *CommitAddress,
    _Inout_ PSIZE_T CommitSize
    );
typedef RTL_HEAP_COMMIT_ROUTINE *PRTL_HEAP_COMMIT_ROUTINE;
typedef struct _RTL_HEAP_PARAMETERS {
    ULONG Length;
    SIZE_T SegmentReserve;
    SIZE_T SegmentCommit;
    SIZE_T DeCommitFreeBlockThreshold;
    SIZE_T DeCommitTotalFreeThreshold;
    SIZE_T MaximumAllocationSize;
    SIZE_T VirtualMemoryThreshold;
    SIZE_T InitialCommit;
    SIZE_T InitialReserve;
    PRTL_HEAP_COMMIT_ROUTINE CommitRoutine;
    SIZE_T Reserved[ 2 ];
} RTL_HEAP_PARAMETERS, *PRTL_HEAP_PARAMETERS;
typedef enum _RTL_MEMORY_TYPE {
    MemoryTypePaged,
    MemoryTypeNonPaged,
    MemoryTypeLargePage,
    MemoryTypeHugePage,
    MemoryTypeMax
} RTL_MEMORY_TYPE, *PRTL_MEMORY_TYPE;
typedef struct _RTL_SEGMENT_HEAP_MEMORY_SOURCE {
    ULONG Flags;
    ULONG MemoryTypeMask;
    ULONG NumaNode;
    HANDLE PartitionHandle;
    SIZE_T Reserved[2];
} RTL_SEGMENT_HEAP_MEMORY_SOURCE, *PRTL_SEGMENT_HEAP_MEMORY_SOURCE;
typedef struct _RTL_SEGMENT_HEAP_PARAMETERS {
    USHORT Version;
    USHORT Size;
    ULONG Flags;
    RTL_SEGMENT_HEAP_MEMORY_SOURCE MemorySource;
    SIZE_T Reserved[4];
} RTL_SEGMENT_HEAP_PARAMETERS, *PRTL_SEGMENT_HEAP_PARAMETERS;
typedef struct _RTL_HEAP_MEMORY_LIMIT_DATA {
    SIZE_T CommitLimitBytes;
    ULONG_PTR CommitLimitFailureCode;
    SIZE_T MaxAllocationSizeBytes;
    ULONG_PTR AllocationLimitFailureCode;
} RTL_HEAP_MEMORY_LIMIT_DATA, *PRTL_HEAP_MEMORY_LIMIT_DATA;
typedef struct _RTL_HEAP_MEMORY_LIMIT_INFO {
    ULONG Version;
    RTL_HEAP_MEMORY_LIMIT_DATA Data;
} RTL_HEAP_MEMORY_LIMIT_INFO, *PRTL_HEAP_MEMORY_LIMIT_INFO;
_Must_inspect_result_
NTSYSAPI
PVOID
NTAPI
RtlCreateHeap(
    _In_ ULONG Flags,
    _In_opt_ PVOID HeapBase,
    _In_opt_ SIZE_T ReserveSize,
    _In_opt_ SIZE_T CommitSize,
    _In_opt_ PVOID Lock,
    _In_opt_ PRTL_HEAP_PARAMETERS Parameters
    );













#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
FORCEINLINE
ULONG
HEAP_MAKE_TAG_FLAGS (
    _In_ ULONG TagBase,
    _In_ ULONG Tag
    )
{
    return ((ULONG)((TagBase) + ((Tag) << HEAP_TAG_SHIFT)));
}
#endif
#pragma endregion
NTSYSAPI
PVOID
NTAPI
RtlDestroyHeap(
    _In_ _Post_invalid_ PVOID HeapHandle
    );
NTSYSAPI
_Must_inspect_result_
_Ret_maybenull_
_Post_writable_byte_size_(Size)
PVOID
NTAPI
RtlAllocateHeap(
    _In_ PVOID HeapHandle,
    _In_opt_ ULONG Flags,
    _In_ SIZE_T Size
    );
_Success_(return != 0)
NTSYSAPI
LOGICAL
NTAPI
RtlFreeHeap(
    _In_ PVOID HeapHandle,
    _In_opt_ ULONG Flags,
    _Frees_ptr_opt_ PVOID BaseAddress
    );
_IRQL_requires_max_(APC_LEVEL)
_Ret_range_(<=, MAXLONG)
NTSYSAPI
ULONG
NTAPI
RtlRandom (
    _Inout_ PULONG Seed
    );
_IRQL_requires_max_(APC_LEVEL)
_Ret_range_(<=, MAXLONG)
NTSYSAPI
ULONG
NTAPI
RtlRandomEx (
    _Inout_ PULONG Seed
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlInitUnicodeStringEx(
    _Out_ PUNICODE_STRING DestinationString,
    _In_opt_z_ __drv_aliasesMem PCWSTR SourceString
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlInitAnsiStringEx(
    _Out_ PANSI_STRING DestinationString,
    _In_opt_z_ __drv_aliasesMem PCSZ SourceString
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlInitStringEx(
    _Out_ PSTRING DestinationString,
    _In_opt_z_ __drv_aliasesMem PCSZ SourceString
    );
_IRQL_requires_max_(APC_LEVEL)
_Success_(return != 0)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlCreateUnicodeString(
    _Out_ _At_(DestinationString->Buffer, __drv_allocatesMem(Mem))
        PUNICODE_STRING DestinationString,
    _In_z_ PCWSTR SourceString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlPrefixString(
    _In_ const STRING * String1,
    _In_ const STRING * String2,
    _In_ BOOLEAN CaseInSensitive
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlAppendStringToString (
    _Inout_ PSTRING Destination,
    _In_ const STRING * Source
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlOemStringToUnicodeString(
    _When_(AllocateDestinationString, _Out_ _At_(DestinationString->Buffer, __drv_allocatesMem(Mem)))
    _When_(!AllocateDestinationString, _Inout_)
        PUNICODE_STRING DestinationString,
    _In_ PCOEM_STRING SourceString,
    _In_ BOOLEAN AllocateDestinationString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
_When_(AllocateDestinationString, _At_(DestinationString->Buffer, _Post_notnull_ __drv_allocatesMem(Mem)))
NTSYSAPI
NTSTATUS
NTAPI
RtlUnicodeStringToOemString(
    _When_(AllocateDestinationString, _Out_)
    _When_(!AllocateDestinationString, _Inout_)
        POEM_STRING DestinationString,
    _In_ PCUNICODE_STRING SourceString,
    _In_ BOOLEAN AllocateDestinationString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlUpcaseUnicodeStringToOemString(
    _When_(AllocateDestinationString, _Out_ _At_(DestinationString->Buffer, __drv_allocatesMem(Mem)))
    _When_(!AllocateDestinationString, _Inout_)
        POEM_STRING DestinationString,
    _In_ PCUNICODE_STRING SourceString,
    _In_ BOOLEAN AllocateDestinationString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlOemStringToCountedUnicodeString(
    _When_(AllocateDestinationString, _Out_ _At_(DestinationString->Buffer, __drv_allocatesMem(Mem)))
    _When_(!AllocateDestinationString, _Inout_)
        PUNICODE_STRING DestinationString,
    _In_ PCOEM_STRING SourceString,
    _In_ BOOLEAN AllocateDestinationString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlUnicodeStringToCountedOemString(
    _When_(AllocateDestinationString, _Out_ _At_(DestinationString->Buffer, __drv_allocatesMem(Mem)))
    _When_(!AllocateDestinationString, _Inout_)
        POEM_STRING DestinationString,
    _In_ PCUNICODE_STRING SourceString,
    _In_ BOOLEAN AllocateDestinationString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlUpcaseUnicodeStringToCountedOemString(
    _When_(AllocateDestinationString, _Out_ _At_(DestinationString->Buffer, __drv_allocatesMem(Mem)))
    _When_(!AllocateDestinationString, _Inout_)
        POEM_STRING DestinationString,
    _In_ PCUNICODE_STRING SourceString,
    _In_ BOOLEAN AllocateDestinationString
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlValidateUnicodeString(
    _Reserved_ ULONG Flags,
    _In_ PCUNICODE_STRING String
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlDuplicateUnicodeString(
    _In_ ULONG Flags,
    _In_ PCUNICODE_STRING StringIn,
    _Out_ _At_(StringOut->Buffer, __drv_allocatesMem(Mem))
        PUNICODE_STRING StringOut
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_(AllocateDestinationString, _Must_inspect_result_)
NTSYSAPI
NTSTATUS
NTAPI
RtlDowncaseUnicodeString(
    _When_(AllocateDestinationString, _Out_ _At_(DestinationString->Buffer, __drv_allocatesMem(Mem)))
    _When_(!AllocateDestinationString, _Inout_)
        PUNICODE_STRING DestinationString,
    _In_ PCUNICODE_STRING SourceString,
    _In_ BOOLEAN AllocateDestinationString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlFreeOemString(
    _Inout_ _At_(OemString->Buffer, _Frees_ptr_opt_)
        POEM_STRING OemString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
ULONG
NTAPI
RtlxUnicodeStringToOemSize(
    _In_ PCUNICODE_STRING UnicodeString
    );


_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
ULONG
NTAPI
RtlxOemStringToUnicodeSize(
    _In_ PCOEM_STRING OemString
    );




_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlMultiByteToUnicodeN(
    _Out_writes_bytes_to_(MaxBytesInUnicodeString, *BytesInUnicodeString) PWCH UnicodeString,
    _In_ ULONG MaxBytesInUnicodeString,
    _Out_opt_ PULONG BytesInUnicodeString,
    _In_reads_bytes_(BytesInMultiByteString) const CHAR *MultiByteString,
    _In_ ULONG BytesInMultiByteString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlMultiByteToUnicodeSize(
    _Out_ PULONG BytesInUnicodeString,
    _In_reads_bytes_(BytesInMultiByteString) const CHAR *MultiByteString,
    _In_ ULONG BytesInMultiByteString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlUnicodeToMultiByteSize(
    _Out_ PULONG BytesInMultiByteString,
    _In_reads_bytes_(BytesInUnicodeString) PCWCH UnicodeString,
    _In_ ULONG BytesInUnicodeString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlUnicodeToMultiByteN(
    _Out_writes_bytes_to_(MaxBytesInMultiByteString, *BytesInMultiByteString) PCHAR MultiByteString,
    _In_ ULONG MaxBytesInMultiByteString,
    _Out_opt_ PULONG BytesInMultiByteString,
    _In_reads_bytes_(BytesInUnicodeString) PCWCH UnicodeString,
    _In_ ULONG BytesInUnicodeString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlUnicodeToUTF8N(
    _Out_writes_bytes_to_(UTF8StringMaxByteCount, *UTF8StringActualByteCount) PCHAR UTF8StringDestination,
    _In_ ULONG UTF8StringMaxByteCount,
    _Out_ PULONG UTF8StringActualByteCount,
    _In_reads_bytes_(UnicodeStringByteCount) PCWCH UnicodeStringSource,
    _In_ ULONG UnicodeStringByteCount
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlUTF8ToUnicodeN(
    _Out_writes_bytes_to_(UnicodeStringMaxByteCount, *UnicodeStringActualByteCount) PWSTR UnicodeStringDestination,
    _In_ ULONG UnicodeStringMaxByteCount,
    _Out_ PULONG UnicodeStringActualByteCount,
    _In_reads_bytes_(UTF8StringByteCount) PCCH UTF8StringSource,
    _In_ ULONG UTF8StringByteCount
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlUpcaseUnicodeToMultiByteN(
    _Out_writes_bytes_to_(MaxBytesInMultiByteString, *BytesInMultiByteString) PCHAR MultiByteString,
    _In_ ULONG MaxBytesInMultiByteString,
    _Out_opt_ PULONG BytesInMultiByteString,
    _In_reads_bytes_(BytesInUnicodeString) PCWCH UnicodeString,
    _In_ ULONG BytesInUnicodeString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlOemToUnicodeN(
    _Out_writes_bytes_to_(MaxBytesInUnicodeString, *BytesInUnicodeString) PWCH UnicodeString,
    _In_ ULONG MaxBytesInUnicodeString,
    _Out_opt_ PULONG BytesInUnicodeString,
    _In_reads_bytes_(BytesInOemString) PCCH OemString,
    _In_ ULONG BytesInOemString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlUnicodeToOemN(
    _Out_writes_bytes_to_(MaxBytesInOemString, *BytesInOemString) PCHAR OemString,
    _In_ ULONG MaxBytesInOemString,
    _Out_opt_ PULONG BytesInOemString,
    _In_reads_bytes_(BytesInUnicodeString) PCWCH UnicodeString,
    _In_ ULONG BytesInUnicodeString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlUpcaseUnicodeToOemN(
    _Out_writes_bytes_to_(MaxBytesInOemString, *BytesInOemString) PCHAR OemString,
    _In_ ULONG MaxBytesInOemString,
    _Out_opt_ PULONG BytesInOemString,
    _In_reads_bytes_(BytesInUnicodeString) PCWCH UnicodeString,
    _In_ ULONG BytesInUnicodeString
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlNormalizeString(
    _In_ ULONG NormForm,
    _In_ PCWSTR SourceString,
    _In_ LONG SourceStringLength,
    _Out_writes_to_(*DestinationStringLength, *DestinationStringLength) PWSTR DestinationString,
    _Inout_ PLONG DestinationStringLength
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlIsNormalizedString(
    _In_ ULONG NormForm,
    _In_ PCWSTR SourceString,
    _In_ LONG SourceStringLength,
    _Out_ PBOOLEAN Normalized
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlIdnToAscii(
    _In_ ULONG Flags,
    _In_ PCWSTR SourceString,
    _In_ LONG SourceStringLength,
    _Out_writes_to_(*DestinationStringLength, *DestinationStringLength) PWSTR DestinationString,
    _Inout_ PLONG DestinationStringLength
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlIdnToUnicode(
    _In_ ULONG Flags,
    _In_ PCWSTR SourceString,
    _In_ LONG SourceStringLength,
    _Out_writes_to_(*DestinationStringLength, *DestinationStringLength) PWSTR DestinationString,
    _Inout_ PLONG DestinationStringLength
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlIdnToNameprepUnicode(
    _In_ ULONG Flags,
    _In_ PCWSTR SourceString,
    _In_ LONG SourceStringLength,
    _Out_writes_to_(*DestinationStringLength, *DestinationStringLength) PWSTR DestinationString,
    _Inout_ PLONG DestinationStringLength
    );
typedef
_Function_class_(RTL_ALLOCATE_STRING_ROUTINE)
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_allocatesMem(Mem)
PVOID
NTAPI
RTL_ALLOCATE_STRING_ROUTINE (
    _In_ SIZE_T NumberOfBytes
    );
typedef RTL_ALLOCATE_STRING_ROUTINE *PRTL_ALLOCATE_STRING_ROUTINE;
typedef
_Function_class_(RTL_REALLOCATE_STRING_ROUTINE)
_IRQL_requires_max_(PASSIVE_LEVEL)
__drv_allocatesMem(Mem)
PVOID
NTAPI
RTL_REALLOCATE_STRING_ROUTINE(
    _In_ SIZE_T NumberOfBytes,
    _In_ __drv_freesMem(Mem) _Post_invalid_ PVOID Buffer
    );
typedef RTL_REALLOCATE_STRING_ROUTINE *PRTL_REALLOCATE_STRING_ROUTINE;
typedef
_Function_class_(RTL_FREE_STRING_ROUTINE)
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
NTAPI
RTL_FREE_STRING_ROUTINE (
    _In_ __drv_freesMem(Mem) _Post_invalid_ PVOID Buffer
    );
typedef RTL_FREE_STRING_ROUTINE *PRTL_FREE_STRING_ROUTINE;
extern const PRTL_ALLOCATE_STRING_ROUTINE RtlAllocateStringRoutine;
extern const PRTL_FREE_STRING_ROUTINE RtlFreeStringRoutine;
extern const PRTL_REALLOCATE_STRING_ROUTINE RtlReallocateStringRoutine;
typedef struct _GENERATE_NAME_CONTEXT {
    USHORT Checksum;
    BOOLEAN ChecksumInserted;
    _Field_range_(<=, 8) UCHAR NameLength;
    WCHAR NameBuffer[8];
    _Field_range_(<=, 4) ULONG ExtensionLength;
    WCHAR ExtensionBuffer[4];
    ULONG LastIndexValue;
} GENERATE_NAME_CONTEXT;
typedef GENERATE_NAME_CONTEXT *PGENERATE_NAME_CONTEXT;
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlGenerate8dot3Name (
    _In_ PCUNICODE_STRING Name,
    _In_ BOOLEAN AllowExtendedCharacters,
    _Inout_ PGENERATE_NAME_CONTEXT Context,
    _Inout_ PUNICODE_STRING Name8dot3
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlIsNameLegalDOS8Dot3 (
    _In_ PCUNICODE_STRING Name,
    _Inout_opt_ POEM_STRING OemName,
    _Out_opt_ PBOOLEAN NameContainsSpaces
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlIsValidOemCharacter (
    _Inout_ PWCHAR Char
    );
typedef struct _PREFIX_TABLE_ENTRY {
    CSHORT NodeTypeCode;
    CSHORT NameLength;
    struct _PREFIX_TABLE_ENTRY *NextPrefixTree;
    RTL_SPLAY_LINKS Links;
    PSTRING Prefix;
} PREFIX_TABLE_ENTRY;
typedef PREFIX_TABLE_ENTRY *PPREFIX_TABLE_ENTRY;
typedef struct _PREFIX_TABLE {
    CSHORT NodeTypeCode;
    CSHORT NameLength;
    PPREFIX_TABLE_ENTRY NextPrefixTree;
} PREFIX_TABLE;
typedef PREFIX_TABLE *PPREFIX_TABLE;
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
VOID
NTAPI
PfxInitialize (
    _Out_ PPREFIX_TABLE PrefixTable
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
BOOLEAN
NTAPI
PfxInsertPrefix (
    _In_ PPREFIX_TABLE PrefixTable,
    _In_ __drv_aliasesMem PSTRING Prefix,
    _Out_ PPREFIX_TABLE_ENTRY PrefixTableEntry
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
VOID
NTAPI
PfxRemovePrefix (
    _In_ PPREFIX_TABLE PrefixTable,
    _In_ PPREFIX_TABLE_ENTRY PrefixTableEntry
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
PPREFIX_TABLE_ENTRY
NTAPI
PfxFindPrefix (
    _In_ PPREFIX_TABLE PrefixTable,
    _In_ PSTRING FullName
    );
typedef struct _UNICODE_PREFIX_TABLE_ENTRY {
    CSHORT NodeTypeCode;
    CSHORT NameLength;
    struct _UNICODE_PREFIX_TABLE_ENTRY *NextPrefixTree;
    struct _UNICODE_PREFIX_TABLE_ENTRY *CaseMatch;
    RTL_SPLAY_LINKS Links;
    PUNICODE_STRING Prefix;
} UNICODE_PREFIX_TABLE_ENTRY;
typedef UNICODE_PREFIX_TABLE_ENTRY *PUNICODE_PREFIX_TABLE_ENTRY;
typedef struct _UNICODE_PREFIX_TABLE {
    CSHORT NodeTypeCode;
    CSHORT NameLength;
    PUNICODE_PREFIX_TABLE_ENTRY NextPrefixTree;
    PUNICODE_PREFIX_TABLE_ENTRY LastNextEntry;
} UNICODE_PREFIX_TABLE;
typedef UNICODE_PREFIX_TABLE *PUNICODE_PREFIX_TABLE;
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlInitializeUnicodePrefix (
    _Out_ PUNICODE_PREFIX_TABLE PrefixTable
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
BOOLEAN
NTAPI
RtlInsertUnicodePrefix (
    _In_ PUNICODE_PREFIX_TABLE PrefixTable,
    _In_ __drv_aliasesMem PUNICODE_STRING Prefix,
    _Out_ PUNICODE_PREFIX_TABLE_ENTRY PrefixTableEntry
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlRemoveUnicodePrefix (
    _In_ PUNICODE_PREFIX_TABLE PrefixTable,
    _In_ PUNICODE_PREFIX_TABLE_ENTRY PrefixTableEntry
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
PUNICODE_PREFIX_TABLE_ENTRY
NTAPI
RtlFindUnicodePrefix (
    _In_ PUNICODE_PREFIX_TABLE PrefixTable,
    _In_ PCUNICODE_STRING FullName,
    _In_ ULONG CaseInsensitiveIndex
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
PUNICODE_PREFIX_TABLE_ENTRY
NTAPI
RtlNextUnicodePrefix (
    _In_ PUNICODE_PREFIX_TABLE PrefixTable,
    _In_ BOOLEAN Restart
    );
                                          COMPRESSION_ENGINE_MASK)
typedef struct _COMPRESSED_DATA_INFO {
    USHORT CompressionFormatAndEngine;
    UCHAR CompressionUnitShift;
    UCHAR ChunkShift;
    UCHAR ClusterShift;
    UCHAR Reserved;
    USHORT NumberOfChunks;
    ULONG CompressedChunkSizes[ANYSIZE_ARRAY];
} COMPRESSED_DATA_INFO;
typedef COMPRESSED_DATA_INFO *PCOMPRESSED_DATA_INFO;
NT_RTL_COMPRESS_API
NTSTATUS
NTAPI
RtlGetCompressionWorkSpaceSize (
    _In_ USHORT CompressionFormatAndEngine,
    _Out_ PULONG CompressBufferWorkSpaceSize,
    _Out_ PULONG CompressFragmentWorkSpaceSize
    );
NT_RTL_COMPRESS_API
NTSTATUS
NTAPI
RtlCompressBuffer (
    _In_ USHORT CompressionFormatAndEngine,
    _In_reads_bytes_(UncompressedBufferSize) PUCHAR UncompressedBuffer,
    _In_ ULONG UncompressedBufferSize,
    _Out_writes_bytes_to_(CompressedBufferSize, *FinalCompressedSize) PUCHAR CompressedBuffer,
    _In_ ULONG CompressedBufferSize,
    _In_ ULONG UncompressedChunkSize,
    _Out_ PULONG FinalCompressedSize,
    _In_ PVOID WorkSpace
    );
_IRQL_requires_max_(APC_LEVEL)
NT_RTL_COMPRESS_API
NTSTATUS
NTAPI
RtlDecompressBuffer (
    _In_ USHORT CompressionFormat,
    _Out_writes_bytes_to_(UncompressedBufferSize, *FinalUncompressedSize) PUCHAR UncompressedBuffer,
    _In_ ULONG UncompressedBufferSize,
    _In_reads_bytes_(CompressedBufferSize) PUCHAR CompressedBuffer,
    _In_ ULONG CompressedBufferSize,
    _Out_ PULONG FinalUncompressedSize
    );
_IRQL_requires_max_(APC_LEVEL)
NT_RTL_COMPRESS_API
NTSTATUS
NTAPI
RtlDecompressBufferEx (
    _In_ USHORT CompressionFormat,
    _Out_writes_bytes_to_(UncompressedBufferSize, *FinalUncompressedSize) PUCHAR UncompressedBuffer,
    _In_ ULONG UncompressedBufferSize,
    _In_reads_bytes_(CompressedBufferSize) PUCHAR CompressedBuffer,
    _In_ ULONG CompressedBufferSize,
    _Out_ PULONG FinalUncompressedSize,
    _In_opt_ PVOID WorkSpace
    );
_IRQL_requires_max_(APC_LEVEL)
NT_RTL_COMPRESS_API
NTSTATUS
NTAPI
RtlDecompressBufferEx2 (
    _In_ USHORT CompressionFormat,
    _Out_writes_bytes_to_(UncompressedBufferSize, *FinalUncompressedSize) PUCHAR UncompressedBuffer,
    _In_ ULONG UncompressedBufferSize,
    _In_reads_bytes_(CompressedBufferSize) PUCHAR CompressedBuffer,
    _In_ ULONG CompressedBufferSize,
    _In_ ULONG UncompressedChunkSize,
    _Out_ PULONG FinalUncompressedSize,
    _In_opt_ PVOID WorkSpace
    );
_IRQL_requires_max_(APC_LEVEL)
NT_RTL_COMPRESS_API
NTSTATUS
NTAPI
RtlDecompressFragment (
    _In_ USHORT CompressionFormat,
    _Out_writes_bytes_to_(UncompressedFragmentSize, *FinalUncompressedSize) PUCHAR UncompressedFragment,
    _In_ ULONG UncompressedFragmentSize,
    _In_reads_bytes_(CompressedBufferSize) PUCHAR CompressedBuffer,
    _In_ ULONG CompressedBufferSize,
    _In_range_(<, CompressedBufferSize) ULONG FragmentOffset,
    _Out_ PULONG FinalUncompressedSize,
    _In_ PVOID WorkSpace
    );
_IRQL_requires_max_(APC_LEVEL)
NT_RTL_COMPRESS_API
NTSTATUS
NTAPI
RtlDecompressFragmentEx (
    _In_ USHORT CompressionFormat,
    _Out_writes_bytes_to_(UncompressedFragmentSize, *FinalUncompressedSize) PUCHAR UncompressedFragment,
    _In_ ULONG UncompressedFragmentSize,
    _In_reads_bytes_(CompressedBufferSize) PUCHAR CompressedBuffer,
    _In_ ULONG CompressedBufferSize,
    _In_range_(<, CompressedBufferSize) ULONG FragmentOffset,
    _In_ ULONG UncompressedChunkSize,
    _Out_ PULONG FinalUncompressedSize,
    _In_ PVOID WorkSpace
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlDescribeChunk (
    _In_ USHORT CompressionFormat,
    _Inout_ PUCHAR *CompressedBuffer,
    _In_ PUCHAR EndOfCompressedBufferPlus1,
    _Out_ PUCHAR *ChunkBuffer,
    _Out_ PULONG ChunkSize
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlReserveChunk (
    _In_ USHORT CompressionFormat,
    _Inout_ PUCHAR *CompressedBuffer,
    _In_ PUCHAR EndOfCompressedBufferPlus1,
    _Out_ PUCHAR *ChunkBuffer,
    _In_ ULONG ChunkSize
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlDecompressChunks (
    _Out_writes_bytes_(UncompressedBufferSize) PUCHAR UncompressedBuffer,
    _In_ ULONG UncompressedBufferSize,
    _In_reads_bytes_(CompressedBufferSize) PUCHAR CompressedBuffer,
    _In_ ULONG CompressedBufferSize,
    _In_reads_bytes_(CompressedTailSize) PUCHAR CompressedTail,
    _In_ ULONG CompressedTailSize,
    _In_ PCOMPRESSED_DATA_INFO CompressedDataInfo
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlCompressChunks (
    _In_reads_bytes_(UncompressedBufferSize) PUCHAR UncompressedBuffer,
    _In_ ULONG UncompressedBufferSize,
    _Out_writes_bytes_(CompressedBufferSize) PUCHAR CompressedBuffer,
    _In_range_(>=, (UncompressedBufferSize - (UncompressedBufferSize / 16))) ULONG CompressedBufferSize,
    _Inout_updates_bytes_(CompressedDataInfoLength) PCOMPRESSED_DATA_INFO CompressedDataInfo,
    _In_range_(>, sizeof(COMPRESSED_DATA_INFO)) ULONG CompressedDataInfoLength,
    _In_ PVOID WorkSpace
    );
_Must_inspect_result_
NTSYSAPI
SIZE_T
NTAPI
RtlCompareMemoryUlong (
    _In_reads_bytes_(Length) PVOID Source,
    _In_ SIZE_T Length,
    _In_ ULONG Pattern
    );
NTSYSAPI
VOID
NTAPI
RtlFillMemoryUlong (
    _Out_writes_bytes_all_(Length) PVOID Destination,
    _In_ SIZE_T Length,
    _In_ ULONG Pattern
   );
NTSYSAPI
VOID
NTAPI
RtlFillMemoryUlonglong (
   _Out_writes_bytes_all_(Length) PVOID Destination,
   _In_ SIZE_T Length,
   _In_ ULONGLONG Pattern
   );
_Success_(return != 0)
NTSYSAPI
BOOLEAN
NTAPI
RtlTimeToSecondsSince1980 (
    _In_ PLARGE_INTEGER Time,
    _Out_ PULONG ElapsedSeconds
    );
NTSYSAPI
VOID
NTAPI
RtlSecondsSince1980ToTime (
    _In_ ULONG ElapsedSeconds,
    _Out_ PLARGE_INTEGER Time
    );
_Success_(return != 0)
NTSYSAPI
BOOLEAN
NTAPI
RtlTimeToSecondsSince1970 (
    _In_ PLARGE_INTEGER Time,
    _Out_ PULONG ElapsedSeconds
    );
NTSYSAPI
VOID
NTAPI
RtlSecondsSince1970ToTime (
    _In_ ULONG ElapsedSeconds,
    _Out_ PLARGE_INTEGER Time
    );
_IRQL_requires_max_(APC_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlValidSid (
    _In_ PSID Sid
    );
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlEqualSid (
    _In_ PSID Sid1,
    _In_ PSID Sid2
    );
_IRQL_requires_max_(APC_LEVEL)
_Must_inspect_result_
NTSYSAPI
BOOLEAN
NTAPI
RtlEqualPrefixSid (
    _In_ PSID Sid1,
    _In_ PSID Sid2
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
ULONG
NTAPI
RtlLengthRequiredSid (
    _In_ ULONG SubAuthorityCount
    );
NTSYSAPI
PVOID
NTAPI
RtlFreeSid(
    _In_ _Post_invalid_ PSID Sid
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlAllocateAndInitializeSid(
    _In_ PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
    _In_ UCHAR SubAuthorityCount,
    _In_ ULONG SubAuthority0,
    _In_ ULONG SubAuthority1,
    _In_ ULONG SubAuthority2,
    _In_ ULONG SubAuthority3,
    _In_ ULONG SubAuthority4,
    _In_ ULONG SubAuthority5,
    _In_ ULONG SubAuthority6,
    _In_ ULONG SubAuthority7,
    _Outptr_ PSID *Sid
    );
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
RtlAllocateAndInitializeSidEx(
    _In_ PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
    _In_ UCHAR SubAuthorityCount,
    _In_reads_(SubAuthorityCount) PULONG SubAuthorities,
    _Outptr_ PSID *Sid
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlInitializeSid (
    _Out_ PSID Sid,
    _In_ PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
    _In_ UCHAR SubAuthorityCount
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlInitializeSidEx (
    _Out_writes_bytes_(SECURITY_SID_SIZE(SubAuthorityCount)) PSID Sid,
    _In_ PSID_IDENTIFIER_AUTHORITY IdentifierAuthority,
    _In_ UCHAR SubAuthorityCount,
    ...
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
PSID_IDENTIFIER_AUTHORITY
NTAPI
RtlIdentifierAuthoritySid (
    _In_ PSID Sid
    );
NTSYSAPI
PULONG
NTAPI
RtlSubAuthoritySid (
    _In_ PSID Sid,
    _In_ ULONG SubAuthority
    );
NTSYSAPI
PUCHAR
NTAPI
RtlSubAuthorityCountSid (
    _In_ PSID Sid
    );
NTSYSAPI
_Post_satisfies_(return >= 8 && return <= SECURITY_MAX_SID_SIZE)
ULONG
NTAPI
RtlLengthSid (
    _In_ PSID Sid
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlCopySid (
    _In_ ULONG DestinationSidLength,
    _Out_writes_bytes_(DestinationSidLength) PSID DestinationSid,
    _In_ PSID SourceSid
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlCreateServiceSid(
    _In_ PUNICODE_STRING ServiceName,
    _Out_writes_bytes_opt_(*ServiceSidLength) PSID ServiceSid,
    _Inout_ PULONG ServiceSidLength
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlGetSaclSecurityDescriptor (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _Out_ PBOOLEAN SaclPresent,
    _Out_ PACL *Sacl,
    _Out_ PBOOLEAN SaclDefaulted
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlReplaceSidInSd(
    _Inout_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ PSID OldSid,
    _In_ PSID NewSid,
    _Out_ ULONG *NumChanges
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlCreateVirtualAccountSid (
    _In_ PCUNICODE_STRING Name,
    _In_ ULONG BaseSubAuthority,
    _Out_writes_bytes_(*SidLength) PSID Sid,
    _Inout_ PULONG SidLength
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlConvertSidToUnicodeString(
    _Inout_ PUNICODE_STRING UnicodeString,
    _In_ PSID Sid,
    _In_ BOOLEAN AllocateDestinationString
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlCopyLuid (
    _Out_ PLUID DestinationLuid,
    _In_ PLUID SourceLuid
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlCreateAcl (
    _Out_writes_bytes_(AclLength) PACL Acl,
    _In_ ULONG AclLength,
    _In_ ULONG AclRevision
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlAddAce (
    _Inout_ PACL Acl,
    _In_ ULONG AceRevision,
    _In_ ULONG StartingAceIndex,
    _In_reads_bytes_(AceListLength) PVOID AceList,
    _In_ ULONG AceListLength
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlDeleteAce (
    _Inout_ PACL Acl,
    _In_ ULONG AceIndex
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlGetAce (
    _In_ PACL Acl,
    _In_ ULONG AceIndex,
    _Outptr_ PVOID *Ace
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlAddAccessAllowedAce (
    _Inout_ PACL Acl,
    _In_ ULONG AceRevision,
    _In_ ACCESS_MASK AccessMask,
    _In_ PSID Sid
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlAddAccessAllowedAceEx (
    _Inout_ PACL Acl,
    _In_ ULONG AceRevision,
    _In_ ULONG AceFlags,
    _In_ ACCESS_MASK AccessMask,
    _In_ PSID Sid
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlCreateSecurityDescriptorRelative (
    _Out_ PISECURITY_DESCRIPTOR_RELATIVE SecurityDescriptor,
    _In_ ULONG Revision
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlGetDaclSecurityDescriptor (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _Out_ PBOOLEAN DaclPresent,
    _Outptr_result_maybenull_ PACL *Dacl,
    _Pre_ _Writable_elements_(1)
    _When_(!(*DaclPresent), _Post_invalid_)
    _When_((*DaclPresent), _Post_valid_)
    PBOOLEAN DaclDefaulted
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlSetOwnerSecurityDescriptor (
    _Inout_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSID Owner,
    _In_ BOOLEAN OwnerDefaulted
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlSetGroupSecurityDescriptor (
    _Inout_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSID Group,
    _In_ BOOLEAN GroupDefaulted
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlGetGroupSecurityDescriptor (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _Outptr_result_maybenull_ PSID *Group,
    _Pre_ _Notnull_ _Pre_ _Writable_elements_(1)
    _When_(*Group == NULL, _Post_invalid_)
    _When_(*Group != NULL, _Post_valid_)
    PBOOLEAN GroupDefaulted
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlAbsoluteToSelfRelativeSD (
    _In_ PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
    _Out_writes_bytes_to_opt_(*BufferLength, *BufferLength) PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
    _Inout_ PULONG BufferLength
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlSelfRelativeToAbsoluteSD (
    _In_ PSECURITY_DESCRIPTOR SelfRelativeSecurityDescriptor,
    _Out_writes_bytes_to_opt_(*AbsoluteSecurityDescriptorSize, *AbsoluteSecurityDescriptorSize) PSECURITY_DESCRIPTOR AbsoluteSecurityDescriptor,
    _Inout_ PULONG AbsoluteSecurityDescriptorSize,
    _Out_writes_bytes_to_opt_(*DaclSize, *DaclSize) PACL Dacl,
    _Inout_ PULONG DaclSize,
    _Out_writes_bytes_to_opt_(*SaclSize, *SaclSize) PACL Sacl,
    _Inout_ PULONG SaclSize,
    _Out_writes_bytes_to_opt_(*OwnerSize, *OwnerSize) PSID Owner,
    _Inout_ PULONG OwnerSize,
    _Out_writes_bytes_to_opt_(*PrimaryGroupSize, *PrimaryGroupSize) PSID PrimaryGroup,
    _Inout_ PULONG PrimaryGroupSize
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlGetOwnerSecurityDescriptor (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _Outptr_result_maybenull_ PSID *Owner,
    _When_(*Owner == NULL, _Post_invalid_)
    _When_(*Owner != NULL, _Post_valid_)
    _Pre_ _Notnull_ _Pre_ _Writable_elements_(1) PBOOLEAN OwnerDefaulted
    );
_IRQL_requires_max_(APC_LEVEL)
_When_(Status < 0, _Out_range_(>, 0))
_When_(Status >= 0, _Out_range_(==, 0))
NTSYSAPI
ULONG
NTAPI
RtlNtStatusToDosError (
   _In_ NTSTATUS Status
   );
_When_(Status < 0, _Out_range_(>, 0))
_When_(Status >= 0, _Out_range_(==, 0))
NTSYSAPI
ULONG
NTAPI
RtlNtStatusToDosErrorNoTeb (
   _In_ NTSTATUS Status
   );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlCustomCPToUnicodeN(
    _In_ PCPTABLEINFO CustomCP,
    _Out_writes_bytes_to_(MaxBytesInUnicodeString, *BytesInUnicodeString) PWCH UnicodeString,
    _In_ ULONG MaxBytesInUnicodeString,
    _Out_opt_ PULONG BytesInUnicodeString,
    _In_reads_bytes_(BytesInCustomCPString) PCH CustomCPString,
    _In_ ULONG BytesInCustomCPString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlUnicodeToCustomCPN(
    _In_ PCPTABLEINFO CustomCP,
    _Out_writes_bytes_to_(MaxBytesInCustomCPString, *BytesInCustomCPString) PCH CustomCPString,
    _In_ ULONG MaxBytesInCustomCPString,
    _Out_opt_ PULONG BytesInCustomCPString,
    _In_reads_bytes_(BytesInUnicodeString) PWCH UnicodeString,
    _In_ ULONG BytesInUnicodeString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlUpcaseUnicodeToCustomCPN(
    _In_ PCPTABLEINFO CustomCP,
    _Out_writes_bytes_to_(MaxBytesInCustomCPString, *BytesInCustomCPString) PCH CustomCPString,
    _In_ ULONG MaxBytesInCustomCPString,
    _Out_opt_ PULONG BytesInCustomCPString,
    _In_reads_bytes_(BytesInUnicodeString) PWCH UnicodeString,
    _In_ ULONG BytesInUnicodeString
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
VOID
NTAPI
RtlInitCodePageTable(
    _In_reads_z_(2) PUSHORT TableBase,
    _Inout_ PCPTABLEINFO CodePageTable
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
RtlCreateSystemVolumeInformationFolder(
    _In_ PCUNICODE_STRING VolumeRootPath
    );
NTSYSAPI
LONG
NTAPI
RtlCompareAltitudes(
    _In_ PCUNICODE_STRING Altitude1,
    _In_ PCUNICODE_STRING Altitude2
    );
NTSYSAPI
BOOLEAN
NTAPI
RtlIsNonEmptyDirectoryReparsePointAllowed(
    _In_ ULONG ReparseTag
    );
NTSYSAPI
BOOLEAN
NTAPI
RtlIsCloudFilesPlaceholder(
    _In_ ULONG FileAttributes,
    _In_ ULONG ReparseTag
    );
NTSYSAPI
BOOLEAN
NTAPI
RtlIsPartialPlaceholder(
    _In_ ULONG FileAttributes,
    _In_ ULONG ReparseTag
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlIsPartialPlaceholderFileHandle(
    _In_ HANDLE FileHandle,
    _Out_ PBOOLEAN IsPartialPlaceholder
    );
NTSYSAPI
NTSTATUS
NTAPI
RtlIsPartialPlaceholderFileInfo(
    _In_ CONST VOID *InfoBuffer,
    _In_ FILE_INFORMATION_CLASS InfoClass,
    _Out_ PBOOLEAN IsPartialPlaceholder
    );
NTSYSAPI
CHAR
NTAPI
RtlQueryThreadPlaceholderCompatibilityMode(
    VOID
    );
NTSYSAPI
CHAR
NTAPI
RtlSetThreadPlaceholderCompatibilityMode(
    _In_ CHAR Mode
    );
NTSYSAPI
CHAR
NTAPI
RtlQueryProcessPlaceholderCompatibilityMode(
    VOID
    );
NTSYSAPI
CHAR
NTAPI
RtlSetProcessPlaceholderCompatibilityMode(
    _In_ CHAR Mode
    );
#pragma region Application or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion


__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetInformationThread (
    _In_ HANDLE ThreadHandle,
    _In_ THREADINFOCLASS ThreadInformationClass,
    _When_((ThreadInformationClass != ThreadManageWritesToExecutableMemory),
           _In_reads_bytes_(ThreadInformationLength))
    _When_((ThreadInformationClass == ThreadManageWritesToExecutableMemory),
           _Inout_updates_(ThreadInformationLength))
    PVOID ThreadInformation,
    _In_ ULONG ThreadInformationLength
    );
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
NTSTATUS
NTAPI
LsaFreeReturnBuffer (
    _In_ PVOID Buffer
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
typedef struct _MSV1_0_LM20_CHALLENGE_REQUEST {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
} MSV1_0_LM20_CHALLENGE_REQUEST, *PMSV1_0_LM20_CHALLENGE_REQUEST;
typedef struct _MSV1_0_LM20_CHALLENGE_RESPONSE {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    UCHAR ChallengeToClient[MSV1_0_CHALLENGE_LENGTH];
} MSV1_0_LM20_CHALLENGE_RESPONSE, *PMSV1_0_LM20_CHALLENGE_RESPONSE;
typedef struct _MSV1_0_GETCHALLENRESP_REQUEST_V1 {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG ParameterControl;
    LUID LogonId;
    UNICODE_STRING Password;
    UCHAR ChallengeToClient[MSV1_0_CHALLENGE_LENGTH];
} MSV1_0_GETCHALLENRESP_REQUEST_V1, *PMSV1_0_GETCHALLENRESP_REQUEST_V1;
typedef struct _MSV1_0_GETCHALLENRESP_REQUEST {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG ParameterControl;
    LUID LogonId;
    UNICODE_STRING Password;
    UCHAR ChallengeToClient[MSV1_0_CHALLENGE_LENGTH];
    UNICODE_STRING UserName;
    UNICODE_STRING LogonDomainName;
    UNICODE_STRING ServerName;
} MSV1_0_GETCHALLENRESP_REQUEST, *PMSV1_0_GETCHALLENRESP_REQUEST;
typedef struct _MSV1_0_GETCHALLENRESP_RESPONSE {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    STRING CaseSensitiveChallengeResponse;
    STRING CaseInsensitiveChallengeResponse;
    UNICODE_STRING UserName;
    UNICODE_STRING LogonDomainName;
    UCHAR UserSessionKey[MSV1_0_USER_SESSION_KEY_LENGTH];
    UCHAR LanmanSessionKey[MSV1_0_LANMAN_SESSION_KEY_LENGTH];
} MSV1_0_GETCHALLENRESP_RESPONSE, *PMSV1_0_GETCHALLENRESP_RESPONSE;
typedef struct _MSV1_0_ENUMUSERS_REQUEST {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
} MSV1_0_ENUMUSERS_REQUEST, *PMSV1_0_ENUMUSERS_REQUEST;
typedef struct _MSV1_0_ENUMUSERS_RESPONSE {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    ULONG NumberOfLoggedOnUsers;
    PLUID LogonIds;
    PULONG EnumHandles;
} MSV1_0_ENUMUSERS_RESPONSE, *PMSV1_0_ENUMUSERS_RESPONSE;
typedef struct _MSV1_0_GETUSERINFO_REQUEST {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    LUID LogonId;
} MSV1_0_GETUSERINFO_REQUEST, *PMSV1_0_GETUSERINFO_REQUEST;
typedef struct _MSV1_0_GETUSERINFO_RESPONSE {
    MSV1_0_PROTOCOL_MESSAGE_TYPE MessageType;
    PSID UserSid;
    UNICODE_STRING UserName;
    UNICODE_STRING LogonDomainName;
    UNICODE_STRING LogonServer;
    SECURITY_LOGON_TYPE LogonType;
} MSV1_0_GETUSERINFO_RESPONSE, *PMSV1_0_GETUSERINFO_RESPONSE;
typedef struct _FILE_ID_128 {
    UCHAR Identifier[16];
} FILE_ID_128, *PFILE_ID_128;
































typedef struct _FILE_NOTIFY_INFORMATION {
    ULONG NextEntryOffset;
    ULONG Action;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_NOTIFY_INFORMATION, *PFILE_NOTIFY_INFORMATION;
typedef struct _FILE_NOTIFY_EXTENDED_INFORMATION {
    ULONG NextEntryOffset;
    ULONG Action;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastModificationTime;
    LARGE_INTEGER LastChangeTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER AllocatedLength;
    LARGE_INTEGER FileSize;
    ULONG FileAttributes;
    ULONG ReparsePointTag;
    LARGE_INTEGER FileId;
    LARGE_INTEGER ParentFileId;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_NOTIFY_EXTENDED_INFORMATION, *PFILE_NOTIFY_EXTENDED_INFORMATION;
typedef struct _FILE_DIRECTORY_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_DIRECTORY_INFORMATION, *PFILE_DIRECTORY_INFORMATION;
typedef struct _FILE_FULL_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    WCHAR FileName[1];
} FILE_FULL_DIR_INFORMATION, *PFILE_FULL_DIR_INFORMATION;
typedef struct _FILE_ID_FULL_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    LARGE_INTEGER FileId;
    WCHAR FileName[1];
} FILE_ID_FULL_DIR_INFORMATION, *PFILE_ID_FULL_DIR_INFORMATION;
typedef struct _FILE_BOTH_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    CCHAR ShortNameLength;
    WCHAR ShortName[12];
    WCHAR FileName[1];
} FILE_BOTH_DIR_INFORMATION, *PFILE_BOTH_DIR_INFORMATION;
typedef struct _FILE_ID_BOTH_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    CCHAR ShortNameLength;
    WCHAR ShortName[12];
    LARGE_INTEGER FileId;
    WCHAR FileName[1];
} FILE_ID_BOTH_DIR_INFORMATION, *PFILE_ID_BOTH_DIR_INFORMATION;
typedef struct _FILE_NAMES_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_NAMES_INFORMATION, *PFILE_NAMES_INFORMATION;
typedef struct _FILE_ID_GLOBAL_TX_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    LARGE_INTEGER FileId;
    GUID LockingTransactionId;
    ULONG TxInfoFlags;
    WCHAR FileName[1];
} FILE_ID_GLOBAL_TX_DIR_INFORMATION, *PFILE_ID_GLOBAL_TX_DIR_INFORMATION;
typedef struct _FILE_ID_EXTD_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    ULONG ReparsePointTag;
    FILE_ID_128 FileId;
    WCHAR FileName[1];
} FILE_ID_EXTD_DIR_INFORMATION, *PFILE_ID_EXTD_DIR_INFORMATION;
typedef struct _FILE_ID_EXTD_BOTH_DIR_INFORMATION {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER AllocationSize;
    ULONG FileAttributes;
    ULONG FileNameLength;
    ULONG EaSize;
    ULONG ReparsePointTag;
    FILE_ID_128 FileId;
    CCHAR ShortNameLength;
    WCHAR ShortName[12];
    WCHAR FileName[1];
} FILE_ID_EXTD_BOTH_DIR_INFORMATION, *PFILE_ID_EXTD_BOTH_DIR_INFORMATION;
typedef struct _FILE_OBJECTID_INFORMATION {
    LONGLONG FileReference;
    UCHAR ObjectId[16];
    union {
        struct {
            UCHAR BirthVolumeId[16];
            UCHAR BirthObjectId[16];
            UCHAR DomainId[16];
        } DUMMYSTRUCTNAME;
        UCHAR ExtendedInfo[48];
    } DUMMYUNIONNAME;
} FILE_OBJECTID_INFORMATION, *PFILE_OBJECTID_INFORMATION;
typedef struct _FILE_INTERNAL_INFORMATION {
    LARGE_INTEGER IndexNumber;
} FILE_INTERNAL_INFORMATION, *PFILE_INTERNAL_INFORMATION;
typedef struct _FILE_ID_INFORMATION {
    ULONGLONG VolumeSerialNumber;
    FILE_ID_128 FileId;
} FILE_ID_INFORMATION, *PFILE_ID_INFORMATION;
typedef struct _FILE_EA_INFORMATION {
    ULONG EaSize;
} FILE_EA_INFORMATION, *PFILE_EA_INFORMATION;
typedef struct _FILE_ACCESS_INFORMATION {
    ACCESS_MASK AccessFlags;
} FILE_ACCESS_INFORMATION, *PFILE_ACCESS_INFORMATION;
typedef struct _FILE_MODE_INFORMATION {
    ULONG Mode;
} FILE_MODE_INFORMATION, *PFILE_MODE_INFORMATION;
typedef struct _FILE_ALL_INFORMATION {
    FILE_BASIC_INFORMATION BasicInformation;
    FILE_STANDARD_INFORMATION StandardInformation;
    FILE_INTERNAL_INFORMATION InternalInformation;
    FILE_EA_INFORMATION EaInformation;
    FILE_ACCESS_INFORMATION AccessInformation;
    FILE_POSITION_INFORMATION PositionInformation;
    FILE_MODE_INFORMATION ModeInformation;
    FILE_ALIGNMENT_INFORMATION AlignmentInformation;
    FILE_NAME_INFORMATION NameInformation;
} FILE_ALL_INFORMATION, *PFILE_ALL_INFORMATION;
typedef struct _FILE_STAT_INFORMATION {
    LARGE_INTEGER FileId;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG FileAttributes;
    ULONG ReparseTag;
    ULONG NumberOfLinks;
    ACCESS_MASK EffectiveAccess;
} FILE_STAT_INFORMATION, *PFILE_STAT_INFORMATION;
typedef struct _FILE_STAT_LX_INFORMATION {
    LARGE_INTEGER FileId;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG FileAttributes;
    ULONG ReparseTag;
    ULONG NumberOfLinks;
    ACCESS_MASK EffectiveAccess;
    ULONG LxFlags;
    ULONG LxUid;
    ULONG LxGid;
    ULONG LxMode;
    ULONG LxDeviceIdMajor;
    ULONG LxDeviceIdMinor;
} FILE_STAT_LX_INFORMATION, *PFILE_STAT_LX_INFORMATION;
typedef struct _FILE_CASE_SENSITIVE_INFORMATION {
    ULONG Flags;
} FILE_CASE_SENSITIVE_INFORMATION, *PFILE_CASE_SENSITIVE_INFORMATION;
typedef struct _FILE_ALLOCATION_INFORMATION {
    LARGE_INTEGER AllocationSize;
} FILE_ALLOCATION_INFORMATION, *PFILE_ALLOCATION_INFORMATION;
typedef struct _FILE_COMPRESSION_INFORMATION {
    LARGE_INTEGER CompressedFileSize;
    USHORT CompressionFormat;
    UCHAR CompressionUnitShift;
    UCHAR ChunkShift;
    UCHAR ClusterShift;
    UCHAR Reserved[3];
} FILE_COMPRESSION_INFORMATION, *PFILE_COMPRESSION_INFORMATION;
#pragma warning( disable : 4121)
typedef struct _FILE_LINK_INFORMATION {
    union {
        BOOLEAN ReplaceIfExists;
        ULONG Flags;
    } DUMMYUNIONNAME;
    HANDLE RootDirectory;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_LINK_INFORMATION, *PFILE_LINK_INFORMATION;
#pragma warning( default : 4121 )
typedef struct _FILE_MOVE_CLUSTER_INFORMATION {
    ULONG ClusterCount;
    HANDLE RootDirectory;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_MOVE_CLUSTER_INFORMATION, *PFILE_MOVE_CLUSTER_INFORMATION;
#pragma warning( disable : 4121)
typedef struct _FILE_RENAME_INFORMATION {
    union {
        BOOLEAN ReplaceIfExists;
        ULONG Flags;
    } DUMMYUNIONNAME;
    HANDLE RootDirectory;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_RENAME_INFORMATION, *PFILE_RENAME_INFORMATION;
#pragma warning( default : 4121 )
typedef struct _FILE_STREAM_INFORMATION {
    ULONG NextEntryOffset;
    ULONG StreamNameLength;
    LARGE_INTEGER StreamSize;
    LARGE_INTEGER StreamAllocationSize;
    WCHAR StreamName[1];
} FILE_STREAM_INFORMATION, *PFILE_STREAM_INFORMATION;
typedef struct _FILE_TRACKING_INFORMATION {
    HANDLE DestinationFile;
    ULONG ObjectInformationLength;
    CHAR ObjectInformation[1];
} FILE_TRACKING_INFORMATION, *PFILE_TRACKING_INFORMATION;
typedef struct _FILE_COMPLETION_INFORMATION {
    HANDLE Port;
    PVOID Key;
} FILE_COMPLETION_INFORMATION, *PFILE_COMPLETION_INFORMATION;
typedef struct _FILE_PIPE_INFORMATION {
     ULONG ReadMode;
     ULONG CompletionMode;
} FILE_PIPE_INFORMATION, *PFILE_PIPE_INFORMATION;
typedef struct _FILE_PIPE_LOCAL_INFORMATION {
     ULONG NamedPipeType;
     ULONG NamedPipeConfiguration;
     ULONG MaximumInstances;
     ULONG CurrentInstances;
     ULONG InboundQuota;
     ULONG ReadDataAvailable;
     ULONG OutboundQuota;
     ULONG WriteQuotaAvailable;
     ULONG NamedPipeState;
     ULONG NamedPipeEnd;
} FILE_PIPE_LOCAL_INFORMATION, *PFILE_PIPE_LOCAL_INFORMATION;
typedef struct _FILE_PIPE_REMOTE_INFORMATION {
     LARGE_INTEGER CollectDataTime;
     ULONG MaximumCollectionCount;
} FILE_PIPE_REMOTE_INFORMATION, *PFILE_PIPE_REMOTE_INFORMATION;
typedef struct _FILE_MAILSLOT_QUERY_INFORMATION {
    ULONG MaximumMessageSize;
    ULONG MailslotQuota;
    ULONG NextMessageSize;
    ULONG MessagesAvailable;
    LARGE_INTEGER ReadTimeout;
} FILE_MAILSLOT_QUERY_INFORMATION, *PFILE_MAILSLOT_QUERY_INFORMATION;
typedef struct _FILE_MAILSLOT_SET_INFORMATION {
    PLARGE_INTEGER ReadTimeout;
} FILE_MAILSLOT_SET_INFORMATION, *PFILE_MAILSLOT_SET_INFORMATION;
typedef struct _FILE_REPARSE_POINT_INFORMATION {
    LONGLONG FileReference;
    ULONG Tag;
} FILE_REPARSE_POINT_INFORMATION, *PFILE_REPARSE_POINT_INFORMATION;
typedef struct _FILE_LINK_ENTRY_INFORMATION {
    ULONG NextEntryOffset;
    LONGLONG ParentFileId;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_LINK_ENTRY_INFORMATION, *PFILE_LINK_ENTRY_INFORMATION;
typedef struct _FILE_LINKS_INFORMATION {
    ULONG BytesNeeded;
    ULONG EntriesReturned;
    FILE_LINK_ENTRY_INFORMATION Entry;
} FILE_LINKS_INFORMATION, *PFILE_LINKS_INFORMATION;
typedef struct _FILE_LINK_ENTRY_FULL_ID_INFORMATION {
    ULONG NextEntryOffset;
    FILE_ID_128 ParentFileId;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_LINK_ENTRY_FULL_ID_INFORMATION, *PFILE_LINK_ENTRY_FULL_ID_INFORMATION;
typedef struct _FILE_LINKS_FULL_ID_INFORMATION {
    ULONG BytesNeeded;
    ULONG EntriesReturned;
    FILE_LINK_ENTRY_FULL_ID_INFORMATION Entry;
} FILE_LINKS_FULL_ID_INFORMATION, *PFILE_LINKS_FULL_ID_INFORMATION;
typedef struct _FILE_NETWORK_PHYSICAL_NAME_INFORMATION {
    ULONG FileNameLength;
    WCHAR FileName[1];
} FILE_NETWORK_PHYSICAL_NAME_INFORMATION, *PFILE_NETWORK_PHYSICAL_NAME_INFORMATION;
typedef struct _FILE_STANDARD_LINK_INFORMATION {
    ULONG NumberOfAccessibleLinks;
    ULONG TotalNumberOfLinks;
    BOOLEAN DeletePending;
    BOOLEAN Directory;
} FILE_STANDARD_LINK_INFORMATION, *PFILE_STANDARD_LINK_INFORMATION;
typedef struct _FILE_GET_EA_INFORMATION {
    ULONG NextEntryOffset;
    UCHAR EaNameLength;
    CHAR EaName[1];
} FILE_GET_EA_INFORMATION, *PFILE_GET_EA_INFORMATION;
typedef struct _FILE_REMOTE_PROTOCOL_INFORMATION
{
    USHORT StructureVersion;
    USHORT StructureSize;
    ULONG Protocol;
    USHORT ProtocolMajorVersion;
    USHORT ProtocolMinorVersion;
    USHORT ProtocolRevision;
    USHORT Reserved;
    ULONG Flags;
    struct {
        ULONG Reserved[8];
    } GenericReserved;
    union {
        struct {
            struct {
                ULONG Capabilities;
            } Server;
            struct {
                ULONG Capabilities;
                ULONG CachingFlags;
         UCHAR ShareType;
                UCHAR Reserved0[3];
                ULONG Reserved1;
            } Share;
        } Smb2;
        ULONG Reserved[16];
    } ProtocolSpecific;
} FILE_REMOTE_PROTOCOL_INFORMATION, *PFILE_REMOTE_PROTOCOL_INFORMATION;
typedef struct _FILE_GET_QUOTA_INFORMATION {
    ULONG NextEntryOffset;
    ULONG SidLength;
    SID Sid;
} FILE_GET_QUOTA_INFORMATION, *PFILE_GET_QUOTA_INFORMATION;
typedef struct _FILE_QUOTA_INFORMATION {
    ULONG NextEntryOffset;
    ULONG SidLength;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER QuotaUsed;
    LARGE_INTEGER QuotaThreshold;
    LARGE_INTEGER QuotaLimit;
    SID Sid;
} FILE_QUOTA_INFORMATION, *PFILE_QUOTA_INFORMATION;
typedef struct _FILE_VOLUME_NAME_INFORMATION {
    ULONG DeviceNameLength;
    WCHAR DeviceName[1];
} FILE_VOLUME_NAME_INFORMATION, *PFILE_VOLUME_NAME_INFORMATION;
typedef struct _FILE_FS_ATTRIBUTE_INFORMATION {
    ULONG FileSystemAttributes;
    LONG MaximumComponentNameLength;
    ULONG FileSystemNameLength;
    WCHAR FileSystemName[1];
} FILE_FS_ATTRIBUTE_INFORMATION, *PFILE_FS_ATTRIBUTE_INFORMATION;
typedef struct _FILE_FS_DRIVER_PATH_INFORMATION {
    BOOLEAN DriverInPath;
    ULONG DriverNameLength;
    WCHAR DriverName[1];
} FILE_FS_DRIVER_PATH_INFORMATION, *PFILE_FS_DRIVER_PATH_INFORMATION;
typedef struct _FILE_FS_VOLUME_FLAGS_INFORMATION {
    ULONG Flags;
} FILE_FS_VOLUME_FLAGS_INFORMATION, *PFILE_FS_VOLUME_FLAGS_INFORMATION;
typedef struct _FILE_FS_CONTROL_INFORMATION {
    LARGE_INTEGER FreeSpaceStartFiltering;
    LARGE_INTEGER FreeSpaceThreshold;
    LARGE_INTEGER FreeSpaceStopFiltering;
    LARGE_INTEGER DefaultQuotaThreshold;
    LARGE_INTEGER DefaultQuotaLimit;
    ULONG FileSystemControlFlags;
} FILE_FS_CONTROL_INFORMATION, *PFILE_FS_CONTROL_INFORMATION;
typedef struct _FILE_FS_DATA_COPY_INFORMATION {
    ULONG NumberOfCopies;
} FILE_FS_DATA_COPY_INFORMATION, *PFILE_FS_DATA_COPY_INFORMATION;
typedef struct _FILE_END_OF_FILE_INFORMATION_EX {
    LARGE_INTEGER EndOfFile;
    LARGE_INTEGER PagingFileSizeInMM;
    LARGE_INTEGER PagingFileMaxSize;
    ULONG Flags;
} FILE_END_OF_FILE_INFORMATION_EX, *PFILE_END_OF_FILE_INFORMATION_EX;
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtCreateFile (
    _Out_ PHANDLE FileHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_opt_ PLARGE_INTEGER AllocationSize,
    _In_ ULONG FileAttributes,
    _In_ ULONG ShareAccess,
    _In_ ULONG CreateDisposition,
    _In_ ULONG CreateOptions,
    _In_reads_bytes_opt_(EaLength) PVOID EaBuffer,
    _In_ ULONG EaLength
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtDeviceIoControlFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG IoControlCode,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtFsControlFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG FsControlCode,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtLockFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ PLARGE_INTEGER ByteOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ ULONG Key,
    _In_ BOOLEAN FailImmediately,
    _In_ BOOLEAN ExclusiveLock
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtOpenFile (
    _Out_ PHANDLE FileHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG ShareAccess,
    _In_ ULONG OpenOptions
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryDirectoryFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_opt_ PUNICODE_STRING FileName,
    _In_ BOOLEAN RestartScan
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryDirectoryFileEx (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _In_ ULONG QueryFlags,
    _In_opt_ PUNICODE_STRING FileName
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryQuotaInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_reads_bytes_opt_(SidListLength) PVOID SidList,
    _In_ ULONG SidListLength,
    _In_reads_bytes_opt_((8 + (4 * ((SID *)StartSid)->SubAuthorityCount)))
        PSID StartSid,
    _In_ BOOLEAN RestartScan
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryVolumeInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FsInformation,
    _In_ ULONG Length,
    _In_ FS_INFORMATION_CLASS FsInformationClass
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtReadFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_opt_ PLARGE_INTEGER ByteOffset,
    _In_opt_ PULONG Key
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetQuotaInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetVolumeInformationFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID FsInformation,
    _In_ ULONG Length,
    _In_ FS_INFORMATION_CLASS FsInformationClass
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtWriteFile (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_opt_ PLARGE_INTEGER ByteOffset,
    _In_opt_ PULONG Key
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtUnlockFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ PLARGE_INTEGER ByteOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ ULONG Key
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtFlushBuffersFileEx (
    _In_ HANDLE FileHandle,
    _In_ ULONG Flags,
    _In_reads_bytes_(ParametersSize) PVOID Parameters,
    _In_ ULONG ParametersSize,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock
    );
                                            CTL_CODE(FILE_DEVICE_FILE_SYSTEM, 120, METHOD_BUFFERED, FILE_READ_DATA)
typedef struct _PATHNAME_BUFFER {
    ULONG PathNameLength;
    WCHAR Name[1];
} PATHNAME_BUFFER, *PPATHNAME_BUFFER;
typedef struct _FSCTL_QUERY_FAT_BPB_BUFFER {
    UCHAR First0x24BytesOfBootSector[0x24];
} FSCTL_QUERY_FAT_BPB_BUFFER, *PFSCTL_QUERY_FAT_BPB_BUFFER;
typedef struct {
    LARGE_INTEGER VolumeSerialNumber;
    LARGE_INTEGER NumberSectors;
    LARGE_INTEGER TotalClusters;
    LARGE_INTEGER FreeClusters;
    LARGE_INTEGER TotalReserved;
    ULONG BytesPerSector;
    ULONG BytesPerCluster;
    ULONG BytesPerFileRecordSegment;
    ULONG ClustersPerFileRecordSegment;
    LARGE_INTEGER MftValidDataLength;
    LARGE_INTEGER MftStartLcn;
    LARGE_INTEGER Mft2StartLcn;
    LARGE_INTEGER MftZoneStart;
    LARGE_INTEGER MftZoneEnd;
} NTFS_VOLUME_DATA_BUFFER, *PNTFS_VOLUME_DATA_BUFFER;
typedef struct {
    ULONG ByteCount;
    USHORT MajorVersion;
    USHORT MinorVersion;
    ULONG BytesPerPhysicalSector;
    USHORT LfsMajorVersion;
    USHORT LfsMinorVersion;
    ULONG MaxDeviceTrimExtentCount;
    ULONG MaxDeviceTrimByteCount;
    ULONG MaxVolumeTrimExtentCount;
    ULONG MaxVolumeTrimByteCount;
} NTFS_EXTENDED_VOLUME_DATA, *PNTFS_EXTENDED_VOLUME_DATA;
typedef struct {
    ULONG ByteCount;
    ULONG MajorVersion;
    ULONG MinorVersion;
    ULONG BytesPerPhysicalSector;
    LARGE_INTEGER VolumeSerialNumber;
    LARGE_INTEGER NumberSectors;
    LARGE_INTEGER TotalClusters;
    LARGE_INTEGER FreeClusters;
    LARGE_INTEGER TotalReserved;
    ULONG BytesPerSector;
    ULONG BytesPerCluster;
    LARGE_INTEGER MaximumSizeOfResidentFile;
    LARGE_INTEGER Reserved[10];
} REFS_VOLUME_DATA_BUFFER, *PREFS_VOLUME_DATA_BUFFER;
typedef struct {
    LARGE_INTEGER StartingLcn;
} STARTING_LCN_INPUT_BUFFER, *PSTARTING_LCN_INPUT_BUFFER;
typedef struct {
    LARGE_INTEGER StartingLcn;
    ULONG Flags;
} STARTING_LCN_INPUT_BUFFER_EX, *PSTARTING_LCN_INPUT_BUFFER_EX;
typedef struct {
    LARGE_INTEGER StartingLcn;
    LARGE_INTEGER BitmapSize;
    UCHAR Buffer[1];
} VOLUME_BITMAP_BUFFER, *PVOLUME_BITMAP_BUFFER;
typedef struct {
    LARGE_INTEGER StartingVcn;
} STARTING_VCN_INPUT_BUFFER, *PSTARTING_VCN_INPUT_BUFFER;
typedef struct RETRIEVAL_POINTERS_BUFFER {
    ULONG ExtentCount;
    LARGE_INTEGER StartingVcn;
    struct {
        LARGE_INTEGER NextVcn;
        LARGE_INTEGER Lcn;
    } Extents[1];
} RETRIEVAL_POINTERS_BUFFER, *PRETRIEVAL_POINTERS_BUFFER;
typedef struct RETRIEVAL_POINTERS_AND_REFCOUNT_BUFFER {
    ULONG ExtentCount;
    LARGE_INTEGER StartingVcn;
    struct {
        LARGE_INTEGER NextVcn;
        LARGE_INTEGER Lcn;
        ULONG ReferenceCount;
    } Extents[1];
} RETRIEVAL_POINTERS_AND_REFCOUNT_BUFFER, *PRETRIEVAL_POINTERS_AND_REFCOUNT_BUFFER;
typedef struct RETRIEVAL_POINTER_COUNT {
    ULONG ExtentCount;
} RETRIEVAL_POINTER_COUNT, *PRETRIEVAL_POINTER_COUNT;
typedef struct {
    LARGE_INTEGER FileReferenceNumber;
} NTFS_FILE_RECORD_INPUT_BUFFER, *PNTFS_FILE_RECORD_INPUT_BUFFER;
typedef struct {
    LARGE_INTEGER FileReferenceNumber;
    ULONG FileRecordLength;
    UCHAR FileRecordBuffer[1];
} NTFS_FILE_RECORD_OUTPUT_BUFFER, *PNTFS_FILE_RECORD_OUTPUT_BUFFER;
typedef struct {
    HANDLE FileHandle;
    LARGE_INTEGER StartingVcn;
    LARGE_INTEGER StartingLcn;
    ULONG ClusterCount;
} MOVE_FILE_DATA, *PMOVE_FILE_DATA;
typedef struct {
    HANDLE FileHandle;
    LARGE_INTEGER SourceFileRecord;
    LARGE_INTEGER TargetFileRecord;
} MOVE_FILE_RECORD_DATA, *PMOVE_FILE_RECORD_DATA;
typedef struct _MOVE_FILE_DATA32 {
    UINT32 FileHandle;
    LARGE_INTEGER StartingVcn;
    LARGE_INTEGER StartingLcn;
    ULONG ClusterCount;
} MOVE_FILE_DATA32, *PMOVE_FILE_DATA32;
typedef struct {
    ULONG Restart;
    SID Sid;
} FIND_BY_SID_DATA, *PFIND_BY_SID_DATA;
typedef struct {
    ULONG NextEntryOffset;
    ULONG FileIndex;
    ULONG FileNameLength;
    WCHAR FileName[1];
} FIND_BY_SID_OUTPUT, *PFIND_BY_SID_OUTPUT;
typedef struct {
    ULONGLONG StartFileReferenceNumber;
    USN LowUsn;
    USN HighUsn;
} MFT_ENUM_DATA_V0, *PMFT_ENUM_DATA_V0;
typedef struct {
    ULONGLONG StartFileReferenceNumber;
    USN LowUsn;
    USN HighUsn;
    USHORT MinMajorVersion;
    USHORT MaxMajorVersion;
} MFT_ENUM_DATA_V1, *PMFT_ENUM_DATA_V1;
typedef MFT_ENUM_DATA_V1 MFT_ENUM_DATA, *PMFT_ENUM_DATA;
typedef struct {
    ULONGLONG MaximumSize;
    ULONGLONG AllocationDelta;
} CREATE_USN_JOURNAL_DATA, *PCREATE_USN_JOURNAL_DATA;
typedef struct {
    USHORT MinMajorVersion;
    USHORT MaxMajorVersion;
} READ_FILE_USN_DATA, *PREAD_FILE_USN_DATA;
typedef struct {
    USN StartUsn;
    ULONG ReasonMask;
    ULONG ReturnOnlyOnClose;
    ULONGLONG Timeout;
    ULONGLONG BytesToWaitFor;
    ULONGLONG UsnJournalID;
} READ_USN_JOURNAL_DATA_V0, *PREAD_USN_JOURNAL_DATA_V0;
typedef struct {
    USN StartUsn;
    ULONG ReasonMask;
    ULONG ReturnOnlyOnClose;
    ULONGLONG Timeout;
    ULONGLONG BytesToWaitFor;
    ULONGLONG UsnJournalID;
    USHORT MinMajorVersion;
    USHORT MaxMajorVersion;
} READ_USN_JOURNAL_DATA_V1, *PREAD_USN_JOURNAL_DATA_V1;
typedef READ_USN_JOURNAL_DATA_V1 READ_USN_JOURNAL_DATA, *PREAD_USN_JOURNAL_DATA;
typedef struct {
    ULONG Flags;
    ULONG Unused;
    ULONGLONG ChunkSize;
    LONGLONG FileSizeThreshold;
} USN_TRACK_MODIFIED_RANGES, *PUSN_TRACK_MODIFIED_RANGES;
typedef struct {
    USN Usn;
} USN_RANGE_TRACK_OUTPUT, *PUSN_RANGE_TRACK_OUTPUT;
typedef struct {
    ULONG RecordLength;
    USHORT MajorVersion;
    USHORT MinorVersion;
    ULONGLONG FileReferenceNumber;
    ULONGLONG ParentFileReferenceNumber;
    USN Usn;
    LARGE_INTEGER TimeStamp;
    ULONG Reason;
    ULONG SourceInfo;
    ULONG SecurityId;
    ULONG FileAttributes;
    USHORT FileNameLength;
    USHORT FileNameOffset;
    WCHAR FileName[1];
} USN_RECORD_V2, *PUSN_RECORD_V2;
typedef struct {
    ULONG RecordLength;
    USHORT MajorVersion;
    USHORT MinorVersion;
    FILE_ID_128 FileReferenceNumber;
    FILE_ID_128 ParentFileReferenceNumber;
    USN Usn;
    LARGE_INTEGER TimeStamp;
    ULONG Reason;
    ULONG SourceInfo;
    ULONG SecurityId;
    ULONG FileAttributes;
    USHORT FileNameLength;
    USHORT FileNameOffset;
    WCHAR FileName[1];
} USN_RECORD_V3, *PUSN_RECORD_V3;
typedef USN_RECORD_V2 USN_RECORD, *PUSN_RECORD;
typedef struct {
    ULONG RecordLength;
    USHORT MajorVersion;
    USHORT MinorVersion;
} USN_RECORD_COMMON_HEADER, *PUSN_RECORD_COMMON_HEADER;
typedef struct {
    LONGLONG Offset;
    LONGLONG Length;
} USN_RECORD_EXTENT, *PUSN_RECORD_EXTENT;
typedef struct {
    USN_RECORD_COMMON_HEADER Header;
    FILE_ID_128 FileReferenceNumber;
    FILE_ID_128 ParentFileReferenceNumber;
    USN Usn;
    ULONG Reason;
    ULONG SourceInfo;
    ULONG RemainingExtents;
    USHORT NumberOfExtents;
    USHORT ExtentSize;
    USN_RECORD_EXTENT Extents[1];
} USN_RECORD_V4, *PUSN_RECORD_V4;
typedef union {
    USN_RECORD_COMMON_HEADER Header;
    USN_RECORD_V2 V2;
    USN_RECORD_V3 V3;
    USN_RECORD_V4 V4;
} USN_RECORD_UNION, *PUSN_RECORD_UNION;
typedef struct {
    ULONGLONG UsnJournalID;
    USN FirstUsn;
    USN NextUsn;
    USN LowestValidUsn;
    USN MaxUsn;
    ULONGLONG MaximumSize;
    ULONGLONG AllocationDelta;
} USN_JOURNAL_DATA_V0, *PUSN_JOURNAL_DATA_V0;
typedef struct {
    ULONGLONG UsnJournalID;
    USN FirstUsn;
    USN NextUsn;
    USN LowestValidUsn;
    USN MaxUsn;
    ULONGLONG MaximumSize;
    ULONGLONG AllocationDelta;
    USHORT MinSupportedMajorVersion;
    USHORT MaxSupportedMajorVersion;
} USN_JOURNAL_DATA_V1, *PUSN_JOURNAL_DATA_V1;
typedef struct {
    ULONGLONG UsnJournalID;
    USN FirstUsn;
    USN NextUsn;
    USN LowestValidUsn;
    USN MaxUsn;
    ULONGLONG MaximumSize;
    ULONGLONG AllocationDelta;
    USHORT MinSupportedMajorVersion;
    USHORT MaxSupportedMajorVersion;
    ULONG Flags;
    ULONGLONG RangeTrackChunkSize;
    LONGLONG RangeTrackFileSizeThreshold;
} USN_JOURNAL_DATA_V2, *PUSN_JOURNAL_DATA_V2;
typedef USN_JOURNAL_DATA_V1 USN_JOURNAL_DATA, *PUSN_JOURNAL_DATA;
typedef struct {
    ULONGLONG UsnJournalID;
    ULONG DeleteFlags;
} DELETE_USN_JOURNAL_DATA, *PDELETE_USN_JOURNAL_DATA;
#pragma warning(disable:4201)
typedef struct {
    union {
        ULONG UsnSourceInfo;
        ULONG CopyNumber;
    } DUMMYUNIONNAME;
    HANDLE VolumeHandle;
    ULONG HandleInfo;
} MARK_HANDLE_INFO, *PMARK_HANDLE_INFO;
typedef struct {
    union {
        ULONG UsnSourceInfo;
        ULONG CopyNumber;
    } DUMMYUNIONNAME;
    UINT32 VolumeHandle;
    ULONG HandleInfo;
} MARK_HANDLE_INFO32, *PMARK_HANDLE_INFO32;
#pragma warning(default:4201)



typedef struct {
    ACCESS_MASK DesiredAccess;
    ULONG SecurityIds[1];
} BULK_SECURITY_TEST_DATA, *PBULK_SECURITY_TEST_DATA;
typedef struct _FILE_PREFETCH {
    ULONG Type;
    ULONG Count;
    ULONGLONG Prefetch[1];
} FILE_PREFETCH, *PFILE_PREFETCH;
typedef struct _FILE_PREFETCH_EX {
    ULONG Type;
    ULONG Count;
    PVOID Context;
    ULONGLONG Prefetch[1];
} FILE_PREFETCH_EX, *PFILE_PREFETCH_EX;
typedef struct _FILESYSTEM_STATISTICS {
    USHORT FileSystemType;
    USHORT Version;
    ULONG SizeOfCompleteStructure;
    ULONG UserFileReads;
    ULONG UserFileReadBytes;
    ULONG UserDiskReads;
    ULONG UserFileWrites;
    ULONG UserFileWriteBytes;
    ULONG UserDiskWrites;
    ULONG MetaDataReads;
    ULONG MetaDataReadBytes;
    ULONG MetaDataDiskReads;
    ULONG MetaDataWrites;
    ULONG MetaDataWriteBytes;
    ULONG MetaDataDiskWrites;
} FILESYSTEM_STATISTICS, *PFILESYSTEM_STATISTICS;
typedef struct _FAT_STATISTICS {
    ULONG CreateHits;
    ULONG SuccessfulCreates;
    ULONG FailedCreates;
    ULONG NonCachedReads;
    ULONG NonCachedReadBytes;
    ULONG NonCachedWrites;
    ULONG NonCachedWriteBytes;
    ULONG NonCachedDiskReads;
    ULONG NonCachedDiskWrites;
} FAT_STATISTICS, *PFAT_STATISTICS;
typedef struct _EXFAT_STATISTICS {
    ULONG CreateHits;
    ULONG SuccessfulCreates;
    ULONG FailedCreates;
    ULONG NonCachedReads;
    ULONG NonCachedReadBytes;
    ULONG NonCachedWrites;
    ULONG NonCachedWriteBytes;
    ULONG NonCachedDiskReads;
    ULONG NonCachedDiskWrites;
} EXFAT_STATISTICS, *PEXFAT_STATISTICS;
typedef struct _NTFS_STATISTICS {
    ULONG LogFileFullExceptions;
    ULONG OtherExceptions;
    ULONG MftReads;
    ULONG MftReadBytes;
    ULONG MftWrites;
    ULONG MftWriteBytes;
    struct {
        USHORT Write;
        USHORT Create;
        USHORT SetInfo;
        USHORT Flush;
    } MftWritesUserLevel;
    USHORT MftWritesFlushForLogFileFull;
    USHORT MftWritesLazyWriter;
    USHORT MftWritesUserRequest;
    ULONG Mft2Writes;
    ULONG Mft2WriteBytes;
    struct {
        USHORT Write;
        USHORT Create;
        USHORT SetInfo;
        USHORT Flush;
    } Mft2WritesUserLevel;
    USHORT Mft2WritesFlushForLogFileFull;
    USHORT Mft2WritesLazyWriter;
    USHORT Mft2WritesUserRequest;
    ULONG RootIndexReads;
    ULONG RootIndexReadBytes;
    ULONG RootIndexWrites;
    ULONG RootIndexWriteBytes;
    ULONG BitmapReads;
    ULONG BitmapReadBytes;
    ULONG BitmapWrites;
    ULONG BitmapWriteBytes;
    USHORT BitmapWritesFlushForLogFileFull;
    USHORT BitmapWritesLazyWriter;
    USHORT BitmapWritesUserRequest;
    struct {
        USHORT Write;
        USHORT Create;
        USHORT SetInfo;
    } BitmapWritesUserLevel;
    ULONG MftBitmapReads;
    ULONG MftBitmapReadBytes;
    ULONG MftBitmapWrites;
    ULONG MftBitmapWriteBytes;
    USHORT MftBitmapWritesFlushForLogFileFull;
    USHORT MftBitmapWritesLazyWriter;
    USHORT MftBitmapWritesUserRequest;
    struct {
        USHORT Write;
        USHORT Create;
        USHORT SetInfo;
        USHORT Flush;
    } MftBitmapWritesUserLevel;
    ULONG UserIndexReads;
    ULONG UserIndexReadBytes;
    ULONG UserIndexWrites;
    ULONG UserIndexWriteBytes;
    ULONG LogFileReads;
    ULONG LogFileReadBytes;
    ULONG LogFileWrites;
    ULONG LogFileWriteBytes;
    struct {
        ULONG Calls;
        ULONG Clusters;
        ULONG Hints;
        ULONG RunsReturned;
        ULONG HintsHonored;
        ULONG HintsClusters;
        ULONG Cache;
        ULONG CacheClusters;
        ULONG CacheMiss;
        ULONG CacheMissClusters;
    } Allocate;
    ULONG DiskResourcesExhausted;
} NTFS_STATISTICS, *PNTFS_STATISTICS;
typedef struct _FILESYSTEM_STATISTICS_EX {
    USHORT FileSystemType;
    USHORT Version;
    ULONG SizeOfCompleteStructure;
    ULONGLONG UserFileReads;
    ULONGLONG UserFileReadBytes;
    ULONGLONG UserDiskReads;
    ULONGLONG UserFileWrites;
    ULONGLONG UserFileWriteBytes;
    ULONGLONG UserDiskWrites;
    ULONGLONG MetaDataReads;
    ULONGLONG MetaDataReadBytes;
    ULONGLONG MetaDataDiskReads;
    ULONGLONG MetaDataWrites;
    ULONGLONG MetaDataWriteBytes;
    ULONGLONG MetaDataDiskWrites;
} FILESYSTEM_STATISTICS_EX, *PFILESYSTEM_STATISTICS_EX;
typedef struct _NTFS_STATISTICS_EX {
    ULONG LogFileFullExceptions;
    ULONG OtherExceptions;
    ULONGLONG MftReads;
    ULONGLONG MftReadBytes;
    ULONGLONG MftWrites;
    ULONGLONG MftWriteBytes;
    struct {
        ULONG Write;
        ULONG Create;
        ULONG SetInfo;
        ULONG Flush;
    } MftWritesUserLevel;
    ULONG MftWritesFlushForLogFileFull;
    ULONG MftWritesLazyWriter;
    ULONG MftWritesUserRequest;
    ULONGLONG Mft2Writes;
    ULONGLONG Mft2WriteBytes;
    struct {
        ULONG Write;
        ULONG Create;
        ULONG SetInfo;
        ULONG Flush;
    } Mft2WritesUserLevel;
    ULONG Mft2WritesFlushForLogFileFull;
    ULONG Mft2WritesLazyWriter;
    ULONG Mft2WritesUserRequest;
    ULONGLONG RootIndexReads;
    ULONGLONG RootIndexReadBytes;
    ULONGLONG RootIndexWrites;
    ULONGLONG RootIndexWriteBytes;
    ULONGLONG BitmapReads;
    ULONGLONG BitmapReadBytes;
    ULONGLONG BitmapWrites;
    ULONGLONG BitmapWriteBytes;
    ULONG BitmapWritesFlushForLogFileFull;
    ULONG BitmapWritesLazyWriter;
    ULONG BitmapWritesUserRequest;
    struct {
        ULONG Write;
        ULONG Create;
        ULONG SetInfo;
        ULONG Flush;
    } BitmapWritesUserLevel;
    ULONGLONG MftBitmapReads;
    ULONGLONG MftBitmapReadBytes;
    ULONGLONG MftBitmapWrites;
    ULONGLONG MftBitmapWriteBytes;
    ULONG MftBitmapWritesFlushForLogFileFull;
    ULONG MftBitmapWritesLazyWriter;
    ULONG MftBitmapWritesUserRequest;
    struct {
        ULONG Write;
        ULONG Create;
        ULONG SetInfo;
        ULONG Flush;
    } MftBitmapWritesUserLevel;
    ULONGLONG UserIndexReads;
    ULONGLONG UserIndexReadBytes;
    ULONGLONG UserIndexWrites;
    ULONGLONG UserIndexWriteBytes;
    ULONGLONG LogFileReads;
    ULONGLONG LogFileReadBytes;
    ULONGLONG LogFileWrites;
    ULONGLONG LogFileWriteBytes;
    struct {
        ULONG Calls;
        ULONG RunsReturned;
        ULONG Hints;
        ULONG HintsHonored;
        ULONG Cache;
        ULONG CacheMiss;
        ULONGLONG Clusters;
        ULONGLONG HintsClusters;
        ULONGLONG CacheClusters;
        ULONGLONG CacheMissClusters;
    } Allocate;
    ULONG DiskResourcesExhausted;
    ULONGLONG VolumeTrimCount;
    ULONGLONG VolumeTrimTime;
    ULONGLONG VolumeTrimByteCount;
    ULONGLONG FileLevelTrimCount;
    ULONGLONG FileLevelTrimTime;
    ULONGLONG FileLevelTrimByteCount;
    ULONGLONG VolumeTrimSkippedCount;
    ULONGLONG VolumeTrimSkippedByteCount;
    ULONGLONG NtfsFillStatInfoFromMftRecordCalledCount;
    ULONGLONG NtfsFillStatInfoFromMftRecordBailedBecauseOfAttributeListCount;
    ULONGLONG NtfsFillStatInfoFromMftRecordBailedBecauseOfNonResReparsePointCount;
} NTFS_STATISTICS_EX, *PNTFS_STATISTICS_EX;
#pragma warning(disable:4201)
typedef struct _FILE_OBJECTID_BUFFER {
    UCHAR ObjectId[16];
    union {
        struct {
            UCHAR BirthVolumeId[16];
            UCHAR BirthObjectId[16];
            UCHAR DomainId[16];
        } DUMMYSTRUCTNAME;
        UCHAR ExtendedInfo[48];
    } DUMMYUNIONNAME;
} FILE_OBJECTID_BUFFER, *PFILE_OBJECTID_BUFFER;
#pragma warning( default : 4201 )
typedef struct _FILE_SET_SPARSE_BUFFER {
    BOOLEAN SetSparse;
} FILE_SET_SPARSE_BUFFER, *PFILE_SET_SPARSE_BUFFER;
typedef struct _FILE_ZERO_DATA_INFORMATION {
    LARGE_INTEGER FileOffset;
    LARGE_INTEGER BeyondFinalZero;
} FILE_ZERO_DATA_INFORMATION, *PFILE_ZERO_DATA_INFORMATION;
typedef struct _FILE_ZERO_DATA_INFORMATION_EX {
    LARGE_INTEGER FileOffset;
    LARGE_INTEGER BeyondFinalZero;
    ULONG Flags;
} FILE_ZERO_DATA_INFORMATION_EX, *PFILE_ZERO_DATA_INFORMATION_EX;
typedef struct _FILE_ALLOCATED_RANGE_BUFFER {
    LARGE_INTEGER FileOffset;
    LARGE_INTEGER Length;
} FILE_ALLOCATED_RANGE_BUFFER, *PFILE_ALLOCATED_RANGE_BUFFER;
typedef struct _ENCRYPTION_BUFFER {
    ULONG EncryptionOperation;
    UCHAR Private[1];
} ENCRYPTION_BUFFER, *PENCRYPTION_BUFFER;
typedef struct _DECRYPTION_STATUS_BUFFER {
    BOOLEAN NoEncryptedStreams;
} DECRYPTION_STATUS_BUFFER, *PDECRYPTION_STATUS_BUFFER;
typedef struct _REQUEST_RAW_ENCRYPTED_DATA {
    LONGLONG FileOffset;
    ULONG Length;
} REQUEST_RAW_ENCRYPTED_DATA, *PREQUEST_RAW_ENCRYPTED_DATA;
typedef struct _ENCRYPTED_DATA_INFO {
    ULONGLONG StartingFileOffset;
    ULONG OutputBufferOffset;
    ULONG BytesWithinFileSize;
    ULONG BytesWithinValidDataLength;
    USHORT CompressionFormat;
    UCHAR DataUnitShift;
    UCHAR ChunkShift;
    UCHAR ClusterShift;
    UCHAR EncryptionFormat;
    USHORT NumberOfDataBlocks;
    ULONG DataBlockSize[ANYSIZE_ARRAY];
} ENCRYPTED_DATA_INFO, *PENCRYPTED_DATA_INFO;
typedef struct _EXTENDED_ENCRYPTED_DATA_INFO {
    ULONG ExtendedCode;
    ULONG Length;
    ULONG Flags;
    ULONG Reserved;
} EXTENDED_ENCRYPTED_DATA_INFO, *PEXTENDED_ENCRYPTED_DATA_INFO;
typedef struct _PLEX_READ_DATA_REQUEST {
    LARGE_INTEGER ByteOffset;
    ULONG ByteLength;
    ULONG PlexNumber;
} PLEX_READ_DATA_REQUEST, *PPLEX_READ_DATA_REQUEST;
typedef struct _SI_COPYFILE {
    ULONG SourceFileNameLength;
    ULONG DestinationFileNameLength;
    ULONG Flags;
    WCHAR FileNameBuffer[1];
} SI_COPYFILE, *PSI_COPYFILE;
typedef struct _FILE_MAKE_COMPATIBLE_BUFFER {
    BOOLEAN CloseDisc;
} FILE_MAKE_COMPATIBLE_BUFFER, *PFILE_MAKE_COMPATIBLE_BUFFER;
typedef struct _FILE_SET_DEFECT_MGMT_BUFFER {
    BOOLEAN Disable;
} FILE_SET_DEFECT_MGMT_BUFFER, *PFILE_SET_DEFECT_MGMT_BUFFER;
typedef struct _FILE_QUERY_SPARING_BUFFER {
    ULONG SparingUnitBytes;
    BOOLEAN SoftwareSparing;
    ULONG TotalSpareBlocks;
    ULONG FreeSpareBlocks;
} FILE_QUERY_SPARING_BUFFER, *PFILE_QUERY_SPARING_BUFFER;
typedef struct _FILE_QUERY_ON_DISK_VOL_INFO_BUFFER {
    LARGE_INTEGER DirectoryCount;
    LARGE_INTEGER FileCount;
    USHORT FsFormatMajVersion;
    USHORT FsFormatMinVersion;
    WCHAR FsFormatName[ 12];
    LARGE_INTEGER FormatTime;
    LARGE_INTEGER LastUpdateTime;
    WCHAR CopyrightInfo[ 34];
    WCHAR AbstractInfo[ 34];
    WCHAR FormattingImplementationInfo[ 34];
    WCHAR LastModifyingImplementationInfo[ 34];
} FILE_QUERY_ON_DISK_VOL_INFO_BUFFER, *PFILE_QUERY_ON_DISK_VOL_INFO_BUFFER;
typedef ULONGLONG CLSN;
typedef struct _FILE_INITIATE_REPAIR_OUTPUT_BUFFER {
    ULONGLONG Hint1;
    ULONGLONG Hint2;
    CLSN Clsn;
    NTSTATUS Status;
} FILE_INITIATE_REPAIR_OUTPUT_BUFFER, *PFILE_INITIATE_REPAIR_OUTPUT_BUFFER;
typedef enum _SHRINK_VOLUME_REQUEST_TYPES
{
    ShrinkPrepare = 1,
    ShrinkCommit,
    ShrinkAbort
} SHRINK_VOLUME_REQUEST_TYPES, *PSHRINK_VOLUME_REQUEST_TYPES;
typedef struct _SHRINK_VOLUME_INFORMATION
{
    SHRINK_VOLUME_REQUEST_TYPES ShrinkRequestType;
    ULONGLONG Flags;
    LONGLONG NewNumberOfSectors;
} SHRINK_VOLUME_INFORMATION, *PSHRINK_VOLUME_INFORMATION;

















typedef struct _TXFS_MODIFY_RM {
    ULONG Flags;
    ULONG LogContainerCountMax;
    ULONG LogContainerCountMin;
    ULONG LogContainerCount;
    ULONG LogGrowthIncrement;
    ULONG LogAutoShrinkPercentage;
    ULONGLONG Reserved;
    USHORT LoggingMode;
} TXFS_MODIFY_RM,
 *PTXFS_MODIFY_RM;








typedef struct _TXFS_QUERY_RM_INFORMATION {
    ULONG BytesRequired;
    ULONGLONG TailLsn;
    ULONGLONG CurrentLsn;
    ULONGLONG ArchiveTailLsn;
    ULONGLONG LogContainerSize;
    LARGE_INTEGER HighestVirtualClock;
    ULONG LogContainerCount;
    ULONG LogContainerCountMax;
    ULONG LogContainerCountMin;
    ULONG LogGrowthIncrement;
    ULONG LogAutoShrinkPercentage;
    ULONG Flags;
    USHORT LoggingMode;
    USHORT Reserved;
    ULONG RmState;
    ULONGLONG LogCapacity;
    ULONGLONG LogFree;
    ULONGLONG TopsSize;
    ULONGLONG TopsUsed;
    ULONGLONG TransactionCount;
    ULONGLONG OnePCCount;
    ULONGLONG TwoPCCount;
    ULONGLONG NumberLogFileFull;
    ULONGLONG OldestTransactionAge;
    GUID RMName;
    ULONG TmLogPathOffset;
} TXFS_QUERY_RM_INFORMATION,
 *PTXFS_QUERY_RM_INFORMATION;


typedef struct _TXFS_ROLLFORWARD_REDO_INFORMATION {
    LARGE_INTEGER LastVirtualClock;
    ULONGLONG LastRedoLsn;
    ULONGLONG HighestRecoveryLsn;
    ULONG Flags;
} TXFS_ROLLFORWARD_REDO_INFORMATION,
 *PTXFS_ROLLFORWARD_REDO_INFORMATION;
#pragma deprecated(TXFS_ROLLFORWARD_REDO_INFORMATION)
#pragma deprecated(PTXFS_ROLLFORWARD_REDO_INFORMATION)












typedef struct _TXFS_START_RM_INFORMATION {
    ULONG Flags;
    ULONGLONG LogContainerSize;
    ULONG LogContainerCountMin;
    ULONG LogContainerCountMax;
    ULONG LogGrowthIncrement;
    ULONG LogAutoShrinkPercentage;
    ULONG TmLogPathOffset;
    USHORT TmLogPathLength;
    USHORT LoggingMode;
    USHORT LogPathLength;
    USHORT Reserved;
    WCHAR LogPath[1];
} TXFS_START_RM_INFORMATION,
 *PTXFS_START_RM_INFORMATION;
#pragma deprecated(TXFS_START_RM_INFORMATION)
#pragma deprecated(PTXFS_START_RM_INFORMATION)
typedef struct _TXFS_GET_METADATA_INFO_OUT {
    struct {
        LONGLONG LowPart;
        LONGLONG HighPart;
    } TxfFileId;
    GUID LockingTransaction;
    ULONGLONG LastLsn;
    ULONG TransactionState;
} TXFS_GET_METADATA_INFO_OUT, *PTXFS_GET_METADATA_INFO_OUT;
typedef struct _TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY {
    ULONGLONG Offset;
    ULONG NameFlags;
    LONGLONG FileId;
    ULONG Reserved1;
    ULONG Reserved2;
    LONGLONG Reserved3;
    WCHAR FileName[1];
} TXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY, *PTXFS_LIST_TRANSACTION_LOCKED_FILES_ENTRY;
typedef struct _TXFS_LIST_TRANSACTION_LOCKED_FILES {
    GUID KtmTransaction;
    ULONGLONG NumberOfFiles;
    ULONGLONG BufferSizeRequired;
    ULONGLONG Offset;
} TXFS_LIST_TRANSACTION_LOCKED_FILES, *PTXFS_LIST_TRANSACTION_LOCKED_FILES;
typedef struct _TXFS_LIST_TRANSACTIONS_ENTRY {
    GUID TransactionId;
    ULONG TransactionState;
    ULONG Reserved1;
    ULONG Reserved2;
    LONGLONG Reserved3;
} TXFS_LIST_TRANSACTIONS_ENTRY, *PTXFS_LIST_TRANSACTIONS_ENTRY;
typedef struct _TXFS_LIST_TRANSACTIONS {
    ULONGLONG NumberOfTransactions;
    ULONGLONG BufferSizeRequired;
} TXFS_LIST_TRANSACTIONS, *PTXFS_LIST_TRANSACTIONS;
#pragma warning(disable:4201)
typedef struct _TXFS_READ_BACKUP_INFORMATION_OUT {
    union {
        ULONG BufferLength;
        UCHAR Buffer[1];
    } DUMMYUNIONNAME;
} TXFS_READ_BACKUP_INFORMATION_OUT, *PTXFS_READ_BACKUP_INFORMATION_OUT;
#pragma warning( default : 4201 )
typedef struct _TXFS_WRITE_BACKUP_INFORMATION {
    UCHAR Buffer[1];
} TXFS_WRITE_BACKUP_INFORMATION, *PTXFS_WRITE_BACKUP_INFORMATION;
typedef struct _TXFS_GET_TRANSACTED_VERSION {
    ULONG ThisBaseVersion;
    ULONG LatestVersion;
    USHORT ThisMiniVersion;
    USHORT FirstMiniVersion;
    USHORT LatestMiniVersion;
} TXFS_GET_TRANSACTED_VERSION, *PTXFS_GET_TRANSACTED_VERSION;
typedef struct _TXFS_SAVEPOINT_INFORMATION {
    HANDLE KtmTransaction;
    ULONG ActionCode;
    ULONG SavepointId;
} TXFS_SAVEPOINT_INFORMATION, *PTXFS_SAVEPOINT_INFORMATION;
#pragma deprecated(TXFS_SAVEPOINT_INFORMATION)
#pragma deprecated(PTXFS_SAVEPOINT_INFORMATION)
typedef struct _TXFS_CREATE_MINIVERSION_INFO {
    USHORT StructureVersion;
    USHORT StructureLength;
    ULONG BaseVersion;
    USHORT MiniVersion;
} TXFS_CREATE_MINIVERSION_INFO, *PTXFS_CREATE_MINIVERSION_INFO;
#pragma deprecated(TXFS_CREATE_MINIVERSION_INFO)
#pragma deprecated(PTXFS_CREATE_MINIVERSION_INFO)
typedef struct _TXFS_TRANSACTION_ACTIVE_INFO {
    BOOLEAN TransactionsActiveAtSnapshot;
} TXFS_TRANSACTION_ACTIVE_INFO, *PTXFS_TRANSACTION_ACTIVE_INFO;
typedef struct _BOOT_AREA_INFO {
    ULONG BootSectorCount;
    struct {
        LARGE_INTEGER Offset;
    } BootSectors[2];
} BOOT_AREA_INFO, *PBOOT_AREA_INFO;
typedef struct _RETRIEVAL_POINTER_BASE {
    LARGE_INTEGER FileAreaOffset;
} RETRIEVAL_POINTER_BASE, *PRETRIEVAL_POINTER_BASE;
typedef struct _FILE_FS_PERSISTENT_VOLUME_INFORMATION {
    ULONG VolumeFlags;
    ULONG FlagMask;
    ULONG Version;
    ULONG Reserved;
} FILE_FS_PERSISTENT_VOLUME_INFORMATION, *PFILE_FS_PERSISTENT_VOLUME_INFORMATION;
typedef struct _FILE_SYSTEM_RECOGNITION_INFORMATION {
    CHAR FileSystem[9];
} FILE_SYSTEM_RECOGNITION_INFORMATION, *PFILE_SYSTEM_RECOGNITION_INFORMATION;
typedef struct _REQUEST_OPLOCK_INPUT_BUFFER {
    USHORT StructureVersion;
    USHORT StructureLength;
    ULONG RequestedOplockLevel;
    ULONG Flags;
} REQUEST_OPLOCK_INPUT_BUFFER, *PREQUEST_OPLOCK_INPUT_BUFFER;
typedef struct _REQUEST_OPLOCK_OUTPUT_BUFFER {
    USHORT StructureVersion;
    USHORT StructureLength;
    ULONG OriginalOplockLevel;
    ULONG NewOplockLevel;
    ULONG Flags;
    ACCESS_MASK AccessMode;
    USHORT ShareMode;
} REQUEST_OPLOCK_OUTPUT_BUFFER, *PREQUEST_OPLOCK_OUTPUT_BUFFER;
typedef struct _VIRTUAL_STORAGE_TYPE
{
    ULONG DeviceId;
    GUID VendorId;
} VIRTUAL_STORAGE_TYPE, *PVIRTUAL_STORAGE_TYPE;
typedef struct _STORAGE_QUERY_DEPENDENT_VOLUME_REQUEST {
    ULONG RequestLevel;
    ULONG RequestFlags;
} STORAGE_QUERY_DEPENDENT_VOLUME_REQUEST, *PSTORAGE_QUERY_DEPENDENT_VOLUME_REQUEST;
typedef struct _STORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY {
    ULONG EntryLength;
    ULONG DependencyTypeFlags;
    ULONG ProviderSpecificFlags;
    VIRTUAL_STORAGE_TYPE VirtualStorageType;
} STORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY, *PSTORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY;
typedef struct _STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY {
    ULONG EntryLength;
    ULONG DependencyTypeFlags;
    ULONG ProviderSpecificFlags;
    VIRTUAL_STORAGE_TYPE VirtualStorageType;
    ULONG AncestorLevel;
    ULONG HostVolumeNameOffset;
    ULONG HostVolumeNameSize;
    ULONG DependentVolumeNameOffset;
    ULONG DependentVolumeNameSize;
    ULONG RelativePathOffset;
    ULONG RelativePathSize;
    ULONG DependentDeviceNameOffset;
    ULONG DependentDeviceNameSize;
} STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY, *PSTORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY;
typedef struct _STORAGE_QUERY_DEPENDENT_VOLUME_RESPONSE {
    ULONG ResponseLevel;
    ULONG NumberEntries;
    union {
        STORAGE_QUERY_DEPENDENT_VOLUME_LEV1_ENTRY Lev1Depends[];
        STORAGE_QUERY_DEPENDENT_VOLUME_LEV2_ENTRY Lev2Depends[];
    } DUMMYUNIONNAME;
} STORAGE_QUERY_DEPENDENT_VOLUME_RESPONSE, *PSTORAGE_QUERY_DEPENDENT_VOLUME_RESPONSE;
typedef struct _SD_CHANGE_MACHINE_SID_INPUT {
    USHORT CurrentMachineSIDOffset;
    USHORT CurrentMachineSIDLength;
    USHORT NewMachineSIDOffset;
    USHORT NewMachineSIDLength;
} SD_CHANGE_MACHINE_SID_INPUT, *PSD_CHANGE_MACHINE_SID_INPUT;
typedef struct _SD_CHANGE_MACHINE_SID_OUTPUT {
    ULONGLONG NumSDChangedSuccess;
    ULONGLONG NumSDChangedFail;
    ULONGLONG NumSDUnused;
    ULONGLONG NumSDTotal;
    ULONGLONG NumMftSDChangedSuccess;
    ULONGLONG NumMftSDChangedFail;
    ULONGLONG NumMftSDTotal;
} SD_CHANGE_MACHINE_SID_OUTPUT, *PSD_CHANGE_MACHINE_SID_OUTPUT;
typedef struct _SD_QUERY_STATS_INPUT {
    ULONG Reserved;
} SD_QUERY_STATS_INPUT, *PSD_QUERY_STATS_INPUT;
typedef struct _SD_QUERY_STATS_OUTPUT {
    ULONGLONG SdsStreamSize;
    ULONGLONG SdsAllocationSize;
    ULONGLONG SiiStreamSize;
    ULONGLONG SiiAllocationSize;
    ULONGLONG SdhStreamSize;
    ULONGLONG SdhAllocationSize;
    ULONGLONG NumSDTotal;
    ULONGLONG NumSDUnused;
} SD_QUERY_STATS_OUTPUT, *PSD_QUERY_STATS_OUTPUT;
typedef struct _SD_ENUM_SDS_INPUT {
    ULONGLONG StartingOffset;
    ULONGLONG MaxSDEntriesToReturn;
} SD_ENUM_SDS_INPUT, *PSD_ENUM_SDS_INPUT;
typedef struct _SD_ENUM_SDS_ENTRY {
    ULONG Hash;
    ULONG SecurityId;
    ULONGLONG Offset;
    ULONG Length;
    UCHAR Descriptor[1];
} SD_ENUM_SDS_ENTRY, *PSD_ENUM_SDS_ENTRY;
typedef struct _SD_ENUM_SDS_OUTPUT {
    ULONGLONG NextOffset;
    ULONGLONG NumSDEntriesReturned;
    ULONGLONG NumSDBytesReturned;
    SD_ENUM_SDS_ENTRY SDEntry[1];
} SD_ENUM_SDS_OUTPUT, *PSD_ENUM_SDS_OUTPUT;
#pragma warning(disable:4201)
typedef struct _SD_GLOBAL_CHANGE_INPUT
{
    ULONG Flags;
    ULONG ChangeType;
    union {
        SD_CHANGE_MACHINE_SID_INPUT SdChange;
        SD_QUERY_STATS_INPUT SdQueryStats;
        SD_ENUM_SDS_INPUT SdEnumSds;
    } DUMMYUNIONNAME;
} SD_GLOBAL_CHANGE_INPUT, *PSD_GLOBAL_CHANGE_INPUT;
typedef struct _SD_GLOBAL_CHANGE_OUTPUT
{
    ULONG Flags;
    ULONG ChangeType;
    union {
        SD_CHANGE_MACHINE_SID_OUTPUT SdChange;
        SD_QUERY_STATS_OUTPUT SdQueryStats;
        SD_ENUM_SDS_OUTPUT SdEnumSds;
    } DUMMYUNIONNAME;
} SD_GLOBAL_CHANGE_OUTPUT, *PSD_GLOBAL_CHANGE_OUTPUT;
#pragma warning( default : 4201 )
typedef struct _LOOKUP_STREAM_FROM_CLUSTER_INPUT {
    ULONG Flags;
    ULONG NumberOfClusters;
    LARGE_INTEGER Cluster[1];
} LOOKUP_STREAM_FROM_CLUSTER_INPUT, *PLOOKUP_STREAM_FROM_CLUSTER_INPUT;
typedef struct _LOOKUP_STREAM_FROM_CLUSTER_OUTPUT {
    ULONG Offset;
    ULONG NumberOfMatches;
    ULONG BufferSizeRequired;
} LOOKUP_STREAM_FROM_CLUSTER_OUTPUT, *PLOOKUP_STREAM_FROM_CLUSTER_OUTPUT;
typedef struct _LOOKUP_STREAM_FROM_CLUSTER_ENTRY {
    ULONG OffsetToNext;
    ULONG Flags;
    LARGE_INTEGER Reserved;
    LARGE_INTEGER Cluster;
    WCHAR FileName[1];
} LOOKUP_STREAM_FROM_CLUSTER_ENTRY, *PLOOKUP_STREAM_FROM_CLUSTER_ENTRY;
typedef struct _FILE_TYPE_NOTIFICATION_INPUT {
    ULONG Flags;
    ULONG NumFileTypeIDs;
    GUID FileTypeID[1];
} FILE_TYPE_NOTIFICATION_INPUT, *PFILE_TYPE_NOTIFICATION_INPUT;
DEFINE_GUID( FILE_TYPE_NOTIFICATION_GUID_PAGE_FILE, 0x0d0a64a1, 0x38fc, 0x4db8, 0x9f, 0xe7, 0x3f, 0x43, 0x52, 0xcd, 0x7c, 0x5c );
DEFINE_GUID( FILE_TYPE_NOTIFICATION_GUID_HIBERNATION_FILE, 0xb7624d64, 0xb9a3, 0x4cf8, 0x80, 0x11, 0x5b, 0x86, 0xc9, 0x40, 0xe7, 0xb7 );
DEFINE_GUID( FILE_TYPE_NOTIFICATION_GUID_CRASHDUMP_FILE, 0x9d453eb7, 0xd2a6, 0x4dbd, 0xa2, 0xe3, 0xfb, 0xd0, 0xed, 0x91, 0x09, 0xa9 );
typedef struct _CSV_MGMT_LOCK {
    ULONG Flags;
}CSV_MGMT_LOCK, *PCSV_MGMT_LOCK;
typedef struct _CSV_NAMESPACE_INFO {
    ULONG Version;
    ULONG DeviceNumber;
    LARGE_INTEGER StartingOffset;
    ULONG SectorSize;
} CSV_NAMESPACE_INFO, *PCSV_NAMESPACE_INFO;
typedef enum _CSV_CONTROL_OP {
    CsvControlStartRedirectFile = 0x02,
    CsvControlStopRedirectFile = 0x03,
    CsvControlQueryRedirectState = 0x04,
    CsvControlQueryFileRevision = 0x06,
    CsvControlQueryMdsPath = 0x08,
    CsvControlQueryFileRevisionFileId128 = 0x09,
    CsvControlQueryVolumeRedirectState = 0x0a,
    CsvControlEnableUSNRangeModificationTracking = 0x0d,
    CsvControlMarkHandleLocalVolumeMount = 0x0e,
    CsvControlUnmarkHandleLocalVolumeMount = 0x0f,
    CsvControlGetCsvFsMdsPathV2 = 0x12,
    CsvControlDisableCaching = 0x13,
    CsvControlEnableCaching = 0x14,
} CSV_CONTROL_OP, *PCSV_CONTROL_OP;
typedef struct _CSV_CONTROL_PARAM {
    CSV_CONTROL_OP Operation;
    LONGLONG Unused;
} CSV_CONTROL_PARAM, *PCSV_CONTROL_PARAM;
typedef struct _CSV_QUERY_REDIRECT_STATE {
    ULONG MdsNodeId;
    ULONG DsNodeId;
    BOOLEAN FileRedirected;
} CSV_QUERY_REDIRECT_STATE, *PCSV_QUERY_REDIRECT_STATE;
typedef struct _CSV_QUERY_FILE_REVISION {
    LONGLONG FileId;
    LONGLONG FileRevision[3];
} CSV_QUERY_FILE_REVISION, *PCSV_QUERY_FILE_REVISION;
typedef struct _CSV_QUERY_FILE_REVISION_FILE_ID_128 {
    FILE_ID_128 FileId;
    LONGLONG FileRevision[3];
} CSV_QUERY_FILE_REVISION_FILE_ID_128, *PCSV_QUERY_FILE_REVISION_FILE_ID_128;
typedef struct _CSV_QUERY_MDS_PATH {
    ULONG MdsNodeId;
    ULONG DsNodeId;
    ULONG PathLength;
    WCHAR Path[1];
} CSV_QUERY_MDS_PATH, *PCSV_QUERY_MDS_PATH;
typedef enum _CSVFS_DISK_CONNECTIVITY
{
    CsvFsDiskConnectivityNone = 0,
    CsvFsDiskConnectivityMdsNodeOnly = 1,
    CsvFsDiskConnectivitySubsetOfNodes = 2,
    CsvFsDiskConnectivityAllNodes = 3
} CSVFS_DISK_CONNECTIVITY, *PCSVFS_DISK_CONNECTIVITY;
typedef struct _CSV_QUERY_VOLUME_REDIRECT_STATE {
    ULONG MdsNodeId;
    ULONG DsNodeId;
    BOOLEAN IsDiskConnected;
    BOOLEAN ClusterEnableDirectIo;
    CSVFS_DISK_CONNECTIVITY DiskConnectivity;
} CSV_QUERY_VOLUME_REDIRECT_STATE, *PCSV_QUERY_VOLUME_REDIRECT_STATE;
typedef struct _CSV_QUERY_MDS_PATH_V2 {
    LONGLONG Version;
    ULONG RequiredSize;
    ULONG MdsNodeId;
    ULONG DsNodeId;
    ULONG Flags;
    CSVFS_DISK_CONNECTIVITY DiskConnectivity;
    GUID VolumeId;
    ULONG IpAddressOffset;
    ULONG IpAddressLength;
    ULONG PathOffset;
    ULONG PathLength;
} CSV_QUERY_MDS_PATH_V2, *PCSV_QUERY_MDS_PATH_V2;
typedef struct _CSV_QUERY_VETO_FILE_DIRECT_IO_OUTPUT {
    ULONGLONG VetoedFromAltitudeIntegral;
    ULONGLONG VetoedFromAltitudeDecimal;
    WCHAR Reason[256];
} CSV_QUERY_VETO_FILE_DIRECT_IO_OUTPUT, *PCSV_QUERY_VETO_FILE_DIRECT_IO_OUTPUT;
typedef enum _STORAGE_RESERVE_ID {
    StorageReserveIdNone = 0,
    StorageReserveIdHard,
    StorageReserveIdSoft,
    StorageReserveIdUpdateScratch,
    StorageReserveIdMax
} STORAGE_RESERVE_ID, *PSTORAGE_RESERVE_ID;
typedef struct _CSV_IS_OWNED_BY_CSVFS {
    BOOLEAN OwnedByCSVFS;
}CSV_IS_OWNED_BY_CSVFS, *PCSV_IS_OWNED_BY_CSVFS;
typedef struct _FILE_LEVEL_TRIM_RANGE {
    ULONGLONG Offset;
    ULONGLONG Length;
} FILE_LEVEL_TRIM_RANGE, *PFILE_LEVEL_TRIM_RANGE;
typedef struct _FILE_LEVEL_TRIM {
    ULONG Key;
    ULONG NumRanges;
    FILE_LEVEL_TRIM_RANGE Ranges[1];
} FILE_LEVEL_TRIM, *PFILE_LEVEL_TRIM;
typedef struct _FILE_LEVEL_TRIM_OUTPUT {
    ULONG NumRangesProcessed;
} FILE_LEVEL_TRIM_OUTPUT, *PFILE_LEVEL_TRIM_OUTPUT;
typedef enum _QUERY_FILE_LAYOUT_FILTER_TYPE {
    QUERY_FILE_LAYOUT_FILTER_TYPE_NONE = 0,
    QUERY_FILE_LAYOUT_FILTER_TYPE_CLUSTERS = 1,
    QUERY_FILE_LAYOUT_FILTER_TYPE_FILEID = 2,
    QUERY_FILE_LAYOUT_FILTER_TYPE_STORAGE_RESERVE_ID = 3,
    QUERY_FILE_LAYOUT_NUM_FILTER_TYPES
} QUERY_FILE_LAYOUT_FILTER_TYPE;
typedef struct _CLUSTER_RANGE {
    LARGE_INTEGER StartingCluster;
    LARGE_INTEGER ClusterCount;
} CLUSTER_RANGE, *PCLUSTER_RANGE;
typedef struct _FILE_REFERENCE_RANGE {
    ULONGLONG StartingFileReferenceNumber;
    ULONGLONG EndingFileReferenceNumber;
} FILE_REFERENCE_RANGE, *PFILE_REFERENCE_RANGE;
typedef struct _QUERY_FILE_LAYOUT_INPUT {
    union {
        ULONG FilterEntryCount;
        ULONG NumberOfPairs;
    } DUMMYUNIONNAME;
    ULONG Flags;
    QUERY_FILE_LAYOUT_FILTER_TYPE FilterType;
    ULONG Reserved;
    union {
        _When_((FilterType == QUERY_FILE_LAYOUT_FILTER_TYPE_CLUSTERS),
               _Field_size_(FilterEntryCount))
        CLUSTER_RANGE ClusterRanges[1];
        _When_((FilterType == QUERY_FILE_LAYOUT_FILTER_TYPE_FILEID),
               _Field_size_(FilterEntryCount))
        FILE_REFERENCE_RANGE FileReferenceRanges[1];
        _When_((FilterType == QUERY_FILE_LAYOUT_FILTER_TYPE_STORAGE_RESERVE_ID),
                _Field_size_(FilterEntryCount))
        STORAGE_RESERVE_ID StorageReserveIds[1];
    } Filter;
} QUERY_FILE_LAYOUT_INPUT, *PQUERY_FILE_LAYOUT_INPUT;
typedef struct _QUERY_FILE_LAYOUT_OUTPUT {
    ULONG FileEntryCount;
    ULONG FirstFileOffset;
    ULONG Flags;
    ULONG Reserved;
} QUERY_FILE_LAYOUT_OUTPUT, *PQUERY_FILE_LAYOUT_OUTPUT;
typedef struct _FILE_LAYOUT_ENTRY {
    ULONG Version;
    ULONG NextFileOffset;
    ULONG Flags;
    ULONG FileAttributes;
    ULONGLONG FileReferenceNumber;
    ULONG FirstNameOffset;
    ULONG FirstStreamOffset;
    ULONG ExtraInfoOffset;
    ULONG ExtraInfoLength;
} FILE_LAYOUT_ENTRY, *PFILE_LAYOUT_ENTRY;
typedef struct _FILE_LAYOUT_NAME_ENTRY {
    ULONG NextNameOffset;
    ULONG Flags;
    ULONGLONG ParentFileReferenceNumber;
    ULONG FileNameLength;
    ULONG Reserved;
    _Field_size_bytes_(FileNameLength)
    WCHAR FileName[1];
} FILE_LAYOUT_NAME_ENTRY, *PFILE_LAYOUT_NAME_ENTRY;
typedef struct _FILE_LAYOUT_INFO_ENTRY {
    struct {
        LARGE_INTEGER CreationTime;
        LARGE_INTEGER LastAccessTime;
        LARGE_INTEGER LastWriteTime;
        LARGE_INTEGER ChangeTime;
        ULONG FileAttributes;
    } BasicInformation;
    ULONG OwnerId;
    ULONG SecurityId;
    USN Usn;
    STORAGE_RESERVE_ID StorageReserveId;
} FILE_LAYOUT_INFO_ENTRY, *PFILE_LAYOUT_INFO_ENTRY;
typedef struct _STREAM_LAYOUT_ENTRY {
    ULONG Version;
    ULONG NextStreamOffset;
    ULONG Flags;
    ULONG ExtentInformationOffset;
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG StreamInformationOffset;
    ULONG AttributeTypeCode;
    ULONG AttributeFlags;
    ULONG StreamIdentifierLength;
    _Field_size_bytes_(StreamIdentifierLength)
    WCHAR StreamIdentifier[1];
} STREAM_LAYOUT_ENTRY, *PSTREAM_LAYOUT_ENTRY;
typedef struct _STREAM_EXTENT_ENTRY {
    ULONG Flags;
    union {
        RETRIEVAL_POINTERS_BUFFER RetrievalPointers;
    } ExtentInformation;
} STREAM_EXTENT_ENTRY, *PSTREAM_EXTENT_ENTRY;
typedef struct _FSCTL_GET_INTEGRITY_INFORMATION_BUFFER {
    USHORT ChecksumAlgorithm;
    USHORT Reserved;
    ULONG Flags;
    ULONG ChecksumChunkSizeInBytes;
    ULONG ClusterSizeInBytes;
} FSCTL_GET_INTEGRITY_INFORMATION_BUFFER, *PFSCTL_GET_INTEGRITY_INFORMATION_BUFFER;
typedef struct _FSCTL_SET_INTEGRITY_INFORMATION_BUFFER {
    USHORT ChecksumAlgorithm;
    USHORT Reserved;
    ULONG Flags;
} FSCTL_SET_INTEGRITY_INFORMATION_BUFFER, *PFSCTL_SET_INTEGRITY_INFORMATION_BUFFER;
typedef struct _FSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX {
    UCHAR EnableIntegrity;
    UCHAR KeepIntegrityStateUnchanged;
    USHORT Reserved;
    ULONG Flags;
    UCHAR Version;
    UCHAR Reserved2[7];
} FSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX, *PFSCTL_SET_INTEGRITY_INFORMATION_BUFFER_EX;
typedef struct _FSCTL_OFFLOAD_READ_INPUT {
    ULONG Size;
    ULONG Flags;
    ULONG TokenTimeToLive;
    ULONG Reserved;
    ULONGLONG FileOffset;
    ULONGLONG CopyLength;
} FSCTL_OFFLOAD_READ_INPUT, *PFSCTL_OFFLOAD_READ_INPUT;
typedef struct _FSCTL_OFFLOAD_READ_OUTPUT {
    ULONG Size;
    ULONG Flags;
    ULONGLONG TransferLength;
    UCHAR Token[512];
} FSCTL_OFFLOAD_READ_OUTPUT, *PFSCTL_OFFLOAD_READ_OUTPUT;
typedef struct _FSCTL_OFFLOAD_WRITE_INPUT {
    ULONG Size;
    ULONG Flags;
    ULONGLONG FileOffset;
    ULONGLONG CopyLength;
    ULONGLONG TransferOffset;
    UCHAR Token[512];
} FSCTL_OFFLOAD_WRITE_INPUT, *PFSCTL_OFFLOAD_WRITE_INPUT;
typedef struct _FSCTL_OFFLOAD_WRITE_OUTPUT {
    ULONG Size;
    ULONG Flags;
    ULONGLONG LengthWritten;
} FSCTL_OFFLOAD_WRITE_OUTPUT, *PFSCTL_OFFLOAD_WRITE_OUTPUT;
typedef struct _SET_PURGE_FAILURE_MODE_INPUT {
    ULONG Flags;
} SET_PURGE_FAILURE_MODE_INPUT, *PSET_PURGE_FAILURE_MODE_INPUT;
typedef struct _REPAIR_COPIES_INPUT {
    ULONG Size;
    ULONG Flags;
    LARGE_INTEGER FileOffset;
    ULONG Length;
    ULONG SourceCopy;
    ULONG NumberOfRepairCopies;
    ULONG RepairCopies[ANYSIZE_ARRAY];
} REPAIR_COPIES_INPUT, *PREPAIR_COPIES_INPUT;
typedef struct _REPAIR_COPIES_OUTPUT {
    ULONG Size;
    NTSTATUS Status;
    LARGE_INTEGER ResumeFileOffset;
} REPAIR_COPIES_OUTPUT, *PREPAIR_COPIES_OUTPUT;
                                                 FILE_REGION_USAGE_HUGE_PAGE_ALIGNMENT)
typedef struct _FILE_REGION_INFO {
    LONGLONG FileOffset;
    LONGLONG Length;
    ULONG Usage;
    ULONG Reserved;
} FILE_REGION_INFO, *PFILE_REGION_INFO;
typedef struct _FILE_REGION_OUTPUT {
    ULONG Flags;
    ULONG TotalRegionEntryCount;
    ULONG RegionEntryCount;
    ULONG Reserved;
    FILE_REGION_INFO Region[1];
} FILE_REGION_OUTPUT, *PFILE_REGION_OUTPUT;
typedef struct _FILE_REGION_INPUT {
    LONGLONG FileOffset;
    LONGLONG Length;
    ULONG DesiredUsage;
} FILE_REGION_INPUT, *PFILE_REGION_INPUT;
                                         USN_REASON_CLOSE)
typedef struct _WRITE_USN_REASON_INPUT {
    ULONG Flags;
    ULONG UsnReasonToWrite;
} WRITE_USN_REASON_INPUT, *PWRITE_USN_REASON_INPUT;
typedef enum _FILE_STORAGE_TIER_MEDIA_TYPE {
    FileStorageTierMediaTypeUnspecified = 0,
    FileStorageTierMediaTypeDisk = 1,
    FileStorageTierMediaTypeSsd = 2,
    FileStorageTierMediaTypeScm = 4,
    FileStorageTierMediaTypeMax
} FILE_STORAGE_TIER_MEDIA_TYPE, *PFILE_STORAGE_TIER_MEDIA_TYPE;
typedef enum _FILE_STORAGE_TIER_CLASS {
    FileStorageTierClassUnspecified = 0,
    FileStorageTierClassCapacity,
    FileStorageTierClassPerformance,
    FileStorageTierClassMax
} FILE_STORAGE_TIER_CLASS, *PFILE_STORAGE_TIER_CLASS;
typedef struct _FILE_STORAGE_TIER {
    GUID Id;
    WCHAR Name[FILE_STORAGE_TIER_NAME_LENGTH];
    WCHAR Description[FILE_STORAGE_TIER_NAME_LENGTH];
    ULONGLONG Flags;
    ULONGLONG ProvisionedCapacity;
    FILE_STORAGE_TIER_MEDIA_TYPE MediaType;
    FILE_STORAGE_TIER_CLASS Class;
} FILE_STORAGE_TIER, *PFILE_STORAGE_TIER;
typedef _Struct_size_bytes_(Size) struct _FSCTL_QUERY_STORAGE_CLASSES_OUTPUT {
    ULONG Version;
    ULONG Size;
    ULONG Flags;
    ULONG TotalNumberOfTiers;
    ULONG NumberOfTiersReturned;
    FILE_STORAGE_TIER Tiers[ANYSIZE_ARRAY];
} FSCTL_QUERY_STORAGE_CLASSES_OUTPUT, *PFSCTL_QUERY_STORAGE_CLASSES_OUTPUT;
typedef struct _STREAM_INFORMATION_ENTRY {
    ULONG Version;
    ULONG Flags;
    union _StreamInformation {
        struct _DesiredStorageClass {
            FILE_STORAGE_TIER_CLASS Class;
            ULONG Flags;
        } DesiredStorageClass;
    } StreamInformation;
} STREAM_INFORMATION_ENTRY, *PSTREAM_INFORMATION_ENTRY;
typedef struct _FSCTL_QUERY_REGION_INFO_INPUT {
    ULONG Version;
    ULONG Size;
    ULONG Flags;
    ULONG NumberOfTierIds;
    GUID TierIds[ANYSIZE_ARRAY];
} FSCTL_QUERY_REGION_INFO_INPUT, *PFSCTL_QUERY_REGION_INFO_INPUT;
typedef struct _FILE_STORAGE_TIER_REGION {
    GUID TierId;
    ULONGLONG Offset;
    ULONGLONG Length;
} FILE_STORAGE_TIER_REGION, *PFILE_STORAGE_TIER_REGION;
typedef struct _FSCTL_QUERY_REGION_INFO_OUTPUT {
    ULONG Version;
    ULONG Size;
    ULONG Flags;
    ULONG Reserved;
    ULONGLONG Alignment;
    ULONG TotalNumberOfRegions;
    ULONG NumberOfRegionsReturned;
    FILE_STORAGE_TIER_REGION Regions[ANYSIZE_ARRAY];
} FSCTL_QUERY_REGION_INFO_OUTPUT, *PFSCTL_QUERY_REGION_INFO_OUTPUT;
typedef struct _FILE_DESIRED_STORAGE_CLASS_INFORMATION {
    FILE_STORAGE_TIER_CLASS Class;
    ULONG Flags;
} FILE_DESIRED_STORAGE_CLASS_INFORMATION, *PFILE_DESIRED_STORAGE_CLASS_INFORMATION;
typedef struct _DUPLICATE_EXTENTS_DATA {
    HANDLE FileHandle;
    LARGE_INTEGER SourceFileOffset;
    LARGE_INTEGER TargetFileOffset;
    LARGE_INTEGER ByteCount;
} DUPLICATE_EXTENTS_DATA, *PDUPLICATE_EXTENTS_DATA;
typedef struct _DUPLICATE_EXTENTS_DATA32 {
    UINT32 FileHandle;
    LARGE_INTEGER SourceFileOffset;
    LARGE_INTEGER TargetFileOffset;
    LARGE_INTEGER ByteCount;
} DUPLICATE_EXTENTS_DATA32, *PDUPLICATE_EXTENTS_DATA32;
typedef struct _DUPLICATE_EXTENTS_DATA_EX {
    SIZE_T Size;
    HANDLE FileHandle;
    LARGE_INTEGER SourceFileOffset;
    LARGE_INTEGER TargetFileOffset;
    LARGE_INTEGER ByteCount;
    ULONG Flags;
} DUPLICATE_EXTENTS_DATA_EX, *PDUPLICATE_EXTENTS_DATA_EX;
typedef struct _DUPLICATE_EXTENTS_DATA_EX32 {
    ULONG32 Size;
    ULONG32 FileHandle;
    LARGE_INTEGER SourceFileOffset;
    LARGE_INTEGER TargetFileOffset;
    LARGE_INTEGER ByteCount;
    ULONG Flags;
} DUPLICATE_EXTENTS_DATA_EX32, *PDUPLICATE_EXTENTS_DATA_EX32;
typedef enum _REFS_SMR_VOLUME_GC_STATE {
    SmrGcStateInactive = 0,
    SmrGcStatePaused = 1,
    SmrGcStateActive = 2,
    SmrGcStateActiveFullSpeed = 3,
} REFS_SMR_VOLUME_GC_STATE, *PREFS_SMR_VOLUME_GC_STATE;
typedef struct _REFS_SMR_VOLUME_INFO_OUTPUT {
    ULONG Version;
    ULONG Flags;
    LARGE_INTEGER SizeOfRandomlyWritableTier;
    LARGE_INTEGER FreeSpaceInRandomlyWritableTier;
    LARGE_INTEGER SizeofSMRTier;
    LARGE_INTEGER FreeSpaceInSMRTier;
    LARGE_INTEGER UsableFreeSpaceInSMRTier;
    REFS_SMR_VOLUME_GC_STATE VolumeGcState;
    NTSTATUS VolumeGcLastStatus;
    ULONGLONG Unused[7];
} REFS_SMR_VOLUME_INFO_OUTPUT, *PREFS_SMR_VOLUME_INFO_OUTPUT;
typedef enum _REFS_SMR_VOLUME_GC_ACTION {
    SmrGcActionStart = 1,
    SmrGcActionStartFullSpeed = 2,
    SmrGcActionPause = 3,
    SmrGcActionStop = 4,
} REFS_SMR_VOLUME_GC_ACTION, *PREFS_SMR_VOLUME_GC_ACTION;
typedef enum _REFS_SMR_VOLUME_GC_METHOD {
    SmrGcMethodCompaction = 1,
    SmrGcMethodCompression = 2,
    SmrGcMethodRotation = 3,
} REFS_SMR_VOLUME_GC_METHOD, *PREFS_SMR_VOLUME_GC_METHOD;
typedef struct _REFS_SMR_VOLUME_GC_PARAMETERS {
    ULONG Version;
    ULONG Flags;
    REFS_SMR_VOLUME_GC_ACTION Action;
    REFS_SMR_VOLUME_GC_METHOD Method;
    ULONG IoGranularity;
    ULONG CompressionFormat;
    ULONGLONG Unused[8];
} REFS_SMR_VOLUME_GC_PARAMETERS, *PREFS_SMR_VOLUME_GC_PARAMETERS;
typedef struct _STREAMS_QUERY_PARAMETERS_OUTPUT_BUFFER {
    ULONG OptimalWriteSize;
    ULONG StreamGranularitySize;
    ULONG StreamIdMin;
    ULONG StreamIdMax;
} STREAMS_QUERY_PARAMETERS_OUTPUT_BUFFER, *PSTREAMS_QUERY_PARAMETERS_OUTPUT_BUFFER;
typedef struct _STREAMS_ASSOCIATE_ID_INPUT_BUFFER {
    ULONG Flags;
    ULONG StreamId;
} STREAMS_ASSOCIATE_ID_INPUT_BUFFER, *PSTREAMS_ASSOCIATE_ID_INPUT_BUFFER;
typedef struct _STREAMS_QUERY_ID_OUTPUT_BUFFER {
    ULONG StreamId;
} STREAMS_QUERY_ID_OUTPUT_BUFFER, *PSTREAMS_QUERY_ID_OUTPUT_BUFFER;
typedef struct _QUERY_BAD_RANGES_INPUT_RANGE {
    ULONGLONG StartOffset;
    ULONGLONG LengthInBytes;
} QUERY_BAD_RANGES_INPUT_RANGE, *PQUERY_BAD_RANGES_INPUT_RANGE;
typedef struct _QUERY_BAD_RANGES_INPUT {
    ULONG Flags;
    ULONG NumRanges;
    QUERY_BAD_RANGES_INPUT_RANGE Ranges[1];
} QUERY_BAD_RANGES_INPUT, *PQUERY_BAD_RANGES_INPUT;
typedef struct _QUERY_BAD_RANGES_OUTPUT_RANGE {
    ULONG Flags;
    ULONG Reserved;
    ULONGLONG StartOffset;
    ULONGLONG LengthInBytes;
} QUERY_BAD_RANGES_OUTPUT_RANGE, *PQUERY_BAD_RANGES_OUTPUT_RANGE;
typedef struct _QUERY_BAD_RANGES_OUTPUT {
    ULONG Flags;
    ULONG NumBadRanges;
    ULONGLONG NextOffsetToLookUp;
    QUERY_BAD_RANGES_OUTPUT_RANGE BadRanges[1];
} QUERY_BAD_RANGES_OUTPUT, *PQUERY_BAD_RANGES_OUTPUT;
typedef struct _SET_DAX_ALLOC_ALIGNMENT_HINT_INPUT {
    ULONG Flags;
    ULONG AlignmentShift;
    ULONGLONG FileOffsetToAlign;
    ULONG FallbackAlignmentShift;
} SET_DAX_ALLOC_ALIGNMENT_HINT_INPUT, *PSET_DAX_ALLOC_ALIGNMENT_HINT_INPUT;
typedef enum _VIRTUAL_STORAGE_BEHAVIOR_CODE {
    VirtualStorageBehaviorUndefined = 0,
    VirtualStorageBehaviorCacheWriteThrough = 1,
    VirtualStorageBehaviorCacheWriteBack = 2
} VIRTUAL_STORAGE_BEHAVIOR_CODE, *PVIRTUAL_STORAGE_BEHAVIOR_CODE;
typedef struct _VIRTUAL_STORAGE_SET_BEHAVIOR_INPUT {
    ULONG Size;
    VIRTUAL_STORAGE_BEHAVIOR_CODE BehaviorCode;
} VIRTUAL_STORAGE_SET_BEHAVIOR_INPUT, *PVIRTUAL_STORAGE_SET_BEHAVIOR_INPUT;
typedef struct _ENCRYPTION_KEY_CTRL_INPUT {
    ULONG HeaderSize;
    ULONG StructureSize;
    USHORT KeyOffset;
    USHORT KeySize;
    ULONG DplLock;
    ULONGLONG DplUserId;
    ULONGLONG DplCredentialId;
} ENCRYPTION_KEY_CTRL_INPUT, *PENCRYPTION_KEY_CTRL_INPUT;
typedef struct _WOF_EXTERNAL_INFO {
    ULONG Version;
    ULONG Provider;
} WOF_EXTERNAL_INFO, *PWOF_EXTERNAL_INFO;
typedef struct _WOF_EXTERNAL_FILE_ID {
    FILE_ID_128 FileId;
} WOF_EXTERNAL_FILE_ID, *PWOF_EXTERNAL_FILE_ID;
typedef struct _WOF_VERSION_INFO {
    ULONG WofVersion;
} WOF_VERSION_INFO, *PWOF_VERSION_INFO;
typedef struct _WIM_PROVIDER_EXTERNAL_INFO {
    ULONG Version;
    ULONG Flags;
    LARGE_INTEGER DataSourceId;
    UCHAR ResourceHash[WIM_PROVIDER_HASH_SIZE];
} WIM_PROVIDER_EXTERNAL_INFO, *PWIM_PROVIDER_EXTERNAL_INFO;
typedef struct _WIM_PROVIDER_ADD_OVERLAY_INPUT {
    ULONG WimType;
    ULONG WimIndex;
    ULONG WimFileNameOffset;
    ULONG WimFileNameLength;
} WIM_PROVIDER_ADD_OVERLAY_INPUT, *PWIM_PROVIDER_ADD_OVERLAY_INPUT;
typedef struct _WIM_PROVIDER_UPDATE_OVERLAY_INPUT {
    LARGE_INTEGER DataSourceId;
    ULONG WimFileNameOffset;
    ULONG WimFileNameLength;
} WIM_PROVIDER_UPDATE_OVERLAY_INPUT, *PWIM_PROVIDER_UPDATE_OVERLAY_INPUT;
typedef struct _WIM_PROVIDER_REMOVE_OVERLAY_INPUT {
    LARGE_INTEGER DataSourceId;
} WIM_PROVIDER_REMOVE_OVERLAY_INPUT, *PWIM_PROVIDER_REMOVE_OVERLAY_INPUT;
typedef struct _WIM_PROVIDER_SUSPEND_OVERLAY_INPUT {
    LARGE_INTEGER DataSourceId;
} WIM_PROVIDER_SUSPEND_OVERLAY_INPUT, *PWIM_PROVIDER_SUSPEND_OVERLAY_INPUT;
typedef struct _WIM_PROVIDER_OVERLAY_ENTRY {
    ULONG NextEntryOffset;
    LARGE_INTEGER DataSourceId;
    GUID WimGuid;
    ULONG WimFileNameOffset;
    ULONG WimType;
    ULONG WimIndex;
    ULONG Flags;
} WIM_PROVIDER_OVERLAY_ENTRY, *PWIM_PROVIDER_OVERLAY_ENTRY;
typedef struct _FILE_PROVIDER_EXTERNAL_INFO_V0 {
    ULONG Version;
    ULONG Algorithm;
} FILE_PROVIDER_EXTERNAL_INFO_V0, *PFILE_PROVIDER_EXTERNAL_INFO_V0;
typedef struct _FILE_PROVIDER_EXTERNAL_INFO_V1 {
    ULONG Version;
    ULONG Algorithm;
    ULONG Flags;
} FILE_PROVIDER_EXTERNAL_INFO_V1, *PFILE_PROVIDER_EXTERNAL_INFO_V1;
typedef FILE_PROVIDER_EXTERNAL_INFO_V1 FILE_PROVIDER_EXTERNAL_INFO;
typedef PFILE_PROVIDER_EXTERNAL_INFO_V1 PFILE_PROVIDER_EXTERNAL_INFO;
typedef struct _CONTAINER_VOLUME_STATE {
    ULONG Flags;
} CONTAINER_VOLUME_STATE, *PCONTAINER_VOLUME_STATE;
typedef struct _CONTAINER_ROOT_INFO_INPUT {
    ULONG Flags;
} CONTAINER_ROOT_INFO_INPUT, *PCONTAINER_ROOT_INFO_INPUT;
typedef struct _CONTAINER_ROOT_INFO_OUTPUT {
    USHORT ContainerRootIdLength;
    UCHAR ContainerRootId[ANYSIZE_ARRAY];
} CONTAINER_ROOT_INFO_OUTPUT, *PCONTAINER_ROOT_INFO_OUTPUT;
typedef struct _VIRTUALIZATION_INSTANCE_INFO_INPUT {
    ULONG NumberOfWorkerThreads;
    ULONG Flags;
} VIRTUALIZATION_INSTANCE_INFO_INPUT, *PVIRTUALIZATION_INSTANCE_INFO_INPUT;
typedef struct _VIRTUALIZATION_INSTANCE_INFO_INPUT_EX {
    USHORT HeaderSize;
    ULONG Flags;
    ULONG NotificationInfoSize;
    USHORT NotificationInfoOffset;
    USHORT ProviderMajorVersion;
} VIRTUALIZATION_INSTANCE_INFO_INPUT_EX, *PVIRTUALIZATION_INSTANCE_INFO_INPUT_EX;
typedef struct _VIRTUALIZATION_INSTANCE_INFO_OUTPUT {
    GUID VirtualizationInstanceID;
} VIRTUALIZATION_INSTANCE_INFO_OUTPUT, *PVIRTUALIZATION_INSTANCE_INFO_OUTPUT;
typedef struct _GET_FILTER_FILE_IDENTIFIER_INPUT {
    USHORT AltitudeLength;
    WCHAR Altitude[ANYSIZE_ARRAY];
} GET_FILTER_FILE_IDENTIFIER_INPUT, *PGET_FILTER_FILE_IDENTIFIER_INPUT;
typedef struct _GET_FILTER_FILE_IDENTIFIER_OUTPUT {
    USHORT FilterFileIdentifierLength;
    UCHAR FilterFileIdentifier[ANYSIZE_ARRAY];
} GET_FILTER_FILE_IDENTIFIER_OUTPUT, *PGET_FILTER_FILE_IDENTIFIER_OUTPUT;
#pragma warning(disable:4201)
typedef struct _REPARSE_DATA_BUFFER {
    ULONG ReparseTag;
    USHORT ReparseDataLength;
    USHORT Reserved;
    _Field_size_bytes_(ReparseDataLength)
    union {
        struct {
            USHORT SubstituteNameOffset;
            USHORT SubstituteNameLength;
            USHORT PrintNameOffset;
            USHORT PrintNameLength;
            ULONG Flags;
            WCHAR PathBuffer[1];
        } SymbolicLinkReparseBuffer;
        struct {
            USHORT SubstituteNameOffset;
            USHORT SubstituteNameLength;
            USHORT PrintNameOffset;
            USHORT PrintNameLength;
            WCHAR PathBuffer[1];
        } MountPointReparseBuffer;
        struct {
            UCHAR DataBuffer[1];
        } GenericReparseBuffer;
    } DUMMYUNIONNAME;
} REPARSE_DATA_BUFFER, *PREPARSE_DATA_BUFFER;
#pragma warning( default : 4201 )
typedef struct _REPARSE_GUID_DATA_BUFFER {
    ULONG ReparseTag;
    USHORT ReparseDataLength;
    USHORT Reserved;
    GUID ReparseGuid;
    struct {
        UCHAR DataBuffer[1];
    } GenericReparseBuffer;
} REPARSE_GUID_DATA_BUFFER, *PREPARSE_GUID_DATA_BUFFER;










#pragma pack(4)
typedef struct _REPARSE_INDEX_KEY {
    ULONG FileReparseTag;
    LARGE_INTEGER FileId;
} REPARSE_INDEX_KEY, *PREPARSE_INDEX_KEY;
#pragma pack()
typedef struct _REPARSE_DATA_BUFFER_EX {
    ULONG Flags;
    ULONG ExistingReparseTag;
    GUID ExistingReparseGuid;
    ULONGLONG Reserved;
    union {
        REPARSE_DATA_BUFFER ReparseDataBuffer;
        REPARSE_GUID_DATA_BUFFER ReparseGuidDataBuffer;
    } DUMMYUNIONNAME;
} REPARSE_DATA_BUFFER_EX, *PREPARSE_DATA_BUFFER_EX;




typedef struct _SCRUB_DATA_INPUT {
    ULONG Size;
    ULONG Flags;
    ULONG MaximumIos;
    ULONG ObjectId[4];
    ULONG Reserved[25];
    UCHAR ResumeContext[816];
} SCRUB_DATA_INPUT, *PSCRUB_DATA_INPUT;
typedef struct _SCRUB_PARITY_EXTENT {
    LONGLONG Offset;
    ULONGLONG Length;
} SCRUB_PARITY_EXTENT, *PSCRUB_PARITY_EXTENT;
typedef struct _SCRUB_PARITY_EXTENT_DATA {
    USHORT Size;
    USHORT Flags;
    USHORT NumberOfParityExtents;
    USHORT MaximumNumberOfParityExtents;
    SCRUB_PARITY_EXTENT ParityExtents[ANYSIZE_ARRAY];
} SCRUB_PARITY_EXTENT_DATA, *PSCRUB_PARITY_EXTENT_DATA;
typedef struct _SCRUB_DATA_OUTPUT {
    ULONG Size;
    ULONG Flags;
    ULONG Status;
    ULONGLONG ErrorFileOffset;
    ULONGLONG ErrorLength;
    ULONGLONG NumberOfBytesRepaired;
    ULONGLONG NumberOfBytesFailed;
    ULONGLONG InternalFileReference;
    USHORT ResumeContextLength;
    USHORT ParityExtentDataOffset;
    ULONG Reserved[9];
    ULONGLONG NumberOfMetadataBytesProcessed;
    ULONGLONG NumberOfDataBytesProcessed;
    ULONGLONG TotalNumberOfMetadataBytesInUse;
    ULONGLONG TotalNumberOfDataBytesInUse;
    UCHAR ResumeContext[816];
} SCRUB_DATA_OUTPUT, *PSCRUB_DATA_OUTPUT;
typedef enum _SharedVirtualDiskSupportType
{
    SharedVirtualDisksUnsupported = 0,
    SharedVirtualDisksSupported = 1,
    SharedVirtualDiskSnapshotsSupported = 3,
    SharedVirtualDiskCDPSnapshotsSupported = 7
} SharedVirtualDiskSupportType;
typedef enum _SharedVirtualDiskHandleState
{
    SharedVirtualDiskHandleStateNone = 0,
    SharedVirtualDiskHandleStateFileShared = 1,
    SharedVirtualDiskHandleStateHandleShared = 3
} SharedVirtualDiskHandleState;
typedef struct _SHARED_VIRTUAL_DISK_SUPPORT {
    SharedVirtualDiskSupportType SharedVirtualDiskSupport;
    SharedVirtualDiskHandleState HandleState;
} SHARED_VIRTUAL_DISK_SUPPORT, *PSHARED_VIRTUAL_DISK_SUPPORT;
typedef struct _REARRANGE_FILE_DATA {
    ULONGLONG SourceStartingOffset;
    ULONGLONG TargetOffset;
    HANDLE SourceFileHandle;
    ULONG Length;
    ULONG Flags;
} REARRANGE_FILE_DATA, *PREARRANGE_FILE_DATA;
typedef struct _REARRANGE_FILE_DATA32 {
    ULONGLONG SourceStartingOffset;
    ULONGLONG TargetOffset;
    UINT32 SourceFileHandle;
    ULONG Length;
    ULONG Flags;
} REARRANGE_FILE_DATA32, *PREARRANGE_FILE_DATA32;
typedef struct _SHUFFLE_FILE_DATA {
    LONGLONG StartingOffset;
    LONGLONG Length;
    ULONG Flags;
} SHUFFLE_FILE_DATA, *PSHUFFLE_FILE_DATA;
typedef struct _FILE_PIPE_ASSIGN_EVENT_BUFFER {
     HANDLE EventHandle;
     ULONG KeyValue;
} FILE_PIPE_ASSIGN_EVENT_BUFFER, *PFILE_PIPE_ASSIGN_EVENT_BUFFER;
typedef struct _FILE_PIPE_PEEK_BUFFER {
     ULONG NamedPipeState;
     ULONG ReadDataAvailable;
     ULONG NumberOfMessages;
     ULONG MessageLength;
     CHAR Data[1];
} FILE_PIPE_PEEK_BUFFER, *PFILE_PIPE_PEEK_BUFFER;
typedef struct _FILE_PIPE_EVENT_BUFFER {
     ULONG NamedPipeState;
     ULONG EntryType;
     ULONG ByteCount;
     ULONG KeyValue;
     ULONG NumberRequests;
} FILE_PIPE_EVENT_BUFFER, *PFILE_PIPE_EVENT_BUFFER;
typedef struct _FILE_PIPE_WAIT_FOR_BUFFER {
     LARGE_INTEGER Timeout;
     ULONG NameLength;
     BOOLEAN TimeoutSpecified;
     WCHAR Name[1];
} FILE_PIPE_WAIT_FOR_BUFFER, *PFILE_PIPE_WAIT_FOR_BUFFER;
typedef struct _FILE_PIPE_CLIENT_PROCESS_BUFFER {
     PVOID ClientSession;
     PVOID ClientProcess;
} FILE_PIPE_CLIENT_PROCESS_BUFFER, *PFILE_PIPE_CLIENT_PROCESS_BUFFER;
typedef struct _FILE_PIPE_CLIENT_PROCESS_BUFFER_V2 {
     ULONGLONG ClientSession;
     PVOID ClientProcess;
} FILE_PIPE_CLIENT_PROCESS_BUFFER_V2, *PFILE_PIPE_CLIENT_PROCESS_BUFFER_V2;
typedef struct _FILE_PIPE_CLIENT_PROCESS_BUFFER_EX {
    PVOID ClientSession;
    PVOID ClientProcess;
    USHORT ClientComputerNameLength;
    WCHAR ClientComputerBuffer[FILE_PIPE_COMPUTER_NAME_LENGTH+1];
} FILE_PIPE_CLIENT_PROCESS_BUFFER_EX, *PFILE_PIPE_CLIENT_PROCESS_BUFFER_EX;
typedef struct _FILE_PIPE_SILO_ARRIVAL_INPUT {
    HANDLE JobHandle;
} FILE_PIPE_SILO_ARRIVAL_INPUT, *PFILE_PIPE_SILO_ARRIVAL_INPUT;
                                         FILE_PIPE_SYMLINK_FLAG_RELATIVE)
typedef struct _FILE_PIPE_CREATE_SYMLINK_INPUT {
    USHORT NameOffset;
    USHORT NameLength;
    USHORT SubstituteNameOffset;
    USHORT SubstituteNameLength;
    ULONG Flags;
} FILE_PIPE_CREATE_SYMLINK_INPUT, *PFILE_PIPE_CREATE_SYMLINK_INPUT;
typedef struct _FILE_PIPE_DELETE_SYMLINK_INPUT {
    USHORT NameOffset;
    USHORT NameLength;
} FILE_PIPE_DELETE_SYMLINK_INPUT, *PFILE_PIPE_DELETE_SYMLINK_INPUT;
typedef enum _LINK_TRACKING_INFORMATION_TYPE {
    NtfsLinkTrackingInformation,
    DfsLinkTrackingInformation
} LINK_TRACKING_INFORMATION_TYPE, *PLINK_TRACKING_INFORMATION_TYPE;
typedef struct _LINK_TRACKING_INFORMATION {
    LINK_TRACKING_INFORMATION_TYPE Type;
    UCHAR VolumeId[16];
} LINK_TRACKING_INFORMATION, *PLINK_TRACKING_INFORMATION;
typedef struct _REMOTE_LINK_TRACKING_INFORMATION_ {
    PVOID TargetFileObject;
    ULONG TargetLinkTrackingInformationLength;
    UCHAR TargetLinkTrackingInformationBuffer[1];
} REMOTE_LINK_TRACKING_INFORMATION,
 *PREMOTE_LINK_TRACKING_INFORMATION;
typedef struct _VCN_RANGE_INPUT_BUFFER {
    LARGE_INTEGER StartingVcn;
    LARGE_INTEGER ClusterCount;
} VCN_RANGE_INPUT_BUFFER, *PVCN_RANGE_INPUT_BUFFER;
typedef struct _EXTENT_READ_CACHE_INFO_BUFFER {
    LARGE_INTEGER AllocatedCache;
    LARGE_INTEGER PopulatedCache;
    LARGE_INTEGER InErrorCache;
} EXTENT_READ_CACHE_INFO_BUFFER, *PEXTENT_READ_CACHE_INFO_BUFFER;
typedef struct _REFS_VOLUME_COUNTER_INFO_INPUT_BUFFER {
    BOOLEAN ResetCounters;
} REFS_VOLUME_COUNTER_INFO_INPUT_BUFFER, *PREFS_VOLUME_COUNTER_INFO_INPUT_BUFFER;
typedef struct _VOLUME_REFS_INFO_BUFFER {
    LARGE_INTEGER CacheSizeInBytes;
    LARGE_INTEGER AllocatedCacheInBytes;
    LARGE_INTEGER PopulatedCacheInBytes;
    LARGE_INTEGER InErrorCacheInBytes;
    LARGE_INTEGER MemoryUsedForCacheMetadata;
    ULONG CacheLineSize;
    LONG CacheTransactionsOutstanding;
    LONG CacheLinesFree;
    LONG CacheLinesInError;
    LARGE_INTEGER CacheHitsInBytes;
    LARGE_INTEGER CacheMissesInBytes;
    LARGE_INTEGER CachePopulationUpdatesInBytes;
    LARGE_INTEGER CacheWriteThroughUpdatesInBytes;
    LARGE_INTEGER CacheInvalidationsInBytes;
    LARGE_INTEGER CacheOverReadsInBytes;
    LARGE_INTEGER MetadataWrittenBytes;
    LONG CacheHitCounter;
    LONG CacheMissCounter;
    LONG CacheLineAllocationCounter;
    LONG CacheInvalidationsCounter;
    LONG CachePopulationUpdatesCounter;
    LONG CacheWriteThroughUpdatesCounter;
    LONG MaxCacheTransactionsOutstanding;
    LONG DataWritesReallocationCount;
    LONG DataInPlaceWriteCount;
    LONG MetadataAllocationsFastTierCount;
    LONG MetadataAllocationsSlowTierCount;
    LONG DataAllocationsFastTierCount;
    LONG DataAllocationsSlowTierCount;
    LONG DestagesSlowTierToFastTier;
    LONG DestagesFastTierToSlowTier;
    LONG SlowTierDataFillRatio;
    LONG FastTierDataFillRatio;
    LONG SlowTierMetadataFillRatio;
    LONG FastTierMetadataFillRatio;
    LONG SlowToFastDestageReadLatency;
    LONG SlowToFastDestageReadLatencyBase;
    LONG SlowToFastDestageWriteLatency;
    LONG SlowToFastDestageWriteLatencyBase;
    LONG FastToSlowDestageReadLatency;
    LONG FastToSlowDestageReadLatencyBase;
    LONG FastToSlowDestageWriteLatency;
    LONG FastToSlowDestageWriteLatencyBase;
    LONG SlowTierContainerFillRatio;
    LONG SlowTierContainerFillRatioBase;
    LONG FastTierContainerFillRatio;
    LONG FastTierContainerFillRatioBase;
    LONG TreeUpdateLatency;
    LONG TreeUpdateLatencyBase;
    LONG CheckpointLatency;
    LONG CheckpointLatencyBase;
    LONG TreeUpdateCount;
    LONG CheckpointCount;
    LONG LogWriteCount;
    LONG LogFillRatio;
    LONG ReadCacheInvalidationsForOverwrite;
    LONG ReadCacheInvalidationsForReuse;
    LONG ReadCacheInvalidationsGeneral;
    LONG ReadCacheChecksOnMount;
    LONG ReadCacheIssuesOnMount;
    LONG TrimLatency;
    LONG TrimLatencyBase;
    LONG DataCompactionCount;
    LONG CompactionReadLatency;
    LONG CompactionReadLatencyBase;
    LONG CompactionWriteLatency;
    LONG CompactionWriteLatencyBase;
    LARGE_INTEGER DataInPlaceWriteClusterCount;
    LONG CompactionFailedDueToIneligibleContainer;
    LONG CompactionFailedDueToMaxFragmentation;
    LONG CompactedContainerFillRatio;
    LONG CompactedContainerFillRatioBase;
    LONG ContainerMoveRetryCount;
    LONG ContainerMoveFailedDueToIneligibleContainer;
    LONG CompactionFailureCount;
    LONG ContainerMoveFailureCount;
    LARGE_INTEGER NumberOfDirtyMetadataPages;
    LONG NumberOfDirtyTableListEntries;
    LONG NumberOfDeleteQueueEntries;
} VOLUME_REFS_INFO_BUFFER, *PVOLUME_REFS_INFO_BUFFER;
typedef struct _FSCTL_GHOST_FILE_EXTENTS_INPUT_BUFFER {
    LARGE_INTEGER FileOffset;
    LARGE_INTEGER ByteCount;
    GUID RecallOwnerGuid;
    ULONG RecallMetadataBufferSize;
    UCHAR RecallMetadataBuffer[ANYSIZE_ARRAY];
} FSCTL_GHOST_FILE_EXTENTS_INPUT_BUFFER, *PFSCTL_GHOST_FILE_EXTENTS_INPUT_BUFFER;
typedef struct _FSCTL_QUERY_GHOSTED_FILE_EXTENTS_INPUT_RANGE {
    LARGE_INTEGER FileOffset;
    LARGE_INTEGER ByteCount;
} FSCTL_QUERY_GHOSTED_FILE_EXTENTS_INPUT_RANGE, *PFSCTL_QUERY_GHOSTED_FILE_EXTENTS_INPUT_RANGE;
typedef struct _GHOSTED_FILE_EXTENT {
    LARGE_INTEGER FileOffset;
    LARGE_INTEGER ByteCount;
    GUID RecallOwnerGuid;
    ULONG NextEntryOffset;
    ULONG RecallMetadataBufferSize;
    UCHAR RecallMetadataBuffer[ANYSIZE_ARRAY];
} GHOSTED_FILE_EXTENT, *PGHOSTED_FILE_EXTENT;
typedef struct _FSCTL_QUERY_GHOSTED_FILE_EXTENTS_OUTPUT {
    ULONG ExtentCount;
    ULONG TotalExtentCount;
    UCHAR Extents[ANYSIZE_ARRAY];
} FSCTL_QUERY_GHOSTED_FILE_EXTENTS_OUTPUT, *PFSCTL_QUERY_GHOSTED_FILE_EXTENTS_OUTPUT;





typedef struct _FSCTL_UNMAP_SPACE_INPUT_BUFFER {
    LARGE_INTEGER BytesToUnmap;
} FSCTL_UNMAP_SPACE_INPUT_BUFFER, *PFSCTL_UNMAP_SPACE_INPUT_BUFFER;
typedef struct _FSCTL_UNMAP_SPACE_OUTPUT {
    LARGE_INTEGER BytesUnmapped;
} FSCTL_UNMAP_SPACE_OUTPUT, *PFSCTL_UNMAP_SPACE_OUTPUT;
typedef struct _FSCTL_QUERY_VOLUME_NUMA_INFO_OUTPUT {
    ULONG NumaNode;
} FSCTL_QUERY_VOLUME_NUMA_INFO_OUTPUT, *PFSCTL_QUERY_VOLUME_NUMA_INFO_OUTPUT;
typedef struct _REFS_DEALLOCATE_RANGES_RANGE{
    ULONGLONG StartOfRange;
    ULONGLONG CountOfRange;
} REFS_DEALLOCATE_RANGES_RANGE, *PREFS_DEALLOCATE_RANGES_RANGE;
typedef struct _REFS_DEALLOCATE_RANGES_INPUT_BUFFER {
    ULONG RangeCount;
    REFS_DEALLOCATE_RANGES_RANGE Ranges[ANYSIZE_ARRAY];
} REFS_DEALLOCATE_RANGES_INPUT_BUFFER, *PREFS_DEALLOCATE_RANGES_INPUT_BUFFER;
typedef struct _FILE_STORAGE_RESERVE_ID_INFORMATION {
    STORAGE_RESERVE_ID StorageReserveId;
} FILE_STORAGE_RESERVE_ID_INFORMATION, *PFILE_STORAGE_RESERVE_ID_INFORMATION;
typedef struct _NETWORK_APP_INSTANCE_EA {
    GUID AppInstanceID;
    ULONG CsvFlags;
} NETWORK_APP_INSTANCE_EA, *PNETWORK_APP_INSTANCE_EA;
typedef enum _OBJECT_INFORMATION_CLASS {
    ObjectBasicInformation = 0,
    ObjectTypeInformation = 2
} OBJECT_INFORMATION_CLASS;
typedef struct _PUBLIC_OBJECT_BASIC_INFORMATION {
    ULONG Attributes;
    ACCESS_MASK GrantedAccess;
    ULONG HandleCount;
    ULONG PointerCount;
    ULONG Reserved[10];
} PUBLIC_OBJECT_BASIC_INFORMATION, *PPUBLIC_OBJECT_BASIC_INFORMATION;
typedef struct __PUBLIC_OBJECT_TYPE_INFORMATION {
    UNICODE_STRING TypeName;
    ULONG Reserved [22];
} PUBLIC_OBJECT_TYPE_INFORMATION, *PPUBLIC_OBJECT_TYPE_INFORMATION;
_IRQL_requires_max_(PASSIVE_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryObject (
    _In_opt_ HANDLE Handle,
    _In_ OBJECT_INFORMATION_CLASS ObjectInformationClass,
    _Out_writes_bytes_opt_(ObjectInformationLength) PVOID ObjectInformation,
    _In_ ULONG ObjectInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetSecurityObject (
    _In_ HANDLE Handle,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQuerySecurityObject (
    _In_ HANDLE Handle,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _Out_writes_bytes_opt_(Length) PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ ULONG Length,
    _Out_ PULONG LengthNeeded
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtClose (
    _In_ _Post_ptr_invalid_ HANDLE Handle
    );
typedef enum _MEMORY_INFORMATION_CLASS {
    MemoryBasicInformation
} MEMORY_INFORMATION_CLASS;
typedef enum _VIRTUAL_MEMORY_INFORMATION_CLASS {
    VmPrefetchInformation
} VIRTUAL_MEMORY_INFORMATION_CLASS;
typedef struct _MEMORY_BASIC_INFORMATION {
    PVOID BaseAddress;
    PVOID AllocationBase;
    ULONG AllocationProtect;
    SIZE_T RegionSize;
    ULONG State;
    ULONG Protect;
    ULONG Type;
} MEMORY_BASIC_INFORMATION, *PMEMORY_BASIC_INFORMATION;
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtCreateSection (
    _Out_ PHANDLE SectionHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PLARGE_INTEGER MaximumSize,
    _In_ ULONG SectionPageProtection,
    _In_ ULONG AllocationAttributes,
    _In_opt_ HANDLE FileHandle
    );
_Must_inspect_result_
__drv_allocatesMem(Mem)
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtAllocateVirtualMemory (
    _In_ HANDLE ProcessHandle,
    _Inout_ _At_ (*BaseAddress, _Readable_bytes_ (*RegionSize) _Writable_bytes_ (*RegionSize) _Post_readable_byte_size_ (*RegionSize)) PVOID *BaseAddress,
    _In_ ULONG_PTR ZeroBits,
    _Inout_ PSIZE_T RegionSize,
    _In_ ULONG AllocationType,
    _In_ ULONG Protect
    );
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtFreeVirtualMemory (
    _In_ HANDLE ProcessHandle,
    _Inout_ __drv_freesMem(Mem) PVOID *BaseAddress,
    _Inout_ PSIZE_T RegionSize,
    _In_ ULONG FreeType
    );
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtQueryVirtualMemory (
    _In_ HANDLE ProcessHandle,
    _In_opt_ PVOID BaseAddress,
    _In_ MEMORY_INFORMATION_CLASS MemoryInformationClass,
    _Out_writes_bytes_(MemoryInformationLength) PVOID MemoryInformation,
    _In_ SIZE_T MemoryInformationLength,
    _Out_opt_ PSIZE_T ReturnLength
    );
typedef struct _MEMORY_RANGE_ENTRY {
    PVOID VirtualAddress;
    SIZE_T NumberOfBytes;
} MEMORY_RANGE_ENTRY, *PMEMORY_RANGE_ENTRY;
_Must_inspect_result_
__kernel_entry NTSYSCALLAPI
NTSTATUS
NTAPI
NtSetInformationVirtualMemory (
    _In_ HANDLE ProcessHandle,
    _In_ VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
    _In_ ULONG_PTR NumberOfEntries,
    _In_reads_(NumberOfEntries) PMEMORY_RANGE_ENTRY VirtualAddresses,
    _In_reads_bytes_(VmInformationLength) PVOID VmInformation,
    _In_ ULONG VmInformationLength
    );
typedef struct _SECURITY_CLIENT_CONTEXT {
    SECURITY_QUALITY_OF_SERVICE SecurityQos;
    PACCESS_TOKEN ClientToken;
    BOOLEAN DirectlyAccessClientToken;
    BOOLEAN DirectAccessEffectiveOnly;
    BOOLEAN ServerIsRemote;
    TOKEN_CONTROL ClientTokenControl;
    } SECURITY_CLIENT_CONTEXT, *PSECURITY_CLIENT_CONTEXT;
typedef struct _KAPC_STATE {
    LIST_ENTRY ApcListHead[MaximumMode];
    struct _KPROCESS *Process;
    union {
        UCHAR InProgressFlags;
        struct {
            BOOLEAN KernelApcInProgress : 1;
            BOOLEAN SpecialApcInProgress : 1;
        };
    };
    BOOLEAN KernelApcPending;
    union {
        BOOLEAN UserApcPendingAll;
        struct {
            BOOLEAN SpecialUserApcPending : 1;
            BOOLEAN UserApcPending : 1;
        };
    };
} KAPC_STATE, *PKAPC_STATE, *PRKAPC_STATE;


typedef struct _KQUEUE {
    DISPATCHER_HEADER Header;
    LIST_ENTRY EntryListHead;
    volatile ULONG CurrentCount;
    ULONG MaximumCount;
    LIST_ENTRY ThreadListHead;
} KQUEUE, *PKQUEUE, *PRKQUEUE;
NTKERNELAPI
VOID
KeInitializeMutant (
    _Out_ PRKMUTANT Mutant,
    _In_ BOOLEAN InitialOwner
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
KeQueryOwnerMutant (
    _In_ PKMUTANT Mutant,
    _Out_ PCLIENT_ID ClientId
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONG
KeReadStateMutant (
    _In_ PRKMUTANT Mutant
    );
_When_(Wait==0, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_(Wait==1, _IRQL_requires_max_(APC_LEVEL))
_When_(Wait==1, __drv_reportError("Caution: 'Wait' argument does not provide"
                                      " any synchronization guarantees, only a hint"
                                      " to the system that the thread will immediately"
                                      " issue a wait operation"))
NTKERNELAPI
LONG
KeReleaseMutant (
    _Inout_ PRKMUTANT Mutant,
    _In_ KPRIORITY Increment,
    _In_ BOOLEAN Abandoned,
    _In_ BOOLEAN Wait
    );
NTKERNELAPI
VOID
KeInitializeQueue (
    _Out_ PRKQUEUE Queue,
    _In_ ULONG Count
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONG
KeReadStateQueue (
    _In_ PRKQUEUE Queue
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONG
KeInsertQueue (
    _Inout_ PRKQUEUE Queue,
    _Inout_ PLIST_ENTRY Entry
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LONG
KeInsertHeadQueue (
    _Inout_ PRKQUEUE Queue,
    _Inout_ PLIST_ENTRY Entry
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_When_((Timeout==NULL || Timeout->QuadPart!=0), _IRQL_requires_max_(APC_LEVEL))
_When_((Timeout!=NULL && Timeout->QuadPart==0), _IRQL_requires_max_(DISPATCH_LEVEL))
NTKERNELAPI
PLIST_ENTRY
KeRemoveQueue (
    _Inout_ PRKQUEUE Queue,
    _In_ KPROCESSOR_MODE WaitMode,
    _In_opt_ PLARGE_INTEGER Timeout
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_When_((Timeout==NULL || Timeout->QuadPart!=0), _IRQL_requires_max_(APC_LEVEL))
_When_((Timeout!=NULL && Timeout->QuadPart==0), _IRQL_requires_max_(DISPATCH_LEVEL))
NTKERNELAPI
ULONG
KeRemoveQueueEx (
    _Inout_ PKQUEUE Queue,
    _In_ KPROCESSOR_MODE WaitMode,
    _In_ BOOLEAN Alertable,
    _In_opt_ PLARGE_INTEGER Timeout,
    _Out_writes_to_(Count, return) PLIST_ENTRY *EntryArray,
    _In_ ULONG Count
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PLIST_ENTRY
KeRundownQueue (
    _Inout_ PRKQUEUE Queue
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeAttachProcess (
    _Inout_ PRKPROCESS Process
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeDetachProcess (
    VOID
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeStackAttachProcess (
    _Inout_ PRKPROCESS PROCESS,
    _Out_ PRKAPC_STATE ApcState
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
KeUnstackDetachProcess (
    _In_ PRKAPC_STATE ApcState
    );
_Must_inspect_result_
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(DISPATCH_LEVEL)
__drv_reportError("DISPATCH_LEVEL is only supported on Windows 7 or later.")
NTKERNELAPI
NTSTATUS
KeExpandKernelStackAndCalloutEx (
    _In_ PEXPAND_STACK_CALLOUT Callout,
    _In_opt_ PVOID Parameter,
    _In_ SIZE_T Size,
    _In_ BOOLEAN Wait,
    _In_opt_ PVOID Context
    );
_IRQL_requires_min_(PASSIVE_LEVEL)
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
UCHAR
KeSetIdealProcessorThread (
    _Inout_ PKTHREAD Thread,
    _In_ UCHAR Processor
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
KeSetKernelStackSwapEnable (
    _In_ BOOLEAN Enable
    );
_Requires_lock_not_held_(Number)
_Acquires_lock_(Number)
_IRQL_raises_(DISPATCH_LEVEL)
NTKERNELAPI
KIRQL
FASTCALL
KeAcquireQueuedSpinLock (
    _In_ KSPIN_LOCK_QUEUE_NUMBER Number
    );
_Requires_lock_held_(Number)
_Releases_lock_(Number)
NTKERNELAPI
VOID
FASTCALL
KeReleaseQueuedSpinLock (
    _In_ KSPIN_LOCK_QUEUE_NUMBER Number,
    _In_ KIRQL OldIrql
    );
_Must_inspect_result_
_Post_satisfies_(return == 1 || return == 0)
NTKERNELAPI
LOGICAL
FASTCALL
KeTryToAcquireQueuedSpinLock (
    _In_ KSPIN_LOCK_QUEUE_NUMBER Number,
    _Out_ _At_(*OldIrql, _IRQL_saves_)
    PKIRQL OldIrql
    );
_Requires_lock_not_held_(*SpinLock)
_Acquires_lock_(*SpinLock)
_IRQL_raises_(SYNCH_LEVEL)
_IRQL_saves_
NTKERNELAPI
KIRQL
KeAcquireSpinLockRaiseToSynch (
    _Inout_ PKSPIN_LOCK SpinLock
    );
NTSTATUS
KeGetProcessorNumberFromIndex (
    _In_ ULONG ProcIndex,
    _Out_ PPROCESSOR_NUMBER ProcNumber
    );
ULONG
KeGetProcessorIndexFromNumber (
    _In_ PPROCESSOR_NUMBER ProcNumber
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
SIZE_T
ExQueryPoolBlockSize (
    _In_ PVOID PoolBlock,
    _Out_ PBOOLEAN QuotaCharged
    );
PSLIST_ENTRY
FASTCALL
InterlockedPushListSList (
    _Inout_ PSLIST_HEADER ListHead,
    _Inout_ __drv_aliasesMem PSLIST_ENTRY List,
    _Inout_ PSLIST_ENTRY ListEnd,
    _In_ ULONG Count
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExAdjustLookasideDepth (
    VOID
    );
C_ASSERT(sizeof(ERESOURCE) == 0x68);
C_ASSERT(FIELD_OFFSET(ERESOURCE,ActiveCount) == 0x18);
C_ASSERT(FIELD_OFFSET(ERESOURCE,Flag) == 0x1a);
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
ExDisableResourceBoostLite (
    _In_ PERESOURCE Resource
    );




typedef struct _SE_EXPORTS {
    LUID SeCreateTokenPrivilege;
    LUID SeAssignPrimaryTokenPrivilege;
    LUID SeLockMemoryPrivilege;
    LUID SeIncreaseQuotaPrivilege;
    LUID SeUnsolicitedInputPrivilege;
    LUID SeTcbPrivilege;
    LUID SeSecurityPrivilege;
    LUID SeTakeOwnershipPrivilege;
    LUID SeLoadDriverPrivilege;
    LUID SeCreatePagefilePrivilege;
    LUID SeIncreaseBasePriorityPrivilege;
    LUID SeSystemProfilePrivilege;
    LUID SeSystemtimePrivilege;
    LUID SeProfileSingleProcessPrivilege;
    LUID SeCreatePermanentPrivilege;
    LUID SeBackupPrivilege;
    LUID SeRestorePrivilege;
    LUID SeShutdownPrivilege;
    LUID SeDebugPrivilege;
    LUID SeAuditPrivilege;
    LUID SeSystemEnvironmentPrivilege;
    LUID SeChangeNotifyPrivilege;
    LUID SeRemoteShutdownPrivilege;
    PSID SeNullSid;
    PSID SeWorldSid;
    PSID SeLocalSid;
    PSID SeCreatorOwnerSid;
    PSID SeCreatorGroupSid;
    PSID SeNtAuthoritySid;
    PSID SeDialupSid;
    PSID SeNetworkSid;
    PSID SeBatchSid;
    PSID SeInteractiveSid;
    PSID SeLocalSystemSid;
    PSID SeAliasAdminsSid;
    PSID SeAliasUsersSid;
    PSID SeAliasGuestsSid;
    PSID SeAliasPowerUsersSid;
    PSID SeAliasAccountOpsSid;
    PSID SeAliasSystemOpsSid;
    PSID SeAliasPrintOpsSid;
    PSID SeAliasBackupOpsSid;
    PSID SeAuthenticatedUsersSid;
    PSID SeRestrictedSid;
    PSID SeAnonymousLogonSid;
    LUID SeUndockPrivilege;
    LUID SeSyncAgentPrivilege;
    LUID SeEnableDelegationPrivilege;
    PSID SeLocalServiceSid;
    PSID SeNetworkServiceSid;
    LUID SeManageVolumePrivilege;
    LUID SeImpersonatePrivilege;
    LUID SeCreateGlobalPrivilege;
    LUID SeTrustedCredManAccessPrivilege;
    LUID SeRelabelPrivilege;
    LUID SeIncreaseWorkingSetPrivilege;
    LUID SeTimeZonePrivilege;
    LUID SeCreateSymbolicLinkPrivilege;
    PSID SeIUserSid;
    PSID SeUntrustedMandatorySid;
    PSID SeLowMandatorySid;
    PSID SeMediumMandatorySid;
    PSID SeHighMandatorySid;
    PSID SeSystemMandatorySid;
    PSID SeOwnerRightsSid;
    PSID SeAllAppPackagesSid;
    PSID SeUserModeDriversSid;
    PSID SeProcTrustWinTcbSid;
    PSID SeTrustedInstallerSid;
    LUID SeDelegateSessionUserImpersonatePrivilege;
} SE_EXPORTS, *PSE_EXPORTS;
typedef
NTSTATUS
SE_LOGON_SESSION_TERMINATED_ROUTINE(
    _In_ PLUID LogonId);
typedef SE_LOGON_SESSION_TERMINATED_ROUTINE *PSE_LOGON_SESSION_TERMINATED_ROUTINE;
typedef
NTSTATUS
SE_LOGON_SESSION_TERMINATED_ROUTINE_EX(
    _In_ PLUID LogonId,
    _In_ PESILO pServerSilo,
    _In_opt_ PVOID Context);
typedef SE_LOGON_SESSION_TERMINATED_ROUTINE_EX *PSE_LOGON_SESSION_TERMINATED_ROUTINE_EX;










NTKERNELAPI
VOID
SeCaptureSubjectContextEx (
    _In_opt_ PETHREAD Thread,
    _In_ PEPROCESS Process,
    _Out_ PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
NTKERNELAPI
VOID
SeCaptureSubjectContext (
    _Out_ PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
NTKERNELAPI
VOID
SeLockSubjectContext(
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
NTKERNELAPI
VOID
SeUnlockSubjectContext(
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
NTKERNELAPI
VOID
SeReleaseSubjectContext (
    _Inout_ PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
NTSTATUS
SeReportSecurityEventWithSubCategory(
    _In_ ULONG Flags,
    _In_ PUNICODE_STRING SourceName,
    _In_opt_ PSID UserSid,
    _In_ PSE_ADT_PARAMETER_ARRAY AuditParameters,
    _In_ ULONG AuditSubcategoryId
    );
BOOLEAN
SeAccessCheckFromState (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ PTOKEN_ACCESS_INFORMATION PrimaryTokenInformation,
    _In_opt_ PTOKEN_ACCESS_INFORMATION ClientTokenInformation,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ACCESS_MASK PreviouslyGrantedAccess,
    _Outptr_opt_result_maybenull_ PPRIVILEGE_SET *Privileges,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ KPROCESSOR_MODE AccessMode,
    _Out_ PACCESS_MASK GrantedAccess,
    _Out_ PNTSTATUS AccessStatus
    );
BOOLEAN
SeAccessCheckFromStateEx (
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ PACCESS_TOKEN PrimaryToken,
    _In_opt_ PACCESS_TOKEN ClientToken,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ACCESS_MASK PreviouslyGrantedAccess,
    _Outptr_opt_result_maybenull_ PPRIVILEGE_SET *Privileges,
    _In_ PGENERIC_MAPPING GenericMapping,
    _In_ KPROCESSOR_MODE AccessMode,
    _Out_ PACCESS_MASK GrantedAccess,
    _Out_ PNTSTATUS AccessStatus
    );
NTSTATUS
SeTokenFromAccessInformation(
    _In_opt_ PTOKEN_ACCESS_INFORMATION AccessInformation,
    _Inout_opt_ PACCESS_TOKEN Token,
    _In_ ULONG Length,
    _Out_ PULONG RequiredLength
    );
NTKERNELAPI
BOOLEAN
SePrivilegeCheck(
    _Inout_ PPRIVILEGE_SET RequiredPrivileges,
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
    _In_ KPROCESSOR_MODE AccessMode
    );
NTKERNELAPI
VOID
SeFreePrivileges(
    _In_ PPRIVILEGE_SET Privileges
    );
NTKERNELAPI
VOID
SeOpenObjectAuditAlarm (
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_opt_ PVOID Object,
    _In_opt_ PUNICODE_STRING AbsoluteObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ PACCESS_STATE AccessState,
    _In_ BOOLEAN ObjectCreated,
    _In_ BOOLEAN AccessGranted,
    _In_ KPROCESSOR_MODE AccessMode,
    _Out_ PBOOLEAN GenerateOnClose
    );
NTKERNELAPI
VOID
SeOpenObjectAuditAlarmWithTransaction (
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_opt_ PVOID Object,
    _In_opt_ PUNICODE_STRING AbsoluteObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ PACCESS_STATE AccessState,
    _In_ BOOLEAN ObjectCreated,
    _In_ BOOLEAN AccessGranted,
    _In_ KPROCESSOR_MODE AccessMode,
    _In_opt_ GUID *TransactionId,
    _Out_ PBOOLEAN GenerateOnClose
    );
NTKERNELAPI
VOID
SeOpenObjectForDeleteAuditAlarm (
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_opt_ PVOID Object,
    _In_opt_ PUNICODE_STRING AbsoluteObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ PACCESS_STATE AccessState,
    _In_ BOOLEAN ObjectCreated,
    _In_ BOOLEAN AccessGranted,
    _In_ KPROCESSOR_MODE AccessMode,
    _Out_ PBOOLEAN GenerateOnClose
    );
NTKERNELAPI
VOID
SeOpenObjectForDeleteAuditAlarmWithTransaction (
    _In_ PUNICODE_STRING ObjectTypeName,
    _In_opt_ PVOID Object,
    _In_opt_ PUNICODE_STRING AbsoluteObjectName,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ PACCESS_STATE AccessState,
    _In_ BOOLEAN ObjectCreated,
    _In_ BOOLEAN AccessGranted,
    _In_ KPROCESSOR_MODE AccessMode,
    _In_opt_ GUID *TransactionId,
    _Out_ PBOOLEAN GenerateOnClose
    );
NTKERNELAPI
VOID
SeExamineSacl(
    _In_ PACL Sacl,
    _In_ PACL ResourceSacl,
    _In_ PACCESS_TOKEN Token,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ BOOLEAN AccessGranted,
    _Out_ PBOOLEAN GenerateAudit,
    _Out_ PBOOLEAN GenerateAlarm
    );
NTKERNELAPI
VOID
SeDeleteObjectAuditAlarm(
    _In_ PVOID Object,
    _In_ HANDLE Handle
    );
NTKERNELAPI
VOID
SeDeleteObjectAuditAlarmWithTransaction(
    _In_ PVOID Object,
    _In_ HANDLE Handle,
    _In_opt_ GUID *TransactionId
    );
NTKERNELAPI
TOKEN_TYPE
SeTokenType(
    _In_ PACCESS_TOKEN Token
    );
NTKERNELAPI
BOOLEAN
SeTokenIsAdmin(
    _In_ PACCESS_TOKEN Token
    );
NTKERNELAPI
BOOLEAN
SeTokenIsRestricted(
    _In_ PACCESS_TOKEN Token
    );
NTKERNELAPI
BOOLEAN
SeTokenIsWriteRestricted(
    _In_ PACCESS_TOKEN Token
    );
NTKERNELAPI
BOOLEAN
SeTokenIsNoChildProcessRestrictionEnforced(
    _In_ PACCESS_TOKEN Token,
    _Out_opt_ PBOOLEAN UnlessSecure
    );
NTKERNELAPI
VOID
SeTokenSetNoChildProcessRestricted(
    _In_ PACCESS_TOKEN Token,
    _In_ BOOLEAN UnlessSecure,
    _In_ BOOLEAN AuditOnly
    );
NTKERNELAPI
VOID
SeTokenGetNoChildProcessRestricted(
    _In_ PACCESS_TOKEN Token,
    _Out_ PBOOLEAN Enforced,
    _Out_ PBOOLEAN UnlessSecure,
    _Out_ PBOOLEAN AuditOnly
    );
NTKERNELAPI
NTSTATUS
SeFilterToken (
    _In_ PACCESS_TOKEN ExistingToken,
    _In_ ULONG Flags,
    _In_opt_ PTOKEN_GROUPS SidsToDisable,
    _In_opt_ PTOKEN_PRIVILEGES PrivilegesToDelete,
    _In_opt_ PTOKEN_GROUPS RestrictedSids,
    _Outptr_ PACCESS_TOKEN * FilteredToken
    );
NTKERNELAPI
NTSTATUS
SeQueryAuthenticationIdToken(
    _In_ PACCESS_TOKEN Token,
    _Out_ PLUID AuthenticationId
    );
NTKERNELAPI
VOID
SeQueryTokenIntegrity(
    _In_ PACCESS_TOKEN Token,
    _Inout_ PSID_AND_ATTRIBUTES IntegritySA
    );
NTKERNELAPI
NTSTATUS
SeQuerySessionIdToken(
    _In_ PACCESS_TOKEN Token,
    _Out_ PULONG SessionId
    );
NTKERNELAPI
NTSTATUS
SeQuerySessionIdTokenEx(
    _In_ PACCESS_TOKEN Token,
    _Out_ PULONG SessionId,
    _Out_ PBOOLEAN IsServiceSession
    );
NTKERNELAPI
NTSTATUS
SeQueryServerSiloToken(
    _In_ PACCESS_TOKEN Token,
    _Out_ PESILO *pServerSilo
    );
NTKERNELAPI
NTSTATUS
SeSetSessionIdToken(
    _In_ PACCESS_TOKEN Token,
    _In_ ULONG SessionId
    );
NTKERNELAPI
NTSTATUS
SeCreateClientSecurity (
    _In_ PETHREAD ClientThread,
    _In_ PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
    _In_ BOOLEAN RemoteSession,
    _Out_ PSECURITY_CLIENT_CONTEXT ClientContext
    );
NTKERNELAPI
VOID
SeImpersonateClient(
    _In_ PSECURITY_CLIENT_CONTEXT ClientContext,
    _In_opt_ PETHREAD ServerThread
    );
NTKERNELAPI
NTSTATUS
SeImpersonateClientEx(
    _In_ PSECURITY_CLIENT_CONTEXT ClientContext,
    _In_opt_ PETHREAD ServerThread
    );
NTKERNELAPI
NTSTATUS
SeCreateClientSecurityFromSubjectContext (
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectContext,
    _In_ PSECURITY_QUALITY_OF_SERVICE ClientSecurityQos,
    _In_ BOOLEAN ServerIsRemote,
    _Out_ PSECURITY_CLIENT_CONTEXT ClientContext
    );
NTKERNELAPI
NTSTATUS
SeQuerySecurityDescriptorInfo (
    _In_ PSECURITY_INFORMATION SecurityInformation,
    _Out_writes_bytes_(*Length) PSECURITY_DESCRIPTOR SecurityDescriptor,
    _Inout_ PULONG Length,
    _Inout_ PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor
    );
NTKERNELAPI
NTSTATUS
SeSetSecurityDescriptorInfo (
    _In_opt_ PVOID Object,
    _In_ PSECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR ModificationDescriptor,
    _Inout_ PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
    _In_ POOL_TYPE PoolType,
    _In_ PGENERIC_MAPPING GenericMapping
    );
NTKERNELAPI
NTSTATUS
SeSetSecurityDescriptorInfoEx (
    _In_opt_ PVOID Object,
    _In_ PSECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR ModificationDescriptor,
    _Inout_ PSECURITY_DESCRIPTOR *ObjectsSecurityDescriptor,
    _In_ ULONG AutoInheritFlags,
    _In_ POOL_TYPE PoolType,
    _In_ PGENERIC_MAPPING GenericMapping
    );
NTKERNELAPI
NTSTATUS
SeAppendPrivileges(
    _Inout_ PACCESS_STATE AccessState,
    _In_ PPRIVILEGE_SET Privileges
    );
NTKERNELAPI
VOID
SeAuditHardLinkCreation(
    _In_ _In_ PUNICODE_STRING FileName,
    _In_ _In_ PUNICODE_STRING LinkName,
    _In_ _In_ BOOLEAN bSuccess
    );
NTKERNELAPI
VOID
SeAuditHardLinkCreationWithTransaction(
    _In_ PUNICODE_STRING FileName,
    _In_ PUNICODE_STRING LinkName,
    _In_ BOOLEAN bSuccess,
    _In_opt_ GUID *TransactionId
    );
NTKERNELAPI
VOID
SeAuditFipsCryptoSelftests(
    _In_ BOOLEAN bSuccess,
    _In_ ULONG SelftestCode
    );
NTKERNELAPI
VOID
SeAuditTransactionStateChange(
    _In_ GUID *TransactionId,
    _In_ GUID *ResourceManagerId,
    _In_ ULONG NewTransactionState
    );
NTKERNELAPI
BOOLEAN
SeAuditingFileEvents(
    _In_ BOOLEAN AccessGranted,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );
NTKERNELAPI
BOOLEAN
SeAuditingFileEventsWithContext(
    _In_ BOOLEAN AccessGranted,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext
    );
NTKERNELAPI
BOOLEAN
SeAuditingAnyFileEventsWithContext(
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext
    );
NTKERNELAPI
    BOOLEAN
    SeAuditingFileEventsWithContextEx(
    _In_ BOOLEAN AccessGranted,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
    _Out_opt_ PBOOLEAN StagingEnabled
    );
NTKERNELAPI
    BOOLEAN
    SeAuditingAnyFileEventsWithContextEx(
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
    _Out_opt_ PBOOLEAN StagingEnabled
    );
VOID
SeAdjustAccessStateForTrustLabel(
    _In_ PVOID ObjectType,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _Inout_ PACCESS_STATE AccessState
    );
VOID
SeAdjustAccessStateForAccessConstraints(
    _In_ PVOID ObjectType,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _Inout_ PACCESS_STATE AccessState
    );
BOOLEAN
SeShouldCheckForAccessRightsFromParent(
    _In_ PVOID ObjectType,
    _In_ PSECURITY_DESCRIPTOR ChildDescriptor,
    _In_ PACCESS_STATE AccessState
    );
NTKERNELAPI
BOOLEAN
SeAuditingHardLinkEvents(
    _In_ BOOLEAN AccessGranted,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );
NTKERNELAPI
BOOLEAN
SeAuditingHardLinkEventsWithContext(
    _In_ BOOLEAN AccessGranted,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_opt_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext
    );
NTKERNELAPI
BOOLEAN
SeAuditingFileOrGlobalEvents(
    _In_ BOOLEAN AccessGranted,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext
    );
VOID
SeSetAccessStateGenericMapping (
    _Inout_ PACCESS_STATE AccessState,
    _In_ PGENERIC_MAPPING GenericMapping
    );
NTKERNELAPI
NTSTATUS
SeRegisterLogonSessionTerminatedRoutine(
    _In_ PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine
    );
NTKERNELAPI
NTSTATUS
SeUnregisterLogonSessionTerminatedRoutine(
    _In_ PSE_LOGON_SESSION_TERMINATED_ROUTINE CallbackRoutine
    );
NTKERNELAPI
NTSTATUS
SeRegisterLogonSessionTerminatedRoutineEx(
    _In_ PSE_LOGON_SESSION_TERMINATED_ROUTINE_EX CallbackRoutine,
    _In_ PVOID Context
    );
NTKERNELAPI
NTSTATUS
SeUnregisterLogonSessionTerminatedRoutineEx(
    _In_ PSE_LOGON_SESSION_TERMINATED_ROUTINE_EX CallbackRoutine,
    _In_ PVOID Context
    );
NTKERNELAPI
NTSTATUS
SeMarkLogonSessionForTerminationNotification(
    _In_ PLUID LogonId
    );
NTKERNELAPI
NTSTATUS
SeMarkLogonSessionForTerminationNotificationEx(
    _In_ PLUID LogonId,
    _In_ PESILO pServerSilo
    );










NTKERNELAPI
NTSTATUS
SeQueryInformationToken (
    _In_ PACCESS_TOKEN Token,
    _In_ TOKEN_INFORMATION_CLASS TokenInformationClass,
         PVOID *TokenInformation
    );
NTSTATUS
SeLocateProcessImageName(
    _Inout_ PEPROCESS Process,
    _Outptr_ PUNICODE_STRING *pImageFileName
    );
extern NTKERNELAPI PSE_EXPORTS SeExports;
NTKERNELAPI
VOID
SeExamineGlobalSacl(
    _In_ PUNICODE_STRING ObjectType,
    _In_ PACL ResourceSacl,
    _In_ PACCESS_TOKEN Token,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ BOOLEAN AccessGranted,
    _Inout_ PBOOLEAN GenerateAudit,
    _Inout_opt_ PBOOLEAN GenerateAlarm
);
NTKERNELAPI
VOID
SeMaximumAuditMaskFromGlobalSacl(
    _In_opt_ PUNICODE_STRING ObjectTypeName,
    _In_ ACCESS_MASK GrantedAccess,
    _In_ PACCESS_TOKEN Token,
    _Inout_ PACCESS_MASK AuditMask
    );
NTSYSAPI
BOOLEAN
NTAPI
RtlIsSandboxedTokenHandle (
    _In_opt_ HANDLE TokenHandle,
    _In_ KPROCESSOR_MODE PreviousMode
    );
NTSYSAPI
BOOLEAN
NTAPI
RtlIsSandboxedToken (
    _In_opt_ PSECURITY_SUBJECT_CONTEXT Context,
    _In_ KPROCESSOR_MODE PreviousMode
    );
NTKERNELAPI
VOID
SeCheckForCriticalAceRemoval(
    _In_ PSECURITY_DESCRIPTOR CurrentDescriptor,
    _In_ PSECURITY_DESCRIPTOR NewDescriptor,
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
    _Out_ PBOOLEAN AceRemoved
    );
NTKERNELAPI
NTSTATUS
SeAdjustObjectSecurity(
    _In_ PUNICODE_STRING ObjectName,
    _In_ PSECURITY_DESCRIPTOR OriginalDescriptor,
    _In_ PSECURITY_DESCRIPTOR ProposedDescriptor,
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectSecurityContext,
    _Out_ PSECURITY_DESCRIPTOR* AdjustedDescriptor,
    _Out_ PBOOLEAN ApplyAdjustedDescriptor
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
CFORCEINLINE
PETHREAD
PsGetCurrentThread (
    VOID
    )
{
    return (PETHREAD)KeGetCurrentThread();
}
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PsAssignImpersonationToken(
    _In_ PETHREAD Thread,
    _In_opt_ HANDLE Token
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
PACCESS_TOKEN
PsReferencePrimaryToken (
    _Inout_ PEPROCESS Process
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
PsDereferencePrimaryToken(
    _In_ PACCESS_TOKEN PrimaryToken
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
PsDereferenceImpersonationToken(
    _In_ PACCESS_TOKEN ImpersonationToken
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PACCESS_TOKEN
PsReferenceImpersonationToken(
    _Inout_ PETHREAD Thread,
    _Out_ PBOOLEAN CopyOnOpen,
    _Out_ PBOOLEAN EffectiveOnly,
    _Out_ PSECURITY_IMPERSONATION_LEVEL ImpersonationLevel
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
LARGE_INTEGER
PsGetProcessExitTime(
    VOID
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
PsIsThreadTerminating(
    _In_ PETHREAD Thread
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
PsImpersonateClient(
    _Inout_ PETHREAD Thread,
    _In_opt_ PACCESS_TOKEN Token,
    _In_ BOOLEAN CopyOnOpen,
    _In_ BOOLEAN EffectiveOnly,
    _In_ SECURITY_IMPERSONATION_LEVEL ImpersonationLevel
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
BOOLEAN
PsDisableImpersonation(
    _Inout_ PETHREAD Thread,
    _Inout_ PSE_IMPERSONATION_STATE ImpersonationState
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
PsRestoreImpersonation(
    _Inout_ PETHREAD Thread,
    _In_ PSE_IMPERSONATION_STATE ImpersonationState
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
PsRevertToSelf(
    VOID
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PsLookupProcessByProcessId(
    _In_ HANDLE ProcessId,
    _Outptr_ PEPROCESS *Process
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PsLookupThreadByThreadId(
    _In_ HANDLE ThreadId,
    _Outptr_ PETHREAD *Thread
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
PsChargePoolQuota (
    _In_ PEPROCESS Process,
    _In_ POOL_TYPE PoolType,
    _In_ ULONG_PTR Amount
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PsChargeProcessPoolQuota (
    _In_ PEPROCESS Process,
    _In_ POOL_TYPE PoolType,
    _In_ ULONG_PTR Amount
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
PsReturnPoolQuota(
    _In_ PEPROCESS Process,
    _In_ POOL_TYPE PoolType,
    _In_ ULONG_PTR Amount
    );
NTKERNELAPI
PEPROCESS
PsGetThreadProcess(
    _In_ PETHREAD Thread
    );
NTKERNELAPI
BOOLEAN
PsIsSystemThread(
    _In_ PETHREAD Thread
    );
NTKERNELAPI
VOID
PsUpdateDiskCounters (
    _Inout_ PEPROCESS Process,
    _In_ ULONG64 BytesRead,
    _In_ ULONG64 BytesWritten,
    _In_ ULONG ReadOperationCount,
    _In_ ULONG WriteOperationCount,
    _In_ ULONG FlushOperationCount
    );
NTKERNELAPI
BOOLEAN
PsIsDiskCountersEnabled (
    VOID
    );
typedef
VOID
DRIVER_FS_NOTIFICATION (
    _In_ struct _DEVICE_OBJECT *DeviceObject,
    _In_ BOOLEAN FsActive
    );
typedef DRIVER_FS_NOTIFICATION *PDRIVER_FS_NOTIFICATION;
typedef enum _FS_FILTER_SECTION_SYNC_TYPE {
    SyncTypeOther = 0,
    SyncTypeCreateSection
} FS_FILTER_SECTION_SYNC_TYPE, *PFS_FILTER_SECTION_SYNC_TYPE;
typedef struct _FS_FILTER_SECTION_SYNC_OUTPUT {
    ULONG StructureSize;
    ULONG SizeReturned;
    ULONG Flags;
    ULONG DesiredReadAlignment;
} FS_FILTER_SECTION_SYNC_OUTPUT, *PFS_FILTER_SECTION_SYNC_OUTPUT;
typedef enum _FS_FILTER_STREAM_FO_NOTIFICATION_TYPE {
    NotifyTypeCreate = 0,
    NotifyTypeRetired
} FS_FILTER_STREAM_FO_NOTIFICATION_TYPE, *PFS_FILTER_STREAM_FO_NOTIFICATION_TYPE;
typedef struct _IRP *PIRP;
typedef union _FS_FILTER_PARAMETERS {
    struct {
        PLARGE_INTEGER EndingOffset;
        PERESOURCE *ResourceToRelease;
    } AcquireForModifiedPageWriter;
    struct {
        PERESOURCE ResourceToRelease;
    } ReleaseForModifiedPageWriter;
    struct {
        FS_FILTER_SECTION_SYNC_TYPE SyncType;
        ULONG PageProtection;
        PFS_FILTER_SECTION_SYNC_OUTPUT OutputInformation;
    } AcquireForSectionSynchronization;
    struct {
        PIRP Irp;
        PVOID FileInformation;
        PULONG Length;
        FILE_INFORMATION_CLASS FileInformationClass;
        NTSTATUS CompletionStatus;
    } QueryOpen;
    struct {
        PVOID Argument1;
        PVOID Argument2;
        PVOID Argument3;
        PVOID Argument4;
        PVOID Argument5;
    } Others;
} FS_FILTER_PARAMETERS, *PFS_FILTER_PARAMETERS;
typedef struct _FS_FILTER_CALLBACK_DATA {
    ULONG SizeOfFsFilterCallbackData;
    UCHAR Operation;
    UCHAR Reserved;
    struct _DEVICE_OBJECT *DeviceObject;
    struct _FILE_OBJECT *FileObject;
    FS_FILTER_PARAMETERS Parameters;
} FS_FILTER_CALLBACK_DATA, *PFS_FILTER_CALLBACK_DATA;
typedef
NTSTATUS
(*PFS_FILTER_CALLBACK) (
    _In_ PFS_FILTER_CALLBACK_DATA Data,
    _Out_ PVOID *CompletionContext
    );
typedef
VOID
(*PFS_FILTER_COMPLETION_CALLBACK) (
    _In_ PFS_FILTER_CALLBACK_DATA Data,
    _In_ NTSTATUS OperationStatus,
    _In_ PVOID CompletionContext
    );
typedef struct _FS_FILTER_CALLBACKS {
    ULONG SizeOfFsFilterCallbacks;
    ULONG Reserved;
    PFS_FILTER_CALLBACK PreAcquireForSectionSynchronization;
    PFS_FILTER_COMPLETION_CALLBACK PostAcquireForSectionSynchronization;
    PFS_FILTER_CALLBACK PreReleaseForSectionSynchronization;
    PFS_FILTER_COMPLETION_CALLBACK PostReleaseForSectionSynchronization;
    PFS_FILTER_CALLBACK PreAcquireForCcFlush;
    PFS_FILTER_COMPLETION_CALLBACK PostAcquireForCcFlush;
    PFS_FILTER_CALLBACK PreReleaseForCcFlush;
    PFS_FILTER_COMPLETION_CALLBACK PostReleaseForCcFlush;
    PFS_FILTER_CALLBACK PreAcquireForModifiedPageWriter;
    PFS_FILTER_COMPLETION_CALLBACK PostAcquireForModifiedPageWriter;
    PFS_FILTER_CALLBACK PreReleaseForModifiedPageWriter;
    PFS_FILTER_COMPLETION_CALLBACK PostReleaseForModifiedPageWriter;
    PFS_FILTER_CALLBACK PreQueryOpen;
    PFS_FILTER_COMPLETION_CALLBACK PostQueryOpen;
} FS_FILTER_CALLBACKS, *PFS_FILTER_CALLBACKS;
NTKERNELAPI
NTSTATUS
FsRtlRegisterFileSystemFilterCallbacks (
    _In_ struct _DRIVER_OBJECT *FilterDriverObject,
    _In_ PFS_FILTER_CALLBACKS Callbacks
    );
NTKERNELAPI
NTSTATUS
FsRtlNotifyStreamFileObject (
    _In_ struct _FILE_OBJECT * StreamFileObject,
    _In_opt_ struct _DEVICE_OBJECT *DeviceObjectHint,
    _In_ FS_FILTER_STREAM_FO_NOTIFICATION_TYPE NotificationType,
    _In_ BOOLEAN SafeToRecurse
    );
extern KSPIN_LOCK IoStatisticsLock;
extern ULONG IoReadOperationCount;
extern ULONG IoWriteOperationCount;
extern ULONG IoOtherOperationCount;
extern LARGE_INTEGER IoReadTransferCount;
extern LARGE_INTEGER IoWriteTransferCount;
extern LARGE_INTEGER IoOtherTransferCount;
NTKERNELAPI
VOID
IoAcquireVpbSpinLock(
    _Out_ PKIRQL Irql
    );
NTKERNELAPI
NTSTATUS
IoCheckDesiredAccess(
    _Inout_ PACCESS_MASK DesiredAccess,
    _In_ ACCESS_MASK GrantedAccess
    );
NTKERNELAPI
NTSTATUS
IoCheckEaBufferValidity(
    _In_ PFILE_FULL_EA_INFORMATION EaBuffer,
    _In_ ULONG EaLength,
    _Out_ PULONG ErrorOffset
    );
NTKERNELAPI
NTSTATUS
IoCheckFunctionAccess(
    _In_ ACCESS_MASK GrantedAccess,
    _In_ UCHAR MajorFunction,
    _In_ UCHAR MinorFunction,
    _In_ ULONG IoControlCode,
    _In_opt_ PVOID Arg1,
    _In_opt_ PVOID Arg2
    );
NTKERNELAPI
NTSTATUS
IoCheckQuerySetFileInformation(
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _In_ ULONG Length,
    _In_ BOOLEAN SetOperation
    );
NTKERNELAPI
NTSTATUS
IoCheckQuerySetVolumeInformation(
    _In_ FS_INFORMATION_CLASS FsInformationClass,
    _In_ ULONG Length,
    _In_ BOOLEAN SetOperation
    );
NTKERNELAPI
NTSTATUS
IoCheckQuotaBufferValidity(
    _In_ PFILE_QUOTA_INFORMATION QuotaBuffer,
    _In_ ULONG QuotaLength,
    _Out_ PULONG ErrorOffset
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFILE_OBJECT
IoCreateStreamFileObject(
    _In_opt_ PFILE_OBJECT FileObject,
    _In_opt_ PDEVICE_OBJECT DeviceObject
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFILE_OBJECT
IoCreateStreamFileObjectEx(
    _In_opt_ PFILE_OBJECT FileObject,
    _In_opt_ PDEVICE_OBJECT DeviceObject,
    _Out_opt_ PHANDLE FileHandle
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFILE_OBJECT
IoCreateStreamFileObjectLite(
    _In_opt_ PFILE_OBJECT FileObject,
    _In_opt_ PDEVICE_OBJECT DeviceObject
    );
typedef struct _IO_CREATE_STREAM_FILE_OPTIONS {
    USHORT Size;
    USHORT Flags;
    PDEVICE_OBJECT TargetDeviceObject;
} IO_CREATE_STREAM_FILE_OPTIONS, *PIO_CREATE_STREAM_FILE_OPTIONS;
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
IoCreateStreamFileObjectEx2(
    _In_ PIO_CREATE_STREAM_FILE_OPTIONS CreateOptions,
    _In_opt_ PFILE_OBJECT FileObject,
    _In_opt_ PDEVICE_OBJECT DeviceObject,
    _Out_ PFILE_OBJECT* StreamFileObject,
    _Out_opt_ PHANDLE FileHandle
    );
NTKERNELAPI
BOOLEAN
IoFastQueryNetworkAttributes(
    _In_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG OpenOptions,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _Out_ PFILE_NETWORK_OPEN_INFORMATION Buffer
    );
NTKERNELAPI
NTSTATUS
IoPageRead(
    _In_ PFILE_OBJECT FileObject,
    _In_ PMDL MemoryDescriptorList,
    _In_ PLARGE_INTEGER StartingOffset,
    _In_ PKEVENT Event,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock
    );
NTKERNELAPI
PDEVICE_OBJECT
IoGetAttachedDevice(
    _In_ PDEVICE_OBJECT DeviceObject
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PDEVICE_OBJECT
IoGetAttachedDeviceReference(
    _In_ PDEVICE_OBJECT DeviceObject
    );
NTKERNELAPI
PDEVICE_OBJECT
IoGetBaseFileSystemDeviceObject(
    _In_ PFILE_OBJECT FileObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
PCONFIGURATION_INFORMATION
IoGetConfigurationInformation( VOID );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
PDEVICE_OBJECT
IoGetDeviceToVerify(
    _In_ PETHREAD Thread
    );
NTKERNELAPI
ULONG
IoGetRequestorProcessId(
    _In_ PIRP Irp
    );
NTKERNELAPI
PEPROCESS
IoGetRequestorProcess(
    _In_ PIRP Irp
    );
NTKERNELAPI
PIRP
IoGetTopLevelIrp(
    VOID
    );
    (BOOLEAN) !((FileObject)->SharedRead || (FileObject)->SharedWrite || (FileObject)->SharedDelete))
NTKERNELAPI
BOOLEAN
IoIsOperationSynchronous(
    _In_ PIRP Irp
    );
NTKERNELAPI
BOOLEAN
IoIsSystemThread(
    _In_ PETHREAD Thread
    );
NTKERNELAPI
BOOLEAN
IoIsValidNameGraftingBuffer(
    _In_ PIRP Irp,
    _In_ PREPARSE_DATA_BUFFER ReparseBuffer
    );
NTKERNELAPI
NTSTATUS
IoQueryFileDosDeviceName(
    _In_ PFILE_OBJECT FileObject,
    _Out_ POBJECT_NAME_INFORMATION *ObjectNameInformation
    );
NTKERNELAPI
NTSTATUS
IoQueryFileInformation(
    _In_ PFILE_OBJECT FileObject,
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _In_ ULONG Length,
    _Out_ PVOID FileInformation,
    _Out_ PULONG ReturnedLength
    );
NTKERNELAPI
NTSTATUS
IoQueryVolumeInformation(
    _In_ PFILE_OBJECT FileObject,
    _In_ FS_INFORMATION_CLASS FsInformationClass,
    _In_ ULONG Length,
    _Out_ PVOID FsInformation,
    _Out_ PULONG ReturnedLength
    );
NTKERNELAPI
VOID
IoQueueThreadIrp(
    _In_ PIRP Irp
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
IoRegisterFileSystem(
    _In_ __drv_aliasesMem PDEVICE_OBJECT DeviceObject
    );
NTKERNELAPI
NTSTATUS
IoRegisterFsRegistrationChange(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PDRIVER_FS_NOTIFICATION DriverNotificationRoutine
    );
NTKERNELAPI
NTSTATUS
IoRegisterFsRegistrationChangeMountAware(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PDRIVER_FS_NOTIFICATION DriverNotificationRoutine,
    _In_ BOOLEAN SynchronizeWithMounts
    );
NTKERNELAPI
NTSTATUS
IoRegisterFsRegistrationChangeEx(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PDRIVER_FS_NOTIFICATION DriverNotificationRoutine
    );
NTKERNELAPI
NTSTATUS
IoEnumerateRegisteredFiltersList(
    _Out_writes_bytes_to_opt_(DriverObjectListSize,(*ActualNumberDriverObjects)*sizeof(PDRIVER_OBJECT)) PDRIVER_OBJECT *DriverObjectList,
    _In_ ULONG DriverObjectListSize,
    _Out_ PULONG ActualNumberDriverObjects
    );
NTKERNELAPI
NTSTATUS
IoReplaceFileObjectName (
    _In_ PFILE_OBJECT FileObject,
    _In_reads_bytes_(FileNameLength) PWSTR NewFileName,
    _In_ USHORT FileNameLength
    );
NTKERNELAPI
VOID
IoReleaseVpbSpinLock(
    _In_ KIRQL Irql
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoSetDeviceToVerify(
    _In_ PETHREAD Thread,
    _In_opt_ PDEVICE_OBJECT DeviceObject
    );
NTKERNELAPI
NTSTATUS
IoSetInformation(
    _In_ PFILE_OBJECT FileObject,
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _In_ ULONG Length,
    _In_ PVOID FileInformation
    );
NTKERNELAPI
VOID
IoSetTopLevelIrp(
    _In_opt_ PIRP Irp
    );
    ((USHORT) (sizeof( IRP ) + ((StackSize) * (sizeof( IO_STACK_LOCATION )))))
_IRQL_requires_max_(DISPATCH_LEVEL) _IRQL_requires_min_(DISPATCH_LEVEL)
NTKERNELAPI
USHORT
IoSizeOfIrpEx(
    _In_opt_ PDEVICE_OBJECT DeviceObject,
    _In_ CCHAR StackSize
    );
_IRQL_requires_max_(DISPATCH_LEVEL) _IRQL_requires_min_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoStartNextPacket(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ BOOLEAN Cancelable
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoStartNextPacketByKey(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ BOOLEAN Cancelable,
    _In_ ULONG Key
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoStartPacket(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PIRP Irp,
    _In_opt_ PULONG Key,
    _In_opt_ PDRIVER_CANCEL CancelFunction
    );
VOID
IoSetStartIoAttributes(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ BOOLEAN DeferredStartIo,
    _In_ BOOLEAN NonCancelable
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoStartTimer(
    _In_ PDEVICE_OBJECT DeviceObject
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoStopTimer(
    _In_ PDEVICE_OBJECT DeviceObject
    );
NTKERNELAPI
NTSTATUS
IoSynchronousPageWrite(
    _In_ PFILE_OBJECT FileObject,
    _In_ PMDL MemoryDescriptorList,
    _In_ PLARGE_INTEGER StartingOffset,
    _In_ PKEVENT Event,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock
    );
NTKERNELAPI
PEPROCESS
IoThreadToProcess(
    _In_ PETHREAD Thread
    );
NTKERNELAPI
VOID
IoUnregisterFileSystem(
    _In_ PDEVICE_OBJECT DeviceObject
    );
NTKERNELAPI
VOID
IoUnregisterFsRegistrationChange(
    _In_ PDRIVER_OBJECT DriverObject,
    _In_ PDRIVER_FS_NOTIFICATION DriverNotificationRoutine
    );
NTKERNELAPI
NTSTATUS
IoVerifyVolume(
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ BOOLEAN AllowRawMount
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
IoWriteErrorLogEntry(
    _In_ PVOID ElEntry
    );
NTKERNELAPI
NTSTATUS
IoGetRequestorSessionId(
    _In_ PIRP Irp,
    _Out_ PULONG pSessionId
    );
NTKERNELAPI
NTSTATUS
IoEnumerateDeviceObjectList(
    _In_ PDRIVER_OBJECT DriverObject,
    _Out_writes_bytes_to_opt_(DeviceObjectListSize,(*ActualNumberDeviceObjects)*sizeof(PDEVICE_OBJECT)) PDEVICE_OBJECT *DeviceObjectList,
    _In_ ULONG DeviceObjectListSize,
    _Out_ PULONG ActualNumberDeviceObjects
    );
NTKERNELAPI
PDEVICE_OBJECT
IoGetLowerDeviceObject(
    _In_ PDEVICE_OBJECT DeviceObject
    );
NTKERNELAPI
PDEVICE_OBJECT
IoGetDeviceAttachmentBaseRef(
    _In_ PDEVICE_OBJECT DeviceObject
    );
NTKERNELAPI
NTSTATUS
IoGetDiskDeviceObject(
    _In_ PDEVICE_OBJECT FileSystemDeviceObject,
    _Out_ PDEVICE_OBJECT *DiskDeviceObject
    );
typedef struct _IO_PRIORITY_INFO {
    ULONG Size;
    ULONG ThreadPriority;
    ULONG PagePriority;
    IO_PRIORITY_HINT IoPriority;
} IO_PRIORITY_INFO, *PIO_PRIORITY_INFO;
VOID
FORCEINLINE
IoInitializePriorityInfo(
    _Out_ PIO_PRIORITY_INFO PriorityInfo
    )
{
    PriorityInfo->Size = sizeof(IO_PRIORITY_INFO);
    PriorityInfo->ThreadPriority = 0xffff;
    PriorityInfo->IoPriority = IoPriorityNormal;
    PriorityInfo->PagePriority = 0;
}
NTSTATUS
IoRetrievePriorityInfo (
    _In_opt_ PIRP Irp,
    _In_opt_ PFILE_OBJECT FileObject,
    _In_opt_ PETHREAD Thread,
    _Inout_ PIO_PRIORITY_INFO PriorityInfo
    );
NTSTATUS
IoApplyPriorityInfoThread(
    _In_ PIO_PRIORITY_INFO InputPriorityInfo,
    _Out_opt_ PIO_PRIORITY_INFO OutputPriorityInfo,
    _In_ PETHREAD Thread
    );
NTSTATUS
IoGetFsZeroingOffset (
    _In_ PIRP Irp,
    _Out_ PULONG ZeroingOffset
    );
NTSTATUS
IoSetFsZeroingOffsetRequired (
    _Inout_ PIRP Irp
    );
NTSTATUS
IoSetFsZeroingOffset (
    _Inout_ PIRP Irp,
    _In_ ULONG ZeroingOffset
    );
NTSTATUS
IoGetFsZeroingOffset (
    _In_ PIRP Irp,
    _Out_ PULONG ZeroingOffset
    );
NTSTATUS
IoSetFsZeroingOffsetRequired (
    _Inout_ PIRP Irp
    );
NTSTATUS
IoSetFsZeroingOffset (
    _Inout_ PIRP Irp,
    _In_ ULONG ZeroingOffset
    );
struct _IO_IRP_EXT_TRACK_OFFSET_HEADER;
typedef VOID
(*PIO_IRP_EXT_PROCESS_TRACKED_OFFSET_CALLBACK)(
    _In_ struct _IO_IRP_EXT_TRACK_OFFSET_HEADER *SourceContext,
    _Inout_ struct _IO_IRP_EXT_TRACK_OFFSET_HEADER *TargetContext,
    _In_ LONGLONG RelativeOffset
    );
typedef struct _IO_IRP_EXT_TRACK_OFFSET_HEADER {
    USHORT Validation;
    USHORT Flags;
    PIO_IRP_EXT_PROCESS_TRACKED_OFFSET_CALLBACK TrackedOffsetCallback;
} IO_IRP_EXT_TRACK_OFFSET_HEADER, *PIO_IRP_EXT_TRACK_OFFSET_HEADER;
NTSTATUS
IoGetFsTrackOffsetState(
    _In_ PIRP Irp,
    _Out_ PIO_IRP_EXT_TRACK_OFFSET_HEADER *RetFsTrackOffsetBlob,
    _Out_ LONGLONG *RetTrackedOffset);
NTSTATUS
IoSetFsTrackOffsetState(
    _Inout_ PIRP Irp,
    _In_ PIO_IRP_EXT_TRACK_OFFSET_HEADER FsTrackOffsetBlob,
    _In_ LONGLONG TrackedOffset);
NTSTATUS
IoClearFsTrackOffsetState(
    _Inout_ PIRP Irp
    );
BOOLEAN
IoIrpHasFsTrackOffsetExtensionType(
    _In_ PIRP Irp );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PVOID
PoRegisterSystemState (
    _Inout_opt_ PVOID StateHandle,
    _In_ EXECUTION_STATE Flags
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PoCreatePowerRequest (
    _Outptr_ PVOID *PowerRequest,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_opt_ PCOUNTED_REASON_CONTEXT Context
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
PoSetPowerRequest (
    _Inout_ PVOID PowerRequest,
    _In_ POWER_REQUEST_TYPE Type
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
PoClearPowerRequest (
    _Inout_ PVOID PowerRequest,
    _In_ POWER_REQUEST_TYPE Type
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
PoDeletePowerRequest (
    _Inout_ PVOID PowerRequest
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
PoUnregisterSystemState (
    _Inout_ PVOID StateHandle
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
POWER_STATE
PoSetPowerState (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ POWER_STATE_TYPE Type,
    _In_ POWER_STATE State
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
PoCallDriver (
    _In_ PDEVICE_OBJECT DeviceObject,
    _Inout_ __drv_aliasesMem PIRP Irp
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
PoStartNextPowerIrp(
    _Inout_ PIRP Irp
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PULONG
PoRegisterDeviceForIdleDetection (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG ConservationIdleTime,
    _In_ ULONG PerformanceIdleTime,
    _In_ DEVICE_POWER_STATE State
    );
    *IdlePointer = 0
NTKERNELAPI
VOID
PoSetDeviceBusyEx (
    _Inout_ PULONG IdlePointer
    );
NTKERNELAPI
VOID
PoStartDeviceBusy (
    _Inout_ PULONG IdlePointer
    );
NTKERNELAPI
VOID
PoEndDeviceBusy (
    _Inout_ PULONG IdlePointer
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
BOOLEAN
PoQueryWatchdogTime (
    _In_ PDEVICE_OBJECT Pdo,
    _Out_ PULONG SecondsRemaining
    );
typedef
_Function_class_(POWER_SETTING_CALLBACK)
_IRQL_requires_same_
NTSTATUS
POWER_SETTING_CALLBACK (
    _In_ LPCGUID SettingGuid,
    _In_reads_bytes_(ValueLength) PVOID Value,
    _In_ ULONG ValueLength,
    _Inout_opt_ PVOID Context
);
typedef POWER_SETTING_CALLBACK *PPOWER_SETTING_CALLBACK;
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PoRegisterPowerSettingCallback (
    _In_opt_ PDEVICE_OBJECT DeviceObject,
    _In_ LPCGUID SettingGuid,
    _In_ PPOWER_SETTING_CALLBACK Callback,
    _In_opt_ PVOID Context,
    _Outptr_opt_ PVOID *Handle
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PoUnregisterPowerSettingCallback (
    _Inout_ PVOID Handle
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
PoQueueShutdownWorkItem(
    _Inout_ __drv_aliasesMem PWORK_QUEUE_ITEM WorkItem
    );
NTKERNELAPI
BOOLEAN
MmIsRecursiveIoFault (
    VOID
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
BOOLEAN
MmForceSectionClosed (
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer,
    _In_ BOOLEAN DelayClose
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
BOOLEAN
MmForceSectionClosedEx (
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer,
    _In_ ULONG ForceCloseFlags
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
ULONGLONG
MmGetMaximumFileSectionSize (
    VOID
    );
typedef enum _MMFLUSH_TYPE {
    MmFlushForDelete,
    MmFlushForWrite
} MMFLUSH_TYPE;
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
BOOLEAN
MmFlushImageSection (
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer,
    _In_ MMFLUSH_TYPE FlushType
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
BOOLEAN
MmCanFileBeTruncated (
    _In_ PSECTION_OBJECT_POINTERS SectionPointer,
    _In_opt_ PLARGE_INTEGER NewFileSize
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
BOOLEAN
MmSetAddressRangeModified (
    _In_reads_bytes_ (Length) PVOID Address,
    _In_ SIZE_T Length
    );
typedef struct _READ_LIST {
    PFILE_OBJECT FileObject;
    ULONG NumberOfEntries;
    LOGICAL IsImage;
    FILE_SEGMENT_ELEMENT List[ANYSIZE_ARRAY];
} READ_LIST, *PREAD_LIST;
typedef union _MM_PREFETCH_FLAGS {
    struct {
        ULONG Priority : SYSTEM_PAGE_PRIORITY_BITS;
        ULONG RepurposePriority : SYSTEM_PAGE_PRIORITY_BITS;
        ULONG PriorityProtection : 1;
        ULONG MustBeZero : 2;
        ULONG CannotBeUsedAsFlags : 23;
    } Flags;
    ULONG AllFlags;
} MM_PREFETCH_FLAGS, *PMM_PREFETCH_FLAGS;
_IRQL_requires_max_ (PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
MmPrefetchPages (
    _In_ ULONG NumberOfLists,
    _In_reads_ (NumberOfLists) PREAD_LIST *ReadLists
    );
_IRQL_requires_max_ (APC_LEVEL)
NTKERNELAPI
ULONG
MmDoesFileHaveUserWritableReferences (
    _In_ PSECTION_OBJECT_POINTERS SectionPointer
    );
_IRQL_requires_max_ (APC_LEVEL)
LOGICAL
MmMdlPagesAreZero (
    _In_ PMDL Mdl
    );
typedef struct _PHYSICAL_MEMORY_RUN {
    PFN_NUMBER BasePage;
    PFN_NUMBER PageCount;
} PHYSICAL_MEMORY_RUN, *PPHYSICAL_MEMORY_RUN;
typedef struct _PHYSICAL_MEMORY_DESCRIPTOR {
    ULONG NumberOfRuns;
    PFN_NUMBER NumberOfPages;
    PHYSICAL_MEMORY_RUN Run[1];
} PHYSICAL_MEMORY_DESCRIPTOR, *PPHYSICAL_MEMORY_DESCRIPTOR;
typedef struct _PHYSICAL_EXTENTS_DESCRIPTOR {
    ULONG NumberOfRuns;
    ULONG NumberOfValidRuns;
    PHYSICAL_MEMORY_RUN Run[1];
} PHYSICAL_EXTENTS_DESCRIPTOR, *PPHYSICAL_EXTENTS_DESCRIPTOR;
NTHALAPI
LARGE_INTEGER
KeQueryPerformanceCounter (
   _Out_opt_ PLARGE_INTEGER PerformanceFrequency
   );
NTHALAPI
VOID
KeStallExecutionProcessor (
    _In_ ULONG MicroSeconds
    );
NTKERNELAPI
NTSTATUS
ObInsertObject(
    _In_ PVOID Object,
    _Inout_opt_ PACCESS_STATE PassedAccessState,
    _In_opt_ ACCESS_MASK DesiredAccess,
    _In_ ULONG ObjectPointerBias,
    _Out_opt_ PVOID *NewObject,
    _Out_opt_ PHANDLE Handle
    );
NTKERNELAPI
NTSTATUS
ObOpenObjectByPointer(
    _In_ PVOID Object,
    _In_ ULONG HandleAttributes,
    _In_opt_ PACCESS_STATE PassedAccessState,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_TYPE ObjectType,
    _In_ KPROCESSOR_MODE AccessMode,
    _Out_ PHANDLE Handle
    );
NTKERNELAPI
NTSTATUS
ObOpenObjectByPointerWithTag(
    _In_ PVOID Object,
    _In_ ULONG HandleAttributes,
    _In_opt_ PACCESS_STATE PassedAccessState,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_TYPE ObjectType,
    _In_ KPROCESSOR_MODE AccessMode,
    _In_ ULONG Tag,
    _Out_ PHANDLE Handle
    );
NTKERNELAPI
VOID
ObMakeTemporaryObject(
    _In_ PVOID Object
    );
NTKERNELAPI
NTSTATUS
ObQueryNameString(
    _In_ PVOID Object,
    _Out_writes_bytes_opt_(Length) POBJECT_NAME_INFORMATION ObjectNameInfo,
    _In_ ULONG Length,
    _Out_ PULONG ReturnLength
    );
NTKERNELAPI
BOOLEAN
ObIsKernelHandle (
    _In_ HANDLE Handle
    );
NTKERNELAPI
NTSTATUS
ObQueryObjectAuditingByHandle(
    _In_ HANDLE Handle,
    _Out_ PBOOLEAN GenerateOnClose
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTKERNELAPI
NTSTATUS
IoRequestDeviceRemovalForReset(
    _In_ PDEVICE_OBJECT PhysicalDeviceObject,
    _In_ ULONG Flags
    );
typedef ULONG LBN;
typedef LBN *PLBN;
typedef ULONG VBN;
typedef VBN *PVBN;
typedef PVOID OPLOCK, *POPLOCK;
typedef enum _FAST_IO_POSSIBLE {
    FastIoIsNotPossible = 0,
    FastIoIsPossible,
    FastIoIsQuestionable
} FAST_IO_POSSIBLE;
typedef struct _FSRTL_COMMON_FCB_HEADER {
    CSHORT NodeTypeCode;
    CSHORT NodeByteSize;
    UCHAR Flags;
    UCHAR IsFastIoPossible;
    UCHAR Flags2;
    UCHAR Reserved : 4 ;
    UCHAR Version : 4 ;
    PERESOURCE Resource;
    PERESOURCE PagingIoResource;
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER FileSize;
    LARGE_INTEGER ValidDataLength;
} FSRTL_COMMON_FCB_HEADER;
typedef FSRTL_COMMON_FCB_HEADER *PFSRTL_COMMON_FCB_HEADER;
typedef struct _FSRTL_ADVANCED_FCB_HEADER:FSRTL_COMMON_FCB_HEADER {
    PFAST_MUTEX FastMutex;
    LIST_ENTRY FilterContexts;
    EX_PUSH_LOCK PushLock;
    PVOID* FileContextSupportPointer;
    union {
        OPLOCK Oplock;
        PVOID ReservedForRemote;
    };
    PVOID ReservedContext;
} FSRTL_ADVANCED_FCB_HEADER;
typedef FSRTL_ADVANCED_FCB_HEADER *PFSRTL_ADVANCED_FCB_HEADER;
typedef struct _EOF_WAIT_BLOCK {
    LIST_ENTRY EofWaitLinks;
    KEVENT Event;
} EOF_WAIT_BLOCK;
typedef EOF_WAIT_BLOCK *PEOF_WAIT_BLOCK;
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
_Function_class_(FAST_IO_READ)
NTKERNELAPI
BOOLEAN
FsRtlCopyRead (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _In_ ULONG LockKey,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ PDEVICE_OBJECT DeviceObject
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
_Function_class_(FAST_IO_WRITE)
NTKERNELAPI
BOOLEAN
FsRtlCopyWrite (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _In_ ULONG LockKey,
    _In_reads_bytes_(Length) PVOID Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ PDEVICE_OBJECT DeviceObject
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FsRtlMdlReadEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG LockKey,
    _Outptr_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
_Function_class_(FAST_IO_MDL_READ)
NTKERNELAPI
BOOLEAN
FsRtlMdlReadDev (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG LockKey,
    _Outptr_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_opt_ PDEVICE_OBJECT DeviceObject
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Function_class_(FAST_IO_MDL_READ_COMPLETE)
NTKERNELAPI
BOOLEAN
FsRtlMdlReadCompleteDev (
    _In_ PFILE_OBJECT FileObject,
    _In_ PMDL MdlChain,
    _In_opt_ PDEVICE_OBJECT DeviceObject
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FsRtlPrepareMdlWriteEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG LockKey,
    _Outptr_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
_Function_class_(FAST_IO_PREPARE_MDL_WRITE)
NTKERNELAPI
BOOLEAN
FsRtlPrepareMdlWriteDev (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG LockKey,
    _Outptr_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ PDEVICE_OBJECT DeviceObject
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
_Function_class_(FAST_IO_MDL_WRITE_COMPLETE)
NTKERNELAPI
BOOLEAN
FsRtlMdlWriteCompleteDev (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ PMDL MdlChain,
    _In_opt_ PDEVICE_OBJECT DeviceObject
    );
typedef struct _FSRTL_AUXILIARY_BUFFER {
    PVOID Buffer;
    ULONG Length;
    ULONG Flags;
    PMDL Mdl;
} FSRTL_AUXILIARY_BUFFER;
typedef FSRTL_AUXILIARY_BUFFER *PFSRTL_AUXILIARY_BUFFER;
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
FsRtlAcquireFileExclusive (
    _In_ PFILE_OBJECT FileObject
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlReleaseFile (
    _In_ PFILE_OBJECT FileObject
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FsRtlGetFileSize(
    _In_ PFILE_OBJECT FileObject,
    _Out_ PLARGE_INTEGER FileSize
    );
_Must_inspect_result_
NTKERNELAPI
BOOLEAN
FsRtlIsTotalDeviceFailure(
    _In_ NTSTATUS Status
    );
typedef struct _FILE_LOCK_INFO {
    LARGE_INTEGER StartingByte;
    LARGE_INTEGER Length;
    BOOLEAN ExclusiveLock;
    ULONG Key;
    PFILE_OBJECT FileObject;
    PVOID ProcessId;
    LARGE_INTEGER EndingByte;
} FILE_LOCK_INFO;
typedef FILE_LOCK_INFO *PFILE_LOCK_INFO;
typedef NTSTATUS (*PCOMPLETE_LOCK_IRP_ROUTINE) (
    _In_ PVOID Context,
    _In_ PIRP Irp
    );
typedef VOID (*PUNLOCK_ROUTINE) (
    _In_ PVOID Context,
    _In_ PFILE_LOCK_INFO FileLockInfo
    );
typedef struct _FILE_LOCK {
    PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine;
    PUNLOCK_ROUTINE UnlockRoutine;
    BOOLEAN FastIoIsQuestionable;
    BOOLEAN SpareC[3];
    PVOID LockInformation;
    FILE_LOCK_INFO LastReturnedLockInfo;
    PVOID LastReturnedLock;
    LONG volatile LockRequestsInProgress;
} FILE_LOCK;
typedef FILE_LOCK *PFILE_LOCK;
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFILE_LOCK
FsRtlAllocateFileLock (
    _In_opt_ PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine,
    _In_opt_ PUNLOCK_ROUTINE UnlockRoutine
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlFreeFileLock (
    _In_ PFILE_LOCK FileLock
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlInitializeFileLock (
    _Out_ PFILE_LOCK FileLock,
    _In_opt_ PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine,
    _In_opt_ PUNLOCK_ROUTINE UnlockRoutine
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlUninitializeFileLock (
    _Inout_ PFILE_LOCK FileLock
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlProcessFileLock (
    _In_ PFILE_LOCK FileLock,
    _In_ PIRP Irp,
    _In_opt_ PVOID Context
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlCheckLockForReadAccess (
    _In_ PFILE_LOCK FileLock,
    _In_ PIRP Irp
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlCheckLockForWriteAccess (
    _In_ PFILE_LOCK FileLock,
    _In_ PIRP Irp
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlCheckLockForOplockRequest (
    _In_ PFILE_LOCK FileLock,
    _In_ PLARGE_INTEGER AllocationSize
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlFastCheckLockForRead (
    _In_ PFILE_LOCK FileLock,
    _In_ PLARGE_INTEGER StartingByte,
    _In_ PLARGE_INTEGER Length,
    _In_ ULONG Key,
    _In_ PFILE_OBJECT FileObject,
    _In_ PVOID ProcessId
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlFastCheckLockForWrite (
    _In_ PFILE_LOCK FileLock,
    _In_ PLARGE_INTEGER StartingByte,
    _In_ PLARGE_INTEGER Length,
    _In_ ULONG Key,
    _In_ PVOID FileObject,
    _In_ PVOID ProcessId
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFILE_LOCK_INFO
FsRtlGetNextFileLock (
    _In_ PFILE_LOCK FileLock,
    _In_ BOOLEAN Restart
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlAreThereCurrentOrInProgressFileLocks (
    _In_ PFILE_LOCK FileLock
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlAreThereWaitingFileLocks (
    _In_ PFILE_LOCK FileLock
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlFastUnlockSingle (
    _In_ PFILE_LOCK FileLock,
    _In_ PFILE_OBJECT FileObject,
    _In_ LARGE_INTEGER UNALIGNED *FileOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ PEPROCESS ProcessId,
    _In_ ULONG Key,
    _In_opt_ PVOID Context,
    _In_ BOOLEAN AlreadySynchronized
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlFastUnlockAll (
    _In_ PFILE_LOCK FileLock,
    _In_ PFILE_OBJECT FileObject,
    _In_ PEPROCESS ProcessId,
    _In_opt_ PVOID Context
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlFastUnlockAllByKey (
    _In_ PFILE_LOCK FileLock,
    _In_ PFILE_OBJECT FileObject,
    _In_ PEPROCESS ProcessId,
    _In_ ULONG Key,
    _In_opt_ PVOID Context
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
__drv_preferredFunction(FsRtlFastLock, "Obsolete")
NTKERNELAPI
BOOLEAN
FsRtlPrivateLock (
    _In_ PFILE_LOCK FileLock,
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ PEPROCESS ProcessId,
    _In_ ULONG Key,
    _In_ BOOLEAN FailImmediately,
    _In_ BOOLEAN ExclusiveLock,
    _Out_ PIO_STATUS_BLOCK Iosb,
    _In_opt_ PIRP Irp,
    _In_opt_ __drv_aliasesMem PVOID Context,
    _In_ BOOLEAN AlreadySynchronized
    );






















typedef struct {
    FAST_MUTEX Mutex;
    PRTL_SPLAY_LINKS Cache;
    LIST_ENTRY TimerQueue;
    USHORT NumEntries;
} TUNNEL, *PTUNNEL;
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlInitializeTunnelCache (
    _Out_ TUNNEL *Cache
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlAddToTunnelCache (
    _Inout_ TUNNEL *Cache,
    _In_ ULONGLONG DirectoryKey,
    _In_ UNICODE_STRING *ShortName,
    _In_ UNICODE_STRING *LongName,
    _In_ BOOLEAN KeyByShortName,
    _In_ ULONG DataLength,
    _In_reads_bytes_(DataLength) VOID *Data
    );
_At_(ShortName->MaximumLength, _In_range_(>=,8+1+3))
_Unchanged_(ShortName->MaximumLength)
_Unchanged_(ShortName->Buffer)
_When_(_Old_(LongName->Buffer) != LongName->Buffer, _At_(LongName->Buffer, __drv_allocatesMem(Mem)))
_At_(LongName->Buffer, _Must_inspect_result_)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlFindInTunnelCache (
    _In_ TUNNEL *Cache,
    _In_ ULONGLONG DirectoryKey,
    _In_ UNICODE_STRING *Name,
    _Inout_ UNICODE_STRING *ShortName,
    _Inout_ UNICODE_STRING *LongName,
    _Inout_ ULONG *DataLength,
    _Out_writes_bytes_to_(*DataLength, *DataLength) VOID *Data
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlAddToTunnelCacheEx (
    _Inout_ TUNNEL *Cache,
    _In_ ULONGLONG DirectoryKey,
    _In_ UNICODE_STRING *ShortName,
    _In_ UNICODE_STRING *LongName,
    _In_ ULONG Flags,
    _In_ ULONG DataLength,
    _In_reads_bytes_(DataLength) VOID *Data
    );
_At_(ShortName->MaximumLength, _In_range_(>=,8+1+3))
_Unchanged_(ShortName->MaximumLength)
_Unchanged_(ShortName->Buffer)
_When_(_Old_(LongName->Buffer) != LongName->Buffer, _At_(LongName->Buffer, __drv_allocatesMem(Mem)))
_At_(LongName->Buffer, _Must_inspect_result_)
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlFindInTunnelCacheEx (
    _In_ TUNNEL *Cache,
    _In_ ULONGLONG DirectoryKey,
    _In_ UNICODE_STRING *Name,
    _Inout_ UNICODE_STRING *ShortName,
    _Inout_ UNICODE_STRING *LongName,
    _In_ ULONG Flags,
    _Inout_ ULONG *DataLength,
    _Out_writes_bytes_to_(*DataLength, *DataLength) VOID *Data
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlDeleteKeyFromTunnelCache (
    _Inout_ TUNNEL *Cache,
    _In_ ULONGLONG DirectoryKey
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlDeleteTunnelCache (
    _Inout_ TUNNEL *Cache
    );
typedef enum _FSRTL_COMPARISON_RESULT {
    LessThan = -1,
    EqualTo = 0,
    GreaterThan = 1
} FSRTL_COMPARISON_RESULT;
extern UCHAR const* const LEGAL_ANSI_CHARACTER_ARRAY;
extern PUSHORT NLS_OEM_LEAD_BYTE_INFO;





















_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlDissectDbcs (
    _In_ ANSI_STRING Path,
    _Out_ PANSI_STRING FirstName,
    _Out_ PANSI_STRING RemainingName
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlDoesDbcsContainWildCards (
    _In_ PANSI_STRING Name
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlIsDbcsInExpression (
    _In_ PANSI_STRING Expression,
    _In_ PANSI_STRING Name
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlIsFatDbcsLegal (
    _In_ ANSI_STRING DbcsName,
    _In_ BOOLEAN WildCardsPermissible,
    _In_ BOOLEAN PathNamePermissible,
    _In_ BOOLEAN LeadingBackslashPermissible
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlIsHpfsDbcsLegal (
    _In_ ANSI_STRING DbcsName,
    _In_ BOOLEAN WildCardsPermissible,
    _In_ BOOLEAN PathNamePermissible,
    _In_ BOOLEAN LeadingBackslashPermissible
    );
NTKERNELAPI
NTSTATUS
FsRtlNormalizeNtstatus (
    _In_ NTSTATUS Exception,
    _In_ NTSTATUS GenericException
    );
_Must_inspect_result_
NTKERNELAPI
BOOLEAN
FsRtlIsNtstatusExpected (
    _In_ NTSTATUS Exception
    );






_IRQL_requires_max_(APC_LEVEL)
__drv_preferredFunction(ExAllocateFromNPagedLookasideList, "The FsRtlAllocateResource routine is obsolete, but is exported to support existing driver binaries. Use ExAllocateFromNPagedLookasideList and ExInitializeResourceLite instead.")
NTKERNELAPI
PERESOURCE
FsRtlAllocateResource (
    VOID
    );
typedef struct _BASE_MCB {
    ULONG MaximumPairCount;
    ULONG PairCount;
    USHORT PoolType;
    USHORT Flags;
    PVOID Mapping;
} BASE_MCB;
typedef BASE_MCB *PBASE_MCB;
typedef struct _LARGE_MCB {
    PKGUARDED_MUTEX GuardedMutex;
    BASE_MCB BaseMcb;
} LARGE_MCB;
typedef LARGE_MCB *PLARGE_MCB;
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlInitializeLargeMcb (
    _Out_ PLARGE_MCB Mcb,
    _In_ POOL_TYPE PoolType
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlUninitializeLargeMcb (
    _Inout_ PLARGE_MCB Mcb
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlResetLargeMcb (
    _Inout_ PLARGE_MCB Mcb,
    _In_ BOOLEAN SelfSynchronized
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlTruncateLargeMcb (
    _Inout_ PLARGE_MCB Mcb,
    _In_ LONGLONG Vbn
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlAddLargeMcbEntry (
    _Inout_ PLARGE_MCB Mcb,
    _In_ LONGLONG Vbn,
    _In_ LONGLONG Lbn,
    _In_ LONGLONG SectorCount
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlRemoveLargeMcbEntry (
    _Inout_ PLARGE_MCB Mcb,
    _In_ LONGLONG Vbn,
    _In_ LONGLONG SectorCount
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlLookupLargeMcbEntry (
    _In_ PLARGE_MCB Mcb,
    _In_ LONGLONG Vbn,
    _Out_opt_ PLONGLONG Lbn,
    _Out_opt_ PLONGLONG SectorCountFromLbn,
    _Out_opt_ PLONGLONG StartingLbn,
    _Out_opt_ PLONGLONG SectorCountFromStartingLbn,
    _Out_opt_ PULONG Index
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlLookupLastLargeMcbEntry (
    _In_ PLARGE_MCB Mcb,
    _Out_ PLONGLONG Vbn,
    _Out_ PLONGLONG Lbn
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlLookupLastLargeMcbEntryAndIndex (
    _In_ PLARGE_MCB OpaqueMcb,
    _Out_ PLONGLONG LargeVbn,
    _Out_ PLONGLONG LargeLbn,
    _Out_ PULONG Index
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
ULONG
FsRtlNumberOfRunsInLargeMcb (
    _In_ PLARGE_MCB Mcb
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlGetNextLargeMcbEntry (
    _In_ PLARGE_MCB Mcb,
    _In_ ULONG RunIndex,
    _Out_ PLONGLONG Vbn,
    _Out_ PLONGLONG Lbn,
    _Out_ PLONGLONG SectorCount
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlSplitLargeMcb (
    _Inout_ PLARGE_MCB Mcb,
    _In_ LONGLONG Vbn,
    _In_ LONGLONG Amount
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlInitializeBaseMcb (
    _Out_ PBASE_MCB Mcb,
    _In_ POOL_TYPE PoolType
    );
_When_(!Flags & MCB_FLAG_RAISE_ON_ALLOCATION_FAILURE, _Must_inspect_result_)
_IRQL_requires_max_(APC_LEVEL)
BOOLEAN
FsRtlInitializeBaseMcbEx (
    _Out_ PBASE_MCB Mcb,
    _In_ POOL_TYPE PoolType,
    _In_ USHORT Flags
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlUninitializeBaseMcb (
    _In_ PBASE_MCB Mcb
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlResetBaseMcb (
    _Out_ PBASE_MCB Mcb
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlTruncateBaseMcb (
    _Inout_ PBASE_MCB Mcb,
    _In_ LONGLONG Vbn
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlAddBaseMcbEntry (
    _Inout_ PBASE_MCB Mcb,
    _In_ LONGLONG Vbn,
    _In_ LONGLONG Lbn,
    _In_ LONGLONG SectorCount
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTSTATUS
FsRtlAddBaseMcbEntryEx (
    _Inout_ PBASE_MCB Mcb,
    _In_ LONGLONG Vbn,
    _In_ LONGLONG Lbn,
    _In_ LONGLONG SectorCount
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlRemoveBaseMcbEntry (
    _Inout_ PBASE_MCB Mcb,
    _In_ LONGLONG Vbn,
    _In_ LONGLONG SectorCount
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlLookupBaseMcbEntry (
    _In_ PBASE_MCB Mcb,
    _In_ LONGLONG Vbn,
    _Out_opt_ PLONGLONG Lbn,
    _Out_opt_ PLONGLONG SectorCountFromLbn,
    _Out_opt_ PLONGLONG StartingLbn,
    _Out_opt_ PLONGLONG SectorCountFromStartingLbn,
    _Out_opt_ PULONG Index
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlLookupLastBaseMcbEntry (
    _In_ PBASE_MCB Mcb,
    _Out_ PLONGLONG Vbn,
    _Out_ PLONGLONG Lbn
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlLookupLastBaseMcbEntryAndIndex (
    _In_ PBASE_MCB OpaqueMcb,
    _Inout_ PLONGLONG LargeVbn,
    _Inout_ PLONGLONG LargeLbn,
    _Inout_ PULONG Index
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
ULONG
FsRtlNumberOfRunsInBaseMcb (
    _In_ PBASE_MCB Mcb
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlGetNextBaseMcbEntry (
    _In_ PBASE_MCB Mcb,
    _In_ ULONG RunIndex,
    _Out_ PLONGLONG Vbn,
    _Out_ PLONGLONG Lbn,
    _Out_ PLONGLONG SectorCount
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlSplitBaseMcb (
    _Inout_ PBASE_MCB Mcb,
    _In_ LONGLONG Vbn,
    _In_ LONGLONG Amount
    );
typedef struct _MCB {
    LARGE_MCB DummyFieldThatSizesThisStructureCorrectly;
} MCB;
typedef MCB *PMCB;
_IRQL_requires_max_(APC_LEVEL)
__drv_preferredFunction(FsRtlInitializeLargeMcb, "Obsolete")
NTKERNELAPI
VOID
FsRtlInitializeMcb (
    _Out_ PMCB Mcb,
    _In_ POOL_TYPE PoolType
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlUninitializeMcb (
    _Inout_ PMCB Mcb
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlTruncateMcb (
    _Inout_ PMCB Mcb,
    _In_ VBN Vbn
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlAddMcbEntry (
    _Inout_ PMCB Mcb,
    _In_ VBN Vbn,
    _In_ LBN Lbn,
    _In_ ULONG SectorCount
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlRemoveMcbEntry (
    _Inout_ PMCB Mcb,
    _In_ VBN Vbn,
    _In_ ULONG SectorCount
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlLookupMcbEntry (
    _In_ PMCB Mcb,
    _In_ VBN Vbn,
    _Out_ PLBN Lbn,
    _Out_opt_ PULONG SectorCount,
    _Out_ PULONG Index
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlLookupLastMcbEntry (
    _In_ PMCB Mcb,
    _Out_ PVBN Vbn,
    _Out_ PLBN Lbn
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
ULONG
FsRtlNumberOfRunsInMcb (
    _In_ PMCB Mcb
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlGetNextMcbEntry (
    _In_ PMCB Mcb,
    _In_ ULONG RunIndex,
    _Out_ PVBN Vbn,
    _Out_ PLBN Lbn,
    _Out_ PULONG SectorCount
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlBalanceReads (
    _In_ PDEVICE_OBJECT TargetDevice
    );
typedef
VOID
(*POPLOCK_WAIT_COMPLETE_ROUTINE) (
    _In_ PVOID Context,
        _In_opt_ PIRP Irp
    );
typedef
VOID
(*POPLOCK_FS_PREPOST_IRP) (
    _In_ PVOID Context,
    _In_opt_ PIRP Irp
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlInitializeOplock (
    _Out_ POPLOCK Oplock
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlUninitializeOplock (
    _Inout_ POPLOCK Oplock
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlOplockFsctrl (
    _In_ POPLOCK Oplock,
    _In_ PIRP Irp,
    _In_ ULONG OpenCount
    );
_When_(CompletionRoutine != NULL, _Must_inspect_result_)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlCheckOplock (
    _In_ POPLOCK Oplock,
    _In_ PIRP Irp,
    _In_opt_ PVOID Context,
    _In_opt_ POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
    _In_opt_ POPLOCK_FS_PREPOST_IRP PostIrpRoutine
    );
_When_(Flags | OPLOCK_FLAG_BACK_OUT_ATOMIC_OPLOCK, _Must_inspect_result_)
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlCheckOplockEx (
    _In_ POPLOCK Oplock,
    _In_ PIRP Irp,
    _In_ ULONG Flags,
    _In_opt_ PVOID Context,
    _In_opt_ POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
    _In_opt_ POPLOCK_FS_PREPOST_IRP PostIrpRoutine
    );
_When_(CompletionRoutine != NULL, _Must_inspect_result_)
__drv_maxIRQL(APC_LEVEL)
NTSTATUS
FsRtlCheckUpperOplock (
    _In_ POPLOCK Oplock,
    _In_ ULONG NewLowerOplockState,
    _In_opt_ PVOID CompletionRoutineContext,
    _In_opt_ POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
    _In_opt_ POPLOCK_FS_PREPOST_IRP PrePendRoutine,
    _In_ ULONG Flags
    );
_Must_inspect_result_
__drv_maxIRQL(APC_LEVEL)
NTSTATUS
FsRtlUpperOplockFsctrl (
    _In_ POPLOCK Oplock,
    _In_ PIRP Irp,
    _In_ ULONG OpenCount,
    _In_ ULONG LowerOplockState,
    _In_ ULONG Flags
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlOplockIsFastIoPossible (
    _In_ POPLOCK Oplock
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlCurrentBatchOplock (
    _In_ POPLOCK Oplock
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlCurrentOplock (
    _In_ POPLOCK Oplock
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlOplockBreakToNone (
    _Inout_ POPLOCK Oplock,
    _In_opt_ PIO_STACK_LOCATION IrpSp,
    _In_ PIRP Irp,
    _In_opt_ PVOID Context,
    _In_opt_ POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
    _In_opt_ POPLOCK_FS_PREPOST_IRP PostIrpRoutine
    );
typedef struct _OPLOCK_KEY_ECP_CONTEXT {
    GUID OplockKey;
    ULONG Reserved;
} OPLOCK_KEY_ECP_CONTEXT, *POPLOCK_KEY_ECP_CONTEXT;
DEFINE_GUID( GUID_ECP_OPLOCK_KEY, 0x48850596, 0x3050, 0x4be7, 0x98, 0x63, 0xfe, 0xc3, 0x50, 0xce, 0x8d, 0x7f );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlOplockIsSharedRequest(
    _In_ PIRP Irp
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlOplockBreakH (
    _In_ POPLOCK Oplock,
    _In_ PIRP Irp,
    _In_ ULONG Flags,
    _In_opt_ PVOID Context,
    _In_opt_ POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
    _In_opt_ POPLOCK_FS_PREPOST_IRP PostIrpRoutine
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlCurrentOplockH (
    _In_ POPLOCK Oplock
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlOplockBreakToNoneEx (
    _Inout_ POPLOCK Oplock,
    _In_ PIRP Irp,
    _In_ ULONG Flags,
    _In_opt_ PVOID Context,
    _In_opt_ POPLOCK_WAIT_COMPLETE_ROUTINE CompletionRoutine,
    _In_opt_ POPLOCK_FS_PREPOST_IRP PostIrpRoutine
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlOplockFsctrlEx (
    _In_ POPLOCK Oplock,
    _In_ PIRP Irp,
    _In_ ULONG OpenCount,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlOplockKeysEqual (
    _In_opt_ PFILE_OBJECT Fo1,
    _In_opt_ PFILE_OBJECT Fo2
    );
typedef struct _DUAL_OPLOCK_KEY_ECP_CONTEXT {
    GUID ParentOplockKey;
    GUID TargetOplockKey;
    BOOLEAN ParentOplockKeySet;
    BOOLEAN TargetOplockKeySet;
} DUAL_OPLOCK_KEY_ECP_CONTEXT, *PDUAL_OPLOCK_KEY_ECP_CONTEXT;
DEFINE_GUID( GUID_ECP_DUAL_OPLOCK_KEY, 0x41621a14, 0xb08b, 0x4df1, 0xb6, 0x76, 0xa0, 0x5f, 0xfd, 0xf0, 0x1b, 0xea );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlNotifyVolumeEvent (
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG EventCode
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlNotifyVolumeEventEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG EventCode,
    _In_ PTARGET_DEVICE_CUSTOM_NOTIFICATION Event
    );
typedef struct _REAL_NOTIFY_SYNC *PNOTIFY_SYNC;
typedef
BOOLEAN (*PCHECK_FOR_TRAVERSE_ACCESS) (
    _In_ PVOID NotifyContext,
    _In_opt_ PVOID TargetContext,
    _In_ PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
typedef
BOOLEAN (*PFILTER_REPORT_CHANGE) (
    _In_ PVOID NotifyContext,
    _In_ PVOID FilterContext
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlNotifyInitializeSync (
    _Outptr_result_maybenull_ PNOTIFY_SYNC *NotifySync
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlNotifyUninitializeSync (
    _Inout_ PNOTIFY_SYNC *NotifySync
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_(NotifyIrp == NULL, _At_(FullDirectoryName, _In_opt_))
_When_(NotifyIrp != NULL, _At_(FullDirectoryName, _In_))
NTKERNELAPI
VOID
FsRtlNotifyFullChangeDirectory (
    _In_ PNOTIFY_SYNC NotifySync,
    _In_ PLIST_ENTRY NotifyList,
    _In_ PVOID FsContext,
    PSTRING FullDirectoryName,
    _In_ BOOLEAN WatchTree,
    _In_ BOOLEAN IgnoreBuffer,
    _In_ ULONG CompletionFilter,
    _In_opt_ PIRP NotifyIrp,
    _In_opt_ PCHECK_FOR_TRAVERSE_ACCESS TraverseCallback,
    _In_opt_ PSECURITY_SUBJECT_CONTEXT SubjectContext
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
FsRtlNotifyFilterChangeDirectory (
    _In_ PNOTIFY_SYNC NotifySync,
    _In_ PLIST_ENTRY NotifyList,
    _In_ PVOID FsContext,
    _In_ PSTRING FullDirectoryName,
    _In_ BOOLEAN WatchTree,
    _In_ BOOLEAN IgnoreBuffer,
    _In_ ULONG CompletionFilter,
    _In_opt_ PIRP NotifyIrp,
    _In_opt_ PCHECK_FOR_TRAVERSE_ACCESS TraverseCallback,
    _In_opt_ PSECURITY_SUBJECT_CONTEXT SubjectContext,
    _In_opt_ PFILTER_REPORT_CHANGE FilterCallback
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
FsRtlNotifyFilterReportChange (
    _In_ PNOTIFY_SYNC NotifySync,
    _In_ PLIST_ENTRY NotifyList,
    _In_ PSTRING FullTargetName,
    _In_ USHORT TargetNameOffset,
    _In_opt_ PSTRING StreamName,
    _In_opt_ PSTRING NormalizedParentName,
    _In_ ULONG FilterMatch,
    _In_ ULONG Action,
    _In_opt_ PVOID TargetContext,
    _In_opt_ PVOID FilterContext
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
FsRtlNotifyFullReportChange (
    _In_ PNOTIFY_SYNC NotifySync,
    _In_ PLIST_ENTRY NotifyList,
    _In_ PSTRING FullTargetName,
    _In_ USHORT TargetNameOffset,
    _In_opt_ PSTRING StreamName,
    _In_opt_ PSTRING NormalizedParentName,
    _In_ ULONG FilterMatch,
    _In_ ULONG Action,
    _In_opt_ PVOID TargetContext
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlNotifyCleanup (
    _In_ PNOTIFY_SYNC NotifySync,
    _In_ PLIST_ENTRY NotifyList,
    _In_ PVOID FsContext
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlNotifyCleanupAll (
    _In_ PNOTIFY_SYNC NotifySync,
    _In_ PLIST_ENTRY NotifyList
    );



_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
FsRtlDissectName (
    _In_ UNICODE_STRING Path,
    _Out_ PUNICODE_STRING FirstName,
    _Out_ PUNICODE_STRING RemainingName
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlDoesNameContainWildCards (
    _In_ PUNICODE_STRING Name
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlAreNamesEqual (
    _In_ PCUNICODE_STRING ConstantNameA,
    _In_ PCUNICODE_STRING ConstantNameB,
    _In_ BOOLEAN IgnoreCase,
    _In_reads_opt_(0x10000) PCWCH UpcaseTable
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlIsNameInExpression (
    _In_ PUNICODE_STRING Expression,
    _In_ PUNICODE_STRING Name,
    _In_ BOOLEAN IgnoreCase,
    _In_opt_ PWCH UpcaseTable
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlIsNameInUnUpcasedExpression (
    _In_ PUNICODE_STRING Expression,
    _In_ PUNICODE_STRING Name,
    _In_ BOOLEAN IgnoreCase,
    _In_opt_ PWCH UpcaseTable
    );
typedef
VOID
(*PFSRTL_STACK_OVERFLOW_ROUTINE) (
    _In_ PVOID Context,
    _In_ PKEVENT Event
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
FsRtlPostStackOverflow (
    _In_ PVOID Context,
    _In_ PKEVENT Event,
    _In_ PFSRTL_STACK_OVERFLOW_ROUTINE StackOverflowRoutine
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
VOID
FsRtlPostPagingFileStackOverflow (
    _In_ PVOID Context,
    _In_ PKEVENT Event,
    _In_ PFSRTL_STACK_OVERFLOW_ROUTINE StackOverflowRoutine
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlRegisterUncProvider(
    _Out_ PHANDLE MupHandle,
    _In_ PCUNICODE_STRING RedirectorDeviceName,
    _In_ BOOLEAN MailslotsSupported
    );
typedef ULONG FSRTL_UNC_PROVIDER_FLAGS;
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FsRtlRegisterUncProviderEx(
    _Out_ PHANDLE MupHandle,
    _In_ PCUNICODE_STRING RedirDevName,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ FSRTL_UNC_PROVIDER_FLAGS Flags
    );
typedef ULONG FSRTL_UNC_HARDENING_CAPABILITIES;
typedef struct _Struct_size_bytes_(Size) _FSRTL_UNC_PROVIDER_REGISTRATION {
    USHORT Size;
    USHORT Version;
    union {
        FSRTL_UNC_PROVIDER_FLAGS ProviderFlags;
        struct {
            ULONG MailslotsSupported : 1;
            ULONG CscEnabled : 1;
            ULONG DomainSvcAware : 1;
            ULONG ContainersAware : 1;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
    union {
        FSRTL_UNC_HARDENING_CAPABILITIES HardeningCapabilities;
        struct {
            ULONG SupportsMutualAuth : 1;
            ULONG SupportsIntegrity : 1;
            ULONG SupportsPrivacy : 1;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME2;
} FSRTL_UNC_PROVIDER_REGISTRATION, *PFSRTL_UNC_PROVIDER_REGISTRATION;
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
FsRtlRegisterUncProviderEx2(
    _In_ PCUNICODE_STRING RedirDevName,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ CONST FSRTL_UNC_PROVIDER_REGISTRATION *Registration,
    _Out_ PHANDLE MupHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
VOID
FsRtlDeregisterUncProvider(
    _In_ HANDLE Handle
    );
_Must_inspect_result_
_When_(Irp!=NULL, _IRQL_requires_max_(PASSIVE_LEVEL))
_When_(Irp==NULL, _IRQL_requires_max_(APC_LEVEL))
NTKERNELAPI
NTSTATUS
FsRtlCancellableWaitForSingleObject(
    _In_ PVOID Object,
    _In_opt_ PLARGE_INTEGER Timeout,
    _In_opt_ PIRP Irp
    );
_Must_inspect_result_
_When_(Irp != NULL, _IRQL_requires_max_(PASSIVE_LEVEL))
_When_(Irp == NULL, _IRQL_requires_max_(APC_LEVEL))
NTKERNELAPI
NTSTATUS
FsRtlCancellableWaitForMultipleObjects(
    _In_ ULONG Count,
    _In_reads_(Count) PVOID ObjectArray[],
    _In_ WAIT_TYPE WaitType,
    _In_opt_ PLARGE_INTEGER Timeout,
    _In_opt_ PKWAIT_BLOCK WaitBlockArray,
    _In_opt_ PIRP Irp
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlMupGetProviderInfoFromFileObject(
    _In_ PFILE_OBJECT pFileObject,
    _In_ ULONG Level,
    _Out_writes_bytes_(*pBufferSize) PVOID pBuffer,
    _Inout_ PULONG pBufferSize
    );
typedef struct _FSRTL_MUP_PROVIDER_INFO_LEVEL_1 {
    ULONG32 ProviderId;
} FSRTL_MUP_PROVIDER_INFO_LEVEL_1, *PFSRTL_MUP_PROVIDER_INFO_LEVEL_1;
typedef struct _FSRTL_MUP_PROVIDER_INFO_LEVEL_2 {
    ULONG32 ProviderId;
    UNICODE_STRING ProviderName;
} FSRTL_MUP_PROVIDER_INFO_LEVEL_2, *PFSRTL_MUP_PROVIDER_INFO_LEVEL_2;
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlMupGetProviderIdFromName(
    _In_ PCUNICODE_STRING pProviderName,
    _Out_ PULONG32 pProviderId
    );
typedef struct _FSRTL_PER_FILE_CONTEXT {
    LIST_ENTRY Links;
    PVOID OwnerId;
    PVOID InstanceId;
    PFREE_FUNCTION FreeCallback;
} FSRTL_PER_FILE_CONTEXT, *PFSRTL_PER_FILE_CONTEXT;









_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlInsertPerFileContext (
    _In_ PVOID* PerFileContextPointer,
    _In_ PFSRTL_PER_FILE_CONTEXT Ptr
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFSRTL_PER_FILE_CONTEXT
FsRtlLookupPerFileContext (
    _In_ PVOID* PerFileContextPointer,
    _In_opt_ PVOID OwnerId,
    _In_opt_ PVOID InstanceId
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFSRTL_PER_FILE_CONTEXT
FsRtlRemovePerFileContext (
    _In_ PVOID* PerFileContextPointer,
    _In_opt_ PVOID OwnerId,
    _In_opt_ PVOID InstanceId
    );






_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlTeardownPerFileContexts (
    _In_ PVOID* PerFileContextPointer
    );
typedef struct _FSRTL_PER_STREAM_CONTEXT {
    LIST_ENTRY Links;
    PVOID OwnerId;
    PVOID InstanceId;
    PFREE_FUNCTION FreeCallback;
} FSRTL_PER_STREAM_CONTEXT, *PFSRTL_PER_STREAM_CONTEXT;







_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlInsertPerStreamContext (
    _In_ PFSRTL_ADVANCED_FCB_HEADER PerStreamContext,
    _In_ PFSRTL_PER_STREAM_CONTEXT Ptr
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFSRTL_PER_STREAM_CONTEXT
FsRtlLookupPerStreamContextInternal (
    _In_ PFSRTL_ADVANCED_FCB_HEADER StreamContext,
    _In_opt_ PVOID OwnerId,
    _In_opt_ PVOID InstanceId
    );





_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFSRTL_PER_STREAM_CONTEXT
FsRtlRemovePerStreamContext (
    _In_ PFSRTL_ADVANCED_FCB_HEADER StreamContext,
    _In_opt_ PVOID OwnerId,
    _In_opt_ PVOID InstanceId
    );
_IRQL_requires_max_(APC_LEVEL)
VOID
FORCEINLINE
FsRtlSetupAdvancedHeader(
    _In_ PVOID AdvHdr,
    _In_ PFAST_MUTEX FMutex )
{
    PFSRTL_ADVANCED_FCB_HEADER localAdvHdr = (PFSRTL_ADVANCED_FCB_HEADER)AdvHdr;
    localAdvHdr->Flags |= FSRTL_FLAG_ADVANCED_HEADER;
    localAdvHdr->Flags2 |= FSRTL_FLAG2_SUPPORTS_FILTER_CONTEXTS;
    localAdvHdr->Version = FSRTL_FCB_HEADER_V3;
    InitializeListHead( &localAdvHdr->FilterContexts );
    if (FMutex != NULL) {
        localAdvHdr->FastMutex = FMutex;
    }
    *((PULONG_PTR)(&localAdvHdr->PushLock)) = 0;
    localAdvHdr->FileContextSupportPointer = NULL;
    localAdvHdr->Oplock = NULL;
    localAdvHdr->ReservedContext = NULL;
}
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlTeardownPerStreamContexts (
    _In_ PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader
    );
typedef VOID (*PFN_FSRTLTEARDOWNPERSTREAMCONTEXTS) (_In_ PFSRTL_ADVANCED_FCB_HEADER AdvancedHeader);
typedef struct _FSRTL_PER_FILEOBJECT_CONTEXT {
    LIST_ENTRY Links;
    PVOID OwnerId;
    PVOID InstanceId;
} FSRTL_PER_FILEOBJECT_CONTEXT, *PFSRTL_PER_FILEOBJECT_CONTEXT;


_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlInsertPerFileObjectContext (
    _In_ PFILE_OBJECT FileObject,
    _In_ PFSRTL_PER_FILEOBJECT_CONTEXT Ptr
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFSRTL_PER_FILEOBJECT_CONTEXT
FsRtlLookupPerFileObjectContext (
    _In_ PFILE_OBJECT FileObject,
    _In_opt_ PVOID OwnerId,
    _In_opt_ PVOID InstanceId
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
PFSRTL_PER_FILEOBJECT_CONTEXT
FsRtlRemovePerFileObjectContext (
    _In_ PFILE_OBJECT FileObject,
    _In_opt_ PVOID OwnerId,
    _In_opt_ PVOID InstanceId
    );







NTKERNELAPI
VOID
FsRtlIncrementCcFastReadNotPossible(
    VOID
    );
NTKERNELAPI
VOID
FsRtlIncrementCcFastReadWait(
    VOID
    );
NTKERNELAPI
VOID
FsRtlIncrementCcFastReadNoWait(
    VOID
    );
NTKERNELAPI
VOID
FsRtlIncrementCcFastReadResourceMiss(
    VOID
    );
NTKERNELAPI
VOID
FsRtlIncrementCcFastMdlReadWait(
    VOID
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
LOGICAL
FsRtlIsPagingFile (
    _In_ PFILE_OBJECT FileObject
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTKERNELAPI
LOGICAL
FsRtlIsSystemPagingFile (
    _In_ PFILE_OBJECT FileObject
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlCreateSectionForDataScan(
    _Out_ PHANDLE SectionHandle,
    _Outptr_ PVOID *SectionObject,
    _Out_opt_ PLARGE_INTEGER SectionFileSize,
    _In_ PFILE_OBJECT FileObject,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_opt_ PLARGE_INTEGER MaximumSize,
    _In_ ULONG SectionPageProtection,
    _In_ ULONG AllocationAttributes,
    _In_ ULONG Flags
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlValidateReparsePointBuffer (
    _In_ ULONG BufferLength,
    _In_reads_bytes_(BufferLength) PREPARSE_DATA_BUFFER ReparseBuffer
);
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlRemoveDotsFromPath(
    _Inout_updates_bytes_(PathLength) PWSTR OriginalString,
    _In_ USHORT PathLength,
    _Out_ USHORT *NewLength
);
NTKERNELAPI
BOOLEAN
FsRtlIsNonEmptyDirectoryReparsePointAllowed(
    _In_ ULONG ReparseTag
);
typedef struct _ECP_LIST ECP_LIST;
typedef struct _ECP_LIST *PECP_LIST;
typedef struct _ECP_HEADER ECP_HEADER;
typedef struct _ECP_HEADER *PECP_HEADER;
typedef VOID
(*PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK) (
    _Inout_ PVOID EcpContext,
    _In_ LPCGUID EcpType
    );
typedef ULONG FSRTL_ALLOCATE_ECPLIST_FLAGS;
    #define FSRTL_ALLOCATE_ECPLIST_FLAG_CHARGE_QUOTA 0x00000001
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlAllocateExtraCreateParameterList (
    _In_ FSRTL_ALLOCATE_ECPLIST_FLAGS Flags,
    _Outptr_ PECP_LIST *EcpList
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlFreeExtraCreateParameterList (
    _In_ PECP_LIST EcpList
    );
NTKERNELAPI
NTSTATUS
FsRtlInitializeExtraCreateParameterList (
    _Inout_ PECP_LIST EcpList
    );
typedef ULONG FSRTL_ALLOCATE_ECP_FLAGS;
    #define FSRTL_ALLOCATE_ECP_FLAG_CHARGE_QUOTA 0x00000001
    #define FSRTL_ALLOCATE_ECP_FLAG_NONPAGED_POOL 0x00000002
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlAllocateExtraCreateParameter (
    _In_ LPCGUID EcpType,
    _In_ ULONG SizeOfContext,
    _In_ FSRTL_ALLOCATE_ECP_FLAGS Flags,
    _In_opt_ PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
    _In_ ULONG PoolTag,
    _Outptr_result_bytebuffer_(SizeOfContext) PVOID *EcpContext
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlFreeExtraCreateParameter (
    _In_ PVOID EcpContext
    );
NTKERNELAPI
VOID
FsRtlInitializeExtraCreateParameter(
    _Out_ PECP_HEADER Ecp,
    _In_ ULONG EcpFlags,
    _In_opt_ PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
    _In_ ULONG TotalSize,
    _In_ LPCGUID EcpType,
    _In_opt_ PVOID ListAllocatedFrom
    );
typedef ULONG FSRTL_ECP_LOOKASIDE_FLAGS;
    #define FSRTL_ECP_LOOKASIDE_FLAG_NONPAGED_POOL 0x00000002
_When_(Flags|FSRTL_ECP_LOOKASIDE_FLAG_NONPAGED_POOL, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_(!(Flags|FSRTL_ECP_LOOKASIDE_FLAG_NONPAGED_POOL), _IRQL_requires_max_(APC_LEVEL))
NTKERNELAPI
VOID
FsRtlInitExtraCreateParameterLookasideList (
    _Inout_ PVOID Lookaside,
    _In_ FSRTL_ECP_LOOKASIDE_FLAGS Flags,
    _In_ SIZE_T Size,
    _In_ ULONG Tag
    );
_When_(Flags|FSRTL_ECP_LOOKASIDE_FLAG_NONPAGED_POOL, _IRQL_requires_max_(DISPATCH_LEVEL))
_When_(!(Flags|FSRTL_ECP_LOOKASIDE_FLAG_NONPAGED_POOL), _IRQL_requires_max_(APC_LEVEL))
VOID
FsRtlDeleteExtraCreateParameterLookasideList (
    _Inout_ PVOID Lookaside,
    _In_ FSRTL_ECP_LOOKASIDE_FLAGS Flags
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlAllocateExtraCreateParameterFromLookasideList (
    _In_ LPCGUID EcpType,
     ULONG SizeOfContext,
    _In_ FSRTL_ALLOCATE_ECP_FLAGS Flags,
    _In_opt_ PFSRTL_EXTRA_CREATE_PARAMETER_CLEANUP_CALLBACK CleanupCallback,
    _Inout_ PVOID LookasideList,
    _Outptr_ PVOID *EcpContext
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlInsertExtraCreateParameter (
    _Inout_ PECP_LIST EcpList,
    _Inout_ PVOID EcpContext
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlFindExtraCreateParameter (
    _In_ PECP_LIST EcpList,
    _In_ LPCGUID EcpType,
    _Outptr_opt_ PVOID *EcpContext,
    _Out_opt_ ULONG *EcpContextSize
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlRemoveExtraCreateParameter (
    _Inout_ PECP_LIST EcpList,
    _In_ LPCGUID EcpType,
    _Outptr_ PVOID *EcpContext,
    _Out_opt_ ULONG *EcpContextSize
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlGetEcpListFromIrp (
    _In_ PIRP Irp,
    _Outptr_result_maybenull_ PECP_LIST *EcpList
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlSetEcpListIntoIrp (
    _Inout_ PIRP Irp,
    _In_ PECP_LIST EcpList
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlGetNextExtraCreateParameter (
    _In_ PECP_LIST EcpList,
    _In_opt_ PVOID CurrentEcpContext,
    _Out_opt_ LPGUID NextEcpType,
    _Outptr_opt_ PVOID *NextEcpContext,
    _Out_opt_ ULONG *NextEcpContextSize
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
VOID
FsRtlAcknowledgeEcp (
    _In_ PVOID EcpContext
    );
_IRQL_requires_max_(APC_LEVEL)
VOID
FsRtlPrepareToReuseEcp (
    _In_ PVOID EcpContext
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlIsEcpAcknowledged (
    _In_ PVOID EcpContext
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlIsEcpFromUserMode (
    _In_ PVOID EcpContext
    );
typedef enum {
    NetworkOpenLocationAny,
    NetworkOpenLocationRemote,
    NetworkOpenLocationLoopback
} NETWORK_OPEN_LOCATION_QUALIFIER;
typedef enum {
    NetworkOpenIntegrityAny,
    NetworkOpenIntegrityNone,
    NetworkOpenIntegritySigned,
    NetworkOpenIntegrityEncrypted,
    NetworkOpenIntegrityMaximum
} NETWORK_OPEN_INTEGRITY_QUALIFIER;
typedef ULONG NETWORK_OPEN_IN_FLAGS;
typedef ULONG NETWORK_OPEN_OUT_FLAGS;
typedef struct _NETWORK_OPEN_ECP_CONTEXT {
    USHORT Size;
    USHORT Reserved;
    struct {
        struct {
            NETWORK_OPEN_LOCATION_QUALIFIER Location;
            NETWORK_OPEN_INTEGRITY_QUALIFIER Integrity;
            NETWORK_OPEN_IN_FLAGS Flags;
        } in;
        struct {
            NETWORK_OPEN_LOCATION_QUALIFIER Location;
            NETWORK_OPEN_INTEGRITY_QUALIFIER Integrity;
            NETWORK_OPEN_OUT_FLAGS Flags;
        } out;
    } DUMMYSTRUCTNAME;
} NETWORK_OPEN_ECP_CONTEXT, *PNETWORK_OPEN_ECP_CONTEXT;
typedef struct _NETWORK_OPEN_ECP_CONTEXT_V0 {
    USHORT Size;
    USHORT Reserved;
    struct {
        struct {
            NETWORK_OPEN_LOCATION_QUALIFIER Location;
            NETWORK_OPEN_INTEGRITY_QUALIFIER Integrity;
        } in;
        struct {
            NETWORK_OPEN_LOCATION_QUALIFIER Location;
            NETWORK_OPEN_INTEGRITY_QUALIFIER Integrity;
        } out;
    } DUMMYSTRUCTNAME;
} NETWORK_OPEN_ECP_CONTEXT_V0, *PNETWORK_OPEN_ECP_CONTEXT_V0;
DEFINE_GUID( GUID_ECP_NETWORK_OPEN_CONTEXT, 0xc584edbf, 0x00df, 0x4d28, 0xb8, 0x84, 0x35, 0xba, 0xca, 0x89, 0x11, 0xe8 );
typedef struct _NETWORK_APP_INSTANCE_ECP_CONTEXT {
    USHORT Size;
    USHORT Reserved;
    GUID AppInstanceID;
} NETWORK_APP_INSTANCE_ECP_CONTEXT, *PNETWORK_APP_INSTANCE_ECP_CONTEXT;
DEFINE_GUID(GUID_ECP_NETWORK_APP_INSTANCE, 0x6aa6bc45, 0xa7ef, 0x4af7, 0x90, 0x8, 0xfa, 0x46, 0x2e, 0x14, 0x4d, 0x74);
typedef struct _NETWORK_APP_INSTANCE_VERSION_ECP_CONTEXT {
    USHORT Size;
    USHORT Reserved;
    UINT64 VersionHigh;
    UINT64 VersionLow;
} NETWORK_APP_INSTANCE_VERSION_ECP_CONTEXT, *PNETWORK_APP_INSTANCE_VERSION_ECP_CONTEXT;
DEFINE_GUID(GUID_ECP_NETWORK_APP_INSTANCE_VERSION, 0xb7d082b9, 0x563b, 0x4f07, 0xa0, 0x7b, 0x52, 0x4a, 0x81, 0x16, 0xa0, 0x10);
typedef struct _PREFETCH_OPEN_ECP_CONTEXT {
    PVOID Context;
} PREFETCH_OPEN_ECP_CONTEXT, *PPREFETCH_OPEN_ECP_CONTEXT;
DEFINE_GUID( GUID_ECP_PREFETCH_OPEN, 0xe1777b21, 0x847e, 0x4837, 0xaa, 0x45, 0x64, 0x16, 0x1d, 0x28, 0x6, 0x55 );
typedef struct sockaddr_storage *PSOCKADDR_STORAGE_NFS;
DEFINE_GUID (GUID_ECP_NFS_OPEN,
             0xf326d30c,
             0xe5f8,
             0x4fe7,
             0xab, 0x74, 0xf5, 0xa3, 0x19, 0x6d, 0x92, 0xdb);
typedef struct _NFS_OPEN_ECP_CONTEXT {
    PUNICODE_STRING ExportAlias;
    PSOCKADDR_STORAGE_NFS ClientSocketAddress;
} NFS_OPEN_ECP_CONTEXT, *PNFS_OPEN_ECP_CONTEXT, **PPNFS_OPEN_ECP_CONTEXT;
DEFINE_GUID( GUID_ECP_SRV_OPEN,
             0xbebfaebc,
             0xaabf,
             0x489d,
             0x9d, 0x2c, 0xe9, 0xe3, 0x61, 0x10, 0x28, 0x53 );
typedef enum _SRV_INSTANCE_TYPE {
    SrvInstanceTypeUndefined = 0,
    SrvInstanceTypePrimary = 1,
    SrvInstanceTypeCsv = 2,
    SrvInstanceTypeSBL = 3,
    SrvInstanceTypeSR = 4,
} SRV_INSTANCE_TYPE, *PSRV_INSTANCE_TYPE;
typedef struct _SRV_OPEN_ECP_CONTEXT {
    PUNICODE_STRING ShareName;
    PSOCKADDR_STORAGE_NFS SocketAddress;
    BOOLEAN OplockBlockState;
    BOOLEAN OplockAppState;
    BOOLEAN OplockFinalState;
    USHORT Version;
    SRV_INSTANCE_TYPE InstanceType;
} SRV_OPEN_ECP_CONTEXT, *PSRV_OPEN_ECP_CONTEXT;
DEFINE_GUID( GUID_ECP_RKF_BYPASS,
             0x02378cc6L,
             0xf73c,
             0x489c,
             0x82, 0x82, 0x56, 0x4d, 0x1a, 0x99, 0x13, 0x1b );
typedef struct _RKF_BYPASS_ECP_CONTEXT {
    INT Reserved;
    INT Version;
} RKF_BYPASS_ECP_CONTEXT, *PRKF_BYPASS_ECP_CONTEXT;
DEFINE_GUID( GUID_ECP_IO_DEVICE_HINT,
             0xf315b732,
             0xac6b,
             0x4d4d,
             0xbe, 0xc, 0xb3, 0x12, 0x64, 0x90, 0xe1, 0xa3);
typedef struct _IO_DEVICE_HINT_ECP_CONTEXT {
    PDEVICE_OBJECT TargetDevice;
    UNICODE_STRING RemainingName;
} IO_DEVICE_HINT_ECP_CONTEXT, *PIO_DEVICE_HINT_ECP_CONTEXT;
DEFINE_GUID( GUID_ECP_CSV_DOWN_LEVEL_OPEN,
             0x4248be44,
             0x647f,
             0x488f,
             0x8b, 0xe5, 0xa0, 0x8a, 0xaf, 0x70, 0xf0, 0x28);
typedef enum _CSV_DOWN_LEVEL_FILE_TYPE {
    CsvDownLevelFileObject = 0,
    CsvCsvFsInternalFileObject = 1,
} CSV_DOWN_LEVEL_FILE_TYPE;
typedef struct _CSV_DOWN_LEVEL_OPEN_ECP_CONTEXT {
    ULONG Version;
    BOOLEAN IsResume;
    CSV_DOWN_LEVEL_FILE_TYPE FileType;
    ULONG SourceNodeId;
    ULONG DestinationNodeId;
} CSV_DOWN_LEVEL_OPEN_ECP_CONTEXT, *PCSV_DOWN_LEVEL_OPEN_ECP_CONTEXT;
DEFINE_GUID(GUID_ECP_CSV_QUERY_FILE_REVISION,
            0x44aec90b,
            0xde65,
            0x4d46,
            0x8f, 0xbf, 0x76, 0x3f, 0x9d, 0x97, 0xb, 0x1d);
typedef struct _CSV_QUERY_FILE_REVISION_ECP_CONTEXT {
    LONGLONG FileId;
    LONGLONG FileRevision[3];
} CSV_QUERY_FILE_REVISION_ECP_CONTEXT, *PCSV_QUERY_FILE_REVISION_ECP_CONTEXT;
DEFINE_GUID(GUID_ECP_CSV_QUERY_FILE_REVISION_FILE_ID_128,
            0x7a3a4aa1,
            0xaa74,
            0x4bc6,
            0xb0, 0x70, 0xab, 0x56, 0xa3, 0x8c, 0x1f, 0xed);
typedef struct _CSV_QUERY_FILE_REVISION_ECP_CONTEXT_FILE_ID_128 {
    FILE_ID_128 FileId;
    LONGLONG FileRevision[3];
} CSV_QUERY_FILE_REVISION_ECP_CONTEXT_FILE_ID_128, *PCSV_QUERY_FILE_REVISION_ECP_CONTEXT_FILE_ID_128;
DEFINE_GUID ( GUID_ECP_CSV_SET_HANDLE_PROPERTIES,
            0x7a9fdd94,
            0x7b58,
            0x42bb,
            0x97, 0x40, 0x3c, 0xb8, 0x69, 0x83, 0xa6, 0x15 );
typedef struct _CSV_SET_HANDLE_PROPERTIES_ECP_CONTEXT {
    SIZE_T Size;
    ULONG PauseTimeoutInSeconds;
    ULONG Flags;
} CSV_SET_HANDLE_PROPERTIES_ECP_CONTEXT, *PCSV_SET_HANDLE_PROPERTIES_ECP_CONTEXT;
typedef struct _OPEN_REPARSE_LIST_ENTRY {
    LIST_ENTRY OpenReparseListEntry;
    ULONG ReparseTag;
    ULONG Flags;
    GUID ReparseGuid;
    USHORT Size;
    USHORT RemainingLength;
} OPEN_REPARSE_LIST_ENTRY, *POPEN_REPARSE_LIST_ENTRY;
typedef struct _OPEN_REPARSE_LIST {
    LIST_ENTRY OpenReparseList;
} OPEN_REPARSE_LIST, *POPEN_REPARSE_LIST;
DEFINE_GUID(
    ECP_TYPE_OPEN_REPARSE_GUID,
    0x323eb6a8,
    0xaffd,
    0x4d95,
    0x82, 0x30, 0x86, 0x3b, 0xce, 0x09, 0xd3, 0x7a
);
typedef struct _IO_STOP_ON_SYMLINK_FILTER_ECP_v0 {
    struct {
        ULONG ReparseCount;
        ULONG RemainingPathLength;
    } Out;
} IO_STOP_ON_SYMLINK_FILTER_ECP_v0, *PIO_STOP_ON_SYMLINK_FILTER_ECP_v0;
DEFINE_GUID(
    ECP_TYPE_IO_STOP_ON_SYMLINK_FILTER_GUID,
    0x940e5d56,
    0x1646,
    0x4d3c,
    0x87, 0xb6, 0x57, 0x7e, 0xc3, 0x6a, 0x14, 0x66
);
DEFINE_GUID ( ECP_TYPE_CLFS_CREATE_CONTAINER,
              0x8650c9fe,
              0x0cec,
              0x8bf6,
              0xbd, 0x1e, 0x83, 0x59, 0x56, 0x54, 0x10, 0x90 );
DEFINE_GUID( GUID_ECP_CREATE_REDIRECTION,
             0x188d6bd6,
             0xa126,
             0x4fa8,
             0xbd, 0xf2, 0x1c, 0xcd, 0xf8, 0x96, 0xf3, 0xe0 );
typedef struct _CREATE_REDIRECTION_ECP_CONTEXT {
    USHORT Size;
    USHORT Flags;
    FILE_ID_128 FileId;
    GUID VolumeGuid;
} CREATE_REDIRECTION_ECP_CONTEXT, *PCREATE_REDIRECTION_ECP_CONTEXT;
typedef struct _FILE_TIMESTAMPS {
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
} FILE_TIMESTAMPS, *PFILE_TIMESTAMPS;
typedef struct _ATOMIC_CREATE_ECP_CONTEXT {
    USHORT Size;
    USHORT InFlags;
    USHORT OutFlags;
    USHORT ReparseBufferLength;
    _Field_size_bytes_opt_(ReparseBufferLength) PREPARSE_DATA_BUFFER ReparseBuffer;
    LONGLONG FileSize;
    LONGLONG ValidDataLength;
    PFILE_TIMESTAMPS FileTimestamps;
    ULONG FileAttributes;
    ULONG UsnSourceInfo;
    USN Usn;
    ULONG SuppressFileAttributeInheritanceMask;
    ULONG InOpFlags;
    ULONG OutOpFlags;
    ULONG InGenFlags;
    ULONG OutGenFlags;
    ULONG CaseSensitiveFlagsMask;
    ULONG InCaseSensitiveFlags;
    ULONG OutCaseSensitiveFlags;
} ATOMIC_CREATE_ECP_CONTEXT, *PATOMIC_CREATE_ECP_CONTEXT;
DEFINE_GUID( GUID_ECP_ATOMIC_CREATE,
             0x4720bd83,
             0x52ac,
             0x4104,
             0xa1, 0x30, 0xd1, 0xec, 0x6a, 0x8c, 0xc8, 0xe5 );
typedef struct _ECP_OPEN_PARAMETERS {
    USHORT Size;
    USHORT Reserved;
    ULONG Flags;
} ECP_OPEN_PARAMETERS, *PECP_OPEN_PARAMETERS;
DEFINE_GUID(GUID_ECP_OPEN_PARAMETERS,
            0xcd0a93c3,
            0x3bb7,
            0x463d,
            0xac, 0xcb, 0x96, 0x9d, 0x34, 0x35, 0xa5, 0xa5);
typedef struct _QUERY_ON_CREATE_FILE_STAT_INFORMATION {
    LARGE_INTEGER FileId;
    LARGE_INTEGER CreationTime;
    LARGE_INTEGER LastAccessTime;
    LARGE_INTEGER LastWriteTime;
    LARGE_INTEGER ChangeTime;
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER EndOfFile;
    ULONG FileAttributes;
    ULONG ReparseTag;
    ULONG NumberOfLinks;
} QUERY_ON_CREATE_FILE_STAT_INFORMATION, *PQUERY_ON_CREATE_FILE_STAT_INFORMATION;
typedef struct _QUERY_ON_CREATE_FILE_LX_INFORMATION {
    ACCESS_MASK EffectiveAccess;
    ULONG LxFlags;
    ULONG LxUid;
    ULONG LxGid;
    ULONG LxMode;
    ULONG LxDeviceIdMajor;
    ULONG LxDeviceIdMinor;
} QUERY_ON_CREATE_FILE_LX_INFORMATION, *PQUERY_ON_CREATE_FILE_LX_INFORMATION;
typedef struct _QUERY_ON_CREATE_EA_INFORMATION {
    ULONG EaBufferSize;
    PFILE_FULL_EA_INFORMATION EaBuffer;
} QUERY_ON_CREATE_EA_INFORMATION, *PQUERY_ON_CREATE_EA_INFORMATION;
typedef struct _QUERY_ON_CREATE_ECP_CONTEXT {
    ULONG RequestedClasses;
    ULONG ClassesProcessed;
    ULONG ClassesWithErrors;
    ULONG ClassesWithNoData;
    QUERY_ON_CREATE_FILE_STAT_INFORMATION StatInformation;
    QUERY_ON_CREATE_FILE_LX_INFORMATION LxInformation;
    QUERY_ON_CREATE_EA_INFORMATION EaInformation;
} QUERY_ON_CREATE_ECP_CONTEXT, *PQUERY_ON_CREATE_ECP_CONTEXT;
DEFINE_GUID( GUID_ECP_QUERY_ON_CREATE,
             0x1aca62e9,
             0xabb4,
             0x4ff2,
             0xbb, 0x5c, 0x1c, 0x79, 0x2, 0x5e, 0x41, 0x7f );
typedef enum _FSRTL_CHANGE_BACKING_TYPE {
    ChangeDataControlArea,
    ChangeImageControlArea,
    ChangeSharedCacheMap
} FSRTL_CHANGE_BACKING_TYPE, *PFSRTL_CHANGE_BACKING_TYPE;
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlChangeBackingFileObject (
    _In_opt_ PFILE_OBJECT CurrentFileObject,
    _In_ PFILE_OBJECT NewFileObject,
    _In_ FSRTL_CHANGE_BACKING_TYPE ChangeBackingType,
    _In_ ULONG Flags
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlLogCcFlushError(
    _In_ PUNICODE_STRING FileName,
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer,
    _In_ NTSTATUS FlushError,
    _In_ ULONG Flags
    );
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
BOOLEAN
FsRtlAreVolumeStartupApplicationsComplete(
    VOID
    );
NTSTATUS
FsRtlVolumeDeviceToCorrelationId (
    _In_ PDEVICE_OBJECT VolumeDeviceObject,
    _Out_ GUID *Guid
    );
NTSTATUS
FsRtlIssueDeviceIoControl (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ ULONG IoCtl,
    _In_ UCHAR Flags,
    _In_opt_ PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _In_opt_ PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength,
    _Out_opt_ PULONG_PTR IosbInformation
    );
NTSTATUS
FsRtlGetSectorSizeInformation (
    _In_ PDEVICE_OBJECT DeviceObject,
    _Out_ PFILE_FS_SECTOR_SIZE_INFORMATION SectorSizeInfo
    );
_Must_inspect_result_
_IRQL_requires_max_(APC_LEVEL)
NTKERNELAPI
NTSTATUS
FsRtlGetSupportedFeatures (
    _In_ PDEVICE_OBJECT DeviceObject,
    _Out_ PULONG SupportedFeatures
    );
NTSTATUS
FsRtlKernelFsControlFile(
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG FsControlCode,
    _In_reads_bytes_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_to_(OutputBufferLength, *RetOutputBufferSize) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength,
    _Out_ PULONG RetOutputBufferSize
    );
NTSTATUS
FsRtlQueryKernelEaFile(
    _In_ PFILE_OBJECT FileObject,
    _Out_writes_bytes_to_(Length,*LengthReturned) PVOID ReturnedEaData,
    _In_ ULONG Length,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_reads_bytes_opt_(EaListLength) PVOID EaList,
    _In_ ULONG EaListLength,
    _In_opt_ PULONG EaIndex,
    _In_ BOOLEAN RestartScan,
    _Out_opt_ PULONG LengthReturned
    );
NTSTATUS
FsRtlSetKernelEaFile(
    _In_ PFILE_OBJECT FileObject,
    _In_reads_bytes_(Length) PVOID EaBuffer,
    _In_ ULONG Length
    );
NTSTATUS
FsRtlQueryInformationFile(
    _In_ PFILE_OBJECT FileObject,
    _Out_writes_bytes_to_(Length,*RetFileInformationSize) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _Out_ PULONG RetFileInformationSize
    );
NTSTATUS
FsRtlQueryCachedVdl(
    _In_ PFILE_OBJECT FileObject,
    _Out_ PLONGLONG Vdl
    );
VOID
FsRtlUpdateDiskCounters (
    _In_ ULONG64 BytesRead,
    _In_ ULONG64 BytesWritten
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
VOID
FsRtlDismountComplete (
    _In_ PDEVICE_OBJECT DeviceObject,
    _In_ NTSTATUS DismountStatus
    );
_IRQL_requires_max_ (APC_LEVEL)
NTSTATUS
FsRtlSetDriverBacking(
    _In_ PDRIVER_OBJECT DriverObj,
    _In_ ULONG Flags
    );
BOOLEAN
NTKERNELAPI
FsRtlIsMobileOS();
_IRQL_requires_max_(APC_LEVEL)
PFN_NUMBER
FsRtlIsExtentDangling (
    _In_ PFN_NUMBER StartPage,
    _In_ PFN_NUMBER NumberOfPages,
    _In_ ULONG Flags
    );
BOOLEAN
FsRtlIsDaxVolume (
    _In_ PFILE_OBJECT FileObject
    );
typedef struct _PUBLIC_BCB {
    CSHORT NodeTypeCode;
    CSHORT NodeByteSize;
    ULONG MappedLength;
    LARGE_INTEGER MappedFileOffset;
} PUBLIC_BCB, *PPUBLIC_BCB;
typedef struct _CC_FILE_SIZES {
    LARGE_INTEGER AllocationSize;
    LARGE_INTEGER FileSize;
    LARGE_INTEGER ValidDataLength;
} CC_FILE_SIZES, *PCC_FILE_SIZES;
typedef struct _READ_AHEAD_PARAMETERS {
    CSHORT NodeByteSize;
    ULONG Granularity;
    ULONG PipelinedRequestSize;
    ULONG ReadAheadGrowthPercentage;
} READ_AHEAD_PARAMETERS, *PREAD_AHEAD_PARAMETERS;
typedef
BOOLEAN (*PACQUIRE_FOR_LAZY_WRITE) (
     _In_ PVOID Context,
     _In_ BOOLEAN Wait
     );
typedef
VOID (*PRELEASE_FROM_LAZY_WRITE) (
     _In_ PVOID Context
     );
typedef
BOOLEAN (*PACQUIRE_FOR_READ_AHEAD) (
     _In_ PVOID Context,
     _In_ BOOLEAN Wait
     );
typedef
VOID (*PRELEASE_FROM_READ_AHEAD) (
     _In_ PVOID Context
     );
typedef struct _CACHE_MANAGER_CALLBACKS {
    PACQUIRE_FOR_LAZY_WRITE AcquireForLazyWrite;
    PRELEASE_FROM_LAZY_WRITE ReleaseFromLazyWrite;
    PACQUIRE_FOR_READ_AHEAD AcquireForReadAhead;
    PRELEASE_FROM_READ_AHEAD ReleaseFromReadAhead;
} CACHE_MANAGER_CALLBACKS, *PCACHE_MANAGER_CALLBACKS;
typedef struct _CACHE_UNINITIALIZE_EVENT {
    struct _CACHE_UNINITIALIZE_EVENT *Next;
    KEVENT Event;
} CACHE_UNINITIALIZE_EVENT, *PCACHE_UNINITIALIZE_EVENT;
typedef
VOID (*PDIRTY_PAGE_ROUTINE) (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ PLARGE_INTEGER OldestLsn,
    _In_ PLARGE_INTEGER NewestLsn,
    _In_ PVOID Context1,
    _In_ PVOID Context2
    );
typedef
VOID (*PFLUSH_TO_LSN) (
    _In_ PVOID LogHandle,
    _In_ LARGE_INTEGER Lsn
    );
typedef
VOID (*PQUERY_LOG_USAGE) (
    _In_ PVOID LogHandle,
    _Out_ PUSHORT PercentageFull
    );
typedef
BOOLEAN (*PASYNC_READ_COMPLETION_CALLBACK) (
     _In_ PVOID Context
     );



extern ULONG CcFastMdlReadWait;
typedef struct _CC_ASYNC_READ_CONTEXT {
    PASYNC_READ_COMPLETION_CALLBACK CompletionRoutine;
    PVOID Context;
    PMDL Mdl;
    KPROCESSOR_MODE RequestorMode;
    ULONG NestingLevel;
} CC_ASYNC_READ_CONTEXT, *PCC_ASYNC_READ_CONTEXT;
NTKERNELAPI
VOID
CcInitializeCacheMap (
    _In_ PFILE_OBJECT FileObject,
    _In_ PCC_FILE_SIZES FileSizes,
    _In_ BOOLEAN PinAccess,
    _In_ PCACHE_MANAGER_CALLBACKS Callbacks,
    _In_ PVOID LazyWriteContext
    );
NTKERNELAPI
BOOLEAN
CcUninitializeCacheMap (
    _In_ PFILE_OBJECT FileObject,
    _In_opt_ PLARGE_INTEGER TruncateSize,
    _In_opt_ PCACHE_UNINITIALIZE_EVENT UninitializeEvent
    );
NTKERNELAPI
VOID
CcSetFileSizes (
    _In_ PFILE_OBJECT FileObject,
    _In_ PCC_FILE_SIZES FileSizes
    );
NTKERNELAPI
NTSTATUS
CcSetFileSizesEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ PCC_FILE_SIZES FileSizes
    );


NTKERNELAPI
BOOLEAN
CcPurgeCacheSection (
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer,
    _In_opt_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG Flags
    );
NTKERNELAPI
VOID
CcCoherencyFlushAndPurgeCache (
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer,
    _In_opt_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_opt_ ULONG Flags
    );
NTKERNELAPI
VOID
CcSetDirtyPageThreshold (
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG DirtyPageThreshold
    );
NTKERNELAPI
VOID
CcFlushCache (
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer,
    _In_opt_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _Out_opt_ PIO_STATUS_BLOCK IoStatus
    );
NTKERNELAPI
LARGE_INTEGER
CcGetFlushedValidData (
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer,
    _In_ BOOLEAN BcbListHeld
    );
NTKERNELAPI
BOOLEAN
CcZeroData (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER StartOffset,
    _In_ PLARGE_INTEGER EndOffset,
    _In_ BOOLEAN Wait
    );
NTKERNELAPI
PVOID
CcRemapBcb (
    _In_ PVOID Bcb
    );
NTKERNELAPI
VOID
CcRepinBcb (
    _In_ PVOID Bcb
    );
NTKERNELAPI
VOID
CcUnpinRepinnedBcb (
    _In_ PVOID Bcb,
    _In_ BOOLEAN WriteThrough,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );
NTKERNELAPI
PFILE_OBJECT
CcGetFileObjectFromSectionPtrs (
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer
    );
NTKERNELAPI
PFILE_OBJECT
CcGetFileObjectFromSectionPtrsRef (
    _In_ PSECTION_OBJECT_POINTERS SectionObjectPointer
    );
NTKERNELAPI
PFILE_OBJECT
CcGetFileObjectFromBcb (
    _In_ PVOID Bcb
    );
NTKERNELAPI
BOOLEAN
CcCopyWriteWontFlush (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length
    );
NTKERNELAPI
BOOLEAN
CcCanIWrite (
    _In_opt_ PFILE_OBJECT FileObject,
    _In_ ULONG BytesToWrite,
    _In_ BOOLEAN Wait,
    _In_ UCHAR Retrying
    );
typedef
VOID (*PCC_POST_DEFERRED_WRITE) (
    _In_ PVOID Context1,
    _In_ PVOID Context2
    );
NTKERNELAPI
VOID
CcDeferWrite (
    _In_ PFILE_OBJECT FileObject,
    _In_ PCC_POST_DEFERRED_WRITE PostRoutine,
    _In_ PVOID Context1,
    _In_ PVOID Context2,
    _In_ ULONG BytesToWrite,
    _In_ BOOLEAN Retrying
    );
NTKERNELAPI
BOOLEAN
CcCopyRead (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );
NTKERNELAPI
VOID
CcFastCopyRead (
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG FileOffset,
    _In_ ULONG Length,
    _In_ ULONG PageCount,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );
NTKERNELAPI
BOOLEAN
CcCopyWrite (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _In_reads_bytes_(Length) PVOID Buffer
    );
NTKERNELAPI
VOID
CcFastCopyWrite (
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG FileOffset,
    _In_ ULONG Length,
    _In_reads_bytes_(Length) PVOID Buffer
    );
NTKERNELAPI
VOID
CcMdlRead (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _Out_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );
NTKERNELAPI
VOID
CcMdlReadComplete (
    _In_ PFILE_OBJECT FileObject,
    _In_ PMDL MdlChain
    );
NTKERNELAPI
VOID
CcPrepareMdlWrite (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _Out_ PMDL *MdlChain,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );
NTKERNELAPI
VOID
CcMdlWriteComplete (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ PMDL MdlChain
    );
NTKERNELAPI
VOID
CcMdlWriteAbort (
    _In_ PFILE_OBJECT FileObject,
    _In_ PMDL MdlChain
    );




NTKERNELAPI
VOID
CcScheduleReadAhead (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length
    );
NTKERNELAPI
NTSTATUS
CcWaitForCurrentLazyWriterActivity (
    VOID
    );
NTKERNELAPI
VOID
CcSetReadAheadGranularity (
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG Granularity
    );
NTKERNELAPI
BOOLEAN
CcCopyWriteEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ PETHREAD IoIssuerThread
    );
NTKERNELAPI
BOOLEAN
CcCopyReadEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ PETHREAD IoIssuerThread
    );
NTKERNELAPI
BOOLEAN
CcAsyncCopyRead (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Wait,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _Out_ PIO_STATUS_BLOCK IoStatus,
    _In_ PETHREAD IoIssuerThread,
    _In_ PCC_ASYNC_READ_CONTEXT AsyncReadContext
    );
NTKERNELAPI
VOID
CcScheduleReadAheadEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ PETHREAD IoIssuerThread
    );
NTKERNELAPI
VOID
CcInitializeCacheMapEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ PCC_FILE_SIZES FileSizes,
    _In_ BOOLEAN PinAccess,
    _In_ PCACHE_MANAGER_CALLBACKS Callbacks,
    _In_ PVOID LazyWriteContext,
    _In_ ULONG Flags
    );
    (CACHE_USE_DIRECT_ACCESS_MAPPING)
NTKERNELAPI
BOOLEAN
CcPinRead (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG Flags,
    _Outptr_ PVOID *Bcb,
    _Outptr_result_bytebuffer_(Length) PVOID *Buffer
    );
NTKERNELAPI
BOOLEAN
CcMapData (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG Flags,
    _Outptr_ PVOID *Bcb,
    _Outptr_result_bytebuffer_(Length) PVOID *Buffer
    );
NTKERNELAPI
BOOLEAN
CcPinMappedData (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ ULONG Flags,
    _Inout_ PVOID *Bcb
    );
NTKERNELAPI
BOOLEAN
CcPreparePinWrite (
    _In_ PFILE_OBJECT FileObject,
    _In_ PLARGE_INTEGER FileOffset,
    _In_ ULONG Length,
    _In_ BOOLEAN Zero,
    _In_ ULONG Flags,
    _Outptr_ PVOID *Bcb,
    _Outptr_result_bytebuffer_(Length) PVOID *Buffer
    );
NTKERNELAPI
VOID
CcSetDirtyPinnedData (
    _In_ PVOID BcbVoid,
    _In_opt_ PLARGE_INTEGER Lsn
    );
NTKERNELAPI
VOID
CcUnpinData (
    _In_ PVOID Bcb
    );
NTKERNELAPI
VOID
CcSetBcbOwnerPointer (
    _In_ PVOID Bcb,
    _In_ PVOID OwnerPointer
    );
NTKERNELAPI
VOID
CcUnpinDataForThread (
    _In_ PVOID Bcb,
    _In_ ERESOURCE_THREAD ResourceThreadId
    );
NTKERNELAPI
VOID
CcSetAdditionalCacheAttributes (
    _In_ PFILE_OBJECT FileObject,
    _In_ BOOLEAN DisableReadAhead,
    _In_ BOOLEAN DisableWriteBehind
    );
NTKERNELAPI
VOID
CcSetAdditionalCacheAttributesEx (
    _In_ PFILE_OBJECT FileObject,
    _In_ ULONG Flags
    );
NTKERNELAPI
VOID
CcSetParallelFlushFile (
    _In_ PFILE_OBJECT FileObject,
    _In_ BOOLEAN EnableParallelFlush
    );
NTKERNELAPI
VOID
CcSetLogHandleForFile (
    _In_ PFILE_OBJECT FileObject,
    _In_ PVOID LogHandle,
    _In_ PFLUSH_TO_LSN FlushToLsnRoutine
    );
NTKERNELAPI
LARGE_INTEGER
CcGetDirtyPages (
    _In_ PVOID LogHandle,
    _In_ PDIRTY_PAGE_ROUTINE DirtyPageRoutine,
    _In_ PVOID Context1,
    _In_ PVOID Context2
    );
NTKERNELAPI
BOOLEAN
CcIsThereDirtyData (
    _In_ PVPB Vpb
    );
NTKERNELAPI
BOOLEAN
CcIsThereDirtyDataEx (
    _In_ PVPB Vpb,
    _In_opt_ PULONG NumberOfDirtyPages
    );
typedef WCHAR SEC_WCHAR;
typedef CHAR SEC_CHAR;
typedef LONG SECURITY_STATUS;
typedef struct _SecHandle
{
    ULONG_PTR dwLower ;
    ULONG_PTR dwUpper ;
} SecHandle, * PSecHandle ;



typedef SecHandle CredHandle;
typedef PSecHandle PCredHandle;
typedef SecHandle CtxtHandle;
typedef PSecHandle PCtxtHandle;
typedef LARGE_INTEGER _SECURITY_INTEGER, SECURITY_INTEGER, *PSECURITY_INTEGER;
typedef SECURITY_INTEGER TimeStamp;
typedef SECURITY_INTEGER * PTimeStamp;
typedef UNICODE_STRING SECURITY_STRING, *PSECURITY_STRING;
typedef struct _SecPkgInfoW
{
    unsigned long fCapabilities;
    unsigned short wVersion;
    unsigned short wRPCID;
    unsigned long cbMaxToken;
    [string]
    SEC_WCHAR * Name;
    [string]
    SEC_WCHAR * Comment;
} SecPkgInfoW, * PSecPkgInfoW;
typedef struct _SecBuffer {
    unsigned long cbBuffer;
    unsigned long BufferType;
    [size_is(cbBuffer)] char * pvBuffer;
} SecBuffer, * PSecBuffer;
typedef struct _SecBufferDesc {
    unsigned long ulVersion;
    unsigned long cBuffers;
    [size_is(cBuffers)]
    _Field_size_(cBuffers) PSecBuffer pBuffers;
} SecBufferDesc, SEC_FAR * PSecBufferDesc;
typedef struct _SEC_NEGOTIATION_INFO {
    unsigned long Size;
    unsigned long NameLength;
    SEC_WCHAR * Name;
    void * Reserved;
} SEC_NEGOTIATION_INFO, * PSEC_NEGOTIATION_INFO ;
typedef struct _SEC_CHANNEL_BINDINGS {
    unsigned long dwInitiatorAddrType;
    unsigned long cbInitiatorLength;
    unsigned long dwInitiatorOffset;
    unsigned long dwAcceptorAddrType;
    unsigned long cbAcceptorLength;
    unsigned long dwAcceptorOffset;
    unsigned long cbApplicationDataLength;
    unsigned long dwApplicationDataOffset;
} SEC_CHANNEL_BINDINGS, * PSEC_CHANNEL_BINDINGS ;
typedef enum _SEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT
{
    SecApplicationProtocolNegotiationExt_None,
    SecApplicationProtocolNegotiationExt_NPN,
    SecApplicationProtocolNegotiationExt_ALPN
} SEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT, *PSEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT;
typedef struct _SEC_APPLICATION_PROTOCOL_LIST {
    SEC_APPLICATION_PROTOCOL_NEGOTIATION_EXT ProtoNegoExt;
    unsigned short ProtocolListSize;
    unsigned char ProtocolList[ANYSIZE_ARRAY];
} SEC_APPLICATION_PROTOCOL_LIST, *PSEC_APPLICATION_PROTOCOL_LIST;
typedef struct _SEC_APPLICATION_PROTOCOLS {
    unsigned long ProtocolListsSize;
    SEC_APPLICATION_PROTOCOL_LIST ProtocolLists[ANYSIZE_ARRAY];
} SEC_APPLICATION_PROTOCOLS, *PSEC_APPLICATION_PROTOCOLS;
typedef struct _SEC_SRTP_PROTECTION_PROFILES {
    unsigned short ProfilesSize;
    unsigned short ProfilesList[ANYSIZE_ARRAY];
} SEC_SRTP_PROTECTION_PROFILES, *PSEC_SRTP_PROTECTION_PROFILES;
typedef struct _SEC_SRTP_MASTER_KEY_IDENTIFIER {
    unsigned char MasterKeyIdentifierSize;
    unsigned char MasterKeyIdentifier[ANYSIZE_ARRAY];
} SEC_SRTP_MASTER_KEY_IDENTIFIER, *PSEC_SRTP_MASTER_KEY_IDENTIFIER;
typedef struct _SEC_TOKEN_BINDING {
    unsigned char MajorVersion;
    unsigned char MinorVersion;
    unsigned short KeyParametersSize;
    unsigned char KeyParameters[ANYSIZE_ARRAY];
} SEC_TOKEN_BINDING, *PSEC_TOKEN_BINDING;
typedef struct _SEC_PRESHAREDKEY {
    unsigned short KeySize;
    unsigned char Key[ANYSIZE_ARRAY];
} SEC_PRESHAREDKEY, *PSEC_PRESHAREDKEY;
typedef struct _SEC_PRESHAREDKEY_IDENTITY {
    unsigned short KeyIdentitySize;
    unsigned char KeyIdentity[ANYSIZE_ARRAY];
} SEC_PRESHAREDKEY_IDENTITY, *PSEC_PRESHAREDKEY_IDENTITY;
typedef struct _SEC_DTLS_MTU {
    unsigned short PathMTU;
} SEC_DTLS_MTU, *PSEC_DTLS_MTU;
typedef struct _SEC_FLAGS {
    unsigned long long Flags;
} SEC_FLAGS, *PSEC_FLAGS;
typedef enum _SEC_TRAFFIC_SECRET_TYPE
{
    SecTrafficSecret_None,
    SecTrafficSecret_Client,
    SecTrafficSecret_Server
} SEC_TRAFFIC_SECRET_TYPE, *PSEC_TRAFFIC_SECRET_TYPE;
typedef struct _SEC_TRAFFIC_SECRETS {
    wchar_t SymmetricAlgId[SZ_ALG_MAX_SIZE];
    wchar_t ChainingMode[SZ_ALG_MAX_SIZE];
    wchar_t HashAlgId[SZ_ALG_MAX_SIZE];
    unsigned short KeySize;
    unsigned short IvSize;
    unsigned short MsgSequenceStart;
    unsigned short MsgSequenceEnd;
    SEC_TRAFFIC_SECRET_TYPE TrafficSecretType;
    unsigned short TrafficSecretSize;
    unsigned char TrafficSecret[ANYSIZE_ARRAY];
} SEC_TRAFFIC_SECRETS, *PSEC_TRAFFIC_SECRETS;
typedef struct _SecPkgCredentials_NamesW
{
    [string]
    SEC_WCHAR * sUserName;
} SecPkgCredentials_NamesW, * PSecPkgCredentials_NamesW;
typedef struct _SecPkgCredentials_KdcProxySettingsW
{
    ULONG Version;
    ULONG Flags;
    USHORT ProxyServerOffset;
    USHORT ProxyServerLength;
    USHORT ClientTlsCredOffset;
    USHORT ClientTlsCredLength;
} SecPkgCredentials_KdcProxySettingsW, *PSecPkgCredentials_KdcProxySettingsW;
typedef struct _SecPkgCredentials_Cert
{
    unsigned long EncodedCertSize;
    unsigned char* EncodedCert;
} SecPkgCredentials_Cert, * PSecPkgCredentials_Cert;
typedef struct _SecPkgContext_SubjectAttributes {
    void* AttributeInfo;
} SecPkgContext_SubjectAttributes, *PSecPkgContext_SubjectAttributes;
typedef enum _SECPKG_CRED_CLASS {
    SecPkgCredClass_None = 0,
    SecPkgCredClass_Ephemeral = 10,
    SecPkgCredClass_PersistedGeneric = 20,
    SecPkgCredClass_PersistedSpecific = 30,
    SecPkgCredClass_Explicit = 40,
} SECPKG_CRED_CLASS, * PSECPKG_CRED_CLASS;
typedef struct _SecPkgContext_CredInfo {
    SECPKG_CRED_CLASS CredClass;
    unsigned long IsPromptingNeeded;
} SecPkgContext_CredInfo, *PSecPkgContext_CredInfo;
typedef struct _SecPkgContext_NegoPackageInfo
{
    unsigned long PackageMask;
} SecPkgContext_NegoPackageInfo, * PSecPkgContext_NegoPackageInfo;
typedef struct _SecPkgContext_NegoStatus
{
    unsigned long LastStatus;
} SecPkgContext_NegoStatus, * PSecPkgContext_NegoStatus;
typedef struct _SecPkgContext_Sizes
{
    unsigned long cbMaxToken;
    unsigned long cbMaxSignature;
    unsigned long cbBlockSize;
    unsigned long cbSecurityTrailer;
} SecPkgContext_Sizes, * PSecPkgContext_Sizes;
typedef struct _SecPkgContext_StreamSizes
{
    unsigned long cbHeader;
    unsigned long cbTrailer;
    unsigned long cbMaximumMessage;
    unsigned long cBuffers;
    unsigned long cbBlockSize;
} SecPkgContext_StreamSizes, * PSecPkgContext_StreamSizes;
typedef SecPkgContext_StreamSizes SecPkgContext_DatagramSizes;
typedef PSecPkgContext_StreamSizes PSecPkgContext_DatagramSizes;
typedef struct _SecPkgContext_NamesW
{
    SEC_WCHAR * sUserName;
} SecPkgContext_NamesW, * PSecPkgContext_NamesW;
typedef struct _SecPkgContext_Lifespan
{
    TimeStamp tsStart;
    TimeStamp tsExpiry;
} SecPkgContext_Lifespan, * PSecPkgContext_Lifespan;
typedef struct _SecPkgContext_DceInfo
{
    unsigned long AuthzSvc;
    void * pPac;
} SecPkgContext_DceInfo, * PSecPkgContext_DceInfo;
typedef struct _SecPkgContext_KeyInfoW
{
    SEC_WCHAR * sSignatureAlgorithmName;
    SEC_WCHAR * sEncryptAlgorithmName;
    unsigned long KeySize;
    unsigned long SignatureAlgorithm;
    unsigned long EncryptAlgorithm;
} SecPkgContext_KeyInfoW, * PSecPkgContext_KeyInfoW;
typedef struct _SecPkgContext_AuthorityW
{
    SEC_WCHAR * sAuthorityName;
} SecPkgContext_AuthorityW, * PSecPkgContext_AuthorityW;
typedef struct _SecPkgContext_ProtoInfoW
{
    SEC_WCHAR * sProtocolName;
    unsigned long majorVersion;
    unsigned long minorVersion;
} SecPkgContext_ProtoInfoW, * PSecPkgContext_ProtoInfoW;
typedef struct _SecPkgContext_PasswordExpiry
{
    TimeStamp tsPasswordExpires;
} SecPkgContext_PasswordExpiry, * PSecPkgContext_PasswordExpiry;
typedef struct _SecPkgContext_SessionKey
{
    unsigned long SessionKeyLength;
    _Field_size_bytes_(SessionKeyLength) unsigned char * SessionKey;
} SecPkgContext_SessionKey, *PSecPkgContext_SessionKey;
typedef struct _SecPkgContext_NegoKeys
{
  unsigned long KeyType;
  unsigned short KeyLength;
  _Field_size_bytes_(KeyLength) unsigned char* KeyValue;
  unsigned long VerifyKeyType;
  unsigned short VerifyKeyLength;
  _Field_size_bytes_(VerifyKeyLength) unsigned char* VerifyKeyValue;
} SecPkgContext_NegoKeys, * PSecPkgContext_NegoKeys;
typedef struct _SecPkgContext_PackageInfoW
{
    PSecPkgInfoW PackageInfo;
} SecPkgContext_PackageInfoW, * PSecPkgContext_PackageInfoW;
typedef struct _SecPkgContext_UserFlags
{
    unsigned long UserFlags;
} SecPkgContext_UserFlags, * PSecPkgContext_UserFlags;
typedef struct _SecPkgContext_Flags
{
    unsigned long Flags;
} SecPkgContext_Flags, * PSecPkgContext_Flags;
typedef struct _SecPkgContext_NegotiationInfoW
{
    PSecPkgInfoW PackageInfo ;
    unsigned long NegotiationState ;
} SecPkgContext_NegotiationInfoW, * PSecPkgContext_NegotiationInfoW ;
#if OSVER(NTDDI_VERSION) > NTDDI_WIN2K
typedef struct _SecPkgContext_CredentialNameW
{
    unsigned long CredentialType;
    SEC_WCHAR *sCredentialName;
} SecPkgContext_CredentialNameW, * PSecPkgContext_CredentialNameW;
#endif
typedef void
(SEC_ENTRY * SEC_GET_KEY_FN) (
    void * Arg,
    void * Principal,
    unsigned long KeyVer,
    void * * Key,
    SECURITY_STATUS * Status
    );
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
AcquireCredentialsHandleW(
    _In_opt_ PSECURITY_STRING pPrincipal,
    _In_ PSECURITY_STRING pPackage,
    _In_ unsigned long fCredentialUse,
    _In_opt_ void * pvLogonId,
    _In_opt_ void * pAuthData,
    _In_opt_ SEC_GET_KEY_FN pGetKeyFn,
    _In_opt_ void * pvGetKeyArgument,
    _Out_ PCredHandle phCredential,
    _Out_opt_ PTimeStamp ptsExpiry
    );
typedef SECURITY_STATUS
(SEC_ENTRY * ACQUIRE_CREDENTIALS_HANDLE_FN_W)(
    PSECURITY_STRING,
    PSECURITY_STRING,
    unsigned long,
    void *,
    void *,
    SEC_GET_KEY_FN,
    void *,
    PCredHandle,
    PTimeStamp);
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
FreeCredentialsHandle(
    _In_ PCredHandle phCredential
    );
typedef SECURITY_STATUS
(SEC_ENTRY * FREE_CREDENTIALS_HANDLE_FN)(
    PCredHandle );
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
AddCredentialsW(
    _In_ PCredHandle hCredentials,
    _In_opt_ PSECURITY_STRING pPrincipal,
    _In_ PSECURITY_STRING pPackage,
    _In_ unsigned long fCredentialUse,
    _In_opt_ void * pAuthData,
    _In_opt_ SEC_GET_KEY_FN pGetKeyFn,
    _In_opt_ void * pvGetKeyArgument,
    _Out_opt_ PTimeStamp ptsExpiry
    );
typedef SECURITY_STATUS
(SEC_ENTRY * ADD_CREDENTIALS_FN_W)(
    PCredHandle,
    PSECURITY_STRING,
    PSECURITY_STRING,
    unsigned long,
    void *,
    SEC_GET_KEY_FN,
    void *,
    PTimeStamp);
SECURITY_STATUS SEC_ENTRY
AddCredentialsA(
    _In_ PCredHandle hCredentials,
    _In_opt_ LPSTR pszPrincipal,
    _In_ LPSTR pszPackage,
    _In_ unsigned long fCredentialUse,
    _In_opt_ void * pAuthData,
    _In_opt_ SEC_GET_KEY_FN pGetKeyFn,
    _In_opt_ void * pvGetKeyArgument,
    _Out_opt_ PTimeStamp ptsExpiry
    );
typedef SECURITY_STATUS
(SEC_ENTRY * ADD_CREDENTIALS_FN_A)(
    PCredHandle,
    SEC_CHAR *,
    SEC_CHAR *,
    unsigned long,
    void *,
    SEC_GET_KEY_FN,
    void *,
    PTimeStamp);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _SspiAsyncContext SspiAsyncContext;
typedef void (*SspiAsyncNotifyCallback)(
    _In_ SspiAsyncContext* Handle,
    _In_opt_ PVOID CallbackData
);
SspiAsyncContext* SspiCreateAsyncContext();
void SspiFreeAsyncContext(
    _In_opt_ SspiAsyncContext* Handle
);
NTSTATUS SspiReinitAsyncContext(
    _Inout_ SspiAsyncContext* Handle
);
SECURITY_STATUS SspiSetAsyncNotifyCallback(
    _In_ SspiAsyncContext* Context,
    _In_ SspiAsyncNotifyCallback Callback,
    _In_opt_ void* CallbackData
);
BOOLEAN SspiAsyncContextRequiresNotify(
    _In_ SspiAsyncContext* AsyncContext
);
SECURITY_STATUS SspiGetAsyncCallStatus(
    _In_ SspiAsyncContext* Handle
);
SECURITY_STATUS SspiAcquireCredentialsHandleAsyncW(
    _Inout_ SspiAsyncContext* AsyncContext,
    _In_opt_ PSECURITY_STRING pszPrincipal,
    _In_ PSECURITY_STRING pszPackage,
    _In_ unsigned long fCredentialUse,
    _In_opt_ void * pvLogonId,
    _In_opt_ void * pAuthData,
    _In_opt_ SEC_GET_KEY_FN pGetKeyFn,
    _In_opt_ void * pvGetKeyArgument,
    _In_ PCredHandle phCredential,
    _In_opt_ PTimeStamp ptsExpiry
);
SECURITY_STATUS SspiAcquireCredentialsHandleAsyncA(
    _Inout_ SspiAsyncContext* AsyncContext,
    _In_opt_ LPSTR pszPrincipal,
    _In_ LPSTR pszPackage,
    _In_ unsigned long fCredentialUse,
    _In_opt_ void * pvLogonId,
    _In_opt_ void * pAuthData,
    _In_opt_ SEC_GET_KEY_FN pGetKeyFn,
    _In_opt_ void * pvGetKeyArgument,
    _In_ PCredHandle phCredential,
    _In_opt_ PTimeStamp ptsExpiry
);
SECURITY_STATUS SspiInitializeSecurityContextAsyncW(
    _Inout_ SspiAsyncContext* AsyncContext,
    _In_opt_ PCredHandle phCredential,
    _In_opt_ PCtxtHandle phContext,
    _In_opt_ PSECURITY_STRING pszTargetName,
    _In_ unsigned long fContextReq,
    _In_ unsigned long Reserved1,
    _In_ unsigned long TargetDataRep,
    _In_opt_ PSecBufferDesc pInput,
    _In_ unsigned long Reserved2,
    _In_opt_ PCtxtHandle phNewContext,
    _In_opt_ PSecBufferDesc pOutput,
    _In_ unsigned long * pfContextAttr,
    _In_opt_ PTimeStamp ptsExpiry
);
SECURITY_STATUS SspiInitializeSecurityContextAsyncA(
    _Inout_ SspiAsyncContext* AsyncContext,
    _In_opt_ PCredHandle phCredential,
    _In_opt_ PCtxtHandle phContext,
    _In_opt_ LPSTR pszTargetName,
    _In_ unsigned long fContextReq,
    _In_ unsigned long Reserved1,
    _In_ unsigned long TargetDataRep,
    _In_opt_ PSecBufferDesc pInput,
    _In_ unsigned long Reserved2,
    _In_opt_ PCtxtHandle phNewContext,
    _In_opt_ PSecBufferDesc pOutput,
    _In_ unsigned long * pfContextAttr,
    _In_opt_ PTimeStamp ptsExpiry
);
SECURITY_STATUS SspiAcceptSecurityContextAsync(
    _Inout_ SspiAsyncContext* AsyncContext,
    _In_opt_ PCredHandle phCredential,
    _In_opt_ PCtxtHandle phContext,
    _In_opt_ PSecBufferDesc pInput,
    _In_ unsigned long fContextReq,
    _In_ unsigned long TargetDataRep,
    _In_opt_ PCtxtHandle phNewContext,
    _In_opt_ PSecBufferDesc pOutput,
    _In_ unsigned long* pfContextAttr,
    _In_opt_ PTimeStamp ptsExpiry
);
SECURITY_STATUS SspiFreeCredentialsHandleAsync(
    _Inout_ SspiAsyncContext* AsyncContext,
    _In_ PCredHandle phCredential
);
SECURITY_STATUS SspiDeleteSecurityContextAsync(
    _Inout_ SspiAsyncContext* AsyncContext,
    _In_ PCtxtHandle phContext
);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
InitializeSecurityContextW(
    _In_opt_ PCredHandle phCredential,
    _In_opt_ PCtxtHandle phContext,
    _In_opt_ PSECURITY_STRING pTargetName,
    _In_ unsigned long fContextReq,
    _In_ unsigned long Reserved1,
    _In_ unsigned long TargetDataRep,
    _In_opt_ PSecBufferDesc pInput,
    _In_ unsigned long Reserved2,
    _Inout_opt_ PCtxtHandle phNewContext,
    _Inout_opt_ PSecBufferDesc pOutput,
    _Out_ unsigned long * pfContextAttr,
    _Out_opt_ PTimeStamp ptsExpiry
    );
typedef SECURITY_STATUS
(SEC_ENTRY * INITIALIZE_SECURITY_CONTEXT_FN_W)(
    PCredHandle,
    PCtxtHandle,
    PSECURITY_STRING,
    unsigned long,
    unsigned long,
    unsigned long,
    PSecBufferDesc,
    unsigned long,
    PCtxtHandle,
    PSecBufferDesc,
    unsigned long *,
    PTimeStamp);
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
AcceptSecurityContext(
    _In_opt_ PCredHandle phCredential,
    _In_opt_ PCtxtHandle phContext,
    _In_opt_ PSecBufferDesc pInput,
    _In_ unsigned long fContextReq,
    _In_ unsigned long TargetDataRep,
    _Inout_opt_ PCtxtHandle phNewContext,
    _Inout_opt_ PSecBufferDesc pOutput,
    _Out_ unsigned long * pfContextAttr,
    _Out_opt_ PTimeStamp ptsExpiry
    );
typedef SECURITY_STATUS
(SEC_ENTRY * ACCEPT_SECURITY_CONTEXT_FN)(
    PCredHandle,
    PCtxtHandle,
    PSecBufferDesc,
    unsigned long,
    unsigned long,
    PCtxtHandle,
    PSecBufferDesc,
    unsigned long *,
    PTimeStamp);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
SECURITY_STATUS SEC_ENTRY
CompleteAuthToken(
    _In_ PCtxtHandle phContext,
    _In_ PSecBufferDesc pToken
    );
typedef SECURITY_STATUS
(SEC_ENTRY * COMPLETE_AUTH_TOKEN_FN)(
    PCtxtHandle,
    PSecBufferDesc);
KSECDDDECLSPEC
_Check_return_
SECURITY_STATUS SEC_ENTRY
ImpersonateSecurityContext(
    _In_ PCtxtHandle phContext
    );
typedef SECURITY_STATUS
(SEC_ENTRY * IMPERSONATE_SECURITY_CONTEXT_FN)(
    PCtxtHandle);
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
RevertSecurityContext(
    _In_ PCtxtHandle phContext
    );
typedef SECURITY_STATUS
(SEC_ENTRY * REVERT_SECURITY_CONTEXT_FN)(
    PCtxtHandle);
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
QuerySecurityContextToken(
    _In_ PCtxtHandle phContext,
    _Out_ void * * Token
    );
typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_SECURITY_CONTEXT_TOKEN_FN)(
    PCtxtHandle, void * *);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
DeleteSecurityContext(
    _In_ PCtxtHandle phContext
    );
typedef SECURITY_STATUS
(SEC_ENTRY * DELETE_SECURITY_CONTEXT_FN)(
    PCtxtHandle);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
ApplyControlToken(
    _In_ PCtxtHandle phContext,
    _In_ PSecBufferDesc pInput
    );
typedef SECURITY_STATUS
(SEC_ENTRY * APPLY_CONTROL_TOKEN_FN)(
    PCtxtHandle, PSecBufferDesc);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
QueryContextAttributesW(
    _In_ PCtxtHandle phContext,
    _In_ unsigned long ulAttribute,
    _Out_ void * pBuffer
    );
typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_CONTEXT_ATTRIBUTES_FN_W)(
    PCtxtHandle,
    unsigned long,
    void *);
SECURITY_STATUS SEC_ENTRY
QueryContextAttributesExW(
    _In_ PCtxtHandle phContext,
    _In_ unsigned long ulAttribute,
    _Out_writes_bytes_(cbBuffer) void * pBuffer,
    _In_ unsigned long cbBuffer
    );
typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_CONTEXT_ATTRIBUTES_EX_FN_W)(
    PCtxtHandle,
    unsigned long,
    void *,
    unsigned long);
#if (OSVER(NTDDI_VERSION) > NTDDI_WIN2K)
SECURITY_STATUS SEC_ENTRY
SetContextAttributesW(
    _In_ PCtxtHandle phContext,
    _In_ unsigned long ulAttribute,
    _In_reads_bytes_(cbBuffer) void * pBuffer,
    _In_ unsigned long cbBuffer
    );
typedef SECURITY_STATUS
(SEC_ENTRY * SET_CONTEXT_ATTRIBUTES_FN_W)(
    PCtxtHandle,
    unsigned long,
    void *,
    unsigned long );
#endif
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
QueryCredentialsAttributesW(
    _In_ PCredHandle phCredential,
    _In_ unsigned long ulAttribute,
    _Inout_ void * pBuffer
    );
typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_CREDENTIALS_ATTRIBUTES_FN_W)(
    PCredHandle,
    unsigned long,
    void *);
SECURITY_STATUS SEC_ENTRY
QueryCredentialsAttributesExW(
    _In_ PCredHandle phCredential,
    _In_ unsigned long ulAttribute,
    _Inout_updates_bytes_(cbBuffer) void * pBuffer,
    _In_ unsigned long cbBuffer
    );
typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_CREDENTIALS_ATTRIBUTES_EX_FN_W)(
    PCredHandle,
    unsigned long,
    void *,
    unsigned long);
SECURITY_STATUS SEC_ENTRY
FreeContextBuffer(
    _Inout_ PVOID pvContextBuffer
    );
typedef SECURITY_STATUS
(SEC_ENTRY * FREE_CONTEXT_BUFFER_FN)(
    _Inout_ PVOID
    );
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
MakeSignature(
    _In_ PCtxtHandle phContext,
    _In_ unsigned long fQOP,
    _In_ PSecBufferDesc pMessage,
    _In_ unsigned long MessageSeqNo
    );
typedef SECURITY_STATUS
(SEC_ENTRY * MAKE_SIGNATURE_FN)(
    PCtxtHandle,
    unsigned long,
    PSecBufferDesc,
    unsigned long);
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
VerifySignature(
    _In_ PCtxtHandle phContext,
    _In_ PSecBufferDesc pMessage,
    _In_ unsigned long MessageSeqNo,
    _Out_ unsigned long * pfQOP
    );
typedef SECURITY_STATUS
(SEC_ENTRY * VERIFY_SIGNATURE_FN)(
    PCtxtHandle,
    PSecBufferDesc,
    unsigned long,
    unsigned long *);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
SECURITY_STATUS SEC_ENTRY
EncryptMessage( _In_ PCtxtHandle phContext,
                _In_ unsigned long fQOP,
                _In_ PSecBufferDesc pMessage,
                _In_ unsigned long MessageSeqNo);
typedef SECURITY_STATUS
(SEC_ENTRY * ENCRYPT_MESSAGE_FN)(
    PCtxtHandle, unsigned long, PSecBufferDesc, unsigned long);
SECURITY_STATUS SEC_ENTRY
DecryptMessage( _In_ PCtxtHandle phContext,
                _In_ PSecBufferDesc pMessage,
                _In_ unsigned long MessageSeqNo,
                _Out_opt_ unsigned long * pfQOP);
typedef SECURITY_STATUS
(SEC_ENTRY * DECRYPT_MESSAGE_FN)(
    PCtxtHandle, PSecBufferDesc, unsigned long,
    unsigned long *);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
EnumerateSecurityPackagesW(
    _Out_ unsigned long * pcPackages,
    _Outptr_ PSecPkgInfoW * ppPackageInfo
    );
typedef SECURITY_STATUS
(SEC_ENTRY * ENUMERATE_SECURITY_PACKAGES_FN_W)(
    unsigned long *,
    PSecPkgInfoW *);
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
QuerySecurityPackageInfoW(
    _In_ PSECURITY_STRING pPackageName,
    _Outptr_ PSecPkgInfoW *ppPackageInfo
    );
typedef SECURITY_STATUS
(SEC_ENTRY * QUERY_SECURITY_PACKAGE_INFO_FN_W)(
    PSECURITY_STRING,
    PSecPkgInfoW *);
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
ExportSecurityContext(
    _In_ PCtxtHandle phContext,
    _In_ ULONG fFlags,
    _Out_ PSecBuffer pPackedContext,
    _Out_ void * * pToken
    );
typedef SECURITY_STATUS
(SEC_ENTRY * EXPORT_SECURITY_CONTEXT_FN)(
    PCtxtHandle,
    ULONG,
    PSecBuffer,
    void * *
    );
KSECDDDECLSPEC
SECURITY_STATUS SEC_ENTRY
ImportSecurityContextW(
    _In_ PSECURITY_STRING pszPackage,
    _In_ PSecBuffer pPackedContext,
    _In_ void * Token,
    _Out_ PCtxtHandle phContext
    );
typedef SECURITY_STATUS
(SEC_ENTRY * IMPORT_SECURITY_CONTEXT_FN_W)(
    PSECURITY_STRING,
    PSecBuffer,
    VOID *,
    PCtxtHandle
    );
KSECDDDECLSPEC
NTSTATUS
NTAPI
SecMakeSPN(
    IN PUNICODE_STRING ServiceClass,
    IN PUNICODE_STRING ServiceName,
    IN PUNICODE_STRING InstanceName OPTIONAL,
    IN USHORT InstancePort OPTIONAL,
    IN PUNICODE_STRING Referrer OPTIONAL,
    IN OUT PUNICODE_STRING Spn,
    OUT PULONG Length OPTIONAL,
    IN BOOLEAN Allocate
    );
#if OSVER(NTDDI_VERSION) > NTDD_WIN2K
KSECDDDECLSPEC
NTSTATUS
NTAPI
SecMakeSPNEx(
    IN PUNICODE_STRING ServiceClass,
    IN PUNICODE_STRING ServiceName,
    IN PUNICODE_STRING InstanceName OPTIONAL,
    IN USHORT InstancePort OPTIONAL,
    IN PUNICODE_STRING Referrer OPTIONAL,
    IN PUNICODE_STRING TargetInfo OPTIONAL,
    IN OUT PUNICODE_STRING Spn,
    OUT PULONG Length OPTIONAL,
    IN BOOLEAN Allocate
    );
#if OSVER(NTDDI_VERSION) > NTDDI_WS03
KSECDDDECLSPEC
NTSTATUS
NTAPI
SecMakeSPNEx2(
    IN PUNICODE_STRING ServiceClass,
    IN PUNICODE_STRING ServiceName,
    IN PUNICODE_STRING InstanceName OPTIONAL,
    IN USHORT InstancePort OPTIONAL,
    IN PUNICODE_STRING Referrer OPTIONAL,
    IN PUNICODE_STRING InTargetInfo OPTIONAL,
    IN OUT PUNICODE_STRING Spn,
    OUT PULONG TotalSize OPTIONAL,
    IN BOOLEAN Allocate,
    IN BOOLEAN IsTargetInfoMarshaled
    );
#endif
KSECDDDECLSPEC
NTSTATUS
SEC_ENTRY
SecLookupAccountSid(
    _In_ PSID Sid,
    _Out_ PULONG NameSize,
    _Inout_ PUNICODE_STRING NameBuffer,
    _Out_ PULONG DomainSize OPTIONAL,
    _Out_opt_ PUNICODE_STRING DomainBuffer OPTIONAL,
    _Out_ PSID_NAME_USE NameUse
    );
KSECDDDECLSPEC
NTSTATUS
SEC_ENTRY
SecLookupAccountName(
    _In_ PUNICODE_STRING Name,
    _Inout_ PULONG SidSize,
    _Out_ PSID Sid,
    _Out_ PSID_NAME_USE NameUse,
    _Out_ PULONG DomainSize OPTIONAL,
    _Inout_opt_ PUNICODE_STRING ReferencedDomain OPTIONAL
    );
#endif
#if OSVER(NTDDI_VERSION) > NTDDI_WINXP
KSECDDDECLSPEC
NTSTATUS
SEC_ENTRY
SecLookupWellKnownSid(
    _In_ WELL_KNOWN_SID_TYPE SidType,
    _Out_ PSID Sid,
    _In_ ULONG SidBufferSize,
    _Inout_opt_ PULONG SidSize OPTIONAL
    );
#endif
typedef struct _SECURITY_FUNCTION_TABLE_W {
    unsigned long dwVersion;
    ENUMERATE_SECURITY_PACKAGES_FN_W EnumerateSecurityPackagesW;
    QUERY_CREDENTIALS_ATTRIBUTES_FN_W QueryCredentialsAttributesW;
    ACQUIRE_CREDENTIALS_HANDLE_FN_W AcquireCredentialsHandleW;
    FREE_CREDENTIALS_HANDLE_FN FreeCredentialsHandle;
    void * Reserved2;
    INITIALIZE_SECURITY_CONTEXT_FN_W InitializeSecurityContextW;
    ACCEPT_SECURITY_CONTEXT_FN AcceptSecurityContext;
    COMPLETE_AUTH_TOKEN_FN CompleteAuthToken;
    DELETE_SECURITY_CONTEXT_FN DeleteSecurityContext;
    APPLY_CONTROL_TOKEN_FN ApplyControlToken;
    QUERY_CONTEXT_ATTRIBUTES_FN_W QueryContextAttributesW;
    IMPERSONATE_SECURITY_CONTEXT_FN ImpersonateSecurityContext;
    REVERT_SECURITY_CONTEXT_FN RevertSecurityContext;
    MAKE_SIGNATURE_FN MakeSignature;
    VERIFY_SIGNATURE_FN VerifySignature;
    FREE_CONTEXT_BUFFER_FN FreeContextBuffer;
    QUERY_SECURITY_PACKAGE_INFO_FN_W QuerySecurityPackageInfoW;
    void * Reserved3;
    void * Reserved4;
    EXPORT_SECURITY_CONTEXT_FN ExportSecurityContext;
    IMPORT_SECURITY_CONTEXT_FN_W ImportSecurityContextW;
    ADD_CREDENTIALS_FN_W AddCredentialsW ;
    void * Reserved8;
    QUERY_SECURITY_CONTEXT_TOKEN_FN QuerySecurityContextToken;
    ENCRYPT_MESSAGE_FN EncryptMessage;
    DECRYPT_MESSAGE_FN DecryptMessage;
#if OSVER(NTDDI_VERSION) > NTDDI_WIN2K
    SET_CONTEXT_ATTRIBUTES_FN_W SetContextAttributesW;
#endif
    void * Reserved9;
} SecurityFunctionTableW, * PSecurityFunctionTableW;
KSECDDDECLSPEC
PSecurityFunctionTableW SEC_ENTRY
InitSecurityInterfaceW(
    void
    );
typedef PSecurityFunctionTableW
(SEC_ENTRY * INIT_SECURITY_INTERFACE_W)(void);
typedef struct _SEC_WINNT_AUTH_IDENTITY_EX2 {
   unsigned long Version;
   unsigned short cbHeaderLength;
   unsigned long cbStructureLength;
   unsigned long UserOffset;
   unsigned short UserLength;
   unsigned long DomainOffset;
   unsigned short DomainLength;
   unsigned long PackedCredentialsOffset;
   unsigned short PackedCredentialsLength;
   unsigned long Flags;
   unsigned long PackageListOffset;
   unsigned short PackageListLength;
} SEC_WINNT_AUTH_IDENTITY_EX2, *PSEC_WINNT_AUTH_IDENTITY_EX2;
typedef struct _SEC_WINNT_AUTH_IDENTITY_W {
  unsigned short *User;
  unsigned long UserLength;
  unsigned short *Domain;
  unsigned long DomainLength;
  unsigned short *Password;
  unsigned long PasswordLength;
  unsigned long Flags;
} SEC_WINNT_AUTH_IDENTITY_W, *PSEC_WINNT_AUTH_IDENTITY_W;
typedef struct _SEC_WINNT_AUTH_IDENTITY_EXW {
    unsigned long Version;
    unsigned long Length;
    unsigned short *User;
    unsigned long UserLength;
    unsigned short *Domain;
    unsigned long DomainLength;
    unsigned short *Password;
    unsigned long PasswordLength;
    unsigned long Flags;
    unsigned short *PackageList;
    unsigned long PackageListLength;
} SEC_WINNT_AUTH_IDENTITY_EXW, *PSEC_WINNT_AUTH_IDENTITY_EXW;
typedef PVOID PSEC_WINNT_AUTH_IDENTITY_OPAQUE;
SECURITY_STATUS
SEC_ENTRY
SspiEncodeAuthIdentityAsStrings(
    _In_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE pAuthIdentity,
    _Outptr_result_maybenull_ PCWSTR* ppszUserName,
    _Outptr_result_maybenull_ PCWSTR* ppszDomainName,
    _Outptr_opt_result_maybenull_ PCWSTR* ppszPackedCredentialsString
    );
SECURITY_STATUS
SEC_ENTRY
SspiValidateAuthIdentity(
    _In_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData
    );
SECURITY_STATUS
SEC_ENTRY
SspiCopyAuthIdentity(
    _In_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData,
    _Outptr_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE* AuthDataCopy
    );
VOID
SEC_ENTRY
SspiFreeAuthIdentity(
    _In_opt_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData
    );
VOID
SEC_ENTRY
SspiZeroAuthIdentity(
    _In_opt_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthData
    );
VOID
SEC_ENTRY
SspiLocalFree(
    _In_opt_ PVOID DataBuffer
    );
SECURITY_STATUS
SEC_ENTRY
SspiEncodeStringsAsAuthIdentity(
    _In_opt_ PCWSTR pszUserName,
    _In_opt_ PCWSTR pszDomainName,
    _In_opt_ PCWSTR pszPackedCredentialsString,
    _Outptr_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE* ppAuthIdentity
    );
SECURITY_STATUS
SEC_ENTRY
SspiCompareAuthIdentities(
    _In_opt_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity1,
    _In_opt_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity2,
    _Out_opt_ PBOOLEAN SameSuppliedUser,
    _Out_opt_ PBOOLEAN SameSuppliedIdentity
    );
SECURITY_STATUS
SEC_ENTRY
SspiMarshalAuthIdentity(
    _In_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity,
    _Out_ unsigned long* AuthIdentityLength,
    _Outptr_result_bytebuffer_(*AuthIdentityLength) char** AuthIdentityByteArray
    );
SECURITY_STATUS
SEC_ENTRY
SspiUnmarshalAuthIdentity(
    _In_ unsigned long AuthIdentityLength,
    _In_reads_bytes_(AuthIdentityLength) char* AuthIdentityByteArray,
    _Outptr_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE* ppAuthIdentity
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
BOOLEAN
SEC_ENTRY
SspiIsPromptingNeeded(
    _In_ unsigned long ErrorOrNtStatus
    );
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
SECURITY_STATUS
SEC_ENTRY
SspiGetTargetHostName(
    _In_ PCWSTR pszTargetName,
    _Outptr_ PWSTR* pszHostName
    );
SECURITY_STATUS
SEC_ENTRY
SspiExcludePackage(
    _In_opt_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE AuthIdentity,
    _In_ PCWSTR pszPackageName,
    _Outptr_ PSEC_WINNT_AUTH_IDENTITY_OPAQUE* ppNewAuthIdentity
    );
#endif
typedef struct _SECURITY_USER_DATA {
    SECURITY_STRING UserName;
    SECURITY_STRING LogonDomainName;
    SECURITY_STRING LogonServer;
    PSID pSid;
} SECURITY_USER_DATA, *PSECURITY_USER_DATA;
typedef SECURITY_USER_DATA SecurityUserData, * PSecurityUserData;
NTSTATUS SEC_ENTRY
GetSecurityUserInfo(
    _In_opt_ PLUID LogonId,
    _In_ ULONG Flags,
    _Outptr_ PSecurityUserData * UserInformation
    );
NTSTATUS SEC_ENTRY
MapSecurityError( _In_ SECURITY_STATUS SecStatus );
typedef struct _QUERY_PATH_REQUEST {
    ULONG PathNameLength;
    PIO_SECURITY_CONTEXT SecurityContext;
    WCHAR FilePathName[1];
} QUERY_PATH_REQUEST, *PQUERY_PATH_REQUEST;
typedef struct _QUERY_PATH_REQUEST_EX {
    PIO_SECURITY_CONTEXT pSecurityContext;
    ULONG EaLength;
    PVOID pEaBuffer;
    UNICODE_STRING PathName;
    UNICODE_STRING DomainServiceName;
    PECP_LIST EcpList;
    PESILO Silo;
    ULONG_PTR Reserved;
} QUERY_PATH_REQUEST_EX, *PQUERY_PATH_REQUEST_EX;
typedef struct _QUERY_PATH_RESPONSE {
    ULONG LengthAccepted;
} QUERY_PATH_RESPONSE, *PQUERY_PATH_RESPONSE;
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
#endif
#pragma endregion
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryObject(
    _In_opt_ HANDLE Handle,
    _In_ OBJECT_INFORMATION_CLASS ObjectInformationClass,
    _Out_writes_bytes_opt_(ObjectInformationLength) PVOID ObjectInformation,
    _In_ ULONG ObjectInformationLength,
    _Out_opt_ PULONG ReturnLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwNotifyChangeKey(
    _In_ HANDLE KeyHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG CompletionFilter,
    _In_ BOOLEAN WatchTree,
    _Out_writes_bytes_opt_(BufferSize) PVOID Buffer,
    _In_ ULONG BufferSize,
    _In_ BOOLEAN Asynchronous
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwCreateEvent (
    _Out_ PHANDLE EventHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ EVENT_TYPE EventType,
    _In_ BOOLEAN InitialState
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwDeleteFile(
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwDeviceIoControlFile(
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG IoControlCode,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryDirectoryFile(
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_opt_ PUNICODE_STRING FileName,
    _In_ BOOLEAN RestartScan
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryDirectoryFileEx (
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FileInformation,
    _In_ ULONG Length,
    _In_ FILE_INFORMATION_CLASS FileInformationClass,
    _In_ ULONG QueryFlags,
    _In_opt_ PUNICODE_STRING FileName
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryVolumeInformationFile(
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID FsInformation,
    _In_ ULONG Length,
    _In_ FS_INFORMATION_CLASS FsInformationClass
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetVolumeInformationFile(
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID FsInformation,
    _In_ ULONG Length,
    _In_ FS_INFORMATION_CLASS FsInformationClass
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwFsControlFile(
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ ULONG FsControlCode,
    _In_reads_bytes_opt_(InputBufferLength) PVOID InputBuffer,
    _In_ ULONG InputBufferLength,
    _Out_writes_bytes_opt_(OutputBufferLength) PVOID OutputBuffer,
    _In_ ULONG OutputBufferLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwDuplicateObject(
    _In_ HANDLE SourceProcessHandle,
    _In_ HANDLE SourceHandle,
    _In_opt_ HANDLE TargetProcessHandle,
    _Out_opt_ PHANDLE TargetHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG HandleAttributes,
    _In_ ULONG Options
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenDirectoryObject(
    _Out_ PHANDLE DirectoryHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ POBJECT_ATTRIBUTES ObjectAttributes
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_(return==0, __drv_allocatesMem(Region))
NTSYSAPI
NTSTATUS
NTAPI
ZwAllocateVirtualMemory(
    _In_ HANDLE ProcessHandle,
    _Inout_ PVOID *BaseAddress,
    _In_ ULONG_PTR ZeroBits,
    _Inout_ PSIZE_T RegionSize,
    _In_ ULONG AllocationType,
    _In_ ULONG Protect
    );
_Must_inspect_result_
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_(return==0, __drv_allocatesMem(Region))
NTSYSAPI
NTSTATUS
NTAPI
ZwAllocateVirtualMemoryEx(
    _In_ HANDLE ProcessHandle,
    _Inout_ _At_ (*BaseAddress, _Readable_bytes_ (*RegionSize) _Writable_bytes_ (*RegionSize) _Post_readable_byte_size_ (*RegionSize)) PVOID* BaseAddress,
    _Inout_ PSIZE_T RegionSize,
    _In_ ULONG AllocationType,
    _In_ ULONG PageProtection,
    _Inout_updates_opt_(ExtendedParameterCount) PMEM_EXTENDED_PARAMETER ExtendedParameters,
    _In_ ULONG ExtendedParameterCount
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_When_(return==0, __drv_freesMem(Region))
NTSYSAPI
NTSTATUS
NTAPI
ZwFreeVirtualMemory(
    _In_ HANDLE ProcessHandle,
    _Inout_ PVOID *BaseAddress,
    _Inout_ PSIZE_T RegionSize,
    _In_ ULONG FreeType
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryVirtualMemory(
    _In_ HANDLE ProcessHandle,
    _In_opt_ PVOID BaseAddress,
    _In_ MEMORY_INFORMATION_CLASS MemoryInformationClass,
    _Out_writes_bytes_(MemoryInformationLength) PVOID MemoryInformation,
    _In_ SIZE_T MemoryInformationLength,
    _Out_opt_ PSIZE_T ReturnLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
_Must_inspect_result_
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationVirtualMemory(
    _In_ HANDLE ProcessHandle,
    _In_ VIRTUAL_MEMORY_INFORMATION_CLASS VmInformationClass,
    _In_ ULONG_PTR NumberOfEntries,
    _In_reads_(NumberOfEntries) PMEMORY_RANGE_ENTRY VirtualAddresses,
    _In_reads_bytes_(VmInformationLength) PVOID VmInformation,
    _In_ ULONG VmInformationLength
    );
_When_(Timeout == NULL, _IRQL_requires_max_(APC_LEVEL))
_When_(Timeout->QuadPart != 0, _IRQL_requires_max_(APC_LEVEL))
_When_(Timeout->QuadPart == 0, _IRQL_requires_max_(DISPATCH_LEVEL))
NTSYSAPI
NTSTATUS
NTAPI
ZwWaitForSingleObject(
    _In_ HANDLE Handle,
    _In_ BOOLEAN Alertable,
    _In_opt_ PLARGE_INTEGER Timeout
    );
_IRQL_requires_max_(DISPATCH_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetEvent (
    _In_ HANDLE EventHandle,
    _Out_opt_ PLONG PreviousState
    );
_IRQL_requires_max_(APC_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwFlushVirtualMemory(
    _In_ HANDLE ProcessHandle,
    _Inout_ PVOID *BaseAddress,
    _Inout_ PSIZE_T RegionSize,
    _Out_ PIO_STATUS_BLOCK IoStatus
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenProcessTokenEx(
    _In_ HANDLE ProcessHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ ULONG HandleAttributes,
    _Out_ PHANDLE TokenHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwOpenThreadTokenEx(
    _In_ HANDLE ThreadHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_ BOOLEAN OpenAsSelf,
    _In_ ULONG HandleAttributes,
    _Out_ PHANDLE TokenHandle
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryInformationToken (
    _In_ HANDLE TokenHandle,
    _In_ TOKEN_INFORMATION_CLASS TokenInformationClass,
    _Out_writes_bytes_to_opt_(TokenInformationLength,*ReturnLength) PVOID TokenInformation,
    _In_ ULONG TokenInformationLength,
    _Out_ PULONG ReturnLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetInformationToken (
    _In_ HANDLE TokenHandle,
    _In_ TOKEN_INFORMATION_CLASS TokenInformationClass,
    _In_reads_bytes_(TokenInformationLength) PVOID TokenInformation,
    _In_ ULONG TokenInformationLength
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetSecurityObject(
    _In_ HANDLE Handle,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _In_ PSECURITY_DESCRIPTOR SecurityDescriptor
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQuerySecurityObject(
    _In_ HANDLE Handle,
    _In_ SECURITY_INFORMATION SecurityInformation,
    _Out_writes_bytes_to_(Length,*LengthNeeded) PSECURITY_DESCRIPTOR SecurityDescriptor,
    _In_ ULONG Length,
    _Out_ PULONG LengthNeeded
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwLockFile(
    _In_ HANDLE FileHandle,
    _In_opt_ HANDLE Event,
    _In_opt_ PIO_APC_ROUTINE ApcRoutine,
    _In_opt_ PVOID ApcContext,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ PLARGE_INTEGER ByteOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ ULONG Key,
    _In_ BOOLEAN FailImmediately,
    _In_ BOOLEAN ExclusiveLock
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwUnlockFile(
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_ PLARGE_INTEGER ByteOffset,
    _In_ PLARGE_INTEGER Length,
    _In_ ULONG Key
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwQueryQuotaInformationFile(
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_reads_bytes_opt_(SidListLength) PVOID SidList,
    _In_ ULONG SidListLength,
    _In_opt_ PSID StartSid,
    _In_ BOOLEAN RestartScan
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwSetQuotaInformationFile(
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
ZwFlushBuffersFile(
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
ZwFlushBuffersFileEx(
    _In_ HANDLE FileHandle,
    _In_ ULONG FLags,
    _In_reads_bytes_(ParametersSize) PVOID Parameters,
    _In_ ULONG ParametersSize,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
ZwQueryEaFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _Out_writes_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length,
    _In_ BOOLEAN ReturnSingleEntry,
    _In_reads_bytes_opt_(EaListLength) PVOID EaList,
    _In_ ULONG EaListLength,
    _In_opt_ PULONG EaIndex,
    _In_ BOOLEAN RestartScan
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSTATUS
ZwSetEaFile (
    _In_ HANDLE FileHandle,
    _Out_ PIO_STATUS_BLOCK IoStatusBlock,
    _In_reads_bytes_(Length) PVOID Buffer,
    _In_ ULONG Length
    );
_IRQL_requires_max_(PASSIVE_LEVEL)
NTSYSAPI
NTSTATUS
NTAPI
ZwDuplicateToken(
    _In_ HANDLE ExistingTokenHandle,
    _In_ ACCESS_MASK DesiredAccess,
    _In_opt_ POBJECT_ATTRIBUTES ObjectAttributes,
    _In_ BOOLEAN EffectiveOnly,
    _In_ TOKEN_TYPE TokenType,
    _Out_ PHANDLE NewTokenHandle
    );
}
#pragma warning(default:4115)
#pragma warning(default:4201)
#pragma warning(default:4214)
