#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IComponentData IComponentData;
typedef interface IComponent IComponent;
typedef interface IResultDataCompare IResultDataCompare;
typedef interface IResultOwnerData IResultOwnerData;
typedef interface IConsole IConsole;
typedef interface IHeaderCtrl IHeaderCtrl;
typedef interface IContextMenuCallback IContextMenuCallback;
typedef interface IContextMenuProvider IContextMenuProvider;
typedef interface IExtendContextMenu IExtendContextMenu;
typedef interface IImageList IImageList;
typedef interface IResultData IResultData;
typedef interface IConsoleNameSpace IConsoleNameSpace;
typedef interface IConsoleNameSpace2 IConsoleNameSpace2;
typedef interface IPropertySheetCallback IPropertySheetCallback;
typedef interface IPropertySheetProvider IPropertySheetProvider;
typedef interface IExtendPropertySheet IExtendPropertySheet;
typedef interface IControlbar IControlbar;
typedef interface IExtendControlbar IExtendControlbar;
typedef interface IToolbar IToolbar;
typedef interface IConsoleVerb IConsoleVerb;
typedef interface ISnapinAbout ISnapinAbout;
typedef interface IMenuButton IMenuButton;
typedef interface ISnapinHelp ISnapinHelp;
typedef interface IExtendPropertySheet2 IExtendPropertySheet2;
typedef interface IHeaderCtrl2 IHeaderCtrl2;
typedef interface ISnapinHelp2 ISnapinHelp2;
typedef interface IEnumTASK IEnumTASK;
typedef interface IExtendTaskPad IExtendTaskPad;
typedef interface IConsole2 IConsole2;
typedef interface IDisplayHelp IDisplayHelp;
typedef interface IRequiredExtensions IRequiredExtensions;
typedef interface IStringTable IStringTable;
typedef interface IColumnData IColumnData;
typedef interface IMessageView IMessageView;
typedef interface IResultDataCompareEx IResultDataCompareEx;
typedef interface IComponentData2 IComponentData2;
typedef interface IComponent2 IComponent2;
typedef interface IContextMenuCallback2 IContextMenuCallback2;
typedef interface IMMCVersionInfo IMMCVersionInfo;
typedef class MMCVersionInfo MMCVersionInfo;
typedef class ConsolePower ConsolePower;
typedef interface IExtendView IExtendView;
typedef interface IViewExtensionCallback IViewExtensionCallback;
typedef interface IConsolePower IConsolePower;
typedef interface IConsolePowerSink IConsolePowerSink;
typedef interface INodeProperties INodeProperties;
typedef interface IConsole3 IConsole3;
typedef interface IResultData2 IResultData2;
#include "basetsd.h"
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef IConsole *LPCONSOLE;
typedef IHeaderCtrl *LPHEADERCTRL;
typedef IToolbar *LPTOOLBAR;
typedef IImageList *LPIMAGELIST;
typedef IResultData *LPRESULTDATA;
typedef IConsoleNameSpace *LPCONSOLENAMESPACE;
typedef IPropertySheetProvider *LPPROPERTYSHEETPROVIDER;
typedef IPropertySheetCallback *LPPROPERTYSHEETCALLBACK;
typedef IContextMenuProvider *LPCONTEXTMENUPROVIDER;
typedef IContextMenuCallback *LPCONTEXTMENUCALLBACK;
typedef IControlbar *LPCONTROLBAR;
typedef IConsoleVerb *LPCONSOLEVERB;
typedef IMenuButton *LPMENUBUTTON;
typedef IConsole2 *LPCONSOLE2;
typedef IHeaderCtrl2 *LPHEADERCTRL2;
typedef IConsoleNameSpace2 *LPCONSOLENAMESPACE2;
typedef IDisplayHelp *LPDISPLAYHELP;
typedef IStringTable *LPSTRINGTABLE;
typedef IColumnData *LPCOLUMNDATA;
typedef IResultDataCompareEx *LPRESULTDATACOMPAREEX;
typedef IComponent *LPCOMPONENT;
typedef IComponentData *LPCOMPONENTDATA;
typedef IExtendPropertySheet *LPEXTENDPROPERTYSHEET;
typedef IExtendContextMenu *LPEXTENDCONTEXTMENU;
typedef IExtendControlbar *LPEXTENDCONTROLBAR;
typedef IResultDataCompare *LPRESULTDATACOMPARE;
typedef IResultOwnerData *LPRESULTOWNERDATA;
typedef ISnapinAbout *LPSNAPABOUT;
typedef ISnapinAbout *LPSNAPINABOUT;
typedef ISnapinHelp *LPSNAPHELP;
typedef ISnapinHelp *LPSNAPINHELP;
typedef IEnumTASK *LPENUMTASK;
typedef IExtendPropertySheet2 *LPEXTENDPROPERTYSHEET2;
typedef ISnapinHelp2 *LPSNAPINHELP2;
typedef IExtendTaskPad *LPEXTENDTASKPAD;
typedef IRequiredExtensions *LPREQUIREDEXTENSIONS;
typedef IComponent2 *LPCOMPONENT2;
typedef IComponentData2 *LPCOMPONENTDATA2;
typedef IExtendView *LPEXTENDVIEW;
typedef IViewExtensionCallback *LPVIEWEXTENSIONCALLBACK;
typedef IConsolePower *LPCONSOLEPOWER;
typedef IConsolePowerSink *LPCONSOLEPOWERSINK;
typedef IConsole3 *LPCONSOLE3;
typedef INodeProperties *LPNODEPROPERTIES;
typedef IResultData2 *LPRESULTDATA2;
typedef BSTR *PBSTR;
static LPOLESTR MMC_CALLBACK = ( LPOLESTR )-1;
typedef LONG_PTR HSCOPEITEM;
typedef long COMPONENTID;
typedef LONG_PTR HRESULTITEM;
typedef enum _MMC_RESULT_VIEW_STYLE
{
    MMC_SINGLESEL = 0x0001,
    MMC_SHOWSELALWAYS = 0x0002,
    MMC_NOSORTHEADER = 0x0004,
    MMC_ENSUREFOCUSVISIBLE = 0x0008
} MMC_RESULT_VIEW_STYLE;
#if 0
typedef
enum _MMC_RESULT_VIEW_STYLE
    {
        _MMC_VIEW_STYLE__dummy_ = 0
    } MMC_RESULT_VIEW_STYLE;
#endif
typedef
enum _MMC_CONTROL_TYPE
    {
        TOOLBAR = 0,
        MENUBUTTON = ( TOOLBAR + 1 ) ,
        COMBOBOXBAR = ( MENUBUTTON + 1 )
    } MMC_CONTROL_TYPE;
typedef enum _MMC_CONSOLE_VERB
{
    MMC_VERB_NONE = 0x0000,
    MMC_VERB_OPEN = 0x8000,
    MMC_VERB_COPY = 0x8001,
    MMC_VERB_PASTE = 0x8002,
    MMC_VERB_DELETE = 0x8003,
    MMC_VERB_PROPERTIES = 0x8004,
    MMC_VERB_RENAME = 0x8005,
    MMC_VERB_REFRESH = 0x8006,
    MMC_VERB_PRINT = 0x8007,
    MMC_VERB_CUT = 0x8008,
    MMC_VERB_MAX,
    MMC_VERB_FIRST = MMC_VERB_OPEN,
    MMC_VERB_LAST = MMC_VERB_MAX - 1
} MMC_CONSOLE_VERB;
#if 0
typedef
enum _MMC_CONSOLE_VERB
    {
        MMC_VERB__dummy_ = 0
    } MMC_CONSOLE_VERB;
#endif
#include <pshpack8.h>
typedef struct _MMCButton
    {
    int nBitmap;
    int idCommand;
    BYTE fsState;
    BYTE fsType;
    LPOLESTR lpButtonText;
    LPOLESTR lpTooltipText;
    } MMCBUTTON;
#include <poppack.h>
typedef MMCBUTTON *LPMMCBUTTON;
typedef
enum _MMC_BUTTON_STATE
    {
        ENABLED = 0x1,
        CHECKED = 0x2,
        HIDDEN = 0x4,
        INDETERMINATE = 0x8,
        BUTTONPRESSED = 0x10
    } MMC_BUTTON_STATE;
typedef struct _RESULTDATAITEM
    {
    DWORD mask;
    BOOL bScopeItem;
    HRESULTITEM itemID;
    int nIndex;
    int nCol;
    LPOLESTR str;
    int nImage;
    UINT nState;
    LPARAM lParam;
    int iIndent;
    } RESULTDATAITEM;
typedef RESULTDATAITEM *LPRESULTDATAITEM;
typedef struct _RESULTFINDINFO
    {
    LPOLESTR psz;
    int nStart;
    DWORD dwOptions;
    } RESULTFINDINFO;
typedef RESULTFINDINFO *LPRESULTFINDINFO;
typedef struct _SCOPEDATAITEM
    {
    DWORD mask;
    LPOLESTR displayname;
    int nImage;
    int nOpenImage;
    UINT nState;
    int cChildren;
    LPARAM lParam;
    HSCOPEITEM relativeID;
    HSCOPEITEM ID;
    } SCOPEDATAITEM;
typedef SCOPEDATAITEM *LPSCOPEDATAITEM;
typedef
enum _MMC_SCOPE_ITEM_STATE
    {
        MMC_SCOPE_ITEM_STATE_NORMAL = 0x1,
        MMC_SCOPE_ITEM_STATE_BOLD = 0x2,
        MMC_SCOPE_ITEM_STATE_EXPANDEDONCE = 0x3
    } MMC_SCOPE_ITEM_STATE;
typedef struct _CONTEXTMENUITEM
    {
    LPWSTR strName;
    LPWSTR strStatusBarText;
    LONG lCommandID;
    LONG lInsertionPointID;
    LONG fFlags;
    LONG fSpecialFlags;
    } CONTEXTMENUITEM;
typedef CONTEXTMENUITEM *LPCONTEXTMENUITEM;
typedef
enum _MMC_MENU_COMMAND_IDS
    {
        MMCC_STANDARD_VIEW_SELECT = -1
    } MMC_MENU_COMMAND_IDS;
typedef struct _MENUBUTTONDATA
    {
    int idCommand;
    int x;
    int y;
    } MENUBUTTONDATA;
typedef MENUBUTTONDATA *LPMENUBUTTONDATA;
typedef LONG_PTR MMC_COOKIE;
typedef
enum _MMC_FILTER_TYPE
    {
        MMC_STRING_FILTER = 0,
        MMC_INT_FILTER = 0x1,
        MMC_FILTER_NOVALUE = 0x8000
    } MMC_FILTER_TYPE;
typedef struct _MMC_FILTERDATA
    {
    LPOLESTR pszText;
    INT cchTextMax;
    LONG lValue;
    } MMC_FILTERDATA;
typedef
enum _MMC_FILTER_CHANGE_CODE
    {
        MFCC_DISABLE = 0,
        MFCC_ENABLE = 1,
        MFCC_VALUE_CHANGE = 2
    } MMC_FILTER_CHANGE_CODE;
typedef struct _MMC_RESTORE_VIEW
    {
    DWORD dwSize;
    MMC_COOKIE cookie;
    LPOLESTR pViewType;
    long lViewOptions;
    } MMC_RESTORE_VIEW;
typedef struct _MMC_EXPANDSYNC_STRUCT
    {
    BOOL bHandled;
    BOOL bExpanding;
    HSCOPEITEM hItem;
    } MMC_EXPANDSYNC_STRUCT;
typedef struct _MMC_VISIBLE_COLUMNS
    {
    INT nVisibleColumns;
    INT rgVisibleCols[ 1 ];
    } MMC_VISIBLE_COLUMNS;
typedef enum _MMC_NOTIFY_TYPE
{
    MMCN_ACTIVATE = 0x8001,
    MMCN_ADD_IMAGES = 0x8002,
    MMCN_BTN_CLICK = 0x8003,
    MMCN_CLICK = 0x8004,
    MMCN_COLUMN_CLICK = 0x8005,
    MMCN_CONTEXTMENU = 0x8006,
    MMCN_CUTORMOVE = 0x8007,
    MMCN_DBLCLICK = 0x8008,
    MMCN_DELETE = 0x8009,
    MMCN_DESELECT_ALL = 0x800A,
    MMCN_EXPAND = 0x800B,
    MMCN_HELP = 0x800C,
    MMCN_MENU_BTNCLICK = 0x800D,
    MMCN_MINIMIZED = 0x800E,
    MMCN_PASTE = 0x800F,
    MMCN_PROPERTY_CHANGE = 0x8010,
    MMCN_QUERY_PASTE = 0x8011,
    MMCN_REFRESH = 0x8012,
    MMCN_REMOVE_CHILDREN = 0x8013,
    MMCN_RENAME = 0x8014,
    MMCN_SELECT = 0x8015,
    MMCN_SHOW = 0x8016,
    MMCN_VIEW_CHANGE = 0x8017,
    MMCN_SNAPINHELP = 0x8018,
    MMCN_CONTEXTHELP = 0x8019,
    MMCN_INITOCX = 0x801A,
    MMCN_FILTER_CHANGE = 0x801B,
    MMCN_FILTERBTN_CLICK = 0x801C,
    MMCN_RESTORE_VIEW = 0x801D,
    MMCN_PRINT = 0x801E,
    MMCN_PRELOAD = 0x801F,
    MMCN_LISTPAD = 0x8020,
    MMCN_EXPANDSYNC = 0x8021,
    MMCN_COLUMNS_CHANGED = 0x8022,
    MMCN_CANPASTE_OUTOFPROC = 0x8023,
} MMC_NOTIFY_TYPE;
#if 0
typedef
enum _MMC_NOTIFY_TYPE
    {
        MMCN__dummy_ = 0
    } MMC_NOTIFY_TYPE;
#endif
typedef
enum _DATA_OBJECT_TYPES
    {
        CCT_SCOPE = 0x8000,
        CCT_RESULT = 0x8001,
        CCT_SNAPIN_MANAGER = 0x8002,
        CCT_UNINITIALIZED = 0xffff
    } DATA_OBJECT_TYPES;
typedef struct _SMMCDataObjects
    {
    DWORD count;
    LPDATAOBJECT lpDataObject[ 1 ];
    } SMMCDataObjects;
typedef struct _SMMCObjectTypes
    {
    DWORD count;
    GUID guid[ 1 ];
    } SMMCObjectTypes;
typedef SMMCObjectTypes SMMCDynamicExtensions;
typedef struct _SNodeID
    {
    DWORD cBytes;
    BYTE id[ 1 ];
    } SNodeID;
typedef struct _SNodeID2
    {
    DWORD dwFlags;
    DWORD cBytes;
    BYTE id[ 1 ];
    } SNodeID2;
typedef struct _SColumnSetID
    {
    DWORD dwFlags;
    DWORD cBytes;
    BYTE id[ 1 ];
    } SColumnSetID;
STDAPI MMCPropertyChangeNotify(LONG_PTR lNotifyHandle, LPARAM param);
#include <specstrings.h>
STDAPI MMCPropertyHelp(_In_ LPOLESTR pszHelpTopic);
STDAPI MMCFreeNotifyHandle(LONG_PTR lNotifyHandle);
STDAPI MMCPropPageCallback(void* vpsp);
EXTERN_C const CLSID CLSID_NodeManager;
EXTERN_C const CLSID CLSID_MessageView;
typedef void (STDAPICALLTYPE *PFNAfxManageStateCallback)();
STDAPI MMCAfxPropPageCallback(void* vpsp, PFNAfxManageStateCallback pfnManageStateCallback);
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IComponentData;
    typedef struct IComponentDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComponentData * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComponentData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComponentData * This);
                           HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IComponentData * This,
                       __RPC__in_opt LPUNKNOWN pUnknown);
                           HRESULT ( STDMETHODCALLTYPE *CreateComponent )(
            __RPC__in IComponentData * This,
                        __RPC__deref_out_opt LPCOMPONENT *ppComponent);
                           HRESULT ( STDMETHODCALLTYPE *Notify )(
            __RPC__in IComponentData * This,
                       __RPC__in_opt LPDATAOBJECT lpDataObject,
                       MMC_NOTIFY_TYPE event,
                       LPARAM arg,
                       LPARAM param);
                           HRESULT ( STDMETHODCALLTYPE *Destroy )(
            __RPC__in IComponentData * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryDataObject )(
            __RPC__in IComponentData * This,
                       MMC_COOKIE cookie,
                       DATA_OBJECT_TYPES type,
                        __RPC__deref_out_opt LPDATAOBJECT *ppDataObject);
                           HRESULT ( STDMETHODCALLTYPE *GetDisplayInfo )(
            __RPC__in IComponentData * This,
                            __RPC__inout SCOPEDATAITEM *pScopeDataItem);
                           HRESULT ( STDMETHODCALLTYPE *CompareObjects )(
            __RPC__in IComponentData * This,
                       __RPC__in_opt LPDATAOBJECT lpDataObjectA,
                       __RPC__in_opt LPDATAOBJECT lpDataObjectB);
        END_INTERFACE
    } IComponentDataVtbl;
    interface IComponentData
    {
        CONST_VTBL struct IComponentDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pUnknown) )
    ( (This)->lpVtbl -> CreateComponent(This,ppComponent) )
    ( (This)->lpVtbl -> Notify(This,lpDataObject,event,arg,param) )
    ( (This)->lpVtbl -> Destroy(This) )
    ( (This)->lpVtbl -> QueryDataObject(This,cookie,type,ppDataObject) )
    ( (This)->lpVtbl -> GetDisplayInfo(This,pScopeDataItem) )
    ( (This)->lpVtbl -> CompareObjects(This,lpDataObjectA,lpDataObjectB) )
EXTERN_C const IID IID_IComponent;
    typedef struct IComponentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComponent * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComponent * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComponent * This);
                           HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IComponent * This,
                       __RPC__in_opt LPCONSOLE lpConsole);
                           HRESULT ( STDMETHODCALLTYPE *Notify )(
            __RPC__in IComponent * This,
                       __RPC__in_opt LPDATAOBJECT lpDataObject,
                       MMC_NOTIFY_TYPE event,
                       LPARAM arg,
                       LPARAM param);
                           HRESULT ( STDMETHODCALLTYPE *Destroy )(
            __RPC__in IComponent * This,
                       MMC_COOKIE cookie);
                           HRESULT ( STDMETHODCALLTYPE *QueryDataObject )(
            __RPC__in IComponent * This,
                       MMC_COOKIE cookie,
                       DATA_OBJECT_TYPES type,
                        __RPC__deref_out_opt LPDATAOBJECT *ppDataObject);
                           HRESULT ( STDMETHODCALLTYPE *GetResultViewType )(
            __RPC__in IComponent * This,
                       MMC_COOKIE cookie,
                        __RPC__deref_out_opt LPOLESTR *ppViewType,
                        __RPC__out long *pViewOptions);
                           HRESULT ( STDMETHODCALLTYPE *GetDisplayInfo )(
            __RPC__in IComponent * This,
                            __RPC__inout RESULTDATAITEM *pResultDataItem);
                           HRESULT ( STDMETHODCALLTYPE *CompareObjects )(
            __RPC__in IComponent * This,
                       __RPC__in_opt LPDATAOBJECT lpDataObjectA,
                       __RPC__in_opt LPDATAOBJECT lpDataObjectB);
        END_INTERFACE
    } IComponentVtbl;
    interface IComponent
    {
        CONST_VTBL struct IComponentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,lpConsole) )
    ( (This)->lpVtbl -> Notify(This,lpDataObject,event,arg,param) )
    ( (This)->lpVtbl -> Destroy(This,cookie) )
    ( (This)->lpVtbl -> QueryDataObject(This,cookie,type,ppDataObject) )
    ( (This)->lpVtbl -> GetResultViewType(This,cookie,ppViewType,pViewOptions) )
    ( (This)->lpVtbl -> GetDisplayInfo(This,pResultDataItem) )
    ( (This)->lpVtbl -> CompareObjects(This,lpDataObjectA,lpDataObjectB) )
EXTERN_C const IID IID_IResultDataCompare;
    typedef struct IResultDataCompareVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IResultDataCompare * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IResultDataCompare * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IResultDataCompare * This);
                           HRESULT ( STDMETHODCALLTYPE *Compare )(
            __RPC__in IResultDataCompare * This,
                       LPARAM lUserParam,
                       MMC_COOKIE cookieA,
                       MMC_COOKIE cookieB,
                            __RPC__inout int *pnResult);
        END_INTERFACE
    } IResultDataCompareVtbl;
    interface IResultDataCompare
    {
        CONST_VTBL struct IResultDataCompareVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Compare(This,lUserParam,cookieA,cookieB,pnResult) )
EXTERN_C const IID IID_IResultOwnerData;
    typedef struct IResultOwnerDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IResultOwnerData * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IResultOwnerData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IResultOwnerData * This);
                           HRESULT ( STDMETHODCALLTYPE *FindItem )(
            __RPC__in IResultOwnerData * This,
                       __RPC__in LPRESULTFINDINFO pFindInfo,
                        __RPC__out int *pnFoundIndex);
                           HRESULT ( STDMETHODCALLTYPE *CacheHint )(
            __RPC__in IResultOwnerData * This,
                       int nStartIndex,
                       int nEndIndex);
                           HRESULT ( STDMETHODCALLTYPE *SortItems )(
            __RPC__in IResultOwnerData * This,
                       int nColumn,
                       DWORD dwSortOptions,
                       LPARAM lUserParam);
        END_INTERFACE
    } IResultOwnerDataVtbl;
    interface IResultOwnerData
    {
        CONST_VTBL struct IResultOwnerDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindItem(This,pFindInfo,pnFoundIndex) )
    ( (This)->lpVtbl -> CacheHint(This,nStartIndex,nEndIndex) )
    ( (This)->lpVtbl -> SortItems(This,nColumn,dwSortOptions,lUserParam) )
EXTERN_C const IID IID_IConsole;
    typedef struct IConsoleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IConsole * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IConsole * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IConsole * This);
                           HRESULT ( STDMETHODCALLTYPE *SetHeader )(
            __RPC__in IConsole * This,
                       __RPC__in_opt LPHEADERCTRL pHeader);
                           HRESULT ( STDMETHODCALLTYPE *SetToolbar )(
            __RPC__in IConsole * This,
                       __RPC__in_opt LPTOOLBAR pToolbar);
                           HRESULT ( STDMETHODCALLTYPE *QueryResultView )(
            __RPC__in IConsole * This,
                        __RPC__deref_out_opt LPUNKNOWN *pUnknown);
                           HRESULT ( STDMETHODCALLTYPE *QueryScopeImageList )(
            __RPC__in IConsole * This,
                        __RPC__deref_out_opt LPIMAGELIST *ppImageList);
                           HRESULT ( STDMETHODCALLTYPE *QueryResultImageList )(
            __RPC__in IConsole * This,
                        __RPC__deref_out_opt LPIMAGELIST *ppImageList);
                           HRESULT ( STDMETHODCALLTYPE *UpdateAllViews )(
            __RPC__in IConsole * This,
                       __RPC__in_opt LPDATAOBJECT lpDataObject,
                       LPARAM data,
                       LONG_PTR hint);
                           HRESULT ( STDMETHODCALLTYPE *MessageBox )(
            __RPC__in IConsole * This,
                       __RPC__in LPCWSTR lpszText,
                       __RPC__in LPCWSTR lpszTitle,
                       UINT fuStyle,
                        __RPC__out int *piRetval);
                           HRESULT ( STDMETHODCALLTYPE *QueryConsoleVerb )(
            __RPC__in IConsole * This,
                        __RPC__deref_out_opt LPCONSOLEVERB *ppConsoleVerb);
                           HRESULT ( STDMETHODCALLTYPE *SelectScopeItem )(
            __RPC__in IConsole * This,
                       HSCOPEITEM hScopeItem);
                           HRESULT ( STDMETHODCALLTYPE *GetMainWindow )(
            __RPC__in IConsole * This,
                        __RPC__deref_out_opt HWND *phwnd);
                           HRESULT ( STDMETHODCALLTYPE *NewWindow )(
            __RPC__in IConsole * This,
                       HSCOPEITEM hScopeItem,
                       unsigned long lOptions);
        END_INTERFACE
    } IConsoleVtbl;
    interface IConsole
    {
        CONST_VTBL struct IConsoleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetHeader(This,pHeader) )
    ( (This)->lpVtbl -> SetToolbar(This,pToolbar) )
    ( (This)->lpVtbl -> QueryResultView(This,pUnknown) )
    ( (This)->lpVtbl -> QueryScopeImageList(This,ppImageList) )
    ( (This)->lpVtbl -> QueryResultImageList(This,ppImageList) )
    ( (This)->lpVtbl -> UpdateAllViews(This,lpDataObject,data,hint) )
    ( (This)->lpVtbl -> MessageBox(This,lpszText,lpszTitle,fuStyle,piRetval) )
    ( (This)->lpVtbl -> QueryConsoleVerb(This,ppConsoleVerb) )
    ( (This)->lpVtbl -> SelectScopeItem(This,hScopeItem) )
    ( (This)->lpVtbl -> GetMainWindow(This,phwnd) )
    ( (This)->lpVtbl -> NewWindow(This,hScopeItem,lOptions) )
EXTERN_C const IID IID_IHeaderCtrl;
    typedef struct IHeaderCtrlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHeaderCtrl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHeaderCtrl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHeaderCtrl * This);
                           HRESULT ( STDMETHODCALLTYPE *InsertColumn )(
            __RPC__in IHeaderCtrl * This,
                       int nCol,
                       __RPC__in LPCWSTR title,
                       int nFormat,
                       int nWidth);
                           HRESULT ( STDMETHODCALLTYPE *DeleteColumn )(
            __RPC__in IHeaderCtrl * This,
                       int nCol);
                           HRESULT ( STDMETHODCALLTYPE *SetColumnText )(
            __RPC__in IHeaderCtrl * This,
                       int nCol,
                       __RPC__in LPCWSTR title);
                           HRESULT ( STDMETHODCALLTYPE *GetColumnText )(
            __RPC__in IHeaderCtrl * This,
                       int nCol,
                        __RPC__deref_out_opt LPOLESTR *pText);
                           HRESULT ( STDMETHODCALLTYPE *SetColumnWidth )(
            __RPC__in IHeaderCtrl * This,
                       int nCol,
                       int nWidth);
                           HRESULT ( STDMETHODCALLTYPE *GetColumnWidth )(
            __RPC__in IHeaderCtrl * This,
                       int nCol,
                        __RPC__out int *pWidth);
        END_INTERFACE
    } IHeaderCtrlVtbl;
    interface IHeaderCtrl
    {
        CONST_VTBL struct IHeaderCtrlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InsertColumn(This,nCol,title,nFormat,nWidth) )
    ( (This)->lpVtbl -> DeleteColumn(This,nCol) )
    ( (This)->lpVtbl -> SetColumnText(This,nCol,title) )
    ( (This)->lpVtbl -> GetColumnText(This,nCol,pText) )
    ( (This)->lpVtbl -> SetColumnWidth(This,nCol,nWidth) )
    ( (This)->lpVtbl -> GetColumnWidth(This,nCol,pWidth) )
enum __MIDL___MIDL_itf_mmc_0000_0006_0001
    {
        CCM_INSERTIONPOINTID_MASK_SPECIAL = 0xffff0000,
        CCM_INSERTIONPOINTID_MASK_SHARED = 0x80000000,
        CCM_INSERTIONPOINTID_MASK_CREATE_PRIMARY = 0x40000000,
        CCM_INSERTIONPOINTID_MASK_ADD_PRIMARY = 0x20000000,
        CCM_INSERTIONPOINTID_MASK_ADD_3RDPARTY = 0x10000000,
        CCM_INSERTIONPOINTID_MASK_RESERVED = 0xfff0000,
        CCM_INSERTIONPOINTID_MASK_FLAGINDEX = 0x1f,
        CCM_INSERTIONPOINTID_PRIMARY_TOP = 0xa0000000,
        CCM_INSERTIONPOINTID_PRIMARY_NEW = 0xa0000001,
        CCM_INSERTIONPOINTID_PRIMARY_TASK = 0xa0000002,
        CCM_INSERTIONPOINTID_PRIMARY_VIEW = 0xa0000003,
        CCM_INSERTIONPOINTID_PRIMARY_HELP = 0xa0000004,
        CCM_INSERTIONPOINTID_3RDPARTY_NEW = 0x90000001,
        CCM_INSERTIONPOINTID_3RDPARTY_TASK = 0x90000002,
        CCM_INSERTIONPOINTID_ROOT_MENU = 0x80000000
    } ;
enum __MIDL___MIDL_itf_mmc_0000_0006_0002
    {
        CCM_INSERTIONALLOWED_TOP = ( 1L << (( CCM_INSERTIONPOINTID_PRIMARY_TOP & CCM_INSERTIONPOINTID_MASK_FLAGINDEX ) ) ) ,
        CCM_INSERTIONALLOWED_NEW = ( 1L << (( CCM_INSERTIONPOINTID_PRIMARY_NEW & CCM_INSERTIONPOINTID_MASK_FLAGINDEX ) ) ) ,
        CCM_INSERTIONALLOWED_TASK = ( 1L << (( CCM_INSERTIONPOINTID_PRIMARY_TASK & CCM_INSERTIONPOINTID_MASK_FLAGINDEX ) ) ) ,
        CCM_INSERTIONALLOWED_VIEW = ( 1L << (( CCM_INSERTIONPOINTID_PRIMARY_VIEW & CCM_INSERTIONPOINTID_MASK_FLAGINDEX ) ) )
    } ;
enum __MIDL___MIDL_itf_mmc_0000_0006_0003
    {
        CCM_COMMANDID_MASK_RESERVED = 0xffff0000
    } ;
enum __MIDL___MIDL_itf_mmc_0000_0006_0004
    {
        CCM_SPECIAL_SEPARATOR = 0x1,
        CCM_SPECIAL_SUBMENU = 0x2,
        CCM_SPECIAL_DEFAULT_ITEM = 0x4,
        CCM_SPECIAL_INSERTION_POINT = 0x8,
        CCM_SPECIAL_TESTONLY = 0x10
    } ;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IContextMenuCallback;
    typedef struct IContextMenuCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContextMenuCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContextMenuCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContextMenuCallback * This);
                           HRESULT ( STDMETHODCALLTYPE *AddItem )(
            __RPC__in IContextMenuCallback * This,
                       __RPC__in CONTEXTMENUITEM *pItem);
        END_INTERFACE
    } IContextMenuCallbackVtbl;
    interface IContextMenuCallback
    {
        CONST_VTBL struct IContextMenuCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddItem(This,pItem) )
EXTERN_C const IID IID_IContextMenuProvider;
    typedef struct IContextMenuProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContextMenuProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContextMenuProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContextMenuProvider * This);
                           HRESULT ( STDMETHODCALLTYPE *AddItem )(
            __RPC__in IContextMenuProvider * This,
                       __RPC__in CONTEXTMENUITEM *pItem);
                           HRESULT ( STDMETHODCALLTYPE *EmptyMenuList )(
            __RPC__in IContextMenuProvider * This);
                           HRESULT ( STDMETHODCALLTYPE *AddPrimaryExtensionItems )(
            __RPC__in IContextMenuProvider * This,
                       __RPC__in_opt LPUNKNOWN piExtension,
                       __RPC__in_opt LPDATAOBJECT piDataObject);
                           HRESULT ( STDMETHODCALLTYPE *AddThirdPartyExtensionItems )(
            __RPC__in IContextMenuProvider * This,
                       __RPC__in_opt LPDATAOBJECT piDataObject);
                           HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )(
            __RPC__in IContextMenuProvider * This,
                       __RPC__in HWND hwndParent,
                       long xPos,
                       long yPos,
                                __RPC__out long *plSelected);
        END_INTERFACE
    } IContextMenuProviderVtbl;
    interface IContextMenuProvider
    {
        CONST_VTBL struct IContextMenuProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddItem(This,pItem) )
    ( (This)->lpVtbl -> EmptyMenuList(This) )
    ( (This)->lpVtbl -> AddPrimaryExtensionItems(This,piExtension,piDataObject) )
    ( (This)->lpVtbl -> AddThirdPartyExtensionItems(This,piDataObject) )
    ( (This)->lpVtbl -> ShowContextMenu(This,hwndParent,xPos,yPos,plSelected) )
EXTERN_C const IID IID_IExtendContextMenu;
    typedef struct IExtendContextMenuVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IExtendContextMenu * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IExtendContextMenu * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IExtendContextMenu * This);
                           HRESULT ( STDMETHODCALLTYPE *AddMenuItems )(
            __RPC__in IExtendContextMenu * This,
                       __RPC__in_opt LPDATAOBJECT piDataObject,
                       __RPC__in_opt LPCONTEXTMENUCALLBACK piCallback,
                            __RPC__inout long *pInsertionAllowed);
                           HRESULT ( STDMETHODCALLTYPE *Command )(
            __RPC__in IExtendContextMenu * This,
                       long lCommandID,
                       __RPC__in_opt LPDATAOBJECT piDataObject);
        END_INTERFACE
    } IExtendContextMenuVtbl;
    interface IExtendContextMenu
    {
        CONST_VTBL struct IExtendContextMenuVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddMenuItems(This,piDataObject,piCallback,pInsertionAllowed) )
    ( (This)->lpVtbl -> Command(This,lCommandID,piDataObject) )
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IImageList;
    typedef struct IImageListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IImageList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IImageList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IImageList * This);
                           HRESULT ( STDMETHODCALLTYPE *ImageListSetIcon )(
            __RPC__in IImageList * This,
                       __RPC__in LONG_PTR *pIcon,
                       long nLoc);
                           HRESULT ( STDMETHODCALLTYPE *ImageListSetStrip )(
            __RPC__in IImageList * This,
                       __RPC__in LONG_PTR *pBMapSm,
                       __RPC__in LONG_PTR *pBMapLg,
                       long nStartLoc,
                       COLORREF cMask);
        END_INTERFACE
    } IImageListVtbl;
    interface IImageList
    {
        CONST_VTBL struct IImageListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ImageListSetIcon(This,pIcon,nLoc) )
    ( (This)->lpVtbl -> ImageListSetStrip(This,pBMapSm,pBMapLg,nStartLoc,cMask) )
EXTERN_C const IID IID_IResultData;
    typedef struct IResultDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IResultData * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IResultData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IResultData * This);
                           HRESULT ( STDMETHODCALLTYPE *InsertItem )(
            __RPC__in IResultData * This,
                            __RPC__inout LPRESULTDATAITEM item);
                           HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in IResultData * This,
                       HRESULTITEM itemID,
                       int nCol);
                           HRESULT ( STDMETHODCALLTYPE *FindItemByLParam )(
            __RPC__in IResultData * This,
                       LPARAM lParam,
                        __RPC__out HRESULTITEM *pItemID);
                           HRESULT ( STDMETHODCALLTYPE *DeleteAllRsltItems )(
            __RPC__in IResultData * This);
                           HRESULT ( STDMETHODCALLTYPE *SetItem )(
            __RPC__in IResultData * This,
                       __RPC__in LPRESULTDATAITEM item);
                           HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IResultData * This,
                            __RPC__inout LPRESULTDATAITEM item);
                           HRESULT ( STDMETHODCALLTYPE *GetNextItem )(
            __RPC__in IResultData * This,
                            __RPC__inout LPRESULTDATAITEM item);
                           HRESULT ( STDMETHODCALLTYPE *ModifyItemState )(
            __RPC__in IResultData * This,
                       int nIndex,
                       HRESULTITEM itemID,
                       UINT uAdd,
                       UINT uRemove);
                           HRESULT ( STDMETHODCALLTYPE *ModifyViewStyle )(
            __RPC__in IResultData * This,
                       MMC_RESULT_VIEW_STYLE add,
                       MMC_RESULT_VIEW_STYLE remove);
                           HRESULT ( STDMETHODCALLTYPE *SetViewMode )(
            __RPC__in IResultData * This,
                       long lViewMode);
                           HRESULT ( STDMETHODCALLTYPE *GetViewMode )(
            __RPC__in IResultData * This,
                        __RPC__out long *lViewMode);
                           HRESULT ( STDMETHODCALLTYPE *UpdateItem )(
            __RPC__in IResultData * This,
                       HRESULTITEM itemID);
                           HRESULT ( STDMETHODCALLTYPE *Sort )(
            __RPC__in IResultData * This,
                       int nColumn,
                       DWORD dwSortOptions,
                       LPARAM lUserParam);
                           HRESULT ( STDMETHODCALLTYPE *SetDescBarText )(
            __RPC__in IResultData * This,
                       __RPC__in LPOLESTR DescText);
                           HRESULT ( STDMETHODCALLTYPE *SetItemCount )(
            __RPC__in IResultData * This,
                       int nItemCount,
                       DWORD dwOptions);
        END_INTERFACE
    } IResultDataVtbl;
    interface IResultData
    {
        CONST_VTBL struct IResultDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InsertItem(This,item) )
    ( (This)->lpVtbl -> DeleteItem(This,itemID,nCol) )
    ( (This)->lpVtbl -> FindItemByLParam(This,lParam,pItemID) )
    ( (This)->lpVtbl -> DeleteAllRsltItems(This) )
    ( (This)->lpVtbl -> SetItem(This,item) )
    ( (This)->lpVtbl -> GetItem(This,item) )
    ( (This)->lpVtbl -> GetNextItem(This,item) )
    ( (This)->lpVtbl -> ModifyItemState(This,nIndex,itemID,uAdd,uRemove) )
    ( (This)->lpVtbl -> ModifyViewStyle(This,add,remove) )
    ( (This)->lpVtbl -> SetViewMode(This,lViewMode) )
    ( (This)->lpVtbl -> GetViewMode(This,lViewMode) )
    ( (This)->lpVtbl -> UpdateItem(This,itemID) )
    ( (This)->lpVtbl -> Sort(This,nColumn,dwSortOptions,lUserParam) )
    ( (This)->lpVtbl -> SetDescBarText(This,DescText) )
    ( (This)->lpVtbl -> SetItemCount(This,nItemCount,dwOptions) )
EXTERN_C const IID IID_IConsoleNameSpace;
    typedef struct IConsoleNameSpaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IConsoleNameSpace * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IConsoleNameSpace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IConsoleNameSpace * This);
                           HRESULT ( STDMETHODCALLTYPE *InsertItem )(
            __RPC__in IConsoleNameSpace * This,
                            __RPC__inout LPSCOPEDATAITEM item);
                           HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in IConsoleNameSpace * This,
                       HSCOPEITEM hItem,
                       long fDeleteThis);
                           HRESULT ( STDMETHODCALLTYPE *SetItem )(
            __RPC__in IConsoleNameSpace * This,
                       __RPC__in LPSCOPEDATAITEM item);
                           HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IConsoleNameSpace * This,
                            __RPC__inout LPSCOPEDATAITEM item);
                           HRESULT ( STDMETHODCALLTYPE *GetChildItem )(
            __RPC__in IConsoleNameSpace * This,
                       HSCOPEITEM item,
                        __RPC__out HSCOPEITEM *pItemChild,
                        __RPC__out MMC_COOKIE *pCookie);
                           HRESULT ( STDMETHODCALLTYPE *GetNextItem )(
            __RPC__in IConsoleNameSpace * This,
                       HSCOPEITEM item,
                        __RPC__out HSCOPEITEM *pItemNext,
                        __RPC__out MMC_COOKIE *pCookie);
                           HRESULT ( STDMETHODCALLTYPE *GetParentItem )(
            __RPC__in IConsoleNameSpace * This,
                       HSCOPEITEM item,
                        __RPC__out HSCOPEITEM *pItemParent,
                        __RPC__out MMC_COOKIE *pCookie);
        END_INTERFACE
    } IConsoleNameSpaceVtbl;
    interface IConsoleNameSpace
    {
        CONST_VTBL struct IConsoleNameSpaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InsertItem(This,item) )
    ( (This)->lpVtbl -> DeleteItem(This,hItem,fDeleteThis) )
    ( (This)->lpVtbl -> SetItem(This,item) )
    ( (This)->lpVtbl -> GetItem(This,item) )
    ( (This)->lpVtbl -> GetChildItem(This,item,pItemChild,pCookie) )
    ( (This)->lpVtbl -> GetNextItem(This,item,pItemNext,pCookie) )
    ( (This)->lpVtbl -> GetParentItem(This,item,pItemParent,pCookie) )
EXTERN_C const IID IID_IConsoleNameSpace2;
    typedef struct IConsoleNameSpace2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IConsoleNameSpace2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IConsoleNameSpace2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IConsoleNameSpace2 * This);
                           HRESULT ( STDMETHODCALLTYPE *InsertItem )(
            __RPC__in IConsoleNameSpace2 * This,
                            __RPC__inout LPSCOPEDATAITEM item);
                           HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in IConsoleNameSpace2 * This,
                       HSCOPEITEM hItem,
                       long fDeleteThis);
                           HRESULT ( STDMETHODCALLTYPE *SetItem )(
            __RPC__in IConsoleNameSpace2 * This,
                       __RPC__in LPSCOPEDATAITEM item);
                           HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IConsoleNameSpace2 * This,
                            __RPC__inout LPSCOPEDATAITEM item);
                           HRESULT ( STDMETHODCALLTYPE *GetChildItem )(
            __RPC__in IConsoleNameSpace2 * This,
                       HSCOPEITEM item,
                        __RPC__out HSCOPEITEM *pItemChild,
                        __RPC__out MMC_COOKIE *pCookie);
                           HRESULT ( STDMETHODCALLTYPE *GetNextItem )(
            __RPC__in IConsoleNameSpace2 * This,
                       HSCOPEITEM item,
                        __RPC__out HSCOPEITEM *pItemNext,
                        __RPC__out MMC_COOKIE *pCookie);
                           HRESULT ( STDMETHODCALLTYPE *GetParentItem )(
            __RPC__in IConsoleNameSpace2 * This,
                       HSCOPEITEM item,
                        __RPC__out HSCOPEITEM *pItemParent,
                        __RPC__out MMC_COOKIE *pCookie);
                           HRESULT ( STDMETHODCALLTYPE *Expand )(
            __RPC__in IConsoleNameSpace2 * This,
                       HSCOPEITEM hItem);
                           HRESULT ( STDMETHODCALLTYPE *AddExtension )(
            __RPC__in IConsoleNameSpace2 * This,
                       HSCOPEITEM hItem,
                       __RPC__in LPCLSID lpClsid);
        END_INTERFACE
    } IConsoleNameSpace2Vtbl;
    interface IConsoleNameSpace2
    {
        CONST_VTBL struct IConsoleNameSpace2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InsertItem(This,item) )
    ( (This)->lpVtbl -> DeleteItem(This,hItem,fDeleteThis) )
    ( (This)->lpVtbl -> SetItem(This,item) )
    ( (This)->lpVtbl -> GetItem(This,item) )
    ( (This)->lpVtbl -> GetChildItem(This,item,pItemChild,pCookie) )
    ( (This)->lpVtbl -> GetNextItem(This,item,pItemNext,pCookie) )
    ( (This)->lpVtbl -> GetParentItem(This,item,pItemParent,pCookie) )
    ( (This)->lpVtbl -> Expand(This,hItem) )
    ( (This)->lpVtbl -> AddExtension(This,hItem,lpClsid) )
typedef struct _PSP *HPROPSHEETPAGE;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_IPropertySheetCallback;
    typedef struct IPropertySheetCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPropertySheetCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPropertySheetCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPropertySheetCallback * This);
                           HRESULT ( STDMETHODCALLTYPE *AddPage )(
            IPropertySheetCallback * This,
                       HPROPSHEETPAGE hPage);
                           HRESULT ( STDMETHODCALLTYPE *RemovePage )(
            IPropertySheetCallback * This,
                       HPROPSHEETPAGE hPage);
        END_INTERFACE
    } IPropertySheetCallbackVtbl;
    interface IPropertySheetCallback
    {
        CONST_VTBL struct IPropertySheetCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddPage(This,hPage) )
    ( (This)->lpVtbl -> RemovePage(This,hPage) )
EXTERN_C const IID IID_IPropertySheetProvider;
    typedef struct IPropertySheetProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPropertySheetProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPropertySheetProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPropertySheetProvider * This);
                           HRESULT ( STDMETHODCALLTYPE *CreatePropertySheet )(
            __RPC__in IPropertySheetProvider * This,
                       __RPC__in LPCWSTR title,
                       boolean type,
                       MMC_COOKIE cookie,
                       __RPC__in_opt LPDATAOBJECT pIDataObjectm,
                       DWORD dwOptions);
                           HRESULT ( STDMETHODCALLTYPE *FindPropertySheet )(
            __RPC__in IPropertySheetProvider * This,
                       HSCOPEITEM hItem,
                       __RPC__in_opt LPCOMPONENT lpComponent,
                       __RPC__in_opt LPDATAOBJECT lpDataObject);
                           HRESULT ( STDMETHODCALLTYPE *AddPrimaryPages )(
            __RPC__in IPropertySheetProvider * This,
            __RPC__in_opt LPUNKNOWN lpUnknown,
            BOOL bCreateHandle,
            __RPC__in HWND hNotifyWindow,
            BOOL bScopePane);
                           HRESULT ( STDMETHODCALLTYPE *AddExtensionPages )(
            __RPC__in IPropertySheetProvider * This);
                           HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in IPropertySheetProvider * This,
                       LONG_PTR window,
                       int page);
        END_INTERFACE
    } IPropertySheetProviderVtbl;
    interface IPropertySheetProvider
    {
        CONST_VTBL struct IPropertySheetProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreatePropertySheet(This,title,type,cookie,pIDataObjectm,dwOptions) )
    ( (This)->lpVtbl -> FindPropertySheet(This,hItem,lpComponent,lpDataObject) )
    ( (This)->lpVtbl -> AddPrimaryPages(This,lpUnknown,bCreateHandle,hNotifyWindow,bScopePane) )
    ( (This)->lpVtbl -> AddExtensionPages(This) )
    ( (This)->lpVtbl -> Show(This,window,page) )
EXTERN_C const IID IID_IExtendPropertySheet;
    typedef struct IExtendPropertySheetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IExtendPropertySheet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IExtendPropertySheet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IExtendPropertySheet * This);
                           HRESULT ( STDMETHODCALLTYPE *CreatePropertyPages )(
            __RPC__in IExtendPropertySheet * This,
                       __RPC__in_opt LPPROPERTYSHEETCALLBACK lpProvider,
                       LONG_PTR handle,
                       __RPC__in_opt LPDATAOBJECT lpIDataObject);
                           HRESULT ( STDMETHODCALLTYPE *QueryPagesFor )(
            __RPC__in IExtendPropertySheet * This,
                       __RPC__in_opt LPDATAOBJECT lpDataObject);
        END_INTERFACE
    } IExtendPropertySheetVtbl;
    interface IExtendPropertySheet
    {
        CONST_VTBL struct IExtendPropertySheetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreatePropertyPages(This,lpProvider,handle,lpIDataObject) )
    ( (This)->lpVtbl -> QueryPagesFor(This,lpDataObject) )
EXTERN_C const IID IID_IControlbar;
    typedef struct IControlbarVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IControlbar * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IControlbar * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IControlbar * This);
                           HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IControlbar * This,
                       MMC_CONTROL_TYPE nType,
                       __RPC__in_opt LPEXTENDCONTROLBAR pExtendControlbar,
                        __RPC__deref_out_opt LPUNKNOWN *ppUnknown);
                           HRESULT ( STDMETHODCALLTYPE *Attach )(
            __RPC__in IControlbar * This,
                       MMC_CONTROL_TYPE nType,
                       __RPC__in_opt LPUNKNOWN lpUnknown);
                           HRESULT ( STDMETHODCALLTYPE *Detach )(
            __RPC__in IControlbar * This,
                       __RPC__in_opt LPUNKNOWN lpUnknown);
        END_INTERFACE
    } IControlbarVtbl;
    interface IControlbar
    {
        CONST_VTBL struct IControlbarVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,nType,pExtendControlbar,ppUnknown) )
    ( (This)->lpVtbl -> Attach(This,nType,lpUnknown) )
    ( (This)->lpVtbl -> Detach(This,lpUnknown) )
EXTERN_C const IID IID_IExtendControlbar;
    typedef struct IExtendControlbarVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IExtendControlbar * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IExtendControlbar * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IExtendControlbar * This);
                           HRESULT ( STDMETHODCALLTYPE *SetControlbar )(
            __RPC__in IExtendControlbar * This,
                       __RPC__in_opt LPCONTROLBAR pControlbar);
                           HRESULT ( STDMETHODCALLTYPE *ControlbarNotify )(
            __RPC__in IExtendControlbar * This,
                       MMC_NOTIFY_TYPE event,
                       LPARAM arg,
                       LPARAM param);
        END_INTERFACE
    } IExtendControlbarVtbl;
    interface IExtendControlbar
    {
        CONST_VTBL struct IExtendControlbarVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetControlbar(This,pControlbar) )
    ( (This)->lpVtbl -> ControlbarNotify(This,event,arg,param) )
EXTERN_C const IID IID_IToolbar;
    typedef struct IToolbarVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IToolbar * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IToolbar * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IToolbar * This);
                           HRESULT ( STDMETHODCALLTYPE *AddBitmap )(
            __RPC__in IToolbar * This,
                       int nImages,
                       __RPC__in HBITMAP hbmp,
                       int cxSize,
                       int cySize,
                       COLORREF crMask);
                           HRESULT ( STDMETHODCALLTYPE *AddButtons )(
            __RPC__in IToolbar * This,
                       int nButtons,
                       __RPC__in LPMMCBUTTON lpButtons);
                           HRESULT ( STDMETHODCALLTYPE *InsertButton )(
            __RPC__in IToolbar * This,
                       int nIndex,
                       __RPC__in LPMMCBUTTON lpButton);
                           HRESULT ( STDMETHODCALLTYPE *DeleteButton )(
            __RPC__in IToolbar * This,
                       int nIndex);
                           HRESULT ( STDMETHODCALLTYPE *GetButtonState )(
            __RPC__in IToolbar * This,
                       int idCommand,
                       MMC_BUTTON_STATE nState,
                        __RPC__out BOOL *pState);
                           HRESULT ( STDMETHODCALLTYPE *SetButtonState )(
            __RPC__in IToolbar * This,
                       int idCommand,
                       MMC_BUTTON_STATE nState,
                       BOOL bState);
        END_INTERFACE
    } IToolbarVtbl;
    interface IToolbar
    {
        CONST_VTBL struct IToolbarVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddBitmap(This,nImages,hbmp,cxSize,cySize,crMask) )
    ( (This)->lpVtbl -> AddButtons(This,nButtons,lpButtons) )
    ( (This)->lpVtbl -> InsertButton(This,nIndex,lpButton) )
    ( (This)->lpVtbl -> DeleteButton(This,nIndex) )
    ( (This)->lpVtbl -> GetButtonState(This,idCommand,nState,pState) )
    ( (This)->lpVtbl -> SetButtonState(This,idCommand,nState,bState) )
EXTERN_C const IID IID_IConsoleVerb;
    typedef struct IConsoleVerbVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IConsoleVerb * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IConsoleVerb * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IConsoleVerb * This);
                           HRESULT ( STDMETHODCALLTYPE *GetVerbState )(
            __RPC__in IConsoleVerb * This,
                       MMC_CONSOLE_VERB eCmdID,
                       MMC_BUTTON_STATE nState,
                        __RPC__out BOOL *pState);
                           HRESULT ( STDMETHODCALLTYPE *SetVerbState )(
            __RPC__in IConsoleVerb * This,
                       MMC_CONSOLE_VERB eCmdID,
                       MMC_BUTTON_STATE nState,
                       BOOL bState);
                           HRESULT ( STDMETHODCALLTYPE *SetDefaultVerb )(
            __RPC__in IConsoleVerb * This,
                       MMC_CONSOLE_VERB eCmdID);
                           HRESULT ( STDMETHODCALLTYPE *GetDefaultVerb )(
            __RPC__in IConsoleVerb * This,
                        __RPC__out MMC_CONSOLE_VERB *peCmdID);
        END_INTERFACE
    } IConsoleVerbVtbl;
    interface IConsoleVerb
    {
        CONST_VTBL struct IConsoleVerbVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetVerbState(This,eCmdID,nState,pState) )
    ( (This)->lpVtbl -> SetVerbState(This,eCmdID,nState,bState) )
    ( (This)->lpVtbl -> SetDefaultVerb(This,eCmdID) )
    ( (This)->lpVtbl -> GetDefaultVerb(This,peCmdID) )
EXTERN_C const IID IID_ISnapinAbout;
    typedef struct ISnapinAboutVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISnapinAbout * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISnapinAbout * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISnapinAbout * This);
                           HRESULT ( STDMETHODCALLTYPE *GetSnapinDescription )(
            __RPC__in ISnapinAbout * This,
                        __RPC__deref_out_opt LPOLESTR *lpDescription);
                           HRESULT ( STDMETHODCALLTYPE *GetProvider )(
            __RPC__in ISnapinAbout * This,
                        __RPC__deref_out_opt LPOLESTR *lpName);
                           HRESULT ( STDMETHODCALLTYPE *GetSnapinVersion )(
            __RPC__in ISnapinAbout * This,
                        __RPC__deref_out_opt LPOLESTR *lpVersion);
                           HRESULT ( STDMETHODCALLTYPE *GetSnapinImage )(
            __RPC__in ISnapinAbout * This,
                        __RPC__deref_out_opt HICON *hAppIcon);
                           HRESULT ( STDMETHODCALLTYPE *GetStaticFolderImage )(
            __RPC__in ISnapinAbout * This,
                        __RPC__deref_out_opt HBITMAP *hSmallImage,
                        __RPC__deref_out_opt HBITMAP *hSmallImageOpen,
                        __RPC__deref_out_opt HBITMAP *hLargeImage,
                        __RPC__out COLORREF *cMask);
        END_INTERFACE
    } ISnapinAboutVtbl;
    interface ISnapinAbout
    {
        CONST_VTBL struct ISnapinAboutVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSnapinDescription(This,lpDescription) )
    ( (This)->lpVtbl -> GetProvider(This,lpName) )
    ( (This)->lpVtbl -> GetSnapinVersion(This,lpVersion) )
    ( (This)->lpVtbl -> GetSnapinImage(This,hAppIcon) )
    ( (This)->lpVtbl -> GetStaticFolderImage(This,hSmallImage,hSmallImageOpen,hLargeImage,cMask) )
EXTERN_C const IID IID_IMenuButton;
    typedef struct IMenuButtonVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMenuButton * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMenuButton * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMenuButton * This);
                           HRESULT ( STDMETHODCALLTYPE *AddButton )(
            __RPC__in IMenuButton * This,
                       int idCommand,
                       __RPC__in LPOLESTR lpButtonText,
                       __RPC__in LPOLESTR lpTooltipText);
                           HRESULT ( STDMETHODCALLTYPE *SetButton )(
            __RPC__in IMenuButton * This,
                       int idCommand,
                       __RPC__in LPOLESTR lpButtonText,
                       __RPC__in LPOLESTR lpTooltipText);
                           HRESULT ( STDMETHODCALLTYPE *SetButtonState )(
            __RPC__in IMenuButton * This,
                       int idCommand,
                       MMC_BUTTON_STATE nState,
                       BOOL bState);
        END_INTERFACE
    } IMenuButtonVtbl;
    interface IMenuButton
    {
        CONST_VTBL struct IMenuButtonVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddButton(This,idCommand,lpButtonText,lpTooltipText) )
    ( (This)->lpVtbl -> SetButton(This,idCommand,lpButtonText,lpTooltipText) )
    ( (This)->lpVtbl -> SetButtonState(This,idCommand,nState,bState) )
EXTERN_C const IID IID_ISnapinHelp;
    typedef struct ISnapinHelpVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISnapinHelp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISnapinHelp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISnapinHelp * This);
                           HRESULT ( STDMETHODCALLTYPE *GetHelpTopic )(
            __RPC__in ISnapinHelp * This,
                        __RPC__deref_out_opt LPOLESTR *lpCompiledHelpFile);
        END_INTERFACE
    } ISnapinHelpVtbl;
    interface ISnapinHelp
    {
        CONST_VTBL struct ISnapinHelpVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetHelpTopic(This,lpCompiledHelpFile) )
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0023_v0_0_s_ifspec;
EXTERN_C const IID IID_IExtendPropertySheet2;
    typedef struct IExtendPropertySheet2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IExtendPropertySheet2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IExtendPropertySheet2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IExtendPropertySheet2 * This);
                           HRESULT ( STDMETHODCALLTYPE *CreatePropertyPages )(
            __RPC__in IExtendPropertySheet2 * This,
                       __RPC__in_opt LPPROPERTYSHEETCALLBACK lpProvider,
                       LONG_PTR handle,
                       __RPC__in_opt LPDATAOBJECT lpIDataObject);
                           HRESULT ( STDMETHODCALLTYPE *QueryPagesFor )(
            __RPC__in IExtendPropertySheet2 * This,
                       __RPC__in_opt LPDATAOBJECT lpDataObject);
                           HRESULT ( STDMETHODCALLTYPE *GetWatermarks )(
            __RPC__in IExtendPropertySheet2 * This,
                       __RPC__in_opt LPDATAOBJECT lpIDataObject,
                        __RPC__deref_out_opt HBITMAP *lphWatermark,
                        __RPC__deref_out_opt HBITMAP *lphHeader,
                        __RPC__deref_out_opt HPALETTE *lphPalette,
                        __RPC__out BOOL *bStretch);
        END_INTERFACE
    } IExtendPropertySheet2Vtbl;
    interface IExtendPropertySheet2
    {
        CONST_VTBL struct IExtendPropertySheet2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreatePropertyPages(This,lpProvider,handle,lpIDataObject) )
    ( (This)->lpVtbl -> QueryPagesFor(This,lpDataObject) )
    ( (This)->lpVtbl -> GetWatermarks(This,lpIDataObject,lphWatermark,lphHeader,lphPalette,bStretch) )
EXTERN_C const IID IID_IHeaderCtrl2;
    typedef struct IHeaderCtrl2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHeaderCtrl2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHeaderCtrl2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHeaderCtrl2 * This);
                           HRESULT ( STDMETHODCALLTYPE *InsertColumn )(
            __RPC__in IHeaderCtrl2 * This,
                       int nCol,
                       __RPC__in LPCWSTR title,
                       int nFormat,
                       int nWidth);
                           HRESULT ( STDMETHODCALLTYPE *DeleteColumn )(
            __RPC__in IHeaderCtrl2 * This,
                       int nCol);
                           HRESULT ( STDMETHODCALLTYPE *SetColumnText )(
            __RPC__in IHeaderCtrl2 * This,
                       int nCol,
                       __RPC__in LPCWSTR title);
                           HRESULT ( STDMETHODCALLTYPE *GetColumnText )(
            __RPC__in IHeaderCtrl2 * This,
                       int nCol,
                        __RPC__deref_out_opt LPOLESTR *pText);
                           HRESULT ( STDMETHODCALLTYPE *SetColumnWidth )(
            __RPC__in IHeaderCtrl2 * This,
                       int nCol,
                       int nWidth);
                           HRESULT ( STDMETHODCALLTYPE *GetColumnWidth )(
            __RPC__in IHeaderCtrl2 * This,
                       int nCol,
                        __RPC__out int *pWidth);
                           HRESULT ( STDMETHODCALLTYPE *SetChangeTimeOut )(
            __RPC__in IHeaderCtrl2 * This,
                       unsigned long uTimeout);
                           HRESULT ( STDMETHODCALLTYPE *SetColumnFilter )(
            __RPC__in IHeaderCtrl2 * This,
                       UINT nColumn,
                       DWORD dwType,
                       __RPC__in MMC_FILTERDATA *pFilterData);
                           HRESULT ( STDMETHODCALLTYPE *GetColumnFilter )(
            __RPC__in IHeaderCtrl2 * This,
                       UINT nColumn,
                            __RPC__inout LPDWORD pdwType,
                            __RPC__inout MMC_FILTERDATA *pFilterData);
        END_INTERFACE
    } IHeaderCtrl2Vtbl;
    interface IHeaderCtrl2
    {
        CONST_VTBL struct IHeaderCtrl2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InsertColumn(This,nCol,title,nFormat,nWidth) )
    ( (This)->lpVtbl -> DeleteColumn(This,nCol) )
    ( (This)->lpVtbl -> SetColumnText(This,nCol,title) )
    ( (This)->lpVtbl -> GetColumnText(This,nCol,pText) )
    ( (This)->lpVtbl -> SetColumnWidth(This,nCol,nWidth) )
    ( (This)->lpVtbl -> GetColumnWidth(This,nCol,pWidth) )
    ( (This)->lpVtbl -> SetChangeTimeOut(This,uTimeout) )
    ( (This)->lpVtbl -> SetColumnFilter(This,nColumn,dwType,pFilterData) )
    ( (This)->lpVtbl -> GetColumnFilter(This,nColumn,pdwType,pFilterData) )
EXTERN_C const IID IID_ISnapinHelp2;
    typedef struct ISnapinHelp2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISnapinHelp2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISnapinHelp2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISnapinHelp2 * This);
                           HRESULT ( STDMETHODCALLTYPE *GetHelpTopic )(
            __RPC__in ISnapinHelp2 * This,
                        __RPC__deref_out_opt LPOLESTR *lpCompiledHelpFile);
                           HRESULT ( STDMETHODCALLTYPE *GetLinkedTopics )(
            __RPC__in ISnapinHelp2 * This,
                        __RPC__deref_out_opt LPOLESTR *lpCompiledHelpFiles);
        END_INTERFACE
    } ISnapinHelp2Vtbl;
    interface ISnapinHelp2
    {
        CONST_VTBL struct ISnapinHelp2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetHelpTopic(This,lpCompiledHelpFile) )
    ( (This)->lpVtbl -> GetLinkedTopics(This,lpCompiledHelpFiles) )
typedef
enum _MMC_TASK_DISPLAY_TYPE
    {
        MMC_TASK_DISPLAY_UNINITIALIZED = 0,
        MMC_TASK_DISPLAY_TYPE_SYMBOL = ( MMC_TASK_DISPLAY_UNINITIALIZED + 1 ) ,
        MMC_TASK_DISPLAY_TYPE_VANILLA_GIF = ( MMC_TASK_DISPLAY_TYPE_SYMBOL + 1 ) ,
        MMC_TASK_DISPLAY_TYPE_CHOCOLATE_GIF = ( MMC_TASK_DISPLAY_TYPE_VANILLA_GIF + 1 ) ,
        MMC_TASK_DISPLAY_TYPE_BITMAP = ( MMC_TASK_DISPLAY_TYPE_CHOCOLATE_GIF + 1 )
    } MMC_TASK_DISPLAY_TYPE;
typedef struct _MMC_TASK_DISPLAY_SYMBOL
    {
    LPOLESTR szFontFamilyName;
    LPOLESTR szURLtoEOT;
    LPOLESTR szSymbolString;
    } MMC_TASK_DISPLAY_SYMBOL;
typedef struct _MMC_TASK_DISPLAY_BITMAP
    {
    LPOLESTR szMouseOverBitmap;
    LPOLESTR szMouseOffBitmap;
    } MMC_TASK_DISPLAY_BITMAP;
typedef struct _MMC_TASK_DISPLAY_OBJECT
    {
    MMC_TASK_DISPLAY_TYPE eDisplayType;
                                   union
        {
                       MMC_TASK_DISPLAY_BITMAP uBitmap;
                       MMC_TASK_DISPLAY_SYMBOL uSymbol;
        } ;
    } MMC_TASK_DISPLAY_OBJECT;
typedef
enum _MMC_ACTION_TYPE
    {
        MMC_ACTION_UNINITIALIZED = -1,
        MMC_ACTION_ID = ( MMC_ACTION_UNINITIALIZED + 1 ) ,
        MMC_ACTION_LINK = ( MMC_ACTION_ID + 1 ) ,
        MMC_ACTION_SCRIPT = ( MMC_ACTION_LINK + 1 )
    } MMC_ACTION_TYPE;
typedef struct _MMC_TASK
    {
    MMC_TASK_DISPLAY_OBJECT sDisplayObject;
    LPOLESTR szText;
    LPOLESTR szHelpString;
    MMC_ACTION_TYPE eActionType;
    union
        {
        LONG_PTR nCommandID;
        LPOLESTR szActionURL;
        LPOLESTR szScript;
        } ;
    } MMC_TASK;
typedef struct _MMC_LISTPAD_INFO
    {
    LPOLESTR szTitle;
    LPOLESTR szButtonText;
    LONG_PTR nCommandID;
    } MMC_LISTPAD_INFO;
typedef DWORD MMC_STRING_ID;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0026_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumTASK;
    typedef struct IEnumTASKVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumTASK * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumTASK * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumTASK * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            IEnumTASK * This,
                       ULONG celt,
                                            MMC_TASK *rgelt,
                        ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumTASK * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumTASK * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumTASK * This,
                        IEnumTASK **ppenum);
        END_INTERFACE
    } IEnumTASKVtbl;
    interface IEnumTASK
    {
        CONST_VTBL struct IEnumTASKVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
EXTERN_C const IID IID_IExtendTaskPad;
    typedef struct IExtendTaskPadVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IExtendTaskPad * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IExtendTaskPad * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IExtendTaskPad * This);
                           HRESULT ( STDMETHODCALLTYPE *TaskNotify )(
            IExtendTaskPad * This,
                       IDataObject *pdo,
                       VARIANT *arg,
                       VARIANT *param);
                           HRESULT ( STDMETHODCALLTYPE *EnumTasks )(
            IExtendTaskPad * This,
                       IDataObject *pdo,
                               LPOLESTR szTaskGroup,
                        IEnumTASK **ppEnumTASK);
                           HRESULT ( STDMETHODCALLTYPE *GetTitle )(
            IExtendTaskPad * This,
                               LPOLESTR pszGroup,
                                LPOLESTR *pszTitle);
                           HRESULT ( STDMETHODCALLTYPE *GetDescriptiveText )(
            IExtendTaskPad * This,
                               LPOLESTR pszGroup,
                                LPOLESTR *pszDescriptiveText);
                           HRESULT ( STDMETHODCALLTYPE *GetBackground )(
            IExtendTaskPad * This,
                               LPOLESTR pszGroup,
                        MMC_TASK_DISPLAY_OBJECT *pTDO);
                           HRESULT ( STDMETHODCALLTYPE *GetListPadInfo )(
            IExtendTaskPad * This,
                               LPOLESTR pszGroup,
                        MMC_LISTPAD_INFO *lpListPadInfo);
        END_INTERFACE
    } IExtendTaskPadVtbl;
    interface IExtendTaskPad
    {
        CONST_VTBL struct IExtendTaskPadVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> TaskNotify(This,pdo,arg,param) )
    ( (This)->lpVtbl -> EnumTasks(This,pdo,szTaskGroup,ppEnumTASK) )
    ( (This)->lpVtbl -> GetTitle(This,pszGroup,pszTitle) )
    ( (This)->lpVtbl -> GetDescriptiveText(This,pszGroup,pszDescriptiveText) )
    ( (This)->lpVtbl -> GetBackground(This,pszGroup,pTDO) )
    ( (This)->lpVtbl -> GetListPadInfo(This,pszGroup,lpListPadInfo) )
EXTERN_C const IID IID_IConsole2;
    typedef struct IConsole2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IConsole2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IConsole2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IConsole2 * This);
                           HRESULT ( STDMETHODCALLTYPE *SetHeader )(
            __RPC__in IConsole2 * This,
                       __RPC__in_opt LPHEADERCTRL pHeader);
                           HRESULT ( STDMETHODCALLTYPE *SetToolbar )(
            __RPC__in IConsole2 * This,
                       __RPC__in_opt LPTOOLBAR pToolbar);
                           HRESULT ( STDMETHODCALLTYPE *QueryResultView )(
            __RPC__in IConsole2 * This,
                        __RPC__deref_out_opt LPUNKNOWN *pUnknown);
                           HRESULT ( STDMETHODCALLTYPE *QueryScopeImageList )(
            __RPC__in IConsole2 * This,
                        __RPC__deref_out_opt LPIMAGELIST *ppImageList);
                           HRESULT ( STDMETHODCALLTYPE *QueryResultImageList )(
            __RPC__in IConsole2 * This,
                        __RPC__deref_out_opt LPIMAGELIST *ppImageList);
                           HRESULT ( STDMETHODCALLTYPE *UpdateAllViews )(
            __RPC__in IConsole2 * This,
                       __RPC__in_opt LPDATAOBJECT lpDataObject,
                       LPARAM data,
                       LONG_PTR hint);
                           HRESULT ( STDMETHODCALLTYPE *MessageBox )(
            __RPC__in IConsole2 * This,
                       __RPC__in LPCWSTR lpszText,
                       __RPC__in LPCWSTR lpszTitle,
                       UINT fuStyle,
                        __RPC__out int *piRetval);
                           HRESULT ( STDMETHODCALLTYPE *QueryConsoleVerb )(
            __RPC__in IConsole2 * This,
                        __RPC__deref_out_opt LPCONSOLEVERB *ppConsoleVerb);
                           HRESULT ( STDMETHODCALLTYPE *SelectScopeItem )(
            __RPC__in IConsole2 * This,
                       HSCOPEITEM hScopeItem);
                           HRESULT ( STDMETHODCALLTYPE *GetMainWindow )(
            __RPC__in IConsole2 * This,
                        __RPC__deref_out_opt HWND *phwnd);
                           HRESULT ( STDMETHODCALLTYPE *NewWindow )(
            __RPC__in IConsole2 * This,
                       HSCOPEITEM hScopeItem,
                       unsigned long lOptions);
                           HRESULT ( STDMETHODCALLTYPE *Expand )(
            __RPC__in IConsole2 * This,
                       HSCOPEITEM hItem,
                       BOOL bExpand);
                           HRESULT ( STDMETHODCALLTYPE *IsTaskpadViewPreferred )(
            __RPC__in IConsole2 * This);
                           HRESULT ( STDMETHODCALLTYPE *SetStatusText )(
            __RPC__in IConsole2 * This,
                               __RPC__in_string LPOLESTR pszStatusText);
        END_INTERFACE
    } IConsole2Vtbl;
    interface IConsole2
    {
        CONST_VTBL struct IConsole2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetHeader(This,pHeader) )
    ( (This)->lpVtbl -> SetToolbar(This,pToolbar) )
    ( (This)->lpVtbl -> QueryResultView(This,pUnknown) )
    ( (This)->lpVtbl -> QueryScopeImageList(This,ppImageList) )
    ( (This)->lpVtbl -> QueryResultImageList(This,ppImageList) )
    ( (This)->lpVtbl -> UpdateAllViews(This,lpDataObject,data,hint) )
    ( (This)->lpVtbl -> MessageBox(This,lpszText,lpszTitle,fuStyle,piRetval) )
    ( (This)->lpVtbl -> QueryConsoleVerb(This,ppConsoleVerb) )
    ( (This)->lpVtbl -> SelectScopeItem(This,hScopeItem) )
    ( (This)->lpVtbl -> GetMainWindow(This,phwnd) )
    ( (This)->lpVtbl -> NewWindow(This,hScopeItem,lOptions) )
    ( (This)->lpVtbl -> Expand(This,hItem,bExpand) )
    ( (This)->lpVtbl -> IsTaskpadViewPreferred(This) )
    ( (This)->lpVtbl -> SetStatusText(This,pszStatusText) )
EXTERN_C const IID IID_IDisplayHelp;
    typedef struct IDisplayHelpVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDisplayHelp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDisplayHelp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDisplayHelp * This);
                           HRESULT ( STDMETHODCALLTYPE *ShowTopic )(
            __RPC__in IDisplayHelp * This,
                       __RPC__in LPOLESTR pszHelpTopic);
        END_INTERFACE
    } IDisplayHelpVtbl;
    interface IDisplayHelp
    {
        CONST_VTBL struct IDisplayHelpVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ShowTopic(This,pszHelpTopic) )
EXTERN_C const IID IID_IRequiredExtensions;
    typedef struct IRequiredExtensionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IRequiredExtensions * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IRequiredExtensions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IRequiredExtensions * This);
                           HRESULT ( STDMETHODCALLTYPE *EnableAllExtensions )(
            IRequiredExtensions * This);
                           HRESULT ( STDMETHODCALLTYPE *GetFirstExtension )(
            IRequiredExtensions * This,
                        LPCLSID pExtCLSID);
                           HRESULT ( STDMETHODCALLTYPE *GetNextExtension )(
            IRequiredExtensions * This,
                        LPCLSID pExtCLSID);
        END_INTERFACE
    } IRequiredExtensionsVtbl;
    interface IRequiredExtensions
    {
        CONST_VTBL struct IRequiredExtensionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnableAllExtensions(This) )
    ( (This)->lpVtbl -> GetFirstExtension(This,pExtCLSID) )
    ( (This)->lpVtbl -> GetNextExtension(This,pExtCLSID) )
EXTERN_C const IID IID_IStringTable;
    typedef struct IStringTableVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStringTable * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStringTable * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStringTable * This);
                           HRESULT ( STDMETHODCALLTYPE *AddString )(
            __RPC__in IStringTable * This,
                       __RPC__in LPCOLESTR pszAdd,
                        __RPC__out MMC_STRING_ID *pStringID);
                           HRESULT ( STDMETHODCALLTYPE *GetString )(
            __RPC__in IStringTable * This,
                       MMC_STRING_ID StringID,
                       ULONG cchBuffer,
                                 __RPC__out_ecount_full(cchBuffer) LPOLESTR lpBuffer,
                        __RPC__out ULONG *pcchOut);
                           HRESULT ( STDMETHODCALLTYPE *GetStringLength )(
            __RPC__in IStringTable * This,
                       MMC_STRING_ID StringID,
                        __RPC__out ULONG *pcchString);
                           HRESULT ( STDMETHODCALLTYPE *DeleteString )(
            __RPC__in IStringTable * This,
                       MMC_STRING_ID StringID);
                           HRESULT ( STDMETHODCALLTYPE *DeleteAllStrings )(
            __RPC__in IStringTable * This);
                           HRESULT ( STDMETHODCALLTYPE *FindString )(
            __RPC__in IStringTable * This,
                       __RPC__in LPCOLESTR pszFind,
                        __RPC__out MMC_STRING_ID *pStringID);
                           HRESULT ( STDMETHODCALLTYPE *Enumerate )(
            __RPC__in IStringTable * This,
                        __RPC__deref_out_opt IEnumString **ppEnum);
        END_INTERFACE
    } IStringTableVtbl;
    interface IStringTable
    {
        CONST_VTBL struct IStringTableVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddString(This,pszAdd,pStringID) )
    ( (This)->lpVtbl -> GetString(This,StringID,cchBuffer,lpBuffer,pcchOut) )
    ( (This)->lpVtbl -> GetStringLength(This,StringID,pcchString) )
    ( (This)->lpVtbl -> DeleteString(This,StringID) )
    ( (This)->lpVtbl -> DeleteAllStrings(This) )
    ( (This)->lpVtbl -> FindString(This,pszFind,pStringID) )
    ( (This)->lpVtbl -> Enumerate(This,ppEnum) )
typedef struct _MMC_COLUMN_DATA
    {
    int nColIndex;
    DWORD dwFlags;
    int nWidth;
    ULONG_PTR ulReserved;
    } MMC_COLUMN_DATA;
typedef struct _MMC_COLUMN_SET_DATA
    {
    int cbSize;
    int nNumCols;
    MMC_COLUMN_DATA *pColData;
    } MMC_COLUMN_SET_DATA;
typedef struct _MMC_SORT_DATA
    {
    int nColIndex;
    DWORD dwSortOptions;
    ULONG_PTR ulReserved;
    } MMC_SORT_DATA;
typedef struct _MMC_SORT_SET_DATA
    {
    int cbSize;
    int nNumItems;
    MMC_SORT_DATA *pSortData;
    } MMC_SORT_SET_DATA;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0032_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0032_v0_0_s_ifspec;
EXTERN_C const IID IID_IColumnData;
    typedef struct IColumnDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IColumnData * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IColumnData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IColumnData * This);
                           HRESULT ( STDMETHODCALLTYPE *SetColumnConfigData )(
            __RPC__in IColumnData * This,
                       __RPC__in SColumnSetID *pColID,
                       __RPC__in MMC_COLUMN_SET_DATA *pColSetData);
                           HRESULT ( STDMETHODCALLTYPE *GetColumnConfigData )(
            __RPC__in IColumnData * This,
                       __RPC__in SColumnSetID *pColID,
                        __RPC__deref_out_opt MMC_COLUMN_SET_DATA **ppColSetData);
                           HRESULT ( STDMETHODCALLTYPE *SetColumnSortData )(
            __RPC__in IColumnData * This,
                       __RPC__in SColumnSetID *pColID,
                       __RPC__in MMC_SORT_SET_DATA *pColSortData);
                           HRESULT ( STDMETHODCALLTYPE *GetColumnSortData )(
            __RPC__in IColumnData * This,
                       __RPC__in SColumnSetID *pColID,
                        __RPC__deref_out_opt MMC_SORT_SET_DATA **ppColSortData);
        END_INTERFACE
    } IColumnDataVtbl;
    interface IColumnData
    {
        CONST_VTBL struct IColumnDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetColumnConfigData(This,pColID,pColSetData) )
    ( (This)->lpVtbl -> GetColumnConfigData(This,pColID,ppColSetData) )
    ( (This)->lpVtbl -> SetColumnSortData(This,pColID,pColSortData) )
    ( (This)->lpVtbl -> GetColumnSortData(This,pColID,ppColSortData) )
typedef
enum tagIconIdentifier
    {
        Icon_None = 0,
        Icon_Error = 32513,
        Icon_Question = 32514,
        Icon_Warning = 32515,
        Icon_Information = 32516,
        Icon_First = Icon_Error,
        Icon_Last = Icon_Information
    } IconIdentifier;
EXTERN_C const IID IID_IMessageView;
    typedef struct IMessageViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMessageView * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMessageView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMessageView * This);
                           HRESULT ( STDMETHODCALLTYPE *SetTitleText )(
            __RPC__in IMessageView * This,
                       __RPC__in LPCOLESTR pszTitleText);
                           HRESULT ( STDMETHODCALLTYPE *SetBodyText )(
            __RPC__in IMessageView * This,
                       __RPC__in LPCOLESTR pszBodyText);
                           HRESULT ( STDMETHODCALLTYPE *SetIcon )(
            __RPC__in IMessageView * This,
                       IconIdentifier id);
                           HRESULT ( STDMETHODCALLTYPE *Clear )(
            __RPC__in IMessageView * This);
        END_INTERFACE
    } IMessageViewVtbl;
    interface IMessageView
    {
        CONST_VTBL struct IMessageViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetTitleText(This,pszTitleText) )
    ( (This)->lpVtbl -> SetBodyText(This,pszBodyText) )
    ( (This)->lpVtbl -> SetIcon(This,id) )
    ( (This)->lpVtbl -> Clear(This) )
typedef struct _RDCITEMHDR
    {
    DWORD dwFlags;
    MMC_COOKIE cookie;
    LPARAM lpReserved;
    } RDITEMHDR;
typedef struct _RDCOMPARE
    {
    DWORD cbSize;
    DWORD dwFlags;
    int nColumn;
    LPARAM lUserParam;
    RDITEMHDR *prdch1;
    RDITEMHDR *prdch2;
    } RDCOMPARE;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0034_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0034_v0_0_s_ifspec;
EXTERN_C const IID IID_IResultDataCompareEx;
    typedef struct IResultDataCompareExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IResultDataCompareEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IResultDataCompareEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IResultDataCompareEx * This);
                           HRESULT ( STDMETHODCALLTYPE *Compare )(
            __RPC__in IResultDataCompareEx * This,
                       __RPC__in RDCOMPARE *prdc,
                        __RPC__out int *pnResult);
        END_INTERFACE
    } IResultDataCompareExVtbl;
    interface IResultDataCompareEx
    {
        CONST_VTBL struct IResultDataCompareExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Compare(This,prdc,pnResult) )
typedef
enum _MMC_VIEW_TYPE
    {
        MMC_VIEW_TYPE_LIST = 0,
        MMC_VIEW_TYPE_HTML = ( MMC_VIEW_TYPE_LIST + 1 ) ,
        MMC_VIEW_TYPE_OCX = ( MMC_VIEW_TYPE_HTML + 1 )
    } MMC_VIEW_TYPE;
typedef struct _RESULT_VIEW_TYPE_INFO
    {
    LPOLESTR pstrPersistableViewDescription;
    MMC_VIEW_TYPE eViewType;
    DWORD dwMiscOptions;
                                   union
        {
                       DWORD dwListOptions;
                       struct
            {
            DWORD dwHTMLOptions;
            LPOLESTR pstrURL;
            } ;
                       struct
            {
            DWORD dwOCXOptions;
            LPUNKNOWN pUnkControl;
            } ;
        } ;
    } RESULT_VIEW_TYPE_INFO;
typedef struct _RESULT_VIEW_TYPE_INFO *PRESULT_VIEW_TYPE_INFO;
typedef struct _CONTEXTMENUITEM2
    {
    LPWSTR strName;
    LPWSTR strStatusBarText;
    LONG lCommandID;
    LONG lInsertionPointID;
    LONG fFlags;
    LONG fSpecialFlags;
    LPWSTR strLanguageIndependentName;
    } CONTEXTMENUITEM2;
typedef CONTEXTMENUITEM2 *LPCONTEXTMENUITEM2;
typedef struct _MMC_EXT_VIEW_DATA
    {
    GUID viewID;
    LPCOLESTR pszURL;
    LPCOLESTR pszViewTitle;
    LPCOLESTR pszTooltipText;
    BOOL bReplacesDefaultView;
    } MMC_EXT_VIEW_DATA;
typedef struct _MMC_EXT_VIEW_DATA *PMMC_EXT_VIEW_DATA;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0035_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0035_v0_0_s_ifspec;
EXTERN_C const IID IID_IComponentData2;
    typedef struct IComponentData2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComponentData2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComponentData2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComponentData2 * This);
                           HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IComponentData2 * This,
                       __RPC__in_opt LPUNKNOWN pUnknown);
                           HRESULT ( STDMETHODCALLTYPE *CreateComponent )(
            __RPC__in IComponentData2 * This,
                        __RPC__deref_out_opt LPCOMPONENT *ppComponent);
                           HRESULT ( STDMETHODCALLTYPE *Notify )(
            __RPC__in IComponentData2 * This,
                       __RPC__in_opt LPDATAOBJECT lpDataObject,
                       MMC_NOTIFY_TYPE event,
                       LPARAM arg,
                       LPARAM param);
                           HRESULT ( STDMETHODCALLTYPE *Destroy )(
            __RPC__in IComponentData2 * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryDataObject )(
            __RPC__in IComponentData2 * This,
                       MMC_COOKIE cookie,
                       DATA_OBJECT_TYPES type,
                        __RPC__deref_out_opt LPDATAOBJECT *ppDataObject);
                           HRESULT ( STDMETHODCALLTYPE *GetDisplayInfo )(
            __RPC__in IComponentData2 * This,
                            __RPC__inout SCOPEDATAITEM *pScopeDataItem);
                           HRESULT ( STDMETHODCALLTYPE *CompareObjects )(
            __RPC__in IComponentData2 * This,
                       __RPC__in_opt LPDATAOBJECT lpDataObjectA,
                       __RPC__in_opt LPDATAOBJECT lpDataObjectB);
                           HRESULT ( STDMETHODCALLTYPE *QueryDispatch )(
            __RPC__in IComponentData2 * This,
                       MMC_COOKIE cookie,
                       DATA_OBJECT_TYPES type,
                        __RPC__deref_out_opt LPDISPATCH *ppDispatch);
        END_INTERFACE
    } IComponentData2Vtbl;
    interface IComponentData2
    {
        CONST_VTBL struct IComponentData2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pUnknown) )
    ( (This)->lpVtbl -> CreateComponent(This,ppComponent) )
    ( (This)->lpVtbl -> Notify(This,lpDataObject,event,arg,param) )
    ( (This)->lpVtbl -> Destroy(This) )
    ( (This)->lpVtbl -> QueryDataObject(This,cookie,type,ppDataObject) )
    ( (This)->lpVtbl -> GetDisplayInfo(This,pScopeDataItem) )
    ( (This)->lpVtbl -> CompareObjects(This,lpDataObjectA,lpDataObjectB) )
    ( (This)->lpVtbl -> QueryDispatch(This,cookie,type,ppDispatch) )
EXTERN_C const IID IID_IComponent2;
    typedef struct IComponent2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComponent2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComponent2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComponent2 * This);
                           HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IComponent2 * This,
                       __RPC__in_opt LPCONSOLE lpConsole);
                           HRESULT ( STDMETHODCALLTYPE *Notify )(
            __RPC__in IComponent2 * This,
                       __RPC__in_opt LPDATAOBJECT lpDataObject,
                       MMC_NOTIFY_TYPE event,
                       LPARAM arg,
                       LPARAM param);
                           HRESULT ( STDMETHODCALLTYPE *Destroy )(
            __RPC__in IComponent2 * This,
                       MMC_COOKIE cookie);
                           HRESULT ( STDMETHODCALLTYPE *QueryDataObject )(
            __RPC__in IComponent2 * This,
                       MMC_COOKIE cookie,
                       DATA_OBJECT_TYPES type,
                        __RPC__deref_out_opt LPDATAOBJECT *ppDataObject);
                           HRESULT ( STDMETHODCALLTYPE *GetResultViewType )(
            __RPC__in IComponent2 * This,
                       MMC_COOKIE cookie,
                        __RPC__deref_out_opt LPOLESTR *ppViewType,
                        __RPC__out long *pViewOptions);
                           HRESULT ( STDMETHODCALLTYPE *GetDisplayInfo )(
            __RPC__in IComponent2 * This,
                            __RPC__inout RESULTDATAITEM *pResultDataItem);
                           HRESULT ( STDMETHODCALLTYPE *CompareObjects )(
            __RPC__in IComponent2 * This,
                       __RPC__in_opt LPDATAOBJECT lpDataObjectA,
                       __RPC__in_opt LPDATAOBJECT lpDataObjectB);
                           HRESULT ( STDMETHODCALLTYPE *QueryDispatch )(
            __RPC__in IComponent2 * This,
                       MMC_COOKIE cookie,
                       DATA_OBJECT_TYPES type,
                        __RPC__deref_out_opt LPDISPATCH *ppDispatch);
                           HRESULT ( STDMETHODCALLTYPE *GetResultViewType2 )(
            __RPC__in IComponent2 * This,
                       MMC_COOKIE cookie,
                            __RPC__inout PRESULT_VIEW_TYPE_INFO pResultViewType);
                           HRESULT ( STDMETHODCALLTYPE *RestoreResultView )(
            __RPC__in IComponent2 * This,
                       MMC_COOKIE cookie,
                       __RPC__in PRESULT_VIEW_TYPE_INFO pResultViewType);
        END_INTERFACE
    } IComponent2Vtbl;
    interface IComponent2
    {
        CONST_VTBL struct IComponent2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,lpConsole) )
    ( (This)->lpVtbl -> Notify(This,lpDataObject,event,arg,param) )
    ( (This)->lpVtbl -> Destroy(This,cookie) )
    ( (This)->lpVtbl -> QueryDataObject(This,cookie,type,ppDataObject) )
    ( (This)->lpVtbl -> GetResultViewType(This,cookie,ppViewType,pViewOptions) )
    ( (This)->lpVtbl -> GetDisplayInfo(This,pResultDataItem) )
    ( (This)->lpVtbl -> CompareObjects(This,lpDataObjectA,lpDataObjectB) )
    ( (This)->lpVtbl -> QueryDispatch(This,cookie,type,ppDispatch) )
    ( (This)->lpVtbl -> GetResultViewType2(This,cookie,pResultViewType) )
    ( (This)->lpVtbl -> RestoreResultView(This,cookie,pResultViewType) )
EXTERN_C const IID IID_IContextMenuCallback2;
    typedef struct IContextMenuCallback2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContextMenuCallback2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContextMenuCallback2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContextMenuCallback2 * This);
                           HRESULT ( STDMETHODCALLTYPE *AddItem )(
            __RPC__in IContextMenuCallback2 * This,
                       __RPC__in CONTEXTMENUITEM2 *pItem);
        END_INTERFACE
    } IContextMenuCallback2Vtbl;
    interface IContextMenuCallback2
    {
        CONST_VTBL struct IContextMenuCallback2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddItem(This,pItem) )
EXTERN_C const IID IID_IMMCVersionInfo;
    typedef struct IMMCVersionInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMMCVersionInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMMCVersionInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMMCVersionInfo * This);
                           HRESULT ( STDMETHODCALLTYPE *GetMMCVersion )(
            __RPC__in IMMCVersionInfo * This,
                        __RPC__out long *pVersionMajor,
                        __RPC__out long *pVersionMinor);
        END_INTERFACE
    } IMMCVersionInfoVtbl;
    interface IMMCVersionInfo
    {
        CONST_VTBL struct IMMCVersionInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMMCVersion(This,pVersionMajor,pVersionMinor) )
EXTERN_C const IID LIBID_MMCVersionLib;
EXTERN_C const CLSID CLSID_MMCVersionInfo;
class DECLSPEC_UUID("D6FEDB1D-CF21-4bd9-AF3B-C5468E9C6684")
MMCVersionInfo;
EXTERN_C const CLSID CLSID_ConsolePower;
class DECLSPEC_UUID("f0285374-dff1-11d3-b433-00c04f8ecd78")
ConsolePower;
EXTERN_C const IID IID_IExtendView;
    typedef struct IExtendViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IExtendView * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IExtendView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IExtendView * This);
                           HRESULT ( STDMETHODCALLTYPE *GetViews )(
            __RPC__in IExtendView * This,
                       __RPC__in_opt LPDATAOBJECT pDataObject,
                       __RPC__in_opt LPVIEWEXTENSIONCALLBACK pViewExtensionCallback);
        END_INTERFACE
    } IExtendViewVtbl;
    interface IExtendView
    {
        CONST_VTBL struct IExtendViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetViews(This,pDataObject,pViewExtensionCallback) )
EXTERN_C const IID IID_IViewExtensionCallback;
    typedef struct IViewExtensionCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IViewExtensionCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IViewExtensionCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IViewExtensionCallback * This);
                           HRESULT ( STDMETHODCALLTYPE *AddView )(
            __RPC__in IViewExtensionCallback * This,
                       __RPC__in PMMC_EXT_VIEW_DATA pExtViewData);
        END_INTERFACE
    } IViewExtensionCallbackVtbl;
    interface IViewExtensionCallback
    {
        CONST_VTBL struct IViewExtensionCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddView(This,pExtViewData) )
EXTERN_C const IID IID_IConsolePower;
    typedef struct IConsolePowerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IConsolePower * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IConsolePower * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IConsolePower * This);
                           HRESULT ( STDMETHODCALLTYPE *SetExecutionState )(
            __RPC__in IConsolePower * This,
                       DWORD dwAdd,
                       DWORD dwRemove);
                           HRESULT ( STDMETHODCALLTYPE *ResetIdleTimer )(
            __RPC__in IConsolePower * This,
                       DWORD dwFlags);
        END_INTERFACE
    } IConsolePowerVtbl;
    interface IConsolePower
    {
        CONST_VTBL struct IConsolePowerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetExecutionState(This,dwAdd,dwRemove) )
    ( (This)->lpVtbl -> ResetIdleTimer(This,dwFlags) )
EXTERN_C const IID IID_IConsolePowerSink;
    typedef struct IConsolePowerSinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IConsolePowerSink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IConsolePowerSink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IConsolePowerSink * This);
                           HRESULT ( STDMETHODCALLTYPE *OnPowerBroadcast )(
            __RPC__in IConsolePowerSink * This,
                       UINT nEvent,
                       LPARAM lParam,
                        __RPC__out LRESULT *plReturn);
        END_INTERFACE
    } IConsolePowerSinkVtbl;
    interface IConsolePowerSink
    {
        CONST_VTBL struct IConsolePowerSinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnPowerBroadcast(This,nEvent,lParam,plReturn) )
EXTERN_C const IID IID_INodeProperties;
    typedef struct INodePropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INodeProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INodeProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INodeProperties * This);
                           HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in INodeProperties * This,
                       __RPC__in_opt LPDATAOBJECT pDataObject,
                       __RPC__in BSTR szPropertyName,
                        __RPC__deref_out_opt PBSTR pbstrProperty);
        END_INTERFACE
    } INodePropertiesVtbl;
    interface INodeProperties
    {
        CONST_VTBL struct INodePropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetProperty(This,pDataObject,szPropertyName,pbstrProperty) )
EXTERN_C const IID IID_IConsole3;
    typedef struct IConsole3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IConsole3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IConsole3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IConsole3 * This);
                           HRESULT ( STDMETHODCALLTYPE *SetHeader )(
            __RPC__in IConsole3 * This,
                       __RPC__in_opt LPHEADERCTRL pHeader);
                           HRESULT ( STDMETHODCALLTYPE *SetToolbar )(
            __RPC__in IConsole3 * This,
                       __RPC__in_opt LPTOOLBAR pToolbar);
                           HRESULT ( STDMETHODCALLTYPE *QueryResultView )(
            __RPC__in IConsole3 * This,
                        __RPC__deref_out_opt LPUNKNOWN *pUnknown);
                           HRESULT ( STDMETHODCALLTYPE *QueryScopeImageList )(
            __RPC__in IConsole3 * This,
                        __RPC__deref_out_opt LPIMAGELIST *ppImageList);
                           HRESULT ( STDMETHODCALLTYPE *QueryResultImageList )(
            __RPC__in IConsole3 * This,
                        __RPC__deref_out_opt LPIMAGELIST *ppImageList);
                           HRESULT ( STDMETHODCALLTYPE *UpdateAllViews )(
            __RPC__in IConsole3 * This,
                       __RPC__in_opt LPDATAOBJECT lpDataObject,
                       LPARAM data,
                       LONG_PTR hint);
                           HRESULT ( STDMETHODCALLTYPE *MessageBox )(
            __RPC__in IConsole3 * This,
                       __RPC__in LPCWSTR lpszText,
                       __RPC__in LPCWSTR lpszTitle,
                       UINT fuStyle,
                        __RPC__out int *piRetval);
                           HRESULT ( STDMETHODCALLTYPE *QueryConsoleVerb )(
            __RPC__in IConsole3 * This,
                        __RPC__deref_out_opt LPCONSOLEVERB *ppConsoleVerb);
                           HRESULT ( STDMETHODCALLTYPE *SelectScopeItem )(
            __RPC__in IConsole3 * This,
                       HSCOPEITEM hScopeItem);
                           HRESULT ( STDMETHODCALLTYPE *GetMainWindow )(
            __RPC__in IConsole3 * This,
                        __RPC__deref_out_opt HWND *phwnd);
                           HRESULT ( STDMETHODCALLTYPE *NewWindow )(
            __RPC__in IConsole3 * This,
                       HSCOPEITEM hScopeItem,
                       unsigned long lOptions);
                           HRESULT ( STDMETHODCALLTYPE *Expand )(
            __RPC__in IConsole3 * This,
                       HSCOPEITEM hItem,
                       BOOL bExpand);
                           HRESULT ( STDMETHODCALLTYPE *IsTaskpadViewPreferred )(
            __RPC__in IConsole3 * This);
                           HRESULT ( STDMETHODCALLTYPE *SetStatusText )(
            __RPC__in IConsole3 * This,
                               __RPC__in_string LPOLESTR pszStatusText);
                           HRESULT ( STDMETHODCALLTYPE *RenameScopeItem )(
            __RPC__in IConsole3 * This,
                       HSCOPEITEM hScopeItem);
        END_INTERFACE
    } IConsole3Vtbl;
    interface IConsole3
    {
        CONST_VTBL struct IConsole3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetHeader(This,pHeader) )
    ( (This)->lpVtbl -> SetToolbar(This,pToolbar) )
    ( (This)->lpVtbl -> QueryResultView(This,pUnknown) )
    ( (This)->lpVtbl -> QueryScopeImageList(This,ppImageList) )
    ( (This)->lpVtbl -> QueryResultImageList(This,ppImageList) )
    ( (This)->lpVtbl -> UpdateAllViews(This,lpDataObject,data,hint) )
    ( (This)->lpVtbl -> MessageBox(This,lpszText,lpszTitle,fuStyle,piRetval) )
    ( (This)->lpVtbl -> QueryConsoleVerb(This,ppConsoleVerb) )
    ( (This)->lpVtbl -> SelectScopeItem(This,hScopeItem) )
    ( (This)->lpVtbl -> GetMainWindow(This,phwnd) )
    ( (This)->lpVtbl -> NewWindow(This,hScopeItem,lOptions) )
    ( (This)->lpVtbl -> Expand(This,hItem,bExpand) )
    ( (This)->lpVtbl -> IsTaskpadViewPreferred(This) )
    ( (This)->lpVtbl -> SetStatusText(This,pszStatusText) )
    ( (This)->lpVtbl -> RenameScopeItem(This,hScopeItem) )
EXTERN_C const IID IID_IResultData2;
    typedef struct IResultData2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IResultData2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IResultData2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IResultData2 * This);
                           HRESULT ( STDMETHODCALLTYPE *InsertItem )(
            __RPC__in IResultData2 * This,
                            __RPC__inout LPRESULTDATAITEM item);
                           HRESULT ( STDMETHODCALLTYPE *DeleteItem )(
            __RPC__in IResultData2 * This,
                       HRESULTITEM itemID,
                       int nCol);
                           HRESULT ( STDMETHODCALLTYPE *FindItemByLParam )(
            __RPC__in IResultData2 * This,
                       LPARAM lParam,
                        __RPC__out HRESULTITEM *pItemID);
                           HRESULT ( STDMETHODCALLTYPE *DeleteAllRsltItems )(
            __RPC__in IResultData2 * This);
                           HRESULT ( STDMETHODCALLTYPE *SetItem )(
            __RPC__in IResultData2 * This,
                       __RPC__in LPRESULTDATAITEM item);
                           HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IResultData2 * This,
                            __RPC__inout LPRESULTDATAITEM item);
                           HRESULT ( STDMETHODCALLTYPE *GetNextItem )(
            __RPC__in IResultData2 * This,
                            __RPC__inout LPRESULTDATAITEM item);
                           HRESULT ( STDMETHODCALLTYPE *ModifyItemState )(
            __RPC__in IResultData2 * This,
                       int nIndex,
                       HRESULTITEM itemID,
                       UINT uAdd,
                       UINT uRemove);
                           HRESULT ( STDMETHODCALLTYPE *ModifyViewStyle )(
            __RPC__in IResultData2 * This,
                       MMC_RESULT_VIEW_STYLE add,
                       MMC_RESULT_VIEW_STYLE remove);
                           HRESULT ( STDMETHODCALLTYPE *SetViewMode )(
            __RPC__in IResultData2 * This,
                       long lViewMode);
                           HRESULT ( STDMETHODCALLTYPE *GetViewMode )(
            __RPC__in IResultData2 * This,
                        __RPC__out long *lViewMode);
                           HRESULT ( STDMETHODCALLTYPE *UpdateItem )(
            __RPC__in IResultData2 * This,
                       HRESULTITEM itemID);
                           HRESULT ( STDMETHODCALLTYPE *Sort )(
            __RPC__in IResultData2 * This,
                       int nColumn,
                       DWORD dwSortOptions,
                       LPARAM lUserParam);
                           HRESULT ( STDMETHODCALLTYPE *SetDescBarText )(
            __RPC__in IResultData2 * This,
                       __RPC__in LPOLESTR DescText);
                           HRESULT ( STDMETHODCALLTYPE *SetItemCount )(
            __RPC__in IResultData2 * This,
                       int nItemCount,
                       DWORD dwOptions);
                           HRESULT ( STDMETHODCALLTYPE *RenameResultItem )(
            __RPC__in IResultData2 * This,
                       HRESULTITEM itemID);
        END_INTERFACE
    } IResultData2Vtbl;
    interface IResultData2
    {
        CONST_VTBL struct IResultData2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InsertItem(This,item) )
    ( (This)->lpVtbl -> DeleteItem(This,itemID,nCol) )
    ( (This)->lpVtbl -> FindItemByLParam(This,lParam,pItemID) )
    ( (This)->lpVtbl -> DeleteAllRsltItems(This) )
    ( (This)->lpVtbl -> SetItem(This,item) )
    ( (This)->lpVtbl -> GetItem(This,item) )
    ( (This)->lpVtbl -> GetNextItem(This,item) )
    ( (This)->lpVtbl -> ModifyItemState(This,nIndex,itemID,uAdd,uRemove) )
    ( (This)->lpVtbl -> ModifyViewStyle(This,add,remove) )
    ( (This)->lpVtbl -> SetViewMode(This,lViewMode) )
    ( (This)->lpVtbl -> GetViewMode(This,lViewMode) )
    ( (This)->lpVtbl -> UpdateItem(This,itemID) )
    ( (This)->lpVtbl -> Sort(This,nColumn,dwSortOptions,lUserParam) )
    ( (This)->lpVtbl -> SetDescBarText(This,DescText) )
    ( (This)->lpVtbl -> SetItemCount(This,nItemCount,dwOptions) )
    ( (This)->lpVtbl -> RenameResultItem(This,itemID) )
typedef
enum _MMC_ITEM_OVERLAY
    {
        MMC_ITEM_OVERLAY_NONE = 0,
        MMC_ITEM_OVERLAY_ERROR = 1,
        MMC_ITEM_OVERLAY_WARNING = 2,
        MMC_ITEM_OVERLAY_INFO = 3,
        MMC_ITEM_OVERLAY_BUSY = 4,
        MMC_ITEM_OVERLAY_UNAVAILABLE = 5,
        MMC_ITEM_OVERLAY_SHORTCUT = 6,
        MMC_ITEM_OVERLAY_RUNNING = 7,
        MMC_ITEM_OVERLAY_PAUSED = 8,
        MMC_ITEM_OVERLAY_STOPPED = 9,
        MMC_ITEM_OVERLAY_COMPLETE = 10
    } MMC_ITEM_OVERLAY;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0047_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmc_0000_0047_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HBITMAP_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree( __RPC__in unsigned long *, __RPC__in HBITMAP * );
unsigned long __RPC_USER HICON_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * );
void __RPC_USER HICON_UserFree( __RPC__in unsigned long *, __RPC__in HICON * );
unsigned long __RPC_USER HPALETTE_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HPALETTE * );
unsigned char * __RPC_USER HPALETTE_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HPALETTE * );
unsigned char * __RPC_USER HPALETTE_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HPALETTE * );
void __RPC_USER HPALETTE_UserFree( __RPC__in unsigned long *, __RPC__in HPALETTE * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HBITMAP_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree64( __RPC__in unsigned long *, __RPC__in HBITMAP * );
unsigned long __RPC_USER HICON_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * );
void __RPC_USER HICON_UserFree64( __RPC__in unsigned long *, __RPC__in HICON * );
unsigned long __RPC_USER HPALETTE_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HPALETTE * );
unsigned char * __RPC_USER HPALETTE_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HPALETTE * );
unsigned char * __RPC_USER HPALETTE_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HPALETTE * );
void __RPC_USER HPALETTE_UserFree64( __RPC__in unsigned long *, __RPC__in HPALETTE * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}
