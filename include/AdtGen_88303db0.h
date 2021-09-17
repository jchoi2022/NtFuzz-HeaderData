#include <winapifamily.h>
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
typedef enum _AUDIT_PARAM_TYPE
{
    APT_None = 1,
    APT_String,
    APT_Ulong,
    APT_Pointer,
    APT_Sid,
    APT_LogonId,
    APT_ObjectTypeList,
    APT_Luid,
    APT_Guid,
    APT_Time,
    APT_Int64,
    APT_IpAddress,
    APT_LogonIdWithSid
} AUDIT_PARAM_TYPE;
typedef struct _AUDIT_OBJECT_TYPE
{
    GUID ObjectType;
    USHORT Flags;
    USHORT Level;
    ACCESS_MASK AccessMask;
} AUDIT_OBJECT_TYPE, *PAUDIT_OBJECT_TYPE;
typedef struct _AUDIT_OBJECT_TYPES
{
    USHORT Count;
    USHORT Flags;
    [size_is(Count)]
    AUDIT_OBJECT_TYPE* pObjectTypes;
} AUDIT_OBJECT_TYPES, *PAUDIT_OBJECT_TYPES;
typedef struct _AUDIT_IP_ADDRESS
{
 BYTE pIpAddress[_AUTHZ_SS_MAXSIZE];
} AUDIT_IP_ADDRESS, *PAUDIT_IP_ADDRESS;
typedef struct _AUDIT_PARAM
{
    AUDIT_PARAM_TYPE Type;
    ULONG Length;
    DWORD Flags;
    [switch_type(AUDIT_PARAM_TYPE),switch_is(Type)]
    union
    {
        [default]
        ULONG_PTR Data0;
        [case(APT_String)]
        [string]
        PWSTR String;
        [case(APT_Ulong,
              APT_Pointer)]
        ULONG_PTR u;
        [case(APT_Sid)]
        SID* psid;
        [case(APT_Guid)]
        GUID* pguid;
        [case(APT_LogonId)]
        ULONG LogonId_LowPart;
        [case(APT_ObjectTypeList)]
        AUDIT_OBJECT_TYPES* pObjectTypes;
        [case(APT_IpAddress)]
        AUDIT_IP_ADDRESS* pIpAddress;
    } DUMMYUNIONNAME;
    [switch_type(AUDIT_PARAM_TYPE),switch_is(Type)]
    union
    {
        [default]
        ULONG_PTR Data1;
        [case(APT_LogonId)]
        LONG LogonId_HighPart;
    } DUMMYUNIONNAME2;
} AUDIT_PARAM, *PAUDIT_PARAM;
typedef struct _AUDIT_PARAMS
{
    ULONG Length;
    DWORD Flags;
    USHORT Count;
    [size_is(Count)]
    AUDIT_PARAM* Parameters;
} AUDIT_PARAMS, *PAUDIT_PARAMS;
typedef struct _AUTHZ_AUDIT_EVENT_TYPE_LEGACY
{
    USHORT CategoryId;
    USHORT AuditId;
    USHORT ParameterCount;
} AUTHZ_AUDIT_EVENT_TYPE_LEGACY, *PAUTHZ_AUDIT_EVENT_TYPE_LEGACY;
typedef
[switch_type(BYTE)]
union _AUTHZ_AUDIT_EVENT_TYPE_UNION
{
        [case(AUDIT_TYPE_LEGACY)]
        AUTHZ_AUDIT_EVENT_TYPE_LEGACY Legacy;
} AUTHZ_AUDIT_EVENT_TYPE_UNION, *PAUTHZ_AUDIT_EVENT_TYPE_UNION;
typedef
struct _AUTHZ_AUDIT_EVENT_TYPE_OLD
{
    ULONG Version;
    DWORD dwFlags;
    LONG RefCount;
    ULONG_PTR hAudit;
    LUID LinkId;
    [switch_is(Version)]
    AUTHZ_AUDIT_EVENT_TYPE_UNION u;
} AUTHZ_AUDIT_EVENT_TYPE_OLD;
typedef
[handle]
AUTHZ_AUDIT_EVENT_TYPE_OLD* PAUTHZ_AUDIT_EVENT_TYPE_OLD;
typedef
[context_handle]
PVOID AUDIT_HANDLE, *PAUDIT_HANDLE;
#endif
#pragma endregion
