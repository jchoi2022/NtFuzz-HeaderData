#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern "C" {
            (HHWIN_BUTTON_EXPAND | \
             HHWIN_BUTTON_BACK | \
             HHWIN_BUTTON_OPTIONS | \
             HHWIN_BUTTON_PRINT)
typedef struct tagHHN_NOTIFY
{
    NMHDR hdr;
    PCSTR pszUrl;
} HHN_NOTIFY;
typedef struct tagHH_POPUP
{
    int cbStruct;
    HINSTANCE hinst;
    UINT idString;
    LPCTSTR pszText;
    POINT pt;
    COLORREF clrForeground;
    COLORREF clrBackground;
    RECT rcMargins;
    LPCTSTR pszFont;
} HH_POPUP;
typedef struct tagHH_AKLINK
{
    int cbStruct;
    BOOL fReserved;
    LPCTSTR pszKeywords;
    LPCTSTR pszUrl;
    LPCTSTR pszMsgText;
    LPCTSTR pszMsgTitle;
    LPCTSTR pszWindow;
    BOOL fIndexOnFail;
} HH_AKLINK;
enum {
    HHWIN_NAVTYPE_TOC,
    HHWIN_NAVTYPE_INDEX,
    HHWIN_NAVTYPE_SEARCH,
    HHWIN_NAVTYPE_FAVORITES,
    HHWIN_NAVTYPE_HISTORY,
    HHWIN_NAVTYPE_AUTHOR,
    HHWIN_NAVTYPE_CUSTOM_FIRST = 11
};
enum {
    IT_INCLUSIVE,
    IT_EXCLUSIVE,
    IT_HIDDEN,
};
typedef struct tagHH_ENUM_IT
{
    int cbStruct;
    int iType;
    LPCSTR pszCatName;
    LPCSTR pszITName;
    LPCSTR pszITDescription;
} HH_ENUM_IT, *PHH_ENUM_IT;
typedef struct tagHH_ENUM_CAT
{
    int cbStruct;
    LPCSTR pszCatName;
    LPCSTR pszCatDescription;
} HH_ENUM_CAT, *PHH_ENUM_CAT;
typedef struct tagHH_SET_INFOTYPE
{
    int cbStruct;
    LPCSTR pszCatName;
    LPCSTR pszInfoTypeName;
} HH_SET_INFOTYPE, *PHH_SET_INFOTYPE;
typedef DWORD HH_INFOTYPE;
typedef HH_INFOTYPE* PHH_INFOTYPE;
enum {
    HHWIN_NAVTAB_TOP,
    HHWIN_NAVTAB_LEFT,
    HHWIN_NAVTAB_BOTTOM,
};
enum {
    HH_TAB_CONTENTS,
    HH_TAB_INDEX,
    HH_TAB_SEARCH,
    HH_TAB_FAVORITES,
    HH_TAB_HISTORY,
    HH_TAB_AUTHOR,
    HH_TAB_CUSTOM_FIRST = 11,
    HH_TAB_CUSTOM_LAST = HH_MAX_TABS
};
typedef struct tagHH_FTS_QUERY
{
    int cbStruct;
    BOOL fUniCodeStrings;
    LPCTSTR pszSearchQuery;
    LONG iProximity;
    BOOL fStemmedSearch;
    BOOL fTitleOnly;
    BOOL fExecute;
    LPCTSTR pszWindow;
} HH_FTS_QUERY;
typedef struct tagHH_WINTYPE {
    int cbStruct;
    BOOL fUniCodeStrings;
    LPCTSTR pszType;
    DWORD fsValidMembers;
    DWORD fsWinProperties;
    LPCTSTR pszCaption;
    DWORD dwStyles;
    DWORD dwExStyles;
    RECT rcWindowPos;
    int nShowState;
    HWND hwndHelp;
    HWND hwndCaller;
    HH_INFOTYPE* paInfoTypes;
    HWND hwndToolBar;
    HWND hwndNavigation;
    HWND hwndHTML;
    int iNavWidth;
    RECT rcHTML;
    LPCTSTR pszToc;
    LPCTSTR pszIndex;
    LPCTSTR pszFile;
    LPCTSTR pszHome;
    DWORD fsToolBarFlags;
    BOOL fNotExpanded;
    int curNavType;
    int tabpos;
    int idNotify;
    BYTE tabOrder[HH_MAX_TABS + 1];
    int cHistory;
    LPCTSTR pszJump1;
    LPCTSTR pszJump2;
    LPCTSTR pszUrlJump1;
    LPCTSTR pszUrlJump2;
    RECT rcMinSize;
    int cbInfoTypes;
    LPCTSTR pszCustomTabs;
} HH_WINTYPE, *PHH_WINTYPE;
enum {
    HHACT_TAB_CONTENTS,
    HHACT_TAB_INDEX,
    HHACT_TAB_SEARCH,
    HHACT_TAB_HISTORY,
    HHACT_TAB_FAVORITES,
    HHACT_EXPAND,
    HHACT_CONTRACT,
    HHACT_BACK,
    HHACT_FORWARD,
    HHACT_STOP,
    HHACT_REFRESH,
    HHACT_HOME,
    HHACT_SYNC,
    HHACT_OPTIONS,
    HHACT_PRINT,
    HHACT_HIGHLIGHT,
    HHACT_CUSTOMIZE,
    HHACT_JUMP1,
    HHACT_JUMP2,
    HHACT_ZOOM,
    HHACT_TOC_NEXT,
    HHACT_TOC_PREV,
    HHACT_NOTES,
    HHACT_LAST_ENUM,
};
typedef struct tagHHNTRACK
{
    NMHDR hdr;
    PCSTR pszCurUrl;
    int idAction;
    HH_WINTYPE* phhWinType;
} HHNTRACK;
HWND
WINAPI
HtmlHelpA(
    _In_opt_ HWND hwndCaller,
    _In_ LPCSTR pszFile,
    _In_ UINT uCommand,
    _In_ DWORD_PTR dwData
    );
HWND
WINAPI
HtmlHelpW(
    _In_opt_ HWND hwndCaller,
    _In_ LPCWSTR pszFile,
    _In_ UINT uCommand,
    _In_ DWORD_PTR dwData
    );
typedef enum tagHH_GPROPID
{
    HH_GPROPID_SINGLETHREAD=1,
    HH_GPROPID_TOOLBAR_MARGIN=2,
    HH_GPROPID_UI_LANGUAGE=3,
    HH_GPROPID_CURRENT_SUBSET=4,
    HH_GPROPID_CONTENT_LANGUAGE=5
} HH_GPROPID;
#pragma pack(push, 8)
typedef struct tagHH_GLOBAL_PROPERTY
{
    HH_GPROPID id;
    VARIANT var;
} HH_GLOBAL_PROPERTY ;
#pragma pack(pop)
}
#endif
#pragma endregion
