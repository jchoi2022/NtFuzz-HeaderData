DEFINE_GUID(CLSID_GPESnapIn, 0x8fc0b734, 0xa0e1, 0x11d1, 0xa7, 0xd3, 0x0, 0x0, 0xf8, 0x75, 0x71, 0xe3);
DEFINE_GUID(NODEID_Machine, 0x8fc0b737, 0xa0e1, 0x11d1, 0xa7, 0xd3, 0x0, 0x0, 0xf8, 0x75, 0x71, 0xe3);
DEFINE_GUID(NODEID_MachineSWSettings, 0x8fc0b73a, 0xa0e1, 0x11d1, 0xa7, 0xd3, 0x0, 0x0, 0xf8, 0x75, 0x71, 0xe3);
DEFINE_GUID(NODEID_User, 0x8fc0b738, 0xa0e1, 0x11d1, 0xa7, 0xd3, 0x0, 0x0, 0xf8, 0x75, 0x71, 0xe3);
DEFINE_GUID(NODEID_UserSWSettings, 0x8fc0b73c, 0xa0e1, 0x11d1, 0xa7, 0xd3, 0x0, 0x0, 0xf8, 0x75, 0x71, 0xe3);
DEFINE_GUID(IID_IGPEInformation, 0x8fc0b735, 0xa0e1, 0x11d1, 0xa7, 0xd3, 0x0, 0x0, 0xf8, 0x75, 0x71, 0xe3);
DEFINE_GUID(CLSID_GroupPolicyObject, 0xea502722, 0xa23d, 0x11d1, 0xa7, 0xd3, 0x0, 0x0, 0xf8, 0x75, 0x71, 0xe3);
DEFINE_GUID(IID_IGroupPolicyObject, 0xea502723, 0xa23d, 0x11d1, 0xa7, 0xd3, 0x0, 0x0, 0xf8, 0x75, 0x71, 0xe3);
DEFINE_GUID(CLSID_RSOPSnapIn, 0x6dc3804b, 0x7212, 0x458d, 0xad, 0xb0, 0x9a, 0x07, 0xe2, 0xae, 0x1f, 0xa2);
DEFINE_GUID(NODEID_RSOPMachine, 0xbd4c1a2e, 0x0b7a, 0x4a62, 0xa6, 0xb0, 0xc0, 0x57, 0x75, 0x39, 0xc9, 0x7e);
DEFINE_GUID(NODEID_RSOPMachineSWSettings, 0x6a76273e, 0xeb8e, 0x45db, 0x94, 0xc5, 0x25, 0x66, 0x3a, 0x5f, 0x2c, 0x1a);
DEFINE_GUID(NODEID_RSOPUser, 0xab87364f, 0x0cec, 0x4cd8, 0x9b, 0xf8, 0x89, 0x8f, 0x34, 0x62, 0x8f, 0xb8);
DEFINE_GUID(NODEID_RSOPUserSWSettings, 0xe52c5ce3, 0xfd27, 0x4402, 0x84, 0xde, 0xd9, 0xa5, 0xf2, 0x85, 0x89, 0x10);
DEFINE_GUID(IID_IRSOPInformation, 0x9a5a81b5, 0xd9c7, 0x49ef, 0x9d, 0x11, 0xdd, 0xf5, 0x09, 0x68, 0xc4, 0x8d);
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
#include <objbase.h>
typedef enum _GROUP_POLICY_OBJECT_TYPE {
    GPOTypeLocal = 0,
    GPOTypeRemote,
    GPOTypeDS,
    GPOTypeLocalUser,
    GPOTypeLocalGroup
} GROUP_POLICY_OBJECT_TYPE, *PGROUP_POLICY_OBJECT_TYPE;
typedef enum _GROUP_POLICY_HINT_TYPE {
    GPHintUnknown = 0,
    GPHintMachine,
    GPHintSite,
    GPHintDomain,
    GPHintOrganizationalUnit,
} GROUP_POLICY_HINT_TYPE, *PGROUP_POLICY_HINT_TYPE;
DECLARE_INTERFACE_(IGPEInformation, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(GetName) (THIS_ _Out_writes_(cchMaxLength) LPOLESTR pszName, int cchMaxLength) PURE;
    STDMETHOD(GetDisplayName) (THIS_ _Out_writes_(cchMaxLength) LPOLESTR pszName, int cchMaxLength) PURE;
    STDMETHOD(GetRegistryKey) (THIS_ DWORD dwSection, HKEY *hKey) PURE;
    STDMETHOD(GetDSPath) (THIS_ DWORD dwSection, _Out_writes_(cchMaxPath) LPOLESTR pszPath, int cchMaxPath) PURE;
    STDMETHOD(GetFileSysPath) (THIS_ DWORD dwSection, _Out_writes_(cchMaxPath) LPOLESTR pszPath, int cchMaxPath) PURE;
    STDMETHOD(GetOptions) (THIS_ DWORD *dwOptions) PURE;
    STDMETHOD(GetType) (THIS_ GROUP_POLICY_OBJECT_TYPE *gpoType) PURE;
    STDMETHOD(GetHint) (THIS_ GROUP_POLICY_HINT_TYPE *gpHint) PURE;
    STDMETHOD(PolicyChanged) (THIS_ BOOL bMachine, BOOL bAdd, GUID *pGuidExtension, GUID *pGuidSnapin ) PURE;
};
typedef IGPEInformation *LPGPEINFORMATION;
DECLARE_INTERFACE_(IGroupPolicyObject, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(New) (THIS_ _In_ LPOLESTR pszDomainName, _In_opt_ LPOLESTR pszDisplayName,
                    DWORD dwFlags) PURE;
    STDMETHOD(OpenDSGPO) (THIS_ _In_ LPOLESTR pszPath, DWORD dwFlags) PURE;
    STDMETHOD(OpenLocalMachineGPO) (THIS_ DWORD dwFlags) PURE;
    STDMETHOD(OpenRemoteMachineGPO) (THIS_ _In_ LPOLESTR pszComputerName, DWORD dwFlags) PURE;
    STDMETHOD(Save) (THIS_ BOOL bMachine, BOOL bAdd, GUID *pGuidExtension, GUID *pGuid ) PURE;
    STDMETHOD(Delete) (THIS) PURE;
    STDMETHOD(GetName) (THIS_ _Out_writes_(cchMaxLength) LPOLESTR pszName, int cchMaxLength) PURE;
    STDMETHOD(GetDisplayName) (THIS_ _Out_writes_(cchMaxLength) LPOLESTR pszName, int cchMaxLength) PURE;
    STDMETHOD(SetDisplayName) (THIS_ _In_ LPOLESTR pszName) PURE;
    STDMETHOD(GetPath) (THIS_ _Out_writes_(cchMaxLength) LPOLESTR pszPath, int cchMaxLength) PURE;
    STDMETHOD(GetDSPath) (THIS_ DWORD dwSection, _Out_writes_(cchMaxPath) LPOLESTR pszPath, int cchMaxPath) PURE;
    STDMETHOD(GetFileSysPath) (THIS_ DWORD dwSection, _Out_writes_(cchMaxPath) LPOLESTR pszPath, int cchMaxPath) PURE;
    STDMETHOD(GetRegistryKey) (THIS_ DWORD dwSection, HKEY *hKey) PURE;
    STDMETHOD(GetOptions) (THIS_ DWORD *dwOptions) PURE;
    STDMETHOD(SetOptions) (THIS_ DWORD dwOptions, DWORD dwMask) PURE;
    STDMETHOD(GetType) (THIS_ GROUP_POLICY_OBJECT_TYPE *gpoType) PURE;
    STDMETHOD(GetMachineName) (THIS_ _Out_writes_(cchMaxLength) LPOLESTR pszName, int cchMaxLength) PURE;
    STDMETHOD(GetPropertySheetPages) (THIS_ HPROPSHEETPAGE **hPages, UINT *uPageCount) PURE;
};
typedef IGroupPolicyObject *LPGROUPPOLICYOBJECT;
DECLARE_INTERFACE_(IRSOPInformation, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, LPVOID * ppvObj) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(GetNamespace) (THIS_ DWORD dwSection, _Out_writes_(cchMaxLength) LPOLESTR pszName, int cchMaxLength) PURE;
    STDMETHOD(GetFlags) (THIS_ DWORD * pdwFlags) PURE;
    STDMETHOD(GetEventLogEntryText) (THIS_ _In_ LPOLESTR pszEventSource, _In_ LPOLESTR pszEventLogName,
                                           _In_ LPOLESTR pszEventTime, DWORD dwEventID, _Outptr_ LPOLESTR *ppszText) PURE;
};
typedef IRSOPInformation *LPRSOPINFORMATION;
GPEDITAPI
HRESULT
WINAPI
CreateGPOLink(
    _In_ LPOLESTR lpGPO,
    _In_ LPOLESTR lpContainer,
         BOOL fHighPriority);
GPEDITAPI
HRESULT
WINAPI
DeleteGPOLink(
    _In_ LPOLESTR lpGPO,
    _In_ LPOLESTR lpContainer);
GPEDITAPI
HRESULT
WINAPI
DeleteAllGPOLinks(
    _In_ LPOLESTR lpContainer);
typedef struct tag_GPOBROWSEINFO
{
    DWORD dwSize;
    DWORD dwFlags;
    HWND hwndOwner;
    LPOLESTR lpTitle;
    LPOLESTR lpInitialOU;
    _Field_size_(dwDSPathSize) LPOLESTR lpDSPath;
    DWORD dwDSPathSize;
    _Field_size_bytes_( dwNameSize) LPOLESTR lpName;
    DWORD dwNameSize;
    GROUP_POLICY_OBJECT_TYPE gpoType;
    GROUP_POLICY_HINT_TYPE gpoHint;
} GPOBROWSEINFO, *LPGPOBROWSEINFO;
GPEDITAPI
HRESULT
WINAPI
BrowseForGPO(
    LPGPOBROWSEINFO lpBrowseInfo);
GPEDITAPI
HRESULT
WINAPI
ImportRSoPData(
    _In_ LPOLESTR lpNameSpace,
    _In_ LPOLESTR lpFileName);
GPEDITAPI
HRESULT
WINAPI
ExportRSoPData(
    _In_ LPOLESTR lpNameSpace,
    _In_ LPOLESTR lpFileName);
}
#endif
#pragma endregion
