#include <winapifamily.h>
#include <SpecStrings.h>
extern "C" {
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DECLARE_HANDLE(HDROP);
_Success_(return != 0)
SHSTDAPI_(UINT) DragQueryFileA(_In_ HDROP hDrop, _In_ UINT iFile, _Out_writes_opt_(cch) LPSTR lpszFile, _In_ UINT cch);
_Success_(return != 0)
SHSTDAPI_(UINT) DragQueryFileW(_In_ HDROP hDrop, _In_ UINT iFile, _Out_writes_opt_(cch) LPWSTR lpszFile, _In_ UINT cch);
SHSTDAPI_(BOOL) DragQueryPoint(_In_ HDROP hDrop, _Out_ POINT *ppt);
SHSTDAPI_(void) DragFinish(_In_ HDROP hDrop);
SHSTDAPI_(void) DragAcceptFiles(_In_ HWND hWnd, _In_ BOOL fAccept);
SHSTDAPI_(HINSTANCE) ShellExecuteA(_In_opt_ HWND hwnd, _In_opt_ LPCSTR lpOperation, _In_ LPCSTR lpFile, _In_opt_ LPCSTR lpParameters,
    _In_opt_ LPCSTR lpDirectory, _In_ INT nShowCmd);
SHSTDAPI_(HINSTANCE) ShellExecuteW(_In_opt_ HWND hwnd, _In_opt_ LPCWSTR lpOperation, _In_ LPCWSTR lpFile, _In_opt_ LPCWSTR lpParameters,
    _In_opt_ LPCWSTR lpDirectory, _In_ INT nShowCmd);
_Success_(return > 32)
SHSTDAPI_(HINSTANCE) FindExecutableA(_In_ LPCSTR lpFile, _In_opt_ LPCSTR lpDirectory, _Out_writes_(MAX_PATH) LPSTR lpResult);
_Success_(return > 32)
SHSTDAPI_(HINSTANCE) FindExecutableW(_In_ LPCWSTR lpFile, _In_opt_ LPCWSTR lpDirectory, _Out_writes_(MAX_PATH) LPWSTR lpResult);
SHSTDAPI_(LPWSTR *) CommandLineToArgvW(_In_ LPCWSTR lpCmdLine, _Out_ int* pNumArgs);
SHSTDAPI_(INT) ShellAboutA(_In_opt_ HWND hWnd, _In_ LPCSTR szApp, _In_opt_ LPCSTR szOtherStuff, _In_opt_ HICON hIcon);
SHSTDAPI_(INT) ShellAboutW(_In_opt_ HWND hWnd, _In_ LPCWSTR szApp, _In_opt_ LPCWSTR szOtherStuff, _In_opt_ HICON hIcon);
SHSTDAPI_(HICON) DuplicateIcon(_Reserved_ HINSTANCE hInst, _In_ HICON hIcon);
SHSTDAPI_(HICON) ExtractAssociatedIconA(_Reserved_ HINSTANCE hInst, _Inout_updates_(128) LPSTR pszIconPath, _Inout_ WORD *piIcon);
SHSTDAPI_(HICON) ExtractAssociatedIconW(_Reserved_ HINSTANCE hInst, _Inout_updates_(128) LPWSTR pszIconPath, _Inout_ WORD *piIcon);
SHSTDAPI_(HICON) ExtractAssociatedIconExA(_Reserved_ HINSTANCE hInst, _Inout_updates_(128) LPSTR pszIconPath, _Inout_ WORD *piIconIndex, _Inout_ WORD *piIconId);
SHSTDAPI_(HICON) ExtractAssociatedIconExW(_Reserved_ HINSTANCE hInst, _Inout_updates_(128) LPWSTR pszIconPath, _Inout_ WORD *piIconIndex, _Inout_ WORD *piIconId);
SHSTDAPI_(HICON) ExtractIconA(_Reserved_ HINSTANCE hInst, _In_ LPCSTR pszExeFileName, UINT nIconIndex);
SHSTDAPI_(HICON) ExtractIconW(_Reserved_ HINSTANCE hInst, _In_ LPCWSTR pszExeFileName, UINT nIconIndex);
typedef struct _DRAGINFOA {
    UINT uSize;
    POINT pt;
    BOOL fNC;
    PZZSTR lpFileList;
    DWORD grfKeyState;
} DRAGINFOA, *LPDRAGINFOA;
typedef struct _DRAGINFOW {
    UINT uSize;
    POINT pt;
    BOOL fNC;
    PZZWSTR lpFileList;
    DWORD grfKeyState;
} DRAGINFOW, *LPDRAGINFOW;
typedef DRAGINFOW DRAGINFO;
typedef LPDRAGINFOW LPDRAGINFO;
typedef struct _AppBarData
{
    DWORD cbSize;
    HWND hWnd;
    UINT uCallbackMessage;
    UINT uEdge;
    RECT rc;
    LPARAM lParam;
} APPBARDATA, *PAPPBARDATA;
SHSTDAPI_(UINT_PTR) SHAppBarMessage(_In_ DWORD dwMessage, _Inout_ PAPPBARDATA pData);
SHSTDAPI_(DWORD) DoEnvironmentSubstA(_Inout_updates_(cchSrc) LPSTR pszSrc, UINT cchSrc);
SHSTDAPI_(DWORD) DoEnvironmentSubstW(_Inout_updates_(cchSrc) LPWSTR pszSrc, UINT cchSrc);
SHSTDAPI_(UINT) ExtractIconExA(_In_ LPCSTR lpszFile, int nIconIndex, _Out_writes_opt_(nIcons) HICON *phiconLarge, _Out_writes_opt_(nIcons) HICON *phiconSmall, UINT nIcons);
SHSTDAPI_(UINT) ExtractIconExW(_In_ LPCWSTR lpszFile, int nIconIndex, _Out_writes_opt_(nIcons) HICON *phiconLarge, _Out_writes_opt_(nIcons) HICON *phiconSmall, UINT nIcons);
typedef WORD FILEOP_FLAGS;
typedef WORD PRINTEROP_FLAGS;
typedef struct _SHFILEOPSTRUCTA
{
    HWND hwnd;
    UINT wFunc;
    PCZZSTR pFrom;
    PCZZSTR pTo;
    FILEOP_FLAGS fFlags;
    BOOL fAnyOperationsAborted;
    LPVOID hNameMappings;
    PCSTR lpszProgressTitle;
} SHFILEOPSTRUCTA, *LPSHFILEOPSTRUCTA;
typedef struct _SHFILEOPSTRUCTW
{
    HWND hwnd;
    UINT wFunc;
    PCZZWSTR pFrom;
    PCZZWSTR pTo;
    FILEOP_FLAGS fFlags;
    BOOL fAnyOperationsAborted;
    LPVOID hNameMappings;
    PCWSTR lpszProgressTitle;
} SHFILEOPSTRUCTW, *LPSHFILEOPSTRUCTW;
typedef SHFILEOPSTRUCTW SHFILEOPSTRUCT;
typedef LPSHFILEOPSTRUCTW LPSHFILEOPSTRUCT;
SHSTDAPI_(int) SHFileOperationA(_Inout_ LPSHFILEOPSTRUCTA lpFileOp);
SHSTDAPI_(int) SHFileOperationW(_Inout_ LPSHFILEOPSTRUCTW lpFileOp);
SHSTDAPI_(void) SHFreeNameMappings(_In_opt_ HANDLE hNameMappings);
typedef struct _SHNAMEMAPPINGA
{
    LPSTR pszOldPath;
    LPSTR pszNewPath;
    int cchOldPath;
    int cchNewPath;
} SHNAMEMAPPINGA, *LPSHNAMEMAPPINGA;
typedef struct _SHNAMEMAPPINGW
{
    LPWSTR pszOldPath;
    LPWSTR pszNewPath;
    int cchOldPath;
    int cchNewPath;
} SHNAMEMAPPINGW, *LPSHNAMEMAPPINGW;
typedef SHNAMEMAPPINGW SHNAMEMAPPING;
typedef LPSHNAMEMAPPINGW LPSHNAMEMAPPING;
typedef struct _SHELLEXECUTEINFOA
{
    DWORD cbSize;
    ULONG fMask;
    HWND hwnd;
    LPCSTR lpVerb;
    LPCSTR lpFile;
    LPCSTR lpParameters;
    LPCSTR lpDirectory;
    int nShow;
    HINSTANCE hInstApp;
    void *lpIDList;
    LPCSTR lpClass;
    HKEY hkeyClass;
    DWORD dwHotKey;
    union
    {
        HANDLE hIcon;
        HANDLE hMonitor;
    } DUMMYUNIONNAME;
    HANDLE hProcess;
} SHELLEXECUTEINFOA, *LPSHELLEXECUTEINFOA;
typedef struct _SHELLEXECUTEINFOW
{
    DWORD cbSize;
    ULONG fMask;
    HWND hwnd;
    LPCWSTR lpVerb;
    LPCWSTR lpFile;
    LPCWSTR lpParameters;
    LPCWSTR lpDirectory;
    int nShow;
    HINSTANCE hInstApp;
    void *lpIDList;
    LPCWSTR lpClass;
    HKEY hkeyClass;
    DWORD dwHotKey;
    union
    {
        HANDLE hIcon;
        HANDLE hMonitor;
    } DUMMYUNIONNAME;
    HANDLE hProcess;
} SHELLEXECUTEINFOW, *LPSHELLEXECUTEINFOW;
typedef SHELLEXECUTEINFOW SHELLEXECUTEINFO;
typedef LPSHELLEXECUTEINFOW LPSHELLEXECUTEINFO;
SHSTDAPI_(BOOL) ShellExecuteExA(_Inout_ SHELLEXECUTEINFOA *pExecInfo);
SHSTDAPI_(BOOL) ShellExecuteExW(_Inout_ SHELLEXECUTEINFOW *pExecInfo);
typedef struct _SHCREATEPROCESSINFOW
{
    DWORD cbSize;
    ULONG fMask;
    HWND hwnd;
    LPCWSTR pszFile;
    LPCWSTR pszParameters;
    LPCWSTR pszCurrentDirectory;
    HANDLE hUserToken;
    LPSECURITY_ATTRIBUTES lpProcessAttributes;
    LPSECURITY_ATTRIBUTES lpThreadAttributes;
    BOOL bInheritHandles;
    DWORD dwCreationFlags;
    LPSTARTUPINFOW lpStartupInfo;
    LPPROCESS_INFORMATION lpProcessInformation;
} SHCREATEPROCESSINFOW, *PSHCREATEPROCESSINFOW;
SHSTDAPI_(BOOL) SHCreateProcessAsUserW(_Inout_ PSHCREATEPROCESSINFOW pscpi);
SHSTDAPI SHEvaluateSystemCommandTemplate(_In_ PCWSTR pszCmdTemplate, _Outptr_ PWSTR *ppszApplication, _Outptr_opt_ PWSTR *ppszCommandLine, _Outptr_opt_ PWSTR *ppszParameters);
typedef enum ASSOCCLASS
{
    ASSOCCLASS_SHELL_KEY = 0,
    ASSOCCLASS_PROGID_KEY,
    ASSOCCLASS_PROGID_STR,
    ASSOCCLASS_CLSID_KEY,
    ASSOCCLASS_CLSID_STR,
    ASSOCCLASS_APP_KEY,
    ASSOCCLASS_APP_STR,
    ASSOCCLASS_SYSTEM_STR,
    ASSOCCLASS_FOLDER,
    ASSOCCLASS_STAR,
    ASSOCCLASS_FIXED_PROGID_STR,
    ASSOCCLASS_PROTOCOL_STR,
} ASSOCCLASS;
typedef struct ASSOCIATIONELEMENT
{
    ASSOCCLASS ac;
    HKEY hkClass;
    PCWSTR pszClass;
} ASSOCIATIONELEMENT;
SHSTDAPI AssocCreateForClasses(_In_reads_(cClasses) const ASSOCIATIONELEMENT *rgClasses, ULONG cClasses, _In_ REFIID riid, _COM_Outptr_ void **ppv);
typedef struct _SHQUERYRBINFO {
    DWORD cbSize;
    __int64 i64Size;
    __int64 i64NumItems;
} SHQUERYRBINFO, *LPSHQUERYRBINFO;
SHSTDAPI SHQueryRecycleBinA(_In_opt_ LPCSTR pszRootPath, _Inout_ LPSHQUERYRBINFO pSHQueryRBInfo);
SHSTDAPI SHQueryRecycleBinW(_In_opt_ LPCWSTR pszRootPath, _Inout_ LPSHQUERYRBINFO pSHQueryRBInfo);
SHSTDAPI SHEmptyRecycleBinA(_In_opt_ HWND hwnd, _In_opt_ LPCSTR pszRootPath, DWORD dwFlags);
SHSTDAPI SHEmptyRecycleBinW(_In_opt_ HWND hwnd, _In_opt_ LPCWSTR pszRootPath, DWORD dwFlags);
typedef enum
{
    QUNS_NOT_PRESENT = 1,
    QUNS_BUSY = 2,
    QUNS_RUNNING_D3D_FULL_SCREEN = 3,
    QUNS_PRESENTATION_MODE = 4,
    QUNS_ACCEPTS_NOTIFICATIONS = 5,
    QUNS_QUIET_TIME = 6,
    QUNS_APP = 7,
} QUERY_USER_NOTIFICATION_STATE;
SHSTDAPI SHQueryUserNotificationState(_Out_ QUERY_USER_NOTIFICATION_STATE *pquns);
SHSTDAPI SHGetPropertyStoreForWindow(_In_ HWND hwnd, _In_ REFIID riid, _Outptr_ void** ppv);
typedef struct _NOTIFYICONDATAA {
    DWORD cbSize;
    HWND hWnd;
    UINT uID;
    UINT uFlags;
    UINT uCallbackMessage;
    HICON hIcon;
    CHAR szTip[128];
    DWORD dwState;
    DWORD dwStateMask;
    CHAR szInfo[256];
    union {
        UINT uTimeout;
        UINT uVersion;
    } DUMMYUNIONNAME;
    CHAR szInfoTitle[64];
    DWORD dwInfoFlags;
    GUID guidItem;
    HICON hBalloonIcon;
} NOTIFYICONDATAA, *PNOTIFYICONDATAA;
typedef struct _NOTIFYICONDATAW {
    DWORD cbSize;
    HWND hWnd;
    UINT uID;
    UINT uFlags;
    UINT uCallbackMessage;
    HICON hIcon;
    WCHAR szTip[128];
    DWORD dwState;
    DWORD dwStateMask;
    WCHAR szInfo[256];
    union {
        UINT uTimeout;
        UINT uVersion;
    } DUMMYUNIONNAME;
    WCHAR szInfoTitle[64];
    DWORD dwInfoFlags;
    GUID guidItem;
    HICON hBalloonIcon;
} NOTIFYICONDATAW, *PNOTIFYICONDATAW;
typedef NOTIFYICONDATAW NOTIFYICONDATA;
typedef PNOTIFYICONDATAW PNOTIFYICONDATA;
typedef struct _NOTIFYICONIDENTIFIER {
    DWORD cbSize;
    HWND hWnd;
    UINT uID;
    GUID guidItem;
} NOTIFYICONIDENTIFIER, *PNOTIFYICONIDENTIFIER;
SHSTDAPI_(BOOL) Shell_NotifyIconA(DWORD dwMessage, _In_ PNOTIFYICONDATAA lpData);
SHSTDAPI_(BOOL) Shell_NotifyIconW(DWORD dwMessage, _In_ PNOTIFYICONDATAW lpData);
SHSTDAPI Shell_NotifyIconGetRect(_In_ const NOTIFYICONIDENTIFIER* identifier, _Out_ RECT* iconLocation);
typedef struct _SHFILEINFOA
{
        HICON hIcon;
        int iIcon;
        DWORD dwAttributes;
        CHAR szDisplayName[MAX_PATH];
        CHAR szTypeName[80];
} SHFILEINFOA;
typedef struct _SHFILEINFOW
{
        HICON hIcon;
        int iIcon;
        DWORD dwAttributes;
        WCHAR szDisplayName[MAX_PATH];
        WCHAR szTypeName[80];
} SHFILEINFOW;
typedef SHFILEINFOW SHFILEINFO;
SHSTDAPI_(DWORD_PTR) SHGetFileInfoA(_In_ LPCSTR pszPath, DWORD dwFileAttributes, _Inout_updates_bytes_opt_(cbFileInfo) SHFILEINFOA *psfi,
    UINT cbFileInfo, UINT uFlags);
SHSTDAPI_(DWORD_PTR) SHGetFileInfoW(_In_ LPCWSTR pszPath, DWORD dwFileAttributes, _Inout_updates_bytes_opt_(cbFileInfo) SHFILEINFOW *psfi,
    UINT cbFileInfo, UINT uFlags);
typedef struct _SHSTOCKICONINFO
{
    DWORD cbSize;
    HICON hIcon;
    int iSysImageIndex;
    int iIcon;
    WCHAR szPath[MAX_PATH];
} SHSTOCKICONINFO;
typedef enum SHSTOCKICONID
{
    SIID_DOCNOASSOC = 0,
    SIID_DOCASSOC = 1,
    SIID_APPLICATION = 2,
    SIID_FOLDER = 3,
    SIID_FOLDEROPEN = 4,
    SIID_DRIVE525 = 5,
    SIID_DRIVE35 = 6,
    SIID_DRIVEREMOVE = 7,
    SIID_DRIVEFIXED = 8,
    SIID_DRIVENET = 9,
    SIID_DRIVENETDISABLED = 10,
    SIID_DRIVECD = 11,
    SIID_DRIVERAM = 12,
    SIID_WORLD = 13,
    SIID_SERVER = 15,
    SIID_PRINTER = 16,
    SIID_MYNETWORK = 17,
    SIID_FIND = 22,
    SIID_HELP = 23,
    SIID_SHARE = 28,
    SIID_LINK = 29,
    SIID_SLOWFILE = 30,
    SIID_RECYCLER = 31,
    SIID_RECYCLERFULL = 32,
    SIID_MEDIACDAUDIO = 40,
    SIID_LOCK = 47,
    SIID_AUTOLIST = 49,
    SIID_PRINTERNET = 50,
    SIID_SERVERSHARE = 51,
    SIID_PRINTERFAX = 52,
    SIID_PRINTERFAXNET = 53,
    SIID_PRINTERFILE = 54,
    SIID_STACK = 55,
    SIID_MEDIASVCD = 56,
    SIID_STUFFEDFOLDER = 57,
    SIID_DRIVEUNKNOWN = 58,
    SIID_DRIVEDVD = 59,
    SIID_MEDIADVD = 60,
    SIID_MEDIADVDRAM = 61,
    SIID_MEDIADVDRW = 62,
    SIID_MEDIADVDR = 63,
    SIID_MEDIADVDROM = 64,
    SIID_MEDIACDAUDIOPLUS = 65,
    SIID_MEDIACDRW = 66,
    SIID_MEDIACDR = 67,
    SIID_MEDIACDBURN = 68,
    SIID_MEDIABLANKCD = 69,
    SIID_MEDIACDROM = 70,
    SIID_AUDIOFILES = 71,
    SIID_IMAGEFILES = 72,
    SIID_VIDEOFILES = 73,
    SIID_MIXEDFILES = 74,
    SIID_FOLDERBACK = 75,
    SIID_FOLDERFRONT = 76,
    SIID_SHIELD = 77,
    SIID_WARNING = 78,
    SIID_INFO = 79,
    SIID_ERROR = 80,
    SIID_KEY = 81,
    SIID_SOFTWARE = 82,
    SIID_RENAME = 83,
    SIID_DELETE = 84,
    SIID_MEDIAAUDIODVD = 85,
    SIID_MEDIAMOVIEDVD = 86,
    SIID_MEDIAENHANCEDCD = 87,
    SIID_MEDIAENHANCEDDVD = 88,
    SIID_MEDIAHDDVD = 89,
    SIID_MEDIABLURAY = 90,
    SIID_MEDIAVCD = 91,
    SIID_MEDIADVDPLUSR = 92,
    SIID_MEDIADVDPLUSRW = 93,
    SIID_DESKTOPPC = 94,
    SIID_MOBILEPC = 95,
    SIID_USERS = 96,
    SIID_MEDIASMARTMEDIA = 97,
    SIID_MEDIACOMPACTFLASH = 98,
    SIID_DEVICECELLPHONE = 99,
    SIID_DEVICECAMERA = 100,
    SIID_DEVICEVIDEOCAMERA = 101,
    SIID_DEVICEAUDIOPLAYER = 102,
    SIID_NETWORKCONNECT = 103,
    SIID_INTERNET = 104,
    SIID_ZIPFILE = 105,
    SIID_SETTINGS = 106,
    SIID_DRIVEHDDVD = 132,
    SIID_DRIVEBD = 133,
    SIID_MEDIAHDDVDROM = 134,
    SIID_MEDIAHDDVDR = 135,
    SIID_MEDIAHDDVDRAM = 136,
    SIID_MEDIABDROM = 137,
    SIID_MEDIABDR = 138,
    SIID_MEDIABDRE = 139,
    SIID_CLUSTEREDDRIVE = 140,
    SIID_MAX_ICONS = 181,
} SHSTOCKICONID;
SHSTDAPI SHGetStockIconInfo(SHSTOCKICONID siid, UINT uFlags, _Inout_ SHSTOCKICONINFO *psii);
SHSTDAPI_(BOOL) SHGetDiskFreeSpaceExA(_In_ LPCSTR pszDirectoryName, _Out_opt_ ULARGE_INTEGER* pulFreeBytesAvailableToCaller,
    _Out_opt_ ULARGE_INTEGER* pulTotalNumberOfBytes, _Out_opt_ ULARGE_INTEGER* pulTotalNumberOfFreeBytes);
SHSTDAPI_(BOOL) SHGetDiskFreeSpaceExW(_In_ LPCWSTR pszDirectoryName, _Out_opt_ ULARGE_INTEGER* pulFreeBytesAvailableToCaller,
    _Out_opt_ ULARGE_INTEGER* pulTotalNumberOfBytes, _Out_opt_ ULARGE_INTEGER* pulTotalNumberOfFreeBytes);
_Success_(return != 0)
SHSTDAPI_(BOOL) SHGetNewLinkInfoA(_In_ LPCSTR pszLinkTo, _In_ LPCSTR pszDir, _Out_writes_(MAX_PATH) LPSTR pszName, _Out_ BOOL *pfMustCopy, _In_ UINT uFlags);
_Success_(return != 0)
SHSTDAPI_(BOOL) SHGetNewLinkInfoW(_In_ LPCWSTR pszLinkTo, _In_ LPCWSTR pszDir, _Out_writes_(MAX_PATH) LPWSTR pszName, _Out_ BOOL *pfMustCopy, _In_ UINT uFlags);
SHSTDAPI_(BOOL) SHInvokePrinterCommandA(_In_opt_ HWND hwnd, UINT uAction, _In_ LPCSTR lpBuf1, _In_opt_ LPCSTR lpBuf2, BOOL fModal);
SHSTDAPI_(BOOL) SHInvokePrinterCommandW(_In_opt_ HWND hwnd, UINT uAction, _In_ LPCWSTR lpBuf1, _In_opt_ LPCWSTR lpBuf2, BOOL fModal);
typedef struct _OPEN_PRINTER_PROPS_INFOA
{
    DWORD dwSize;
    LPSTR pszSheetName;
    UINT uSheetIndex;
    DWORD dwFlags;
    BOOL bModal;
} OPEN_PRINTER_PROPS_INFOA, *POPEN_PRINTER_PROPS_INFOA;
typedef struct _OPEN_PRINTER_PROPS_INFOW
{
    DWORD dwSize;
    LPWSTR pszSheetName;
    UINT uSheetIndex;
    DWORD dwFlags;
    BOOL bModal;
} OPEN_PRINTER_PROPS_INFOW, *POPEN_PRINTER_PROPS_INFOW;
typedef OPEN_PRINTER_PROPS_INFOW OPEN_PRINTER_PROPS_INFO;
typedef POPEN_PRINTER_PROPS_INFOW POPEN_PRINTER_PROPS_INFO;
SHSTDAPI SHLoadNonloadedIconOverlayIdentifiers(void);
SHSTDAPI SHIsFileAvailableOffline(_In_ PCWSTR pwszPath, _Out_opt_ DWORD *pdwStatus);
SHSTDAPI SHSetLocalizedName(_In_ PCWSTR pszPath, _In_ PCWSTR pszResModule, int idsRes);
SHSTDAPI SHRemoveLocalizedName(_In_ PCWSTR pszPath);
SHSTDAPI SHGetLocalizedName(_In_ PCWSTR pszPath, _Out_writes_(cch) PWSTR pszResModule, UINT cch, _Out_ int *pidsRes);
LWSTDAPIV_(int) ShellMessageBoxA(
    _In_opt_ HINSTANCE hAppInst,
    _In_opt_ HWND hWnd,
    _In_ LPCSTR lpcText,
    _In_opt_ LPCSTR lpcTitle,
    _In_ UINT fuStyle, ...);
LWSTDAPIV_(int) ShellMessageBoxW(
    _In_opt_ HINSTANCE hAppInst,
    _In_opt_ HWND hWnd,
    _In_ LPCWSTR lpcText,
    _In_opt_ LPCWSTR lpcTitle,
    _In_ UINT fuStyle, ...);
SHSTDAPI_(BOOL) IsLFNDriveA(_In_opt_ LPCSTR pszPath);
SHSTDAPI_(BOOL) IsLFNDriveW(_In_opt_ LPCWSTR pszPath);
#endif
#pragma endregion
}
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
SHSTDAPI_(BOOL) InitNetworkAddressControl(void);
    (HRESULT)SNDMSG(hwnd,NCM_GETADDRESS,0,(LPARAM)pv)
typedef struct tagNC_ADDRESS
{
   struct NET_ADDRESS_INFO_ *pAddrInfo;
   USHORT PortNumber;
   BYTE PrefixLength;
} NC_ADDRESS, *PNC_ADDRESS;
    (HRESULT)SNDMSG(hwnd,NCM_SETALLOWTYPE,(WPARAM)addrMask,0)
    (DWORD)SNDMSG(hwnd,NCM_GETALLOWTYPE,0,0)
    (HRESULT)SNDMSG(hwnd,NCM_DISPLAYERRORTIP,0,0)
STDAPI SHGetDriveMedia(_In_ PCWSTR pszDrive, _Out_ DWORD *pdwMediaContent);
#endif
#pragma endregion
