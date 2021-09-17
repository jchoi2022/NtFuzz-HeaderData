#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <objbase.h>
#include <commctrl.h>
#include <accctrl.h>
#include <authz.h>
extern "C" {
typedef struct _SI_OBJECT_INFO
{
    DWORD dwFlags;
    HINSTANCE hInstance;
    LPWSTR pszServerName;
    LPWSTR pszObjectName;
    LPWSTR pszPageTitle;
    GUID guidObjectType;
} SI_OBJECT_INFO, *PSI_OBJECT_INFO;
typedef struct _SI_ACCESS
{
    const GUID *pguid;
    ACCESS_MASK mask;
    LPCWSTR pszName;
    DWORD dwFlags;
} SI_ACCESS, *PSI_ACCESS;
typedef struct _SI_INHERIT_TYPE
{
    const GUID *pguid;
    ULONG dwFlags;
    LPCWSTR pszName;
} SI_INHERIT_TYPE, *PSI_INHERIT_TYPE;
typedef enum _SI_PAGE_TYPE
{
    SI_PAGE_PERM=0,
    SI_PAGE_ADVPERM,
    SI_PAGE_AUDIT,
    SI_PAGE_OWNER,
    SI_PAGE_EFFECTIVE,
    SI_PAGE_TAKEOWNERSHIP,
    SI_PAGE_SHARE,
} SI_PAGE_TYPE;
typedef enum _SI_PAGE_ACTIVATED
{
    SI_SHOW_DEFAULT=0,
    SI_SHOW_PERM_ACTIVATED,
    SI_SHOW_AUDIT_ACTIVATED,
    SI_SHOW_OWNER_ACTIVATED,
    SI_SHOW_EFFECTIVE_ACTIVATED,
    SI_SHOW_SHARE_ACTIVATED,
    SI_SHOW_CENTRAL_POLICY_ACTIVATED,
} SI_PAGE_ACTIVATED;
DECLARE_INTERFACE_IID_(ISecurityInformation, IUnknown, "965FC360-16FF-11d0-91CB-00AA00BBB723")
{
    STDMETHOD(QueryInterface)(THIS_ _In_ REFIID riid, _Outptr_ void **ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(GetObjectInformation) (THIS_ PSI_OBJECT_INFO pObjectInfo ) PURE;
    STDMETHOD(GetSecurity) (THIS_ SECURITY_INFORMATION RequestedInformation,
                            PSECURITY_DESCRIPTOR *ppSecurityDescriptor,
                            BOOL fDefault ) PURE;
    STDMETHOD(SetSecurity) (THIS_ SECURITY_INFORMATION SecurityInformation,
                            PSECURITY_DESCRIPTOR pSecurityDescriptor ) PURE;
    STDMETHOD(GetAccessRights) (THIS_ const GUID* pguidObjectType,
                                DWORD dwFlags,
                                PSI_ACCESS *ppAccess,
                                ULONG *pcAccesses,
                                ULONG *piDefaultAccess ) PURE;
    STDMETHOD(MapGeneric) (THIS_ const GUID *pguidObjectType,
                           UCHAR *pAceFlags,
                           ACCESS_MASK *pMask) PURE;
    STDMETHOD(GetInheritTypes) (THIS_ PSI_INHERIT_TYPE *ppInheritTypes,
                                ULONG *pcInheritTypes ) PURE;
    STDMETHOD(PropertySheetPageCallback)(THIS_ HWND hwnd, UINT uMsg, SI_PAGE_TYPE uPage ) PURE;
};
typedef ISecurityInformation *LPSECURITYINFO;
DECLARE_INTERFACE_IID_(ISecurityInformation2, IUnknown, "c3ccfdb4-6f88-11d2-a3ce-00c04fb1782a")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release) (THIS) PURE;
    STDMETHOD_(BOOL,IsDaclCanonical) (THIS_ IN PACL pDacl) PURE;
    STDMETHOD(LookupSids) (THIS_ IN ULONG cSids, IN PSID *rgpSids, OUT LPDATAOBJECT *ppdo) PURE;
};
typedef ISecurityInformation2 *LPSECURITYINFO2;
typedef struct _SID_INFO
{
    PSID pSid;
    PWSTR pwzCommonName;
    PWSTR pwzClass;
    PWSTR pwzUPN;
} SID_INFO, *PSID_INFO;
typedef struct _SID_INFO_LIST
{
    ULONG cItems;
    SID_INFO aSidInfo[ANYSIZE_ARRAY];
} SID_INFO_LIST, *PSID_INFO_LIST;
DECLARE_INTERFACE_IID_(IEffectivePermission, IUnknown, "3853DC76-9F35-407c-88A1-D19344365FBC")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release) (THIS) PURE;
    STDMETHOD(GetEffectivePermission) ( THIS_ const GUID* pguidObjectType,
                                         PSID pUserSid,
                                         LPCWSTR pszServerName,
                                         PSECURITY_DESCRIPTOR pSD,
                                         POBJECT_TYPE_LIST *ppObjectTypeList,
                                         ULONG *pcObjectTypeListLength,
                                         PACCESS_MASK *ppGrantedAccessList,
                                         ULONG *pcGrantedAccessListLength) PURE;
};
typedef IEffectivePermission *LPEFFECTIVEPERMISSION;
DECLARE_INTERFACE_IID_(ISecurityObjectTypeInfo, IUnknown, "FC3066EB-79EF-444b-9111-D18A75EBF2FA")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release) (THIS) PURE;
    STDMETHOD(GetInheritSource)(SECURITY_INFORMATION si,
                                PACL pACL,
                                PINHERITED_FROM *ppInheritArray) PURE;
};
typedef ISecurityObjectTypeInfo *LPSecurityObjectTypeInfo;
DECLARE_INTERFACE_IID_(ISecurityInformation3, IUnknown, "E2CDC9CC-31BD-4f8f-8C8B-B641AF516A1A")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release) (THIS) PURE;
    STDMETHOD(GetFullResourceName) (THIS_ _Outptr_ LPWSTR *ppszResourceName) PURE;
    STDMETHOD(OpenElevatedEditor) (THIS_ _In_ HWND hWnd, _In_ SI_PAGE_TYPE uPage) PURE;
};
typedef ISecurityInformation3 *LPSECURITYINFO3;
typedef struct _SECURITY_OBJECT
{
    PWSTR pwszName;
    _Field_size_bytes_ (cbData) PVOID pData;
    DWORD cbData;
    _Field_size_bytes_ (cbData2) PVOID pData2;
    DWORD cbData2;
    DWORD Id;
    BOOLEAN fWellKnown;
} SECURITY_OBJECT, *PSECURITY_OBJECT;
typedef struct _EFFPERM_RESULT_LIST
{
    BOOLEAN fEvaluated;
    ULONG cObjectTypeListLength;
    _Field_size_(cObjectTypeListLength)
    OBJECT_TYPE_LIST *pObjectTypeList;
    _Field_size_(cObjectTypeListLength)
    ACCESS_MASK *pGrantedAccessList;
} EFFPERM_RESULT_LIST, *PEFFPERM_RESULT_LIST;
DECLARE_INTERFACE_IID_(ISecurityInformation4, IUnknown, "EA961070-CD14-4621-ACE4-F63C03E583E4")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release) (THIS) PURE;
    STDMETHOD(GetSecondarySecurity) (THIS_
                                     _Outptr_result_buffer_(*pSecurityObjectCount) PSECURITY_OBJECT *pSecurityObjects,
                                     _Out_ PULONG pSecurityObjectCount) PURE;
};
typedef ISecurityInformation4 *LPSECURITYINFO4;
DECLARE_INTERFACE_IID_(IEffectivePermission2, IUnknown, "941FABCA-DD47-4FCA-90BB-B0E10255F20D")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release) (THIS) PURE;
    STDMETHOD(ComputeEffectivePermissionWithSecondarySecurity) (THIS_
        _In_ PSID pSid,
        _In_opt_ PSID pDeviceSid,
        _In_ PCWSTR pszServerName,
        _Inout_updates_(dwSecurityObjectCount) PSECURITY_OBJECT pSecurityObjects,
        _In_ DWORD dwSecurityObjectCount,
        _In_opt_ PTOKEN_GROUPS pUserGroups,
        _When_(pUserGroups != NULL && *pAuthzUserGroupsOperations != AUTHZ_SID_OPERATION_REPLACE_ALL, _In_reads_(pUserGroups->GroupCount))
        _In_opt_ PAUTHZ_SID_OPERATION pAuthzUserGroupsOperations,
        _In_opt_ PTOKEN_GROUPS pDeviceGroups,
        _When_(pDeviceGroups != NULL && *pAuthzDeviceGroupsOperations != AUTHZ_SID_OPERATION_REPLACE_ALL, _In_reads_(pDeviceGroups->GroupCount))
        _In_opt_ PAUTHZ_SID_OPERATION pAuthzDeviceGroupsOperations,
        _In_opt_ PAUTHZ_SECURITY_ATTRIBUTES_INFORMATION pAuthzUserClaims,
        _When_(pAuthzUserClaims != NULL && *pAuthzUserClaimsOperations != AUTHZ_SECURITY_ATTRIBUTE_OPERATION_REPLACE_ALL, _In_reads_(pAuthzUserClaims->AttributeCount))
        _In_opt_ PAUTHZ_SECURITY_ATTRIBUTE_OPERATION pAuthzUserClaimsOperations,
        _In_opt_ PAUTHZ_SECURITY_ATTRIBUTES_INFORMATION pAuthzDeviceClaims,
        _When_(pAuthzDeviceClaims != NULL && *pAuthzDeviceClaimsOperations != AUTHZ_SECURITY_ATTRIBUTE_OPERATION_REPLACE_ALL, _In_reads_(pAuthzDeviceClaims->AttributeCount))
        _In_opt_ PAUTHZ_SECURITY_ATTRIBUTE_OPERATION pAuthzDeviceClaimsOperations,
        _Inout_updates_(dwSecurityObjectCount) PEFFPERM_RESULT_LIST pEffpermResultLists);
};
typedef IEffectivePermission2 *LPEFFECTIVEPERMISSION2;
EXTERN_GUID(IID_ISecurityInformation, 0x965fc360, 0x16ff, 0x11d0, 0x91, 0xcb, 0x0, 0xaa, 0x0, 0xbb, 0xb7, 0x23);
EXTERN_GUID(IID_ISecurityInformation2, 0xc3ccfdb4, 0x6f88, 0x11d2, 0xa3, 0xce, 0x0, 0xc0, 0x4f, 0xb1, 0x78, 0x2a);
EXTERN_GUID(IID_IEffectivePermission, 0x3853dc76, 0x9f35, 0x407c, 0x88, 0xa1, 0xd1, 0x93, 0x44, 0x36, 0x5f, 0xbc);
EXTERN_GUID(IID_ISecurityObjectTypeInfo, 0xfc3066eb, 0x79ef, 0x444b, 0x91, 0x11, 0xd1, 0x8a, 0x75, 0xeb, 0xf2, 0xfa);
EXTERN_GUID(IID_ISecurityInformation3, 0xe2cdc9cc, 0x31bd, 0x4f8f, 0x8c, 0x8b, 0xb6, 0x41, 0xaf, 0x51, 0x6a, 0x1a);
EXTERN_GUID(IID_ISecurityInformation4, 0xea961070, 0xcd14, 0x4621, 0xac, 0xe4, 0xf6, 0x3c, 0x3, 0xe5, 0x83, 0xe4);
EXTERN_GUID(IID_IEffectivePermission2, 0x941fabca, 0xdd47, 0x4fca, 0x90, 0xbb, 0xb0, 0xe1, 0x2, 0x55, 0xf2, 0xd);
HPROPSHEETPAGE ACLUIAPI CreateSecurityPage(_In_ LPSECURITYINFO psi );
BOOL ACLUIAPI EditSecurity(_In_ HWND hwndOwner,
                           _In_ LPSECURITYINFO psi );
HRESULT ACLUIAPI EditSecurityAdvanced(_In_ HWND hwndOwner,
                                      _In_ LPSECURITYINFO psi,
                                      _In_ SI_PAGE_TYPE uSIPage );
}
#endif
#pragma endregion
