#include <winapifamily.h>
#include <windows.h>
#include <accctrl.h>
extern "C" {
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef VOID (CALLBACK *FN_PROGRESS) (
    _In_ LPWSTR pObjectName,
    _In_ DWORD Status,
    _Inout_ PPROG_INVOKE_SETTING pInvokeSetting,
    _In_ PVOID Args,
    _In_ BOOL SecuritySet
    );
WINADVAPI
DWORD
WINAPI
SetEntriesInAclA(
    _In_ ULONG cCountOfExplicitEntries,
    _In_reads_opt_(cCountOfExplicitEntries) PEXPLICIT_ACCESS_A pListOfExplicitEntries,
    _In_opt_ PACL OldAcl,
    _Out_ PACL * NewAcl
    );
WINADVAPI
DWORD
WINAPI
SetEntriesInAclW(
    _In_ ULONG cCountOfExplicitEntries,
    _In_reads_opt_(cCountOfExplicitEntries) PEXPLICIT_ACCESS_W pListOfExplicitEntries,
    _In_opt_ PACL OldAcl,
    _Out_ PACL * NewAcl
    );
WINADVAPI
DWORD
WINAPI
GetExplicitEntriesFromAclA(
    _In_ PACL pacl,
    _Out_ PULONG pcCountOfExplicitEntries,
    _Outptr_result_buffer_(*pcCountOfExplicitEntries) PEXPLICIT_ACCESS_A * pListOfExplicitEntries
    );
WINADVAPI
DWORD
WINAPI
GetExplicitEntriesFromAclW(
    _In_ PACL pacl,
    _Out_ PULONG pcCountOfExplicitEntries,
    _Outptr_result_buffer_(*pcCountOfExplicitEntries) PEXPLICIT_ACCESS_W * pListOfExplicitEntries
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINADVAPI
DWORD
WINAPI
GetEffectiveRightsFromAclA(
    _In_ PACL pacl,
    _In_ PTRUSTEE_A pTrustee,
    _Out_ PACCESS_MASK pAccessRights
    );
WINADVAPI
DWORD
WINAPI
GetEffectiveRightsFromAclW(
    _In_ PACL pacl,
    _In_ PTRUSTEE_W pTrustee,
    _Out_ PACCESS_MASK pAccessRights
    );
WINADVAPI
DWORD
WINAPI
GetAuditedPermissionsFromAclA(
    _In_ PACL pacl,
    _In_ PTRUSTEE_A pTrustee,
    _Out_ PACCESS_MASK pSuccessfulAuditedRights,
    _Out_ PACCESS_MASK pFailedAuditRights
    );
WINADVAPI
DWORD
WINAPI
GetAuditedPermissionsFromAclW(
    _In_ PACL pacl,
    _In_ PTRUSTEE_W pTrustee,
    _Out_ PACCESS_MASK pSuccessfulAuditedRights,
    _Out_ PACCESS_MASK pFailedAuditRights
    );
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
WINADVAPI
DWORD
WINAPI
GetNamedSecurityInfoA(
    _In_ LPCSTR pObjectName,
    _In_ SE_OBJECT_TYPE ObjectType,
    _In_ SECURITY_INFORMATION SecurityInfo,
    _Out_opt_ PSID * ppsidOwner,
    _Out_opt_ PSID * ppsidGroup,
    _Out_opt_ PACL * ppDacl,
    _Out_opt_ PACL * ppSacl,
    _Out_ PSECURITY_DESCRIPTOR * ppSecurityDescriptor
    );
WINADVAPI
DWORD
WINAPI
GetNamedSecurityInfoW(
    _In_ LPCWSTR pObjectName,
    _In_ SE_OBJECT_TYPE ObjectType,
    _In_ SECURITY_INFORMATION SecurityInfo,
    _Out_opt_ PSID * ppsidOwner,
    _Out_opt_ PSID * ppsidGroup,
    _Out_opt_ PACL * ppDacl,
    _Out_opt_ PACL * ppSacl,
    _Out_ PSECURITY_DESCRIPTOR * ppSecurityDescriptor
    );
WINADVAPI
DWORD
WINAPI
GetSecurityInfo(
    _In_ HANDLE handle,
    _In_ SE_OBJECT_TYPE ObjectType,
    _In_ SECURITY_INFORMATION SecurityInfo,
    _Out_opt_ PSID * ppsidOwner,
    _Out_opt_ PSID * ppsidGroup,
    _Out_opt_ PACL * ppDacl,
    _Out_opt_ PACL * ppSacl,
    _Out_opt_ PSECURITY_DESCRIPTOR * ppSecurityDescriptor
    );
WINADVAPI
DWORD
WINAPI
SetNamedSecurityInfoA(
    _In_ LPSTR pObjectName,
    _In_ SE_OBJECT_TYPE ObjectType,
    _In_ SECURITY_INFORMATION SecurityInfo,
    _In_opt_ PSID psidOwner,
    _In_opt_ PSID psidGroup,
    _In_opt_ PACL pDacl,
    _In_opt_ PACL pSacl
    );
WINADVAPI
DWORD
WINAPI
SetNamedSecurityInfoW(
    _In_ LPWSTR pObjectName,
    _In_ SE_OBJECT_TYPE ObjectType,
    _In_ SECURITY_INFORMATION SecurityInfo,
    _In_opt_ PSID psidOwner,
    _In_opt_ PSID psidGroup,
    _In_opt_ PACL pDacl,
    _In_opt_ PACL pSacl
    );
WINADVAPI
DWORD
WINAPI
SetSecurityInfo(
    _In_ HANDLE handle,
    _In_ SE_OBJECT_TYPE ObjectType,
    _In_ SECURITY_INFORMATION SecurityInfo,
    _In_opt_ PSID psidOwner,
    _In_opt_ PSID psidGroup,
    _In_opt_ PACL pDacl,
    _In_opt_ PACL pSacl
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINADVAPI
DWORD
WINAPI
GetInheritanceSourceA(
    _In_ LPSTR pObjectName,
    _In_ SE_OBJECT_TYPE ObjectType,
    _In_ SECURITY_INFORMATION SecurityInfo,
    _In_ BOOL Container,
    _In_reads_opt_(GuidCount) GUID ** pObjectClassGuids,
    _In_ DWORD GuidCount,
    _In_ PACL pAcl,
    _In_opt_ PFN_OBJECT_MGR_FUNCTS pfnArray,
    _In_ PGENERIC_MAPPING pGenericMapping,
    _Out_ PINHERITED_FROMA pInheritArray
    );
WINADVAPI
DWORD
WINAPI
GetInheritanceSourceW(
    _In_ LPWSTR pObjectName,
    _In_ SE_OBJECT_TYPE ObjectType,
    _In_ SECURITY_INFORMATION SecurityInfo,
    _In_ BOOL Container,
    _In_reads_opt_(GuidCount) GUID ** pObjectClassGuids,
    _In_ DWORD GuidCount,
    _In_ PACL pAcl,
    _In_opt_ PFN_OBJECT_MGR_FUNCTS pfnArray,
    _In_ PGENERIC_MAPPING pGenericMapping,
    _Out_ PINHERITED_FROMW pInheritArray
    );
WINADVAPI
DWORD
WINAPI
FreeInheritedFromArray(
    _In_reads_(AceCnt) PINHERITED_FROMW pInheritArray,
    _In_ USHORT AceCnt,
    _In_opt_ PFN_OBJECT_MGR_FUNCTS pfnArray OPTIONAL
    );
WINADVAPI
DWORD
WINAPI
TreeResetNamedSecurityInfoA(
    _In_ LPSTR pObjectName,
    _In_ SE_OBJECT_TYPE ObjectType,
    _In_ SECURITY_INFORMATION SecurityInfo,
    _In_opt_ PSID pOwner,
    _In_opt_ PSID pGroup,
    _In_opt_ PACL pDacl,
    _In_opt_ PACL pSacl,
    _In_ BOOL KeepExplicit,
    _In_opt_ FN_PROGRESS fnProgress,
    _In_ PROG_INVOKE_SETTING ProgressInvokeSetting,
    _In_opt_ PVOID Args
    );
WINADVAPI
DWORD
WINAPI
TreeResetNamedSecurityInfoW(
    _In_ LPWSTR pObjectName,
    _In_ SE_OBJECT_TYPE ObjectType,
    _In_ SECURITY_INFORMATION SecurityInfo,
    _In_opt_ PSID pOwner,
    _In_opt_ PSID pGroup,
    _In_opt_ PACL pDacl,
    _In_opt_ PACL pSacl,
    _In_ BOOL KeepExplicit,
    _In_opt_ FN_PROGRESS fnProgress,
    _In_ PROG_INVOKE_SETTING ProgressInvokeSetting,
    _In_opt_ PVOID Args
    );
WINADVAPI
DWORD
WINAPI
TreeSetNamedSecurityInfoA(
    _In_ LPSTR pObjectName,
    _In_ SE_OBJECT_TYPE ObjectType,
    _In_ SECURITY_INFORMATION SecurityInfo,
    _In_opt_ PSID pOwner,
    _In_opt_ PSID pGroup,
    _In_opt_ PACL pDacl,
    _In_opt_ PACL pSacl,
    _In_ DWORD dwAction,
    _In_opt_ FN_PROGRESS fnProgress,
    _In_ PROG_INVOKE_SETTING ProgressInvokeSetting,
    _In_opt_ PVOID Args
    );
WINADVAPI
DWORD
WINAPI
TreeSetNamedSecurityInfoW(
    _In_ LPWSTR pObjectName,
    _In_ SE_OBJECT_TYPE ObjectType,
    _In_ SECURITY_INFORMATION SecurityInfo,
    _In_opt_ PSID pOwner,
    _In_opt_ PSID pGroup,
    _In_opt_ PACL pDacl,
    _In_opt_ PACL pSacl,
    _In_ DWORD dwAction,
    _In_opt_ FN_PROGRESS fnProgress,
    _In_ PROG_INVOKE_SETTING ProgressInvokeSetting,
    _In_opt_ PVOID Args
    );
WINADVAPI
DWORD
WINAPI
BuildSecurityDescriptorA(
    _In_opt_ PTRUSTEE_A pOwner,
    _In_opt_ PTRUSTEE_A pGroup,
    _In_ ULONG cCountOfAccessEntries,
    _In_reads_opt_(cCountOfAccessEntries) PEXPLICIT_ACCESS_A pListOfAccessEntries,
    _In_ ULONG cCountOfAuditEntries,
    _In_reads_opt_(cCountOfAuditEntries) PEXPLICIT_ACCESS_A pListOfAuditEntries,
    _In_opt_ PSECURITY_DESCRIPTOR pOldSD,
    _Out_ PULONG pSizeNewSD,
    _Outptr_result_bytebuffer_(*pSizeNewSD) PSECURITY_DESCRIPTOR * pNewSD
    );
WINADVAPI
DWORD
WINAPI
BuildSecurityDescriptorW(
    _In_opt_ PTRUSTEE_W pOwner,
    _In_opt_ PTRUSTEE_W pGroup,
    _In_ ULONG cCountOfAccessEntries,
    _In_reads_opt_(cCountOfAccessEntries) PEXPLICIT_ACCESS_W pListOfAccessEntries,
    _In_ ULONG cCountOfAuditEntries,
    _In_reads_opt_(cCountOfAuditEntries) PEXPLICIT_ACCESS_W pListOfAuditEntries,
    _In_opt_ PSECURITY_DESCRIPTOR pOldSD,
    _Out_ PULONG pSizeNewSD,
    _Outptr_result_bytebuffer_(*pSizeNewSD) PSECURITY_DESCRIPTOR * pNewSD
    );
WINADVAPI
DWORD
WINAPI
LookupSecurityDescriptorPartsA(
    _Out_opt_ PTRUSTEE_A * ppOwner,
    _Out_opt_ PTRUSTEE_A * ppGroup,
    _Out_opt_ PULONG pcCountOfAccessEntries,
    _Outptr_result_buffer_maybenull_(*pcCountOfAccessEntries) PEXPLICIT_ACCESS_A * ppListOfAccessEntries,
    _Out_opt_ PULONG pcCountOfAuditEntries,
    _Outptr_result_buffer_maybenull_(*pcCountOfAuditEntries) PEXPLICIT_ACCESS_A * ppListOfAuditEntries,
    _In_ PSECURITY_DESCRIPTOR pSD
    );
WINADVAPI
DWORD
WINAPI
LookupSecurityDescriptorPartsW(
    _Out_opt_ PTRUSTEE_W * ppOwner,
    _Out_opt_ PTRUSTEE_W * ppGroup,
    _Out_opt_ PULONG pcCountOfAccessEntries,
    _Outptr_result_buffer_maybenull_(*pcCountOfAccessEntries) PEXPLICIT_ACCESS_W * ppListOfAccessEntries,
    _Out_opt_ PULONG pcCountOfAuditEntries,
    _Outptr_result_buffer_maybenull_(*pcCountOfAuditEntries) PEXPLICIT_ACCESS_W * ppListOfAuditEntries,
    _In_ PSECURITY_DESCRIPTOR pSD
    );
WINADVAPI
VOID
WINAPI
BuildExplicitAccessWithNameA(
    _Inout_ PEXPLICIT_ACCESS_A pExplicitAccess,
    _In_opt_ LPSTR pTrusteeName,
    _In_ DWORD AccessPermissions,
    _In_ ACCESS_MODE AccessMode,
    _In_ DWORD Inheritance
    );
WINADVAPI
VOID
WINAPI
BuildExplicitAccessWithNameW(
    _Inout_ PEXPLICIT_ACCESS_W pExplicitAccess,
    _In_opt_ LPWSTR pTrusteeName,
    _In_ DWORD AccessPermissions,
    _In_ ACCESS_MODE AccessMode,
    _In_ DWORD Inheritance
    );
WINADVAPI
VOID
WINAPI
BuildImpersonateExplicitAccessWithNameA(
    _Inout_ PEXPLICIT_ACCESS_A pExplicitAccess,
    _In_opt_ LPSTR pTrusteeName,
    _In_opt_ PTRUSTEE_A pTrustee,
    _In_ DWORD AccessPermissions,
    _In_ ACCESS_MODE AccessMode,
    _In_ DWORD Inheritance
    );
WINADVAPI
VOID
WINAPI
BuildImpersonateExplicitAccessWithNameW(
    _Inout_ PEXPLICIT_ACCESS_W pExplicitAccess,
    _In_opt_ LPWSTR pTrusteeName,
    _In_opt_ PTRUSTEE_W pTrustee,
    _In_ DWORD AccessPermissions,
    _In_ ACCESS_MODE AccessMode,
    _In_ DWORD Inheritance
    );
WINADVAPI
VOID
WINAPI
BuildTrusteeWithNameA(
    _Inout_ PTRUSTEE_A pTrustee,
    _In_opt_ LPSTR pName
    );
WINADVAPI
VOID
WINAPI
BuildTrusteeWithNameW(
    _Inout_ PTRUSTEE_W pTrustee,
    _In_opt_ LPWSTR pName
    );
WINADVAPI
VOID
WINAPI
BuildImpersonateTrusteeA(
    _Inout_ PTRUSTEE_A pTrustee,
    _In_opt_ PTRUSTEE_A pImpersonateTrustee
    );
WINADVAPI
VOID
WINAPI
BuildImpersonateTrusteeW(
    _Inout_ PTRUSTEE_W pTrustee,
    _In_opt_ PTRUSTEE_W pImpersonateTrustee
    );
WINADVAPI
VOID
WINAPI
BuildTrusteeWithSidA(
    _Inout_ PTRUSTEE_A pTrustee,
    _In_opt_ PSID pSid
    );
WINADVAPI
VOID
WINAPI
BuildTrusteeWithSidW(
    _Inout_ PTRUSTEE_W pTrustee,
    _In_opt_ PSID pSid
    );
WINADVAPI
VOID
WINAPI
BuildTrusteeWithObjectsAndSidA(
    _Inout_ PTRUSTEE_A pTrustee,
    _In_opt_ POBJECTS_AND_SID pObjSid,
    _In_opt_ GUID * pObjectGuid,
    _In_opt_ GUID * pInheritedObjectGuid,
    _In_opt_ PSID pSid
    );
WINADVAPI
VOID
WINAPI
BuildTrusteeWithObjectsAndSidW(
    _Inout_ PTRUSTEE_W pTrustee,
    _In_opt_ POBJECTS_AND_SID pObjSid,
    _In_opt_ GUID * pObjectGuid,
    _In_opt_ GUID * pInheritedObjectGuid,
    _In_opt_ PSID pSid
    );
WINADVAPI
VOID
WINAPI
BuildTrusteeWithObjectsAndNameA(
    _Inout_ PTRUSTEE_A pTrustee,
    _In_opt_ POBJECTS_AND_NAME_A pObjName,
    _In_opt_ SE_OBJECT_TYPE ObjectType,
    _In_opt_ LPSTR ObjectTypeName,
    _In_opt_ LPSTR InheritedObjectTypeName,
    _In_opt_ LPSTR Name
    );
WINADVAPI
VOID
WINAPI
BuildTrusteeWithObjectsAndNameW(
    _Inout_ PTRUSTEE_W pTrustee,
    _In_opt_ POBJECTS_AND_NAME_W pObjName,
    _In_opt_ SE_OBJECT_TYPE ObjectType,
    _In_opt_ LPWSTR ObjectTypeName,
    _In_opt_ LPWSTR InheritedObjectTypeName,
    _In_opt_ LPWSTR Name
    );
WINADVAPI
LPSTR
WINAPI
GetTrusteeNameA(
    _In_ PTRUSTEE_A pTrustee
    );
WINADVAPI
LPWSTR
WINAPI
GetTrusteeNameW(
    _In_ PTRUSTEE_W pTrustee
    );
WINADVAPI
TRUSTEE_TYPE
WINAPI
GetTrusteeTypeA(
    _In_opt_ PTRUSTEE_A pTrustee
    );
WINADVAPI
TRUSTEE_TYPE
WINAPI
GetTrusteeTypeW(
    _In_opt_ PTRUSTEE_W pTrustee
    );
WINADVAPI
TRUSTEE_FORM
WINAPI
GetTrusteeFormA(
    _In_ PTRUSTEE_A pTrustee
    );
WINADVAPI
TRUSTEE_FORM
WINAPI
GetTrusteeFormW(
    _In_ PTRUSTEE_W pTrustee
    );
WINADVAPI
MULTIPLE_TRUSTEE_OPERATION
WINAPI
GetMultipleTrusteeOperationA(
    _In_opt_ PTRUSTEE_A pTrustee
    );
WINADVAPI
MULTIPLE_TRUSTEE_OPERATION
WINAPI
GetMultipleTrusteeOperationW(
    _In_opt_ PTRUSTEE_W pTrustee
    );
WINADVAPI
PTRUSTEE_A
WINAPI
GetMultipleTrusteeA(
    _In_opt_ PTRUSTEE_A pTrustee
    );
WINADVAPI
PTRUSTEE_W
WINAPI
GetMultipleTrusteeW(
    _In_opt_ PTRUSTEE_W pTrustee
    );
#endif
#pragma endregion
}
