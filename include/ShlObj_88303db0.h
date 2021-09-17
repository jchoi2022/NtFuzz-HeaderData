#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <ole2.h>
#include <prsht.h>
#include <commctrl.h>
#include <shtypes.h>
#include <shobjidl.h>
#include <shlobj_core.h>
extern "C" {
#include <pshpack1.h>
DECLARE_INTERFACE_IID_(INewShortcutHookA, IUnknown, "000214e1-0000-0000-c000-000000000046")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppv) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(SetReferent)(THIS_ _In_ PCSTR pcszReferent, _In_opt_ HWND hwnd) PURE;
    STDMETHOD(GetReferent)(THIS_ _Out_writes_(cchReferent) PSTR pszReferent, int cchReferent) PURE;
    STDMETHOD(SetFolder)(THIS_ _In_ PCSTR pcszFolder) PURE;
    STDMETHOD(GetFolder)(THIS_ _Out_writes_(cchFolder) PSTR pszFolder, int cchFolder) PURE;
    STDMETHOD(GetName)(THIS_ _Out_writes_(cchName) PSTR pszName, int cchName) PURE;
    STDMETHOD(GetExtension)(THIS_ _Out_writes_(cchExtension) PSTR pszExtension, int cchExtension) PURE;
};
DECLARE_INTERFACE_IID_(INewShortcutHookW, IUnknown, "000214f7-0000-0000-c000-000000000046")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppv) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(SetReferent)(THIS_ _In_ PCWSTR pcszReferent, _In_opt_ HWND hwnd) PURE;
    STDMETHOD(GetReferent)(THIS_ _Out_writes_(cchReferent) PWSTR pszReferent, int cchReferent) PURE;
    STDMETHOD(SetFolder)(THIS_ _In_ PCWSTR pcszFolder) PURE;
    STDMETHOD(GetFolder)(THIS_ _Out_writes_(cchFolder) PWSTR pszFolder, int cchFolder) PURE;
    STDMETHOD(GetName)(THIS_ _Out_writes_(cchName) PWSTR pszName, int cchName) PURE;
    STDMETHOD(GetExtension)(THIS_ _Out_writes_(cchExtension) PWSTR pszExtension, int cchExtension) PURE;
};
DECLARE_INTERFACE_IID_(ICopyHookA, IUnknown, "000214EF-0000-0000-c000-000000000046")
{
    STDMETHOD_(UINT, CopyCallback)(THIS_ _In_opt_ HWND hwnd, UINT wFunc, UINT wFlags, _In_ PCSTR pszSrcFile, DWORD dwSrcAttribs,
                                   _In_opt_ PCSTR pszDestFile, DWORD dwDestAttribs) PURE;
};
typedef ICopyHookA * LPCOPYHOOKA;
DECLARE_INTERFACE_IID_(ICopyHookW, IUnknown, "000214FC-0000-0000-c000-000000000046")
{
    STDMETHOD_(UINT,CopyCallback)(THIS_ _In_opt_ HWND hwnd, UINT wFunc, UINT wFlags, _In_ PCWSTR pszSrcFile, DWORD dwSrcAttribs,
                                  _In_opt_ PCWSTR pszDestFile, DWORD dwDestAttribs) PURE;
};
typedef ICopyHookW * LPCOPYHOOKW;
DECLARE_INTERFACE_IID_(ICurrentWorkingDirectory, IUnknown, "91956D21-9276-11d1-921A-006097DF5BD4")
{
    STDMETHOD(GetDirectory) (THIS_ _Out_writes_(cchSize) PWSTR pwzPath, DWORD cchSize) PURE;
    STDMETHOD(SetDirectory) (THIS_ _In_ PCWSTR pwzPath) PURE;
};
DECLARE_INTERFACE_IID_(IDockingWindowFrame, IOleWindow, "47d2657a-7b27-11d0-8ca9-00a0c92dbfe8")
{
    STDMETHOD(AddToolbar) (THIS_ _In_ IUnknown* punkSrc, _In_ PCWSTR pwszItem, DWORD dwAddFlags) PURE;
    STDMETHOD(RemoveToolbar) (THIS_ _In_ IUnknown* punkSrc, DWORD dwRemoveFlags) PURE;
    STDMETHOD(FindToolbar) (THIS_ _In_ PCWSTR pwszItem, _In_ REFIID riid, _Outptr_ void **ppv) PURE;
};
DECLARE_INTERFACE_IID_(IThumbnailCapture, IUnknown, "4ea39266-7211-409f-b622-f63dbd16c533")
{
    STDMETHOD (CaptureThumbnail) ( THIS_ _In_ const SIZE * pMaxSize,
                                      _In_ IUnknown * pHTMLDoc2,
                                      _Out_ HBITMAP * phbmThumbnail ) PURE;
};
typedef IThumbnailCapture * LPTHUMBNAILCAPTURE;
#include <pshpack8.h>
typedef struct {
    DWORD dwMask;
    DWORD dwStateMask;
    DWORD dwState;
    COLORREF crBkgnd;
    COLORREF crBtnLt;
    COLORREF crBtnDk;
    WORD wViewMode;
    WORD wAlign;
    IShellFolder * psf;
    PIDLIST_ABSOLUTE pidl;
} BANDINFOSFB, *PBANDINFOSFB;
#include <poppack.h>
DECLARE_INTERFACE_IID_(IShellFolderBand, IUnknown, "7FE80CC8-C247-11d0-B93A-00A0C90312E1")
{
    STDMETHOD(InitializeSFB)(THIS_ _In_opt_ IShellFolder *psf, _In_opt_ PCIDLIST_ABSOLUTE pidl) PURE;
    STDMETHOD(SetBandInfoSFB)(THIS_ _In_ PBANDINFOSFB pbi) PURE;
    STDMETHOD(GetBandInfoSFB)(THIS_ _Inout_ PBANDINFOSFB pbi) PURE;
};
enum {
    SFBID_PIDLCHANGED,
};
DECLARE_INTERFACE_IID_(IDeskBarClient, IOleWindow, "EB0FE175-1A3A-11D0-89B3-00A0C90A90AC")
{
    STDMETHOD(SetDeskBarSite) (THIS_ _In_opt_ IUnknown* punkSite) PURE;
    STDMETHOD(SetModeDBC) (THIS_ DWORD dwMode) PURE;
    STDMETHOD(UIActivateDBC) (THIS_ DWORD dwState) PURE;
    STDMETHOD(GetSize) (THIS_ DWORD dwWhich, _Out_ LPRECT prc) PURE;
};
enum {
    DBCID_EMPTY = 0,
    DBCID_ONDRAG = 1,
    DBCID_CLSIDOFBAR = 2,
    DBCID_RESIZE = 3,
    DBCID_GETBAR = 4,
};
DECLARE_INTERFACE_IID_(IActiveDesktopP, IUnknown, "52502EE0-EC80-11D0-89AB-00C04FC2972D")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppv) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD (SetSafeMode)(THIS_ DWORD dwFlags) PURE;
    STDMETHOD (EnsureUpdateHTML)(THIS) PURE;
    STDMETHOD (SetScheme)(THIS_ _In_ PCWSTR pwszSchemeName, DWORD dwFlags) PURE;
    STDMETHOD (GetScheme)(THIS_ _Out_writes_(*pdwcchBuffer) PWSTR pwszSchemeName, _Inout_ DWORD *pdwcchBuffer, DWORD dwFlags) PURE;
};
typedef IActiveDesktopP * LPACTIVEDESKTOPP;
DECLARE_INTERFACE_IID_(IADesktopP2, IUnknown, "B22754E2-4574-11d1-9888-006097DEACF9")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppv) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD (ReReadWallpaper)(THIS) PURE;
    STDMETHOD (GetADObjectFlags)(THIS_ _Out_ DWORD *pdwFlags, DWORD dwMask) PURE;
    STDMETHOD (UpdateAllDesktopSubscriptions)(THIS) PURE;
    STDMETHOD (MakeDynamicChanges)(THIS_ _In_ IOleObject *pOleObj) PURE;
};
typedef IADesktopP2 * LPADESKTOPP2;
#include <pshpack1.h>
typedef struct {
    SHCOLUMNID scid;
    VARTYPE vt;
    DWORD fmt;
    UINT cChars;
    DWORD csFlags;
    WCHAR wszTitle[MAX_COLUMN_NAME_LEN];
    WCHAR wszDescription[MAX_COLUMN_DESC_LEN];
} SHCOLUMNINFO, *LPSHCOLUMNINFO;
typedef const SHCOLUMNINFO* LPCSHCOLUMNINFO;
#include <poppack.h>
#include <pshpack8.h>
typedef struct {
    ULONG dwFlags;
    ULONG dwReserved;
    WCHAR wszFolder[MAX_PATH];
} SHCOLUMNINIT, *LPSHCOLUMNINIT;
typedef const SHCOLUMNINIT* LPCSHCOLUMNINIT;
typedef struct {
    ULONG dwFlags;
    DWORD dwFileAttributes;
    ULONG dwReserved;
    WCHAR* pwszExt;
    WCHAR wszFile[MAX_PATH];
} SHCOLUMNDATA, *LPSHCOLUMNDATA;
typedef const SHCOLUMNDATA* LPCSHCOLUMNDATA;
#include <poppack.h>
DECLARE_INTERFACE_IID_(IColumnProvider, IUnknown, "E8025004-1C42-11d2-BE2C-00A0C9A83DA1")
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID riid, _Outptr_ void **ppv) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD (Initialize)(THIS_ _In_ LPCSHCOLUMNINIT psci) PURE;
    STDMETHOD (GetColumnInfo)(THIS_ DWORD dwIndex, _Out_ SHCOLUMNINFO *psci) PURE;
    STDMETHOD (GetItemData)(THIS_ _In_ LPCSHCOLUMNID pscid, _In_ LPCSHCOLUMNDATA pscd, _Out_ VARIANT *pvarData) PURE;
};
typedef struct _SHChangeProductKeyAsIDList {
    USHORT cb;
    WCHAR wszProductKey[39];
    USHORT cbZero;
} SHChangeProductKeyAsIDList, *LPSHChangeProductKeyAsIDList;
STDAPI_(void) SHChangeNotifyRegisterThread(SCNRT_STATUS status);
SHSTDAPI_(void) PathQualify(_Inout_ PWSTR psz);
SHSTDAPI_(BOOL) PathIsSlowA(_In_ LPCSTR pszFile, DWORD dwAttr);
SHSTDAPI_(BOOL) PathIsSlowW(_In_ LPCWSTR pszFile, DWORD dwAttr);
SHSTDAPI_(BOOL) GetFileNameFromBrowse(_In_opt_ HWND hwnd, _Inout_updates_(cchFilePath) PWSTR pszFilePath, UINT cchFilePath,
                                      _In_opt_ PCWSTR pszWorkingDir, _In_ PCWSTR pszDefExt, _In_opt_ PCWSTR pszFilters, _In_opt_ PCWSTR pszTitle);
SHSTDAPI_(int) DriveType(int iDrive);
WINSHELLAPI HPSXA WINAPI SHCreatePropSheetExtArray(_In_ HKEY hKey, _In_opt_ PCWSTR pszSubKey, UINT max_iface);
DECLARE_INTERFACE_IID_(IDocViewSite, IUnknown, "87D605E0-C511-11CF-89A9-00A0C9054129")
{
    STDMETHOD(OnSetTitle) (THIS_ _In_ VARIANTARG *pvTitle) PURE;
};
DECLARE_INTERFACE_IID_(IInitializeObject, IUnknown, "4622AD16-FF23-11d0-8D34-00A0C90F2719")
{
    STDMETHOD(Initialize)(THIS) PURE;
};
enum
{
    BMICON_LARGE = 0,
    BMICON_SMALL
};
DECLARE_INTERFACE_IID_(IBanneredBar, IUnknown, "596A9A94-013E-11d1-8D34-00A0C90F2719")
{
    STDMETHOD(SetIconSize)(THIS_ DWORD iIcon) PURE;
    STDMETHOD(GetIconSize)(THIS_ _Out_ DWORD* piIcon) PURE;
    STDMETHOD(SetBitmap)(THIS_ _In_ HBITMAP hBitmap) PURE;
    STDMETHOD(GetBitmap)(THIS_ _Out_ HBITMAP* phBitmap) PURE;
};
#include <pshpack8.h>
typedef struct _TBINFO
{
    UINT cbuttons;
    UINT uFlags;
} TBINFO;
typedef TBINFO * LPTBINFO;
SHSTDAPI_(BOOL) SHOpenPropSheetA(_In_opt_ LPCSTR pszCaption, _In_reads_opt_(ckeys) HKEY ahkeys[], UINT ckeys,
                                 _In_opt_ const CLSID * pclsidDefault, _In_ IDataObject *pdtobj,
                                 _In_opt_ IShellBrowser *psb, _In_opt_ LPCSTR pStartPage);
SHSTDAPI_(BOOL) SHOpenPropSheetW(_In_opt_ LPCWSTR pszCaption, _In_reads_opt_(ckeys) HKEY ahkeys[], UINT ckeys,
                                 _In_opt_ const CLSID * pclsidDefault, _In_ IDataObject *pdtobj,
                                 _In_opt_ IShellBrowser *psb, _In_opt_ LPCWSTR pStartPage);
        (BOOL)SHShellFolderView_Message(_hwnd, SFVM_REARRANGE, _lparam)
        (LPARAM)SHShellFolderView_Message(_hwnd, SFVM_ADDOBJECT, (LPARAM)(_pidl))
        (LPARAM)SHShellFolderView_Message(_hwnd, SFVM_REMOVEOBJECT, (LPARAM)(_pidl))
        (LPARAM)SHShellFolderView_Message(_hwnd, SFVM_UPDATEOBJECT, (LPARAM)(_ppidl))
        (LPARAM)SHShellFolderView_Message(_hwnd, SFVM_GETSELECTEDOBJECTS, (LPARAM)(ppidl))
typedef struct _SFV_SETITEMPOS
{
        PCUITEMID_CHILD pidl;
        POINT pt;
} SFV_SETITEMPOS;
typedef SFV_SETITEMPOS *LPSFV_SETITEMPOS;
typedef const SFV_SETITEMPOS *PCSFV_SETITEMPOS;
{ SFV_SETITEMPOS _sip = {_pidl, {_x, _y}}; \
        SHShellFolderView_Message(_hwnd, SFVM_SETITEMPOS, (LPARAM)(LPSFV_SETITEMPOS)&_sip);}
        (void)SHShellFolderView_Message(_hwnd, SFVM_SETCLIPBOARD, (LPARAM)(DWORD)(_dwEffect))
        (void)SHShellFolderView_Message(_hwnd, SFVM_SETPOINTS, (LPARAM)(_pdtobj))
#include <poppack.h>
SHDOCAPI_(DWORD) SoftwareUpdateMessageBox( _In_opt_ HWND hWnd,
                                           _In_ PCWSTR pszDistUnit,
                                           DWORD dwFlags,
                                           _Out_opt_ LPSOFTDISTINFO psdi );
#include <pshpack8.h>
#include <poppack.h>
SHSTDAPI SHMultiFileProperties(_In_ IDataObject *pdtobj, DWORD dwFlags);
SHSTDAPI SHCreateQueryCancelAutoPlayMoniker(_Outptr_ IMoniker** ppmoniker);
STDAPI_(void) PerUserInit(void);
SHSTDAPI_(BOOL)SHRunControlPanel(_In_ PCWSTR lpcszCmdLine, _In_opt_ HWND hwndMsgParent);
#include <pshpack8.h>
typedef struct tagAAMENUFILENAME
{
  SHORT cbTotal;
  BYTE rgbReserved[12];
  WCHAR szFileName[1];
} AASHELLMENUFILENAME, *LPAASHELLMENUFILENAME;
typedef struct tagAASHELLMENUITEM
{
  void* lpReserved1;
  int iReserved;
  UINT uiReserved;
  LPAASHELLMENUFILENAME lpName;
  LPWSTR psz;
} AASHELLMENUITEM, *LPAASHELLMENUITEM;
#include <poppack.h>
SHDOCAPI_(BOOL) ImportPrivacySettings(_In_ PCWSTR pszFilename, _Inout_ BOOL* pfParsePrivacyPreferences, _Inout_ BOOL* pfParsePerSiteRules);
typedef interface IEnumPrivacyRecords IEnumPrivacyRecords;
SHDOCAPI DoPrivacyDlg(_In_opt_ HWND hwndOwner, _In_ PCWSTR pszUrl, _In_ IEnumPrivacyRecords *pPrivacyEnum, BOOL fReportAllSites);
#include <poppack.h>
}
#endif
#pragma endregion
