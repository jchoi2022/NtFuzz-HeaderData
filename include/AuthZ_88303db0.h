#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
extern "C" {
#include <windows.h>
#include <adtgen.h>
DECLARE_HANDLE(AUTHZ_ACCESS_CHECK_RESULTS_HANDLE);
DECLARE_HANDLE(AUTHZ_CLIENT_CONTEXT_HANDLE);
DECLARE_HANDLE(AUTHZ_RESOURCE_MANAGER_HANDLE);
DECLARE_HANDLE(AUTHZ_AUDIT_EVENT_HANDLE);
DECLARE_HANDLE(AUTHZ_AUDIT_EVENT_TYPE_HANDLE);
DECLARE_HANDLE(AUTHZ_SECURITY_EVENT_PROVIDER_HANDLE);
DECLARE_HANDLE(AUTHZ_CAP_CHANGE_SUBSCRIPTION_HANDLE);
typedef AUTHZ_ACCESS_CHECK_RESULTS_HANDLE *PAUTHZ_ACCESS_CHECK_RESULTS_HANDLE;
typedef AUTHZ_CLIENT_CONTEXT_HANDLE *PAUTHZ_CLIENT_CONTEXT_HANDLE;
typedef AUTHZ_RESOURCE_MANAGER_HANDLE *PAUTHZ_RESOURCE_MANAGER_HANDLE;
typedef AUTHZ_AUDIT_EVENT_HANDLE *PAUTHZ_AUDIT_EVENT_HANDLE;
typedef AUTHZ_AUDIT_EVENT_TYPE_HANDLE *PAUTHZ_AUDIT_EVENT_TYPE_HANDLE;
typedef AUTHZ_SECURITY_EVENT_PROVIDER_HANDLE *PAUTHZ_SECURITY_EVENT_PROVIDER_HANDLE;
typedef AUTHZ_CAP_CHANGE_SUBSCRIPTION_HANDLE *PAUTHZ_CAP_CHANGE_SUBSCRIPTION_HANDLE;
typedef struct _AUTHZ_ACCESS_REQUEST
{
    ACCESS_MASK DesiredAccess;
    PSID PrincipalSelfSid;
    POBJECT_TYPE_LIST ObjectTypeList;
    DWORD ObjectTypeListLength;
    PVOID OptionalArguments;
} AUTHZ_ACCESS_REQUEST, *PAUTHZ_ACCESS_REQUEST;
typedef struct _AUTHZ_ACCESS_REPLY
{
    DWORD ResultListLength;
    _Field_size_(ResultListLength) PACCESS_MASK GrantedAccessMask;
    _Field_size_opt_(ResultListLength) PDWORD SaclEvaluationResults;
    _Field_size_(ResultListLength) PDWORD Error;
} AUTHZ_ACCESS_REPLY, *PAUTHZ_ACCESS_REPLY;
typedef BOOL (CALLBACK *PFN_AUTHZ_DYNAMIC_ACCESS_CHECK) (
                  _In_ AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,
                  _In_ PACE_HEADER pAce,
                  _In_opt_ PVOID pArgs,
                  _Inout_ PBOOL pbAceApplicable
                  );
typedef BOOL (CALLBACK *PFN_AUTHZ_COMPUTE_DYNAMIC_GROUPS) (
                  _In_ AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,
                  _In_ PVOID Args,
                  _Out_ PSID_AND_ATTRIBUTES *pSidAttrArray,
                  _Out_ PDWORD pSidCount,
                  _Out_ PSID_AND_ATTRIBUTES *pRestrictedSidAttrArray,
                  _Out_ PDWORD pRestrictedSidCount
                  );
typedef VOID (CALLBACK *PFN_AUTHZ_FREE_DYNAMIC_GROUPS) (
                  _In_ PSID_AND_ATTRIBUTES pSidAttrArray
                  );
typedef BOOL (CALLBACK *PFN_AUTHZ_GET_CENTRAL_ACCESS_POLICY) (
                _In_ AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,
                _In_ PSID capid,
                _In_opt_ PVOID pArgs,
                _Out_ PBOOL pCentralAccessPolicyApplicable,
                _Out_ PVOID *ppCentralAccessPolicy
                );
typedef VOID (CALLBACK *PFN_AUTHZ_FREE_CENTRAL_ACCESS_POLICY) (
                  _In_ PVOID pCentralAccessPolicy
                  );
typedef struct _AUTHZ_SECURITY_ATTRIBUTE_FQBN_VALUE {
    ULONG64 Version;
    PWSTR pName;
} AUTHZ_SECURITY_ATTRIBUTE_FQBN_VALUE, *PAUTHZ_SECURITY_ATTRIBUTE_FQBN_VALUE;
typedef struct _AUTHZ_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE {
    PVOID pValue;
    ULONG ValueLength;
} AUTHZ_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE,
    *PAUTHZ_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE;
typedef enum {
    AUTHZ_SECURITY_ATTRIBUTE_OPERATION_NONE = 0,
    AUTHZ_SECURITY_ATTRIBUTE_OPERATION_REPLACE_ALL,
    AUTHZ_SECURITY_ATTRIBUTE_OPERATION_ADD,
    AUTHZ_SECURITY_ATTRIBUTE_OPERATION_DELETE,
    AUTHZ_SECURITY_ATTRIBUTE_OPERATION_REPLACE
} AUTHZ_SECURITY_ATTRIBUTE_OPERATION, *PAUTHZ_SECURITY_ATTRIBUTE_OPERATION;
typedef enum {
    AUTHZ_SID_OPERATION_NONE = 0,
    AUTHZ_SID_OPERATION_REPLACE_ALL,
    AUTHZ_SID_OPERATION_ADD,
    AUTHZ_SID_OPERATION_DELETE,
    AUTHZ_SID_OPERATION_REPLACE
} AUTHZ_SID_OPERATION, *PAUTHZ_SID_OPERATION;
typedef struct _AUTHZ_SECURITY_ATTRIBUTE_V1 {
    PWSTR pName;
    USHORT ValueType;
    USHORT Reserved;
                        AUTHZ_SECURITY_ATTRIBUTE_NON_INHERITABLE | \
                        AUTHZ_SECURITY_ATTRIBUTE_VALUE_CASE_SENSITIVE \
                        )
    ULONG Flags;
    ULONG ValueCount;
    union {
        PLONG64 pInt64;
        PULONG64 pUint64;
        PWSTR *ppString;
        PAUTHZ_SECURITY_ATTRIBUTE_FQBN_VALUE pFqbn;
        PAUTHZ_SECURITY_ATTRIBUTE_OCTET_STRING_VALUE pOctetString;
    } Values;
} AUTHZ_SECURITY_ATTRIBUTE_V1, *PAUTHZ_SECURITY_ATTRIBUTE_V1;
typedef struct _AUTHZ_SECURITY_ATTRIBUTES_INFORMATION {
    AUTHZ_SECURITY_ATTRIBUTES_INFORMATION_VERSION_V1
    USHORT Version;
    USHORT Reserved;
    ULONG AttributeCount;
    union {
        PAUTHZ_SECURITY_ATTRIBUTE_V1 pAttributeV1;
    } Attribute;
} AUTHZ_SECURITY_ATTRIBUTES_INFORMATION,
    *PAUTHZ_SECURITY_ATTRIBUTES_INFORMATION;
AUTHZAPI
BOOL
WINAPI
AuthzAccessCheck(
    _In_ DWORD Flags,
    _In_ AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,
    _In_ PAUTHZ_ACCESS_REQUEST pRequest,
    _In_opt_ AUTHZ_AUDIT_EVENT_HANDLE hAuditEvent,
    _In_ PSECURITY_DESCRIPTOR pSecurityDescriptor,
    _In_reads_opt_(OptionalSecurityDescriptorCount)
              PSECURITY_DESCRIPTOR *OptionalSecurityDescriptorArray,
    _In_ DWORD OptionalSecurityDescriptorCount,
    _Inout_ PAUTHZ_ACCESS_REPLY pReply,
    _Out_opt_ PAUTHZ_ACCESS_CHECK_RESULTS_HANDLE phAccessCheckResults
    );
AUTHZAPI
BOOL
WINAPI
AuthzCachedAccessCheck(
    _In_ DWORD Flags,
    _In_ AUTHZ_ACCESS_CHECK_RESULTS_HANDLE hAccessCheckResults,
    _In_ PAUTHZ_ACCESS_REQUEST pRequest,
    _In_opt_ AUTHZ_AUDIT_EVENT_HANDLE hAuditEvent,
     _Inout_ PAUTHZ_ACCESS_REPLY pReply
    );
AUTHZAPI
BOOL
WINAPI
AuthzOpenObjectAudit(
    _In_ DWORD Flags,
    _In_ AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,
    _In_ PAUTHZ_ACCESS_REQUEST pRequest,
    _In_ AUTHZ_AUDIT_EVENT_HANDLE hAuditEvent,
    _In_ PSECURITY_DESCRIPTOR pSecurityDescriptor,
    _In_reads_opt_(OptionalSecurityDescriptorCount)
             PSECURITY_DESCRIPTOR *OptionalSecurityDescriptorArray OPTIONAL,
    _In_ DWORD OptionalSecurityDescriptorCount,
    _In_ PAUTHZ_ACCESS_REPLY pReply
    );
AUTHZAPI
BOOL
WINAPI
AuthzFreeHandle(
    _Inout_ AUTHZ_ACCESS_CHECK_RESULTS_HANDLE hAccessCheckResults
    );
        AUTHZ_RM_FLAG_INITIALIZE_UNDER_IMPERSONATION | \
        AUTHZ_RM_FLAG_NO_CENTRAL_ACCESS_POLICIES)
AUTHZAPI
BOOL
WINAPI
AuthzInitializeResourceManager(
    _In_ DWORD Flags,
    _In_opt_ PFN_AUTHZ_DYNAMIC_ACCESS_CHECK pfnDynamicAccessCheck,
    _In_opt_ PFN_AUTHZ_COMPUTE_DYNAMIC_GROUPS pfnComputeDynamicGroups,
    _In_opt_ PFN_AUTHZ_FREE_DYNAMIC_GROUPS pfnFreeDynamicGroups,
    _In_opt_ PCWSTR szResourceManagerName,
    _Out_ PAUTHZ_RESOURCE_MANAGER_HANDLE phAuthzResourceManager
    );
typedef struct _AUTHZ_RPC_INIT_INFO_CLIENT
{
    USHORT version;
    PWSTR ObjectUuid;
    PWSTR ProtSeq;
    PWSTR NetworkAddr;
    PWSTR Endpoint;
    PWSTR Options;
    PWSTR ServerSpn;
} AUTHZ_RPC_INIT_INFO_CLIENT, *PAUTHZ_RPC_INIT_INFO_CLIENT;
typedef struct _AUTHZ_INIT_INFO
{
    USHORT version;
    PCWSTR szResourceManagerName;
    PFN_AUTHZ_DYNAMIC_ACCESS_CHECK pfnDynamicAccessCheck;
    PFN_AUTHZ_COMPUTE_DYNAMIC_GROUPS pfnComputeDynamicGroups;
    PFN_AUTHZ_FREE_DYNAMIC_GROUPS pfnFreeDynamicGroups;
    PFN_AUTHZ_GET_CENTRAL_ACCESS_POLICY pfnGetCentralAccessPolicy;
    PFN_AUTHZ_FREE_CENTRAL_ACCESS_POLICY pfnFreeCentralAccessPolicy;
} AUTHZ_INIT_INFO, *PAUTHZ_INIT_INFO;
AUTHZAPI
BOOL
WINAPI
AuthzInitializeResourceManagerEx(
    _In_opt_ DWORD Flags,
    _In_opt_ PAUTHZ_INIT_INFO pAuthzInitInfo,
    _Out_ PAUTHZ_RESOURCE_MANAGER_HANDLE phAuthzResourceManager
    );
AUTHZAPI
BOOL
WINAPI
AuthzInitializeRemoteResourceManager(
    _In_ PAUTHZ_RPC_INIT_INFO_CLIENT pRpcInitInfo,
    _Out_ PAUTHZ_RESOURCE_MANAGER_HANDLE phAuthzResourceManager
    );
AUTHZAPI
BOOL
WINAPI
AuthzFreeResourceManager(
    _In_ AUTHZ_RESOURCE_MANAGER_HANDLE hAuthzResourceManager
    );
AUTHZAPI
BOOL
WINAPI
AuthzInitializeContextFromToken(
    _In_ DWORD Flags,
    _In_ HANDLE TokenHandle,
    _In_ AUTHZ_RESOURCE_MANAGER_HANDLE hAuthzResourceManager,
    _In_opt_ PLARGE_INTEGER pExpirationTime,
    _In_ LUID Identifier,
    _In_opt_ PVOID DynamicGroupArgs,
    _Out_ PAUTHZ_CLIENT_CONTEXT_HANDLE phAuthzClientContext
    );
AUTHZAPI
BOOL
WINAPI
AuthzInitializeContextFromSid(
    _In_ DWORD Flags,
    _In_ PSID UserSid,
    _In_ AUTHZ_RESOURCE_MANAGER_HANDLE hAuthzResourceManager,
    _In_opt_ PLARGE_INTEGER pExpirationTime,
    _In_ LUID Identifier,
    _In_opt_ PVOID DynamicGroupArgs,
    _Out_ PAUTHZ_CLIENT_CONTEXT_HANDLE phAuthzClientContext
    );
AUTHZAPI
BOOL
WINAPI
AuthzInitializeContextFromAuthzContext(
    _In_ DWORD Flags,
    _In_ AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,
    _In_opt_ PLARGE_INTEGER pExpirationTime,
    _In_ LUID Identifier,
    _In_ PVOID DynamicGroupArgs,
    _Out_ PAUTHZ_CLIENT_CONTEXT_HANDLE phNewAuthzClientContext
    );
AUTHZAPI
BOOL
WINAPI
AuthzInitializeCompoundContext(
    _In_ AUTHZ_CLIENT_CONTEXT_HANDLE UserContext,
    _In_ AUTHZ_CLIENT_CONTEXT_HANDLE DeviceContext,
    _Out_ PAUTHZ_CLIENT_CONTEXT_HANDLE phCompoundContext
    );
AUTHZAPI
BOOL
WINAPI
AuthzAddSidsToContext(
    _In_ AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,
    _In_opt_ PSID_AND_ATTRIBUTES Sids,
    _In_ DWORD SidCount,
    _In_opt_ PSID_AND_ATTRIBUTES RestrictedSids,
    _In_ DWORD RestrictedSidCount,
    _Out_ PAUTHZ_CLIENT_CONTEXT_HANDLE phNewAuthzClientContext
    );
AUTHZAPI
BOOL
WINAPI
AuthzModifySecurityAttributes(
    _In_ AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,
    _In_
    _When_(pAttributes != NULL && *pOperations != AUTHZ_SECURITY_ATTRIBUTE_OPERATION_REPLACE_ALL, _In_reads_(pAttributes->AttributeCount))
             PAUTHZ_SECURITY_ATTRIBUTE_OPERATION pOperations,
    _In_opt_ PAUTHZ_SECURITY_ATTRIBUTES_INFORMATION pAttributes
    );
typedef enum _AUTHZ_CONTEXT_INFORMATION_CLASS
{
    AuthzContextInfoUserSid = 1,
    AuthzContextInfoGroupsSids,
    AuthzContextInfoRestrictedSids,
    AuthzContextInfoPrivileges,
    AuthzContextInfoExpirationTime,
    AuthzContextInfoServerContext,
    AuthzContextInfoIdentifier,
    AuthzContextInfoSource,
    AuthzContextInfoAll,
    AuthzContextInfoAuthenticationId,
    AuthzContextInfoSecurityAttributes,
    AuthzContextInfoDeviceSids,
    AuthzContextInfoUserClaims,
    AuthzContextInfoDeviceClaims,
    AuthzContextInfoAppContainerSid,
    AuthzContextInfoCapabilitySids
} AUTHZ_CONTEXT_INFORMATION_CLASS;
AUTHZAPI
BOOL
WINAPI
AuthzModifyClaims(
    _In_ AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,
    _In_ AUTHZ_CONTEXT_INFORMATION_CLASS ClaimClass,
    _In_
    _When_(pClaims != NULL && *pClaimOperations != AUTHZ_SECURITY_ATTRIBUTE_OPERATION_REPLACE_ALL, _In_reads_(pClaims->AttributeCount))
             PAUTHZ_SECURITY_ATTRIBUTE_OPERATION pClaimOperations,
    _In_opt_ PAUTHZ_SECURITY_ATTRIBUTES_INFORMATION pClaims
    );
AUTHZAPI
BOOL
WINAPI
AuthzModifySids(
    _In_ AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,
    _In_ AUTHZ_CONTEXT_INFORMATION_CLASS SidClass,
    _In_
    _When_(pSids != NULL && *pSidOperations != AUTHZ_SID_OPERATION_REPLACE_ALL, _In_reads_(pSids->GroupCount))
             PAUTHZ_SID_OPERATION pSidOperations,
    _In_opt_ PTOKEN_GROUPS pSids
    );
AUTHZAPI
BOOL
WINAPI
AuthzSetAppContainerInformation(
    _In_ AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,
    _In_ PSID pAppContainerSid,
    _In_ DWORD CapabilityCount,
    _In_reads_opt_(CapabilityCount)
             PSID_AND_ATTRIBUTES pCapabilitySids
    );
AUTHZAPI
BOOL
WINAPI
AuthzGetInformationFromContext(
    _In_ AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext,
    _In_ AUTHZ_CONTEXT_INFORMATION_CLASS InfoClass,
    _In_ DWORD BufferSize,
    _Out_ PDWORD pSizeRequired,
    _Out_ PVOID Buffer
);
AUTHZAPI
BOOL
WINAPI
AuthzFreeContext(
    _In_ AUTHZ_CLIENT_CONTEXT_HANDLE hAuthzClientContext
    );
                                                  AUTHZ_NO_FAILURE_AUDIT | \
                                                  AUTHZ_NO_ALLOC_STRINGS | \
                                                  AUTHZ_WPD_CATEGORY_FLAG)
AUTHZAPI
BOOL
WINAPI
AuthzInitializeObjectAccessAuditEvent(
    _In_ DWORD Flags,
    _In_ AUTHZ_AUDIT_EVENT_TYPE_HANDLE hAuditEventType,
    _In_ PWSTR szOperationType,
    _In_ PWSTR szObjectType,
    _In_ PWSTR szObjectName,
    _In_ PWSTR szAdditionalInfo,
    _Out_ PAUTHZ_AUDIT_EVENT_HANDLE phAuditEvent,
    _In_ DWORD dwAdditionalParameterCount,
    ...
    );
AUTHZAPI
BOOL
WINAPI
AuthzInitializeObjectAccessAuditEvent2(
    _In_ DWORD Flags,
    _In_ AUTHZ_AUDIT_EVENT_TYPE_HANDLE hAuditEventType,
    _In_ PWSTR szOperationType,
    _In_ PWSTR szObjectType,
    _In_ PWSTR szObjectName,
    _In_ PWSTR szAdditionalInfo,
    _In_ PWSTR szAdditionalInfo2,
    _Out_ PAUTHZ_AUDIT_EVENT_HANDLE phAuditEvent,
    _In_ DWORD dwAdditionalParameterCount,
    ...
    );
typedef enum _AUTHZ_AUDIT_EVENT_INFORMATION_CLASS
{
    AuthzAuditEventInfoFlags = 1,
    AuthzAuditEventInfoOperationType,
    AuthzAuditEventInfoObjectType,
    AuthzAuditEventInfoObjectName,
    AuthzAuditEventInfoAdditionalInfo,
} AUTHZ_AUDIT_EVENT_INFORMATION_CLASS;
AUTHZAPI
BOOL
WINAPI
AuthzFreeAuditEvent(
    _In_ AUTHZ_AUDIT_EVENT_HANDLE hAuditEvent
    );
AUTHZAPI
BOOL
WINAPI
AuthzEvaluateSacl(
    _In_ AUTHZ_CLIENT_CONTEXT_HANDLE AuthzClientContext,
    _In_ PAUTHZ_ACCESS_REQUEST pRequest,
    _In_ PACL Sacl,
    _In_ ACCESS_MASK GrantedAccess,
    _In_ BOOL AccessGranted,
    _Out_ PBOOL pbGenerateAudit
    );
typedef struct _AUTHZ_REGISTRATION_OBJECT_TYPE_NAME_OFFSET
{
    PWSTR szObjectTypeName;
    DWORD dwOffset;
} AUTHZ_REGISTRATION_OBJECT_TYPE_NAME_OFFSET, *PAUTHZ_REGISTRATION_OBJECT_TYPE_NAME_OFFSET;
typedef struct _AUTHZ_SOURCE_SCHEMA_REGISTRATION
{
    DWORD dwFlags;
    PWSTR szEventSourceName;
    PWSTR szEventMessageFile;
    PWSTR szEventSourceXmlSchemaFile;
    PWSTR szEventAccessStringsFile;
    PWSTR szExecutableImagePath;
    union
    {
        PVOID pReserved;
        GUID* pProviderGuid;
    } DUMMYUNIONNAME;
    DWORD dwObjectTypeNameCount;
    AUTHZ_REGISTRATION_OBJECT_TYPE_NAME_OFFSET ObjectTypeNames[ANYSIZE_ARRAY];
} AUTHZ_SOURCE_SCHEMA_REGISTRATION, *PAUTHZ_SOURCE_SCHEMA_REGISTRATION;
AUTHZAPI
BOOL
WINAPI
AuthzInstallSecurityEventSource(
    _In_ DWORD dwFlags,
    _In_ PAUTHZ_SOURCE_SCHEMA_REGISTRATION pRegistration
    );
AUTHZAPI
BOOL
WINAPI
AuthzUninstallSecurityEventSource(
    _In_ DWORD dwFlags,
    _In_ PCWSTR szEventSourceName
    );
AUTHZAPI
BOOL
WINAPI
AuthzEnumerateSecurityEventSources(
    _In_ DWORD dwFlags,
    _Out_ PAUTHZ_SOURCE_SCHEMA_REGISTRATION Buffer,
    _Out_ PDWORD pdwCount,
     _Inout_ PDWORD pdwLength
    );
AUTHZAPI
BOOL
WINAPI
AuthzRegisterSecurityEventSource(
    _In_ DWORD dwFlags,
    _In_ PCWSTR szEventSourceName,
    _Out_ PAUTHZ_SECURITY_EVENT_PROVIDER_HANDLE phEventProvider
    );
AUTHZAPI
BOOL
WINAPI
AuthzUnregisterSecurityEventSource(
    _In_ DWORD dwFlags,
     _Inout_ PAUTHZ_SECURITY_EVENT_PROVIDER_HANDLE phEventProvider
    );
AUTHZAPI
BOOL
WINAPI
AuthzReportSecurityEvent(
    _In_ DWORD dwFlags,
     _Inout_ AUTHZ_SECURITY_EVENT_PROVIDER_HANDLE hEventProvider,
    _In_ DWORD dwAuditId,
    _In_opt_ PSID pUserSid,
    _In_ DWORD dwCount,
    ...
    );
AUTHZAPI
BOOL
WINAPI
AuthzReportSecurityEventFromParams(
    _In_ DWORD dwFlags,
     _Inout_ AUTHZ_SECURITY_EVENT_PROVIDER_HANDLE hEventProvider,
    _In_ DWORD dwAuditId,
    _In_opt_ PSID pUserSid,
    _In_ PAUDIT_PARAMS pParams
    );
_Success_(return != FALSE)
AUTHZAPI
BOOL
WINAPI
AuthzRegisterCapChangeNotification(
    _Out_ PAUTHZ_CAP_CHANGE_SUBSCRIPTION_HANDLE phCapChangeSubscription,
    _In_ LPTHREAD_START_ROUTINE pfnCapChangeCallback,
    _In_opt_ PVOID pCallbackContext
    );
AUTHZAPI
BOOL
WINAPI
AuthzUnregisterCapChangeNotification(
    _In_ AUTHZ_CAP_CHANGE_SUBSCRIPTION_HANDLE hCapChangeSubscription
    );
AUTHZAPI
BOOL
WINAPI
AuthzFreeCentralAccessPolicyCache(
    void
    );
}
#endif
#pragma endregion
