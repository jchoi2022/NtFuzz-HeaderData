#include <wtypes.h>
#include <winapifamily.h>
extern "C" {
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef enum _SE_OBJECT_TYPE
{
    SE_UNKNOWN_OBJECT_TYPE = 0,
    SE_FILE_OBJECT,
    SE_SERVICE,
    SE_PRINTER,
    SE_REGISTRY_KEY,
    SE_LMSHARE,
    SE_KERNEL_OBJECT,
    SE_WINDOW_OBJECT,
    SE_DS_OBJECT,
    SE_DS_OBJECT_ALL,
    SE_PROVIDER_DEFINED_OBJECT,
    SE_WMIGUID_OBJECT,
    SE_REGISTRY_WOW64_32KEY,
    SE_REGISTRY_WOW64_64KEY,
} SE_OBJECT_TYPE;
typedef enum _TRUSTEE_TYPE
{
    TRUSTEE_IS_UNKNOWN,
    TRUSTEE_IS_USER,
    TRUSTEE_IS_GROUP,
    TRUSTEE_IS_DOMAIN,
    TRUSTEE_IS_ALIAS,
    TRUSTEE_IS_WELL_KNOWN_GROUP,
    TRUSTEE_IS_DELETED,
    TRUSTEE_IS_INVALID,
    TRUSTEE_IS_COMPUTER
} TRUSTEE_TYPE;
typedef enum _TRUSTEE_FORM
{
    TRUSTEE_IS_SID,
    TRUSTEE_IS_NAME,
    TRUSTEE_BAD_FORM,
    TRUSTEE_IS_OBJECTS_AND_SID,
    TRUSTEE_IS_OBJECTS_AND_NAME
} TRUSTEE_FORM;
typedef enum _MULTIPLE_TRUSTEE_OPERATION
{
    NO_MULTIPLE_TRUSTEE,
    TRUSTEE_IS_IMPERSONATE,
} MULTIPLE_TRUSTEE_OPERATION;
typedef struct _OBJECTS_AND_SID
{
    DWORD ObjectsPresent;
    GUID ObjectTypeGuid;
    GUID InheritedObjectTypeGuid;
    SID * pSid;
} OBJECTS_AND_SID, *POBJECTS_AND_SID;
typedef struct _OBJECTS_AND_NAME_A
{
    DWORD ObjectsPresent;
    SE_OBJECT_TYPE ObjectType;
    LPSTR ObjectTypeName;
    LPSTR InheritedObjectTypeName;
    LPSTR ptstrName;
} OBJECTS_AND_NAME_A, *POBJECTS_AND_NAME_A;
typedef struct _OBJECTS_AND_NAME_W
{
    DWORD ObjectsPresent;
    SE_OBJECT_TYPE ObjectType;
    LPWSTR ObjectTypeName;
    LPWSTR InheritedObjectTypeName;
    LPWSTR ptstrName;
} OBJECTS_AND_NAME_W, *POBJECTS_AND_NAME_W;
typedef OBJECTS_AND_NAME_W OBJECTS_AND_NAME_;
typedef POBJECTS_AND_NAME_W POBJECTS_AND_NAME_;
typedef struct _TRUSTEE_A
{
    struct _TRUSTEE_A *pMultipleTrustee;
    MULTIPLE_TRUSTEE_OPERATION MultipleTrusteeOperation;
    TRUSTEE_FORM TrusteeForm;
    TRUSTEE_TYPE TrusteeType;
    [switch_is(TrusteeForm)]
    union
    {
    [case(TRUSTEE_IS_NAME)]
        LPSTR ptstrName;
    [case(TRUSTEE_IS_SID)]
        SID *pSid;
    [case(TRUSTEE_IS_OBJECTS_AND_SID)]
        OBJECTS_AND_SID *pObjectsAndSid;
    [case(TRUSTEE_IS_OBJECTS_AND_NAME)]
        OBJECTS_AND_NAME_A *pObjectsAndName;
    };
} TRUSTEE_A, *PTRUSTEE_A, TRUSTEEA, *PTRUSTEEA;
typedef struct _TRUSTEE_W
{
    struct _TRUSTEE_W *pMultipleTrustee;
    MULTIPLE_TRUSTEE_OPERATION MultipleTrusteeOperation;
    TRUSTEE_FORM TrusteeForm;
    TRUSTEE_TYPE TrusteeType;
    [switch_is(TrusteeForm)]
    union
    {
    [case(TRUSTEE_IS_NAME)]
        LPWSTR ptstrName;
    [case(TRUSTEE_IS_SID)]
        SID *pSid;
    [case(TRUSTEE_IS_OBJECTS_AND_SID)]
        OBJECTS_AND_SID *pObjectsAndSid;
    [case(TRUSTEE_IS_OBJECTS_AND_NAME)]
        OBJECTS_AND_NAME_W *pObjectsAndName;
    };
} TRUSTEE_W, *PTRUSTEE_W, TRUSTEEW, *PTRUSTEEW;
typedef TRUSTEE_W TRUSTEE_;
typedef PTRUSTEE_W PTRUSTEE_;
typedef TRUSTEEW TRUSTEE;
typedef PTRUSTEEW PTRUSTEE;
typedef enum _ACCESS_MODE
{
    NOT_USED_ACCESS = 0,
    GRANT_ACCESS,
    SET_ACCESS,
    DENY_ACCESS,
    REVOKE_ACCESS,
    SET_AUDIT_SUCCESS,
    SET_AUDIT_FAILURE
} ACCESS_MODE;
typedef struct _EXPLICIT_ACCESS_A
{
    DWORD grfAccessPermissions;
    ACCESS_MODE grfAccessMode;
    DWORD grfInheritance;
    TRUSTEE_A Trustee;
} EXPLICIT_ACCESS_A, *PEXPLICIT_ACCESS_A, EXPLICIT_ACCESSA, *PEXPLICIT_ACCESSA;
typedef struct _EXPLICIT_ACCESS_W
{
    DWORD grfAccessPermissions;
    ACCESS_MODE grfAccessMode;
    DWORD grfInheritance;
    TRUSTEE_W Trustee;
} EXPLICIT_ACCESS_W, *PEXPLICIT_ACCESS_W, EXPLICIT_ACCESSW, *PEXPLICIT_ACCESSW;
typedef EXPLICIT_ACCESS_W EXPLICIT_ACCESS_;
typedef PEXPLICIT_ACCESS_W PEXPLICIT_ACCESS_;
typedef EXPLICIT_ACCESSW EXPLICIT_ACCESS;
typedef PEXPLICIT_ACCESSW PEXPLICIT_ACCESS;
typedef ULONG ACCESS_RIGHTS, *PACCESS_RIGHTS;
typedef ULONG INHERIT_FLAGS, *PINHERIT_FLAGS;
typedef struct _ACTRL_ACCESS_ENTRYA
{
    TRUSTEE_A Trustee;
    ULONG fAccessFlags;
    ACCESS_RIGHTS Access;
    ACCESS_RIGHTS ProvSpecificAccess;
    INHERIT_FLAGS Inheritance;
    LPSTR lpInheritProperty;
} ACTRL_ACCESS_ENTRYA, *PACTRL_ACCESS_ENTRYA;
typedef struct _ACTRL_ACCESS_ENTRYW
{
    TRUSTEE_W Trustee;
    ULONG fAccessFlags;
    ACCESS_RIGHTS Access;
    ACCESS_RIGHTS ProvSpecificAccess;
    INHERIT_FLAGS Inheritance;
    LPWSTR lpInheritProperty;
} ACTRL_ACCESS_ENTRYW, *PACTRL_ACCESS_ENTRYW;
typedef ACTRL_ACCESS_ENTRYW ACTRL_ACCESS_ENTRY;
typedef PACTRL_ACCESS_ENTRYW PACTRL_ACCESS_ENTRY;
typedef struct _ACTRL_ACCESS_ENTRY_LISTA
{
    ULONG cEntries;
    [size_is(cEntries)]
    ACTRL_ACCESS_ENTRYA *pAccessList;
} ACTRL_ACCESS_ENTRY_LISTA, *PACTRL_ACCESS_ENTRY_LISTA;
typedef struct _ACTRL_ACCESS_ENTRY_LISTW
{
    ULONG cEntries;
    [size_is(cEntries)]
    ACTRL_ACCESS_ENTRYW *pAccessList;
} ACTRL_ACCESS_ENTRY_LISTW, *PACTRL_ACCESS_ENTRY_LISTW;
typedef ACTRL_ACCESS_ENTRY_LISTW ACTRL_ACCESS_ENTRY_LIST;
typedef PACTRL_ACCESS_ENTRY_LISTW PACTRL_ACCESS_ENTRY_LIST;
typedef struct _ACTRL_PROPERTY_ENTRYA
{
    LPSTR lpProperty;
    PACTRL_ACCESS_ENTRY_LISTA pAccessEntryList;
    ULONG fListFlags;
} ACTRL_PROPERTY_ENTRYA, *PACTRL_PROPERTY_ENTRYA;
typedef struct _ACTRL_PROPERTY_ENTRYW
{
    LPWSTR lpProperty;
    PACTRL_ACCESS_ENTRY_LISTW pAccessEntryList;
    ULONG fListFlags;
} ACTRL_PROPERTY_ENTRYW, *PACTRL_PROPERTY_ENTRYW;
typedef ACTRL_PROPERTY_ENTRYW ACTRL_PROPERTY_ENTRY;
typedef PACTRL_PROPERTY_ENTRYW PACTRL_PROPERTY_ENTRY;
typedef struct _ACTRL_ALISTA
{
    ULONG cEntries;
    [size_is(cEntries)]
    PACTRL_PROPERTY_ENTRYA pPropertyAccessList;
} ACTRL_ACCESSA, *PACTRL_ACCESSA, ACTRL_AUDITA, *PACTRL_AUDITA;
typedef struct _ACTRL_ALISTW
{
    ULONG cEntries;
    [size_is(cEntries)]
    PACTRL_PROPERTY_ENTRYW pPropertyAccessList;
} ACTRL_ACCESSW, *PACTRL_ACCESSW, ACTRL_AUDITW, *PACTRL_AUDITW;
typedef ACTRL_ACCESSW ACTRL_ACCESS;
typedef PACTRL_ACCESSW PACTRL_ACCESS;
typedef ACTRL_AUDITW ACTRL_AUDIT;
typedef PACTRL_AUDITW PACTRL_AUDIT;
                                     TRUSTEE_ACCESS_WRITE)
typedef struct _TRUSTEE_ACCESSA
{
    LPSTR lpProperty;
    ACCESS_RIGHTS Access;
    ULONG fAccessFlags;
    ULONG fReturnedAccess;
} TRUSTEE_ACCESSA, *PTRUSTEE_ACCESSA;
typedef struct _TRUSTEE_ACCESSW
{
    LPWSTR lpProperty;
    ACCESS_RIGHTS Access;
    ULONG fAccessFlags;
    ULONG fReturnedAccess;
} TRUSTEE_ACCESSW, *PTRUSTEE_ACCESSW;
typedef TRUSTEE_ACCESSW TRUSTEE_ACCESS;
typedef PTRUSTEE_ACCESSW PTRUSTEE_ACCESS;
#pragma warning (push)
#pragma warning (disable: 4201)
typedef struct _ACTRL_OVERLAPPED
{
    union {
        PVOID Provider;
        ULONG Reserved1;
    } DUMMYUNIONNAME;
    ULONG Reserved2;
    HANDLE hEvent;
} ACTRL_OVERLAPPED, *PACTRL_OVERLAPPED;
#pragma warning(pop)
typedef struct _ACTRL_ACCESS_INFOA
{
    ULONG fAccessPermission;
    LPSTR lpAccessPermissionName;
} ACTRL_ACCESS_INFOA, *PACTRL_ACCESS_INFOA;
typedef struct _ACTRL_ACCESS_INFOW
{
    ULONG fAccessPermission;
    LPWSTR lpAccessPermissionName;
} ACTRL_ACCESS_INFOW, *PACTRL_ACCESS_INFOW;
typedef ACTRL_ACCESS_INFOW ACTRL_ACCESS_INFO;
typedef PACTRL_ACCESS_INFOW PACTRL_ACCESS_INFO;
typedef struct _ACTRL_CONTROL_INFOA
{
    LPSTR lpControlId;
    LPSTR lpControlName;
} ACTRL_CONTROL_INFOA, *PACTRL_CONTROL_INFOA;
typedef struct _ACTRL_CONTROL_INFOW
{
    LPWSTR lpControlId;
    LPWSTR lpControlName;
} ACTRL_CONTROL_INFOW, *PACTRL_CONTROL_INFOW;
typedef ACTRL_CONTROL_INFOW ACTRL_CONTROL_INFO;
typedef PACTRL_CONTROL_INFOW PACTRL_CONTROL_INFO;
typedef enum _PROGRESS_INVOKE_SETTING {
    ProgressInvokeNever = 1,
    ProgressInvokeEveryObject,
    ProgressInvokeOnError,
    ProgressCancelOperation,
    ProgressRetryOperation,
    ProgressInvokePrePostError,
} PROG_INVOKE_SETTING, *PPROG_INVOKE_SETTING;
typedef struct _FN_OBJECT_MGR_FUNCTIONS
{
    ULONG Placeholder;
} FN_OBJECT_MGR_FUNCTS, *PFN_OBJECT_MGR_FUNCTS;
typedef struct _INHERITED_FROMA
{
    LONG GenerationGap;
    LPSTR AncestorName;
} INHERITED_FROMA, *PINHERITED_FROMA;
typedef struct _INHERITED_FROMW
{
    LONG GenerationGap;
    LPWSTR AncestorName;
} INHERITED_FROMW, *PINHERITED_FROMW;
typedef INHERITED_FROMW INHERITED_FROM;
typedef PINHERITED_FROMW PINHERITED_FROM;
#endif
#pragma endregion
}
