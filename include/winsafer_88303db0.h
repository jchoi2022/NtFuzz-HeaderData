#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <guiddef.h>
#include <wincrypt.h>
extern "C" {
DECLARE_HANDLE(SAFER_LEVEL_HANDLE);
#include <pshpack8.h>
typedef struct _SAFER_CODE_PROPERTIES_V1
{
    DWORD cbSize;
    DWORD dwCheckFlags;
    LPCWSTR ImagePath;
    HANDLE hImageFileHandle;
    DWORD UrlZoneId;
    BYTE ImageHash[SAFER_MAX_HASH_SIZE];
    DWORD dwImageHashSize;
    LARGE_INTEGER ImageSize;
    ALG_ID HashAlgorithm;
    LPBYTE pByteBlock;
    HWND hWndParent;
    DWORD dwWVTUIChoice;
} SAFER_CODE_PROPERTIES_V1, *PSAFER_CODE_PROPERTIES_V1;
typedef struct _SAFER_CODE_PROPERTIES_V2
{
    DWORD cbSize;
    DWORD dwCheckFlags;
    LPCWSTR ImagePath;
    HANDLE hImageFileHandle;
    DWORD UrlZoneId;
    BYTE ImageHash[SAFER_MAX_HASH_SIZE];
    DWORD dwImageHashSize;
    LARGE_INTEGER ImageSize;
    ALG_ID HashAlgorithm;
    LPBYTE pByteBlock;
    HWND hWndParent;
    DWORD dwWVTUIChoice;
    LPCWSTR PackageMoniker;
    LPCWSTR PackagePublisher;
    LPCWSTR PackageName;
    ULONG64 PackageVersion;
    BOOL PackageIsFramework;
} SAFER_CODE_PROPERTIES_V2, *PSAFER_CODE_PROPERTIES_V2;
typedef SAFER_CODE_PROPERTIES_V2 SAFER_CODE_PROPERTIES, *PSAFER_CODE_PROPERTIES;
#include <poppack.h>
typedef enum _SAFER_POLICY_INFO_CLASS
{
    SaferPolicyLevelList = 1,
    SaferPolicyEnableTransparentEnforcement,
    SaferPolicyDefaultLevel,
    SaferPolicyEvaluateUserScope,
    SaferPolicyScopeFlags,
    SaferPolicyDefaultLevelFlags,
    SaferPolicyAuthenticodeEnabled
} SAFER_POLICY_INFO_CLASS;
typedef enum _SAFER_OBJECT_INFO_CLASS
{
    SaferObjectLevelId = 1,
    SaferObjectScopeId,
    SaferObjectFriendlyName,
    SaferObjectDescription,
    SaferObjectBuiltin,
    SaferObjectDisallowed,
    SaferObjectDisableMaxPrivilege,
    SaferObjectInvertDeletedPrivileges,
    SaferObjectDeletedPrivileges,
    SaferObjectDefaultOwner,
    SaferObjectSidsToDisable,
    SaferObjectRestrictedSidsInverted,
    SaferObjectRestrictedSidsAdded,
    SaferObjectAllIdentificationGuids,
    SaferObjectSingleIdentification,
    SaferObjectExtendedError
} SAFER_OBJECT_INFO_CLASS;
#include <pshpack8.h>
typedef enum _SAFER_IDENTIFICATION_TYPES
{
    SaferIdentityDefault,
    SaferIdentityTypeImageName = 1,
    SaferIdentityTypeImageHash,
    SaferIdentityTypeUrlZone,
    SaferIdentityTypeCertificate
} SAFER_IDENTIFICATION_TYPES;
typedef struct _SAFER_IDENTIFICATION_HEADER
{
    SAFER_IDENTIFICATION_TYPES dwIdentificationType;
    DWORD cbStructSize;
    GUID IdentificationGuid;
    FILETIME lastModified;
} SAFER_IDENTIFICATION_HEADER, *PSAFER_IDENTIFICATION_HEADER;
typedef struct _SAFER_PATHNAME_IDENTIFICATION
{
    SAFER_IDENTIFICATION_HEADER header;
    WCHAR Description[SAFER_MAX_DESCRIPTION_SIZE];
    PWCHAR ImageName;
    DWORD dwSaferFlags;
} SAFER_PATHNAME_IDENTIFICATION, *PSAFER_PATHNAME_IDENTIFICATION;
typedef struct _SAFER_HASH_IDENTIFICATION
{
    SAFER_IDENTIFICATION_HEADER header;
    WCHAR Description[SAFER_MAX_DESCRIPTION_SIZE];
    WCHAR FriendlyName[SAFER_MAX_FRIENDLYNAME_SIZE];
    DWORD HashSize;
    BYTE ImageHash[SAFER_MAX_HASH_SIZE];
    ALG_ID HashAlgorithm;
    LARGE_INTEGER ImageSize;
    DWORD dwSaferFlags;
} SAFER_HASH_IDENTIFICATION, *PSAFER_HASH_IDENTIFICATION;
typedef struct _SAFER_HASH_IDENTIFICATION2
{
    SAFER_HASH_IDENTIFICATION hashIdentification;
    DWORD HashSize;
    BYTE ImageHash[SAFER_MAX_HASH_SIZE];
    ALG_ID HashAlgorithm;
} SAFER_HASH_IDENTIFICATION2, *PSAFER_HASH_IDENTIFICATION2;
typedef struct _SAFER_URLZONE_IDENTIFICATION
{
    SAFER_IDENTIFICATION_HEADER header;
    DWORD UrlZoneId;
    DWORD dwSaferFlags;
} SAFER_URLZONE_IDENTIFICATION, *PSAFER_URLZONE_IDENTIFICATION;
#include <poppack.h>
WINADVAPI
BOOL WINAPI
SaferGetPolicyInformation(
    _In_ DWORD dwScopeId,
    _In_ SAFER_POLICY_INFO_CLASS SaferPolicyInfoClass,
    _In_ DWORD InfoBufferSize,
    _Out_writes_bytes_(InfoBufferSize) PVOID InfoBuffer,
    _Out_ PDWORD InfoBufferRetSize,
    _Reserved_ LPVOID lpReserved
    );
WINADVAPI
BOOL WINAPI
SaferSetPolicyInformation(
    _In_ DWORD dwScopeId,
    _In_ SAFER_POLICY_INFO_CLASS SaferPolicyInfoClass,
    _In_ DWORD InfoBufferSize,
    _In_reads_bytes_(InfoBufferSize) PVOID InfoBuffer,
    _Reserved_ LPVOID lpReserved
    );
WINADVAPI
BOOL WINAPI
SaferCreateLevel(
    _In_ DWORD dwScopeId,
    _In_ DWORD dwLevelId,
    _In_ DWORD OpenFlags,
    _Outptr_ SAFER_LEVEL_HANDLE * pLevelHandle,
    _Reserved_ LPVOID lpReserved
    );
WINADVAPI
BOOL WINAPI
SaferCloseLevel(
    _In_ SAFER_LEVEL_HANDLE hLevelHandle
    );
WINADVAPI
BOOL WINAPI
SaferIdentifyLevel(
    _In_ DWORD dwNumProperties,
    _In_reads_opt_(dwNumProperties) PSAFER_CODE_PROPERTIES pCodeProperties,
    _Outptr_ SAFER_LEVEL_HANDLE * pLevelHandle,
    _In_opt_ LPVOID lpReserved
    );
WINADVAPI
BOOL WINAPI
SaferComputeTokenFromLevel(
    _In_ SAFER_LEVEL_HANDLE LevelHandle,
    _In_opt_ HANDLE InAccessToken,
    _Out_ PHANDLE OutAccessToken,
    _In_ DWORD dwFlags,
    _Inout_opt_ LPVOID lpReserved
    );
WINADVAPI
BOOL WINAPI
SaferGetLevelInformation(
        _In_ SAFER_LEVEL_HANDLE LevelHandle,
        _In_ SAFER_OBJECT_INFO_CLASS dwInfoType,
        _Out_writes_bytes_opt_(dwInBufferSize) LPVOID lpQueryBuffer,
        _In_ DWORD dwInBufferSize,
        _Out_ LPDWORD lpdwOutBufferSize
        );
WINADVAPI
BOOL WINAPI
SaferSetLevelInformation(
    _In_ SAFER_LEVEL_HANDLE LevelHandle,
    _In_ SAFER_OBJECT_INFO_CLASS dwInfoType,
    _In_reads_bytes_(dwInBufferSize) LPVOID lpQueryBuffer,
    _In_ DWORD dwInBufferSize
    );
WINADVAPI
BOOL WINAPI
SaferRecordEventLogEntry(
    _In_ SAFER_LEVEL_HANDLE hLevel,
    _In_ LPCWSTR szTargetPath,
    _Reserved_ LPVOID lpReserved
    );
WINADVAPI
BOOL WINAPI
SaferiIsExecutableFileType(
    _In_ LPCWSTR szFullPathname,
    _In_ BOOLEAN bFromShellExecute
    );
}
#endif
#pragma endregion
