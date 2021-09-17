       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4201)
typedef struct _msoavinfo
{
int cbsize;
struct {
 ULONG fPath:1;
 ULONG fReadOnlyRequest:1;
 ULONG fInstalled:1;
 ULONG fHttpDownload:1;
 };
HWND hwnd;
union {
 WCHAR *pwzFullPath;
 LPSTORAGE lpstg;
 }u;
WCHAR *pwzHostName;
WCHAR *pwzOrigURL;
}MSOAVINFO;
#pragma warning(pop)
DEFINE_GUID(IID_IOfficeAntiVirus,
0x56ffcc30, 0xd398, 0x11d0, 0xb2, 0xae, 0x0, 0xa0, 0xc9, 0x8, 0xfa, 0x49);
DEFINE_GUID(CATID_MSOfficeAntiVirus,
0x56ffcc30, 0xd398, 0x11d0, 0xb2, 0xae, 0x0, 0xa0, 0xc9, 0x8, 0xfa, 0x49);
DECLARE_INTERFACE_(IOfficeAntiVirus, IUnknown)
{
    BEGIN_INTERFACE
    STDMETHOD(QueryInterface)(THIS_ REFIID riid, LPVOID FAR* ppvObj) PURE;
    STDMETHOD_(ULONG, AddRef)(THIS) PURE;
    STDMETHOD_(ULONG, Release)(THIS) PURE;
 STDMETHOD_(HRESULT, Scan)(THIS_ MSOAVINFO *pmsoavinfo ) PURE;
};
MSOAPI_(BOOL) MsoFAnyAntiVirus(HMSOINST hmsoinst);
MSOAPI_(BOOL) MsoFDoAntiVirusScan(HMSOINST hmsoinst, MSOAVINFO *msoavinfo);
MSOAPI_(void) MsoFreeMsoavStuff(HMSOINST hmsoinst);
MSOAPI_(BOOL) MsoFDoSecurityLevelDlg(HMSOINST hmsoinst,DWORD msorid, int *pSecurityLevel,
 BOOL *pfTrustInstalled, HWND hwndParent, BOOL fShowVirusCheckers,
 WCHAR *wzHelpFile, DWORD dwHelpId);
MSOAPI_(int) MsoMsoedmDialog(HMSOINST hmsoinst, BOOL fAppIsActive, BOOL fHasVBMacros,
 BOOL fHasXLMMacros, void *pvDigSigStore, void *pvMacro, int nAppID, HWND hwnd,
 const WCHAR *pwtzPath, int iClient, int iSecurityLevel, int *pmsodsv,
 WCHAR *wzHelpFile, DWORD dwHelpId, HANDLE hFileDLL, BOOL fUserControl);
MSOAPI_(int) MsoMsoslGetSL(HMSOINST hmsoinst);
MSOAPI_(int) MsoMsoslSetSL(DWORD msorid, HMSOINST hmsoinst);
#endif
#pragma endregion
