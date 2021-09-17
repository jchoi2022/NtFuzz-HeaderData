#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <ole2.h>
#include <shlguid.h>
#include <shtypes.h>
#include <shobjidl_core.h>
extern "C" {
#include <pshpack1.h>
_Check_return_
SHSTDAPI SHGetMalloc(_Outptr_ IMalloc **ppMalloc);
SHSTDAPI_(void *) SHAlloc(SIZE_T cb);
SHSTDAPI_(void) SHFree(_In_opt_ void * pv);
DECLARE_INTERFACE_IID_(IExtractIconA, IUnknown, "000214eb-0000-0000-c000-000000000046")
{
    STDMETHOD(GetIconLocation)(THIS_
                               UINT uFlags,
          _Out_writes_(cchMax) PSTR pszIconFile,
                               UINT cchMax,
                         _Out_ int * piIndex,
                         _Out_ UINT * pwFlags) PURE;
    STDMETHOD(Extract)(THIS_
                 _In_ PCSTR pszFile,
                       UINT nIconIndex,
             _Out_opt_ HICON *phiconLarge,
             _Out_opt_ HICON *phiconSmall,
                       UINT nIconSize) PURE;
};
typedef IExtractIconA * LPEXTRACTICONA;
DECLARE_INTERFACE_IID_(IExtractIconW, IUnknown, "000214fa-0000-0000-c000-000000000046")
{
    STDMETHOD(GetIconLocation)(THIS_
                               UINT uFlags,
          _Out_writes_(cchMax) PWSTR pszIconFile,
                               UINT cchMax,
                         _Out_ int * piIndex,
                         _Out_ UINT * pwFlags) PURE;
    STDMETHOD(Extract)(THIS_
                  _In_ PCWSTR pszFile,
                       UINT nIconIndex,
             _Out_opt_ HICON *phiconLarge,
             _Out_opt_ HICON *phiconSmall,
                       UINT nIconSize) PURE;
};
typedef IExtractIconW * LPEXTRACTICONW;
DECLARE_INTERFACE_IID_(IShellIconOverlayManager, IUnknown, "f10b5e34-dd3b-42a7-aa7d-2f4ec54bb09b")
{
    STDMETHOD(GetFileOverlayInfo)(THIS_ _In_ PCWSTR pwszPath, DWORD dwAttrib, _Out_ int * pIndex, DWORD dwflags) PURE;
    STDMETHOD(GetReservedOverlayInfo)(THIS_ _In_opt_ PCWSTR pwszPath, DWORD dwAttrib, _Out_ int * pIndex, DWORD dwflags, int iReservedID) PURE;
    STDMETHOD(RefreshOverlayImages)(THIS_ DWORD dwFlags) PURE;
    STDMETHOD(LoadNonloadedOverlayIdentifiers)(THIS) PURE;
    STDMETHOD(OverlayIndexFromImageIndex)(THIS_ int iImage, _Out_ int * piIndex, BOOL fAdd) PURE;
};
DECLARE_INTERFACE_IID_(IShellIconOverlay, IUnknown, "7d688a70-c613-11d0-999b-00c04fd655e1")
{
    STDMETHOD(GetOverlayIndex)(THIS_ _In_ PCUITEMID_CHILD pidl, _Inout_ int * pIndex) PURE;
    STDMETHOD(GetOverlayIconIndex)(THIS_ _In_ PCUITEMID_CHILD pidl, _Inout_ int * pIconIndex) PURE;
};
SHSTDAPI_(int) SHGetIconOverlayIndexA(_In_opt_ LPCSTR pszIconPath, int iIconIndex);
SHSTDAPI_(int) SHGetIconOverlayIndexW(_In_opt_ LPCWSTR pszIconPath, int iIconIndex);
typedef enum {
    SLDF_DEFAULT = 0x00000000,
    SLDF_HAS_ID_LIST = 0x00000001,
    SLDF_HAS_LINK_INFO = 0x00000002,
    SLDF_HAS_NAME = 0x00000004,
    SLDF_HAS_RELPATH = 0x00000008,
    SLDF_HAS_WORKINGDIR = 0x00000010,
    SLDF_HAS_ARGS = 0x00000020,
    SLDF_HAS_ICONLOCATION = 0x00000040,
    SLDF_UNICODE = 0x00000080,
    SLDF_FORCE_NO_LINKINFO = 0x00000100,
    SLDF_HAS_EXP_SZ = 0x00000200,
    SLDF_RUN_IN_SEPARATE = 0x00000400,
    SLDF_HAS_DARWINID = 0x00001000,
    SLDF_RUNAS_USER = 0x00002000,
    SLDF_HAS_EXP_ICON_SZ = 0x00004000,
    SLDF_NO_PIDL_ALIAS = 0x00008000,
    SLDF_FORCE_UNCNAME = 0x00010000,
    SLDF_RUN_WITH_SHIMLAYER = 0x00020000,
    SLDF_FORCE_NO_LINKTRACK = 0x00040000,
    SLDF_ENABLE_TARGET_METADATA = 0x00080000,
    SLDF_DISABLE_LINK_PATH_TRACKING = 0x00100000,
    SLDF_DISABLE_KNOWNFOLDER_RELATIVE_TRACKING = 0x00200000,
    SLDF_NO_KF_ALIAS = 0x00400000,
    SLDF_ALLOW_LINK_TO_LINK = 0x00800000,
    SLDF_UNALIAS_ON_SAVE = 0x01000000,
    SLDF_PREFER_ENVIRONMENT_PATH = 0x02000000,
    SLDF_KEEP_LOCAL_IDLIST_FOR_UNC_TARGET = 0x04000000,
    SLDF_PERSIST_VOLUME_ID_RELATIVE = 0x08000000,
    SLDF_VALID = 0x0FFFF7FF,
    SLDF_RESERVED = (int) 0x80000000,
} SHELL_LINK_DATA_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(SHELL_LINK_DATA_FLAGS)
typedef struct tagDATABLOCKHEADER
{
    DWORD cbSize;
    DWORD dwSignature;
} DATABLOCK_HEADER, *LPDATABLOCK_HEADER, *LPDBLIST;
typedef struct {
    DATABLOCK_HEADER dbh;
    WORD wFillAttribute;
    WORD wPopupFillAttribute;
    COORD dwScreenBufferSize;
    COORD dwWindowSize;
    COORD dwWindowOrigin;
    DWORD nFont;
    DWORD nInputBufferSize;
    COORD dwFontSize;
    UINT uFontFamily;
    UINT uFontWeight;
    WCHAR FaceName[LF_FACESIZE];
    UINT uCursorSize;
    BOOL bFullScreen;
    BOOL bQuickEdit;
    BOOL bInsertMode;
    BOOL bAutoPosition;
    UINT uHistoryBufferSize;
    UINT uNumberOfHistoryBuffers;
    BOOL bHistoryNoDup;
    COLORREF ColorTable[ 16 ];
} NT_CONSOLE_PROPS, *LPNT_CONSOLE_PROPS;
typedef struct {
    DATABLOCK_HEADER dbh;
    UINT uCodePage;
} NT_FE_CONSOLE_PROPS, *LPNT_FE_CONSOLE_PROPS;
typedef struct {
    DATABLOCK_HEADER dbh;
    CHAR szDarwinID[MAX_PATH];
    WCHAR szwDarwinID[MAX_PATH];
} EXP_DARWIN_LINK, *LPEXP_DARWIN_LINK;
typedef struct
{
    DWORD cbSize;
    DWORD dwSignature;
    DWORD idSpecialFolder;
    DWORD cbOffset;
} EXP_SPECIAL_FOLDER, *LPEXP_SPECIAL_FOLDER;
typedef struct
{
    DWORD cbSize;
    DWORD dwSignature;
    CHAR szTarget[ MAX_PATH ];
    WCHAR swzTarget[ MAX_PATH ];
} EXP_SZ_LINK, *LPEXP_SZ_LINK;
typedef struct
{
    DWORD cbSize;
    DWORD dwSignature;
    BYTE abPropertyStorage[1];
} EXP_PROPERTYSTORAGE;
DECLARE_INTERFACE_IID_(IShellExecuteHookA, IUnknown, "000214f5-0000-0000-c000-000000000046")
{
    STDMETHOD(Execute)(THIS_ _Inout_ LPSHELLEXECUTEINFOA pei) PURE;
};
DECLARE_INTERFACE_IID_(IShellExecuteHookW, IUnknown, "000214fb-0000-0000-c000-000000000046")
{
    STDMETHOD(Execute)(THIS_ _Inout_ LPSHELLEXECUTEINFOW pei) PURE;
};
DECLARE_INTERFACE_IID_(IURLSearchHook, IUnknown, "ac60f6a0-0fd9-11d0-99cb-00c04fd64497")
{
    STDMETHOD(Translate)(THIS_ _Out_writes_(cchBufferSize) PWSTR pwszSearchURL, DWORD cchBufferSize) PURE;
};
DECLARE_INTERFACE_IID_(ISearchContext, IUnknown, "09F656A2-41AF-480C-88F7-16CC0D164615")
{
    STDMETHOD(GetSearchUrl)(THIS_ _Outptr_ BSTR * pbstrSearchUrl) PURE;
    STDMETHOD(GetSearchText)(THIS_ _Outptr_ BSTR * pbstrSearchText) PURE;
    STDMETHOD(GetSearchStyle)(THIS_ _Out_ DWORD * pdwSearchStyle) PURE;
};
DECLARE_INTERFACE_IID_(IURLSearchHook2, IURLSearchHook, "5ee44da4-6d32-46e3-86bc-07540dedd0e0")
{
    STDMETHOD(TranslateWithSearchContext)(THIS_ _Out_writes_(cchBufferSize) PWSTR pwszSearchURL, DWORD cchBufferSize, _In_opt_ ISearchContext * pSearchContext) PURE;
};
SHSTDAPI_(PIDLIST_RELATIVE) ILClone(_In_ PCUIDLIST_RELATIVE pidl);
SHSTDAPI_(PITEMID_CHILD) ILCloneFirst(_In_ PCUIDLIST_RELATIVE pidl);
SHSTDAPI_(PIDLIST_ABSOLUTE) ILCombine(_In_opt_ PCIDLIST_ABSOLUTE pidl1, _In_opt_ PCUIDLIST_RELATIVE pidl2);
SHSTDAPI_(void) ILFree(_In_opt_ PIDLIST_RELATIVE pidl);
SHSTDAPI_(PUIDLIST_RELATIVE) ILGetNext(_In_opt_ PCUIDLIST_RELATIVE pidl);
SHSTDAPI_(UINT) ILGetSize(_In_opt_ PCUIDLIST_RELATIVE pidl);
SHSTDAPI_(PUIDLIST_RELATIVE) ILFindChild(_In_ PIDLIST_ABSOLUTE pidlParent, _In_ PCIDLIST_ABSOLUTE pidlChild);
SHSTDAPI_(PUITEMID_CHILD) ILFindLastID(_In_ PCUIDLIST_RELATIVE pidl);
SHSTDAPI_(BOOL) ILRemoveLastID(_Inout_opt_ PUIDLIST_RELATIVE pidl);
SHSTDAPI_(BOOL) ILIsEqual(_In_ PCIDLIST_ABSOLUTE pidl1, _In_ PCIDLIST_ABSOLUTE pidl2);
SHSTDAPI_(BOOL) ILIsParent(_In_ PCIDLIST_ABSOLUTE pidl1, _In_ PCIDLIST_ABSOLUTE pidl2, BOOL fImmediate);
SHSTDAPI ILSaveToStream(_In_ IStream *pstm, _In_ PCUIDLIST_RELATIVE pidl);
EXTERN_C DECLSPEC_DEPRECATED HRESULT STDAPICALLTYPE ILLoadFromStream(_In_ IStream *pstm, _Inout_ PIDLIST_RELATIVE *pidl);
SHSTDAPI ILLoadFromStreamEx(_In_ IStream *pstm, _Outptr_ PIDLIST_RELATIVE *pidl);
SHSTDAPI_(PIDLIST_ABSOLUTE) ILCreateFromPathA(_In_ PCSTR pszPath);
SHSTDAPI_(PIDLIST_ABSOLUTE) ILCreateFromPathW(_In_ PCWSTR pszPath);
SHSTDAPI_(PIDLIST_ABSOLUTE) ILCreateFromPath(_In_ PCTSTR pszPath);
SHSTDAPI SHILCreateFromPath(_In_ PCWSTR pszPath, _Outptr_ PIDLIST_ABSOLUTE *ppidl, _Inout_opt_ DWORD *rgfInOut);
SHSTDAPI_(PIDLIST_RELATIVE) ILAppendID(_In_opt_ PIDLIST_RELATIVE pidl, _In_ LPCSHITEMID pmkid, BOOL fAppend);
enum
{
    GPFIDL_DEFAULT = 0x0000,
    GPFIDL_ALTNAME = 0x0001,
    GPFIDL_UNCPRINTER = 0x0002,
};
typedef int GPFIDL_FLAGS;
SHSTDAPI_(BOOL) SHGetPathFromIDListEx(_In_ PCIDLIST_ABSOLUTE pidl, _Out_writes_(cchPath) PWSTR pszPath, DWORD cchPath, GPFIDL_FLAGS uOpts);
_Success_(return != 0)
SHSTDAPI_(BOOL) SHGetPathFromIDListA(_In_ PCIDLIST_ABSOLUTE pidl, _Out_writes_(MAX_PATH) LPSTR pszPath);
_Success_(return != 0)
SHSTDAPI_(BOOL) SHGetPathFromIDListW(_In_ PCIDLIST_ABSOLUTE pidl, _Out_writes_(MAX_PATH) LPWSTR pszPath);
SHSTDAPI_(int) SHCreateDirectory(_In_opt_ HWND hwnd, _In_ PCWSTR pszPath);
SHSTDAPI_(int) SHCreateDirectoryExA(_In_opt_ HWND hwnd, _In_ LPCSTR pszPath, _In_opt_ const SECURITY_ATTRIBUTES *psa);
SHSTDAPI_(int) SHCreateDirectoryExW(_In_opt_ HWND hwnd, _In_ LPCWSTR pszPath, _In_opt_ const SECURITY_ATTRIBUTES *psa);
SHSTDAPI SHOpenFolderAndSelectItems(_In_ PCIDLIST_ABSOLUTE pidlFolder, UINT cidl, _In_reads_opt_(cidl) PCUITEMID_CHILD_ARRAY apidl, DWORD dwFlags);
SHSTDAPI SHCreateShellItem(_In_opt_ PCIDLIST_ABSOLUTE pidlParent, _In_opt_ IShellFolder *psfParent, _In_ PCUITEMID_CHILD pidl, _Outptr_ IShellItem **ppsi);
_Check_return_
STDAPI SHGetSpecialFolderLocation(_Reserved_ HWND hwnd, _In_ int csidl, _Outptr_ PIDLIST_ABSOLUTE *ppidl);
SHSTDAPI_(PIDLIST_ABSOLUTE) SHCloneSpecialIDList(_Reserved_ HWND hwnd, _In_ int csidl, _In_ BOOL fCreate);
_Success_(return != 0)
SHSTDAPI_(BOOL) SHGetSpecialFolderPathA(_Reserved_ HWND hwnd, _Out_writes_(MAX_PATH) LPSTR pszPath, _In_ int csidl, _In_ BOOL fCreate);
_Success_(return != 0)
SHSTDAPI_(BOOL) SHGetSpecialFolderPathW(_Reserved_ HWND hwnd, _Out_writes_(MAX_PATH) LPWSTR pszPath, _In_ int csidl, _In_ BOOL fCreate);
SHSTDAPI_(void) SHFlushSFCache(void);
typedef enum {
    SHGFP_TYPE_CURRENT = 0,
    SHGFP_TYPE_DEFAULT = 1,
} SHGFP_TYPE;
SHFOLDERAPI SHGetFolderPathA(_Reserved_ HWND hwnd, _In_ int csidl, _In_opt_ HANDLE hToken, _In_ DWORD dwFlags, _Out_writes_(MAX_PATH) LPSTR pszPath);
SHFOLDERAPI SHGetFolderPathW(_Reserved_ HWND hwnd, _In_ int csidl, _In_opt_ HANDLE hToken, _In_ DWORD dwFlags, _Out_writes_(MAX_PATH) LPWSTR pszPath);
SHSTDAPI SHGetFolderLocation(_Reserved_ HWND hwnd, _In_ int csidl, _In_opt_ HANDLE hToken, _In_ DWORD dwFlags, _Outptr_ PIDLIST_ABSOLUTE *ppidl);
STDAPI SHSetFolderPathA(_In_ int csidl, _In_opt_ HANDLE hToken, _In_ DWORD dwFlags, _In_ LPCSTR pszPath);
STDAPI SHSetFolderPathW(_In_ int csidl, _In_opt_ HANDLE hToken, _In_ DWORD dwFlags, _In_ LPCWSTR pszPath);
STDAPI SHGetFolderPathAndSubDirA(_Reserved_ HWND hwnd, _In_ int csidl, _In_opt_ HANDLE hToken, _In_ DWORD dwFlags, _In_opt_ LPCSTR pszSubDir, _Out_writes_(MAX_PATH) LPSTR pszPath);
STDAPI SHGetFolderPathAndSubDirW(_Reserved_ HWND hwnd, _In_ int csidl, _In_opt_ HANDLE hToken, _In_ DWORD dwFlags, _In_opt_ LPCWSTR pszSubDir, _Out_writes_(MAX_PATH) LPWSTR pszPath);
typedef enum
{
    KF_FLAG_DEFAULT = 0x00000000,
    KF_FLAG_FORCE_APP_DATA_REDIRECTION = 0x00080000,
    KF_FLAG_RETURN_FILTER_REDIRECTION_TARGET = 0x00040000,
    KF_FLAG_FORCE_PACKAGE_REDIRECTION = 0x00020000,
    KF_FLAG_NO_PACKAGE_REDIRECTION = 0x00010000,
    KF_FLAG_FORCE_APPCONTAINER_REDIRECTION = 0x00020000,
    KF_FLAG_NO_APPCONTAINER_REDIRECTION = 0x00010000,
    KF_FLAG_CREATE = 0x00008000,
    KF_FLAG_DONT_VERIFY = 0x00004000,
    KF_FLAG_DONT_UNEXPAND = 0x00002000,
    KF_FLAG_NO_ALIAS = 0x00001000,
    KF_FLAG_INIT = 0x00000800,
    KF_FLAG_DEFAULT_PATH = 0x00000400,
    KF_FLAG_NOT_PARENT_RELATIVE = 0x00000200,
    KF_FLAG_SIMPLE_IDLIST = 0x00000100,
    KF_FLAG_ALIAS_ONLY = 0x80000000,
} KNOWN_FOLDER_FLAG;
DEFINE_ENUM_FLAG_OPERATORS(KNOWN_FOLDER_FLAG)
STDAPI SHGetKnownFolderIDList(_In_ REFKNOWNFOLDERID rfid,
                              _In_ DWORD dwFlags,
                              _In_opt_ HANDLE hToken,
                              _Outptr_ PIDLIST_ABSOLUTE *ppidl);
STDAPI SHSetKnownFolderPath(_In_ REFKNOWNFOLDERID rfid,
                            _In_ DWORD dwFlags,
                            _In_opt_ HANDLE hToken,
                            _In_ PCWSTR pszPath);
STDAPI SHGetKnownFolderPath(_In_ REFKNOWNFOLDERID rfid,
                            _In_ DWORD dwFlags,
                            _In_opt_ HANDLE hToken,
                            _Outptr_ PWSTR *ppszPath);
STDAPI SHGetKnownFolderItem(_In_ REFKNOWNFOLDERID rfid,
                            _In_ KNOWN_FOLDER_FLAG flags,
                            _In_opt_ HANDLE hToken,
                            _In_ REFIID riid,
                            _Outptr_ void **ppv);
#include <pshpack8.h>
typedef struct
{
    DWORD dwSize;
    DWORD dwMask;
    SHELLVIEWID* pvid;
    LPWSTR pszWebViewTemplate;
    DWORD cchWebViewTemplate;
    LPWSTR pszWebViewTemplateVersion;
    LPWSTR pszInfoTip;
    DWORD cchInfoTip;
    CLSID* pclsid;
    DWORD dwFlags;
    LPWSTR pszIconFile;
    DWORD cchIconFile;
    int iIconIndex;
    LPWSTR pszLogo;
    DWORD cchLogo;
} SHFOLDERCUSTOMSETTINGS, *LPSHFOLDERCUSTOMSETTINGS;
#include <poppack.h>
SHSTDAPI SHGetSetFolderCustomSettings(_Inout_ LPSHFOLDERCUSTOMSETTINGS pfcs, _In_ PCWSTR pszPath, DWORD dwReadWrite);
typedef int (CALLBACK* BFFCALLBACK)(HWND hwnd, UINT uMsg, LPARAM lParam, LPARAM lpData);
#include <pshpack8.h>
typedef struct _browseinfoA {
    HWND hwndOwner;
    PCIDLIST_ABSOLUTE pidlRoot;
    LPSTR pszDisplayName;
    LPCSTR lpszTitle;
    UINT ulFlags;
    BFFCALLBACK lpfn;
    LPARAM lParam;
    int iImage;
} BROWSEINFOA, *PBROWSEINFOA, *LPBROWSEINFOA;
typedef struct _browseinfoW {
    HWND hwndOwner;
    PCIDLIST_ABSOLUTE pidlRoot;
    LPWSTR pszDisplayName;
    LPCWSTR lpszTitle;
    UINT ulFlags;
    BFFCALLBACK lpfn;
    LPARAM lParam;
    int iImage;
} BROWSEINFOW, *PBROWSEINFOW, *LPBROWSEINFOW;
#include <poppack.h>
SHSTDAPI_(PIDLIST_ABSOLUTE) SHBrowseForFolderA(_In_ LPBROWSEINFOA lpbi);
SHSTDAPI_(PIDLIST_ABSOLUTE) SHBrowseForFolderW(_In_ LPBROWSEINFOW lpbi);
_Check_return_
SHSTDAPI SHLoadInProc(_In_ REFCLSID rclsid);
enum
{
    ISHCUTCMDID_DOWNLOADICON = 0,
    ISHCUTCMDID_INTSHORTCUTCREATE = 1,
    ISHCUTCMDID_COMMITHISTORY = 2,
    ISHCUTCMDID_SETUSERAWURL = 3,
};
_Check_return_
SHSTDAPI SHGetDesktopFolder(_Outptr_ IShellFolder **ppshf);
DECLARE_INTERFACE_IID_(IShellDetails, IUnknown, "000214EC-0000-0000-c000-000000000046")
{
    STDMETHOD(GetDetailsOf)(THIS_ _In_opt_ PCUITEMID_CHILD pidl, UINT iColumn, _Out_ SHELLDETAILS *pDetails) PURE;
    STDMETHOD(ColumnClick)(THIS_ UINT iColumn) PURE;
};
DECLARE_INTERFACE_IID_(IObjMgr, IUnknown, "00BB2761-6A77-11D0-A535-00C04FD7D062")
{
    STDMETHOD(Append) (THIS_ _In_ IUnknown *punk) PURE;
    STDMETHOD(Remove) (THIS_ _In_ IUnknown *punk) PURE;
};
DECLARE_INTERFACE_IID_(IACList, IUnknown, "77A130B0-94FD-11D0-A544-00C04FD7d062")
{
    STDMETHOD(Expand) (THIS_ _In_ PCWSTR pszExpand) PURE;
};
typedef enum _tagAUTOCOMPLETELISTOPTIONS
{
    ACLO_NONE = 0,
    ACLO_CURRENTDIR = 1,
    ACLO_MYCOMPUTER = 2,
    ACLO_DESKTOP = 4,
    ACLO_FAVORITES = 8,
    ACLO_FILESYSONLY = 16,
    ACLO_FILESYSDIRS = 32,
    ACLO_VIRTUALNAMESPACE = 64,
} AUTOCOMPLETELISTOPTIONS;
DECLARE_INTERFACE_IID_(IACList2, IACList, "470141a0-5186-11d2-bbb6-0060977b464c")
{
    STDMETHOD(SetOptions)(THIS_ DWORD dwFlag) PURE;
    STDMETHOD(GetOptions)(THIS_ _Out_ DWORD* pdwFlag) PURE;
};
DECLARE_INTERFACE_IID_(IProgressDialog, IUnknown, "EBBC7C04-315E-11d2-B62F-006097DF5BD4")
{
    STDMETHOD(StartProgressDialog)(THIS_ _In_opt_ HWND hwndParent, _In_opt_ IUnknown * punkEnableModless, DWORD dwFlags, _Reserved_ LPCVOID pvResevered) PURE;
    STDMETHOD(StopProgressDialog)(THIS) PURE;
    STDMETHOD(SetTitle)(THIS_ _In_ PCWSTR pwzTitle) PURE;
    STDMETHOD(SetAnimation)(THIS_ _In_opt_ HINSTANCE hInstAnimation, UINT idAnimation) PURE;
    STDMETHOD_(BOOL,HasUserCancelled) (THIS) PURE;
    STDMETHOD(SetProgress)(THIS_ DWORD dwCompleted, DWORD dwTotal) PURE;
    STDMETHOD(SetProgress64)(THIS_ ULONGLONG ullCompleted, ULONGLONG ullTotal) PURE;
    STDMETHOD(SetLine)(THIS_ DWORD dwLineNum, _In_ PCWSTR pwzString, BOOL fCompactPath, _Reserved_ LPCVOID pvResevered) PURE;
    STDMETHOD(SetCancelMsg)(THIS_ _In_ PCWSTR pwzCancelMsg, _Reserved_ LPCVOID pvResevered) PURE;
    STDMETHOD(Timer)(THIS_ DWORD dwTimerAction, _Reserved_ LPCVOID pvResevered) PURE;
};
DECLARE_INTERFACE_IID_(IDockingWindowSite, IOleWindow, "2a342fc2-7b26-11d0-8ca9-00a0c92dbfe8")
{
    STDMETHOD(GetBorderDW) (THIS_ _In_ IUnknown* punkObj, _Out_ RECT *prcBorder) PURE;
    STDMETHOD(RequestBorderSpaceDW) (THIS_ _In_ IUnknown* punkObj, _In_ LPCBORDERWIDTHS pbw) PURE;
    STDMETHOD(SetBorderSpaceDW) (THIS_ _In_ IUnknown* punkObj, _In_ LPCBORDERWIDTHS pbw) PURE;
};
typedef struct _tagWALLPAPEROPT
{
    DWORD dwSize;
    DWORD dwStyle;
}
WALLPAPEROPT;
typedef WALLPAPEROPT *LPWALLPAPEROPT;
typedef const WALLPAPEROPT *LPCWALLPAPEROPT;
typedef struct _tagCOMPONENTSOPT
{
    DWORD dwSize;
    BOOL fEnableComponents;
    BOOL fActiveDesktop;
}
COMPONENTSOPT;
typedef COMPONENTSOPT *LPCOMPONENTSOPT;
typedef const COMPONENTSOPT *LPCCOMPONENTSOPT;
typedef struct _tagCOMPPOS
{
    DWORD dwSize;
    int iLeft;
    int iTop;
    DWORD dwWidth;
    DWORD dwHeight;
    int izIndex;
    BOOL fCanResize;
    BOOL fCanResizeX;
    BOOL fCanResizeY;
    int iPreferredLeftPercent;
    int iPreferredTopPercent;
}
COMPPOS;
typedef COMPPOS *LPCOMPPOS;
typedef const COMPPOS *LPCCOMPPOS;
typedef struct _tagCOMPSTATEINFO
{
    DWORD dwSize;
    int iLeft;
    int iTop;
    DWORD dwWidth;
    DWORD dwHeight;
    DWORD dwItemState;
}
COMPSTATEINFO;
typedef COMPSTATEINFO *LPCOMPSTATEINFO;
typedef const COMPSTATEINFO *LPCCOMPSTATEINFO;
typedef struct _tagIE4COMPONENT
{
    DWORD dwSize;
    DWORD dwID;
    int iComponentType;
    BOOL fChecked;
    BOOL fDirty;
    BOOL fNoScroll;
    COMPPOS cpPos;
    WCHAR wszFriendlyName[MAX_PATH];
    WCHAR wszSource[INTERNET_MAX_URL_LENGTH];
    WCHAR wszSubscribedURL[INTERNET_MAX_URL_LENGTH];
}
IE4COMPONENT;
typedef IE4COMPONENT *LPIE4COMPONENT;
typedef const IE4COMPONENT *LPCIE4COMPONENT;
typedef struct _tagCOMPONENT
{
    DWORD dwSize;
    DWORD dwID;
    int iComponentType;
    BOOL fChecked;
    BOOL fDirty;
    BOOL fNoScroll;
    COMPPOS cpPos;
    WCHAR wszFriendlyName[MAX_PATH];
    WCHAR wszSource[INTERNET_MAX_URL_LENGTH];
    WCHAR wszSubscribedURL[INTERNET_MAX_URL_LENGTH];
    DWORD dwCurItemState;
    COMPSTATEINFO csiOriginal;
    COMPSTATEINFO csiRestored;
}
COMPONENT;
typedef COMPONENT *LPCOMPONENT;
typedef const COMPONENT *LPCCOMPONENT;
                         COMP_ELEM_NOSCROLL | COMP_ELEM_POS_LEFT | COMP_ELEM_SIZE_WIDTH | \
                         COMP_ELEM_SIZE_HEIGHT | COMP_ELEM_POS_ZINDEX | COMP_ELEM_SOURCE | \
                         COMP_ELEM_FRIENDLYNAME | COMP_ELEM_POS_TOP | COMP_ELEM_SUBSCRIBEDURL | \
                         COMP_ELEM_ORIGINAL_CSI | COMP_ELEM_RESTORED_CSI | COMP_ELEM_CURITEMSTATE)
enum tagDTI_ADTIWUI
{
    DTI_ADDUI_DEFAULT = 0x00000000,
    DTI_ADDUI_DISPSUBWIZARD = 0x00000001,
    DTI_ADDUI_POSITIONITEM = 0x00000002,
};
DECLARE_INTERFACE_IID_(IActiveDesktop, IUnknown, "f490eb00-1240-11d1-9888-006097deacf9")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppv) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD (ApplyChanges)(THIS_ DWORD dwFlags) PURE;
    STDMETHOD (GetWallpaper)(THIS_ _Out_writes_(cchWallpaper) PWSTR pwszWallpaper, UINT cchWallpaper, DWORD dwFlags) PURE;
    STDMETHOD (SetWallpaper)(THIS_ _In_ PCWSTR pwszWallpaper, DWORD dwReserved) PURE;
    STDMETHOD (GetWallpaperOptions)(THIS_ _Inout_ LPWALLPAPEROPT pwpo, DWORD dwReserved) PURE;
    STDMETHOD (SetWallpaperOptions)(THIS_ _In_ LPCWALLPAPEROPT pwpo, DWORD dwReserved) PURE;
    STDMETHOD (GetPattern)(THIS_ _Out_writes_(cchPattern) PWSTR pwszPattern, UINT cchPattern, DWORD dwReserved) PURE;
    STDMETHOD (SetPattern)(THIS_ _In_ PCWSTR pwszPattern, DWORD dwReserved) PURE;
    STDMETHOD (GetDesktopItemOptions)(THIS_ _Inout_ LPCOMPONENTSOPT pco, DWORD dwReserved) PURE;
    STDMETHOD (SetDesktopItemOptions)(THIS_ _In_ LPCCOMPONENTSOPT pco, DWORD dwReserved) PURE;
    STDMETHOD (AddDesktopItem)(THIS_ _In_ LPCCOMPONENT pcomp, DWORD dwReserved) PURE;
    STDMETHOD (AddDesktopItemWithUI)(THIS_ _In_opt_ HWND hwnd, _In_ LPCOMPONENT pcomp, DWORD dwReserved) PURE;
    STDMETHOD (ModifyDesktopItem)(THIS_ _Inout_ LPCCOMPONENT pcomp, DWORD dwFlags) PURE;
    STDMETHOD (RemoveDesktopItem)(THIS_ _In_ LPCCOMPONENT pcomp, DWORD dwReserved) PURE;
    STDMETHOD (GetDesktopItemCount)(THIS_ _Out_ int *pcItems, DWORD dwReserved) PURE;
    STDMETHOD (GetDesktopItem)(THIS_ int nComponent, _Inout_ LPCOMPONENT pcomp, DWORD dwReserved) PURE;
    STDMETHOD (GetDesktopItemByID)(THIS_ ULONG_PTR dwID, _Inout_ LPCOMPONENT pcomp, DWORD dwReserved) PURE;
    STDMETHOD (GenerateDesktopItemHtml)(THIS_ _In_ PCWSTR pwszFileName, _In_ LPCOMPONENT pcomp, DWORD dwReserved) PURE;
    STDMETHOD (AddUrl)(THIS_ _In_opt_ HWND hwnd, _In_ PCWSTR pszSource, _In_ LPCOMPONENT pcomp, DWORD dwFlags) PURE;
    STDMETHOD (GetDesktopItemBySource)(THIS_ _In_ PCWSTR pwszSource, _Inout_ LPCOMPONENT pcomp, DWORD dwReserved) PURE;
};
typedef IActiveDesktop * LPACTIVEDESKTOP;
#include <pshpack8.h>
typedef struct _NRESARRAY {
    UINT cItems;
    NETRESOURCE nr[1];
} NRESARRAY, * LPNRESARRAY;
#include <poppack.h>
typedef struct _IDA {
    UINT cidl;
    UINT aoffset[1];
} CIDA, * LPIDA;
typedef enum {
    FD_CLSID = 0x00000001,
    FD_SIZEPOINT = 0x00000002,
    FD_ATTRIBUTES = 0x00000004,
    FD_CREATETIME = 0x00000008,
    FD_ACCESSTIME = 0x00000010,
    FD_WRITESTIME = 0x00000020,
    FD_FILESIZE = 0x00000040,
    FD_PROGRESSUI = 0x00004000,
    FD_LINKUI = 0x00008000,
    FD_UNICODE = (int) 0x80000000,
} FD_FLAGS;
typedef struct _FILEDESCRIPTORA {
    DWORD dwFlags;
    CLSID clsid;
    SIZEL sizel;
    POINTL pointl;
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    CHAR cFileName[ MAX_PATH ];
} FILEDESCRIPTORA, *LPFILEDESCRIPTORA;
typedef struct _FILEDESCRIPTORW {
    DWORD dwFlags;
    CLSID clsid;
    SIZEL sizel;
    POINTL pointl;
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    WCHAR cFileName[ MAX_PATH ];
} FILEDESCRIPTORW, *LPFILEDESCRIPTORW;
typedef struct _FILEGROUPDESCRIPTORA {
     UINT cItems;
     FILEDESCRIPTORA fgd[1];
} FILEGROUPDESCRIPTORA, * LPFILEGROUPDESCRIPTORA;
typedef struct _FILEGROUPDESCRIPTORW {
     UINT cItems;
     FILEDESCRIPTORW fgd[1];
} FILEGROUPDESCRIPTORW, * LPFILEGROUPDESCRIPTORW;
typedef struct _DROPFILES {
   DWORD pFiles;
   POINT pt;
   BOOL fNC;
   BOOL fWide;
} DROPFILES, *LPDROPFILES;
typedef struct
{
    UINT cItems;
    DWORD dwSumFileAttributes;
    DWORD dwProductFileAttributes;
    DWORD rgdwFileAttributes[1];
} FILE_ATTRIBUTES_ARRAY;
typedef enum
{
    DROPIMAGE_INVALID = -1,
    DROPIMAGE_NONE = 0,
    DROPIMAGE_COPY = DROPEFFECT_COPY,
    DROPIMAGE_MOVE = DROPEFFECT_MOVE,
    DROPIMAGE_LINK = DROPEFFECT_LINK,
    DROPIMAGE_LABEL = 6,
    DROPIMAGE_WARNING = 7,
    DROPIMAGE_NOIMAGE = 8,
} DROPIMAGETYPE;
typedef struct
{
    DROPIMAGETYPE type;
    WCHAR szMessage[MAX_PATH];
    WCHAR szInsert[MAX_PATH];
} DROPDESCRIPTION;
typedef struct _SHChangeNotifyEntry
{
    PCIDLIST_ABSOLUTE pidl;
    BOOL fRecursive;
} SHChangeNotifyEntry;
SHSTDAPI_(void) SHChangeNotify(LONG wEventId, UINT uFlags, _In_opt_ LPCVOID dwItem1, _In_opt_ LPCVOID dwItem2);
DECLARE_INTERFACE_IID_(IShellChangeNotify, IUnknown, "D82BE2B1-5764-11D0-A96E-00C04FD705A2")
{
    STDMETHOD(OnChange) (THIS_ LONG lEvent, _In_opt_ PCIDLIST_ABSOLUTE pidl1, _In_opt_ PCIDLIST_ABSOLUTE pidl2) PURE;
};
DECLARE_INTERFACE_IID_(IQueryInfo, IUnknown, "00021500-0000-0000-c000-000000000046")
{
    STDMETHOD(GetInfoTip)(THIS_ DWORD dwFlags, _Outptr_ PWSTR *ppwszTip) PURE;
    STDMETHOD(GetInfoFlags)(THIS_ _Out_ DWORD *pdwFlags) PURE;
};
typedef enum
{
    SHARD_PIDL = 0x00000001L,
    SHARD_PATHA = 0x00000002L,
    SHARD_PATHW = 0x00000003L,
    SHARD_APPIDINFO = 0x00000004L,
    SHARD_APPIDINFOIDLIST = 0x00000005L,
    SHARD_LINK = 0x00000006L,
    SHARD_APPIDINFOLINK = 0x00000007L,
    SHARD_SHELLITEM = 0x00000008L,
} SHARD;
typedef struct SHARDAPPIDINFO
{
    IShellItem *psi;
    PCWSTR pszAppID;
} SHARDAPPIDINFO;
typedef struct SHARDAPPIDINFOIDLIST
{
    PCIDLIST_ABSOLUTE pidl;
    PCWSTR pszAppID;
} SHARDAPPIDINFOIDLIST;
typedef struct SHARDAPPIDINFOLINK
{
    IShellLink *psl;
    PCWSTR pszAppID;
} SHARDAPPIDINFOLINK;
SHSTDAPI_(void) SHAddToRecentDocs(UINT uFlags, _In_opt_ LPCVOID pv);
#include <pshpack1.h>
typedef struct _SHChangeDWORDAsIDList {
    USHORT cb;
    DWORD dwItem1;
    DWORD dwItem2;
    USHORT cbZero;
} SHChangeDWORDAsIDList, *LPSHChangeDWORDAsIDList;
#include <poppack.h>
typedef struct _SHChangeUpdateImageIDList {
    USHORT cb;
    int iIconIndex;
    int iCurIndex;
    UINT uFlags;
    DWORD dwProcessID;
    WCHAR szName[MAX_PATH];
    USHORT cbZero;
} SHChangeUpdateImageIDList, * LPSHChangeUpdateImageIDList;
SHSTDAPI_(int) SHHandleUpdateImage(_In_ PCIDLIST_ABSOLUTE pidlExtra);
SHSTDAPI_(void) SHUpdateImageA(_In_ LPCSTR pszHashItem, int iIndex, UINT uFlags, int iImageIndex);
SHSTDAPI_(void) SHUpdateImageW(_In_ LPCWSTR pszHashItem, int iIndex, UINT uFlags, int iImageIndex);
SHSTDAPI_(ULONG) SHChangeNotifyRegister(_In_ HWND hwnd, int fSources, LONG fEvents, UINT wMsg, int cEntries, _In_ const SHChangeNotifyEntry *pshcne);
SHSTDAPI_(BOOL) SHChangeNotifyDeregister(ULONG ulID);
typedef enum
{
    SCNRT_ENABLE = 0,
    SCNRT_DISABLE = 1,
} SCNRT_STATUS;
SHSTDAPI_(HANDLE) SHChangeNotification_Lock(_In_ HANDLE hChange, DWORD dwProcId, _Outptr_opt_result_buffer_(2) PIDLIST_ABSOLUTE **pppidl, _Out_opt_ LONG *plEvent);
SHSTDAPI_(BOOL) SHChangeNotification_Unlock(_In_ HANDLE hLock);
SHSTDAPI SHGetRealIDL(_In_ IShellFolder *psf, _In_ PCUITEMID_CHILD pidlSimple, _Outptr_ PITEMID_CHILD *ppidlReal);
_Check_return_
SHSTDAPI SHGetInstanceExplorer(_Outptr_ IUnknown **ppunk);
#include <pshpack8.h>
typedef struct _SHDESCRIPTIONID {
    DWORD dwDescriptionId;
    CLSID clsid;
} SHDESCRIPTIONID, *LPSHDESCRIPTIONID;
#include <poppack.h>
SHSTDAPI SHGetDataFromIDListA(_In_ IShellFolder *psf, _In_ PCUITEMID_CHILD pidl, int nFormat, _Out_writes_bytes_(cb) void *pv, int cb);
SHSTDAPI SHGetDataFromIDListW(_In_ IShellFolder *psf, _In_ PCUITEMID_CHILD pidl, int nFormat, _Out_writes_bytes_(cb) void *pv, int cb);
SHSTDAPI_(int) RestartDialog(_In_opt_ HWND hwnd, _In_opt_ PCWSTR pszPrompt, DWORD dwReturn);
SHSTDAPI_(int) RestartDialogEx(_In_opt_ HWND hwnd, _In_opt_ PCWSTR pszPrompt, DWORD dwReturn, DWORD dwReasonCode);
SHSTDAPI SHCoCreateInstance(_In_opt_ PCWSTR pszCLSID, _In_opt_ const CLSID *pclsid, _In_opt_ IUnknown *pUnkOuter, _In_ REFIID riid, _Outptr_ void **ppv);
SHSTDAPI SHCreateDataObject(_In_opt_ PCIDLIST_ABSOLUTE pidlFolder, _In_ UINT cidl, _In_reads_opt_(cidl) PCUITEMID_CHILD_ARRAY apidl, _In_opt_ IDataObject *pdtInner, _In_ REFIID riid, _Outptr_ void **ppv);
SHSTDAPI CIDLData_CreateFromIDArray(_In_ PCIDLIST_ABSOLUTE pidlFolder, _In_ UINT cidl, _In_reads_opt_(cidl) PCUIDLIST_RELATIVE_ARRAY apidl, _Outptr_ IDataObject **ppdtobj);
SHSTDAPI SHCreateStdEnumFmtEtc(_In_ UINT cfmt, _In_reads_(cfmt) const FORMATETC afmt[], _Outptr_ IEnumFORMATETC **ppenumFormatEtc);
SHSTDAPI SHDoDragDrop(_In_opt_ HWND hwnd, _In_ IDataObject *pdata, _In_opt_ IDropSource *pdsrc, _In_ DWORD dwEffect, _Out_ DWORD *pdwEffect);
typedef struct {
    int iNextSample;
    DWORD dwLastScroll;
    BOOL bFull;
    POINT pts[NUM_POINTS];
    DWORD dwTimes[NUM_POINTS];
} AUTO_SCROLL_DATA;
SHSTDAPI_(BOOL) DAD_SetDragImage(HIMAGELIST him, POINT * pptOffset);
SHSTDAPI_(BOOL) DAD_DragEnterEx(HWND hwndTarget, const POINT ptStart);
SHSTDAPI_(BOOL) DAD_DragEnterEx2(_In_ HWND hwndTarget, const POINT ptStart, _In_opt_ IDataObject *pdtObject);
SHSTDAPI_(BOOL) DAD_ShowDragImage(BOOL fShow);
SHSTDAPI_(BOOL) DAD_DragMove(POINT pt);
SHSTDAPI_(BOOL) DAD_DragLeave(void);
SHSTDAPI_(BOOL) DAD_AutoScroll(HWND hwnd, AUTO_SCROLL_DATA *pad, const POINT *pptNow);
typedef struct {
    WORD cLength;
    WORD nVersion;
    BOOL fFullPathTitle : 1;
    BOOL fSaveLocalView : 1;
    BOOL fNotShell : 1;
    BOOL fSimpleDefault : 1;
    BOOL fDontShowDescBar : 1;
    BOOL fNewWindowMode : 1;
    BOOL fShowCompColor : 1;
    BOOL fDontPrettyNames : 1;
    BOOL fAdminsCreateCommonGroups : 1;
    UINT fUnusedFlags : 7;
    UINT fMenuEnumFilter;
} CABINETSTATE, * LPCABINETSTATE;
SHSTDAPI_(BOOL) ReadCabinetState(_Out_writes_bytes_(cLength) CABINETSTATE *pcs, int cLength);
SHSTDAPI_(BOOL) WriteCabinetState(_In_ CABINETSTATE *pcs);
SHSTDAPI_(BOOL) PathMakeUniqueName(_Out_writes_(cchMax) PWSTR pszUniqueName, UINT cchMax, _In_ PCWSTR pszTemplate, _In_opt_ PCWSTR pszLongPlate, _In_opt_ PCWSTR pszDir);
SHSTDAPI_(BOOL) PathIsExe(_In_ PCWSTR pszPath);
SHSTDAPI_(int) PathCleanupSpec(_In_opt_ PCWSTR pszDir, _Inout_ PWSTR pszSpec);
SHSTDAPI_(int) PathResolve(_Inout_updates_(MAX_PATH) PWSTR pszPath, _In_opt_ PZPCWSTR dirs, UINT fFlags);
SHSTDAPI_(BOOL) GetFileNameFromBrowse(_In_opt_ HWND hwnd, _Inout_updates_(cchFilePath) PWSTR pszFilePath, UINT cchFilePath,
                                      _In_opt_ PCWSTR pszWorkingDir, _In_ PCWSTR pszDefExt, _In_opt_ PCWSTR pszFilters, _In_opt_ PCWSTR pszTitle);
SHSTDAPI_(int) DriveType(int iDrive);
SHSTDAPI_(int) RealDriveType(int iDrive, BOOL fOKToHitNet);
SHSTDAPI_(int) IsNetDrive(int iDrive);
SHSTDAPI_(UINT) Shell_MergeMenus(_In_ HMENU hmDst, _In_ HMENU hmSrc, UINT uInsert, UINT uIDAdjust, UINT uIDAdjustMax, ULONG uFlags);
SHSTDAPI_(BOOL) SHObjectProperties(_In_opt_ HWND hwnd, _In_ DWORD shopObjectType, _In_ PCWSTR pszObjectName, _In_opt_ PCWSTR pszPropertyPage);
SHSTDAPI_(DWORD) SHFormatDrive(_In_ HWND hwnd, UINT drive, UINT fmtID, UINT options);
DECLARE_HANDLE( HPSXA );
WINSHELLAPI void WINAPI SHDestroyPropSheetExtArray(_In_ HPSXA hpsxa);
WINSHELLAPI UINT WINAPI SHAddFromPropSheetExtArray(_In_ HPSXA hpsxa, _In_ LPFNADDPROPSHEETPAGE lpfnAddPage, LPARAM lParam);
WINSHELLAPI UINT WINAPI SHReplaceFromPropSheetExtArray(_In_ HPSXA hpsxa, UINT uPageID, _In_ LPFNADDPROPSHEETPAGE lpfnReplaceWith, LPARAM lParam);
typedef enum RESTRICTIONS
{
    REST_NONE = 0x00000000,
    REST_NORUN = 0x00000001,
    REST_NOCLOSE = 0x00000002,
    REST_NOSAVESET = 0x00000004,
    REST_NOFILEMENU = 0x00000008,
    REST_NOSETFOLDERS = 0x00000010,
    REST_NOSETTASKBAR = 0x00000020,
    REST_NODESKTOP = 0x00000040,
    REST_NOFIND = 0x00000080,
    REST_NODRIVES = 0x00000100,
    REST_NODRIVEAUTORUN = 0x00000200,
    REST_NODRIVETYPEAUTORUN = 0x00000400,
    REST_NONETHOOD = 0x00000800,
    REST_STARTBANNER = 0x00001000,
    REST_RESTRICTRUN = 0x00002000,
    REST_NOPRINTERTABS = 0x00004000,
    REST_NOPRINTERDELETE = 0x00008000,
    REST_NOPRINTERADD = 0x00010000,
    REST_NOSTARTMENUSUBFOLDERS = 0x00020000,
    REST_MYDOCSONNET = 0x00040000,
    REST_NOEXITTODOS = 0x00080000,
    REST_ENFORCESHELLEXTSECURITY = 0x00100000,
    REST_LINKRESOLVEIGNORELINKINFO = 0x00200000,
    REST_NOCOMMONGROUPS = 0x00400000,
    REST_SEPARATEDESKTOPPROCESS = 0x00800000,
    REST_NOWEB = 0x01000000,
    REST_NOTRAYCONTEXTMENU = 0x02000000,
    REST_NOVIEWCONTEXTMENU = 0x04000000,
    REST_NONETCONNECTDISCONNECT = 0x08000000,
    REST_STARTMENULOGOFF = 0x10000000,
    REST_NOSETTINGSASSIST = 0x20000000,
    REST_NOINTERNETICON = 0x40000001,
    REST_NORECENTDOCSHISTORY = 0x40000002,
    REST_NORECENTDOCSMENU = 0x40000003,
    REST_NOACTIVEDESKTOP = 0x40000004,
    REST_NOACTIVEDESKTOPCHANGES = 0x40000005,
    REST_NOFAVORITESMENU = 0x40000006,
    REST_CLEARRECENTDOCSONEXIT = 0x40000007,
    REST_CLASSICSHELL = 0x40000008,
    REST_NOCUSTOMIZEWEBVIEW = 0x40000009,
    REST_NOHTMLWALLPAPER = 0x40000010,
    REST_NOCHANGINGWALLPAPER = 0x40000011,
    REST_NODESKCOMP = 0x40000012,
    REST_NOADDDESKCOMP = 0x40000013,
    REST_NODELDESKCOMP = 0x40000014,
    REST_NOCLOSEDESKCOMP = 0x40000015,
    REST_NOCLOSE_DRAGDROPBAND = 0x40000016,
    REST_NOMOVINGBAND = 0x40000017,
    REST_NOEDITDESKCOMP = 0x40000018,
    REST_NORESOLVESEARCH = 0x40000019,
    REST_NORESOLVETRACK = 0x4000001A,
    REST_FORCECOPYACLWITHFILE = 0x4000001B,
    REST_NOFORGETSOFTWAREUPDATE = 0x4000001D,
    REST_NOSETACTIVEDESKTOP = 0x4000001E,
    REST_NOUPDATEWINDOWS = 0x4000001F,
    REST_NOCHANGESTARMENU = 0x40000020,
    REST_NOFOLDEROPTIONS = 0x40000021,
    REST_HASFINDCOMPUTERS = 0x40000022,
    REST_INTELLIMENUS = 0x40000023,
    REST_RUNDLGMEMCHECKBOX = 0x40000024,
    REST_ARP_ShowPostSetup = 0x40000025,
    REST_NOCSC = 0x40000026,
    REST_NOCONTROLPANEL = 0x40000027,
    REST_ENUMWORKGROUP = 0x40000028,
    REST_ARP_NOARP = 0x40000029,
    REST_ARP_NOREMOVEPAGE = 0x4000002A,
    REST_ARP_NOADDPAGE = 0x4000002B,
    REST_ARP_NOWINSETUPPAGE = 0x4000002C,
    REST_GREYMSIADS = 0x4000002D,
    REST_NOCHANGEMAPPEDDRIVELABEL = 0x4000002E,
    REST_NOCHANGEMAPPEDDRIVECOMMENT = 0x4000002F,
    REST_MaxRecentDocs = 0x40000030,
    REST_NONETWORKCONNECTIONS = 0x40000031,
    REST_FORCESTARTMENULOGOFF = 0x40000032,
    REST_NOWEBVIEW = 0x40000033,
    REST_NOCUSTOMIZETHISFOLDER = 0x40000034,
    REST_NOENCRYPTION = 0x40000035,
    REST_DONTSHOWSUPERHIDDEN = 0x40000037,
    REST_NOSHELLSEARCHBUTTON = 0x40000038,
    REST_NOHARDWARETAB = 0x40000039,
    REST_NORUNASINSTALLPROMPT = 0x4000003A,
    REST_PROMPTRUNASINSTALLNETPATH = 0x4000003B,
    REST_NOMANAGEMYCOMPUTERVERB = 0x4000003C,
    REST_DISALLOWRUN = 0x4000003E,
    REST_NOWELCOMESCREEN = 0x4000003F,
    REST_RESTRICTCPL = 0x40000040,
    REST_DISALLOWCPL = 0x40000041,
    REST_NOSMBALLOONTIP = 0x40000042,
    REST_NOSMHELP = 0x40000043,
    REST_NOWINKEYS = 0x40000044,
    REST_NOENCRYPTONMOVE = 0x40000045,
    REST_NOLOCALMACHINERUN = 0x40000046,
    REST_NOCURRENTUSERRUN = 0x40000047,
    REST_NOLOCALMACHINERUNONCE = 0x40000048,
    REST_NOCURRENTUSERRUNONCE = 0x40000049,
    REST_FORCEACTIVEDESKTOPON = 0x4000004A,
    REST_NOVIEWONDRIVE = 0x4000004C,
    REST_NONETCRAWL = 0x4000004D,
    REST_NOSHAREDDOCUMENTS = 0x4000004E,
    REST_NOSMMYDOCS = 0x4000004F,
    REST_NOSMMYPICS = 0x40000050,
    REST_ALLOWBITBUCKDRIVES = 0x40000051,
    REST_NONLEGACYSHELLMODE = 0x40000052,
    REST_NOCONTROLPANELBARRICADE = 0x40000053,
    REST_NOSTARTPAGE = 0x40000054,
    REST_NOAUTOTRAYNOTIFY = 0x40000055,
    REST_NOTASKGROUPING = 0x40000056,
    REST_NOCDBURNING = 0x40000057,
    REST_MYCOMPNOPROP = 0x40000058,
    REST_MYDOCSNOPROP = 0x40000059,
    REST_NOSTARTPANEL = 0x4000005A,
    REST_NODISPLAYAPPEARANCEPAGE = 0x4000005B,
    REST_NOTHEMESTAB = 0x4000005C,
    REST_NOVISUALSTYLECHOICE = 0x4000005D,
    REST_NOSIZECHOICE = 0x4000005E,
    REST_NOCOLORCHOICE = 0x4000005F,
    REST_SETVISUALSTYLE = 0x40000060,
    REST_STARTRUNNOHOMEPATH = 0x40000061,
    REST_NOUSERNAMEINSTARTPANEL = 0x40000062,
    REST_NOMYCOMPUTERICON = 0x40000063,
    REST_NOSMNETWORKPLACES = 0x40000064,
    REST_NOSMPINNEDLIST = 0x40000065,
    REST_NOSMMYMUSIC = 0x40000066,
    REST_NOSMEJECTPC = 0x40000067,
    REST_NOSMMOREPROGRAMS = 0x40000068,
    REST_NOSMMFUPROGRAMS = 0x40000069,
    REST_NOTRAYITEMSDISPLAY = 0x4000006A,
    REST_NOTOOLBARSONTASKBAR = 0x4000006B,
    REST_NOSMCONFIGUREPROGRAMS = 0x4000006F,
    REST_HIDECLOCK = 0x40000070,
    REST_NOLOWDISKSPACECHECKS = 0x40000071,
    REST_NOENTIRENETWORK = 0x40000072,
    REST_NODESKTOPCLEANUP = 0x40000073,
    REST_BITBUCKNUKEONDELETE = 0x40000074,
    REST_BITBUCKCONFIRMDELETE = 0x40000075,
    REST_BITBUCKNOPROP = 0x40000076,
    REST_NODISPBACKGROUND = 0x40000077,
    REST_NODISPSCREENSAVEPG = 0x40000078,
    REST_NODISPSETTINGSPG = 0x40000079,
    REST_NODISPSCREENSAVEPREVIEW = 0x4000007A,
    REST_NODISPLAYCPL = 0x4000007B,
    REST_HIDERUNASVERB = 0x4000007C,
    REST_NOTHUMBNAILCACHE = 0x4000007D,
    REST_NOSTRCMPLOGICAL = 0x4000007E,
    REST_NOPUBLISHWIZARD = 0x4000007F,
    REST_NOONLINEPRINTSWIZARD = 0x40000080,
    REST_NOWEBSERVICES = 0x40000081,
    REST_ALLOWUNHASHEDWEBVIEW = 0x40000082,
    REST_ALLOWLEGACYWEBVIEW = 0x40000083,
    REST_REVERTWEBVIEWSECURITY = 0x40000084,
    REST_INHERITCONSOLEHANDLES = 0x40000086,
    REST_NOREMOTERECURSIVEEVENTS = 0x40000089,
    REST_NOREMOTECHANGENOTIFY = 0x40000091,
    REST_NOENUMENTIRENETWORK = 0x40000093,
    REST_NOINTERNETOPENWITH = 0x40000095,
    REST_DONTRETRYBADNETNAME = 0x4000009B,
    REST_ALLOWFILECLSIDJUNCTIONS = 0x4000009C,
    REST_NOUPNPINSTALL = 0x4000009D,
    REST_ARP_DONTGROUPPATCHES = 0x400000AC,
    REST_ARP_NOCHOOSEPROGRAMSPAGE = 0x400000AD,
    REST_NODISCONNECT = 0x41000001,
    REST_NOSECURITY = 0x41000002,
    REST_NOFILEASSOCIATE = 0x41000003,
    REST_ALLOWCOMMENTTOGGLE = 0x41000004,
} RESTRICTIONS;
SHSTDAPI_(IStream *) OpenRegStream(_In_ HKEY hkey, _In_opt_ PCWSTR pszSubkey, _In_opt_ PCWSTR pszValue, DWORD grfMode);
SHSTDAPI_(BOOL) SHFindFiles(_In_opt_ PCIDLIST_ABSOLUTE pidlFolder, _In_opt_ PCIDLIST_ABSOLUTE pidlSaveFile);
SHSTDAPI_(void) PathGetShortPath(_Inout_updates_(MAX_PATH) PWSTR pszLongPath);
_Success_(return != 0)
SHSTDAPI_(BOOL) PathYetAnotherMakeUniqueName(_Out_writes_(MAX_PATH) PWSTR pszUniqueName, _In_ PCWSTR pszPath, _In_opt_ PCWSTR pszShort, _In_opt_ PCWSTR pszFileSpec);
SHSTDAPI_(BOOL) Win32DeleteFile(_In_ PCWSTR pszPath);
SHSTDAPI_(DWORD) SHRestricted(RESTRICTIONS rest);
SHSTDAPI_(BOOL) SignalFileOpen(_In_ PCIDLIST_ABSOLUTE pidl);
SHSTDAPI AssocGetDetailsOfPropKey(_In_ IShellFolder *psf, _In_ PCUITEMID_CHILD pidl, _In_ const PROPERTYKEY *pkey, _Out_ VARIANT *pv, _Out_opt_ BOOL *pfFoundPropKey);
SHSTDAPI SHStartNetConnectionDialogA(_In_opt_ HWND hwnd, _In_opt_ LPCSTR pszRemoteName, DWORD dwType);
SHSTDAPI SHStartNetConnectionDialogW(_In_opt_ HWND hwnd, _In_opt_ LPCWSTR pszRemoteName, DWORD dwType);
SHSTDAPI SHDefExtractIconA(_In_ LPCSTR pszIconFile, int iIndex, UINT uFlags,
                           _Out_opt_ HICON *phiconLarge, _Out_opt_ HICON *phiconSmall, UINT nIconSize);
SHSTDAPI SHDefExtractIconW(_In_ LPCWSTR pszIconFile, int iIndex, UINT uFlags,
                           _Out_opt_ HICON *phiconLarge, _Out_opt_ HICON *phiconSmall, UINT nIconSize);
enum tagOPEN_AS_INFO_FLAGS {
    OAIF_ALLOW_REGISTRATION = 0x00000001,
    OAIF_REGISTER_EXT = 0x00000002,
    OAIF_EXEC = 0x00000004,
    OAIF_FORCE_REGISTRATION = 0x00000008,
    OAIF_HIDE_REGISTRATION = 0x00000020,
    OAIF_URL_PROTOCOL = 0x00000040,
    OAIF_FILE_IS_URI = 0x00000080,
};
typedef int OPEN_AS_INFO_FLAGS;
#include <pshpack8.h>
typedef struct _openasinfo
{
    LPCWSTR pcszFile;
    LPCWSTR pcszClass;
    OPEN_AS_INFO_FLAGS oaifInFlags;
} OPENASINFO, * POPENASINFO;
#include <poppack.h>
SHSTDAPI SHOpenWithDialog(_In_opt_ HWND hwndParent, _In_ const OPENASINFO* poainfo);
SHSTDAPI_(BOOL) Shell_GetImageLists(_Out_opt_ HIMAGELIST *phiml, _Out_opt_ HIMAGELIST *phimlSmall);
SHSTDAPI_(int) Shell_GetCachedImageIndex(_In_ PCWSTR pwszIconPath, int iIconIndex, UINT uIconFlags);
SHSTDAPI_(int) Shell_GetCachedImageIndexA(_In_ LPCSTR pszIconPath, int iIconIndex, UINT uIconFlags);
SHSTDAPI_(int) Shell_GetCachedImageIndexW(_In_ LPCWSTR pszIconPath, int iIconIndex, UINT uIconFlags);
SHSTDAPI_(BOOL) SHValidateUNC(_In_opt_ HWND hwndOwner, _Inout_ PWSTR pszFile, UINT fConnect);
typedef struct PROPPRG {
    WORD flPrg;
    WORD flPrgInit;
    CHAR achTitle[PIFNAMESIZE];
    CHAR achCmdLine[PIFSTARTLOCSIZE+PIFPARAMSSIZE+1];
    CHAR achWorkDir[PIFDEFPATHSIZE];
    WORD wHotKey;
    CHAR achIconFile[PIFDEFFILESIZE];
    WORD wIconIndex;
    DWORD dwEnhModeFlags;
    DWORD dwRealModeFlags;
    CHAR achOtherFile[PIFDEFFILESIZE];
    CHAR achPIFFile[PIFMAXFILEPATH];
} PROPPRG;
typedef UNALIGNED PROPPRG *PPROPPRG;
typedef UNALIGNED PROPPRG FAR *LPPROPPRG;
typedef const UNALIGNED PROPPRG FAR *LPCPROPPRG;
SHSTDAPI_(HANDLE) PifMgr_OpenProperties(_In_ PCWSTR pszApp, _In_opt_ PCWSTR pszPIF, UINT hInf, UINT flOpt);
SHSTDAPI_(int) PifMgr_GetProperties(_In_opt_ HANDLE hProps, _In_opt_ PCSTR pszGroup, _Out_writes_bytes_opt_(cbProps) void *lpProps, int cbProps, UINT flOpt);
SHSTDAPI_(int) PifMgr_SetProperties(_In_opt_ HANDLE hProps, _In_opt_ PCSTR pszGroup, _In_reads_bytes_(cbProps) const void *lpProps, int cbProps, UINT flOpt);
SHSTDAPI_(HANDLE) PifMgr_CloseProperties(_In_opt_ HANDLE hProps, UINT flOpt);
SHSTDAPI_(void) SHSetInstanceExplorer(_In_opt_ IUnknown *punk);
SHSTDAPI_(BOOL) IsUserAnAdmin(void);
SHSTDAPI_(LRESULT) SHShellFolderView_Message(_In_ HWND hwndMain, UINT uMsg, LPARAM lParam);
DECLARE_INTERFACE_IID_(IShellFolderViewCB, IUnknown, "2047E320-F2A9-11CE-AE65-08002B2E1262")
{
    STDMETHOD(MessageSFVCB)(THIS_ UINT uMsg, WPARAM wParam, LPARAM lParam) PURE;
};
#include <pshpack8.h>
typedef struct _QCMINFO_IDMAP_PLACEMENT
{
    UINT id;
    UINT fFlags;
} QCMINFO_IDMAP_PLACEMENT;
typedef struct _QCMINFO_IDMAP
{
    UINT nMaxIds;
    QCMINFO_IDMAP_PLACEMENT pIdList[1];
} QCMINFO_IDMAP;
typedef struct _QCMINFO
{
    HMENU hmenu;
    UINT indexMenu;
    UINT idCmdFirst;
    UINT idCmdLast;
    QCMINFO_IDMAP const* pIdMap;
} QCMINFO;
typedef QCMINFO * LPQCMINFO;
typedef struct _DETAILSINFO
{
    PCUITEMID_CHILD pidl;
    int fmt;
    int cxChar;
    STRRET str;
    int iImage;
} DETAILSINFO;
typedef DETAILSINFO *PDETAILSINFO;
typedef struct _SFVM_PROPPAGE_DATA
{
    DWORD dwReserved;
    LPFNADDPROPSHEETPAGE pfn;
    LPARAM lParam;
} SFVM_PROPPAGE_DATA;
typedef struct _SFVM_HELPTOPIC_DATA
{
    WCHAR wszHelpFile[MAX_PATH];
    WCHAR wszHelpTopic[MAX_PATH];
} SFVM_HELPTOPIC_DATA;
typedef struct _ITEMSPACING
{
    int cxSmall;
    int cySmall;
    int cxLarge;
    int cyLarge;
} ITEMSPACING;
DECLARE_INTERFACE_IID_(IShellFolderView, IUnknown, "37A378C0-F82D-11CE-AE65-08002B2E1262")
{
    STDMETHOD(Rearrange) (THIS_ LPARAM lParamSort) PURE;
    STDMETHOD(GetArrangeParam) (THIS_ _Out_ LPARAM *plParamSort) PURE;
    STDMETHOD(ArrangeGrid) (THIS) PURE;
    STDMETHOD(AutoArrange) (THIS) PURE;
    STDMETHOD(GetAutoArrange) (THIS) PURE;
    STDMETHOD(AddObject) (THIS_ _In_ PUITEMID_CHILD pidl, _Out_ UINT *puItem) PURE;
    STDMETHOD(GetObject) (THIS_ _Outptr_ PITEMID_CHILD *ppidl, UINT uItem) PURE;
    STDMETHOD(RemoveObject) (THIS_ _In_opt_ PUITEMID_CHILD pidl, _Out_ UINT *puItem) PURE;
    STDMETHOD(GetObjectCount) (THIS_ _Out_ UINT *puCount) PURE;
    STDMETHOD(SetObjectCount) (THIS_ UINT uCount, UINT dwFlags) PURE;
    STDMETHOD(UpdateObject) (THIS_ _In_ PUITEMID_CHILD pidlOld, _In_ PUITEMID_CHILD pidlNew, _Out_ UINT *puItem) PURE;
    STDMETHOD(RefreshObject) (THIS_ _In_ PUITEMID_CHILD pidl, _Out_ UINT *puItem) PURE;
    STDMETHOD(SetRedraw) (THIS_ BOOL bRedraw) PURE;
    STDMETHOD(GetSelectedCount) (THIS_ _Out_ UINT *puSelected) PURE;
    STDMETHOD(GetSelectedObjects) (THIS_ _Outptr_result_buffer_(*puItems) PCUITEMID_CHILD **pppidl, _Out_ UINT *puItems) PURE;
    STDMETHOD(IsDropOnSource) (THIS_ _In_opt_ IDropTarget *pDropTarget) PURE;
    STDMETHOD(GetDragPoint) (THIS_ _Out_ POINT *ppt) PURE;
    STDMETHOD(GetDropPoint) (THIS_ _Out_ POINT *ppt) PURE;
    STDMETHOD(MoveIcons) (THIS_ _In_ IDataObject *pDataObject) PURE;
    STDMETHOD(SetItemPos) (THIS_ _In_ PCUITEMID_CHILD pidl, _In_ POINT *ppt) PURE;
    STDMETHOD(IsBkDropTarget) (THIS_ _In_opt_ IDropTarget *pDropTarget) PURE;
    STDMETHOD(SetClipboard) (THIS_ BOOL bMove) PURE;
    STDMETHOD(SetPoints) (THIS_ _In_ IDataObject *pDataObject) PURE;
    STDMETHOD(GetItemSpacing) (THIS_ _Out_ ITEMSPACING *pSpacing) PURE;
    STDMETHOD(SetCallback) (THIS_ _In_opt_ IShellFolderViewCB* pNewCB, _Outptr_result_maybenull_ IShellFolderViewCB** ppOldCB) PURE;
    STDMETHOD(Select) ( THIS_ UINT dwFlags ) PURE;
    STDMETHOD(QuerySupport) (THIS_ _Inout_ UINT * pdwSupport ) PURE;
    STDMETHOD(SetAutomationObject)(THIS_ _In_opt_ IDispatch* pdisp) PURE;
};
typedef struct _SFV_CREATE
{
    UINT cbSize;
    IShellFolder* pshf;
    IShellView* psvOuter;
    IShellFolderViewCB* psfvcb;
} SFV_CREATE;
SHSTDAPI SHCreateShellFolderView(_In_ const SFV_CREATE* pcsfv, _Outptr_ IShellView ** ppsv);
typedef HRESULT (CALLBACK * LPFNDFMCALLBACK)(_In_opt_ IShellFolder *psf, _In_opt_ HWND hwnd,
                                             _In_opt_ IDataObject *pdtobj, UINT uMsg, WPARAM wParam, LPARAM lParam);
SHSTDAPI CDefFolderMenu_Create2(_In_opt_ PCIDLIST_ABSOLUTE pidlFolder, _In_opt_ HWND hwnd,
                                UINT cidl, _In_reads_opt_(cidl) PCUITEMID_CHILD_ARRAY apidl,
                                _In_opt_ IShellFolder *psf, _In_opt_ LPFNDFMCALLBACK pfn,
                                UINT nKeys, _In_reads_opt_(nKeys) const HKEY *ahkeys,
                                _Outptr_ IContextMenu **ppcm);
typedef struct {
    HWND hwnd;
    IContextMenuCB *pcmcb;
    PCIDLIST_ABSOLUTE pidlFolder;
    IShellFolder *psf;
    UINT cidl;
    PCUITEMID_CHILD_ARRAY apidl;
    IUnknown *punkAssociationInfo;
    UINT cKeys;
    const HKEY *aKeys;
} DEFCONTEXTMENU;
SHSTDAPI SHCreateDefaultContextMenu(_In_ const DEFCONTEXTMENU *pdcm, _In_ REFIID riid, _Outptr_ void **ppv);
typedef struct
{
    DWORD cbSize;
    DWORD fMask;
    LPARAM lParam;
    UINT idCmdFirst;
    UINT idDefMax;
    LPCMINVOKECOMMANDINFO pici;
    IUnknown *punkSite;
} DFMICS, *PDFMICS;
typedef HRESULT (CALLBACK * LPFNVIEWCALLBACK)(_In_ IShellView *psvOuter,
                                              _In_ IShellFolder *psf,
                                              _In_ HWND hwndMain,
                                              UINT uMsg,
                                              WPARAM wParam,
                                              LPARAM lParam);
typedef struct _CSFV
{
    UINT cbSize;
    IShellFolder * pshf;
    IShellView * psvOuter;
    PCIDLIST_ABSOLUTE pidl;
    LONG lEvents;
    LPFNVIEWCALLBACK pfnCallback;
    FOLDERVIEWMODE fvm;
} CSFV, * LPCSFV;
#include <poppack.h>
SHSTDAPI_(IContextMenu *) SHFind_InitMenuPopup(_In_ HMENU hmenu, _In_opt_ HWND hwndOwner, UINT idCmdFirst, UINT idCmdLast);
SHSTDAPI SHCreateShellFolderViewEx(_In_ CSFV *pcsfv, _Outptr_ IShellView **ppsv);
typedef struct {
    BOOL fShowAllObjects : 1;
    BOOL fShowExtensions : 1;
    BOOL fNoConfirmRecycle : 1;
    BOOL fShowSysFiles : 1;
    BOOL fShowCompColor : 1;
    BOOL fDoubleClickInWebView : 1;
    BOOL fDesktopHTML : 1;
    BOOL fWin95Classic : 1;
    BOOL fDontPrettyPath : 1;
    BOOL fShowAttribCol : 1;
    BOOL fMapNetDrvBtn : 1;
    BOOL fShowInfoTip : 1;
    BOOL fHideIcons : 1;
    BOOL fWebView : 1;
    BOOL fFilter : 1;
    BOOL fShowSuperHidden : 1;
    BOOL fNoNetCrawling : 1;
    DWORD dwWin95Unused;
    UINT uWin95Unused;
    LONG lParamSort;
    int iSortDirection;
    UINT version;
    UINT uNotUsed;
    BOOL fSepProcess: 1;
    BOOL fStartPanelOn: 1;
    BOOL fShowStartPage: 1;
    BOOL fAutoCheckSelect: 1;
    BOOL fIconsOnly: 1;
    BOOL fShowTypeOverlay: 1;
    BOOL fShowStatusBar : 1;
    UINT fSpareFlags : 9;
} SHELLSTATEA, *LPSHELLSTATEA;
typedef struct {
    BOOL fShowAllObjects : 1;
    BOOL fShowExtensions : 1;
    BOOL fNoConfirmRecycle : 1;
    BOOL fShowSysFiles : 1;
    BOOL fShowCompColor : 1;
    BOOL fDoubleClickInWebView : 1;
    BOOL fDesktopHTML : 1;
    BOOL fWin95Classic : 1;
    BOOL fDontPrettyPath : 1;
    BOOL fShowAttribCol : 1;
    BOOL fMapNetDrvBtn : 1;
    BOOL fShowInfoTip : 1;
    BOOL fHideIcons : 1;
    BOOL fWebView : 1;
    BOOL fFilter : 1;
    BOOL fShowSuperHidden : 1;
    BOOL fNoNetCrawling : 1;
    DWORD dwWin95Unused;
    UINT uWin95Unused;
    LONG lParamSort;
    int iSortDirection;
    UINT version;
    UINT uNotUsed;
    BOOL fSepProcess: 1;
    BOOL fStartPanelOn: 1;
    BOOL fShowStartPage: 1;
    BOOL fAutoCheckSelect: 1;
    BOOL fIconsOnly: 1;
    BOOL fShowTypeOverlay: 1;
    BOOL fShowStatusBar : 1;
    UINT fSpareFlags : 9;
} SHELLSTATEW, *LPSHELLSTATEW;
SHSTDAPI_(void) SHGetSetSettings(_Inout_opt_ LPSHELLSTATE lpss, DWORD dwMask, BOOL bSet);
typedef struct {
    BOOL fShowAllObjects : 1;
    BOOL fShowExtensions : 1;
    BOOL fNoConfirmRecycle : 1;
    BOOL fShowSysFiles : 1;
    BOOL fShowCompColor : 1;
    BOOL fDoubleClickInWebView : 1;
    BOOL fDesktopHTML : 1;
    BOOL fWin95Classic : 1;
    BOOL fDontPrettyPath : 1;
    BOOL fShowAttribCol : 1;
    BOOL fMapNetDrvBtn : 1;
    BOOL fShowInfoTip : 1;
    BOOL fHideIcons : 1;
    BOOL fAutoCheckSelect: 1;
    BOOL fIconsOnly: 1;
    UINT fRestFlags : 1;
} SHELLFLAGSTATE, *LPSHELLFLAGSTATE;
SHSTDAPI_(void) SHGetSettings(_Out_ SHELLFLAGSTATE *psfs, DWORD dwMask);
SHSTDAPI SHBindToParent(_In_ PCIDLIST_ABSOLUTE pidl, _In_ REFIID riid, _Outptr_ void **ppv, _Outptr_opt_ PCUITEMID_CHILD *ppidlLast);
SHSTDAPI SHBindToFolderIDListParent(_In_opt_ IShellFolder *psfRoot, _In_ PCUIDLIST_RELATIVE pidl, _In_ REFIID riid, _Outptr_ void **ppv, _Outptr_opt_ PCUITEMID_CHILD *ppidlLast);
SHSTDAPI SHBindToFolderIDListParentEx(_In_opt_ IShellFolder *psfRoot, _In_ PCUIDLIST_RELATIVE pidl, _In_opt_ IBindCtx *ppbc, _In_ REFIID riid, _Outptr_ void **ppv, _Outptr_opt_ PCUITEMID_CHILD *ppidlLast);
SHSTDAPI SHBindToObject(_In_opt_ IShellFolder *psf, _In_ PCUIDLIST_RELATIVE pidl, _In_opt_ IBindCtx *pbc, _In_ REFIID riid, _Outptr_ void **ppv);
__inline BOOL IDListContainerIsConsistent(_In_reads_bytes_(cbAlloc) PCUIDLIST_RELATIVE pidl, _In_ UINT cbAlloc)
{
    UINT cbPidl = sizeof(pidl->mkid.cb);
    while (cbPidl <= cbAlloc &&
           pidl->mkid.cb >= sizeof(pidl->mkid.cb) &&
           pidl->mkid.cb <= cbAlloc - cbPidl)
    {
        cbPidl += pidl->mkid.cb;
        pidl = ILNext(pidl);
    }
    return cbPidl <= cbAlloc && 0 == pidl->mkid.cb;
}
SHSTDAPI SHParseDisplayName(_In_ PCWSTR pszName, _In_opt_ IBindCtx *pbc, _Outptr_ PIDLIST_ABSOLUTE *ppidl, _In_ SFGAOF sfgaoIn, _Out_opt_ SFGAOF *psfgaoOut);
SHSTDAPI SHPathPrepareForWriteA(_In_opt_ HWND hwnd, _In_opt_ IUnknown *punkEnableModless, _In_ LPCSTR pszPath, DWORD dwFlags);
SHSTDAPI SHPathPrepareForWriteW(_In_opt_ HWND hwnd, _In_opt_ IUnknown *punkEnableModless, _In_ LPCWSTR pszPath, DWORD dwFlags);
DECLARE_INTERFACE_IID_(INamedPropertyBag, IUnknown, "FB700430-952C-11d1-946F-000000000000")
{
    STDMETHOD(ReadPropertyNPB) (THIS_ _In_ PCWSTR pszBagname,
                                _In_ PCWSTR pszPropName,
                                _Inout_ PROPVARIANT *pVar) PURE;
    STDMETHOD(WritePropertyNPB)(THIS_ _In_ PCWSTR pszBagname,
                                _In_ PCWSTR pszPropName,
                                _In_ PROPVARIANT *pVar) PURE;
    STDMETHOD(RemovePropertyNPB)(THIS_ _In_ PCWSTR pszBagname,
                                 _In_ PCWSTR pszPropName) PURE;
};
SHSTDAPI SHPropStgCreate(_In_ IPropertySetStorage* psstg, _In_ REFFMTID fmtid, _In_opt_ const CLSID *pclsid, DWORD grfFlags, DWORD grfMode, DWORD dwDisposition, _Outptr_ IPropertyStorage** ppstg, _Out_opt_ UINT* puCodePage);
SHSTDAPI SHPropStgReadMultiple(_In_ IPropertyStorage* pps, UINT uCodePage, ULONG cpspec, _In_reads_(cpspec) PROPSPEC const rgpspec[], _Out_writes_all_(cpspec) PROPVARIANT rgvar[] );
SHSTDAPI SHPropStgWriteMultiple(_In_ IPropertyStorage* pps, _Inout_opt_ UINT* puCodePage, ULONG cpspec, _In_reads_(cpspec) PROPSPEC const rgpspec[], _Inout_updates_(cpspec) PROPVARIANT rgvar[], PROPID propidNameFirst );
SHSTDAPI SHCreateFileExtractIconA(_In_ LPCSTR pszFile, _In_ DWORD dwFileAttributes, _In_ REFIID riid, _Outptr_ void **ppv);
SHSTDAPI SHCreateFileExtractIconW(_In_ LPCWSTR pszFile, _In_ DWORD dwFileAttributes, _In_ REFIID riid, _Outptr_ void **ppv);
SHSTDAPI SHLimitInputEdit(_In_ HWND hwndEdit, _In_ IShellFolder *psf);
STDAPI SHGetAttributesFromDataObject(_In_opt_ IDataObject *pdo, DWORD dwAttributeMask, _Out_opt_ DWORD *pdwAttributes, _Out_opt_ UINT *pcItems);
SHSTDAPI_(int) SHMapPIDLToSystemImageListIndex(_In_ IShellFolder *pshf, _In_ PCUITEMID_CHILD pidl, _Out_opt_ int *piIndexSel);
SHSTDAPI SHCLSIDFromString(_In_ PCWSTR psz, _Out_ CLSID *pclsid);
SHSTDAPI_(int) PickIconDlg(_In_opt_ HWND hwnd, _Inout_updates_(cchIconPath) PWSTR pszIconPath, UINT cchIconPath, _Inout_opt_ int *piIconIndex);
STDAPI StgMakeUniqueName(_In_ IStorage *pstgParent, _In_ PCWSTR pszFileSpec, _In_ DWORD grfMode, _In_ REFIID riid, _Outptr_ void **ppv);
typedef enum tagIESHORTCUTFLAGS
{
    IESHORTCUT_NEWBROWSER = 0x01,
    IESHORTCUT_OPENNEWTAB = 0x02,
    IESHORTCUT_FORCENAVIGATE = 0x04,
    IESHORTCUT_BACKGROUNDTAB = 0x08,
} IESHORTCUTFLAGS;
#include <poppack.h>
}
#endif
#pragma endregion
