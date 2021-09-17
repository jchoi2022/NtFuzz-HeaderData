       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DEFINE_GUID(CLSID_MicrosoftDS, 0xfe1290f0, 0xcfbd, 0x11cf, 0xa3, 0x30, 0x0, 0xaa, 0x0, 0xc1, 0x6e, 0x65);
DEFINE_GUID(CLSID_DsPropertyPages, 0xd45d530, 0x764b, 0x11d0, 0xa1, 0xca, 0x0, 0xaa, 0x0, 0xc1, 0x6e, 0x65);
DEFINE_GUID(CLSID_DsDomainTreeBrowser, 0x1698790a, 0xe2b4, 0x11d0, 0xb0, 0xb1, 0x00, 0xc0, 0x4f, 0xd8, 0xdc, 0xa6);
DEFINE_GUID(IID_IDsBrowseDomainTree, 0x7cabcf1e, 0x78f5, 0x11d2, 0x96, 0xc, 0x0, 0xc0, 0x4f, 0xa3, 0x1a, 0x86);
DEFINE_GUID(CLSID_DsDisplaySpecifier, 0x1ab4a8c0, 0x6a0b, 0x11d2, 0xad, 0x49, 0x0, 0xc0, 0x4f, 0xa3, 0x1a, 0x86);
DEFINE_GUID(CLSID_DsFolderProperties, 0x9e51e0d0, 0x6e0f, 0x11d2, 0x96, 0x1, 0x0, 0xc0, 0x4f, 0xa3, 0x1a, 0x86);
#include "activeds.h"
typedef struct
{
    DWORD dwFlags;
    DWORD dwProviderFlags;
    DWORD offsetName;
    DWORD offsetClass;
} DSOBJECT, * LPDSOBJECT;
typedef struct
{
    CLSID clsidNamespace;
    UINT cItems;
    DSOBJECT aObjects[1];
} DSOBJECTNAMES, * LPDSOBJECTNAMES;
typedef struct _DSDISPLAYSPECOPTIONS
{
    DWORD dwSize;
    DWORD dwFlags;
    DWORD offsetAttribPrefix;
    DWORD offsetUserName;
    DWORD offsetPassword;
    DWORD offsetServer;
    DWORD offsetServerConfigPath;
} DSDISPLAYSPECOPTIONS, * PDSDISPLAYSPECOPTIONS, * LPDSDISPLAYSPECOPTIONS;
typedef struct
{
    DWORD offsetString;
} DSPROPERTYPAGEINFO, * LPDSPROPERTYPAGEINFO;
typedef struct _DOMAINDESC
{
  LPWSTR pszName;
  LPWSTR pszPath;
  LPWSTR pszNCName;
  LPWSTR pszTrustParent;
  LPWSTR pszObjectClass;
  ULONG ulFlags;
  BOOL fDownLevel;
  struct _DOMAINDESC *pdChildList;
  struct _DOMAINDESC *pdNextSibling;
} DOMAIN_DESC, DOMAINDESC, * PDOMAIN_DESC, * LPDOMAINDESC;
typedef struct
{
  DWORD dsSize;
  DWORD dwCount;
  DOMAINDESC aDomains[1];
} DOMAIN_TREE, DOMAINTREE, * PDOMAIN_TREE, * LPDOMAINTREE;
DECLARE_INTERFACE_IID_(IDsBrowseDomainTree, IUnknown, "7cabcf1e-78f5-11d2-960c-00c04fa31a86")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(BrowseTo)(THIS_ HWND hwndParent, _Out_ LPWSTR *ppszTargetPath, _In_ DWORD dwFlags) PURE;
    STDMETHOD(GetDomains)(THIS_ PDOMAIN_TREE *ppDomainTree, DWORD dwFlags) PURE;
    STDMETHOD(FreeDomains)(THIS_ PDOMAIN_TREE *ppDomainTree) PURE;
    STDMETHOD(FlushCachedDomains)(THIS) PURE;
    STDMETHOD(SetComputer)(THIS_ LPCWSTR pszComputerName, LPCWSTR pszUserName, LPCWSTR pszPassword) PURE;
};
typedef HRESULT (CALLBACK *LPDSENUMATTRIBUTES)(LPARAM lParam, LPCWSTR pszAttributeName, LPCWSTR pszDisplayName, DWORD dwFlags);
typedef struct
{
    DWORD dwFlags;
    CLSID clsidWizardDialog;
    CLSID clsidWizardPrimaryPage;
    DWORD cWizardExtensions;
    CLSID aWizardExtensions[1];
} DSCLASSCREATIONINFO, * LPDSCLASSCREATIONINFO;
DECLARE_INTERFACE_IID_(IDsDisplaySpecifier, IUnknown, "1ab4a8c0-6a0b-11d2-ad49-00c04fa31a86")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
    STDMETHOD(SetServer)(THIS_ LPCWSTR pszServer, LPCWSTR pszUserName, LPCWSTR pszPassword, DWORD dwFlags) PURE;
    STDMETHOD(SetLanguageID)(THIS_ LANGID langid) PURE;
    STDMETHOD(GetDisplaySpecifier)(THIS_ LPCWSTR pszObjectClass, REFIID riid, void **ppv) PURE;
    STDMETHOD(GetIconLocation)(THIS_ LPCWSTR pszObjectClass, _In_ DWORD dwFlags, _Out_writes_(cchBuffer) LPWSTR pszBuffer, _In_ INT cchBuffer, _Out_ INT *presid) PURE;
    STDMETHOD_(HICON, GetIcon)(THIS_ LPCWSTR pszObjectClass, DWORD dwFlags, INT cxIcon, INT cyIcon) PURE;
    STDMETHOD(GetFriendlyClassName)(THIS_ LPCWSTR pszObjectClass, _Out_writes_(cchBuffer) LPWSTR pszBuffer, _In_ INT cchBuffer) PURE;
    STDMETHOD(GetFriendlyAttributeName)(THIS_ LPCWSTR pszObjectClass, _In_ LPCWSTR pszAttributeName, _Out_writes_(cchBuffer) LPWSTR pszBuffer, _In_ UINT cchBuffer) PURE;
    STDMETHOD_(BOOL, IsClassContainer)(THIS_ LPCWSTR pszObjectClass, LPCWSTR pszADsPath, DWORD dwFlags) PURE;
    STDMETHOD(GetClassCreationInfo)(THIS_ LPCWSTR pszObjectClass, LPDSCLASSCREATIONINFO* ppdscci) PURE;
    STDMETHOD(EnumClassAttributes)(THIS_ LPCWSTR pszObjectClass, LPDSENUMATTRIBUTES pcbEnum, LPARAM lParam) PURE;
    STDMETHOD_(ADSTYPE, GetAttributeADsType)(THIS_ LPCWSTR pszAttributeName) PURE;
};
typedef struct
{
    DWORD cbStruct;
    HWND hwndOwner;
    LPCWSTR pszCaption;
    LPCWSTR pszTitle;
    LPCWSTR pszRoot;
    LPWSTR pszPath;
    ULONG cchPath;
    DWORD dwFlags;
    BFFCALLBACK pfnCallback;
    LPARAM lParam;
    DWORD dwReturnFormat;
    LPCWSTR pUserName;
    LPCWSTR pPassword;
    LPWSTR pszObjectClass;
    ULONG cchObjectClass;
} DSBROWSEINFOW, *PDSBROWSEINFOW;
typedef struct
{
    DWORD cbStruct;
    HWND hwndOwner;
    LPCSTR pszCaption;
    LPCSTR pszTitle;
    LPCWSTR pszRoot;
    LPWSTR pszPath;
    ULONG cchPath;
    DWORD dwFlags;
    BFFCALLBACK pfnCallback;
    LPARAM lParam;
    DWORD dwReturnFormat;
    LPCWSTR pUserName;
    LPCWSTR pPassword;
    LPWSTR pszObjectClass;
    ULONG cchObjectClass;
} DSBROWSEINFOA, *PDSBROWSEINFOA;
typedef struct
{
    DWORD cbStruct;
    LPCWSTR pszADsPath;
    LPCWSTR pszClass;
    DWORD dwMask;
    DWORD dwState;
    DWORD dwStateMask;
    WCHAR szDisplayName[DSB_MAX_DISPLAYNAME_CHARS];
    WCHAR szIconLocation[MAX_PATH];
    INT iIconResID;
} DSBITEMW, *PDSBITEMW;
typedef struct
{
    DWORD cbStruct;
    LPCWSTR pszADsPath;
    LPCWSTR pszClass;
    DWORD dwMask;
    DWORD dwState;
    DWORD dwStateMask;
    CHAR szDisplayName[DSB_MAX_DISPLAYNAME_CHARS];
    CHAR szIconLocation[MAX_PATH];
    INT iIconResID;
} DSBITEMA, *PDSBITEMA;
STDAPI_(int) DsBrowseForContainerW(_Inout_ PDSBROWSEINFOW pInfo);
STDAPI_(int) DsBrowseForContainerA(_Inout_ PDSBROWSEINFOA pInfo);
STDAPI_(HICON) DsGetIcon(DWORD dwFlags, LPCWSTR pszObjectClass, INT cxImage, INT cyImage);
STDAPI DsGetFriendlyClassName(LPCWSTR pszObjectClass, _Out_writes_(cchBuffer) LPWSTR pszBuffer, UINT cchBuffer);
struct __declspec(uuid("1ab4a8c0-6a0b-11d2-ad49-00c04fa31a86")) IDsDisplaySpecifier;
#endif
#pragma endregion
