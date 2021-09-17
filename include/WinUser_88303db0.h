#include <winapifamily.h>
       
#include <macwin32.h>
extern "C" {
#include <stdarg.h>
#include <libloaderapi.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef HANDLE HDWP;
typedef VOID MENUTEMPLATEA;
typedef VOID MENUTEMPLATEW;
typedef MENUTEMPLATEW MENUTEMPLATE;
typedef PVOID LPMENUTEMPLATEA;
typedef PVOID LPMENUTEMPLATEW;
typedef LPMENUTEMPLATEW LPMENUTEMPLATE;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
typedef LRESULT (CALLBACK* WNDPROC)(HWND, UINT, WPARAM, LPARAM);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef INT_PTR (CALLBACK* DLGPROC)(HWND, UINT, WPARAM, LPARAM);
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
typedef VOID (CALLBACK* TIMERPROC)(HWND, UINT, UINT_PTR, DWORD);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef BOOL (CALLBACK* GRAYSTRINGPROC)(HDC, LPARAM, int);
typedef BOOL (CALLBACK* WNDENUMPROC)(HWND, LPARAM);
typedef LRESULT (CALLBACK* HOOKPROC)(int code, WPARAM wParam, LPARAM lParam);
typedef VOID (CALLBACK* SENDASYNCPROC)(HWND, UINT, ULONG_PTR, LRESULT);
typedef BOOL (CALLBACK* PROPENUMPROCA)(HWND, LPCSTR, HANDLE);
typedef BOOL (CALLBACK* PROPENUMPROCW)(HWND, LPCWSTR, HANDLE);
typedef BOOL (CALLBACK* PROPENUMPROCEXA)(HWND, LPSTR, HANDLE, ULONG_PTR);
typedef BOOL (CALLBACK* PROPENUMPROCEXW)(HWND, LPWSTR, HANDLE, ULONG_PTR);
typedef int (CALLBACK* EDITWORDBREAKPROCA)(LPSTR lpch, int ichCurrent, int cch, int code);
typedef int (CALLBACK* EDITWORDBREAKPROCW)(LPWSTR lpch, int ichCurrent, int cch, int code);
typedef BOOL (CALLBACK* DRAWSTATEPROC)(HDC hdc, LPARAM lData, WPARAM wData, int cx, int cy);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef PROPENUMPROCW PROPENUMPROC;
typedef PROPENUMPROCEXW PROPENUMPROCEX;
typedef EDITWORDBREAKPROCW EDITWORDBREAKPROC;
typedef BOOL (CALLBACK* NAMEENUMPROCA)(LPSTR, LPARAM);
typedef BOOL (CALLBACK* NAMEENUMPROCW)(LPWSTR, LPARAM);
typedef NAMEENUMPROCA WINSTAENUMPROCA;
typedef NAMEENUMPROCA DESKTOPENUMPROCA;
typedef NAMEENUMPROCW WINSTAENUMPROCW;
typedef NAMEENUMPROCW DESKTOPENUMPROCW;
typedef WINSTAENUMPROCW WINSTAENUMPROC;
typedef DESKTOPENUMPROCW DESKTOPENUMPROC;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
int
WINAPI
wvsprintfA(
    _Out_ LPSTR,
    _In_ _Printf_format_string_ LPCSTR,
    _In_ va_list arglist);
WINUSERAPI
int
WINAPI
wvsprintfW(
    _Out_ LPWSTR,
    _In_ _Printf_format_string_ LPCWSTR,
    _In_ va_list arglist);
WINUSERAPI
int
WINAPIV
wsprintfA(
    _Out_ LPSTR,
    _In_ _Printf_format_string_ LPCSTR,
    ...);
WINUSERAPI
int
WINAPIV
wsprintfW(
    _Out_ LPWSTR,
    _In_ _Printf_format_string_ LPCWSTR,
    ...);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagCBT_CREATEWNDA
{
    struct tagCREATESTRUCTA *lpcs;
    HWND hwndInsertAfter;
} CBT_CREATEWNDA, *LPCBT_CREATEWNDA;
typedef struct tagCBT_CREATEWNDW
{
    struct tagCREATESTRUCTW *lpcs;
    HWND hwndInsertAfter;
} CBT_CREATEWNDW, *LPCBT_CREATEWNDW;
typedef CBT_CREATEWNDW CBT_CREATEWND;
typedef LPCBT_CREATEWNDW LPCBT_CREATEWND;
typedef struct tagCBTACTIVATESTRUCT
{
    BOOL fMouse;
    HWND hWndActive;
} CBTACTIVATESTRUCT, *LPCBTACTIVATESTRUCT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagWTSSESSION_NOTIFICATION
{
    DWORD cbSize;
    DWORD dwSessionId;
} WTSSESSION_NOTIFICATION, *PWTSSESSION_NOTIFICATION;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct
{
    HWND hwnd;
    RECT rc;
} SHELLHOOKINFO, *LPSHELLHOOKINFO;
typedef struct tagEVENTMSG {
    UINT message;
    UINT paramL;
    UINT paramH;
    DWORD time;
    HWND hwnd;
} EVENTMSG, *PEVENTMSGMSG, NEAR *NPEVENTMSGMSG, FAR *LPEVENTMSGMSG;
typedef struct tagEVENTMSG *PEVENTMSG, NEAR *NPEVENTMSG, FAR *LPEVENTMSG;
typedef struct tagCWPSTRUCT {
    LPARAM lParam;
    WPARAM wParam;
    UINT message;
    HWND hwnd;
} CWPSTRUCT, *PCWPSTRUCT, NEAR *NPCWPSTRUCT, FAR *LPCWPSTRUCT;
typedef struct tagCWPRETSTRUCT {
    LRESULT lResult;
    LPARAM lParam;
    WPARAM wParam;
    UINT message;
    HWND hwnd;
} CWPRETSTRUCT, *PCWPRETSTRUCT, NEAR *NPCWPRETSTRUCT, FAR *LPCWPRETSTRUCT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagKBDLLHOOKSTRUCT {
    DWORD vkCode;
    DWORD scanCode;
    DWORD flags;
    DWORD time;
    ULONG_PTR dwExtraInfo;
} KBDLLHOOKSTRUCT, FAR *LPKBDLLHOOKSTRUCT, *PKBDLLHOOKSTRUCT;
typedef struct tagMSLLHOOKSTRUCT {
    POINT pt;
    DWORD mouseData;
    DWORD flags;
    DWORD time;
    ULONG_PTR dwExtraInfo;
} MSLLHOOKSTRUCT, FAR *LPMSLLHOOKSTRUCT, *PMSLLHOOKSTRUCT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagDEBUGHOOKINFO
{
    DWORD idThread;
    DWORD idThreadInstaller;
    LPARAM lParam;
    WPARAM wParam;
    int code;
} DEBUGHOOKINFO, *PDEBUGHOOKINFO, NEAR *NPDEBUGHOOKINFO, FAR* LPDEBUGHOOKINFO;
typedef struct tagMOUSEHOOKSTRUCT {
    POINT pt;
    HWND hwnd;
    UINT wHitTestCode;
    ULONG_PTR dwExtraInfo;
} MOUSEHOOKSTRUCT, FAR *LPMOUSEHOOKSTRUCT, *PMOUSEHOOKSTRUCT;
typedef struct tagMOUSEHOOKSTRUCTEX : public tagMOUSEHOOKSTRUCT
{
    DWORD mouseData;
} MOUSEHOOKSTRUCTEX, *LPMOUSEHOOKSTRUCTEX, *PMOUSEHOOKSTRUCTEX;
typedef struct tagHARDWAREHOOKSTRUCT {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
} HARDWAREHOOKSTRUCT, FAR *LPHARDWAREHOOKSTRUCT, *PHARDWAREHOOKSTRUCT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
HKL
WINAPI
LoadKeyboardLayoutA(
    _In_ LPCSTR pwszKLID,
    _In_ UINT Flags);
WINUSERAPI
HKL
WINAPI
LoadKeyboardLayoutW(
    _In_ LPCWSTR pwszKLID,
    _In_ UINT Flags);
WINUSERAPI
HKL
WINAPI
ActivateKeyboardLayout(
    _In_ HKL hkl,
    _In_ UINT Flags);
WINUSERAPI
int
WINAPI
ToUnicodeEx(
    _In_ UINT wVirtKey,
    _In_ UINT wScanCode,
    _In_reads_bytes_(256) CONST BYTE *lpKeyState,
    _Out_writes_(cchBuff) LPWSTR pwszBuff,
    _In_ int cchBuff,
    _In_ UINT wFlags,
    _In_opt_ HKL dwhkl);
WINUSERAPI
BOOL
WINAPI
UnloadKeyboardLayout(
    _In_ HKL hkl);
WINUSERAPI
BOOL
WINAPI
GetKeyboardLayoutNameA(
    _Out_writes_(KL_NAMELENGTH) LPSTR pwszKLID);
WINUSERAPI
BOOL
WINAPI
GetKeyboardLayoutNameW(
    _Out_writes_(KL_NAMELENGTH) LPWSTR pwszKLID);
WINUSERAPI
int
WINAPI
GetKeyboardLayoutList(
    _In_ int nBuff,
    _Out_writes_to_opt_(nBuff, return) HKL FAR *lpList);
WINUSERAPI
HKL
WINAPI
GetKeyboardLayout(
    _In_ DWORD idThread);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagMOUSEMOVEPOINT {
    int x;
    int y;
    DWORD time;
    ULONG_PTR dwExtraInfo;
} MOUSEMOVEPOINT, *PMOUSEMOVEPOINT, FAR* LPMOUSEMOVEPOINT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
int
WINAPI
GetMouseMovePointsEx(
    _In_ UINT cbSize,
    _In_ LPMOUSEMOVEPOINT lppt,
    _Out_writes_(nBufPoints) LPMOUSEMOVEPOINT lpptBuf,
    _In_ int nBufPoints,
    _In_ DWORD resolution);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
HDESK
WINAPI
CreateDesktopA(
    _In_ LPCSTR lpszDesktop,
    _Reserved_ LPCSTR lpszDevice,
    _Reserved_ DEVMODEA* pDevmode,
    _In_ DWORD dwFlags,
    _In_ ACCESS_MASK dwDesiredAccess,
    _In_opt_ LPSECURITY_ATTRIBUTES lpsa);
WINUSERAPI
HDESK
WINAPI
CreateDesktopW(
    _In_ LPCWSTR lpszDesktop,
    _Reserved_ LPCWSTR lpszDevice,
    _Reserved_ DEVMODEW* pDevmode,
    _In_ DWORD dwFlags,
    _In_ ACCESS_MASK dwDesiredAccess,
    _In_opt_ LPSECURITY_ATTRIBUTES lpsa);
WINUSERAPI
HDESK
WINAPI
CreateDesktopExA(
    _In_ LPCSTR lpszDesktop,
    _Reserved_ LPCSTR lpszDevice,
    _Reserved_ DEVMODEA* pDevmode,
    _In_ DWORD dwFlags,
    _In_ ACCESS_MASK dwDesiredAccess,
    _In_opt_ LPSECURITY_ATTRIBUTES lpsa,
    _In_ ULONG ulHeapSize,
    _Reserved_ PVOID pvoid);
WINUSERAPI
HDESK
WINAPI
CreateDesktopExW(
    _In_ LPCWSTR lpszDesktop,
    _Reserved_ LPCWSTR lpszDevice,
    _Reserved_ DEVMODEW* pDevmode,
    _In_ DWORD dwFlags,
    _In_ ACCESS_MASK dwDesiredAccess,
    _In_opt_ LPSECURITY_ATTRIBUTES lpsa,
    _In_ ULONG ulHeapSize,
    _Reserved_ PVOID pvoid);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
HDESK
WINAPI
OpenDesktopA(
    _In_ LPCSTR lpszDesktop,
    _In_ DWORD dwFlags,
    _In_ BOOL fInherit,
    _In_ ACCESS_MASK dwDesiredAccess);
WINUSERAPI
HDESK
WINAPI
OpenDesktopW(
    _In_ LPCWSTR lpszDesktop,
    _In_ DWORD dwFlags,
    _In_ BOOL fInherit,
    _In_ ACCESS_MASK dwDesiredAccess);
WINUSERAPI
HDESK
WINAPI
OpenInputDesktop(
    _In_ DWORD dwFlags,
    _In_ BOOL fInherit,
    _In_ ACCESS_MASK dwDesiredAccess);
WINUSERAPI
BOOL
WINAPI
EnumDesktopsA(
    _In_opt_ HWINSTA hwinsta,
    _In_ DESKTOPENUMPROCA lpEnumFunc,
    _In_ LPARAM lParam);
WINUSERAPI
BOOL
WINAPI
EnumDesktopsW(
    _In_opt_ HWINSTA hwinsta,
    _In_ DESKTOPENUMPROCW lpEnumFunc,
    _In_ LPARAM lParam);
WINUSERAPI
BOOL
WINAPI
EnumDesktopWindows(
    _In_opt_ HDESK hDesktop,
    _In_ WNDENUMPROC lpfn,
    _In_ LPARAM lParam);
WINUSERAPI
BOOL
WINAPI
SwitchDesktop(
    _In_ HDESK hDesktop);
WINUSERAPI
BOOL
WINAPI
SetThreadDesktop(
     _In_ HDESK hDesktop);
WINUSERAPI
BOOL
WINAPI
CloseDesktop(
    _In_ HDESK hDesktop);
WINUSERAPI
HDESK
WINAPI
GetThreadDesktop(
    _In_ DWORD dwThreadId);
#endif
#pragma endregion
                                     WINSTA_CREATEDESKTOP | WINSTA_WRITEATTRIBUTES | WINSTA_ACCESSGLOBALATOMS | \
                                     WINSTA_EXITWINDOWS | WINSTA_ENUMERATE | WINSTA_READSCREEN)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
HWINSTA
WINAPI
CreateWindowStationA(
    _In_opt_ LPCSTR lpwinsta,
    _In_ DWORD dwFlags,
    _In_ ACCESS_MASK dwDesiredAccess,
    _In_opt_ LPSECURITY_ATTRIBUTES lpsa);
WINUSERAPI
HWINSTA
WINAPI
CreateWindowStationW(
    _In_opt_ LPCWSTR lpwinsta,
    _In_ DWORD dwFlags,
    _In_ ACCESS_MASK dwDesiredAccess,
    _In_opt_ LPSECURITY_ATTRIBUTES lpsa);
WINUSERAPI
HWINSTA
WINAPI
OpenWindowStationA(
    _In_ LPCSTR lpszWinSta,
    _In_ BOOL fInherit,
    _In_ ACCESS_MASK dwDesiredAccess);
WINUSERAPI
HWINSTA
WINAPI
OpenWindowStationW(
    _In_ LPCWSTR lpszWinSta,
    _In_ BOOL fInherit,
    _In_ ACCESS_MASK dwDesiredAccess);
WINUSERAPI
BOOL
WINAPI
EnumWindowStationsA(
    _In_ WINSTAENUMPROCA lpEnumFunc,
    _In_ LPARAM lParam);
WINUSERAPI
BOOL
WINAPI
EnumWindowStationsW(
    _In_ WINSTAENUMPROCW lpEnumFunc,
    _In_ LPARAM lParam);
WINUSERAPI
BOOL
WINAPI
CloseWindowStation(
    _In_ HWINSTA hWinSta);
WINUSERAPI
BOOL
WINAPI
SetProcessWindowStation(
    _In_ HWINSTA hWinSta);
WINUSERAPI
HWINSTA
WINAPI
GetProcessWindowStation(
    VOID);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
SetUserObjectSecurity(
    _In_ HANDLE hObj,
    _In_ PSECURITY_INFORMATION pSIRequested,
    _In_ PSECURITY_DESCRIPTOR pSID);
WINUSERAPI
BOOL
WINAPI
GetUserObjectSecurity(
    _In_ HANDLE hObj,
    _In_ PSECURITY_INFORMATION pSIRequested,
    _Out_writes_bytes_opt_(nLength) PSECURITY_DESCRIPTOR pSID,
    _In_ DWORD nLength,
    _Out_ LPDWORD lpnLengthNeeded);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagUSEROBJECTFLAGS {
    BOOL fInherit;
    BOOL fReserved;
    DWORD dwFlags;
} USEROBJECTFLAGS, *PUSEROBJECTFLAGS;
WINUSERAPI
BOOL
WINAPI
GetUserObjectInformationA(
    _In_ HANDLE hObj,
    _In_ int nIndex,
    _Out_writes_bytes_opt_(nLength) PVOID pvInfo,
    _In_ DWORD nLength,
    _Out_opt_ LPDWORD lpnLengthNeeded);
WINUSERAPI
BOOL
WINAPI
GetUserObjectInformationW(
    _In_ HANDLE hObj,
    _In_ int nIndex,
    _Out_writes_bytes_opt_(nLength) PVOID pvInfo,
    _In_ DWORD nLength,
    _Out_opt_ LPDWORD lpnLengthNeeded);
WINUSERAPI
BOOL
WINAPI
SetUserObjectInformationA(
    _In_ HANDLE hObj,
    _In_ int nIndex,
    _In_reads_bytes_(nLength) PVOID pvInfo,
    _In_ DWORD nLength);
WINUSERAPI
BOOL
WINAPI
SetUserObjectInformationW(
    _In_ HANDLE hObj,
    _In_ int nIndex,
    _In_reads_bytes_(nLength) PVOID pvInfo,
    _In_ DWORD nLength);
#endif
#pragma endregion
#pragma region Desktop or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
typedef struct tagWNDCLASSEXA {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
    HICON hIconSm;
} WNDCLASSEXA, *PWNDCLASSEXA, NEAR *NPWNDCLASSEXA, FAR *LPWNDCLASSEXA;
typedef struct tagWNDCLASSEXW {
    UINT cbSize;
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCWSTR lpszMenuName;
    LPCWSTR lpszClassName;
    HICON hIconSm;
} WNDCLASSEXW, *PWNDCLASSEXW, NEAR *NPWNDCLASSEXW, FAR *LPWNDCLASSEXW;
typedef WNDCLASSEXW WNDCLASSEX;
typedef PWNDCLASSEXW PWNDCLASSEX;
typedef NPWNDCLASSEXW NPWNDCLASSEX;
typedef LPWNDCLASSEXW LPWNDCLASSEX;
typedef struct tagWNDCLASSA {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
} WNDCLASSA, *PWNDCLASSA, NEAR *NPWNDCLASSA, FAR *LPWNDCLASSA;
typedef struct tagWNDCLASSW {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCWSTR lpszMenuName;
    LPCWSTR lpszClassName;
} WNDCLASSW, *PWNDCLASSW, NEAR *NPWNDCLASSW, FAR *LPWNDCLASSW;
typedef WNDCLASSW WNDCLASS;
typedef PWNDCLASSW PWNDCLASS;
typedef NPWNDCLASSW NPWNDCLASS;
typedef LPWNDCLASSW LPWNDCLASS;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
IsHungAppWindow(
    _In_ HWND hwnd);
WINUSERAPI
VOID
WINAPI
DisableProcessWindowsGhosting(
    VOID);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef struct tagMSG {
    HWND hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
    DWORD lPrivate;
} MSG, *PMSG, NEAR *NPMSG, FAR *LPMSG;
#endif
#pragma endregion
        { (pt).x = (LONG)(SHORT)LOWORD(*(LONG*)&pts); \
          (pt).y = (LONG)(SHORT)HIWORD(*(LONG*)&pts); }
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagMINMAXINFO {
    POINT ptReserved;
    POINT ptMaxSize;
    POINT ptMaxPosition;
    POINT ptMinTrackSize;
    POINT ptMaxTrackSize;
} MINMAXINFO, *PMINMAXINFO, *LPMINMAXINFO;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagCOPYDATASTRUCT {
    ULONG_PTR dwData;
    DWORD cbData;
    _Field_size_bytes_(cbData) PVOID lpData;
} COPYDATASTRUCT, *PCOPYDATASTRUCT;
typedef struct tagMDINEXTMENU
{
    HMENU hmenuIn;
    HMENU hmenuNext;
    HWND hwndNext;
} MDINEXTMENU, * PMDINEXTMENU, FAR * LPMDINEXTMENU;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct {
    GUID PowerSetting;
    DWORD DataLength;
    UCHAR Data[1];
} POWERBROADCAST_SETTING, *PPOWERBROADCAST_SETTING;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
UINT
WINAPI
RegisterWindowMessageA(
    _In_ LPCSTR lpString);
WINUSERAPI
UINT
WINAPI
RegisterWindowMessageW(
    _In_ LPCWSTR lpString);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagWINDOWPOS {
    HWND hwnd;
    HWND hwndInsertAfter;
    int x;
    int y;
    int cx;
    int cy;
    UINT flags;
} WINDOWPOS, *LPWINDOWPOS, *PWINDOWPOS;
typedef struct tagNCCALCSIZE_PARAMS {
    RECT rgrc[3];
    PWINDOWPOS lppos;
} NCCALCSIZE_PARAMS, *LPNCCALCSIZE_PARAMS;
#endif
#pragma endregion
                            WVR_VREDRAW)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagTRACKMOUSEEVENT {
    DWORD cbSize;
    DWORD dwFlags;
    HWND hwndTrack;
    DWORD dwHoverTime;
} TRACKMOUSEEVENT, *LPTRACKMOUSEEVENT;
WINUSERAPI
BOOL
WINAPI
TrackMouseEvent(
    _Inout_ LPTRACKMOUSEEVENT lpEventTrack);
#endif
#pragma endregion
                             WS_CAPTION | \
                             WS_SYSMENU | \
                             WS_THICKFRAME | \
                             WS_MINIMIZEBOX | \
                             WS_MAXIMIZEBOX)
                             WS_BORDER | \
                             WS_SYSMENU)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
DrawEdge(
    _In_ HDC hdc,
    _Inout_ LPRECT qrc,
    _In_ UINT edge,
    _In_ UINT grfFlags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
DrawFrameControl(
    _In_ HDC,
    _Inout_ LPRECT,
    _In_ UINT,
    _In_ UINT);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
DrawCaption(
    _In_ HWND hwnd,
    _In_ HDC hdc,
    _In_ CONST RECT * lprect,
    _In_ UINT flags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
DrawAnimatedRects(
    _In_opt_ HWND hwnd,
    _In_ int idAni,
    _In_ CONST RECT *lprcFrom,
    _In_ CONST RECT *lprcTo);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagACCEL {
    BYTE fVirt;
    WORD key;
    WORD cmd;
} ACCEL, *LPACCEL;
typedef struct tagPAINTSTRUCT {
    HDC hdc;
    BOOL fErase;
    RECT rcPaint;
    BOOL fRestore;
    BOOL fIncUpdate;
    BYTE rgbReserved[32];
} PAINTSTRUCT, *PPAINTSTRUCT, *NPPAINTSTRUCT, *LPPAINTSTRUCT;
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
typedef struct tagCREATESTRUCTA {
    LPVOID lpCreateParams;
    HINSTANCE hInstance;
    HMENU hMenu;
    HWND hwndParent;
    int cy;
    int cx;
    int y;
    int x;
    LONG style;
    LPCSTR lpszName;
    LPCSTR lpszClass;
    DWORD dwExStyle;
} CREATESTRUCTA, *LPCREATESTRUCTA;
typedef struct tagCREATESTRUCTW {
    LPVOID lpCreateParams;
    HINSTANCE hInstance;
    HMENU hMenu;
    HWND hwndParent;
    int cy;
    int cx;
    int y;
    int x;
    LONG style;
    LPCWSTR lpszName;
    LPCWSTR lpszClass;
    DWORD dwExStyle;
} CREATESTRUCTW, *LPCREATESTRUCTW;
typedef CREATESTRUCTW CREATESTRUCT;
typedef LPCREATESTRUCTW LPCREATESTRUCT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagWINDOWPLACEMENT {
    UINT length;
    UINT flags;
    UINT showCmd;
    POINT ptMinPosition;
    POINT ptMaxPosition;
    RECT rcNormalPosition;
    RECT rcDevice;
} WINDOWPLACEMENT;
typedef WINDOWPLACEMENT *PWINDOWPLACEMENT, *LPWINDOWPLACEMENT;
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct tagNMHDR
{
    HWND hwndFrom;
    UINT_PTR idFrom;
    UINT code;
} NMHDR;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef NMHDR FAR * LPNMHDR;
typedef struct tagSTYLESTRUCT
{
    DWORD styleOld;
    DWORD styleNew;
} STYLESTRUCT, * LPSTYLESTRUCT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagMEASUREITEMSTRUCT {
    UINT CtlType;
    UINT CtlID;
    UINT itemID;
    UINT itemWidth;
    UINT itemHeight;
    ULONG_PTR itemData;
} MEASUREITEMSTRUCT, NEAR *PMEASUREITEMSTRUCT, FAR *LPMEASUREITEMSTRUCT;
typedef struct tagDRAWITEMSTRUCT {
    UINT CtlType;
    UINT CtlID;
    UINT itemID;
    UINT itemAction;
    UINT itemState;
    HWND hwndItem;
    HDC hDC;
    RECT rcItem;
    ULONG_PTR itemData;
} DRAWITEMSTRUCT, NEAR *PDRAWITEMSTRUCT, FAR *LPDRAWITEMSTRUCT;
typedef struct tagDELETEITEMSTRUCT {
    UINT CtlType;
    UINT CtlID;
    UINT itemID;
    HWND hwndItem;
    ULONG_PTR itemData;
} DELETEITEMSTRUCT, NEAR *PDELETEITEMSTRUCT, FAR *LPDELETEITEMSTRUCT;
typedef struct tagCOMPAREITEMSTRUCT {
    UINT CtlType;
    UINT CtlID;
    HWND hwndItem;
    UINT itemID1;
    ULONG_PTR itemData1;
    UINT itemID2;
    ULONG_PTR itemData2;
    DWORD dwLocaleId;
} COMPAREITEMSTRUCT, NEAR *PCOMPAREITEMSTRUCT, FAR *LPCOMPAREITEMSTRUCT;
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
BOOL
WINAPI
GetMessageA(
    _Out_ LPMSG lpMsg,
    _In_opt_ HWND hWnd,
    _In_ UINT wMsgFilterMin,
    _In_ UINT wMsgFilterMax);
WINUSERAPI
BOOL
WINAPI
GetMessageW(
    _Out_ LPMSG lpMsg,
    _In_opt_ HWND hWnd,
    _In_ UINT wMsgFilterMin,
    _In_ UINT wMsgFilterMax);
WINUSERAPI
BOOL
WINAPI
TranslateMessage(
    _In_ CONST MSG *lpMsg);
WINUSERAPI
LRESULT
WINAPI
DispatchMessageA(
    _In_ CONST MSG *lpMsg);
WINUSERAPI
LRESULT
WINAPI
DispatchMessageW(
    _In_ CONST MSG *lpMsg);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
SetMessageQueue(
    _In_ int cMessagesMax);
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
BOOL
WINAPI
PeekMessageA(
    _Out_ LPMSG lpMsg,
    _In_opt_ HWND hWnd,
    _In_ UINT wMsgFilterMin,
    _In_ UINT wMsgFilterMax,
    _In_ UINT wRemoveMsg);
WINUSERAPI
BOOL
WINAPI
PeekMessageW(
    _Out_ LPMSG lpMsg,
    _In_opt_ HWND hWnd,
    _In_ UINT wMsgFilterMin,
    _In_ UINT wMsgFilterMax,
    _In_ UINT wRemoveMsg);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
RegisterHotKey(
    _In_opt_ HWND hWnd,
    _In_ int id,
    _In_ UINT fsModifiers,
    _In_ UINT vk);
WINUSERAPI
BOOL
WINAPI
UnregisterHotKey(
    _In_opt_ HWND hWnd,
    _In_ int id);
#endif
#pragma endregion
    #define NOLSTRING
    #define NOLFILEIO
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
_When_((uFlags&(EWX_POWEROFF|EWX_SHUTDOWN|EWX_FORCE))!=0,
    __drv_preferredFunction("InitiateSystemShutdownEx",
        "Legacy API. Rearchitect to avoid Reboot"))
WINUSERAPI
BOOL
WINAPI
ExitWindowsEx(
    _In_ UINT uFlags,
    _In_ DWORD dwReason);
WINUSERAPI
BOOL
WINAPI
SwapMouseButton(
    _In_ BOOL fSwap);
WINUSERAPI
DWORD
WINAPI
GetMessagePos(
    VOID);
WINUSERAPI
LONG
WINAPI
GetMessageTime(
    VOID);
WINUSERAPI
LPARAM
WINAPI
GetMessageExtraInfo(
    VOID);
WINUSERAPI
DWORD
WINAPI
GetUnpredictedMessagePos(
    VOID);
WINUSERAPI
BOOL
WINAPI
IsWow64Message(
    VOID);
WINUSERAPI
LPARAM
WINAPI
SetMessageExtraInfo(
    _In_ LPARAM lParam);
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
LRESULT
WINAPI
SendMessageA(
    _In_ HWND hWnd,
    _In_ UINT Msg,
    _Pre_maybenull_ _Post_valid_ WPARAM wParam,
    _Pre_maybenull_ _Post_valid_ LPARAM lParam);
WINUSERAPI
LRESULT
WINAPI
SendMessageW(
    _In_ HWND hWnd,
    _In_ UINT Msg,
    _Pre_maybenull_ _Post_valid_ WPARAM wParam,
    _Pre_maybenull_ _Post_valid_ LPARAM lParam);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
LRESULT
WINAPI
SendMessageTimeoutA(
    _In_ HWND hWnd,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam,
    _In_ UINT fuFlags,
    _In_ UINT uTimeout,
    _Out_opt_ PDWORD_PTR lpdwResult);
WINUSERAPI
LRESULT
WINAPI
SendMessageTimeoutW(
    _In_ HWND hWnd,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam,
    _In_ UINT fuFlags,
    _In_ UINT uTimeout,
    _Out_opt_ PDWORD_PTR lpdwResult);
WINUSERAPI
BOOL
WINAPI
SendNotifyMessageA(
    _In_ HWND hWnd,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
WINUSERAPI
BOOL
WINAPI
SendNotifyMessageW(
    _In_ HWND hWnd,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
WINUSERAPI
BOOL
WINAPI
SendMessageCallbackA(
    _In_ HWND hWnd,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam,
    _In_ SENDASYNCPROC lpResultCallBack,
    _In_ ULONG_PTR dwData);
WINUSERAPI
BOOL
WINAPI
SendMessageCallbackW(
    _In_ HWND hWnd,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam,
    _In_ SENDASYNCPROC lpResultCallBack,
    _In_ ULONG_PTR dwData);
typedef struct {
    UINT cbSize;
    HDESK hdesk;
    HWND hwnd;
    LUID luid;
} BSMINFO, *PBSMINFO;
WINUSERAPI
long
WINAPI
BroadcastSystemMessageExA(
    _In_ DWORD flags,
    _Inout_opt_ LPDWORD lpInfo,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam,
    _Out_opt_ PBSMINFO pbsmInfo);
WINUSERAPI
long
WINAPI
BroadcastSystemMessageExW(
    _In_ DWORD flags,
    _Inout_opt_ LPDWORD lpInfo,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam,
    _Out_opt_ PBSMINFO pbsmInfo);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
long
WINAPI
BroadcastSystemMessageA(
    _In_ DWORD flags,
    _Inout_opt_ LPDWORD lpInfo,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
WINUSERAPI
long
WINAPI
BroadcastSystemMessageW(
    _In_ DWORD flags,
    _Inout_opt_ LPDWORD lpInfo,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef PVOID HDEVNOTIFY;
typedef HDEVNOTIFY *PHDEVNOTIFY;
WINUSERAPI
HDEVNOTIFY
WINAPI
RegisterDeviceNotificationA(
    _In_ HANDLE hRecipient,
    _In_ LPVOID NotificationFilter,
    _In_ DWORD Flags);
WINUSERAPI
HDEVNOTIFY
WINAPI
RegisterDeviceNotificationW(
    _In_ HANDLE hRecipient,
    _In_ LPVOID NotificationFilter,
    _In_ DWORD Flags);
WINUSERAPI
BOOL
WINAPI
UnregisterDeviceNotification(
    _In_ HDEVNOTIFY Handle
    );
typedef PVOID HPOWERNOTIFY;
typedef HPOWERNOTIFY *PHPOWERNOTIFY;
WINUSERAPI
HPOWERNOTIFY
WINAPI
RegisterPowerSettingNotification(
    IN HANDLE hRecipient,
    IN LPCGUID PowerSettingGuid,
    IN DWORD Flags
    );
WINUSERAPI
BOOL
WINAPI
UnregisterPowerSettingNotification(
    IN HPOWERNOTIFY Handle
    );
WINUSERAPI
HPOWERNOTIFY
WINAPI
RegisterSuspendResumeNotification (
    IN HANDLE hRecipient,
    IN DWORD Flags
    );
WINUSERAPI
BOOL
WINAPI
UnregisterSuspendResumeNotification (
    IN HPOWERNOTIFY Handle
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
BOOL
WINAPI
PostMessageA(
    _In_opt_ HWND hWnd,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
WINUSERAPI
BOOL
WINAPI
PostMessageW(
    _In_opt_ HWND hWnd,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
WINUSERAPI
BOOL
WINAPI
PostThreadMessageA(
    _In_ DWORD idThread,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
WINUSERAPI
BOOL
WINAPI
PostThreadMessageW(
    _In_ DWORD idThread,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
#endif
#pragma endregion
        PostThreadMessageA((DWORD)idThread, wMsg, wParam, lParam)
        PostThreadMessageW((DWORD)idThread, wMsg, wParam, lParam)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
AttachThreadInput(
    _In_ DWORD idAttach,
    _In_ DWORD idAttachTo,
    _In_ BOOL fAttach);
WINUSERAPI
BOOL
WINAPI
ReplyMessage(
    _In_ LRESULT lResult);
WINUSERAPI
BOOL
WINAPI
WaitMessage(
    VOID);
WINUSERAPI
DWORD
WINAPI
WaitForInputIdle(
    _In_ HANDLE hProcess,
    _In_ DWORD dwMilliseconds);
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
LRESULT
WINAPI
DefWindowProcA(
    _In_ HWND hWnd,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
WINUSERAPI
LRESULT
WINAPI
DefWindowProcW(
    _In_ HWND hWnd,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
WINUSERAPI
VOID
WINAPI
PostQuitMessage(
    _In_ int nExitCode);
WINUSERAPI
LRESULT
WINAPI
CallWindowProcA(
    _In_ WNDPROC lpPrevWndFunc,
    _In_ HWND hWnd,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
WINUSERAPI
LRESULT
WINAPI
CallWindowProcW(
    _In_ WNDPROC lpPrevWndFunc,
    _In_ HWND hWnd,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
InSendMessage(
    VOID);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
DWORD
WINAPI
InSendMessageEx(
    _Reserved_ LPVOID lpReserved);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
UINT
WINAPI
GetDoubleClickTime(
    VOID);
WINUSERAPI
BOOL
WINAPI
SetDoubleClickTime(
    _In_ UINT);
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
ATOM
WINAPI
RegisterClassA(
    _In_ CONST WNDCLASSA *lpWndClass);
WINUSERAPI
ATOM
WINAPI
RegisterClassW(
    _In_ CONST WNDCLASSW *lpWndClass);
WINUSERAPI
BOOL
WINAPI
UnregisterClassA(
    _In_ LPCSTR lpClassName,
    _In_opt_ HINSTANCE hInstance);
WINUSERAPI
BOOL
WINAPI
UnregisterClassW(
    _In_ LPCWSTR lpClassName,
    _In_opt_ HINSTANCE hInstance);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
_Success_(return)
WINUSERAPI
BOOL
WINAPI
GetClassInfoA(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCSTR lpClassName,
    _Out_ LPWNDCLASSA lpWndClass);
_Success_(return)
WINUSERAPI
BOOL
WINAPI
GetClassInfoW(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCWSTR lpClassName,
    _Out_ LPWNDCLASSW lpWndClass);
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
ATOM
WINAPI
RegisterClassExA(
    _In_ CONST WNDCLASSEXA *);
WINUSERAPI
ATOM
WINAPI
RegisterClassExW(
    _In_ CONST WNDCLASSEXW *);
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
_Success_(return)
WINUSERAPI
BOOL
WINAPI
GetClassInfoExA(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCSTR lpszClass,
    _Out_ LPWNDCLASSEXA lpwcx);
_Success_(return)
WINUSERAPI
BOOL
WINAPI
GetClassInfoExW(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCWSTR lpszClass,
    _Out_ LPWNDCLASSEXW lpwcx);
#endif
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
typedef BOOLEAN (WINAPI * PREGISTERCLASSNAMEW)(LPCWSTR);
WINUSERAPI
HWND
WINAPI
CreateWindowExA(
    _In_ DWORD dwExStyle,
    _In_opt_ LPCSTR lpClassName,
    _In_opt_ LPCSTR lpWindowName,
    _In_ DWORD dwStyle,
    _In_ int X,
    _In_ int Y,
    _In_ int nWidth,
    _In_ int nHeight,
    _In_opt_ HWND hWndParent,
    _In_opt_ HMENU hMenu,
    _In_opt_ HINSTANCE hInstance,
    _In_opt_ LPVOID lpParam);
WINUSERAPI
HWND
WINAPI
CreateWindowExW(
    _In_ DWORD dwExStyle,
    _In_opt_ LPCWSTR lpClassName,
    _In_opt_ LPCWSTR lpWindowName,
    _In_ DWORD dwStyle,
    _In_ int X,
    _In_ int Y,
    _In_ int nWidth,
    _In_ int nHeight,
    _In_opt_ HWND hWndParent,
    _In_opt_ HMENU hMenu,
    _In_opt_ HINSTANCE hInstance,
    _In_opt_ LPVOID lpParam);
#endif
#pragma endregion
nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam)\
CreateWindowExA(0L, lpClassName, lpWindowName, dwStyle, x, y,\
nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam)
nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam)\
CreateWindowExW(0L, lpClassName, lpWindowName, dwStyle, x, y,\
nWidth, nHeight, hWndParent, hMenu, hInstance, lpParam)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
IsWindow(
    _In_opt_ HWND hWnd);
WINUSERAPI
BOOL
WINAPI
IsMenu(
    _In_ HMENU hMenu);
WINUSERAPI
BOOL
WINAPI
IsChild(
    _In_ HWND hWndParent,
    _In_ HWND hWnd);
#endif
#pragma endregion
#pragma region Desktop or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
BOOL
WINAPI
DestroyWindow(
    _In_ HWND hWnd);
WINUSERAPI
BOOL
WINAPI
ShowWindow(
    _In_ HWND hWnd,
    _In_ int nCmdShow);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
AnimateWindow(
    _In_ HWND hWnd,
    _In_ DWORD dwTime,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
GetLayeredWindowAttributes(
    _In_ HWND hwnd,
    _Out_opt_ COLORREF* pcrKey,
    _Out_opt_ BYTE* pbAlpha,
    _Out_opt_ DWORD* pdwFlags);
WINUSERAPI
BOOL
WINAPI
PrintWindow(
    _In_ HWND hwnd,
    _In_ HDC hdcBlt,
    _In_ UINT nFlags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
SetLayeredWindowAttributes(
    _In_ HWND hwnd,
    _In_ COLORREF crKey,
    _In_ BYTE bAlpha,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
ShowWindowAsync(
    _In_ HWND hWnd,
    _In_ int nCmdShow);
WINUSERAPI
BOOL
WINAPI
FlashWindow(
    _In_ HWND hWnd,
    _In_ BOOL bInvert);
typedef struct {
    UINT cbSize;
    HWND hwnd;
    DWORD dwFlags;
    UINT uCount;
    DWORD dwTimeout;
} FLASHWINFO, *PFLASHWINFO;
WINUSERAPI
BOOL
WINAPI
FlashWindowEx(
    _In_ PFLASHWINFO pfwi);
WINUSERAPI
BOOL
WINAPI
ShowOwnedPopups(
    _In_ HWND hWnd,
    _In_ BOOL fShow);
WINUSERAPI
BOOL
WINAPI
OpenIcon(
    _In_ HWND hWnd);
WINUSERAPI
BOOL
WINAPI
CloseWindow(
    _In_ HWND hWnd);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
BOOL
WINAPI
MoveWindow(
    _In_ HWND hWnd,
    _In_ int X,
    _In_ int Y,
    _In_ int nWidth,
    _In_ int nHeight,
    _In_ BOOL bRepaint);
WINUSERAPI
BOOL
WINAPI
SetWindowPos(
    _In_ HWND hWnd,
    _In_opt_ HWND hWndInsertAfter,
    _In_ int X,
    _In_ int Y,
    _In_ int cx,
    _In_ int cy,
    _In_ UINT uFlags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
GetWindowPlacement(
    _In_ HWND hWnd,
    _Inout_ WINDOWPLACEMENT *lpwndpl);
WINUSERAPI
BOOL
WINAPI
SetWindowPlacement(
    _In_ HWND hWnd,
    _In_ CONST WINDOWPLACEMENT *lpwndpl);
WINUSERAPI
BOOL
WINAPI
GetWindowDisplayAffinity(
    _In_ HWND hWnd,
    _Out_ DWORD* pdwAffinity);
WINUSERAPI
BOOL
WINAPI
SetWindowDisplayAffinity(
    _In_ HWND hWnd,
    _In_ DWORD dwAffinity);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
HDWP
WINAPI
BeginDeferWindowPos(
    _In_ int nNumWindows);
WINUSERAPI
HDWP
WINAPI
DeferWindowPos(
    _In_ HDWP hWinPosInfo,
    _In_ HWND hWnd,
    _In_opt_ HWND hWndInsertAfter,
    _In_ int x,
    _In_ int y,
    _In_ int cx,
    _In_ int cy,
    _In_ UINT uFlags);
WINUSERAPI
BOOL
WINAPI
EndDeferWindowPos(
    _In_ HDWP hWinPosInfo);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
BOOL
WINAPI
IsWindowVisible(
    _In_ HWND hWnd);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
IsIconic(
    _In_ HWND hWnd);
WINUSERAPI
BOOL
WINAPI
AnyPopup(
    VOID);
WINUSERAPI
BOOL
WINAPI
BringWindowToTop(
    _In_ HWND hWnd);
WINUSERAPI
BOOL
WINAPI
IsZoomed(
    _In_ HWND hWnd);
#endif
#pragma endregion
#include <pshpack2.h>
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef struct {
    DWORD style;
    DWORD dwExtendedStyle;
    WORD cdit;
    short x;
    short y;
    short cx;
    short cy;
} DLGTEMPLATE;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef DLGTEMPLATE *LPDLGTEMPLATEA;
typedef DLGTEMPLATE *LPDLGTEMPLATEW;
typedef LPDLGTEMPLATEW LPDLGTEMPLATE;
#endif
#pragma endregion
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef CONST DLGTEMPLATE *LPCDLGTEMPLATEA;
typedef CONST DLGTEMPLATE *LPCDLGTEMPLATEW;
typedef LPCDLGTEMPLATEW LPCDLGTEMPLATE;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct {
    DWORD style;
    DWORD dwExtendedStyle;
    short x;
    short y;
    short cx;
    short cy;
    WORD id;
} DLGITEMTEMPLATE;
typedef DLGITEMTEMPLATE *PDLGITEMTEMPLATEA;
typedef DLGITEMTEMPLATE *PDLGITEMTEMPLATEW;
typedef PDLGITEMTEMPLATEW PDLGITEMTEMPLATE;
typedef DLGITEMTEMPLATE *LPDLGITEMTEMPLATEA;
typedef DLGITEMTEMPLATE *LPDLGITEMTEMPLATEW;
typedef LPDLGITEMTEMPLATEW LPDLGITEMTEMPLATE;
#endif
#pragma endregion
#include <poppack.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
HWND
WINAPI
CreateDialogParamA(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCSTR lpTemplateName,
    _In_opt_ HWND hWndParent,
    _In_opt_ DLGPROC lpDialogFunc,
    _In_ LPARAM dwInitParam);
WINUSERAPI
HWND
WINAPI
CreateDialogParamW(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCWSTR lpTemplateName,
    _In_opt_ HWND hWndParent,
    _In_opt_ DLGPROC lpDialogFunc,
    _In_ LPARAM dwInitParam);
WINUSERAPI
HWND
WINAPI
CreateDialogIndirectParamA(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCDLGTEMPLATEA lpTemplate,
    _In_opt_ HWND hWndParent,
    _In_opt_ DLGPROC lpDialogFunc,
    _In_ LPARAM dwInitParam);
WINUSERAPI
HWND
WINAPI
CreateDialogIndirectParamW(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCDLGTEMPLATEW lpTemplate,
    _In_opt_ HWND hWndParent,
    _In_opt_ DLGPROC lpDialogFunc,
    _In_ LPARAM dwInitParam);
CreateDialogParamA(hInstance, lpName, hWndParent, lpDialogFunc, 0L)
CreateDialogParamW(hInstance, lpName, hWndParent, lpDialogFunc, 0L)
CreateDialogIndirectParamA(hInstance, lpTemplate, hWndParent, lpDialogFunc, 0L)
CreateDialogIndirectParamW(hInstance, lpTemplate, hWndParent, lpDialogFunc, 0L)
WINUSERAPI
INT_PTR
WINAPI
DialogBoxParamA(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCSTR lpTemplateName,
    _In_opt_ HWND hWndParent,
    _In_opt_ DLGPROC lpDialogFunc,
    _In_ LPARAM dwInitParam);
WINUSERAPI
INT_PTR
WINAPI
DialogBoxParamW(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCWSTR lpTemplateName,
    _In_opt_ HWND hWndParent,
    _In_opt_ DLGPROC lpDialogFunc,
    _In_ LPARAM dwInitParam);
WINUSERAPI
INT_PTR
WINAPI
DialogBoxIndirectParamA(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCDLGTEMPLATEA hDialogTemplate,
    _In_opt_ HWND hWndParent,
    _In_opt_ DLGPROC lpDialogFunc,
    _In_ LPARAM dwInitParam);
WINUSERAPI
INT_PTR
WINAPI
DialogBoxIndirectParamW(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCDLGTEMPLATEW hDialogTemplate,
    _In_opt_ HWND hWndParent,
    _In_opt_ DLGPROC lpDialogFunc,
    _In_ LPARAM dwInitParam);
DialogBoxParamA(hInstance, lpTemplate, hWndParent, lpDialogFunc, 0L)
DialogBoxParamW(hInstance, lpTemplate, hWndParent, lpDialogFunc, 0L)
DialogBoxIndirectParamA(hInstance, lpTemplate, hWndParent, lpDialogFunc, 0L)
DialogBoxIndirectParamW(hInstance, lpTemplate, hWndParent, lpDialogFunc, 0L)
WINUSERAPI
BOOL
WINAPI
EndDialog(
    _In_ HWND hDlg,
    _In_ INT_PTR nResult);
WINUSERAPI
HWND
WINAPI
GetDlgItem(
    _In_opt_ HWND hDlg,
    _In_ int nIDDlgItem);
WINUSERAPI
BOOL
WINAPI
SetDlgItemInt(
    _In_ HWND hDlg,
    _In_ int nIDDlgItem,
    _In_ UINT uValue,
    _In_ BOOL bSigned);
WINUSERAPI
UINT
WINAPI
GetDlgItemInt(
    _In_ HWND hDlg,
    _In_ int nIDDlgItem,
    _Out_opt_ BOOL *lpTranslated,
    _In_ BOOL bSigned);
WINUSERAPI
BOOL
WINAPI
SetDlgItemTextA(
    _In_ HWND hDlg,
    _In_ int nIDDlgItem,
    _In_ LPCSTR lpString);
WINUSERAPI
BOOL
WINAPI
SetDlgItemTextW(
    _In_ HWND hDlg,
    _In_ int nIDDlgItem,
    _In_ LPCWSTR lpString);
_Ret_range_(0, cchMax)
WINUSERAPI
UINT
WINAPI
GetDlgItemTextA(
    _In_ HWND hDlg,
    _In_ int nIDDlgItem,
    _Out_writes_(cchMax) LPSTR lpString,
    _In_ int cchMax);
_Ret_range_(0, cchMax)
WINUSERAPI
UINT
WINAPI
GetDlgItemTextW(
    _In_ HWND hDlg,
    _In_ int nIDDlgItem,
    _Out_writes_(cchMax) LPWSTR lpString,
    _In_ int cchMax);
WINUSERAPI
BOOL
WINAPI
CheckDlgButton(
    _In_ HWND hDlg,
    _In_ int nIDButton,
    _In_ UINT uCheck);
WINUSERAPI
BOOL
WINAPI
CheckRadioButton(
    _In_ HWND hDlg,
    _In_ int nIDFirstButton,
    _In_ int nIDLastButton,
    _In_ int nIDCheckButton);
WINUSERAPI
UINT
WINAPI
IsDlgButtonChecked(
    _In_ HWND hDlg,
    _In_ int nIDButton);
WINUSERAPI
LRESULT
WINAPI
SendDlgItemMessageA(
    _In_ HWND hDlg,
    _In_ int nIDDlgItem,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
WINUSERAPI
LRESULT
WINAPI
SendDlgItemMessageW(
    _In_ HWND hDlg,
    _In_ int nIDDlgItem,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
WINUSERAPI
HWND
WINAPI
GetNextDlgGroupItem(
    _In_ HWND hDlg,
    _In_opt_ HWND hCtl,
    _In_ BOOL bPrevious);
WINUSERAPI
HWND
WINAPI
GetNextDlgTabItem(
    _In_ HWND hDlg,
    _In_opt_ HWND hCtl,
    _In_ BOOL bPrevious);
WINUSERAPI
int
WINAPI
GetDlgCtrlID(
    _In_ HWND hWnd);
WINUSERAPI
long
WINAPI
GetDialogBaseUnits(VOID);
WINUSERAPI
LRESULT
WINAPI
DefDlgProcA(
    _In_ HWND hDlg,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
WINUSERAPI
LRESULT
WINAPI
DefDlgProcW(
    _In_ HWND hDlg,
    _In_ UINT Msg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
typedef enum DIALOG_CONTROL_DPI_CHANGE_BEHAVIORS {
     DCDC_DEFAULT = 0x0000,
     DCDC_DISABLE_FONT_UPDATE = 0x0001,
     DCDC_DISABLE_RELAYOUT = 0x0002,
} DIALOG_CONTROL_DPI_CHANGE_BEHAVIORS;
DEFINE_ENUM_FLAG_OPERATORS(DIALOG_CONTROL_DPI_CHANGE_BEHAVIORS);
BOOL
WINAPI
SetDialogControlDpiChangeBehavior(
    _In_ HWND hWnd,
    _In_ DIALOG_CONTROL_DPI_CHANGE_BEHAVIORS mask,
    _In_ DIALOG_CONTROL_DPI_CHANGE_BEHAVIORS values);
DIALOG_CONTROL_DPI_CHANGE_BEHAVIORS
WINAPI
GetDialogControlDpiChangeBehavior(
    _In_ HWND hWnd);
typedef enum DIALOG_DPI_CHANGE_BEHAVIORS {
    DDC_DEFAULT = 0x0000,
    DDC_DISABLE_ALL = 0x0001,
    DDC_DISABLE_RESIZE = 0x0002,
    DDC_DISABLE_CONTROL_RELAYOUT = 0x0004,
} DIALOG_DPI_CHANGE_BEHAVIORS;
DEFINE_ENUM_FLAG_OPERATORS(DIALOG_DPI_CHANGE_BEHAVIORS);
BOOL
WINAPI
SetDialogDpiChangeBehavior(
    _In_ HWND hDlg,
    _In_ DIALOG_DPI_CHANGE_BEHAVIORS mask,
    _In_ DIALOG_DPI_CHANGE_BEHAVIORS values);
DIALOG_DPI_CHANGE_BEHAVIORS
WINAPI
GetDialogDpiChangeBehavior(
    _In_ HWND hDlg);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
CallMsgFilterA(
    _In_ LPMSG lpMsg,
    _In_ int nCode);
WINUSERAPI
BOOL
WINAPI
CallMsgFilterW(
    _In_ LPMSG lpMsg,
    _In_ int nCode);
WINUSERAPI
BOOL
WINAPI
OpenClipboard(
    _In_opt_ HWND hWndNewOwner);
WINUSERAPI
BOOL
WINAPI
CloseClipboard(
    VOID);
WINUSERAPI
DWORD
WINAPI
GetClipboardSequenceNumber(
    VOID);
WINUSERAPI
HWND
WINAPI
GetClipboardOwner(
    VOID);
WINUSERAPI
HWND
WINAPI
SetClipboardViewer(
    _In_ HWND hWndNewViewer);
WINUSERAPI
HWND
WINAPI
GetClipboardViewer(
    VOID);
WINUSERAPI
BOOL
WINAPI
ChangeClipboardChain(
    _In_ HWND hWndRemove,
    _In_ HWND hWndNewNext);
WINUSERAPI
HANDLE
WINAPI
SetClipboardData(
    _In_ UINT uFormat,
    _In_opt_ HANDLE hMem);
WINUSERAPI
HANDLE
WINAPI
GetClipboardData(
    _In_ UINT uFormat);
WINUSERAPI
UINT
WINAPI
RegisterClipboardFormatA(
    _In_ LPCSTR lpszFormat);
WINUSERAPI
UINT
WINAPI
RegisterClipboardFormatW(
    _In_ LPCWSTR lpszFormat);
WINUSERAPI
int
WINAPI
CountClipboardFormats(
    VOID);
WINUSERAPI
UINT
WINAPI
EnumClipboardFormats(
    _In_ UINT format);
WINUSERAPI
int
WINAPI
GetClipboardFormatNameA(
    _In_ UINT format,
    _Out_writes_(cchMaxCount) LPSTR lpszFormatName,
    _In_ int cchMaxCount);
WINUSERAPI
int
WINAPI
GetClipboardFormatNameW(
    _In_ UINT format,
    _Out_writes_(cchMaxCount) LPWSTR lpszFormatName,
    _In_ int cchMaxCount);
WINUSERAPI
BOOL
WINAPI
EmptyClipboard(
    VOID);
WINUSERAPI
BOOL
WINAPI
IsClipboardFormatAvailable(
    _In_ UINT format);
WINUSERAPI
int
WINAPI
GetPriorityClipboardFormat(
    _In_reads_(cFormats) UINT *paFormatPriorityList,
    _In_ int cFormats);
WINUSERAPI
HWND
WINAPI
GetOpenClipboardWindow(
    VOID);
WINUSERAPI
BOOL
WINAPI
AddClipboardFormatListener(
    _In_ HWND hwnd);
WINUSERAPI
BOOL
WINAPI
RemoveClipboardFormatListener(
    _In_ HWND hwnd);
WINUSERAPI
BOOL
WINAPI
GetUpdatedClipboardFormats(
    _Out_writes_(cFormats) PUINT lpuiFormats,
    _In_ UINT cFormats,
    _Out_ PUINT pcFormatsOut);
WINUSERAPI
BOOL
WINAPI
CharToOemA(
    _In_ LPCSTR pSrc,
    _Out_writes_(_Inexpressible_(strlen(pSrc) + 1)) LPSTR pDst);
WINUSERAPI
BOOL
WINAPI
CharToOemW(
    _In_ LPCWSTR pSrc,
    _Out_writes_(_Inexpressible_(strlen(pSrc) + 1)) LPSTR pDst);
__drv_preferredFunction("OemToCharBuff","Does not validate buffer size")
WINUSERAPI
BOOL
WINAPI
OemToCharA(
    _In_ LPCSTR pSrc,
    _Out_writes_(_Inexpressible_(strlen(pSrc) + 1)) LPSTR pDst);
__drv_preferredFunction("OemToCharBuff","Does not validate buffer size")
WINUSERAPI
BOOL
WINAPI
OemToCharW(
    _In_ LPCSTR pSrc,
    _Out_writes_(_Inexpressible_(strlen(pSrc) + 1)) LPWSTR pDst);
WINUSERAPI
BOOL
WINAPI
CharToOemBuffA(
    _In_ LPCSTR lpszSrc,
    _Out_writes_(cchDstLength) LPSTR lpszDst,
    _In_ DWORD cchDstLength);
WINUSERAPI
BOOL
WINAPI
CharToOemBuffW(
    _In_ LPCWSTR lpszSrc,
    _Out_writes_(cchDstLength) LPSTR lpszDst,
    _In_ DWORD cchDstLength);
WINUSERAPI
BOOL
WINAPI
OemToCharBuffA(
    _In_ LPCSTR lpszSrc,
    _Out_writes_(cchDstLength) LPSTR lpszDst,
    _In_ DWORD cchDstLength);
WINUSERAPI
BOOL
WINAPI
OemToCharBuffW(
    _In_ LPCSTR lpszSrc,
    _Out_writes_(cchDstLength) LPWSTR lpszDst,
    _In_ DWORD cchDstLength);
#endif
#pragma endregion
#pragma region Desktop Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINUSERAPI
LPSTR
WINAPI
CharUpperA(
    _Inout_ LPSTR lpsz);
WINUSERAPI
LPWSTR
WINAPI
CharUpperW(
    _Inout_ LPWSTR lpsz);
WINUSERAPI
DWORD
WINAPI
CharUpperBuffA(
    _Inout_updates_(cchLength) LPSTR lpsz,
    _In_ DWORD cchLength);
WINUSERAPI
DWORD
WINAPI
CharUpperBuffW(
    _Inout_updates_(cchLength) LPWSTR lpsz,
    _In_ DWORD cchLength);
WINUSERAPI
LPSTR
WINAPI
CharLowerA(
    _Inout_ LPSTR lpsz);
WINUSERAPI
LPWSTR
WINAPI
CharLowerW(
    _Inout_ LPWSTR lpsz);
WINUSERAPI
DWORD
WINAPI
CharLowerBuffA(
    _Inout_updates_(cchLength) LPSTR lpsz,
    _In_ DWORD cchLength);
WINUSERAPI
DWORD
WINAPI
CharLowerBuffW(
    _Inout_updates_(cchLength) LPWSTR lpsz,
    _In_ DWORD cchLength);
WINUSERAPI
LPSTR
WINAPI
CharNextA(
    _In_ LPCSTR lpsz);
WINUSERAPI
LPWSTR
WINAPI
CharNextW(
    _In_ LPCWSTR lpsz);
WINUSERAPI
LPSTR
WINAPI
CharPrevA(
    _In_ LPCSTR lpszStart,
    _In_ LPCSTR lpszCurrent);
WINUSERAPI
LPWSTR
WINAPI
CharPrevW(
    _In_ LPCWSTR lpszStart,
    _In_ LPCWSTR lpszCurrent);
WINUSERAPI
LPSTR
WINAPI
CharNextExA(
     _In_ WORD CodePage,
     _In_ LPCSTR lpCurrentChar,
     _In_ DWORD dwFlags);
WINUSERAPI
LPSTR
WINAPI
CharPrevExA(
     _In_ WORD CodePage,
     _In_ LPCSTR lpStart,
     _In_ LPCSTR lpCurrentChar,
     _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Desktop or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_SYSTEM)
WINUSERAPI
BOOL
WINAPI
IsCharAlphaA(
    _In_ CHAR ch);
WINUSERAPI
BOOL
WINAPI
IsCharAlphaW(
    _In_ WCHAR ch);
WINUSERAPI
BOOL
WINAPI
IsCharAlphaNumericA(
    _In_ CHAR ch);
WINUSERAPI
BOOL
WINAPI
IsCharAlphaNumericW(
    _In_ WCHAR ch);
WINUSERAPI
BOOL
WINAPI
IsCharUpperA(
    _In_ CHAR ch);
WINUSERAPI
BOOL
WINAPI
IsCharUpperW(
    _In_ WCHAR ch);
WINUSERAPI
BOOL
WINAPI
IsCharLowerA(
    _In_ CHAR ch);
WINUSERAPI
BOOL
WINAPI
IsCharLowerW(
    _In_ WCHAR ch);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
HWND
WINAPI
SetFocus(
    _In_opt_ HWND hWnd);
WINUSERAPI
HWND
WINAPI
GetActiveWindow(
    VOID);
WINUSERAPI
HWND
WINAPI
GetFocus(
    VOID);
WINUSERAPI
UINT
WINAPI
GetKBCodePage(
    VOID);
WINUSERAPI
SHORT
WINAPI
GetKeyState(
    _In_ int nVirtKey);
WINUSERAPI
SHORT
WINAPI
GetAsyncKeyState(
    _In_ int vKey);
WINUSERAPI
_Check_return_
BOOL
WINAPI
GetKeyboardState(
    _Out_writes_(256) PBYTE lpKeyState);
WINUSERAPI
BOOL
WINAPI
SetKeyboardState(
    _In_reads_(256) LPBYTE lpKeyState);
#endif
#pragma endregion
#pragma region Desktop or PC Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PC_APP)
WINUSERAPI
int
WINAPI
GetKeyNameTextA(
    _In_ LONG lParam,
    _Out_writes_(cchSize) LPSTR lpString,
    _In_ int cchSize);
WINUSERAPI
int
WINAPI
GetKeyNameTextW(
    _In_ LONG lParam,
    _Out_writes_(cchSize) LPWSTR lpString,
    _In_ int cchSize);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
int
WINAPI
GetKeyboardType(
    _In_ int nTypeFlag);
WINUSERAPI
int
WINAPI
ToAscii(
    _In_ UINT uVirtKey,
    _In_ UINT uScanCode,
    _In_reads_opt_(256) CONST BYTE *lpKeyState,
    _Out_ LPWORD lpChar,
    _In_ UINT uFlags);
WINUSERAPI
int
WINAPI
ToAsciiEx(
    _In_ UINT uVirtKey,
    _In_ UINT uScanCode,
    _In_reads_opt_(256) CONST BYTE *lpKeyState,
    _Out_ LPWORD lpChar,
    _In_ UINT uFlags,
    _In_opt_ HKL dwhkl);
WINUSERAPI
int
WINAPI
ToUnicode(
    _In_ UINT wVirtKey,
    _In_ UINT wScanCode,
    _In_reads_bytes_opt_(256) CONST BYTE *lpKeyState,
    _Out_writes_(cchBuff) LPWSTR pwszBuff,
    _In_ int cchBuff,
    _In_ UINT wFlags);
WINUSERAPI
DWORD
WINAPI
OemKeyScan(
    _In_ WORD wOemChar);
WINUSERAPI
SHORT
WINAPI
VkKeyScanA(
    _In_ CHAR ch);
WINUSERAPI
SHORT
WINAPI
VkKeyScanW(
    _In_ WCHAR ch);
WINUSERAPI
SHORT
WINAPI
VkKeyScanExA(
    _In_ CHAR ch,
    _In_ HKL dwhkl);
WINUSERAPI
SHORT
WINAPI
VkKeyScanExW(
    _In_ WCHAR ch,
    _In_ HKL dwhkl);
WINUSERAPI
VOID
WINAPI
keybd_event(
    _In_ BYTE bVk,
    _In_ BYTE bScan,
    _In_ DWORD dwFlags,
    _In_ ULONG_PTR dwExtraInfo);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
VOID
WINAPI
mouse_event(
    _In_ DWORD dwFlags,
    _In_ DWORD dx,
    _In_ DWORD dy,
    _In_ DWORD dwData,
    _In_ ULONG_PTR dwExtraInfo);
#endif
#pragma endregion
typedef struct tagMOUSEINPUT {
    LONG dx;
    LONG dy;
    DWORD mouseData;
    DWORD dwFlags;
    DWORD time;
    ULONG_PTR dwExtraInfo;
} MOUSEINPUT, *PMOUSEINPUT, FAR* LPMOUSEINPUT;
typedef struct tagKEYBDINPUT {
    WORD wVk;
    WORD wScan;
    DWORD dwFlags;
    DWORD time;
    ULONG_PTR dwExtraInfo;
} KEYBDINPUT, *PKEYBDINPUT, FAR* LPKEYBDINPUT;
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagHARDWAREINPUT {
    DWORD uMsg;
    WORD wParamL;
    WORD wParamH;
} HARDWAREINPUT, *PHARDWAREINPUT, FAR* LPHARDWAREINPUT;
typedef struct tagINPUT {
    DWORD type;
    union
    {
        MOUSEINPUT mi;
        KEYBDINPUT ki;
        HARDWAREINPUT hi;
    } DUMMYUNIONNAME;
} INPUT, *PINPUT, FAR* LPINPUT;
WINUSERAPI
UINT
WINAPI
SendInput(
    _In_ UINT cInputs,
    _In_reads_(cInputs) LPINPUT pInputs,
    _In_ int cbSize);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DECLARE_HANDLE(HTOUCHINPUT);
typedef struct tagTOUCHINPUT {
    LONG x;
    LONG y;
    HANDLE hSource;
    DWORD dwID;
    DWORD dwFlags;
    DWORD dwMask;
    DWORD dwTime;
    ULONG_PTR dwExtraInfo;
    DWORD cxContact;
    DWORD cyContact;
} TOUCHINPUT, *PTOUCHINPUT;
typedef TOUCHINPUT const * PCTOUCHINPUT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
GetTouchInputInfo(
    _In_ HTOUCHINPUT hTouchInput,
    _In_ UINT cInputs,
    _Out_writes_(cInputs) PTOUCHINPUT pInputs,
    _In_ int cbSize);
WINUSERAPI
BOOL
WINAPI
CloseTouchInputHandle(
    _In_ HTOUCHINPUT hTouchInput);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
RegisterTouchWindow(
    _In_ HWND hwnd,
    _In_ ULONG ulFlags);
WINUSERAPI
BOOL
WINAPI
UnregisterTouchWindow(
    _In_ HWND hwnd);
WINUSERAPI
BOOL
WINAPI
IsTouchWindow(
    _In_ HWND hwnd,
    _Out_opt_ PULONG pulFlags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
enum tagPOINTER_INPUT_TYPE {
    PT_POINTER = 1,
    PT_TOUCH = 2,
    PT_PEN = 3,
    PT_MOUSE = 4,
    PT_TOUCHPAD = 5,
};
typedef DWORD POINTER_INPUT_TYPE;
typedef UINT32 POINTER_FLAGS;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum tagPOINTER_BUTTON_CHANGE_TYPE {
    POINTER_CHANGE_NONE,
    POINTER_CHANGE_FIRSTBUTTON_DOWN,
    POINTER_CHANGE_FIRSTBUTTON_UP,
    POINTER_CHANGE_SECONDBUTTON_DOWN,
    POINTER_CHANGE_SECONDBUTTON_UP,
    POINTER_CHANGE_THIRDBUTTON_DOWN,
    POINTER_CHANGE_THIRDBUTTON_UP,
    POINTER_CHANGE_FOURTHBUTTON_DOWN,
    POINTER_CHANGE_FOURTHBUTTON_UP,
    POINTER_CHANGE_FIFTHBUTTON_DOWN,
    POINTER_CHANGE_FIFTHBUTTON_UP,
} POINTER_BUTTON_CHANGE_TYPE;
typedef struct tagPOINTER_INFO {
    POINTER_INPUT_TYPE pointerType;
    UINT32 pointerId;
    UINT32 frameId;
    POINTER_FLAGS pointerFlags;
    HANDLE sourceDevice;
    HWND hwndTarget;
    POINT ptPixelLocation;
    POINT ptHimetricLocation;
    POINT ptPixelLocationRaw;
    POINT ptHimetricLocationRaw;
    DWORD dwTime;
    UINT32 historyCount;
    INT32 InputData;
    DWORD dwKeyStates;
    UINT64 PerformanceCount;
    POINTER_BUTTON_CHANGE_TYPE ButtonChangeType;
} POINTER_INFO;
typedef UINT32 TOUCH_FLAGS;
typedef UINT32 TOUCH_MASK;
typedef struct tagPOINTER_TOUCH_INFO {
    POINTER_INFO pointerInfo;
    TOUCH_FLAGS touchFlags;
    TOUCH_MASK touchMask;
    RECT rcContact;
    RECT rcContactRaw;
    UINT32 orientation;
    UINT32 pressure;
} POINTER_TOUCH_INFO;
typedef UINT32 PEN_FLAGS;
typedef UINT32 PEN_MASK;
typedef struct tagPOINTER_PEN_INFO {
    POINTER_INFO pointerInfo;
    PEN_FLAGS penFlags;
    PEN_MASK penMask;
    UINT32 pressure;
    UINT32 rotation;
    INT32 tiltX;
    INT32 tiltY;
} POINTER_PEN_INFO;
#endif
#pragma endregion
typedef enum {
    POINTER_FEEDBACK_DEFAULT = 1,
    POINTER_FEEDBACK_INDIRECT = 2,
    POINTER_FEEDBACK_NONE = 3,
} POINTER_FEEDBACK_MODE;
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
InitializeTouchInjection(
    _In_ UINT32 maxCount,
    _In_ DWORD dwMode);
WINUSERAPI
BOOL
WINAPI
InjectTouchInput(
    _In_ UINT32 count,
    _In_reads_(count) CONST POINTER_TOUCH_INFO *contacts);
typedef struct tagUSAGE_PROPERTIES {
    USHORT level;
    USHORT page;
    USHORT usage;
    INT32 logicalMinimum;
    INT32 logicalMaximum;
    USHORT unit;
    USHORT exponent;
    BYTE count;
    INT32 physicalMinimum;
    INT32 physicalMaximum;
}USAGE_PROPERTIES, *PUSAGE_PROPERTIES;
typedef struct tagPOINTER_TYPE_INFO {
    POINTER_INPUT_TYPE type;
    union{
        POINTER_TOUCH_INFO touchInfo;
        POINTER_PEN_INFO penInfo;
    } DUMMYUNIONNAME;
}POINTER_TYPE_INFO, *PPOINTER_TYPE_INFO;
typedef struct tagINPUT_INJECTION_VALUE {
    USHORT page;
    USHORT usage;
    INT32 value;
    USHORT index;
}INPUT_INJECTION_VALUE, *PINPUT_INJECTION_VALUE;
WINUSERAPI
BOOL
WINAPI
GetPointerType(
    _In_ UINT32 pointerId,
    _Out_ POINTER_INPUT_TYPE *pointerType);
WINUSERAPI
BOOL
WINAPI
GetPointerCursorId(
    _In_ UINT32 pointerId,
    _Out_ UINT32 *cursorId);
WINUSERAPI
BOOL
WINAPI
GetPointerInfo(
    _In_ UINT32 pointerId,
    _Out_writes_(1) POINTER_INFO *pointerInfo);
WINUSERAPI
BOOL
WINAPI
GetPointerInfoHistory(
    _In_ UINT32 pointerId,
    _Inout_ UINT32 *entriesCount,
    _Out_writes_opt_(*entriesCount) POINTER_INFO *pointerInfo);
WINUSERAPI
BOOL
WINAPI
GetPointerFrameInfo(
    _In_ UINT32 pointerId,
    _Inout_ UINT32 *pointerCount,
    _Out_writes_opt_(*pointerCount) POINTER_INFO *pointerInfo);
WINUSERAPI
BOOL
WINAPI
GetPointerFrameInfoHistory(
    _In_ UINT32 pointerId,
    _Inout_ UINT32 *entriesCount,
    _Inout_ UINT32 *pointerCount,
    _Out_writes_opt_(*entriesCount * *pointerCount) POINTER_INFO *pointerInfo);
WINUSERAPI
BOOL
WINAPI
GetPointerTouchInfo(
    _In_ UINT32 pointerId,
    _Out_writes_(1) POINTER_TOUCH_INFO *touchInfo);
WINUSERAPI
BOOL
WINAPI
GetPointerTouchInfoHistory(
    _In_ UINT32 pointerId,
    _Inout_ UINT32 *entriesCount,
    _Out_writes_opt_(*entriesCount) POINTER_TOUCH_INFO *touchInfo);
WINUSERAPI
BOOL
WINAPI
GetPointerFrameTouchInfo(
    _In_ UINT32 pointerId,
    _Inout_ UINT32 *pointerCount,
    _Out_writes_opt_(*pointerCount) POINTER_TOUCH_INFO *touchInfo);
WINUSERAPI
BOOL
WINAPI
GetPointerFrameTouchInfoHistory(
    _In_ UINT32 pointerId,
    _Inout_ UINT32 *entriesCount,
    _Inout_ UINT32 *pointerCount,
    _Out_writes_opt_(*entriesCount * *pointerCount) POINTER_TOUCH_INFO *touchInfo);
WINUSERAPI
BOOL
WINAPI
GetPointerPenInfo(
    _In_ UINT32 pointerId,
    _Out_writes_(1) POINTER_PEN_INFO *penInfo);
WINUSERAPI
BOOL
WINAPI
GetPointerPenInfoHistory(
    _In_ UINT32 pointerId,
    _Inout_ UINT32 *entriesCount,
    _Out_writes_opt_(*entriesCount) POINTER_PEN_INFO *penInfo);
WINUSERAPI
BOOL
WINAPI
GetPointerFramePenInfo(
    _In_ UINT32 pointerId,
    _Inout_ UINT32 *pointerCount,
    _Out_writes_opt_(*pointerCount) POINTER_PEN_INFO *penInfo);
WINUSERAPI
BOOL
WINAPI
GetPointerFramePenInfoHistory(
    _In_ UINT32 pointerId,
    _Inout_ UINT32 *entriesCount,
    _Inout_ UINT32 *pointerCount,
    _Out_writes_opt_(*entriesCount * *pointerCount) POINTER_PEN_INFO *penInfo);
WINUSERAPI
BOOL
WINAPI
SkipPointerFrameMessages(
    _In_ UINT32 pointerId);
WINUSERAPI
BOOL
WINAPI
RegisterPointerInputTarget(
    _In_ HWND hwnd,
    _In_ POINTER_INPUT_TYPE pointerType);
WINUSERAPI
BOOL
WINAPI
UnregisterPointerInputTarget(
    _In_ HWND hwnd,
    _In_ POINTER_INPUT_TYPE pointerType);
WINUSERAPI
BOOL
WINAPI
RegisterPointerInputTargetEx(
    _In_ HWND hwnd,
    _In_ POINTER_INPUT_TYPE pointerType,
    _In_ BOOL fObserve);
WINUSERAPI
BOOL
WINAPI
UnregisterPointerInputTargetEx(
    _In_ HWND hwnd,
    _In_ POINTER_INPUT_TYPE pointerType);
DECLARE_HANDLE(HSYNTHETICPOINTERDEVICE);
WINUSERAPI
HSYNTHETICPOINTERDEVICE
WINAPI
CreateSyntheticPointerDevice(
    _In_ POINTER_INPUT_TYPE pointerType,
    _In_ ULONG maxCount,
    _In_ POINTER_FEEDBACK_MODE mode);
WINUSERAPI
BOOL
WINAPI
InjectSyntheticPointerInput(
    _In_ HSYNTHETICPOINTERDEVICE device,
    _In_reads_(count) CONST POINTER_TYPE_INFO* pointerInfo,
    _In_ UINT32 count);
WINUSERAPI
VOID
WINAPI
DestroySyntheticPointerDevice(
    _In_ HSYNTHETICPOINTERDEVICE device);
WINUSERAPI
BOOL
WINAPI
EnableMouseInPointer(
    _In_ BOOL fEnable);
WINUSERAPI
BOOL
WINAPI
IsMouseInPointerEnabled(
    VOID);
WINUSERAPI
BOOL
WINAPI
EnableMouseInPointerForThread();
WINUSERAPI
BOOL
WINAPI
RegisterTouchHitTestingWindow(
    _In_ HWND hwnd,
    _In_ ULONG value);
typedef struct tagTOUCH_HIT_TESTING_PROXIMITY_EVALUATION
{
    UINT16 score;
    POINT adjustedPoint;
} TOUCH_HIT_TESTING_PROXIMITY_EVALUATION, *PTOUCH_HIT_TESTING_PROXIMITY_EVALUATION;
typedef struct tagTOUCH_HIT_TESTING_INPUT
{
    UINT32 pointerId;
    POINT point;
    RECT boundingBox;
    RECT nonOccludedBoundingBox;
    UINT32 orientation;
} TOUCH_HIT_TESTING_INPUT, *PTOUCH_HIT_TESTING_INPUT;
WINUSERAPI
BOOL
WINAPI
EvaluateProximityToRect(
    _In_ const RECT *controlBoundingBox,
    _In_ const TOUCH_HIT_TESTING_INPUT *pHitTestingInput,
    _Out_ TOUCH_HIT_TESTING_PROXIMITY_EVALUATION *pProximityEval);
WINUSERAPI
BOOL
WINAPI
EvaluateProximityToPolygon(
    UINT32 numVertices,
    _In_reads_(numVertices) const POINT *controlPolygon,
    _In_ const TOUCH_HIT_TESTING_INPUT *pHitTestingInput,
    _Out_ TOUCH_HIT_TESTING_PROXIMITY_EVALUATION *pProximityEval);
WINUSERAPI
LRESULT
WINAPI
PackTouchHitTestingProximityEvaluation(
    _In_ const TOUCH_HIT_TESTING_INPUT *pHitTestingInput,
    _In_ const TOUCH_HIT_TESTING_PROXIMITY_EVALUATION *pProximityEval);
typedef enum tagFEEDBACK_TYPE {
    FEEDBACK_TOUCH_CONTACTVISUALIZATION = 1,
    FEEDBACK_PEN_BARRELVISUALIZATION = 2,
    FEEDBACK_PEN_TAP = 3,
    FEEDBACK_PEN_DOUBLETAP = 4,
    FEEDBACK_PEN_PRESSANDHOLD = 5,
    FEEDBACK_PEN_RIGHTTAP = 6,
    FEEDBACK_TOUCH_TAP = 7,
    FEEDBACK_TOUCH_DOUBLETAP = 8,
    FEEDBACK_TOUCH_PRESSANDHOLD = 9,
    FEEDBACK_TOUCH_RIGHTTAP = 10,
    FEEDBACK_GESTURE_PRESSANDTAP = 11,
    FEEDBACK_MAX = 0xFFFFFFFF
} FEEDBACK_TYPE;
WINUSERAPI
BOOL
WINAPI
GetWindowFeedbackSetting(
    _In_ HWND hwnd,
    _In_ FEEDBACK_TYPE feedback,
    _In_ DWORD dwFlags,
    _Inout_ UINT32* pSize,
    _Out_writes_bytes_opt_(*pSize) VOID* config);
WINUSERAPI
BOOL
WINAPI
SetWindowFeedbackSetting(
    _In_ HWND hwnd,
    _In_ FEEDBACK_TYPE feedback,
    _In_ DWORD dwFlags,
    _In_ UINT32 size,
    _In_reads_bytes_opt_(size) CONST VOID* configuration);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(disable : 4201)
typedef struct tagINPUT_TRANSFORM {
    union {
        struct {
            float _11, _12, _13, _14;
            float _21, _22, _23, _24;
            float _31, _32, _33, _34;
            float _41, _42, _43, _44;
        } DUMMYSTRUCTNAME;
        float m[4][4];
    } DUMMYUNIONNAME;
} INPUT_TRANSFORM;
WINUSERAPI
BOOL
WINAPI
GetPointerInputTransform(
    _In_ UINT32 pointerId,
    _In_ UINT32 historyCount,
    _Out_writes_(historyCount) INPUT_TRANSFORM *inputTransform);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PC_APP)
typedef struct tagLASTINPUTINFO {
    UINT cbSize;
    DWORD dwTime;
} LASTINPUTINFO, * PLASTINPUTINFO;
WINUSERAPI
BOOL
WINAPI
GetLastInputInfo(
    _Out_ PLASTINPUTINFO plii);
#endif
#pragma endregion
#pragma region Desktop or PC Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PC_APP)
WINUSERAPI
UINT
WINAPI
MapVirtualKeyA(
    _In_ UINT uCode,
    _In_ UINT uMapType);
WINUSERAPI
UINT
WINAPI
MapVirtualKeyW(
    _In_ UINT uCode,
    _In_ UINT uMapType);
WINUSERAPI
UINT
WINAPI
MapVirtualKeyExA(
    _In_ UINT uCode,
    _In_ UINT uMapType,
    _In_opt_ HKL dwhkl);
WINUSERAPI
UINT
WINAPI
MapVirtualKeyExW(
    _In_ UINT uCode,
    _In_ UINT uMapType,
    _In_opt_ HKL dwhkl);
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
WINUSERAPI
BOOL
WINAPI
GetInputState(
    VOID);
WINUSERAPI
DWORD
WINAPI
GetQueueStatus(
    _In_ UINT flags);
WINUSERAPI
HWND
WINAPI
GetCapture(
    VOID);
WINUSERAPI
HWND
WINAPI
SetCapture(
    _In_ HWND hWnd);
WINUSERAPI
BOOL
WINAPI
ReleaseCapture(
    VOID);
WINUSERAPI
DWORD
WINAPI
MsgWaitForMultipleObjects(
    _In_ DWORD nCount,
    _In_reads_opt_(nCount) CONST HANDLE *pHandles,
    _In_ BOOL fWaitAll,
    _In_ DWORD dwMilliseconds,
    _In_ DWORD dwWakeMask);
WINUSERAPI
DWORD
WINAPI
MsgWaitForMultipleObjectsEx(
    _In_ DWORD nCount,
    _In_reads_opt_(nCount) CONST HANDLE *pHandles,
    _In_ DWORD dwMilliseconds,
    _In_ DWORD dwWakeMask,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
                            QS_MOUSEBUTTON)
                            QS_KEY | \
                            QS_RAWINPUT | \
                            QS_TOUCH | \
                            QS_POINTER)
                            QS_POSTMESSAGE | \
                            QS_TIMER | \
                            QS_PAINT | \
                            QS_HOTKEY)
                            QS_POSTMESSAGE | \
                            QS_TIMER | \
                            QS_PAINT | \
                            QS_HOTKEY | \
                            QS_SENDMESSAGE)
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
UINT_PTR
WINAPI
SetTimer(
    _In_opt_ HWND hWnd,
    _In_ UINT_PTR nIDEvent,
    _In_ UINT uElapse,
    _In_opt_ TIMERPROC lpTimerFunc);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
UINT_PTR
WINAPI
SetCoalescableTimer(
    _In_opt_ HWND hWnd,
    _In_ UINT_PTR nIDEvent,
    _In_ UINT uElapse,
    _In_opt_ TIMERPROC lpTimerFunc,
    _In_ ULONG uToleranceDelay);
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
BOOL
WINAPI
KillTimer(
    _In_opt_ HWND hWnd,
    _In_ UINT_PTR uIDEvent);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
IsWindowUnicode(
    _In_ HWND hWnd);
WINUSERAPI
BOOL
WINAPI
EnableWindow(
    _In_ HWND hWnd,
    _In_ BOOL bEnable);
WINUSERAPI
BOOL
WINAPI
IsWindowEnabled(
    _In_ HWND hWnd);
WINUSERAPI
HACCEL
WINAPI
LoadAcceleratorsA(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCSTR lpTableName);
WINUSERAPI
HACCEL
WINAPI
LoadAcceleratorsW(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCWSTR lpTableName);
WINUSERAPI
HACCEL
WINAPI
CreateAcceleratorTableA(
    _In_reads_(cAccel) LPACCEL paccel,
    _In_ int cAccel);
WINUSERAPI
HACCEL
WINAPI
CreateAcceleratorTableW(
    _In_reads_(cAccel) LPACCEL paccel,
    _In_ int cAccel);
WINUSERAPI
BOOL
WINAPI
DestroyAcceleratorTable(
    _In_ HACCEL hAccel);
WINUSERAPI
int
WINAPI
CopyAcceleratorTableA(
    _In_ HACCEL hAccelSrc,
    _Out_writes_to_opt_(cAccelEntries, return) LPACCEL lpAccelDst,
    _In_ int cAccelEntries);
WINUSERAPI
int
WINAPI
CopyAcceleratorTableW(
    _In_ HACCEL hAccelSrc,
    _Out_writes_to_opt_(cAccelEntries, return) LPACCEL lpAccelDst,
    _In_ int cAccelEntries);
WINUSERAPI
int
WINAPI
TranslateAcceleratorA(
    _In_ HWND hWnd,
    _In_ HACCEL hAccTable,
    _In_ LPMSG lpMsg);
WINUSERAPI
int
WINAPI
TranslateAcceleratorW(
    _In_ HWND hWnd,
    _In_ HACCEL hAccTable,
    _In_ LPMSG lpMsg);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
int
WINAPI
GetSystemMetrics(
    _In_ int nIndex);
WINUSERAPI
int
WINAPI
GetSystemMetricsForDpi(
    _In_ int nIndex,
    _In_ UINT dpi);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
HMENU
WINAPI
LoadMenuA(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCSTR lpMenuName);
WINUSERAPI
HMENU
WINAPI
LoadMenuW(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCWSTR lpMenuName);
WINUSERAPI
HMENU
WINAPI
LoadMenuIndirectA(
    _In_ CONST MENUTEMPLATEA *lpMenuTemplate);
WINUSERAPI
HMENU
WINAPI
LoadMenuIndirectW(
    _In_ CONST MENUTEMPLATEW *lpMenuTemplate);
WINUSERAPI
HMENU
WINAPI
GetMenu(
    _In_ HWND hWnd);
WINUSERAPI
BOOL
WINAPI
SetMenu(
    _In_ HWND hWnd,
    _In_opt_ HMENU hMenu);
WINUSERAPI
BOOL
WINAPI
ChangeMenuA(
    _In_ HMENU hMenu,
    _In_ UINT cmd,
    _In_opt_ LPCSTR lpszNewItem,
    _In_ UINT cmdInsert,
    _In_ UINT flags);
WINUSERAPI
BOOL
WINAPI
ChangeMenuW(
    _In_ HMENU hMenu,
    _In_ UINT cmd,
    _In_opt_ LPCWSTR lpszNewItem,
    _In_ UINT cmdInsert,
    _In_ UINT flags);
WINUSERAPI
BOOL
WINAPI
HiliteMenuItem(
    _In_ HWND hWnd,
    _In_ HMENU hMenu,
    _In_ UINT uIDHiliteItem,
    _In_ UINT uHilite);
WINUSERAPI
int
WINAPI
GetMenuStringA(
    _In_ HMENU hMenu,
    _In_ UINT uIDItem,
    _Out_writes_opt_(cchMax) LPSTR lpString,
    _In_ int cchMax,
    _In_ UINT flags);
WINUSERAPI
int
WINAPI
GetMenuStringW(
    _In_ HMENU hMenu,
    _In_ UINT uIDItem,
    _Out_writes_opt_(cchMax) LPWSTR lpString,
    _In_ int cchMax,
    _In_ UINT flags);
WINUSERAPI
UINT
WINAPI
GetMenuState(
    _In_ HMENU hMenu,
    _In_ UINT uId,
    _In_ UINT uFlags);
WINUSERAPI
BOOL
WINAPI
DrawMenuBar(
    _In_ HWND hWnd);
WINUSERAPI
HMENU
WINAPI
GetSystemMenu(
    _In_ HWND hWnd,
    _In_ BOOL bRevert);
WINUSERAPI
HMENU
WINAPI
CreateMenu(
    VOID);
WINUSERAPI
HMENU
WINAPI
CreatePopupMenu(
    VOID);
WINUSERAPI
BOOL
WINAPI
DestroyMenu(
    _In_ HMENU hMenu);
WINUSERAPI
DWORD
WINAPI
CheckMenuItem(
    _In_ HMENU hMenu,
    _In_ UINT uIDCheckItem,
    _In_ UINT uCheck);
WINUSERAPI
BOOL
WINAPI
EnableMenuItem(
    _In_ HMENU hMenu,
    _In_ UINT uIDEnableItem,
    _In_ UINT uEnable);
WINUSERAPI
HMENU
WINAPI
GetSubMenu(
    _In_ HMENU hMenu,
    _In_ int nPos);
WINUSERAPI
UINT
WINAPI
GetMenuItemID(
    _In_ HMENU hMenu,
    _In_ int nPos);
WINUSERAPI
int
WINAPI
GetMenuItemCount(
    _In_opt_ HMENU hMenu);
WINUSERAPI
BOOL
WINAPI
InsertMenuA(
    _In_ HMENU hMenu,
    _In_ UINT uPosition,
    _In_ UINT uFlags,
    _In_ UINT_PTR uIDNewItem,
    _In_opt_ LPCSTR lpNewItem);
WINUSERAPI
BOOL
WINAPI
InsertMenuW(
    _In_ HMENU hMenu,
    _In_ UINT uPosition,
    _In_ UINT uFlags,
    _In_ UINT_PTR uIDNewItem,
    _In_opt_ LPCWSTR lpNewItem);
WINUSERAPI
BOOL
WINAPI
AppendMenuA(
    _In_ HMENU hMenu,
    _In_ UINT uFlags,
    _In_ UINT_PTR uIDNewItem,
    _In_opt_ LPCSTR lpNewItem);
WINUSERAPI
BOOL
WINAPI
AppendMenuW(
    _In_ HMENU hMenu,
    _In_ UINT uFlags,
    _In_ UINT_PTR uIDNewItem,
    _In_opt_ LPCWSTR lpNewItem);
WINUSERAPI
BOOL
WINAPI
ModifyMenuA(
    _In_ HMENU hMnu,
    _In_ UINT uPosition,
    _In_ UINT uFlags,
    _In_ UINT_PTR uIDNewItem,
    _In_opt_ LPCSTR lpNewItem);
WINUSERAPI
BOOL
WINAPI
ModifyMenuW(
    _In_ HMENU hMnu,
    _In_ UINT uPosition,
    _In_ UINT uFlags,
    _In_ UINT_PTR uIDNewItem,
    _In_opt_ LPCWSTR lpNewItem);
WINUSERAPI
BOOL
WINAPI RemoveMenu(
    _In_ HMENU hMenu,
    _In_ UINT uPosition,
    _In_ UINT uFlags);
WINUSERAPI
BOOL
WINAPI
DeleteMenu(
    _In_ HMENU hMenu,
    _In_ UINT uPosition,
    _In_ UINT uFlags);
WINUSERAPI
BOOL
WINAPI
SetMenuItemBitmaps(
    _In_ HMENU hMenu,
    _In_ UINT uPosition,
    _In_ UINT uFlags,
    _In_opt_ HBITMAP hBitmapUnchecked,
    _In_opt_ HBITMAP hBitmapChecked);
WINUSERAPI
LONG
WINAPI
GetMenuCheckMarkDimensions(
    VOID);
WINUSERAPI
BOOL
WINAPI
TrackPopupMenu(
    _In_ HMENU hMenu,
    _In_ UINT uFlags,
    _In_ int x,
    _In_ int y,
    _Reserved_ int nReserved,
    _In_ HWND hWnd,
    _Reserved_ CONST RECT *prcRect);
typedef struct tagTPMPARAMS
{
    UINT cbSize;
    RECT rcExclude;
} TPMPARAMS;
typedef TPMPARAMS FAR *LPTPMPARAMS;
WINUSERAPI
BOOL
WINAPI
TrackPopupMenuEx(
    _In_ HMENU hMenu,
    _In_ UINT uFlags,
    _In_ int x,
    _In_ int y,
    _In_ HWND hwnd,
    _In_opt_ LPTPMPARAMS lptpm);
WINUSERAPI
BOOL
WINAPI
CalculatePopupWindowPosition(
    _In_ const POINT *anchorPoint,
    _In_ const SIZE *windowSize,
    _In_ UINT flags,
    _In_opt_ RECT *excludeRect,
    _Out_ RECT *popupWindowPosition);
typedef struct tagMENUINFO
{
    DWORD cbSize;
    DWORD fMask;
    DWORD dwStyle;
    UINT cyMax;
    HBRUSH hbrBack;
    DWORD dwContextHelpID;
    ULONG_PTR dwMenuData;
} MENUINFO, FAR *LPMENUINFO;
typedef MENUINFO CONST FAR *LPCMENUINFO;
WINUSERAPI
BOOL
WINAPI
GetMenuInfo(
    _In_ HMENU,
    _Inout_ LPMENUINFO);
WINUSERAPI
BOOL
WINAPI
SetMenuInfo(
    _In_ HMENU,
    _In_ LPCMENUINFO);
WINUSERAPI
BOOL
WINAPI
EndMenu(
        VOID);
typedef struct tagMENUGETOBJECTINFO
{
    DWORD dwFlags;
    UINT uPos;
    HMENU hmenu;
    PVOID riid;
    PVOID pvObj;
} MENUGETOBJECTINFO, * PMENUGETOBJECTINFO;
typedef struct tagMENUITEMINFOA
{
    UINT cbSize;
    UINT fMask;
    UINT fType;
    UINT fState;
    UINT wID;
    HMENU hSubMenu;
    HBITMAP hbmpChecked;
    HBITMAP hbmpUnchecked;
    ULONG_PTR dwItemData;
    LPSTR dwTypeData;
    UINT cch;
    HBITMAP hbmpItem;
} MENUITEMINFOA, FAR *LPMENUITEMINFOA;
typedef struct tagMENUITEMINFOW
{
    UINT cbSize;
    UINT fMask;
    UINT fType;
    UINT fState;
    UINT wID;
    HMENU hSubMenu;
    HBITMAP hbmpChecked;
    HBITMAP hbmpUnchecked;
    ULONG_PTR dwItemData;
    LPWSTR dwTypeData;
    UINT cch;
    HBITMAP hbmpItem;
} MENUITEMINFOW, FAR *LPMENUITEMINFOW;
typedef MENUITEMINFOW MENUITEMINFO;
typedef LPMENUITEMINFOW LPMENUITEMINFO;
typedef MENUITEMINFOA CONST FAR *LPCMENUITEMINFOA;
typedef MENUITEMINFOW CONST FAR *LPCMENUITEMINFOW;
typedef LPCMENUITEMINFOW LPCMENUITEMINFO;
WINUSERAPI
BOOL
WINAPI
InsertMenuItemA(
    _In_ HMENU hmenu,
    _In_ UINT item,
    _In_ BOOL fByPosition,
    _In_ LPCMENUITEMINFOA lpmi);
WINUSERAPI
BOOL
WINAPI
InsertMenuItemW(
    _In_ HMENU hmenu,
    _In_ UINT item,
    _In_ BOOL fByPosition,
    _In_ LPCMENUITEMINFOW lpmi);
WINUSERAPI
BOOL
WINAPI
GetMenuItemInfoA(
    _In_ HMENU hmenu,
    _In_ UINT item,
    _In_ BOOL fByPosition,
    _Inout_ LPMENUITEMINFOA lpmii);
WINUSERAPI
BOOL
WINAPI
GetMenuItemInfoW(
    _In_ HMENU hmenu,
    _In_ UINT item,
    _In_ BOOL fByPosition,
    _Inout_ LPMENUITEMINFOW lpmii);
WINUSERAPI
BOOL
WINAPI
SetMenuItemInfoA(
    _In_ HMENU hmenu,
    _In_ UINT item,
    _In_ BOOL fByPositon,
    _In_ LPCMENUITEMINFOA lpmii);
WINUSERAPI
BOOL
WINAPI
SetMenuItemInfoW(
    _In_ HMENU hmenu,
    _In_ UINT item,
    _In_ BOOL fByPositon,
    _In_ LPCMENUITEMINFOW lpmii);
WINUSERAPI
UINT
WINAPI
GetMenuDefaultItem(
    _In_ HMENU hMenu,
    _In_ UINT fByPos,
    _In_ UINT gmdiFlags);
WINUSERAPI
BOOL
WINAPI
SetMenuDefaultItem(
    _In_ HMENU hMenu,
    _In_ UINT uItem,
    _In_ UINT fByPos);
WINUSERAPI
BOOL
WINAPI
GetMenuItemRect(
    _In_opt_ HWND hWnd,
    _In_ HMENU hMenu,
    _In_ UINT uItem,
    _Out_ LPRECT lprcItem);
WINUSERAPI
int
WINAPI
MenuItemFromPoint(
    _In_opt_ HWND hWnd,
    _In_ HMENU hMenu,
    _In_ POINT ptScreen);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagDROPSTRUCT
{
    HWND hwndSource;
    HWND hwndSink;
    DWORD wFmt;
    ULONG_PTR dwData;
    POINT ptDrop;
    DWORD dwControlData;
} DROPSTRUCT, *PDROPSTRUCT, *LPDROPSTRUCT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
DWORD
WINAPI
DragObject(
    _In_ HWND hwndParent,
    _In_ HWND hwndFrom,
    _In_ UINT fmt,
    _In_ ULONG_PTR data,
    _In_opt_ HCURSOR hcur);
WINUSERAPI
BOOL
WINAPI
DragDetect(
    _In_ HWND hwnd,
    _In_ POINT pt);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
DrawIcon(
    _In_ HDC hDC,
    _In_ int X,
    _In_ int Y,
    _In_ HICON hIcon);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagDRAWTEXTPARAMS
{
    UINT cbSize;
    int iTabLength;
    int iLeftMargin;
    int iRightMargin;
    UINT uiLengthDrawn;
} DRAWTEXTPARAMS, FAR *LPDRAWTEXTPARAMS;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
    _When_(((size) == -1) || (_String_length_(_Curr_) < (size)), _In_z_) \
    _When_(((size) != -1) && (_String_length_(_Curr_) >= (size)), _In_reads_(size))
    _When_(((size) == -1) || (_String_length_(_Curr_) < (size)), _Pre_z_ _Pre_valid_ _Out_writes_z_(_String_length_(_Curr_) + (grows))) \
    _When_(((size) != -1) && (_String_length_(_Curr_) >= (size)), _Pre_count_(size) _Pre_valid_ _Out_writes_z_((size) + (grows)))
WINUSERAPI
_Success_(return)
int
WINAPI
DrawTextA(
    _In_ HDC hdc,
    _When_((format & DT_MODIFYSTRING), _At_((LPSTR)lpchText, _Inout_grows_updates_bypassable_or_z_(cchText, 4)))
    _When_((!(format & DT_MODIFYSTRING)), _In_bypassable_reads_or_z_(cchText))
    LPCSTR lpchText,
    _In_ int cchText,
    _Inout_ LPRECT lprc,
    _In_ UINT format);
WINUSERAPI
_Success_(return)
int
WINAPI
DrawTextW(
    _In_ HDC hdc,
    _When_((format & DT_MODIFYSTRING), _At_((LPWSTR)lpchText, _Inout_grows_updates_bypassable_or_z_(cchText, 4)))
    _When_((!(format & DT_MODIFYSTRING)), _In_bypassable_reads_or_z_(cchText))
    LPCWSTR lpchText,
    _In_ int cchText,
    _Inout_ LPRECT lprc,
    _In_ UINT format);
WINUSERAPI
_Success_(return)
int
WINAPI
DrawTextExA(
    _In_ HDC hdc,
    _When_((cchText) < -1, _Unreferenced_parameter_)
    _When_((format & DT_MODIFYSTRING), _Inout_grows_updates_bypassable_or_z_(cchText, 4))
    _When_((!(format & DT_MODIFYSTRING)), _At_((LPCSTR)lpchText, _In_bypassable_reads_or_z_(cchText)))
    LPSTR lpchText,
    _In_ int cchText,
    _Inout_ LPRECT lprc,
    _In_ UINT format,
    _In_opt_ LPDRAWTEXTPARAMS lpdtp);
WINUSERAPI
_Success_(return)
int
WINAPI
DrawTextExW(
    _In_ HDC hdc,
    _When_((cchText) < -1, _Unreferenced_parameter_)
    _When_((format & DT_MODIFYSTRING), _Inout_grows_updates_bypassable_or_z_(cchText, 4))
    _When_((!(format & DT_MODIFYSTRING)), _At_((LPCWSTR)lpchText, _In_bypassable_reads_or_z_(cchText)))
    LPWSTR lpchText,
    _In_ int cchText,
    _Inout_ LPRECT lprc,
    _In_ UINT format,
    _In_opt_ LPDRAWTEXTPARAMS lpdtp);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
GrayStringA(
    _In_ HDC hDC,
    _In_opt_ HBRUSH hBrush,
    _In_opt_ GRAYSTRINGPROC lpOutputFunc,
    _In_ LPARAM lpData,
    _In_ int nCount,
    _In_ int X,
    _In_ int Y,
    _In_ int nWidth,
    _In_ int nHeight);
WINUSERAPI
BOOL
WINAPI
GrayStringW(
    _In_ HDC hDC,
    _In_opt_ HBRUSH hBrush,
    _In_opt_ GRAYSTRINGPROC lpOutputFunc,
    _In_ LPARAM lpData,
    _In_ int nCount,
    _In_ int X,
    _In_ int Y,
    _In_ int nWidth,
    _In_ int nHeight);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
DrawStateA(
    _In_ HDC hdc,
    _In_opt_ HBRUSH hbrFore,
    _In_opt_ DRAWSTATEPROC qfnCallBack,
    _In_ LPARAM lData,
    _In_ WPARAM wData,
    _In_ int x,
    _In_ int y,
    _In_ int cx,
    _In_ int cy,
    _In_ UINT uFlags);
WINUSERAPI
BOOL
WINAPI
DrawStateW(
    _In_ HDC hdc,
    _In_opt_ HBRUSH hbrFore,
    _In_opt_ DRAWSTATEPROC qfnCallBack,
    _In_ LPARAM lData,
    _In_ WPARAM wData,
    _In_ int x,
    _In_ int y,
    _In_ int cx,
    _In_ int cy,
    _In_ UINT uFlags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
LONG
WINAPI
TabbedTextOutA(
    _In_ HDC hdc,
    _In_ int x,
    _In_ int y,
    _In_reads_(chCount) LPCSTR lpString,
    _In_ int chCount,
    _In_ int nTabPositions,
    _In_reads_opt_(nTabPositions) CONST INT *lpnTabStopPositions,
    _In_ int nTabOrigin);
WINUSERAPI
LONG
WINAPI
TabbedTextOutW(
    _In_ HDC hdc,
    _In_ int x,
    _In_ int y,
    _In_reads_(chCount) LPCWSTR lpString,
    _In_ int chCount,
    _In_ int nTabPositions,
    _In_reads_opt_(nTabPositions) CONST INT *lpnTabStopPositions,
    _In_ int nTabOrigin);
WINUSERAPI
DWORD
WINAPI
GetTabbedTextExtentA(
    _In_ HDC hdc,
    _In_reads_(chCount) LPCSTR lpString,
    _In_ int chCount,
    _In_ int nTabPositions,
    _In_reads_opt_(nTabPositions) CONST INT *lpnTabStopPositions);
WINUSERAPI
DWORD
WINAPI
GetTabbedTextExtentW(
    _In_ HDC hdc,
    _In_reads_(chCount) LPCWSTR lpString,
    _In_ int chCount,
    _In_ int nTabPositions,
    _In_reads_opt_(nTabPositions) CONST INT *lpnTabStopPositions);
WINUSERAPI
BOOL
WINAPI
UpdateWindow(
    _In_ HWND hWnd);
WINUSERAPI
HWND
WINAPI
SetActiveWindow(
    _In_ HWND hWnd);
WINUSERAPI
HWND
WINAPI
GetForegroundWindow(
    VOID);
WINUSERAPI
BOOL
WINAPI
PaintDesktop(
    _In_ HDC hdc);
WINUSERAPI
VOID
WINAPI
SwitchToThisWindow(
    _In_ HWND hwnd,
    _In_ BOOL fUnknown);
WINUSERAPI
BOOL
WINAPI
SetForegroundWindow(
    _In_ HWND hWnd);
WINUSERAPI
BOOL
WINAPI
AllowSetForegroundWindow(
    _In_ DWORD dwProcessId);
WINUSERAPI
BOOL
WINAPI
LockSetForegroundWindow(
    _In_ UINT uLockCode);
WINUSERAPI
HWND
WINAPI
WindowFromDC(
    _In_ HDC hDC);
WINUSERAPI
HDC
WINAPI
GetDC(
    _In_opt_ HWND hWnd);
WINUSERAPI
HDC
WINAPI
GetDCEx(
    _In_opt_ HWND hWnd,
    _In_opt_ HRGN hrgnClip,
    _In_ DWORD flags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
HDC
WINAPI
GetWindowDC(
    _In_opt_ HWND hWnd);
WINUSERAPI
int
WINAPI
ReleaseDC(
    _In_opt_ HWND hWnd,
    _In_ HDC hDC);
WINUSERAPI
HDC
WINAPI
BeginPaint(
    _In_ HWND hWnd,
    _Out_ LPPAINTSTRUCT lpPaint);
WINUSERAPI
BOOL
WINAPI
EndPaint(
    _In_ HWND hWnd,
    _In_ CONST PAINTSTRUCT *lpPaint);
WINUSERAPI
BOOL
WINAPI
GetUpdateRect(
    _In_ HWND hWnd,
    _Out_opt_ LPRECT lpRect,
    _In_ BOOL bErase);
WINUSERAPI
int
WINAPI
GetUpdateRgn(
    _In_ HWND hWnd,
    _In_ HRGN hRgn,
    _In_ BOOL bErase);
WINUSERAPI
int
WINAPI
SetWindowRgn(
    _In_ HWND hWnd,
    _In_opt_ HRGN hRgn,
    _In_ BOOL bRedraw);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
int
WINAPI
GetWindowRgn(
    _In_ HWND hWnd,
    _In_ HRGN hRgn);
WINUSERAPI
int
WINAPI
GetWindowRgnBox(
    _In_ HWND hWnd,
    _Out_ LPRECT lprc);
WINUSERAPI
int
WINAPI
ExcludeUpdateRgn(
    _In_ HDC hDC,
    _In_ HWND hWnd);
WINUSERAPI
BOOL
WINAPI
InvalidateRect(
    _In_opt_ HWND hWnd,
    _In_opt_ CONST RECT *lpRect,
    _In_ BOOL bErase);
WINUSERAPI
BOOL
WINAPI
ValidateRect(
    _In_opt_ HWND hWnd,
    _In_opt_ CONST RECT *lpRect);
WINUSERAPI
BOOL
WINAPI
InvalidateRgn(
    _In_ HWND hWnd,
    _In_opt_ HRGN hRgn,
    _In_ BOOL bErase);
WINUSERAPI
BOOL
WINAPI
ValidateRgn(
    _In_ HWND hWnd,
    _In_opt_ HRGN hRgn);
WINUSERAPI
BOOL
WINAPI
RedrawWindow(
    _In_opt_ HWND hWnd,
    _In_opt_ CONST RECT *lprcUpdate,
    _In_opt_ HRGN hrgnUpdate,
    _In_ UINT flags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
LockWindowUpdate(
    _In_opt_ HWND hWndLock);
WINUSERAPI
BOOL
WINAPI
ScrollWindow(
    _In_ HWND hWnd,
    _In_ int XAmount,
    _In_ int YAmount,
    _In_opt_ CONST RECT *lpRect,
    _In_opt_ CONST RECT *lpClipRect);
WINUSERAPI
BOOL
WINAPI
ScrollDC(
    _In_ HDC hDC,
    _In_ int dx,
    _In_ int dy,
    _In_opt_ CONST RECT *lprcScroll,
    _In_opt_ CONST RECT *lprcClip,
    _In_opt_ HRGN hrgnUpdate,
    _Out_opt_ LPRECT lprcUpdate);
WINUSERAPI
int
WINAPI
ScrollWindowEx(
    _In_ HWND hWnd,
    _In_ int dx,
    _In_ int dy,
    _In_opt_ CONST RECT *prcScroll,
    _In_opt_ CONST RECT *prcClip,
    _In_opt_ HRGN hrgnUpdate,
    _Out_opt_ LPRECT prcUpdate,
    _In_ UINT flags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
int
WINAPI
SetScrollPos(
    _In_ HWND hWnd,
    _In_ int nBar,
    _In_ int nPos,
    _In_ BOOL bRedraw);
WINUSERAPI
int
WINAPI
GetScrollPos(
    _In_ HWND hWnd,
    _In_ int nBar);
WINUSERAPI
BOOL
WINAPI
SetScrollRange(
    _In_ HWND hWnd,
    _In_ int nBar,
    _In_ int nMinPos,
    _In_ int nMaxPos,
    _In_ BOOL bRedraw);
WINUSERAPI
BOOL
WINAPI
GetScrollRange(
    _In_ HWND hWnd,
    _In_ int nBar,
    _Out_ LPINT lpMinPos,
    _Out_ LPINT lpMaxPos);
WINUSERAPI
BOOL
WINAPI
ShowScrollBar(
    _In_ HWND hWnd,
    _In_ int wBar,
    _In_ BOOL bShow);
WINUSERAPI
BOOL
WINAPI
EnableScrollBar(
    _In_ HWND hWnd,
    _In_ UINT wSBflags,
    _In_ UINT wArrows);
WINUSERAPI
BOOL
WINAPI
SetPropA(
    _In_ HWND hWnd,
    _In_ LPCSTR lpString,
    _In_opt_ HANDLE hData);
WINUSERAPI
BOOL
WINAPI
SetPropW(
    _In_ HWND hWnd,
    _In_ LPCWSTR lpString,
    _In_opt_ HANDLE hData);
WINUSERAPI
HANDLE
WINAPI
GetPropA(
    _In_ HWND hWnd,
    _In_ LPCSTR lpString);
WINUSERAPI
HANDLE
WINAPI
GetPropW(
    _In_ HWND hWnd,
    _In_ LPCWSTR lpString);
WINUSERAPI
HANDLE
WINAPI
RemovePropA(
    _In_ HWND hWnd,
    _In_ LPCSTR lpString);
WINUSERAPI
HANDLE
WINAPI
RemovePropW(
    _In_ HWND hWnd,
    _In_ LPCWSTR lpString);
WINUSERAPI
int
WINAPI
EnumPropsExA(
    _In_ HWND hWnd,
    _In_ PROPENUMPROCEXA lpEnumFunc,
    _In_ LPARAM lParam);
WINUSERAPI
int
WINAPI
EnumPropsExW(
    _In_ HWND hWnd,
    _In_ PROPENUMPROCEXW lpEnumFunc,
    _In_ LPARAM lParam);
WINUSERAPI
int
WINAPI
EnumPropsA(
    _In_ HWND hWnd,
    _In_ PROPENUMPROCA lpEnumFunc);
WINUSERAPI
int
WINAPI
EnumPropsW(
    _In_ HWND hWnd,
    _In_ PROPENUMPROCW lpEnumFunc);
WINUSERAPI
BOOL
WINAPI
SetWindowTextA(
    _In_ HWND hWnd,
    _In_opt_ LPCSTR lpString);
WINUSERAPI
BOOL
WINAPI
SetWindowTextW(
    _In_ HWND hWnd,
    _In_opt_ LPCWSTR lpString);
_Ret_range_(0, nMaxCount)
WINUSERAPI
int
WINAPI
GetWindowTextA(
    _In_ HWND hWnd,
    _Out_writes_(nMaxCount) LPSTR lpString,
    _In_ int nMaxCount);
_Ret_range_(0, nMaxCount)
WINUSERAPI
int
WINAPI
GetWindowTextW(
    _In_ HWND hWnd,
    _Out_writes_(nMaxCount) LPWSTR lpString,
    _In_ int nMaxCount);
WINUSERAPI
int
WINAPI
GetWindowTextLengthA(
    _In_ HWND hWnd);
WINUSERAPI
int
WINAPI
GetWindowTextLengthW(
    _In_ HWND hWnd);
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
BOOL
WINAPI
GetClientRect(
    _In_ HWND hWnd,
    _Out_ LPRECT lpRect);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
GetWindowRect(
    _In_ HWND hWnd,
    _Out_ LPRECT lpRect);
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
BOOL
WINAPI
AdjustWindowRect(
    _Inout_ LPRECT lpRect,
    _In_ DWORD dwStyle,
    _In_ BOOL bMenu);
WINUSERAPI
BOOL
WINAPI
AdjustWindowRectEx(
    _Inout_ LPRECT lpRect,
    _In_ DWORD dwStyle,
    _In_ BOOL bMenu,
    _In_ DWORD dwExStyle);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
AdjustWindowRectExForDpi(
    _Inout_ LPRECT lpRect,
    _In_ DWORD dwStyle,
    _In_ BOOL bMenu,
    _In_ DWORD dwExStyle,
    _In_ UINT dpi);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagHELPINFO
{
    UINT cbSize;
    int iContextType;
    int iCtrlId;
    HANDLE hItemHandle;
    DWORD_PTR dwContextId;
    POINT MousePos;
} HELPINFO, FAR *LPHELPINFO;
WINUSERAPI
BOOL
WINAPI
SetWindowContextHelpId(
    _In_ HWND,
    _In_ DWORD);
WINUSERAPI
DWORD
WINAPI
GetWindowContextHelpId(
    _In_ HWND);
WINUSERAPI
BOOL
WINAPI
SetMenuContextHelpId(
    _In_ HMENU,
    _In_ DWORD);
WINUSERAPI
DWORD
WINAPI
GetMenuContextHelpId(
    _In_ HMENU);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
int
WINAPI
MessageBoxA(
    _In_opt_ HWND hWnd,
    _In_opt_ LPCSTR lpText,
    _In_opt_ LPCSTR lpCaption,
    _In_ UINT uType);
WINUSERAPI
int
WINAPI
MessageBoxW(
    _In_opt_ HWND hWnd,
    _In_opt_ LPCWSTR lpText,
    _In_opt_ LPCWSTR lpCaption,
    _In_ UINT uType);
WINUSERAPI
int
WINAPI
MessageBoxExA(
    _In_opt_ HWND hWnd,
    _In_opt_ LPCSTR lpText,
    _In_opt_ LPCSTR lpCaption,
    _In_ UINT uType,
    _In_ WORD wLanguageId);
WINUSERAPI
int
WINAPI
MessageBoxExW(
    _In_opt_ HWND hWnd,
    _In_opt_ LPCWSTR lpText,
    _In_opt_ LPCWSTR lpCaption,
    _In_ UINT uType,
    _In_ WORD wLanguageId);
typedef VOID (CALLBACK *MSGBOXCALLBACK)(LPHELPINFO lpHelpInfo);
typedef struct tagMSGBOXPARAMSA
{
    UINT cbSize;
    HWND hwndOwner;
    HINSTANCE hInstance;
    LPCSTR lpszText;
    LPCSTR lpszCaption;
    DWORD dwStyle;
    LPCSTR lpszIcon;
    DWORD_PTR dwContextHelpId;
    MSGBOXCALLBACK lpfnMsgBoxCallback;
    DWORD dwLanguageId;
} MSGBOXPARAMSA, *PMSGBOXPARAMSA, *LPMSGBOXPARAMSA;
typedef struct tagMSGBOXPARAMSW
{
    UINT cbSize;
    HWND hwndOwner;
    HINSTANCE hInstance;
    LPCWSTR lpszText;
    LPCWSTR lpszCaption;
    DWORD dwStyle;
    LPCWSTR lpszIcon;
    DWORD_PTR dwContextHelpId;
    MSGBOXCALLBACK lpfnMsgBoxCallback;
    DWORD dwLanguageId;
} MSGBOXPARAMSW, *PMSGBOXPARAMSW, *LPMSGBOXPARAMSW;
typedef MSGBOXPARAMSW MSGBOXPARAMS;
typedef PMSGBOXPARAMSW PMSGBOXPARAMS;
typedef LPMSGBOXPARAMSW LPMSGBOXPARAMS;
WINUSERAPI
int
WINAPI
MessageBoxIndirectA(
    _In_ CONST MSGBOXPARAMSA * lpmbp);
WINUSERAPI
int
WINAPI
MessageBoxIndirectW(
    _In_ CONST MSGBOXPARAMSW * lpmbp);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
MessageBeep(
    _In_ UINT uType);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
int
WINAPI
ShowCursor(
    _In_ BOOL bShow);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
SetCursorPos(
    _In_ int X,
    _In_ int Y);
WINUSERAPI
BOOL
WINAPI
SetPhysicalCursorPos(
    _In_ int X,
    _In_ int Y);
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
HCURSOR
WINAPI
SetCursor(
    _In_opt_ HCURSOR hCursor);
WINUSERAPI
BOOL
WINAPI
GetCursorPos(
    _Out_ LPPOINT lpPoint);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
GetPhysicalCursorPos(
    _Out_ LPPOINT lpPoint);
WINUSERAPI
BOOL
WINAPI
GetClipCursor(
    _Out_ LPRECT lpRect);
WINUSERAPI
HCURSOR
WINAPI
GetCursor(
    VOID);
WINUSERAPI
BOOL
WINAPI
CreateCaret(
    _In_ HWND hWnd,
    _In_opt_ HBITMAP hBitmap,
    _In_ int nWidth,
    _In_ int nHeight);
WINUSERAPI
UINT
WINAPI
GetCaretBlinkTime(
    VOID);
WINUSERAPI
BOOL
WINAPI
SetCaretBlinkTime(
    _In_ UINT uMSeconds);
WINUSERAPI
BOOL
WINAPI
DestroyCaret(
    VOID);
WINUSERAPI
BOOL
WINAPI
HideCaret(
    _In_opt_ HWND hWnd);
WINUSERAPI
BOOL
WINAPI
ShowCaret(
    _In_opt_ HWND hWnd);
WINUSERAPI
BOOL
WINAPI
SetCaretPos(
    _In_ int X,
    _In_ int Y);
WINUSERAPI
BOOL
WINAPI
GetCaretPos(
    _Out_ LPPOINT lpPoint);
WINUSERAPI
BOOL
WINAPI
ClientToScreen(
    _In_ HWND hWnd,
    _Inout_ LPPOINT lpPoint);
WINUSERAPI
BOOL
WINAPI
ScreenToClient(
    _In_ HWND hWnd,
    _Inout_ LPPOINT lpPoint);
WINUSERAPI
BOOL
WINAPI
LogicalToPhysicalPoint(
    _In_ HWND hWnd,
    _Inout_ LPPOINT lpPoint);
WINUSERAPI
BOOL
WINAPI
PhysicalToLogicalPoint(
    _In_ HWND hWnd,
    _Inout_ LPPOINT lpPoint);
WINUSERAPI
BOOL
WINAPI
LogicalToPhysicalPointForPerMonitorDPI(
    _In_opt_ HWND hWnd,
    _Inout_ LPPOINT lpPoint);
WINUSERAPI
BOOL
WINAPI
PhysicalToLogicalPointForPerMonitorDPI(
    _In_opt_ HWND hWnd,
    _Inout_ LPPOINT lpPoint);
WINUSERAPI
int
WINAPI
MapWindowPoints(
    _In_opt_ HWND hWndFrom,
    _In_opt_ HWND hWndTo,
    _Inout_updates_(cPoints) LPPOINT lpPoints,
    _In_ UINT cPoints);
WINUSERAPI
HWND
WINAPI
WindowFromPoint(
    _In_ POINT Point);
WINUSERAPI
HWND
WINAPI
WindowFromPhysicalPoint(
    _In_ POINT Point);
WINUSERAPI
HWND
WINAPI
ChildWindowFromPoint(
    _In_ HWND hWndParent,
    _In_ POINT Point);
#endif
#pragma endregion
#pragma region Desktop or PC Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PC_APP)
WINUSERAPI
BOOL
WINAPI
ClipCursor(
    _In_opt_ CONST RECT *lpRect);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
HWND
WINAPI
ChildWindowFromPointEx(
    _In_ HWND hwnd,
    _In_ POINT pt,
    _In_ UINT flags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
DWORD
WINAPI
GetSysColor(
    _In_ int nIndex);
WINUSERAPI
HBRUSH
WINAPI
GetSysColorBrush(
    _In_ int nIndex);
WINUSERAPI
BOOL
WINAPI
SetSysColors(
    _In_ int cElements,
    _In_reads_(cElements) CONST INT * lpaElements,
    _In_reads_(cElements) CONST COLORREF * lpaRgbValues);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
DrawFocusRect(
    _In_ HDC hDC,
    _In_ CONST RECT * lprc);
WINUSERAPI
int
WINAPI
FillRect(
    _In_ HDC hDC,
    _In_ CONST RECT *lprc,
    _In_ HBRUSH hbr);
WINUSERAPI
int
WINAPI
FrameRect(
    _In_ HDC hDC,
    _In_ CONST RECT *lprc,
    _In_ HBRUSH hbr);
WINUSERAPI
BOOL
WINAPI
InvertRect(
    _In_ HDC hDC,
    _In_ CONST RECT *lprc);
WINUSERAPI
BOOL
WINAPI
SetRect(
    _Out_ LPRECT lprc,
    _In_ int xLeft,
    _In_ int yTop,
    _In_ int xRight,
    _In_ int yBottom);
WINUSERAPI
BOOL
WINAPI
SetRectEmpty(
    _Out_ LPRECT lprc);
WINUSERAPI
BOOL
WINAPI
CopyRect(
    _Out_ LPRECT lprcDst,
    _In_ CONST RECT *lprcSrc);
WINUSERAPI
BOOL
WINAPI
InflateRect(
    _Inout_ LPRECT lprc,
    _In_ int dx,
    _In_ int dy);
WINUSERAPI
BOOL
WINAPI
IntersectRect(
    _Out_ LPRECT lprcDst,
    _In_ CONST RECT *lprcSrc1,
    _In_ CONST RECT *lprcSrc2);
WINUSERAPI
BOOL
WINAPI
UnionRect(
    _Out_ LPRECT lprcDst,
    _In_ CONST RECT *lprcSrc1,
    _In_ CONST RECT *lprcSrc2);
WINUSERAPI
BOOL
WINAPI
SubtractRect(
    _Out_ LPRECT lprcDst,
    _In_ CONST RECT *lprcSrc1,
    _In_ CONST RECT *lprcSrc2);
WINUSERAPI
BOOL
WINAPI
OffsetRect(
    _Inout_ LPRECT lprc,
    _In_ int dx,
    _In_ int dy);
WINUSERAPI
BOOL
WINAPI
IsRectEmpty(
    _In_ CONST RECT *lprc);
WINUSERAPI
BOOL
WINAPI
EqualRect(
    _In_ CONST RECT *lprc1,
    _In_ CONST RECT *lprc2);
WINUSERAPI
BOOL
WINAPI
PtInRect(
    _In_ CONST RECT *lprc,
    _In_ POINT pt);
WINUSERAPI
WORD
WINAPI
GetWindowWord(
    _In_ HWND hWnd,
    _In_ int nIndex);
WINUSERAPI
WORD
WINAPI
SetWindowWord(
    _In_ HWND hWnd,
    _In_ int nIndex,
    _In_ WORD wNewWord);
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
LONG
WINAPI
GetWindowLongA(
    _In_ HWND hWnd,
    _In_ int nIndex);
WINUSERAPI
LONG
WINAPI
GetWindowLongW(
    _In_ HWND hWnd,
    _In_ int nIndex);
WINUSERAPI
LONG
WINAPI
SetWindowLongA(
    _In_ HWND hWnd,
    _In_ int nIndex,
    _In_ LONG dwNewLong);
WINUSERAPI
LONG
WINAPI
SetWindowLongW(
    _In_ HWND hWnd,
    _In_ int nIndex,
    _In_ LONG dwNewLong);
WINUSERAPI
LONG_PTR
WINAPI
GetWindowLongPtrA(
    _In_ HWND hWnd,
    _In_ int nIndex);
WINUSERAPI
LONG_PTR
WINAPI
GetWindowLongPtrW(
    _In_ HWND hWnd,
    _In_ int nIndex);
WINUSERAPI
LONG_PTR
WINAPI
SetWindowLongPtrA(
    _In_ HWND hWnd,
    _In_ int nIndex,
    _In_ LONG_PTR dwNewLong);
WINUSERAPI
LONG_PTR
WINAPI
SetWindowLongPtrW(
    _In_ HWND hWnd,
    _In_ int nIndex,
    _In_ LONG_PTR dwNewLong);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
WORD
WINAPI
GetClassWord(
    _In_ HWND hWnd,
    _In_ int nIndex);
WINUSERAPI
WORD
WINAPI
SetClassWord(
    _In_ HWND hWnd,
    _In_ int nIndex,
    _In_ WORD wNewWord);
WINUSERAPI
DWORD
WINAPI
GetClassLongA(
    _In_ HWND hWnd,
    _In_ int nIndex);
WINUSERAPI
DWORD
WINAPI
GetClassLongW(
    _In_ HWND hWnd,
    _In_ int nIndex);
WINUSERAPI
DWORD
WINAPI
SetClassLongA(
    _In_ HWND hWnd,
    _In_ int nIndex,
    _In_ LONG dwNewLong);
WINUSERAPI
DWORD
WINAPI
SetClassLongW(
    _In_ HWND hWnd,
    _In_ int nIndex,
    _In_ LONG dwNewLong);
WINUSERAPI
ULONG_PTR
WINAPI
GetClassLongPtrA(
    _In_ HWND hWnd,
    _In_ int nIndex);
WINUSERAPI
ULONG_PTR
WINAPI
GetClassLongPtrW(
    _In_ HWND hWnd,
    _In_ int nIndex);
WINUSERAPI
ULONG_PTR
WINAPI
SetClassLongPtrA(
    _In_ HWND hWnd,
    _In_ int nIndex,
    _In_ LONG_PTR dwNewLong);
WINUSERAPI
ULONG_PTR
WINAPI
SetClassLongPtrW(
    _In_ HWND hWnd,
    _In_ int nIndex,
    _In_ LONG_PTR dwNewLong);
WINUSERAPI
BOOL
WINAPI
GetProcessDefaultLayout(
    _Out_ DWORD *pdwDefaultLayout);
WINUSERAPI
BOOL
WINAPI
SetProcessDefaultLayout(
    _In_ DWORD dwDefaultLayout);
WINUSERAPI
HWND
WINAPI
GetDesktopWindow(
    VOID);
WINUSERAPI
HWND
WINAPI
GetParent(
    _In_ HWND hWnd);
WINUSERAPI
HWND
WINAPI
SetParent(
    _In_ HWND hWndChild,
    _In_opt_ HWND hWndNewParent);
WINUSERAPI
BOOL
WINAPI
EnumChildWindows(
    _In_opt_ HWND hWndParent,
    _In_ WNDENUMPROC lpEnumFunc,
    _In_ LPARAM lParam);
WINUSERAPI
HWND
WINAPI
FindWindowA(
    _In_opt_ LPCSTR lpClassName,
    _In_opt_ LPCSTR lpWindowName);
WINUSERAPI
HWND
WINAPI
FindWindowW(
    _In_opt_ LPCWSTR lpClassName,
    _In_opt_ LPCWSTR lpWindowName);
WINUSERAPI
HWND
WINAPI
FindWindowExA(
    _In_opt_ HWND hWndParent,
    _In_opt_ HWND hWndChildAfter,
    _In_opt_ LPCSTR lpszClass,
    _In_opt_ LPCSTR lpszWindow);
WINUSERAPI
HWND
WINAPI
FindWindowExW(
    _In_opt_ HWND hWndParent,
    _In_opt_ HWND hWndChildAfter,
    _In_opt_ LPCWSTR lpszClass,
    _In_opt_ LPCWSTR lpszWindow);
WINUSERAPI
HWND
WINAPI
GetShellWindow(
    VOID);
WINUSERAPI
BOOL
WINAPI
RegisterShellHookWindow(
    _In_ HWND hwnd);
WINUSERAPI
BOOL
WINAPI
DeregisterShellHookWindow(
    _In_ HWND hwnd);
WINUSERAPI
BOOL
WINAPI
EnumWindows(
    _In_ WNDENUMPROC lpEnumFunc,
    _In_ LPARAM lParam);
WINUSERAPI
BOOL
WINAPI
EnumThreadWindows(
    _In_ DWORD dwThreadId,
    _In_ WNDENUMPROC lpfn,
    _In_ LPARAM lParam);
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
int
WINAPI
GetClassNameA(
    _In_ HWND hWnd,
    _Out_writes_to_(nMaxCount, return) LPSTR lpClassName,
    _In_ int nMaxCount
    );
WINUSERAPI
int
WINAPI
GetClassNameW(
    _In_ HWND hWnd,
    _Out_writes_to_(nMaxCount, return) LPWSTR lpClassName,
    _In_ int nMaxCount
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
HWND
WINAPI
GetTopWindow(
    _In_opt_ HWND hWnd);
WINUSERAPI
DWORD
WINAPI
GetWindowThreadProcessId(
    _In_ HWND hWnd,
    _Out_opt_ LPDWORD lpdwProcessId);
WINUSERAPI
BOOL
WINAPI
IsGUIThread(
    _In_ BOOL bConvert);
        ((HANDLE)(DWORD_PTR)GetWindowThreadProcessId(hWnd, NULL))
WINUSERAPI
HWND
WINAPI
GetLastActivePopup(
    _In_ HWND hWnd);
WINUSERAPI
HWND
WINAPI
GetWindow(
    _In_ HWND hWnd,
    _In_ UINT uCmd);
WINUSERAPI
HHOOK
WINAPI
SetWindowsHookA(
    _In_ int nFilterType,
    _In_ HOOKPROC pfnFilterProc);
WINUSERAPI
HHOOK
WINAPI
SetWindowsHookW(
    _In_ int nFilterType,
    _In_ HOOKPROC pfnFilterProc);
WINUSERAPI
BOOL
WINAPI
UnhookWindowsHook(
    _In_ int nCode,
    _In_ HOOKPROC pfnFilterProc);
WINUSERAPI
HHOOK
WINAPI
SetWindowsHookExA(
    _In_ int idHook,
    _In_ HOOKPROC lpfn,
    _In_opt_ HINSTANCE hmod,
    _In_ DWORD dwThreadId);
WINUSERAPI
HHOOK
WINAPI
SetWindowsHookExW(
    _In_ int idHook,
    _In_ HOOKPROC lpfn,
    _In_opt_ HINSTANCE hmod,
    _In_ DWORD dwThreadId);
WINUSERAPI
BOOL
WINAPI
UnhookWindowsHookEx(
    _In_ HHOOK hhk);
WINUSERAPI
LRESULT
WINAPI
CallNextHookEx(
    _In_opt_ HHOOK hhk,
    _In_ int nCode,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
        CallNextHookEx(*phhk, nCode, wParam, lParam)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
CheckMenuRadioItem(
    _In_ HMENU hmenu,
    _In_ UINT first,
    _In_ UINT last,
    _In_ UINT check,
    _In_ UINT flags);
typedef struct {
    WORD versionNumber;
    WORD offset;
} MENUITEMTEMPLATEHEADER, *PMENUITEMTEMPLATEHEADER;
typedef struct {
    WORD mtOption;
    WORD mtID;
    WCHAR mtString[1];
} MENUITEMTEMPLATE, *PMENUITEMTEMPLATE;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
HBITMAP
WINAPI
LoadBitmapA(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCSTR lpBitmapName);
WINUSERAPI
HBITMAP
WINAPI
LoadBitmapW(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCWSTR lpBitmapName);
#endif
#pragma endregion
#pragma region Desktop or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
HCURSOR
WINAPI
LoadCursorA(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCSTR lpCursorName);
WINUSERAPI
HCURSOR
WINAPI
LoadCursorW(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCWSTR lpCursorName);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
HCURSOR
WINAPI
LoadCursorFromFileA(
    _In_ LPCSTR lpFileName);
WINUSERAPI
HCURSOR
WINAPI
LoadCursorFromFileW(
    _In_ LPCWSTR lpFileName);
#endif
#pragma endregion
#pragma region Desktop or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
WINUSERAPI
HCURSOR
WINAPI
CreateCursor(
    _In_opt_ HINSTANCE hInst,
    _In_ int xHotSpot,
    _In_ int yHotSpot,
    _In_ int nWidth,
    _In_ int nHeight,
    _In_ CONST VOID *pvANDPlane,
    _In_ CONST VOID *pvXORPlane);
WINUSERAPI
BOOL
WINAPI
DestroyCursor(
    _In_ HCURSOR hCursor);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
SetSystemCursor(
    _In_ HCURSOR hcur,
    _In_ DWORD id);
typedef struct _ICONINFO {
    BOOL fIcon;
    DWORD xHotspot;
    DWORD yHotspot;
    HBITMAP hbmMask;
    HBITMAP hbmColor;
} ICONINFO;
typedef ICONINFO *PICONINFO;
WINUSERAPI
HICON
WINAPI
LoadIconA(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCSTR lpIconName);
WINUSERAPI
HICON
WINAPI
LoadIconW(
    _In_opt_ HINSTANCE hInstance,
    _In_ LPCWSTR lpIconName);
WINUSERAPI
UINT
WINAPI
PrivateExtractIconsA(
    _In_reads_(MAX_PATH) LPCSTR szFileName,
    _In_ int nIconIndex,
    _In_ int cxIcon,
    _In_ int cyIcon,
    _Out_writes_opt_(nIcons) HICON *phicon,
    _Out_writes_opt_(nIcons) UINT *piconid,
    _In_ UINT nIcons,
    _In_ UINT flags);
WINUSERAPI
UINT
WINAPI
PrivateExtractIconsW(
    _In_reads_(MAX_PATH) LPCWSTR szFileName,
    _In_ int nIconIndex,
    _In_ int cxIcon,
    _In_ int cyIcon,
    _Out_writes_opt_(nIcons) HICON *phicon,
    _Out_writes_opt_(nIcons) UINT *piconid,
    _In_ UINT nIcons,
    _In_ UINT flags);
WINUSERAPI
HICON
WINAPI
CreateIcon(
    _In_opt_ HINSTANCE hInstance,
    _In_ int nWidth,
    _In_ int nHeight,
    _In_ BYTE cPlanes,
    _In_ BYTE cBitsPixel,
    _In_ CONST BYTE *lpbANDbits,
    _In_ CONST BYTE *lpbXORbits);
WINUSERAPI
BOOL
WINAPI
DestroyIcon(
    _In_ HICON hIcon);
WINUSERAPI
int
WINAPI
LookupIconIdFromDirectory(
    _In_reads_bytes_(sizeof(WORD) * 3) PBYTE presbits,
    _In_ BOOL fIcon);
WINUSERAPI
int
WINAPI
LookupIconIdFromDirectoryEx(
    _In_reads_bytes_(sizeof(WORD) * 3) PBYTE presbits,
    _In_ BOOL fIcon,
    _In_ int cxDesired,
    _In_ int cyDesired,
    _In_ UINT Flags);
WINUSERAPI
HICON
WINAPI
CreateIconFromResource(
    _In_reads_bytes_(dwResSize) PBYTE presbits,
    _In_ DWORD dwResSize,
    _In_ BOOL fIcon,
    _In_ DWORD dwVer);
WINUSERAPI
HICON
WINAPI
CreateIconFromResourceEx(
    _In_reads_bytes_(dwResSize) PBYTE presbits,
    _In_ DWORD dwResSize,
    _In_ BOOL fIcon,
    _In_ DWORD dwVer,
    _In_ int cxDesired,
    _In_ int cyDesired,
    _In_ UINT Flags);
typedef struct tagCURSORSHAPE
{
    int xHotSpot;
    int yHotSpot;
    int cx;
    int cy;
    int cbWidth;
    BYTE Planes;
    BYTE BitsPixel;
} CURSORSHAPE, FAR *LPCURSORSHAPE;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
HANDLE
WINAPI
LoadImageA(
    _In_opt_ HINSTANCE hInst,
    _In_ LPCSTR name,
    _In_ UINT type,
    _In_ int cx,
    _In_ int cy,
    _In_ UINT fuLoad);
WINUSERAPI
HANDLE
WINAPI
LoadImageW(
    _In_opt_ HINSTANCE hInst,
    _In_ LPCWSTR name,
    _In_ UINT type,
    _In_ int cx,
    _In_ int cy,
    _In_ UINT fuLoad);
WINUSERAPI
HANDLE
WINAPI
CopyImage(
    _In_ HANDLE h,
    _In_ UINT type,
    _In_ int cx,
    _In_ int cy,
    _In_ UINT flags);
WINUSERAPI BOOL WINAPI DrawIconEx(
    _In_ HDC hdc,
    _In_ int xLeft,
    _In_ int yTop,
    _In_ HICON hIcon,
    _In_ int cxWidth,
    _In_ int cyWidth,
    _In_ UINT istepIfAniCur,
    _In_opt_ HBRUSH hbrFlickerFreeDraw,
    _In_ UINT diFlags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
HICON
WINAPI
CreateIconIndirect(
    _In_ PICONINFO piconinfo);
WINUSERAPI
HICON
WINAPI
CopyIcon(
    _In_ HICON hIcon);
WINUSERAPI
BOOL
WINAPI
GetIconInfo(
    _In_ HICON hIcon,
    _Out_ PICONINFO piconinfo);
typedef struct _ICONINFOEXA {
    DWORD cbSize;
    BOOL fIcon;
    DWORD xHotspot;
    DWORD yHotspot;
    HBITMAP hbmMask;
    HBITMAP hbmColor;
    WORD wResID;
    CHAR szModName[MAX_PATH];
    CHAR szResName[MAX_PATH];
} ICONINFOEXA, *PICONINFOEXA;
typedef struct _ICONINFOEXW {
    DWORD cbSize;
    BOOL fIcon;
    DWORD xHotspot;
    DWORD yHotspot;
    HBITMAP hbmMask;
    HBITMAP hbmColor;
    WORD wResID;
    WCHAR szModName[MAX_PATH];
    WCHAR szResName[MAX_PATH];
} ICONINFOEXW, *PICONINFOEXW;
typedef ICONINFOEXW ICONINFOEX;
typedef PICONINFOEXW PICONINFOEX;
WINUSERAPI
BOOL
WINAPI
GetIconInfoExA(
    _In_ HICON hicon,
    _Inout_ PICONINFOEXA piconinfo);
WINUSERAPI
BOOL
WINAPI
GetIconInfoExW(
    _In_ HICON hicon,
    _Inout_ PICONINFOEXW piconinfo);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
int
WINAPI
LoadStringA(
    _In_opt_ HINSTANCE hInstance,
    _In_ UINT uID,
    _Out_writes_to_(cchBufferMax, return + 1) LPSTR lpBuffer,
    _In_ int cchBufferMax);
WINUSERAPI
int
WINAPI
LoadStringW(
    _In_opt_ HINSTANCE hInstance,
    _In_ UINT uID,
    _Out_writes_to_(cchBufferMax, return + 1) LPWSTR lpBuffer,
    _In_ int cchBufferMax);
#endif
#pragma endregion
typedef enum {
    EDIT_CONTROL_FEATURE_ENTERPRISE_DATA_PROTECTION_PASTE_SUPPORT = 0,
    EDIT_CONTROL_FEATURE_PASTE_NOTIFICATIONS = 1,
} EDIT_CONTROL_FEATURE;
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
IsDialogMessageA(
    _In_ HWND hDlg,
    _In_ LPMSG lpMsg);
WINUSERAPI
BOOL
WINAPI
IsDialogMessageW(
    _In_ HWND hDlg,
    _In_ LPMSG lpMsg);
WINUSERAPI
BOOL
WINAPI
MapDialogRect(
    _In_ HWND hDlg,
    _Inout_ LPRECT lpRect);
WINUSERAPI
int
WINAPI
DlgDirListA(
    _In_ HWND hDlg,
    _Inout_ LPSTR lpPathSpec,
    _In_ int nIDListBox,
    _In_ int nIDStaticPath,
    _In_ UINT uFileType);
WINUSERAPI
int
WINAPI
DlgDirListW(
    _In_ HWND hDlg,
    _Inout_ LPWSTR lpPathSpec,
    _In_ int nIDListBox,
    _In_ int nIDStaticPath,
    _In_ UINT uFileType);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
DlgDirSelectExA(
    _In_ HWND hwndDlg,
    _Out_writes_(chCount) LPSTR lpString,
    _In_ int chCount,
    _In_ int idListBox);
WINUSERAPI
BOOL
WINAPI
DlgDirSelectExW(
    _In_ HWND hwndDlg,
    _Out_writes_(chCount) LPWSTR lpString,
    _In_ int chCount,
    _In_ int idListBox);
WINUSERAPI
int
WINAPI
DlgDirListComboBoxA(
    _In_ HWND hDlg,
    _Inout_ LPSTR lpPathSpec,
    _In_ int nIDComboBox,
    _In_ int nIDStaticPath,
    _In_ UINT uFiletype);
WINUSERAPI
int
WINAPI
DlgDirListComboBoxW(
    _In_ HWND hDlg,
    _Inout_ LPWSTR lpPathSpec,
    _In_ int nIDComboBox,
    _In_ int nIDStaticPath,
    _In_ UINT uFiletype);
WINUSERAPI
BOOL
WINAPI
DlgDirSelectComboBoxExA(
    _In_ HWND hwndDlg,
    _Out_writes_(cchOut) LPSTR lpString,
    _In_ int cchOut,
    _In_ int idComboBox);
WINUSERAPI
BOOL
WINAPI
DlgDirSelectComboBoxExW(
    _In_ HWND hwndDlg,
    _Out_writes_(cchOut) LPWSTR lpString,
    _In_ int cchOut,
    _In_ int idComboBox);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagSCROLLINFO
{
    UINT cbSize;
    UINT fMask;
    int nMin;
    int nMax;
    UINT nPage;
    int nPos;
    int nTrackPos;
} SCROLLINFO, FAR *LPSCROLLINFO;
typedef SCROLLINFO CONST FAR *LPCSCROLLINFO;
WINUSERAPI
int
WINAPI
SetScrollInfo(
    _In_ HWND hwnd,
    _In_ int nBar,
    _In_ LPCSCROLLINFO lpsi,
    _In_ BOOL redraw);
WINUSERAPI
BOOL
WINAPI
GetScrollInfo(
    _In_ HWND hwnd,
    _In_ int nBar,
    _Inout_ LPSCROLLINFO lpsi);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagMDICREATESTRUCTA {
    LPCSTR szClass;
    LPCSTR szTitle;
    HANDLE hOwner;
    int x;
    int y;
    int cx;
    int cy;
    DWORD style;
    LPARAM lParam;
} MDICREATESTRUCTA, *LPMDICREATESTRUCTA;
typedef struct tagMDICREATESTRUCTW {
    LPCWSTR szClass;
    LPCWSTR szTitle;
    HANDLE hOwner;
    int x;
    int y;
    int cx;
    int cy;
    DWORD style;
    LPARAM lParam;
} MDICREATESTRUCTW, *LPMDICREATESTRUCTW;
typedef MDICREATESTRUCTW MDICREATESTRUCT;
typedef LPMDICREATESTRUCTW LPMDICREATESTRUCT;
typedef struct tagCLIENTCREATESTRUCT {
    HANDLE hWindowMenu;
    UINT idFirstChild;
} CLIENTCREATESTRUCT, *LPCLIENTCREATESTRUCT;
WINUSERAPI
LRESULT
WINAPI
DefFrameProcA(
    _In_ HWND hWnd,
    _In_opt_ HWND hWndMDIClient,
    _In_ UINT uMsg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
WINUSERAPI
LRESULT
WINAPI
DefFrameProcW(
    _In_ HWND hWnd,
    _In_opt_ HWND hWndMDIClient,
    _In_ UINT uMsg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
WINUSERAPI
LRESULT
WINAPI
DefMDIChildProcA(
    _In_ HWND hWnd,
    _In_ UINT uMsg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
WINUSERAPI
LRESULT
WINAPI
DefMDIChildProcW(
    _In_ HWND hWnd,
    _In_ UINT uMsg,
    _In_ WPARAM wParam,
    _In_ LPARAM lParam);
WINUSERAPI
BOOL
WINAPI
TranslateMDISysAccel(
    _In_ HWND hWndClient,
    _In_ LPMSG lpMsg);
WINUSERAPI
UINT
WINAPI
ArrangeIconicWindows(
    _In_ HWND hWnd);
WINUSERAPI
HWND
WINAPI
CreateMDIWindowA(
    _In_ LPCSTR lpClassName,
    _In_ LPCSTR lpWindowName,
    _In_ DWORD dwStyle,
    _In_ int X,
    _In_ int Y,
    _In_ int nWidth,
    _In_ int nHeight,
    _In_opt_ HWND hWndParent,
    _In_opt_ HINSTANCE hInstance,
    _In_ LPARAM lParam);
WINUSERAPI
HWND
WINAPI
CreateMDIWindowW(
    _In_ LPCWSTR lpClassName,
    _In_ LPCWSTR lpWindowName,
    _In_ DWORD dwStyle,
    _In_ int X,
    _In_ int Y,
    _In_ int nWidth,
    _In_ int nHeight,
    _In_opt_ HWND hWndParent,
    _In_opt_ HINSTANCE hInstance,
    _In_ LPARAM lParam);
WINUSERAPI
WORD
WINAPI
TileWindows(
    _In_opt_ HWND hwndParent,
    _In_ UINT wHow,
    _In_opt_ CONST RECT * lpRect,
    _In_ UINT cKids,
    _In_reads_opt_(cKids) const HWND FAR * lpKids);
WINUSERAPI
WORD
WINAPI CascadeWindows(
    _In_opt_ HWND hwndParent,
    _In_ UINT wHow,
    _In_opt_ CONST RECT * lpRect,
    _In_ UINT cKids,
    _In_reads_opt_(cKids) const HWND FAR * lpKids);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef DWORD HELPPOLY;
typedef struct tagMULTIKEYHELPA {
    DWORD mkSize;
    CHAR mkKeylist;
    CHAR szKeyphrase[1];
} MULTIKEYHELPA, *PMULTIKEYHELPA, *LPMULTIKEYHELPA;
typedef struct tagMULTIKEYHELPW {
    DWORD mkSize;
    WCHAR mkKeylist;
    WCHAR szKeyphrase[1];
} MULTIKEYHELPW, *PMULTIKEYHELPW, *LPMULTIKEYHELPW;
typedef MULTIKEYHELPW MULTIKEYHELP;
typedef PMULTIKEYHELPW PMULTIKEYHELP;
typedef LPMULTIKEYHELPW LPMULTIKEYHELP;
typedef struct tagHELPWININFOA {
    int wStructSize;
    int x;
    int y;
    int dx;
    int dy;
    int wMax;
    CHAR rgchMember[2];
} HELPWININFOA, *PHELPWININFOA, *LPHELPWININFOA;
typedef struct tagHELPWININFOW {
    int wStructSize;
    int x;
    int y;
    int dx;
    int dy;
    int wMax;
    WCHAR rgchMember[2];
} HELPWININFOW, *PHELPWININFOW, *LPHELPWININFOW;
typedef HELPWININFOW HELPWININFO;
typedef PHELPWININFOW PHELPWININFO;
typedef LPHELPWININFOW LPHELPWININFO;
WINUSERAPI
BOOL
WINAPI
WinHelpA(
    _In_opt_ HWND hWndMain,
    _In_opt_ LPCSTR lpszHelp,
    _In_ UINT uCommand,
    _In_ ULONG_PTR dwData);
WINUSERAPI
BOOL
WINAPI
WinHelpW(
    _In_opt_ HWND hWndMain,
    _In_opt_ LPCWSTR lpszHelp,
    _In_ UINT uCommand,
    _In_ ULONG_PTR dwData);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
DWORD
WINAPI
GetGuiResources(
    _In_ HANDLE hProcess,
    _In_ DWORD uiFlags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagTouchPredictionParameters
{
    UINT cbSize;
    UINT dwLatency;
    UINT dwSampleTime;
    UINT bUseHWTimeStamp;
} TOUCHPREDICTIONPARAMETERS, *PTOUCHPREDICTIONPARAMETERS;
#endif
#pragma endregion
typedef enum tagHANDEDNESS {
    HANDEDNESS_LEFT = 0,
    HANDEDNESS_RIGHT
} HANDEDNESS, *PHANDEDNESS;
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagNONCLIENTMETRICSA
{
    UINT cbSize;
    int iBorderWidth;
    int iScrollWidth;
    int iScrollHeight;
    int iCaptionWidth;
    int iCaptionHeight;
    LOGFONTA lfCaptionFont;
    int iSmCaptionWidth;
    int iSmCaptionHeight;
    LOGFONTA lfSmCaptionFont;
    int iMenuWidth;
    int iMenuHeight;
    LOGFONTA lfMenuFont;
    LOGFONTA lfStatusFont;
    LOGFONTA lfMessageFont;
    int iPaddedBorderWidth;
} NONCLIENTMETRICSA, *PNONCLIENTMETRICSA, FAR* LPNONCLIENTMETRICSA;
typedef struct tagNONCLIENTMETRICSW
{
    UINT cbSize;
    int iBorderWidth;
    int iScrollWidth;
    int iScrollHeight;
    int iCaptionWidth;
    int iCaptionHeight;
    LOGFONTW lfCaptionFont;
    int iSmCaptionWidth;
    int iSmCaptionHeight;
    LOGFONTW lfSmCaptionFont;
    int iMenuWidth;
    int iMenuHeight;
    LOGFONTW lfMenuFont;
    LOGFONTW lfStatusFont;
    LOGFONTW lfMessageFont;
    int iPaddedBorderWidth;
} NONCLIENTMETRICSW, *PNONCLIENTMETRICSW, FAR* LPNONCLIENTMETRICSW;
typedef NONCLIENTMETRICSW NONCLIENTMETRICS;
typedef PNONCLIENTMETRICSW PNONCLIENTMETRICS;
typedef LPNONCLIENTMETRICSW LPNONCLIENTMETRICS;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagMINIMIZEDMETRICS
{
    UINT cbSize;
    int iWidth;
    int iHorzGap;
    int iVertGap;
    int iArrange;
} MINIMIZEDMETRICS, *PMINIMIZEDMETRICS, *LPMINIMIZEDMETRICS;
typedef struct tagICONMETRICSA
{
    UINT cbSize;
    int iHorzSpacing;
    int iVertSpacing;
    int iTitleWrap;
    LOGFONTA lfFont;
} ICONMETRICSA, *PICONMETRICSA, *LPICONMETRICSA;
typedef struct tagICONMETRICSW
{
    UINT cbSize;
    int iHorzSpacing;
    int iVertSpacing;
    int iTitleWrap;
    LOGFONTW lfFont;
} ICONMETRICSW, *PICONMETRICSW, *LPICONMETRICSW;
typedef ICONMETRICSW ICONMETRICS;
typedef PICONMETRICSW PICONMETRICS;
typedef LPICONMETRICSW LPICONMETRICS;
typedef struct tagANIMATIONINFO
{
    UINT cbSize;
    int iMinAnimate;
} ANIMATIONINFO, *LPANIMATIONINFO;
typedef struct tagSERIALKEYSA
{
    UINT cbSize;
    DWORD dwFlags;
    LPSTR lpszActivePort;
    LPSTR lpszPort;
    UINT iBaudRate;
    UINT iPortState;
    UINT iActive;
} SERIALKEYSA, *LPSERIALKEYSA;
typedef struct tagSERIALKEYSW
{
    UINT cbSize;
    DWORD dwFlags;
    LPWSTR lpszActivePort;
    LPWSTR lpszPort;
    UINT iBaudRate;
    UINT iPortState;
    UINT iActive;
} SERIALKEYSW, *LPSERIALKEYSW;
typedef SERIALKEYSW SERIALKEYS;
typedef LPSERIALKEYSW LPSERIALKEYS;
typedef struct tagHIGHCONTRASTA
{
    UINT cbSize;
    DWORD dwFlags;
    LPSTR lpszDefaultScheme;
} HIGHCONTRASTA, *LPHIGHCONTRASTA;
typedef struct tagHIGHCONTRASTW
{
    UINT cbSize;
    DWORD dwFlags;
    LPWSTR lpszDefaultScheme;
} HIGHCONTRASTW, *LPHIGHCONTRASTW;
typedef HIGHCONTRASTW HIGHCONTRAST;
typedef LPHIGHCONTRASTW LPHIGHCONTRAST;
#endif
#pragma endregion
#include <tvout.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
LONG
WINAPI
ChangeDisplaySettingsA(
    _In_opt_ DEVMODEA* lpDevMode,
    _In_ DWORD dwFlags);
WINUSERAPI
LONG
WINAPI
ChangeDisplaySettingsW(
    _In_opt_ DEVMODEW* lpDevMode,
    _In_ DWORD dwFlags);
WINUSERAPI
LONG
WINAPI
ChangeDisplaySettingsExA(
    _In_opt_ LPCSTR lpszDeviceName,
    _In_opt_ DEVMODEA* lpDevMode,
    _Reserved_ HWND hwnd,
    _In_ DWORD dwflags,
    _In_opt_ LPVOID lParam);
WINUSERAPI
LONG
WINAPI
ChangeDisplaySettingsExW(
    _In_opt_ LPCWSTR lpszDeviceName,
    _In_opt_ DEVMODEW* lpDevMode,
    _Reserved_ HWND hwnd,
    _In_ DWORD dwflags,
    _In_opt_ LPVOID lParam);
WINUSERAPI
BOOL
WINAPI
EnumDisplaySettingsA(
    _In_opt_ LPCSTR lpszDeviceName,
    _In_ DWORD iModeNum,
    _Inout_ DEVMODEA* lpDevMode);
WINUSERAPI
BOOL
WINAPI
EnumDisplaySettingsW(
    _In_opt_ LPCWSTR lpszDeviceName,
    _In_ DWORD iModeNum,
    _Inout_ DEVMODEW* lpDevMode);
WINUSERAPI
BOOL
WINAPI
EnumDisplaySettingsExA(
    _In_opt_ LPCSTR lpszDeviceName,
    _In_ DWORD iModeNum,
    _Inout_ DEVMODEA* lpDevMode,
    _In_ DWORD dwFlags);
WINUSERAPI
BOOL
WINAPI
EnumDisplaySettingsExW(
    _In_opt_ LPCWSTR lpszDeviceName,
    _In_ DWORD iModeNum,
    _Inout_ DEVMODEW* lpDevMode,
    _In_ DWORD dwFlags);
WINUSERAPI
BOOL
WINAPI
EnumDisplayDevicesA(
    _In_opt_ LPCSTR lpDevice,
    _In_ DWORD iDevNum,
    _Inout_ PDISPLAY_DEVICEA lpDisplayDevice,
    _In_ DWORD dwFlags);
WINUSERAPI
BOOL
WINAPI
EnumDisplayDevicesW(
    _In_opt_ LPCWSTR lpDevice,
    _In_ DWORD iDevNum,
    _Inout_ PDISPLAY_DEVICEW lpDisplayDevice,
    _In_ DWORD dwFlags);
WINUSERAPI
LONG
WINAPI
GetDisplayConfigBufferSizes(
    _In_ UINT32 flags,
    _Out_ UINT32* numPathArrayElements,
    _Out_ UINT32* numModeInfoArrayElements);
WINUSERAPI
LONG
WINAPI
SetDisplayConfig(
    _In_ UINT32 numPathArrayElements,
    _In_reads_opt_(numPathArrayElements) DISPLAYCONFIG_PATH_INFO* pathArray,
    _In_ UINT32 numModeInfoArrayElements,
    _In_reads_opt_(numModeInfoArrayElements) DISPLAYCONFIG_MODE_INFO* modeInfoArray,
    _In_ UINT32 flags);
WINUSERAPI
_Success_(return == ERROR_SUCCESS) LONG
WINAPI
QueryDisplayConfig(
    _In_ UINT32 flags,
    _Inout_ UINT32* numPathArrayElements,
    _Out_writes_to_(*numPathArrayElements, *numPathArrayElements) DISPLAYCONFIG_PATH_INFO* pathArray,
    _Inout_ UINT32* numModeInfoArrayElements,
    _Out_writes_to_(*numModeInfoArrayElements, *numModeInfoArrayElements) DISPLAYCONFIG_MODE_INFO* modeInfoArray,
    _When_(!(flags & QDC_DATABASE_CURRENT), _Pre_null_)
    _When_(flags & QDC_DATABASE_CURRENT, _Out_)
        DISPLAYCONFIG_TOPOLOGY_ID* currentTopologyId);
WINUSERAPI
LONG
WINAPI
DisplayConfigGetDeviceInfo(
    _Inout_ DISPLAYCONFIG_DEVICE_INFO_HEADER* requestPacket);
WINUSERAPI
LONG
WINAPI
DisplayConfigSetDeviceInfo(
    _In_ DISPLAYCONFIG_DEVICE_INFO_HEADER* setPacket);
WINUSERAPI
_Success_(return != FALSE)
BOOL
WINAPI
SystemParametersInfoA(
    _In_ UINT uiAction,
    _In_ UINT uiParam,
    _Pre_maybenull_ _Post_valid_ PVOID pvParam,
    _In_ UINT fWinIni);
WINUSERAPI
_Success_(return != FALSE)
BOOL
WINAPI
SystemParametersInfoW(
    _In_ UINT uiAction,
    _In_ UINT uiParam,
    _Pre_maybenull_ _Post_valid_ PVOID pvParam,
    _In_ UINT fWinIni);
WINUSERAPI
_Success_(return != FALSE)
BOOL
WINAPI
SystemParametersInfoForDpi(
    _In_ UINT uiAction,
    _In_ UINT uiParam,
    _Pre_maybenull_ _Post_valid_ PVOID pvParam,
    _In_ UINT fWinIni,
    _In_ UINT dpi);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagFILTERKEYS
{
    UINT cbSize;
    DWORD dwFlags;
    DWORD iWaitMSec;
    DWORD iDelayMSec;
    DWORD iRepeatMSec;
    DWORD iBounceMSec;
} FILTERKEYS, *LPFILTERKEYS;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagSTICKYKEYS
{
    UINT cbSize;
    DWORD dwFlags;
} STICKYKEYS, *LPSTICKYKEYS;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagMOUSEKEYS
{
    UINT cbSize;
    DWORD dwFlags;
    DWORD iMaxSpeed;
    DWORD iTimeToMaxSpeed;
    DWORD iCtrlSpeed;
    DWORD dwReserved1;
    DWORD dwReserved2;
} MOUSEKEYS, *LPMOUSEKEYS;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagACCESSTIMEOUT
{
    UINT cbSize;
    DWORD dwFlags;
    DWORD iTimeOutMSec;
} ACCESSTIMEOUT, *LPACCESSTIMEOUT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagSOUNDSENTRYA
{
    UINT cbSize;
    DWORD dwFlags;
    DWORD iFSTextEffect;
    DWORD iFSTextEffectMSec;
    DWORD iFSTextEffectColorBits;
    DWORD iFSGrafEffect;
    DWORD iFSGrafEffectMSec;
    DWORD iFSGrafEffectColor;
    DWORD iWindowsEffect;
    DWORD iWindowsEffectMSec;
    LPSTR lpszWindowsEffectDLL;
    DWORD iWindowsEffectOrdinal;
} SOUNDSENTRYA, *LPSOUNDSENTRYA;
typedef struct tagSOUNDSENTRYW
{
    UINT cbSize;
    DWORD dwFlags;
    DWORD iFSTextEffect;
    DWORD iFSTextEffectMSec;
    DWORD iFSTextEffectColorBits;
    DWORD iFSGrafEffect;
    DWORD iFSGrafEffectMSec;
    DWORD iFSGrafEffectColor;
    DWORD iWindowsEffect;
    DWORD iWindowsEffectMSec;
    LPWSTR lpszWindowsEffectDLL;
    DWORD iWindowsEffectOrdinal;
} SOUNDSENTRYW, *LPSOUNDSENTRYW;
typedef SOUNDSENTRYW SOUNDSENTRY;
typedef LPSOUNDSENTRYW LPSOUNDSENTRY;
#endif
#pragma endregion
#pragma region Desktop or PC Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PC_APP)
WINUSERAPI
BOOL
WINAPI
SoundSentry(VOID);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagTOGGLEKEYS
{
    UINT cbSize;
    DWORD dwFlags;
} TOGGLEKEYS, *LPTOGGLEKEYS;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagAUDIODESCRIPTION {
    UINT cbSize;
    BOOL Enabled;
    LCID Locale;
} AUDIODESCRIPTION, *LPAUDIODESCRIPTION;
WINUSERAPI
VOID
WINAPI
SetDebugErrorLevel(
    _In_ DWORD dwLevel);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
VOID
WINAPI
SetLastErrorEx(
    _In_ DWORD dwErrCode,
    _In_ DWORD dwType);
WINUSERAPI
int
WINAPI
InternalGetWindowText(
    _In_ HWND hWnd,
    _Out_writes_to_(cchMaxCount, return + 1) LPWSTR pString,
    _In_ int cchMaxCount);
WINUSERAPI
BOOL
WINAPI
CancelShutdown(
    VOID);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
HMONITOR
WINAPI
MonitorFromPoint(
    _In_ POINT pt,
    _In_ DWORD dwFlags);
WINUSERAPI
HMONITOR
WINAPI
MonitorFromRect(
    _In_ LPCRECT lprc,
    _In_ DWORD dwFlags);
WINUSERAPI
HMONITOR
WINAPI
MonitorFromWindow(
    _In_ HWND hwnd,
    _In_ DWORD dwFlags);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagMONITORINFO
{
    DWORD cbSize;
    RECT rcMonitor;
    RECT rcWork;
    DWORD dwFlags;
} MONITORINFO, *LPMONITORINFO;
typedef struct tagMONITORINFOEXA : public tagMONITORINFO
{
    CHAR szDevice[CCHDEVICENAME];
} MONITORINFOEXA, *LPMONITORINFOEXA;
typedef struct tagMONITORINFOEXW : public tagMONITORINFO
{
    WCHAR szDevice[CCHDEVICENAME];
} MONITORINFOEXW, *LPMONITORINFOEXW;
typedef MONITORINFOEXW MONITORINFOEX;
typedef LPMONITORINFOEXW LPMONITORINFOEX;
WINUSERAPI
BOOL
WINAPI
GetMonitorInfoA(
    _In_ HMONITOR hMonitor,
    _Inout_ LPMONITORINFO lpmi);
WINUSERAPI
BOOL
WINAPI
GetMonitorInfoW(
    _In_ HMONITOR hMonitor,
    _Inout_ LPMONITORINFO lpmi);
typedef BOOL (CALLBACK* MONITORENUMPROC)(HMONITOR, HDC, LPRECT, LPARAM);
WINUSERAPI
BOOL
WINAPI
EnumDisplayMonitors(
    _In_opt_ HDC hdc,
    _In_opt_ LPCRECT lprcClip,
    _In_ MONITORENUMPROC lpfnEnum,
    _In_ LPARAM dwData);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
VOID
WINAPI
NotifyWinEvent(
    _In_ DWORD event,
    _In_ HWND hwnd,
    _In_ LONG idObject,
    _In_ LONG idChild);
typedef VOID (CALLBACK* WINEVENTPROC)(
    HWINEVENTHOOK hWinEventHook,
    DWORD event,
    HWND hwnd,
    LONG idObject,
    LONG idChild,
    DWORD idEventThread,
    DWORD dwmsEventTime);
WINUSERAPI
HWINEVENTHOOK
WINAPI
SetWinEventHook(
    _In_ DWORD eventMin,
    _In_ DWORD eventMax,
    _In_opt_ HMODULE hmodWinEventProc,
    _In_ WINEVENTPROC pfnWinEventProc,
    _In_ DWORD idProcess,
    _In_ DWORD idThread,
    _In_ DWORD dwFlags);
WINUSERAPI
BOOL
WINAPI
IsWinEventHookInstalled(
    _In_ DWORD event);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
UnhookWinEvent(
    _In_ HWINEVENTHOOK hWinEventHook);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagGUITHREADINFO
{
    DWORD cbSize;
    DWORD flags;
    HWND hwndActive;
    HWND hwndFocus;
    HWND hwndCapture;
    HWND hwndMenuOwner;
    HWND hwndMoveSize;
    HWND hwndCaret;
    RECT rcCaret;
} GUITHREADINFO, *PGUITHREADINFO, FAR * LPGUITHREADINFO;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
GetGUIThreadInfo(
    _In_ DWORD idThread,
    _Inout_ PGUITHREADINFO pgui);
WINUSERAPI
BOOL
WINAPI
BlockInput(
    BOOL fBlockIt);
WINUSERAPI
BOOL
WINAPI
SetProcessDPIAware(
    VOID);
WINUSERAPI
BOOL
WINAPI
IsProcessDPIAware(
    VOID);
WINUSERAPI
DPI_AWARENESS_CONTEXT
WINAPI
SetThreadDpiAwarenessContext(
    _In_ DPI_AWARENESS_CONTEXT dpiContext);
WINUSERAPI
DPI_AWARENESS_CONTEXT
WINAPI
GetThreadDpiAwarenessContext(
    VOID);
WINUSERAPI
DPI_AWARENESS_CONTEXT
WINAPI
GetWindowDpiAwarenessContext(
    _In_ HWND hwnd);
WINUSERAPI
DPI_AWARENESS
WINAPI
GetAwarenessFromDpiAwarenessContext(
    _In_ DPI_AWARENESS_CONTEXT value);
WINUSERAPI
UINT
WINAPI
GetDpiFromDpiAwarenessContext(
    _In_ DPI_AWARENESS_CONTEXT value);
WINUSERAPI
BOOL
WINAPI
AreDpiAwarenessContextsEqual(
    _In_ DPI_AWARENESS_CONTEXT dpiContextA,
    _In_ DPI_AWARENESS_CONTEXT dpiContextB);
WINUSERAPI
BOOL
WINAPI
IsValidDpiAwarenessContext(
    _In_ DPI_AWARENESS_CONTEXT value);
WINUSERAPI
UINT
WINAPI
GetDpiForWindow(
    _In_ HWND hwnd);
WINUSERAPI
UINT
WINAPI
GetDpiForSystem(
    VOID);
WINUSERAPI
UINT
WINAPI
GetSystemDpiForProcess(
    _In_ HANDLE hProcess);
WINUSERAPI
BOOL
WINAPI
EnableNonClientDpiScaling(
    _In_ HWND hwnd);
WINUSERAPI
BOOL
WINAPI
InheritWindowMonitor(
    _In_ HWND hwnd,
    _In_opt_ HWND hwndInherit);
WINUSERAPI
BOOL
WINAPI
SetProcessDpiAwarenessContext(
    _In_ DPI_AWARENESS_CONTEXT value);
WINUSERAPI
DPI_AWARENESS_CONTEXT
WINAPI
GetDpiAwarenessContextForProcess(
    _In_ HANDLE hProcess);
WINUSERAPI
DPI_HOSTING_BEHAVIOR
WINAPI
SetThreadDpiHostingBehavior(
    _In_ DPI_HOSTING_BEHAVIOR value);
WINUSERAPI
DPI_HOSTING_BEHAVIOR
WINAPI
GetThreadDpiHostingBehavior();
WINUSERAPI
DPI_HOSTING_BEHAVIOR
WINAPI
GetWindowDpiHostingBehavior(
    _In_ HWND hwnd);
WINUSERAPI
UINT
WINAPI
GetWindowModuleFileNameA(
    _In_ HWND hwnd,
    _Out_writes_to_(cchFileNameMax, return) LPSTR pszFileName,
    _In_ UINT cchFileNameMax);
WINUSERAPI
UINT
WINAPI
GetWindowModuleFileNameW(
    _In_ HWND hwnd,
    _Out_writes_to_(cchFileNameMax, return) LPWSTR pszFileName,
    _In_ UINT cchFileNameMax);
#endif
#pragma endregion
#pragma region Desktop Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
typedef struct tagCURSORINFO
{
    DWORD cbSize;
    DWORD flags;
    HCURSOR hCursor;
    POINT ptScreenPos;
} CURSORINFO, *PCURSORINFO, *LPCURSORINFO;
WINUSERAPI
BOOL
WINAPI
GetCursorInfo(
    _Inout_ PCURSORINFO pci);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagWINDOWINFO
{
    DWORD cbSize;
    RECT rcWindow;
    RECT rcClient;
    DWORD dwStyle;
    DWORD dwExStyle;
    DWORD dwWindowStatus;
    UINT cxWindowBorders;
    UINT cyWindowBorders;
    ATOM atomWindowType;
    WORD wCreatorVersion;
} WINDOWINFO, *PWINDOWINFO, *LPWINDOWINFO;
WINUSERAPI
BOOL
WINAPI
GetWindowInfo(
    _In_ HWND hwnd,
    _Inout_ PWINDOWINFO pwi);
typedef struct tagTITLEBARINFO
{
    DWORD cbSize;
    RECT rcTitleBar;
    DWORD rgstate[CCHILDREN_TITLEBAR + 1];
} TITLEBARINFO, *PTITLEBARINFO, *LPTITLEBARINFO;
WINUSERAPI
BOOL
WINAPI
GetTitleBarInfo(
    _In_ HWND hwnd,
    _Inout_ PTITLEBARINFO pti);
typedef struct tagTITLEBARINFOEX
{
    DWORD cbSize;
    RECT rcTitleBar;
    DWORD rgstate[CCHILDREN_TITLEBAR + 1];
    RECT rgrect[CCHILDREN_TITLEBAR + 1];
} TITLEBARINFOEX, *PTITLEBARINFOEX, *LPTITLEBARINFOEX;
typedef struct tagMENUBARINFO
{
    DWORD cbSize;
    RECT rcBar;
    HMENU hMenu;
    HWND hwndMenu;
    BOOL fBarFocused:1;
    BOOL fFocused:1;
} MENUBARINFO, *PMENUBARINFO, *LPMENUBARINFO;
WINUSERAPI
BOOL
WINAPI
GetMenuBarInfo(
    _In_ HWND hwnd,
    _In_ LONG idObject,
    _In_ LONG idItem,
    _Inout_ PMENUBARINFO pmbi);
typedef struct tagSCROLLBARINFO
{
    DWORD cbSize;
    RECT rcScrollBar;
    int dxyLineButton;
    int xyThumbTop;
    int xyThumbBottom;
    int reserved;
    DWORD rgstate[CCHILDREN_SCROLLBAR + 1];
} SCROLLBARINFO, *PSCROLLBARINFO, *LPSCROLLBARINFO;
WINUSERAPI
BOOL
WINAPI
GetScrollBarInfo(
    _In_ HWND hwnd,
    _In_ LONG idObject,
    _Inout_ PSCROLLBARINFO psbi);
typedef struct tagCOMBOBOXINFO
{
    DWORD cbSize;
    RECT rcItem;
    RECT rcButton;
    DWORD stateButton;
    HWND hwndCombo;
    HWND hwndItem;
    HWND hwndList;
} COMBOBOXINFO, *PCOMBOBOXINFO, *LPCOMBOBOXINFO;
WINUSERAPI
BOOL
WINAPI
GetComboBoxInfo(
    _In_ HWND hwndCombo,
    _Inout_ PCOMBOBOXINFO pcbi);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
HWND
WINAPI
GetAncestor(
    _In_ HWND hwnd,
    _In_ UINT gaFlags);
WINUSERAPI
HWND
WINAPI
RealChildWindowFromPoint(
    _In_ HWND hwndParent,
    _In_ POINT ptParentClientCoords);
WINUSERAPI
UINT
WINAPI
RealGetWindowClassA(
    _In_ HWND hwnd,
    _Out_writes_to_(cchClassNameMax, return) LPSTR ptszClassName,
    _In_ UINT cchClassNameMax);
WINUSERAPI
UINT
WINAPI
RealGetWindowClassW(
    _In_ HWND hwnd,
    _Out_writes_to_(cchClassNameMax, return) LPWSTR ptszClassName,
    _In_ UINT cchClassNameMax);
typedef struct tagALTTABINFO
{
    DWORD cbSize;
    int cItems;
    int cColumns;
    int cRows;
    int iColFocus;
    int iRowFocus;
    int cxItem;
    int cyItem;
    POINT ptStart;
} ALTTABINFO, *PALTTABINFO, *LPALTTABINFO;
WINUSERAPI
BOOL
WINAPI
GetAltTabInfoA(
    _In_opt_ HWND hwnd,
    _In_ int iItem,
    _Inout_ PALTTABINFO pati,
    _Out_writes_opt_(cchItemText) LPSTR pszItemText,
    _In_ UINT cchItemText);
WINUSERAPI
BOOL
WINAPI
GetAltTabInfoW(
    _In_opt_ HWND hwnd,
    _In_ int iItem,
    _Inout_ PALTTABINFO pati,
    _Out_writes_opt_(cchItemText) LPWSTR pszItemText,
    _In_ UINT cchItemText);
WINUSERAPI
DWORD
WINAPI
GetListBoxInfo(
    _In_ HWND hwnd);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
LockWorkStation(
    VOID);
WINUSERAPI
BOOL
WINAPI
UserHandleGrantAccess(
    _In_ HANDLE hUserHandle,
    _In_ HANDLE hJob,
    _In_ BOOL bGrant);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DECLARE_HANDLE(HRAWINPUT);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagRAWINPUTHEADER {
    DWORD dwType;
    DWORD dwSize;
    HANDLE hDevice;
    WPARAM wParam;
} RAWINPUTHEADER, *PRAWINPUTHEADER, *LPRAWINPUTHEADER;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(disable : 4201)
typedef struct tagRAWMOUSE {
    USHORT usFlags;
    union {
        ULONG ulButtons;
        struct {
            USHORT usButtonFlags;
            USHORT usButtonData;
        } DUMMYSTRUCTNAME;
    } DUMMYUNIONNAME;
    ULONG ulRawButtons;
    LONG lLastX;
    LONG lLastY;
    ULONG ulExtraInformation;
} RAWMOUSE, *PRAWMOUSE, *LPRAWMOUSE;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagRAWKEYBOARD {
    USHORT MakeCode;
    USHORT Flags;
    USHORT Reserved;
    USHORT VKey;
    UINT Message;
    ULONG ExtraInformation;
} RAWKEYBOARD, *PRAWKEYBOARD, *LPRAWKEYBOARD;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagRAWHID {
    DWORD dwSizeHid;
    DWORD dwCount;
    BYTE bRawData[1];
} RAWHID, *PRAWHID, *LPRAWHID;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagRAWINPUT {
    RAWINPUTHEADER header;
    union {
        RAWMOUSE mouse;
        RAWKEYBOARD keyboard;
        RAWHID hid;
    } data;
} RAWINPUT, *PRAWINPUT, *LPRAWINPUT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
UINT
WINAPI
GetRawInputData(
    _In_ HRAWINPUT hRawInput,
    _In_ UINT uiCommand,
    _Out_writes_bytes_to_opt_(*pcbSize, return) LPVOID pData,
    _Inout_ PUINT pcbSize,
    _In_ UINT cbSizeHeader);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagRID_DEVICE_INFO_MOUSE {
    DWORD dwId;
    DWORD dwNumberOfButtons;
    DWORD dwSampleRate;
    BOOL fHasHorizontalWheel;
} RID_DEVICE_INFO_MOUSE, *PRID_DEVICE_INFO_MOUSE;
typedef struct tagRID_DEVICE_INFO_KEYBOARD {
    DWORD dwType;
    DWORD dwSubType;
    DWORD dwKeyboardMode;
    DWORD dwNumberOfFunctionKeys;
    DWORD dwNumberOfIndicators;
    DWORD dwNumberOfKeysTotal;
} RID_DEVICE_INFO_KEYBOARD, *PRID_DEVICE_INFO_KEYBOARD;
typedef struct tagRID_DEVICE_INFO_HID {
    DWORD dwVendorId;
    DWORD dwProductId;
    DWORD dwVersionNumber;
    USHORT usUsagePage;
    USHORT usUsage;
} RID_DEVICE_INFO_HID, *PRID_DEVICE_INFO_HID;
typedef struct tagRID_DEVICE_INFO {
    DWORD cbSize;
    DWORD dwType;
    union {
        RID_DEVICE_INFO_MOUSE mouse;
        RID_DEVICE_INFO_KEYBOARD keyboard;
        RID_DEVICE_INFO_HID hid;
    } DUMMYUNIONNAME;
} RID_DEVICE_INFO, *PRID_DEVICE_INFO, *LPRID_DEVICE_INFO;
WINUSERAPI
UINT
WINAPI
GetRawInputDeviceInfoA(
    _In_opt_ HANDLE hDevice,
    _In_ UINT uiCommand,
    _Inout_updates_bytes_to_opt_(*pcbSize, *pcbSize) LPVOID pData,
    _Inout_ PUINT pcbSize);
WINUSERAPI
UINT
WINAPI
GetRawInputDeviceInfoW(
    _In_opt_ HANDLE hDevice,
    _In_ UINT uiCommand,
    _Inout_updates_bytes_to_opt_(*pcbSize, *pcbSize) LPVOID pData,
    _Inout_ PUINT pcbSize);
WINUSERAPI
UINT
WINAPI
GetRawInputBuffer(
    _Out_writes_bytes_opt_(*pcbSize) PRAWINPUT pData,
    _Inout_ PUINT pcbSize,
    _In_ UINT cbSizeHeader);
typedef struct tagRAWINPUTDEVICE {
    USHORT usUsagePage;
    USHORT usUsage;
    DWORD dwFlags;
    HWND hwndTarget;
} RAWINPUTDEVICE, *PRAWINPUTDEVICE, *LPRAWINPUTDEVICE;
typedef CONST RAWINPUTDEVICE* PCRAWINPUTDEVICE;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
RegisterRawInputDevices(
    _In_reads_(uiNumDevices) PCRAWINPUTDEVICE pRawInputDevices,
    _In_ UINT uiNumDevices,
    _In_ UINT cbSize);
WINUSERAPI
UINT
WINAPI
GetRegisteredRawInputDevices(
    _Out_writes_opt_( *puiNumDevices) PRAWINPUTDEVICE pRawInputDevices,
    _Inout_ PUINT puiNumDevices,
    _In_ UINT cbSize);
typedef struct tagRAWINPUTDEVICELIST {
    HANDLE hDevice;
    DWORD dwType;
} RAWINPUTDEVICELIST, *PRAWINPUTDEVICELIST;
WINUSERAPI
UINT
WINAPI
GetRawInputDeviceList(
    _Out_writes_opt_(*puiNumDevices) PRAWINPUTDEVICELIST pRawInputDeviceList,
    _Inout_ PUINT puiNumDevices,
    _In_ UINT cbSize);
WINUSERAPI
LRESULT
WINAPI
DefRawInputProc(
    _In_reads_(nInput) PRAWINPUT* paRawInput,
    _In_ INT nInput,
    _In_ UINT cbSizeHeader);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum tagPOINTER_DEVICE_TYPE {
    POINTER_DEVICE_TYPE_INTEGRATED_PEN = 0x00000001,
    POINTER_DEVICE_TYPE_EXTERNAL_PEN = 0x00000002,
    POINTER_DEVICE_TYPE_TOUCH = 0x00000003,
    POINTER_DEVICE_TYPE_TOUCH_PAD = 0x00000004,
    POINTER_DEVICE_TYPE_MAX = 0xFFFFFFFF
} POINTER_DEVICE_TYPE;
typedef struct tagPOINTER_DEVICE_INFO {
    DWORD displayOrientation;
    HANDLE device;
    POINTER_DEVICE_TYPE pointerDeviceType;
    HMONITOR monitor;
    ULONG startingCursorId;
    USHORT maxActiveContacts;
    WCHAR productString[POINTER_DEVICE_PRODUCT_STRING_MAX];
} POINTER_DEVICE_INFO;
typedef struct tagPOINTER_DEVICE_PROPERTY {
    INT32 logicalMin;
    INT32 logicalMax;
    INT32 physicalMin;
    INT32 physicalMax;
    UINT32 unit;
    UINT32 unitExponent;
    USHORT usagePageId;
    USHORT usageId;
} POINTER_DEVICE_PROPERTY;
typedef enum tagPOINTER_DEVICE_CURSOR_TYPE {
    POINTER_DEVICE_CURSOR_TYPE_UNKNOWN = 0x00000000,
    POINTER_DEVICE_CURSOR_TYPE_TIP = 0x00000001,
    POINTER_DEVICE_CURSOR_TYPE_ERASER = 0x00000002,
    POINTER_DEVICE_CURSOR_TYPE_MAX = 0xFFFFFFFF
} POINTER_DEVICE_CURSOR_TYPE;
typedef struct tagPOINTER_DEVICE_CURSOR_INFO {
    UINT32 cursorId;
    POINTER_DEVICE_CURSOR_TYPE cursor;
} POINTER_DEVICE_CURSOR_INFO;
WINUSERAPI
BOOL
WINAPI
GetPointerDevices(
    _Inout_ UINT32* deviceCount,
    _Out_writes_opt_(*deviceCount) POINTER_DEVICE_INFO *pointerDevices);
WINUSERAPI
BOOL
WINAPI
GetPointerDevice(
    _In_ HANDLE device,
    _Out_writes_(1) POINTER_DEVICE_INFO *pointerDevice);
WINUSERAPI
BOOL
WINAPI
GetPointerDeviceProperties(
    _In_ HANDLE device,
    _Inout_ UINT32* propertyCount,
    _Out_writes_opt_(*propertyCount) POINTER_DEVICE_PROPERTY *pointerProperties);
WINUSERAPI
BOOL
WINAPI
RegisterPointerDeviceNotifications(
    _In_ HWND window,
    _In_ BOOL notifyRange);
WINUSERAPI
BOOL
WINAPI
GetPointerDeviceRects(
    _In_ HANDLE device,
    _Out_writes_(1) RECT* pointerDeviceRect,
    _Out_writes_(1) RECT* displayRect);
WINUSERAPI
BOOL
WINAPI
GetPointerDeviceCursors(
    _In_ HANDLE device,
    _Inout_ UINT32* cursorCount,
    _Out_writes_opt_(*cursorCount) POINTER_DEVICE_CURSOR_INFO *deviceCursors);
WINUSERAPI
BOOL
WINAPI
GetRawPointerDeviceData(
    _In_ UINT32 pointerId,
    _In_ UINT32 historyCount,
    _In_ UINT32 propertiesCount,
    _In_reads_(propertiesCount) POINTER_DEVICE_PROPERTY* pProperties,
    _Out_writes_(historyCount * propertiesCount) LONG* pValues);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
ChangeWindowMessageFilter(
    _In_ UINT message,
    _In_ DWORD dwFlag);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagCHANGEFILTERSTRUCT {
    DWORD cbSize;
    DWORD ExtStatus;
} CHANGEFILTERSTRUCT, *PCHANGEFILTERSTRUCT;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
ChangeWindowMessageFilterEx(
    _In_ HWND hwnd,
    _In_ UINT message,
    _In_ DWORD action,
    _Inout_opt_ PCHANGEFILTERSTRUCT pChangeFilterStruct);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
DECLARE_HANDLE(HGESTUREINFO);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagGESTUREINFO {
    UINT cbSize;
    DWORD dwFlags;
    DWORD dwID;
    HWND hwndTarget;
    POINTS ptsLocation;
    DWORD dwInstanceID;
    DWORD dwSequenceID;
    ULONGLONG ullArguments;
    UINT cbExtraArgs;
} GESTUREINFO, *PGESTUREINFO;
typedef GESTUREINFO const * PCGESTUREINFO;
typedef struct tagGESTURENOTIFYSTRUCT {
    UINT cbSize;
    DWORD dwFlags;
    HWND hwndTarget;
    POINTS ptsLocation;
    DWORD dwInstanceID;
} GESTURENOTIFYSTRUCT, *PGESTURENOTIFYSTRUCT;
WINUSERAPI
BOOL
WINAPI
GetGestureInfo(
    _In_ HGESTUREINFO hGestureInfo,
    _Out_ PGESTUREINFO pGestureInfo);
WINUSERAPI
BOOL
WINAPI
GetGestureExtraArgs(
    _In_ HGESTUREINFO hGestureInfo,
    _In_ UINT cbExtraArgs,
    _Out_writes_bytes_(cbExtraArgs) PBYTE pExtraArgs);
WINUSERAPI
BOOL
WINAPI
CloseGestureInfoHandle(
    _In_ HGESTUREINFO hGestureInfo);
typedef struct tagGESTURECONFIG {
    DWORD dwID;
    DWORD dwWant;
    DWORD dwBlock;
} GESTURECONFIG, *PGESTURECONFIG;
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
SetGestureConfig(
    _In_ HWND hwnd,
    _In_ DWORD dwReserved,
    _In_ UINT cIDs,
    _In_reads_(cIDs) PGESTURECONFIG pGestureConfig,
    _In_ UINT cbSize);
WINUSERAPI
BOOL
WINAPI
GetGestureConfig(
    _In_ HWND hwnd,
    _In_ DWORD dwReserved,
    _In_ DWORD dwFlags,
    _In_ PUINT pcIDs,
    _Inout_updates_(*pcIDs) PGESTURECONFIG pGestureConfig,
    _In_ UINT cbSize);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
ShutdownBlockReasonCreate(
    _In_ HWND hWnd,
    _In_ LPCWSTR pwszReason);
WINUSERAPI
BOOL
WINAPI
ShutdownBlockReasonQuery(
    _In_ HWND hWnd,
    _Out_writes_opt_(*pcchBuff) LPWSTR pwszBuff,
    _Inout_ DWORD *pcchBuff);
WINUSERAPI
BOOL
WINAPI
ShutdownBlockReasonDestroy(
    _In_ HWND hWnd);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum tagINPUT_MESSAGE_DEVICE_TYPE {
    IMDT_UNAVAILABLE = 0x00000000,
    IMDT_KEYBOARD = 0x00000001,
    IMDT_MOUSE = 0x00000002,
    IMDT_TOUCH = 0x00000004,
    IMDT_PEN = 0x00000008,
    IMDT_TOUCHPAD = 0x00000010,
 } INPUT_MESSAGE_DEVICE_TYPE;
typedef enum tagINPUT_MESSAGE_ORIGIN_ID {
     IMO_UNAVAILABLE = 0x00000000,
     IMO_HARDWARE = 0x00000001,
     IMO_INJECTED = 0x00000002,
     IMO_SYSTEM = 0x00000004,
} INPUT_MESSAGE_ORIGIN_ID;
 typedef struct tagINPUT_MESSAGE_SOURCE {
     INPUT_MESSAGE_DEVICE_TYPE deviceType;
     INPUT_MESSAGE_ORIGIN_ID originId;
 } INPUT_MESSAGE_SOURCE;
WINUSERAPI
BOOL
WINAPI
GetCurrentInputMessageSource(
    _Out_ INPUT_MESSAGE_SOURCE *inputMessageSource);
WINUSERAPI
BOOL
WINAPI
GetCIMSSM(
    _Out_ INPUT_MESSAGE_SOURCE *inputMessageSource);
#endif
#pragma endregion
#pragma region Application Family or OneCore Family or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM | WINAPI_PARTITION_GAMES)
typedef enum tagAR_STATE {
    AR_ENABLED = 0x0,
    AR_DISABLED = 0x1,
    AR_SUPPRESSED = 0x2,
    AR_REMOTESESSION = 0x4,
    AR_MULTIMON = 0x8,
    AR_NOSENSOR = 0x10,
    AR_NOT_SUPPORTED = 0x20,
    AR_DOCKED = 0x40,
    AR_LAPTOP = 0x80
} AR_STATE, *PAR_STATE;
#endif
#pragma endregion
DEFINE_ENUM_FLAG_OPERATORS(AR_STATE)
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef enum ORIENTATION_PREFERENCE {
    ORIENTATION_PREFERENCE_NONE = 0x0,
    ORIENTATION_PREFERENCE_LANDSCAPE = 0x1,
    ORIENTATION_PREFERENCE_PORTRAIT = 0x2,
    ORIENTATION_PREFERENCE_LANDSCAPE_FLIPPED = 0x4,
    ORIENTATION_PREFERENCE_PORTRAIT_FLIPPED = 0x8
} ORIENTATION_PREFERENCE;
DEFINE_ENUM_FLAG_OPERATORS(ORIENTATION_PREFERENCE)
WINUSERAPI
BOOL
WINAPI
GetAutoRotationState(
    _Out_ PAR_STATE pState);
WINUSERAPI
BOOL
WINAPI
GetDisplayAutoRotationPreferences(
    _Out_ ORIENTATION_PREFERENCE *pOrientation);
WINUSERAPI
BOOL
WINAPI
GetDisplayAutoRotationPreferencesByProcessId(
    _In_ DWORD dwProcessId,
    _Out_ ORIENTATION_PREFERENCE *pOrientation,
    _Out_ BOOL *fRotateScreen);
WINUSERAPI
BOOL
WINAPI
SetDisplayAutoRotationPreferences(
    _In_ ORIENTATION_PREFERENCE orientation);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
WINUSERAPI
BOOL
WINAPI
IsImmersiveProcess(
    _In_ HANDLE hProcess);
WINUSERAPI
BOOL
WINAPI
SetProcessRestrictionExemption(
    _In_ BOOL fEnableExemption);
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
}
