#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
#pragma warning(disable:4201)
typedef struct _OPTPARAM {
    WORD cbSize;
    BYTE Flags;
    BYTE Style;
    LPTSTR pData;
    ULONG_PTR IconID;
    LPARAM lParam;
    ULONG_PTR dwReserved[2];
    } OPTPARAM, *POPTPARAM;
typedef struct _OPTCOMBO {
    WORD cbSize;
    BYTE Flags;
    WORD cListItem;
    POPTPARAM pListItem;
    LONG Sel;
    DWORD dwReserved[3];
} OPTCOMBO, *POPTCOMBO;
typedef struct _OPTTYPE {
    WORD cbSize;
    BYTE Type;
    BYTE Flags;
    WORD Count;
    WORD BegCtrlID;
    POPTPARAM pOptParam;
    WORD Style;
    WORD wReserved[3];
    ULONG_PTR dwReserved[3];
} OPTTYPE, *POPTTYPE;
typedef struct _EXTPUSH {
    WORD cbSize;
    WORD Flags;
    LPTSTR pTitle;
    union {
        DLGPROC DlgProc;
        FARPROC pfnCallBack;
        } DUMMYUNIONNAME;
    ULONG_PTR IconID;
    union {
        WORD DlgTemplateID;
        HANDLE hDlgTemplate;
        } DUMMYUNIONNAME;
    ULONG_PTR dwReserved[3];
    } EXTPUSH, *PEXTPUSH;
typedef struct _EXTCHKBOX {
    WORD cbSize;
    WORD Flags;
    LPTSTR pTitle;
    LPTSTR pSeparator;
    LPTSTR pCheckedName;
    ULONG_PTR IconID;
    WORD wReserved[4];
    ULONG_PTR dwReserved[2];
    } EXTCHKBOX, *PEXTCHKBOX;
                                           MAKE_DMPUB_HIDEBIT(DMPub))
typedef struct _OIEXT {
    WORD cbSize;
    WORD Flags;
    HINSTANCE hInstCaller;
    LPTSTR pHelpFile;
    ULONG_PTR dwReserved[4];
    } OIEXT, *POIEXT;
typedef struct _OPTITEM {
    WORD cbSize;
    BYTE Level;
    BYTE DlgPageIdx;
    DWORD Flags;
    ULONG_PTR UserData;
    LPTSTR pName;
    union {
        LONG Sel;
        LPTSTR pSel;
        } DUMMYUNIONNAME;
    union {
        PEXTCHKBOX pExtChkBox;
        PEXTPUSH pExtPush;
        } DUMMYUNIONNAME2;
    POPTTYPE pOptType;
    DWORD HelpIndex;
    BYTE DMPubID;
    BYTE UserItemID;
    WORD wReserved;
    POIEXT pOIExt;
    ULONG_PTR dwReserved[3];
    } OPTITEM, *POPTITEM;
typedef struct _CPSUICBPARAM {
    WORD cbSize;
    WORD Reason;
    HWND hDlg;
    POPTITEM pOptItem;
    WORD cOptItem;
    WORD Flags;
    POPTITEM pCurItem;
    union {
        LONG OldSel;
        LPTSTR pOldSel;
        } DUMMYUNIONNAME;
    ULONG_PTR UserData;
    ULONG_PTR Result;
    } CPSUICBPARAM, *PCPSUICBPARAM;
typedef LONG (APIENTRY *_CPSUICALLBACK)(PCPSUICBPARAM pCPSUICBParam);
typedef struct _DLGPAGE {
    WORD cbSize;
    WORD Flags;
    DLGPROC DlgProc;
    LPTSTR pTabName;
    ULONG_PTR IconID;
    union {
        WORD DlgTemplateID;
        HANDLE hDlgTemplate;
        } DUMMYUNIONNAME;
    } DLGPAGE, *PDLGPAGE;
typedef struct _COMPROPSHEETUI {
    WORD cbSize;
    WORD Flags;
    HINSTANCE hInstCaller;
    LPTSTR pCallerName;
    ULONG_PTR UserData;
    LPTSTR pHelpFile;
    _CPSUICALLBACK pfnCallBack;
    POPTITEM pOptItem;
    PDLGPAGE pDlgPage;
    WORD cOptItem;
    WORD cDlgPage;
    ULONG_PTR IconID;
    LPTSTR pOptItemName;
    WORD CallerVersion;
    WORD OptItemVersion;
    ULONG_PTR dwReserved[4];
    } COMPROPSHEETUI, *PCOMPROPSHEETUI;
typedef struct _SETRESULT_INFO {
    WORD cbSize;
    WORD wReserved;
    HANDLE hSetResult;
    LRESULT Result;
    } SETRESULT_INFO, *PSETRESULT_INFO;
typedef struct _INSERTPSUIPAGE_INFO {
    WORD cbSize;
    BYTE Type;
    BYTE Mode;
    ULONG_PTR dwData1;
    ULONG_PTR dwData2;
    ULONG_PTR dwData3;
    } INSERTPSUIPAGE_INFO, *PINSERTPSUIPAGE_INFO;
typedef LONG_PTR (CALLBACK *PFNCOMPROPSHEET)(HANDLE hComPropSheet,
                                             UINT Function,
                                             LPARAM lParam1,
                                             LPARAM lParam2);
typedef struct _PSPINFO {
    WORD cbSize;
    WORD wReserved;
    HANDLE hComPropSheet;
    HANDLE hCPSUIPage;
    PFNCOMPROPSHEET pfnComPropSheet;
    } PSPINFO, *PPSPINFO;
                (PPSPINFO)((LPBYTE)lParam + ((LPPROPSHEETPAGE)lParam)->dwSize)
typedef struct _CPSUIDATABLOCK {
    DWORD cbData;
    LPBYTE pbData;
    } CPSUIDATABLOCK, *PCPSUIDATABLOCK;
typedef struct _PROPSHEETUI_INFO {
    WORD cbSize;
    WORD Version;
    WORD Flags;
    WORD Reason;
    HANDLE hComPropSheet;
    PFNCOMPROPSHEET pfnComPropSheet;
    LPARAM lParamInit;
    ULONG_PTR UserData;
    ULONG_PTR Result;
    } PROPSHEETUI_INFO, *PPROPSHEETUI_INFO;
typedef struct _PROPSHEETUI_GETICON_INFO {
    WORD cbSize;
    WORD Flags;
    WORD cxIcon;
    WORD cyIcon;
    HICON hIcon;
    } PROPSHEETUI_GETICON_INFO, *PPROPSHEETUI_GETICON_INFO;
typedef LONG (FAR WINAPI *PFNPROPSHEETUI)(PPROPSHEETUI_INFO pPSUIInfo,
                                   LPARAM lParam);
typedef struct _PROPSHEETUI_INFO_HEADER {
    WORD cbSize;
    WORD Flags;
    LPTSTR pTitle;
    HWND hWndParent;
    HINSTANCE hInst;
    union {
        HICON hIcon;
        ULONG_PTR IconID;
        } DUMMYUNIONNAME;
    } PROPSHEETUI_INFO_HEADER, *PPROPSHEETUI_INFO_HEADER;
LONG
APIENTRY
CommonPropertySheetUIA(
    HWND hWndOwner,
    __callback PFNPROPSHEETUI pfnPropSheetUI,
    LPARAM lParam,
    _Out_opt_ LPDWORD pResult
    );
LONG
APIENTRY
CommonPropertySheetUIW(
    HWND hWndOwner,
    __callback PFNPROPSHEETUI pfnPropSheetUI,
    LPARAM lParam,
    _Out_opt_ LPDWORD pResult
    );
ULONG_PTR
APIENTRY
GetCPSUIUserData(
    HWND hDlg
    );
BOOL
APIENTRY
SetCPSUIUserData(
    HWND hDlg,
    ULONG_PTR CPSUIUserData
    );
}
#endif
#pragma endregion
