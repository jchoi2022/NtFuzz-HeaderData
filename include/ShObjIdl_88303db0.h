#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IQueryCodePage IQueryCodePage;
typedef interface IFolderViewOptions IFolderViewOptions;
typedef interface IShellView3 IShellView3;
typedef interface ISearchBoxInfo ISearchBoxInfo;
typedef interface IVisualProperties IVisualProperties;
typedef interface ICommDlgBrowser3 ICommDlgBrowser3;
typedef interface IUserAccountChangeCallback IUserAccountChangeCallback;
typedef interface IStreamAsync IStreamAsync;
typedef interface IStreamUnbufferedInfo IStreamUnbufferedInfo;
typedef interface IDragSourceHelper2 IDragSourceHelper2;
typedef interface IHWEventHandler IHWEventHandler;
typedef interface IHWEventHandler2 IHWEventHandler2;
typedef interface IQueryCancelAutoPlay IQueryCancelAutoPlay;
typedef interface IDynamicHWHandler IDynamicHWHandler;
typedef interface IUserNotificationCallback IUserNotificationCallback;
typedef interface IUserNotification2 IUserNotification2;
typedef interface IDeskBand2 IDeskBand2;
typedef interface IStartMenuPinnedList IStartMenuPinnedList;
typedef interface ICDBurn ICDBurn;
typedef interface IWizardSite IWizardSite;
typedef interface IWizardExtension IWizardExtension;
typedef interface IWebWizardExtension IWebWizardExtension;
typedef interface IPublishingWizard IPublishingWizard;
typedef interface IFolderViewHost IFolderViewHost;
typedef interface IAccessibleObject IAccessibleObject;
typedef interface IResultsFolder IResultsFolder;
typedef interface IAutoCompleteDropDown IAutoCompleteDropDown;
typedef interface ICDBurnExt ICDBurnExt;
typedef interface IEnumReadyCallback IEnumReadyCallback;
typedef interface IEnumerableView IEnumerableView;
typedef interface IInsertItem IInsertItem;
typedef interface IFolderBandPriv IFolderBandPriv;
typedef interface IImageRecompress IImageRecompress;
typedef interface IFileDialogControlEvents IFileDialogControlEvents;
typedef interface IFileDialog2 IFileDialog2;
typedef interface IApplicationAssociationRegistrationUI IApplicationAssociationRegistrationUI;
typedef interface IShellRunDll IShellRunDll;
typedef interface IPreviousVersionsInfo IPreviousVersionsInfo;
typedef interface IUseToBrowseItem IUseToBrowseItem;
typedef interface INameSpaceTreeControl2 INameSpaceTreeControl2;
typedef interface INameSpaceTreeControlEvents INameSpaceTreeControlEvents;
typedef interface INameSpaceTreeControlDropHandler INameSpaceTreeControlDropHandler;
typedef interface INameSpaceTreeAccessible INameSpaceTreeAccessible;
typedef interface INameSpaceTreeControlCustomDraw INameSpaceTreeControlCustomDraw;
typedef interface ITrayDeskBand ITrayDeskBand;
typedef interface IBandHost IBandHost;
typedef interface IMarkupCallback IMarkupCallback;
typedef interface IControlMarkup IControlMarkup;
typedef interface IComputerInfoChangeNotify IComputerInfoChangeNotify;
typedef interface IDesktopGadget IDesktopGadget;
typedef class QueryCancelAutoPlay QueryCancelAutoPlay;
typedef class TimeCategorizer TimeCategorizer;
typedef class AlphabeticalCategorizer AlphabeticalCategorizer;
typedef class MergedCategorizer MergedCategorizer;
typedef class ImageProperties ImageProperties;
typedef class CDBurn CDBurn;
typedef class StartMenuPin StartMenuPin;
typedef class WebWizardHost WebWizardHost;
typedef class PublishDropTarget PublishDropTarget;
typedef class PublishingWizard PublishingWizard;
typedef class InternetPrintOrdering InternetPrintOrdering;
typedef class FolderViewHost FolderViewHost;
typedef class ExplorerBrowser ExplorerBrowser;
typedef class ImageRecompress ImageRecompress;
typedef class TrayBandSiteService TrayBandSiteService;
typedef class TrayDeskBand TrayDeskBand;
typedef class AttachmentServices AttachmentServices;
typedef class DocPropShellExtension DocPropShellExtension;
typedef class FSCopyHandler FSCopyHandler;
typedef class PreviousVersions PreviousVersions;
typedef class NamespaceTreeControl NamespaceTreeControl;
typedef class IENamespaceTreeControl IENamespaceTreeControl;
typedef class ApplicationAssociationRegistrationUI ApplicationAssociationRegistrationUI;
typedef class DesktopGadget DesktopGadget;
typedef class AccessibilityDockingService AccessibilityDockingService;
typedef class ExecuteFolder ExecuteFolder;
typedef class VirtualDesktopManager VirtualDesktopManager;
typedef class StorageProviderBanners StorageProviderBanners;
typedef interface IAccessibilityDockingServiceCallback IAccessibilityDockingServiceCallback;
typedef interface IAccessibilityDockingService IAccessibilityDockingService;
typedef interface IBannerNotificationHandler IBannerNotificationHandler;
typedef interface IStorageProviderBanners IStorageProviderBanners;
#include "objidl.h"
#include "oleidl.h"
#include "oaidl.h"
#include "docobj.h"
#include "shtypes.h"
#include "comcat.h"
#include "propidl.h"
#include "prsht.h"
#include "propsys.h"
#include "ObjectArray.h"
#include "shobjidl_core.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <sherrors.h>
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IQueryCodePage;
    typedef struct IQueryCodePageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IQueryCodePage * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IQueryCodePage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IQueryCodePage * This);
        HRESULT ( STDMETHODCALLTYPE *GetCodePage )(
            IQueryCodePage * This,
            _Out_ UINT *puiCodePage);
        HRESULT ( STDMETHODCALLTYPE *SetCodePage )(
            IQueryCodePage * This,
            _In_ UINT uiCodePage);
        END_INTERFACE
    } IQueryCodePageVtbl;
    interface IQueryCodePage
    {
        CONST_VTBL struct IQueryCodePageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCodePage(This,puiCodePage) )
    ( (This)->lpVtbl -> SetCodePage(This,uiCodePage) )
typedef
enum SYNC_ENGINE_STATE_FLAGS
    {
        SESF_NONE = 0,
        SESF_SERVICE_QUOTA_NEARING_LIMIT = 0x1,
        SESF_SERVICE_QUOTA_EXCEEDED_LIMIT = 0x2,
        SESF_AUTHENTICATION_ERROR = 0x4,
        SESF_PAUSED_DUE_TO_METERED_NETWORK = 0x8,
        SESF_PAUSED_DUE_TO_DISK_SPACE_FULL = 0x10,
        SESF_PAUSED_DUE_TO_CLIENT_POLICY = 0x20,
        SESF_PAUSED_DUE_TO_SERVICE_POLICY = 0x40,
        SESF_SERVICE_UNAVAILABLE = 0x80,
        SESF_PAUSED_DUE_TO_USER_REQUEST = 0x100,
        SESF_ALL_FLAGS = ( ( ( ( ( ( ( ( ( SESF_NONE | SESF_SERVICE_QUOTA_NEARING_LIMIT ) | SESF_SERVICE_QUOTA_EXCEEDED_LIMIT ) | SESF_AUTHENTICATION_ERROR ) | SESF_PAUSED_DUE_TO_METERED_NETWORK ) | SESF_PAUSED_DUE_TO_DISK_SPACE_FULL ) | SESF_PAUSED_DUE_TO_CLIENT_POLICY ) | SESF_PAUSED_DUE_TO_SERVICE_POLICY ) | SESF_SERVICE_UNAVAILABLE ) | SESF_PAUSED_DUE_TO_USER_REQUEST )
    } SYNC_ENGINE_STATE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(SYNC_ENGINE_STATE_FLAGS)
typedef char *LPVIEWSETTINGS;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0001_v0_0_s_ifspec;
typedef
enum FOLDERVIEWOPTIONS
    {
        FVO_DEFAULT = 0,
        FVO_VISTALAYOUT = 0x1,
        FVO_CUSTOMPOSITION = 0x2,
        FVO_CUSTOMORDERING = 0x4,
        FVO_SUPPORTHYPERLINKS = 0x8,
        FVO_NOANIMATIONS = 0x10,
        FVO_NOSCROLLTIPS = 0x20
    } FOLDERVIEWOPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(FOLDERVIEWOPTIONS)
EXTERN_C const IID IID_IFolderViewOptions;
    typedef struct IFolderViewOptionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFolderViewOptions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFolderViewOptions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFolderViewOptions * This);
        HRESULT ( STDMETHODCALLTYPE *SetFolderViewOptions )(
            __RPC__in IFolderViewOptions * This,
                       FOLDERVIEWOPTIONS fvoMask,
                       FOLDERVIEWOPTIONS fvoFlags);
        HRESULT ( STDMETHODCALLTYPE *GetFolderViewOptions )(
            __RPC__in IFolderViewOptions * This,
                        __RPC__out FOLDERVIEWOPTIONS *pfvoFlags);
        END_INTERFACE
    } IFolderViewOptionsVtbl;
    interface IFolderViewOptions
    {
        CONST_VTBL struct IFolderViewOptionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFolderViewOptions(This,fvoMask,fvoFlags) )
    ( (This)->lpVtbl -> GetFolderViewOptions(This,pfvoFlags) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0002_v0_0_s_ifspec;
enum _SV3CVW3_FLAGS
    {
        SV3CVW3_DEFAULT = 0,
        SV3CVW3_NONINTERACTIVE = 0x1,
        SV3CVW3_FORCEVIEWMODE = 0x2,
        SV3CVW3_FORCEFOLDERFLAGS = 0x4
    } ;
typedef DWORD SV3CVW3_FLAGS;
EXTERN_C const IID IID_IShellView3;
    typedef struct IShellView3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellView3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellView3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellView3 * This);
                           HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            __RPC__in IShellView3 * This,
                        __RPC__deref_out_opt HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )(
            __RPC__in IShellView3 * This,
                       BOOL fEnterMode);
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )(
            __RPC__in IShellView3 * This,
                       __RPC__in MSG *pmsg);
        HRESULT ( STDMETHODCALLTYPE *EnableModeless )(
            __RPC__in IShellView3 * This,
                       BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *UIActivate )(
            __RPC__in IShellView3 * This,
                       UINT uState);
        HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IShellView3 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateViewWindow )(
            __RPC__in IShellView3 * This,
                               __RPC__in_opt IShellView *psvPrevious,
                       __RPC__in LPCFOLDERSETTINGS pfs,
                       __RPC__in_opt IShellBrowser *psb,
                       __RPC__in RECT *prcView,
                        __RPC__deref_out_opt HWND *phWnd);
        HRESULT ( STDMETHODCALLTYPE *DestroyViewWindow )(
            __RPC__in IShellView3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentInfo )(
            __RPC__in IShellView3 * This,
                        __RPC__out LPFOLDERSETTINGS pfs);
                      HRESULT ( STDMETHODCALLTYPE *AddPropertySheetPages )(
            IShellView3 * This,
            _In_ DWORD dwReserved,
            _In_ LPFNSVADDPROPSHEETPAGE pfn,
            _In_ LPARAM lparam);
        HRESULT ( STDMETHODCALLTYPE *SaveViewState )(
            __RPC__in IShellView3 * This);
        HRESULT ( STDMETHODCALLTYPE *SelectItem )(
            __RPC__in IShellView3 * This,
                               __RPC__in_opt PCUITEMID_CHILD pidlItem,
                       SVSIF uFlags);
        HRESULT ( STDMETHODCALLTYPE *GetItemObject )(
            __RPC__in IShellView3 * This,
                       UINT uItem,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetView )(
            __RPC__in IShellView3 * This,
                            __RPC__inout SHELLVIEWID *pvid,
                       ULONG uView);
        HRESULT ( STDMETHODCALLTYPE *CreateViewWindow2 )(
            __RPC__in IShellView3 * This,
                       __RPC__in LPSV2CVW2_PARAMS lpParams);
        HRESULT ( STDMETHODCALLTYPE *HandleRename )(
            __RPC__in IShellView3 * This,
                               __RPC__in_opt PCUITEMID_CHILD pidlNew);
        HRESULT ( STDMETHODCALLTYPE *SelectAndPositionItem )(
            __RPC__in IShellView3 * This,
                               __RPC__in_opt PCUITEMID_CHILD pidlItem,
                       UINT uFlags,
                               __RPC__in_opt POINT *ppt);
        HRESULT ( STDMETHODCALLTYPE *CreateViewWindow3 )(
            __RPC__in IShellView3 * This,
                       __RPC__in_opt IShellBrowser *psbOwner,
                               __RPC__in_opt IShellView *psvPrev,
                       SV3CVW3_FLAGS dwViewFlags,
                       FOLDERFLAGS dwMask,
                       FOLDERFLAGS dwFlags,
                       FOLDERVIEWMODE fvMode,
                               __RPC__in_opt const SHELLVIEWID *pvid,
                       __RPC__in const RECT *prcView,
                        __RPC__deref_out_opt HWND *phwndView);
        END_INTERFACE
    } IShellView3Vtbl;
    interface IShellView3
    {
        CONST_VTBL struct IShellView3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
    ( (This)->lpVtbl -> TranslateAccelerator(This,pmsg) )
    ( (This)->lpVtbl -> EnableModeless(This,fEnable) )
    ( (This)->lpVtbl -> UIActivate(This,uState) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> CreateViewWindow(This,psvPrevious,pfs,psb,prcView,phWnd) )
    ( (This)->lpVtbl -> DestroyViewWindow(This) )
    ( (This)->lpVtbl -> GetCurrentInfo(This,pfs) )
    ( (This)->lpVtbl -> AddPropertySheetPages(This,dwReserved,pfn,lparam) )
    ( (This)->lpVtbl -> SaveViewState(This) )
    ( (This)->lpVtbl -> SelectItem(This,pidlItem,uFlags) )
    ( (This)->lpVtbl -> GetItemObject(This,uItem,riid,ppv) )
    ( (This)->lpVtbl -> GetView(This,pvid,uView) )
    ( (This)->lpVtbl -> CreateViewWindow2(This,lpParams) )
    ( (This)->lpVtbl -> HandleRename(This,pidlNew) )
    ( (This)->lpVtbl -> SelectAndPositionItem(This,pidlItem,uFlags,ppt) )
    ( (This)->lpVtbl -> CreateViewWindow3(This,psbOwner,psvPrev,dwViewFlags,dwMask,dwFlags,fvMode,pvid,prcView,phwndView) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_ISearchBoxInfo;
    typedef struct ISearchBoxInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISearchBoxInfo * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISearchBoxInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISearchBoxInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetCondition )(
            __RPC__in ISearchBoxInfo * This,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetText )(
            __RPC__in ISearchBoxInfo * This,
                                __RPC__deref_out_opt_string LPWSTR *ppsz);
        END_INTERFACE
    } ISearchBoxInfoVtbl;
    interface ISearchBoxInfo
    {
        CONST_VTBL struct ISearchBoxInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCondition(This,riid,ppv) )
    ( (This)->lpVtbl -> GetText(This,ppsz) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0004_v0_0_s_ifspec;
typedef
enum VPWATERMARKFLAGS
    {
        VPWF_DEFAULT = 0,
        VPWF_ALPHABLEND = 0x1
    } VPWATERMARKFLAGS;
DEFINE_ENUM_FLAG_OPERATORS(VPWATERMARKFLAGS)
typedef
enum VPCOLORFLAGS
    {
        VPCF_TEXT = 1,
        VPCF_BACKGROUND = 2,
        VPCF_SORTCOLUMN = 3,
        VPCF_SUBTEXT = 4,
        VPCF_TEXTBACKGROUND = 5
    } VPCOLORFLAGS;
EXTERN_C const IID IID_IVisualProperties;
    typedef struct IVisualPropertiesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVisualProperties * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVisualProperties * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVisualProperties * This);
        HRESULT ( STDMETHODCALLTYPE *SetWatermark )(
            __RPC__in IVisualProperties * This,
                               __RPC__in_opt HBITMAP hbmp,
                       VPWATERMARKFLAGS vpwf);
        HRESULT ( STDMETHODCALLTYPE *SetColor )(
            __RPC__in IVisualProperties * This,
                       VPCOLORFLAGS vpcf,
                       COLORREF cr);
        HRESULT ( STDMETHODCALLTYPE *GetColor )(
            __RPC__in IVisualProperties * This,
                       VPCOLORFLAGS vpcf,
                        __RPC__out COLORREF *pcr);
        HRESULT ( STDMETHODCALLTYPE *SetItemHeight )(
            __RPC__in IVisualProperties * This,
                       int cyItemInPixels);
        HRESULT ( STDMETHODCALLTYPE *GetItemHeight )(
            __RPC__in IVisualProperties * This,
                        __RPC__out int *cyItemInPixels);
        HRESULT ( STDMETHODCALLTYPE *SetFont )(
            __RPC__in IVisualProperties * This,
                       __RPC__in const LOGFONTW *plf,
                       BOOL bRedraw);
        HRESULT ( STDMETHODCALLTYPE *GetFont )(
            __RPC__in IVisualProperties * This,
                        __RPC__out LOGFONTW *plf);
        HRESULT ( STDMETHODCALLTYPE *SetTheme )(
            __RPC__in IVisualProperties * This,
                                       __RPC__in_opt_string LPCWSTR pszSubAppName,
                                       __RPC__in_opt_string LPCWSTR pszSubIdList);
        END_INTERFACE
    } IVisualPropertiesVtbl;
    interface IVisualProperties
    {
        CONST_VTBL struct IVisualPropertiesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetWatermark(This,hbmp,vpwf) )
    ( (This)->lpVtbl -> SetColor(This,vpcf,cr) )
    ( (This)->lpVtbl -> GetColor(This,vpcf,pcr) )
    ( (This)->lpVtbl -> SetItemHeight(This,cyItemInPixels) )
    ( (This)->lpVtbl -> GetItemHeight(This,cyItemInPixels) )
    ( (This)->lpVtbl -> SetFont(This,plf,bRedraw) )
    ( (This)->lpVtbl -> GetFont(This,plf) )
    ( (This)->lpVtbl -> SetTheme(This,pszSubAppName,pszSubIdList) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_ICommDlgBrowser3;
    typedef struct ICommDlgBrowser3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICommDlgBrowser3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICommDlgBrowser3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICommDlgBrowser3 * This);
        HRESULT ( STDMETHODCALLTYPE *OnDefaultCommand )(
            __RPC__in ICommDlgBrowser3 * This,
                       __RPC__in_opt IShellView *ppshv);
        HRESULT ( STDMETHODCALLTYPE *OnStateChange )(
            __RPC__in ICommDlgBrowser3 * This,
                       __RPC__in_opt IShellView *ppshv,
                       ULONG uChange);
        HRESULT ( STDMETHODCALLTYPE *IncludeObject )(
            __RPC__in ICommDlgBrowser3 * This,
                               __RPC__in_opt IShellView *ppshv,
                       __RPC__in PCUITEMID_CHILD pidl);
        HRESULT ( STDMETHODCALLTYPE *Notify )(
            __RPC__in ICommDlgBrowser3 * This,
                       __RPC__in_opt IShellView *ppshv,
                       DWORD dwNotifyType);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultMenuText )(
            __RPC__in ICommDlgBrowser3 * This,
                       __RPC__in_opt IShellView *ppshv,
                                         __RPC__out_ecount_full_string(cchMax) LPWSTR pszText,
                       int cchMax);
        HRESULT ( STDMETHODCALLTYPE *GetViewFlags )(
            __RPC__in ICommDlgBrowser3 * This,
                        __RPC__out DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *OnColumnClicked )(
            __RPC__in ICommDlgBrowser3 * This,
                       __RPC__in_opt IShellView *ppshv,
                       int iColumn);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentFilter )(
            __RPC__in ICommDlgBrowser3 * This,
                                         __RPC__out_ecount_full_string(cchFileSpec) LPWSTR pszFileSpec,
                       int cchFileSpec);
        HRESULT ( STDMETHODCALLTYPE *OnPreViewCreated )(
            __RPC__in ICommDlgBrowser3 * This,
                       __RPC__in_opt IShellView *ppshv);
        END_INTERFACE
    } ICommDlgBrowser3Vtbl;
    interface ICommDlgBrowser3
    {
        CONST_VTBL struct ICommDlgBrowser3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnDefaultCommand(This,ppshv) )
    ( (This)->lpVtbl -> OnStateChange(This,ppshv,uChange) )
    ( (This)->lpVtbl -> IncludeObject(This,ppshv,pidl) )
    ( (This)->lpVtbl -> Notify(This,ppshv,dwNotifyType) )
    ( (This)->lpVtbl -> GetDefaultMenuText(This,ppshv,pszText,cchMax) )
    ( (This)->lpVtbl -> GetViewFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> OnColumnClicked(This,ppshv,iColumn) )
    ( (This)->lpVtbl -> GetCurrentFilter(This,pszFileSpec,cchFileSpec) )
    ( (This)->lpVtbl -> OnPreViewCreated(This,ppshv) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IUserAccountChangeCallback;
    typedef struct IUserAccountChangeCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUserAccountChangeCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUserAccountChangeCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUserAccountChangeCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnPictureChange )(
            __RPC__in IUserAccountChangeCallback * This,
                               __RPC__in_string LPCWSTR pszUserName);
        END_INTERFACE
    } IUserAccountChangeCallbackVtbl;
    interface IUserAccountChangeCallback
    {
        CONST_VTBL struct IUserAccountChangeCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnPictureChange(This,pszUserName) )
typedef struct _OVERLAPPED
    {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union
        {
        struct
            {
            DWORD Offset;
            DWORD OffsetHigh;
            } ;
        PVOID Pointer;
        } ;
    HANDLE hEvent;
    } OVERLAPPED;
typedef struct _OVERLAPPED *LPOVERLAPPED;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IStreamAsync;
    typedef struct IStreamAsyncVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IStreamAsync * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IStreamAsync * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IStreamAsync * This);
                      HRESULT ( STDMETHODCALLTYPE *Read )(
            IStreamAsync * This,
            _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbRead);
                      HRESULT ( STDMETHODCALLTYPE *Write )(
            IStreamAsync * This,
            _In_reads_bytes_(cb) const void *pv,
            _In_ ULONG cb,
            _Out_opt_ ULONG *pcbWritten);
                      HRESULT ( STDMETHODCALLTYPE *Seek )(
            IStreamAsync * This,
                       LARGE_INTEGER dlibMove,
                       DWORD dwOrigin,
            _Out_opt_ ULARGE_INTEGER *plibNewPosition);
        HRESULT ( STDMETHODCALLTYPE *SetSize )(
            IStreamAsync * This,
                       ULARGE_INTEGER libNewSize);
                      HRESULT ( STDMETHODCALLTYPE *CopyTo )(
            IStreamAsync * This,
            _In_ IStream *pstm,
                       ULARGE_INTEGER cb,
            _Out_opt_ ULARGE_INTEGER *pcbRead,
            _Out_opt_ ULARGE_INTEGER *pcbWritten);
        HRESULT ( STDMETHODCALLTYPE *Commit )(
            IStreamAsync * This,
                       DWORD grfCommitFlags);
        HRESULT ( STDMETHODCALLTYPE *Revert )(
            IStreamAsync * This);
        HRESULT ( STDMETHODCALLTYPE *LockRegion )(
            IStreamAsync * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *UnlockRegion )(
            IStreamAsync * This,
                       ULARGE_INTEGER libOffset,
                       ULARGE_INTEGER cb,
                       DWORD dwLockType);
        HRESULT ( STDMETHODCALLTYPE *Stat )(
            IStreamAsync * This,
                        STATSTG *pstatstg,
                       DWORD grfStatFlag);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IStreamAsync * This,
                        IStream **ppstm);
        HRESULT ( STDMETHODCALLTYPE *ReadAsync )(
            IStreamAsync * This,
            _Out_writes_bytes_to_(cb, *pcbRead) void *pv,
                       DWORD cb,
            _Out_opt_ _Deref_out_range_(0, cb) LPDWORD pcbRead,
            _In_ LPOVERLAPPED lpOverlapped);
        HRESULT ( STDMETHODCALLTYPE *WriteAsync )(
            IStreamAsync * This,
            _In_reads_bytes_(cb) const void *lpBuffer,
                       DWORD cb,
            _Out_opt_ _Deref_out_range_(0, cb) LPDWORD pcbWritten,
            _In_ LPOVERLAPPED lpOverlapped);
        HRESULT ( STDMETHODCALLTYPE *OverlappedResult )(
            IStreamAsync * This,
            _In_ LPOVERLAPPED lpOverlapped,
            _Out_ LPDWORD lpNumberOfBytesTransferred,
            _In_ BOOL bWait);
        HRESULT ( STDMETHODCALLTYPE *CancelIo )(
            IStreamAsync * This);
        END_INTERFACE
    } IStreamAsyncVtbl;
    interface IStreamAsync
    {
        CONST_VTBL struct IStreamAsyncVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Read(This,pv,cb,pcbRead) )
    ( (This)->lpVtbl -> Write(This,pv,cb,pcbWritten) )
    ( (This)->lpVtbl -> Seek(This,dlibMove,dwOrigin,plibNewPosition) )
    ( (This)->lpVtbl -> SetSize(This,libNewSize) )
    ( (This)->lpVtbl -> CopyTo(This,pstm,cb,pcbRead,pcbWritten) )
    ( (This)->lpVtbl -> Commit(This,grfCommitFlags) )
    ( (This)->lpVtbl -> Revert(This) )
    ( (This)->lpVtbl -> LockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> UnlockRegion(This,libOffset,cb,dwLockType) )
    ( (This)->lpVtbl -> Stat(This,pstatstg,grfStatFlag) )
    ( (This)->lpVtbl -> Clone(This,ppstm) )
    ( (This)->lpVtbl -> ReadAsync(This,pv,cb,pcbRead,lpOverlapped) )
    ( (This)->lpVtbl -> WriteAsync(This,lpBuffer,cb,pcbWritten,lpOverlapped) )
    ( (This)->lpVtbl -> OverlappedResult(This,lpOverlapped,lpNumberOfBytesTransferred,bWait) )
    ( (This)->lpVtbl -> CancelIo(This) )
EXTERN_C const IID IID_IStreamUnbufferedInfo;
    typedef struct IStreamUnbufferedInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IStreamUnbufferedInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IStreamUnbufferedInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IStreamUnbufferedInfo * This);
        HRESULT ( STDMETHODCALLTYPE *GetSectorSize )(
            IStreamUnbufferedInfo * This,
            _Out_ ULONG *pcbSectorSize);
        END_INTERFACE
    } IStreamUnbufferedInfoVtbl;
    interface IStreamUnbufferedInfo
    {
        CONST_VTBL struct IStreamUnbufferedInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSectorSize(This,pcbSectorSize) )
SHSTDAPI SHRemovePersonalPropertyValues(_In_ IShellItemArray *psia);
SHSTDAPI SHAddDefaultPropertiesByExt(_In_ PCWSTR pszExt, _In_ IPropertyStore *pPropStore);
SHSTDAPI SHCreateDefaultPropertiesOp(_In_ IShellItem *psi, _Outptr_ IFileOperation **ppFileOp);
SHSTDAPI SHSetDefaultProperties(_In_opt_ HWND hwnd, _In_ IShellItem *psi, DWORD dwFileOpFlags, _In_opt_ IFileOperationProgressSink *pfops);
typedef
enum DSH_FLAGS
    {
        DSH_ALLOWDROPDESCRIPTIONTEXT = 0x1
    } DSH_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(DSH_FLAGS)
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IDragSourceHelper2;
    typedef struct IDragSourceHelper2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDragSourceHelper2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDragSourceHelper2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDragSourceHelper2 * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromBitmap )(
            IDragSourceHelper2 * This,
            _In_ LPSHDRAGIMAGE pshdi,
            _In_ IDataObject *pDataObject);
        HRESULT ( STDMETHODCALLTYPE *InitializeFromWindow )(
            IDragSourceHelper2 * This,
            _In_opt_ HWND hwnd,
            _In_opt_ POINT *ppt,
            _In_ IDataObject *pDataObject);
        HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            IDragSourceHelper2 * This,
            _In_ DWORD dwFlags);
        END_INTERFACE
    } IDragSourceHelper2Vtbl;
    interface IDragSourceHelper2
    {
        CONST_VTBL struct IDragSourceHelper2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InitializeFromBitmap(This,pshdi,pDataObject) )
    ( (This)->lpVtbl -> InitializeFromWindow(This,hwnd,ppt,pDataObject) )
    ( (This)->lpVtbl -> SetFlags(This,dwFlags) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0010_v0_0_s_ifspec;
EXTERN_C const IID IID_IHWEventHandler;
    typedef struct IHWEventHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHWEventHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHWEventHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHWEventHandler * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IHWEventHandler * This,
                               __RPC__in_string LPCWSTR pszParams);
        HRESULT ( STDMETHODCALLTYPE *HandleEvent )(
            __RPC__in IHWEventHandler * This,
                               __RPC__in_string LPCWSTR pszDeviceID,
                               __RPC__in_string LPCWSTR pszAltDeviceID,
                               __RPC__in_string LPCWSTR pszEventType);
        HRESULT ( STDMETHODCALLTYPE *HandleEventWithContent )(
            __RPC__in IHWEventHandler * This,
                               __RPC__in_string LPCWSTR pszDeviceID,
                               __RPC__in_string LPCWSTR pszAltDeviceID,
                               __RPC__in_string LPCWSTR pszEventType,
                               __RPC__in_string LPCWSTR pszContentTypeHandler,
                       __RPC__in_opt IDataObject *pdataobject);
        END_INTERFACE
    } IHWEventHandlerVtbl;
    interface IHWEventHandler
    {
        CONST_VTBL struct IHWEventHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pszParams) )
    ( (This)->lpVtbl -> HandleEvent(This,pszDeviceID,pszAltDeviceID,pszEventType) )
    ( (This)->lpVtbl -> HandleEventWithContent(This,pszDeviceID,pszAltDeviceID,pszEventType,pszContentTypeHandler,pdataobject) )
EXTERN_C const IID IID_IHWEventHandler2;
    typedef struct IHWEventHandler2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHWEventHandler2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHWEventHandler2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHWEventHandler2 * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IHWEventHandler2 * This,
                               __RPC__in_string LPCWSTR pszParams);
        HRESULT ( STDMETHODCALLTYPE *HandleEvent )(
            __RPC__in IHWEventHandler2 * This,
                               __RPC__in_string LPCWSTR pszDeviceID,
                               __RPC__in_string LPCWSTR pszAltDeviceID,
                               __RPC__in_string LPCWSTR pszEventType);
        HRESULT ( STDMETHODCALLTYPE *HandleEventWithContent )(
            __RPC__in IHWEventHandler2 * This,
                               __RPC__in_string LPCWSTR pszDeviceID,
                               __RPC__in_string LPCWSTR pszAltDeviceID,
                               __RPC__in_string LPCWSTR pszEventType,
                               __RPC__in_string LPCWSTR pszContentTypeHandler,
                       __RPC__in_opt IDataObject *pdataobject);
        HRESULT ( STDMETHODCALLTYPE *HandleEventWithHWND )(
            __RPC__in IHWEventHandler2 * This,
                               __RPC__in_string LPCWSTR pszDeviceID,
                               __RPC__in_string LPCWSTR pszAltDeviceID,
                               __RPC__in_string LPCWSTR pszEventType,
                       __RPC__in HWND hwndOwner);
        END_INTERFACE
    } IHWEventHandler2Vtbl;
    interface IHWEventHandler2
    {
        CONST_VTBL struct IHWEventHandler2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pszParams) )
    ( (This)->lpVtbl -> HandleEvent(This,pszDeviceID,pszAltDeviceID,pszEventType) )
    ( (This)->lpVtbl -> HandleEventWithContent(This,pszDeviceID,pszAltDeviceID,pszEventType,pszContentTypeHandler,pdataobject) )
    ( (This)->lpVtbl -> HandleEventWithHWND(This,pszDeviceID,pszAltDeviceID,pszEventType,hwndOwner) )
EXTERN_C const IID IID_IQueryCancelAutoPlay;
    typedef struct IQueryCancelAutoPlayVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IQueryCancelAutoPlay * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IQueryCancelAutoPlay * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IQueryCancelAutoPlay * This);
        HRESULT ( STDMETHODCALLTYPE *AllowAutoPlay )(
            __RPC__in IQueryCancelAutoPlay * This,
                               __RPC__in_string LPCWSTR pszPath,
                       DWORD dwContentType,
                               __RPC__in_string LPCWSTR pszLabel,
                       DWORD dwSerialNumber);
        END_INTERFACE
    } IQueryCancelAutoPlayVtbl;
    interface IQueryCancelAutoPlay
    {
        CONST_VTBL struct IQueryCancelAutoPlayVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AllowAutoPlay(This,pszPath,dwContentType,pszLabel,dwSerialNumber) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0013_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0013_v0_0_s_ifspec;
EXTERN_C const IID IID_IDynamicHWHandler;
    typedef struct IDynamicHWHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDynamicHWHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDynamicHWHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDynamicHWHandler * This);
        HRESULT ( STDMETHODCALLTYPE *GetDynamicInfo )(
            __RPC__in IDynamicHWHandler * This,
                               __RPC__in_string LPCWSTR pszDeviceID,
                       DWORD dwContentType,
                                __RPC__deref_out_opt_string LPWSTR *ppszAction);
        END_INTERFACE
    } IDynamicHWHandlerVtbl;
    interface IDynamicHWHandler
    {
        CONST_VTBL struct IDynamicHWHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDynamicInfo(This,pszDeviceID,dwContentType,ppszAction) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0014_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0014_v0_0_s_ifspec;
EXTERN_C const IID IID_IUserNotificationCallback;
    typedef struct IUserNotificationCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUserNotificationCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUserNotificationCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUserNotificationCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnBalloonUserClick )(
            __RPC__in IUserNotificationCallback * This,
                       __RPC__in POINT *pt);
        HRESULT ( STDMETHODCALLTYPE *OnLeftClick )(
            __RPC__in IUserNotificationCallback * This,
                       __RPC__in POINT *pt);
        HRESULT ( STDMETHODCALLTYPE *OnContextMenu )(
            __RPC__in IUserNotificationCallback * This,
                       __RPC__in POINT *pt);
        END_INTERFACE
    } IUserNotificationCallbackVtbl;
    interface IUserNotificationCallback
    {
        CONST_VTBL struct IUserNotificationCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnBalloonUserClick(This,pt) )
    ( (This)->lpVtbl -> OnLeftClick(This,pt) )
    ( (This)->lpVtbl -> OnContextMenu(This,pt) )
EXTERN_C const IID IID_IUserNotification2;
    typedef struct IUserNotification2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUserNotification2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUserNotification2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUserNotification2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetBalloonInfo )(
            __RPC__in IUserNotification2 * This,
                                       __RPC__in_opt_string LPCWSTR pszTitle,
                                       __RPC__in_opt_string LPCWSTR pszText,
                       DWORD dwInfoFlags);
        HRESULT ( STDMETHODCALLTYPE *SetBalloonRetry )(
            __RPC__in IUserNotification2 * This,
                       DWORD dwShowTime,
                       DWORD dwInterval,
                       UINT cRetryCount);
        HRESULT ( STDMETHODCALLTYPE *SetIconInfo )(
            __RPC__in IUserNotification2 * This,
                               __RPC__in_opt HICON hIcon,
                                       __RPC__in_opt_string LPCWSTR pszToolTip);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in IUserNotification2 * This,
                               __RPC__in_opt IQueryContinue *pqc,
                       DWORD dwContinuePollInterval,
                               __RPC__in_opt IUserNotificationCallback *pSink);
        HRESULT ( STDMETHODCALLTYPE *PlaySound )(
            __RPC__in IUserNotification2 * This,
                               __RPC__in_string LPCWSTR pszSoundName);
        END_INTERFACE
    } IUserNotification2Vtbl;
    interface IUserNotification2
    {
        CONST_VTBL struct IUserNotification2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetBalloonInfo(This,pszTitle,pszText,dwInfoFlags) )
    ( (This)->lpVtbl -> SetBalloonRetry(This,dwShowTime,dwInterval,cRetryCount) )
    ( (This)->lpVtbl -> SetIconInfo(This,hIcon,pszToolTip) )
    ( (This)->lpVtbl -> Show(This,pqc,dwContinuePollInterval,pSink) )
    ( (This)->lpVtbl -> PlaySound(This,pszSoundName) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0016_v0_0_s_ifspec;
EXTERN_C const IID IID_IDeskBand2;
    typedef struct IDeskBand2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDeskBand2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDeskBand2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDeskBand2 * This);
                           HRESULT ( STDMETHODCALLTYPE *GetWindow )(
            __RPC__in IDeskBand2 * This,
                        __RPC__deref_out_opt HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *ContextSensitiveHelp )(
            __RPC__in IDeskBand2 * This,
                       BOOL fEnterMode);
        HRESULT ( STDMETHODCALLTYPE *ShowDW )(
            __RPC__in IDeskBand2 * This,
                       BOOL fShow);
        HRESULT ( STDMETHODCALLTYPE *CloseDW )(
            __RPC__in IDeskBand2 * This,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *ResizeBorderDW )(
            __RPC__in IDeskBand2 * This,
                               __RPC__in_opt LPCRECT prcBorder,
                               __RPC__in_opt IUnknown *punkToolbarSite,
                       BOOL fReserved);
        HRESULT ( STDMETHODCALLTYPE *GetBandInfo )(
            __RPC__in IDeskBand2 * This,
                       DWORD dwBandID,
                       DWORD dwViewMode,
                            __RPC__inout DESKBANDINFO *pdbi);
        HRESULT ( STDMETHODCALLTYPE *CanRenderComposited )(
            __RPC__in IDeskBand2 * This,
                        __RPC__out BOOL *pfCanRenderComposited);
        HRESULT ( STDMETHODCALLTYPE *SetCompositionState )(
            __RPC__in IDeskBand2 * This,
                       BOOL fCompositionEnabled);
        HRESULT ( STDMETHODCALLTYPE *GetCompositionState )(
            __RPC__in IDeskBand2 * This,
                        __RPC__out BOOL *pfCompositionEnabled);
        END_INTERFACE
    } IDeskBand2Vtbl;
    interface IDeskBand2
    {
        CONST_VTBL struct IDeskBand2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetWindow(This,phwnd) )
    ( (This)->lpVtbl -> ContextSensitiveHelp(This,fEnterMode) )
    ( (This)->lpVtbl -> ShowDW(This,fShow) )
    ( (This)->lpVtbl -> CloseDW(This,dwReserved) )
    ( (This)->lpVtbl -> ResizeBorderDW(This,prcBorder,punkToolbarSite,fReserved) )
    ( (This)->lpVtbl -> GetBandInfo(This,dwBandID,dwViewMode,pdbi) )
    ( (This)->lpVtbl -> CanRenderComposited(This,pfCanRenderComposited) )
    ( (This)->lpVtbl -> SetCompositionState(This,fCompositionEnabled) )
    ( (This)->lpVtbl -> GetCompositionState(This,pfCompositionEnabled) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0017_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0017_v0_0_s_ifspec;
EXTERN_C const IID IID_IStartMenuPinnedList;
    typedef struct IStartMenuPinnedListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStartMenuPinnedList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStartMenuPinnedList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStartMenuPinnedList * This);
        HRESULT ( STDMETHODCALLTYPE *RemoveFromList )(
            __RPC__in IStartMenuPinnedList * This,
                       __RPC__in_opt IShellItem *pitem);
        END_INTERFACE
    } IStartMenuPinnedListVtbl;
    interface IStartMenuPinnedList
    {
        CONST_VTBL struct IStartMenuPinnedListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RemoveFromList(This,pitem) )
EXTERN_C const IID IID_ICDBurn;
    typedef struct ICDBurnVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICDBurn * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICDBurn * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICDBurn * This);
        HRESULT ( STDMETHODCALLTYPE *GetRecorderDriveLetter )(
            __RPC__in ICDBurn * This,
                                         __RPC__out_ecount_full_string(cch) LPWSTR pszDrive,
                       UINT cch);
        HRESULT ( STDMETHODCALLTYPE *Burn )(
            __RPC__in ICDBurn * This,
                       __RPC__in HWND hwnd);
        HRESULT ( STDMETHODCALLTYPE *HasRecordableDrive )(
            __RPC__in ICDBurn * This,
                        __RPC__out BOOL *pfHasRecorder);
        END_INTERFACE
    } ICDBurnVtbl;
    interface ICDBurn
    {
        CONST_VTBL struct ICDBurnVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRecorderDriveLetter(This,pszDrive,cch) )
    ( (This)->lpVtbl -> Burn(This,hwnd) )
    ( (This)->lpVtbl -> HasRecordableDrive(This,pfHasRecorder) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0019_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0019_v0_0_s_ifspec;
EXTERN_C const IID IID_IWizardSite;
    typedef struct IWizardSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWizardSite * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWizardSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWizardSite * This);
        HRESULT ( STDMETHODCALLTYPE *GetPreviousPage )(
            IWizardSite * This,
            _Out_ HPROPSHEETPAGE *phpage);
        HRESULT ( STDMETHODCALLTYPE *GetNextPage )(
            IWizardSite * This,
            _Out_ HPROPSHEETPAGE *phpage);
        HRESULT ( STDMETHODCALLTYPE *GetCancelledPage )(
            IWizardSite * This,
            _Out_ HPROPSHEETPAGE *phpage);
        END_INTERFACE
    } IWizardSiteVtbl;
    interface IWizardSite
    {
        CONST_VTBL struct IWizardSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPreviousPage(This,phpage) )
    ( (This)->lpVtbl -> GetNextPage(This,phpage) )
    ( (This)->lpVtbl -> GetCancelledPage(This,phpage) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0020_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0020_v0_0_s_ifspec;
EXTERN_C const IID IID_IWizardExtension;
    typedef struct IWizardExtensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWizardExtension * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWizardExtension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWizardExtension * This);
        HRESULT ( STDMETHODCALLTYPE *AddPages )(
            IWizardExtension * This,
            _Out_writes_to_(cPages, *pnPagesAdded) HPROPSHEETPAGE *aPages,
            _In_ UINT cPages,
            _Out_ _Deref_out_range_(0, cPages) UINT *pnPagesAdded);
        HRESULT ( STDMETHODCALLTYPE *GetFirstPage )(
            IWizardExtension * This,
            _Out_ HPROPSHEETPAGE *phpage);
        HRESULT ( STDMETHODCALLTYPE *GetLastPage )(
            IWizardExtension * This,
            _Out_ HPROPSHEETPAGE *phpage);
        END_INTERFACE
    } IWizardExtensionVtbl;
    interface IWizardExtension
    {
        CONST_VTBL struct IWizardExtensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddPages(This,aPages,cPages,pnPagesAdded) )
    ( (This)->lpVtbl -> GetFirstPage(This,phpage) )
    ( (This)->lpVtbl -> GetLastPage(This,phpage) )
EXTERN_C const IID IID_IWebWizardExtension;
    typedef struct IWebWizardExtensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWebWizardExtension * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWebWizardExtension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWebWizardExtension * This);
        HRESULT ( STDMETHODCALLTYPE *AddPages )(
            IWebWizardExtension * This,
            _Out_writes_to_(cPages, *pnPagesAdded) HPROPSHEETPAGE *aPages,
            _In_ UINT cPages,
            _Out_ _Deref_out_range_(0, cPages) UINT *pnPagesAdded);
        HRESULT ( STDMETHODCALLTYPE *GetFirstPage )(
            IWebWizardExtension * This,
            _Out_ HPROPSHEETPAGE *phpage);
        HRESULT ( STDMETHODCALLTYPE *GetLastPage )(
            IWebWizardExtension * This,
            _Out_ HPROPSHEETPAGE *phpage);
        HRESULT ( STDMETHODCALLTYPE *SetInitialURL )(
            IWebWizardExtension * This,
            _In_ LPCWSTR pszURL);
        HRESULT ( STDMETHODCALLTYPE *SetErrorURL )(
            IWebWizardExtension * This,
            _In_ LPCWSTR pszErrorURL);
        END_INTERFACE
    } IWebWizardExtensionVtbl;
    interface IWebWizardExtension
    {
        CONST_VTBL struct IWebWizardExtensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddPages(This,aPages,cPages,pnPagesAdded) )
    ( (This)->lpVtbl -> GetFirstPage(This,phpage) )
    ( (This)->lpVtbl -> GetLastPage(This,phpage) )
    ( (This)->lpVtbl -> SetInitialURL(This,pszURL) )
    ( (This)->lpVtbl -> SetErrorURL(This,pszErrorURL) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0022_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0022_v0_0_s_ifspec;
EXTERN_C const IID IID_IPublishingWizard;
    typedef struct IPublishingWizardVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPublishingWizard * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPublishingWizard * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPublishingWizard * This);
        HRESULT ( STDMETHODCALLTYPE *AddPages )(
            IPublishingWizard * This,
            _Out_writes_to_(cPages, *pnPagesAdded) HPROPSHEETPAGE *aPages,
            _In_ UINT cPages,
            _Out_ _Deref_out_range_(0, cPages) UINT *pnPagesAdded);
        HRESULT ( STDMETHODCALLTYPE *GetFirstPage )(
            IPublishingWizard * This,
            _Out_ HPROPSHEETPAGE *phpage);
        HRESULT ( STDMETHODCALLTYPE *GetLastPage )(
            IPublishingWizard * This,
            _Out_ HPROPSHEETPAGE *phpage);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IPublishingWizard * This,
            _In_opt_ IDataObject *pdo,
            _In_ DWORD dwOptions,
            _In_ LPCWSTR pszServiceScope);
        HRESULT ( STDMETHODCALLTYPE *GetTransferManifest )(
            IPublishingWizard * This,
            _Out_opt_ HRESULT *phrFromTransfer,
            _Outptr_opt_ IXMLDOMDocument **pdocManifest);
        END_INTERFACE
    } IPublishingWizardVtbl;
    interface IPublishingWizard
    {
        CONST_VTBL struct IPublishingWizardVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddPages(This,aPages,cPages,pnPagesAdded) )
    ( (This)->lpVtbl -> GetFirstPage(This,phpage) )
    ( (This)->lpVtbl -> GetLastPage(This,phpage) )
    ( (This)->lpVtbl -> Initialize(This,pdo,dwOptions,pszServiceScope) )
    ( (This)->lpVtbl -> GetTransferManifest(This,phrFromTransfer,pdocManifest) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0023_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0023_v0_0_s_ifspec;
EXTERN_C const IID IID_IFolderViewHost;
    typedef struct IFolderViewHostVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IFolderViewHost * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IFolderViewHost * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IFolderViewHost * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IFolderViewHost * This,
            _In_ HWND hwndParent,
            _In_ IDataObject *pdo,
            _In_ RECT *prc);
        END_INTERFACE
    } IFolderViewHostVtbl;
    interface IFolderViewHost
    {
        CONST_VTBL struct IFolderViewHostVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,hwndParent,pdo,prc) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0024_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0024_v0_0_s_ifspec;
EXTERN_C const IID IID_IAccessibleObject;
    typedef struct IAccessibleObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAccessibleObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAccessibleObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAccessibleObject * This);
        HRESULT ( STDMETHODCALLTYPE *SetAccessibleName )(
            __RPC__in IAccessibleObject * This,
                               __RPC__in_string LPCWSTR pszName);
        END_INTERFACE
    } IAccessibleObjectVtbl;
    interface IAccessibleObject
    {
        CONST_VTBL struct IAccessibleObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAccessibleName(This,pszName) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0025_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0025_v0_0_s_ifspec;
EXTERN_C const IID IID_IResultsFolder;
    typedef struct IResultsFolderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IResultsFolder * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IResultsFolder * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IResultsFolder * This);
        HRESULT ( STDMETHODCALLTYPE *AddItem )(
            __RPC__in IResultsFolder * This,
                       __RPC__in_opt IShellItem *psi);
                      HRESULT ( STDMETHODCALLTYPE *AddIDList )(
            IResultsFolder * This,
            _In_ PCIDLIST_ABSOLUTE pidl,
            _Outptr_opt_ PITEMID_CHILD *ppidlAdded);
        HRESULT ( STDMETHODCALLTYPE *RemoveItem )(
            __RPC__in IResultsFolder * This,
                       __RPC__in_opt IShellItem *psi);
        HRESULT ( STDMETHODCALLTYPE *RemoveIDList )(
            __RPC__in IResultsFolder * This,
                       __RPC__in PCIDLIST_ABSOLUTE pidl);
        HRESULT ( STDMETHODCALLTYPE *RemoveAll )(
            __RPC__in IResultsFolder * This);
        END_INTERFACE
    } IResultsFolderVtbl;
    interface IResultsFolder
    {
        CONST_VTBL struct IResultsFolderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddItem(This,psi) )
    ( (This)->lpVtbl -> AddIDList(This,pidl,ppidlAdded) )
    ( (This)->lpVtbl -> RemoveItem(This,psi) )
    ( (This)->lpVtbl -> RemoveIDList(This,pidl) )
    ( (This)->lpVtbl -> RemoveAll(This) )
                HRESULT STDMETHODCALLTYPE IResultsFolder_RemoteAddIDList_Proxy(
    __RPC__in IResultsFolder * This,
               __RPC__in PCIDLIST_ABSOLUTE pidl,
                __RPC__deref_out_opt PITEMID_CHILD *ppidlAdded);
void __RPC_STUB IResultsFolder_RemoteAddIDList_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0026_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0026_v0_0_s_ifspec;
EXTERN_C const IID IID_IAutoCompleteDropDown;
    typedef struct IAutoCompleteDropDownVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAutoCompleteDropDown * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAutoCompleteDropDown * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAutoCompleteDropDown * This);
        HRESULT ( STDMETHODCALLTYPE *GetDropDownStatus )(
            __RPC__in IAutoCompleteDropDown * This,
                        __RPC__out DWORD *pdwFlags,
                                __RPC__deref_out_opt_string LPWSTR *ppwszString);
        HRESULT ( STDMETHODCALLTYPE *ResetEnumerator )(
            __RPC__in IAutoCompleteDropDown * This);
        END_INTERFACE
    } IAutoCompleteDropDownVtbl;
    interface IAutoCompleteDropDown
    {
        CONST_VTBL struct IAutoCompleteDropDownVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDropDownStatus(This,pdwFlags,ppwszString) )
    ( (This)->lpVtbl -> ResetEnumerator(This) )
enum tagCDBURNINGEXTENSIONRET
    {
        CDBE_RET_DEFAULT = 0,
        CDBE_RET_DONTRUNOTHEREXTS = 0x1,
        CDBE_RET_STOPWIZARD = 0x2
    } ;
enum _CDBE_ACTIONS
    {
        CDBE_TYPE_MUSIC = 0x1,
        CDBE_TYPE_DATA = 0x2,
        CDBE_TYPE_ALL = ( int )0xffffffff
    } ;
typedef DWORD CDBE_ACTIONS;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0027_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0027_v0_0_s_ifspec;
EXTERN_C const IID IID_ICDBurnExt;
    typedef struct ICDBurnExtVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICDBurnExt * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICDBurnExt * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICDBurnExt * This);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedActionTypes )(
            __RPC__in ICDBurnExt * This,
                        __RPC__out CDBE_ACTIONS *pdwActions);
        END_INTERFACE
    } ICDBurnExtVtbl;
    interface ICDBurnExt
    {
        CONST_VTBL struct ICDBurnExtVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSupportedActionTypes(This,pdwActions) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0028_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0028_v0_0_s_ifspec;
EXTERN_C const IID IID_IEnumReadyCallback;
    typedef struct IEnumReadyCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumReadyCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumReadyCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumReadyCallback * This);
        HRESULT ( STDMETHODCALLTYPE *EnumReady )(
            IEnumReadyCallback * This);
        END_INTERFACE
    } IEnumReadyCallbackVtbl;
    interface IEnumReadyCallback
    {
        CONST_VTBL struct IEnumReadyCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumReady(This) )
EXTERN_C const IID IID_IEnumerableView;
    typedef struct IEnumerableViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumerableView * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumerableView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumerableView * This);
        HRESULT ( STDMETHODCALLTYPE *SetEnumReadyCallback )(
            IEnumerableView * This,
            _In_ IEnumReadyCallback *percb);
        HRESULT ( STDMETHODCALLTYPE *CreateEnumIDListFromContents )(
            IEnumerableView * This,
            _In_ PCIDLIST_ABSOLUTE pidlFolder,
            _In_ DWORD dwEnumFlags,
            _Outptr_ IEnumIDList **ppEnumIDList);
        END_INTERFACE
    } IEnumerableViewVtbl;
    interface IEnumerableView
    {
        CONST_VTBL struct IEnumerableViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetEnumReadyCallback(This,percb) )
    ( (This)->lpVtbl -> CreateEnumIDListFromContents(This,pidlFolder,dwEnumFlags,ppEnumIDList) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0030_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0030_v0_0_s_ifspec;
EXTERN_C const IID IID_IInsertItem;
    typedef struct IInsertItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IInsertItem * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IInsertItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IInsertItem * This);
        HRESULT ( STDMETHODCALLTYPE *InsertItem )(
            IInsertItem * This,
            _In_ PCUIDLIST_RELATIVE pidl);
        END_INTERFACE
    } IInsertItemVtbl;
    interface IInsertItem
    {
        CONST_VTBL struct IInsertItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> InsertItem(This,pidl) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0031_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0031_v0_0_s_ifspec;
EXTERN_C const IID IID_IFolderBandPriv;
    typedef struct IFolderBandPrivVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFolderBandPriv * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFolderBandPriv * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFolderBandPriv * This);
        HRESULT ( STDMETHODCALLTYPE *SetCascade )(
            __RPC__in IFolderBandPriv * This,
                       BOOL fCascade);
        HRESULT ( STDMETHODCALLTYPE *SetAccelerators )(
            __RPC__in IFolderBandPriv * This,
                       BOOL fAccelerators);
        HRESULT ( STDMETHODCALLTYPE *SetNoIcons )(
            __RPC__in IFolderBandPriv * This,
                       BOOL fNoIcons);
        HRESULT ( STDMETHODCALLTYPE *SetNoText )(
            __RPC__in IFolderBandPriv * This,
                       BOOL fNoText);
        END_INTERFACE
    } IFolderBandPrivVtbl;
    interface IFolderBandPriv
    {
        CONST_VTBL struct IFolderBandPrivVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetCascade(This,fCascade) )
    ( (This)->lpVtbl -> SetAccelerators(This,fAccelerators) )
    ( (This)->lpVtbl -> SetNoIcons(This,fNoIcons) )
    ( (This)->lpVtbl -> SetNoText(This,fNoText) )
EXTERN_C const IID IID_IImageRecompress;
    typedef struct IImageRecompressVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IImageRecompress * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IImageRecompress * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IImageRecompress * This);
        HRESULT ( STDMETHODCALLTYPE *RecompressImage )(
            __RPC__in IImageRecompress * This,
                       __RPC__in_opt IShellItem *psi,
                       int cx,
                       int cy,
                       int iQuality,
                       __RPC__in_opt IStorage *pstg,
                        __RPC__deref_out_opt IStream **ppstrmOut);
        END_INTERFACE
    } IImageRecompressVtbl;
    interface IImageRecompress
    {
        CONST_VTBL struct IImageRecompressVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RecompressImage(This,psi,cx,cy,iQuality,pstg,ppstrmOut) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0033_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0033_v0_0_s_ifspec;
EXTERN_C const IID IID_IFileDialogControlEvents;
    typedef struct IFileDialogControlEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFileDialogControlEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFileDialogControlEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFileDialogControlEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnItemSelected )(
            __RPC__in IFileDialogControlEvents * This,
                       __RPC__in_opt IFileDialogCustomize *pfdc,
                       DWORD dwIDCtl,
                       DWORD dwIDItem);
        HRESULT ( STDMETHODCALLTYPE *OnButtonClicked )(
            __RPC__in IFileDialogControlEvents * This,
                       __RPC__in_opt IFileDialogCustomize *pfdc,
                       DWORD dwIDCtl);
        HRESULT ( STDMETHODCALLTYPE *OnCheckButtonToggled )(
            __RPC__in IFileDialogControlEvents * This,
                       __RPC__in_opt IFileDialogCustomize *pfdc,
                       DWORD dwIDCtl,
                       BOOL bChecked);
        HRESULT ( STDMETHODCALLTYPE *OnControlActivating )(
            __RPC__in IFileDialogControlEvents * This,
                       __RPC__in_opt IFileDialogCustomize *pfdc,
                       DWORD dwIDCtl);
        END_INTERFACE
    } IFileDialogControlEventsVtbl;
    interface IFileDialogControlEvents
    {
        CONST_VTBL struct IFileDialogControlEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnItemSelected(This,pfdc,dwIDCtl,dwIDItem) )
    ( (This)->lpVtbl -> OnButtonClicked(This,pfdc,dwIDCtl) )
    ( (This)->lpVtbl -> OnCheckButtonToggled(This,pfdc,dwIDCtl,bChecked) )
    ( (This)->lpVtbl -> OnControlActivating(This,pfdc,dwIDCtl) )
EXTERN_C const IID IID_IFileDialog2;
    typedef struct IFileDialog2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IFileDialog2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IFileDialog2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IFileDialog2 * This);
                      HRESULT ( STDMETHODCALLTYPE *Show )(
            IFileDialog2 * This,
            _In_opt_ HWND hwndOwner);
        HRESULT ( STDMETHODCALLTYPE *SetFileTypes )(
            __RPC__in IFileDialog2 * This,
                       UINT cFileTypes,
                                __RPC__in_ecount_full(cFileTypes) const COMDLG_FILTERSPEC *rgFilterSpec);
        HRESULT ( STDMETHODCALLTYPE *SetFileTypeIndex )(
            __RPC__in IFileDialog2 * This,
                       UINT iFileType);
        HRESULT ( STDMETHODCALLTYPE *GetFileTypeIndex )(
            __RPC__in IFileDialog2 * This,
                        __RPC__out UINT *piFileType);
        HRESULT ( STDMETHODCALLTYPE *Advise )(
            __RPC__in IFileDialog2 * This,
                       __RPC__in_opt IFileDialogEvents *pfde,
                        __RPC__out DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *Unadvise )(
            __RPC__in IFileDialog2 * This,
                       DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *SetOptions )(
            __RPC__in IFileDialog2 * This,
                       FILEOPENDIALOGOPTIONS fos);
        HRESULT ( STDMETHODCALLTYPE *GetOptions )(
            __RPC__in IFileDialog2 * This,
                        __RPC__out FILEOPENDIALOGOPTIONS *pfos);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultFolder )(
            __RPC__in IFileDialog2 * This,
                       __RPC__in_opt IShellItem *psi);
        HRESULT ( STDMETHODCALLTYPE *SetFolder )(
            __RPC__in IFileDialog2 * This,
                       __RPC__in_opt IShellItem *psi);
        HRESULT ( STDMETHODCALLTYPE *GetFolder )(
            __RPC__in IFileDialog2 * This,
                        __RPC__deref_out_opt IShellItem **ppsi);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSelection )(
            __RPC__in IFileDialog2 * This,
                        __RPC__deref_out_opt IShellItem **ppsi);
        HRESULT ( STDMETHODCALLTYPE *SetFileName )(
            __RPC__in IFileDialog2 * This,
                               __RPC__in_string LPCWSTR pszName);
        HRESULT ( STDMETHODCALLTYPE *GetFileName )(
            __RPC__in IFileDialog2 * This,
                                __RPC__deref_out_opt_string LPWSTR *pszName);
        HRESULT ( STDMETHODCALLTYPE *SetTitle )(
            __RPC__in IFileDialog2 * This,
                               __RPC__in_string LPCWSTR pszTitle);
        HRESULT ( STDMETHODCALLTYPE *SetOkButtonLabel )(
            __RPC__in IFileDialog2 * This,
                               __RPC__in_string LPCWSTR pszText);
        HRESULT ( STDMETHODCALLTYPE *SetFileNameLabel )(
            __RPC__in IFileDialog2 * This,
                               __RPC__in_string LPCWSTR pszLabel);
        HRESULT ( STDMETHODCALLTYPE *GetResult )(
            __RPC__in IFileDialog2 * This,
                        __RPC__deref_out_opt IShellItem **ppsi);
        HRESULT ( STDMETHODCALLTYPE *AddPlace )(
            __RPC__in IFileDialog2 * This,
                       __RPC__in_opt IShellItem *psi,
                       FDAP fdap);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultExtension )(
            __RPC__in IFileDialog2 * This,
                               __RPC__in_string LPCWSTR pszDefaultExtension);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            __RPC__in IFileDialog2 * This,
                       HRESULT hr);
        HRESULT ( STDMETHODCALLTYPE *SetClientGuid )(
            __RPC__in IFileDialog2 * This,
                       __RPC__in REFGUID guid);
        HRESULT ( STDMETHODCALLTYPE *ClearClientData )(
            __RPC__in IFileDialog2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetFilter )(
            __RPC__in IFileDialog2 * This,
                       __RPC__in_opt IShellItemFilter *pFilter);
        HRESULT ( STDMETHODCALLTYPE *SetCancelButtonLabel )(
            __RPC__in IFileDialog2 * This,
                       __RPC__in LPCWSTR pszLabel);
        HRESULT ( STDMETHODCALLTYPE *SetNavigationRoot )(
            __RPC__in IFileDialog2 * This,
                       __RPC__in_opt IShellItem *psi);
        END_INTERFACE
    } IFileDialog2Vtbl;
    interface IFileDialog2
    {
        CONST_VTBL struct IFileDialog2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Show(This,hwndOwner) )
    ( (This)->lpVtbl -> SetFileTypes(This,cFileTypes,rgFilterSpec) )
    ( (This)->lpVtbl -> SetFileTypeIndex(This,iFileType) )
    ( (This)->lpVtbl -> GetFileTypeIndex(This,piFileType) )
    ( (This)->lpVtbl -> Advise(This,pfde,pdwCookie) )
    ( (This)->lpVtbl -> Unadvise(This,dwCookie) )
    ( (This)->lpVtbl -> SetOptions(This,fos) )
    ( (This)->lpVtbl -> GetOptions(This,pfos) )
    ( (This)->lpVtbl -> SetDefaultFolder(This,psi) )
    ( (This)->lpVtbl -> SetFolder(This,psi) )
    ( (This)->lpVtbl -> GetFolder(This,ppsi) )
    ( (This)->lpVtbl -> GetCurrentSelection(This,ppsi) )
    ( (This)->lpVtbl -> SetFileName(This,pszName) )
    ( (This)->lpVtbl -> GetFileName(This,pszName) )
    ( (This)->lpVtbl -> SetTitle(This,pszTitle) )
    ( (This)->lpVtbl -> SetOkButtonLabel(This,pszText) )
    ( (This)->lpVtbl -> SetFileNameLabel(This,pszLabel) )
    ( (This)->lpVtbl -> GetResult(This,ppsi) )
    ( (This)->lpVtbl -> AddPlace(This,psi,fdap) )
    ( (This)->lpVtbl -> SetDefaultExtension(This,pszDefaultExtension) )
    ( (This)->lpVtbl -> Close(This,hr) )
    ( (This)->lpVtbl -> SetClientGuid(This,guid) )
    ( (This)->lpVtbl -> ClearClientData(This) )
    ( (This)->lpVtbl -> SetFilter(This,pFilter) )
    ( (This)->lpVtbl -> SetCancelButtonLabel(This,pszLabel) )
    ( (This)->lpVtbl -> SetNavigationRoot(This,psi) )
EXTERN_C const IID IID_IApplicationAssociationRegistrationUI;
    typedef struct IApplicationAssociationRegistrationUIVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IApplicationAssociationRegistrationUI * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IApplicationAssociationRegistrationUI * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IApplicationAssociationRegistrationUI * This);
        HRESULT ( STDMETHODCALLTYPE *LaunchAdvancedAssociationUI )(
            __RPC__in IApplicationAssociationRegistrationUI * This,
                               __RPC__in_string LPCWSTR pszAppRegistryName);
        END_INTERFACE
    } IApplicationAssociationRegistrationUIVtbl;
    interface IApplicationAssociationRegistrationUI
    {
        CONST_VTBL struct IApplicationAssociationRegistrationUIVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LaunchAdvancedAssociationUI(This,pszAppRegistryName) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0036_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0036_v0_0_s_ifspec;
EXTERN_C const IID IID_IShellRunDll;
    typedef struct IShellRunDllVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IShellRunDll * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IShellRunDll * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IShellRunDll * This);
        HRESULT ( STDMETHODCALLTYPE *Run )(
            IShellRunDll * This,
            _In_ LPCWSTR pszArgs);
        END_INTERFACE
    } IShellRunDllVtbl;
    interface IShellRunDll
    {
        CONST_VTBL struct IShellRunDllVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Run(This,pszArgs) )
EXTERN_C const IID IID_IPreviousVersionsInfo;
    typedef struct IPreviousVersionsInfoVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IPreviousVersionsInfo * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IPreviousVersionsInfo * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IPreviousVersionsInfo * This);
        HRESULT ( STDMETHODCALLTYPE *AreSnapshotsAvailable )(
            IPreviousVersionsInfo * This,
            _In_ LPCWSTR pszPath,
            _In_ BOOL fOkToBeSlow,
            _Out_ BOOL *pfAvailable);
        END_INTERFACE
    } IPreviousVersionsInfoVtbl;
    interface IPreviousVersionsInfo
    {
        CONST_VTBL struct IPreviousVersionsInfoVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AreSnapshotsAvailable(This,pszPath,fOkToBeSlow,pfAvailable) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0038_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0038_v0_0_s_ifspec;
EXTERN_C const IID IID_IUseToBrowseItem;
    typedef struct IUseToBrowseItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUseToBrowseItem * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUseToBrowseItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUseToBrowseItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetItemIDList )(
            __RPC__in IUseToBrowseItem * This,
                        __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        HRESULT ( STDMETHODCALLTYPE *GetItem )(
            __RPC__in IUseToBrowseItem * This,
                        __RPC__deref_out_opt IShellItem **ppsi);
        END_INTERFACE
    } IUseToBrowseItemVtbl;
    interface IUseToBrowseItem
    {
        CONST_VTBL struct IUseToBrowseItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetItemIDList(This,ppidl) )
    ( (This)->lpVtbl -> GetItem(This,ppsi) )
DEFINE_GUID(SID_SCommandBarState, 0xB99EAA5C, 0x3850, 0x4400, 0xBC, 0x33, 0x2C, 0xE5, 0x34, 0x04, 0x8B, 0xF8);
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0039_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0039_v0_0_s_ifspec;
typedef
enum NSTCSTYLE2
    {
        NSTCS2_DEFAULT = 0,
        NSTCS2_INTERRUPTNOTIFICATIONS = 0x1,
        NSTCS2_SHOWNULLSPACEMENU = 0x2,
        NSTCS2_DISPLAYPADDING = 0x4,
        NSTCS2_DISPLAYPINNEDONLY = 0x8,
        NTSCS2_NOSINGLETONAUTOEXPAND = 0x10,
        NTSCS2_NEVERINSERTNONENUMERATED = 0x20
    } NSTCSTYLE2;
DEFINE_ENUM_FLAG_OPERATORS(NSTCSTYLE2)
EXTERN_C const IID IID_INameSpaceTreeControl2;
    typedef struct INameSpaceTreeControl2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INameSpaceTreeControl2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INameSpaceTreeControl2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INameSpaceTreeControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in INameSpaceTreeControl2 * This,
                       __RPC__in HWND hwndParent,
                               __RPC__in_opt RECT *prc,
                       NSTCSTYLE nsctsFlags);
        HRESULT ( STDMETHODCALLTYPE *TreeAdvise )(
            __RPC__in INameSpaceTreeControl2 * This,
                       __RPC__in_opt IUnknown *punk,
                        __RPC__out DWORD *pdwCookie);
        HRESULT ( STDMETHODCALLTYPE *TreeUnadvise )(
            __RPC__in INameSpaceTreeControl2 * This,
                       DWORD dwCookie);
        HRESULT ( STDMETHODCALLTYPE *AppendRoot )(
            __RPC__in INameSpaceTreeControl2 * This,
                       __RPC__in_opt IShellItem *psiRoot,
                       SHCONTF grfEnumFlags,
                       NSTCROOTSTYLE grfRootStyle,
                               __RPC__in_opt IShellItemFilter *pif);
        HRESULT ( STDMETHODCALLTYPE *InsertRoot )(
            __RPC__in INameSpaceTreeControl2 * This,
                       int iIndex,
                       __RPC__in_opt IShellItem *psiRoot,
                       SHCONTF grfEnumFlags,
                       NSTCROOTSTYLE grfRootStyle,
                               __RPC__in_opt IShellItemFilter *pif);
        HRESULT ( STDMETHODCALLTYPE *RemoveRoot )(
            __RPC__in INameSpaceTreeControl2 * This,
                       __RPC__in_opt IShellItem *psiRoot);
        HRESULT ( STDMETHODCALLTYPE *RemoveAllRoots )(
            __RPC__in INameSpaceTreeControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetRootItems )(
            __RPC__in INameSpaceTreeControl2 * This,
                        __RPC__deref_out_opt IShellItemArray **ppsiaRootItems);
        HRESULT ( STDMETHODCALLTYPE *SetItemState )(
            __RPC__in INameSpaceTreeControl2 * This,
                       __RPC__in_opt IShellItem *psi,
                       NSTCITEMSTATE nstcisMask,
                       NSTCITEMSTATE nstcisFlags);
        HRESULT ( STDMETHODCALLTYPE *GetItemState )(
            __RPC__in INameSpaceTreeControl2 * This,
                       __RPC__in_opt IShellItem *psi,
                       NSTCITEMSTATE nstcisMask,
                        __RPC__out NSTCITEMSTATE *pnstcisFlags);
        HRESULT ( STDMETHODCALLTYPE *GetSelectedItems )(
            __RPC__in INameSpaceTreeControl2 * This,
                        __RPC__deref_out_opt IShellItemArray **psiaItems);
        HRESULT ( STDMETHODCALLTYPE *GetItemCustomState )(
            __RPC__in INameSpaceTreeControl2 * This,
                       __RPC__in_opt IShellItem *psi,
                        __RPC__out int *piStateNumber);
        HRESULT ( STDMETHODCALLTYPE *SetItemCustomState )(
            __RPC__in INameSpaceTreeControl2 * This,
                       __RPC__in_opt IShellItem *psi,
                       int iStateNumber);
        HRESULT ( STDMETHODCALLTYPE *EnsureItemVisible )(
            __RPC__in INameSpaceTreeControl2 * This,
                       __RPC__in_opt IShellItem *psi);
        HRESULT ( STDMETHODCALLTYPE *SetTheme )(
            __RPC__in INameSpaceTreeControl2 * This,
                               __RPC__in_string LPCWSTR pszTheme);
        HRESULT ( STDMETHODCALLTYPE *GetNextItem )(
            __RPC__in INameSpaceTreeControl2 * This,
                               __RPC__in_opt IShellItem *psi,
                       NSTCGNI nstcgi,
                        __RPC__deref_out_opt IShellItem **ppsiNext);
        HRESULT ( STDMETHODCALLTYPE *HitTest )(
            __RPC__in INameSpaceTreeControl2 * This,
                       __RPC__in POINT *ppt,
                        __RPC__deref_out_opt IShellItem **ppsiOut);
        HRESULT ( STDMETHODCALLTYPE *GetItemRect )(
            __RPC__in INameSpaceTreeControl2 * This,
                       __RPC__in_opt IShellItem *psi,
                        __RPC__out RECT *prect);
        HRESULT ( STDMETHODCALLTYPE *CollapseAll )(
            __RPC__in INameSpaceTreeControl2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetControlStyle )(
            __RPC__in INameSpaceTreeControl2 * This,
                       NSTCSTYLE nstcsMask,
                       NSTCSTYLE nstcsStyle);
        HRESULT ( STDMETHODCALLTYPE *GetControlStyle )(
            __RPC__in INameSpaceTreeControl2 * This,
                       NSTCSTYLE nstcsMask,
                        __RPC__out NSTCSTYLE *pnstcsStyle);
        HRESULT ( STDMETHODCALLTYPE *SetControlStyle2 )(
            __RPC__in INameSpaceTreeControl2 * This,
                       NSTCSTYLE2 nstcsMask,
                       NSTCSTYLE2 nstcsStyle);
        HRESULT ( STDMETHODCALLTYPE *GetControlStyle2 )(
            __RPC__in INameSpaceTreeControl2 * This,
                       NSTCSTYLE2 nstcsMask,
                        __RPC__out NSTCSTYLE2 *pnstcsStyle);
        END_INTERFACE
    } INameSpaceTreeControl2Vtbl;
    interface INameSpaceTreeControl2
    {
        CONST_VTBL struct INameSpaceTreeControl2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,hwndParent,prc,nsctsFlags) )
    ( (This)->lpVtbl -> TreeAdvise(This,punk,pdwCookie) )
    ( (This)->lpVtbl -> TreeUnadvise(This,dwCookie) )
    ( (This)->lpVtbl -> AppendRoot(This,psiRoot,grfEnumFlags,grfRootStyle,pif) )
    ( (This)->lpVtbl -> InsertRoot(This,iIndex,psiRoot,grfEnumFlags,grfRootStyle,pif) )
    ( (This)->lpVtbl -> RemoveRoot(This,psiRoot) )
    ( (This)->lpVtbl -> RemoveAllRoots(This) )
    ( (This)->lpVtbl -> GetRootItems(This,ppsiaRootItems) )
    ( (This)->lpVtbl -> SetItemState(This,psi,nstcisMask,nstcisFlags) )
    ( (This)->lpVtbl -> GetItemState(This,psi,nstcisMask,pnstcisFlags) )
    ( (This)->lpVtbl -> GetSelectedItems(This,psiaItems) )
    ( (This)->lpVtbl -> GetItemCustomState(This,psi,piStateNumber) )
    ( (This)->lpVtbl -> SetItemCustomState(This,psi,iStateNumber) )
    ( (This)->lpVtbl -> EnsureItemVisible(This,psi) )
    ( (This)->lpVtbl -> SetTheme(This,pszTheme) )
    ( (This)->lpVtbl -> GetNextItem(This,psi,nstcgi,ppsiNext) )
    ( (This)->lpVtbl -> HitTest(This,ppt,ppsiOut) )
    ( (This)->lpVtbl -> GetItemRect(This,psi,prect) )
    ( (This)->lpVtbl -> CollapseAll(This) )
    ( (This)->lpVtbl -> SetControlStyle(This,nstcsMask,nstcsStyle) )
    ( (This)->lpVtbl -> GetControlStyle(This,nstcsMask,pnstcsStyle) )
    ( (This)->lpVtbl -> SetControlStyle2(This,nstcsMask,nstcsStyle) )
    ( (This)->lpVtbl -> GetControlStyle2(This,nstcsMask,pnstcsStyle) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0040_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0040_v0_0_s_ifspec;
enum _NSTCEHITTEST
    {
        NSTCEHT_NOWHERE = 0x1,
        NSTCEHT_ONITEMICON = 0x2,
        NSTCEHT_ONITEMLABEL = 0x4,
        NSTCEHT_ONITEMINDENT = 0x8,
        NSTCEHT_ONITEMBUTTON = 0x10,
        NSTCEHT_ONITEMRIGHT = 0x20,
        NSTCEHT_ONITEMSTATEICON = 0x40,
        NSTCEHT_ONITEM = 0x46,
        NSTCEHT_ONITEMTABBUTTON = 0x1000
    } ;
typedef DWORD NSTCEHITTEST;
enum _NSTCECLICKTYPE
    {
        NSTCECT_LBUTTON = 0x1,
        NSTCECT_MBUTTON = 0x2,
        NSTCECT_RBUTTON = 0x3,
        NSTCECT_BUTTON = 0x3,
        NSTCECT_DBLCLICK = 0x4
    } ;
typedef DWORD NSTCECLICKTYPE;
EXTERN_C const IID IID_INameSpaceTreeControlEvents;
    typedef struct INameSpaceTreeControlEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INameSpaceTreeControlEvents * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INameSpaceTreeControlEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INameSpaceTreeControlEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnItemClick )(
            INameSpaceTreeControlEvents * This,
            _In_ IShellItem *psi,
            _In_ NSTCEHITTEST nstceHitTest,
            _In_ NSTCECLICKTYPE nstceClickType);
        HRESULT ( STDMETHODCALLTYPE *OnPropertyItemCommit )(
            INameSpaceTreeControlEvents * This,
            _In_ IShellItem *psi);
        HRESULT ( STDMETHODCALLTYPE *OnItemStateChanging )(
            INameSpaceTreeControlEvents * This,
            _In_ IShellItem *psi,
            _In_ NSTCITEMSTATE nstcisMask,
            _In_ NSTCITEMSTATE nstcisState);
        HRESULT ( STDMETHODCALLTYPE *OnItemStateChanged )(
            INameSpaceTreeControlEvents * This,
            _In_ IShellItem *psi,
            _In_ NSTCITEMSTATE nstcisMask,
            _In_ NSTCITEMSTATE nstcisState);
        HRESULT ( STDMETHODCALLTYPE *OnSelectionChanged )(
            INameSpaceTreeControlEvents * This,
            _In_ IShellItemArray *psiaSelection);
        HRESULT ( STDMETHODCALLTYPE *OnKeyboardInput )(
            INameSpaceTreeControlEvents * This,
            _In_ UINT uMsg,
            _In_ WPARAM wParam,
            _In_ LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *OnBeforeExpand )(
            INameSpaceTreeControlEvents * This,
            _In_ IShellItem *psi);
        HRESULT ( STDMETHODCALLTYPE *OnAfterExpand )(
            INameSpaceTreeControlEvents * This,
            _In_ IShellItem *psi);
        HRESULT ( STDMETHODCALLTYPE *OnBeginLabelEdit )(
            INameSpaceTreeControlEvents * This,
            _In_ IShellItem *psi);
        HRESULT ( STDMETHODCALLTYPE *OnEndLabelEdit )(
            INameSpaceTreeControlEvents * This,
            _In_ IShellItem *psi);
        HRESULT ( STDMETHODCALLTYPE *OnGetToolTip )(
            INameSpaceTreeControlEvents * This,
            _In_ IShellItem *psi,
            _Out_writes_(cchTip) LPWSTR pszTip,
            _In_ int cchTip);
        HRESULT ( STDMETHODCALLTYPE *OnBeforeItemDelete )(
            INameSpaceTreeControlEvents * This,
            _In_ IShellItem *psi);
        HRESULT ( STDMETHODCALLTYPE *OnItemAdded )(
            INameSpaceTreeControlEvents * This,
            _In_ IShellItem *psi,
            _In_ BOOL fIsRoot);
        HRESULT ( STDMETHODCALLTYPE *OnItemDeleted )(
            INameSpaceTreeControlEvents * This,
            _In_ IShellItem *psi,
            _In_ BOOL fIsRoot);
        HRESULT ( STDMETHODCALLTYPE *OnBeforeContextMenu )(
            INameSpaceTreeControlEvents * This,
            _In_opt_ IShellItem *psi,
            _In_ REFIID riid,
            _Outptr_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *OnAfterContextMenu )(
            INameSpaceTreeControlEvents * This,
            _In_opt_ IShellItem *psi,
            _In_ IContextMenu *pcmIn,
            _In_ REFIID riid,
            _Outptr_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *OnBeforeStateImageChange )(
            INameSpaceTreeControlEvents * This,
            _In_ IShellItem *psi);
        HRESULT ( STDMETHODCALLTYPE *OnGetDefaultIconIndex )(
            INameSpaceTreeControlEvents * This,
            _In_ IShellItem *psi,
            _Out_ int *piDefaultIcon,
            _Out_ int *piOpenIcon);
        END_INTERFACE
    } INameSpaceTreeControlEventsVtbl;
    interface INameSpaceTreeControlEvents
    {
        CONST_VTBL struct INameSpaceTreeControlEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnItemClick(This,psi,nstceHitTest,nstceClickType) )
    ( (This)->lpVtbl -> OnPropertyItemCommit(This,psi) )
    ( (This)->lpVtbl -> OnItemStateChanging(This,psi,nstcisMask,nstcisState) )
    ( (This)->lpVtbl -> OnItemStateChanged(This,psi,nstcisMask,nstcisState) )
    ( (This)->lpVtbl -> OnSelectionChanged(This,psiaSelection) )
    ( (This)->lpVtbl -> OnKeyboardInput(This,uMsg,wParam,lParam) )
    ( (This)->lpVtbl -> OnBeforeExpand(This,psi) )
    ( (This)->lpVtbl -> OnAfterExpand(This,psi) )
    ( (This)->lpVtbl -> OnBeginLabelEdit(This,psi) )
    ( (This)->lpVtbl -> OnEndLabelEdit(This,psi) )
    ( (This)->lpVtbl -> OnGetToolTip(This,psi,pszTip,cchTip) )
    ( (This)->lpVtbl -> OnBeforeItemDelete(This,psi) )
    ( (This)->lpVtbl -> OnItemAdded(This,psi,fIsRoot) )
    ( (This)->lpVtbl -> OnItemDeleted(This,psi,fIsRoot) )
    ( (This)->lpVtbl -> OnBeforeContextMenu(This,psi,riid,ppv) )
    ( (This)->lpVtbl -> OnAfterContextMenu(This,psi,pcmIn,riid,ppv) )
    ( (This)->lpVtbl -> OnBeforeStateImageChange(This,psi) )
    ( (This)->lpVtbl -> OnGetDefaultIconIndex(This,psi,piDefaultIcon,piOpenIcon) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0041_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0041_v0_0_s_ifspec;
EXTERN_C const IID IID_INameSpaceTreeControlDropHandler;
    typedef struct INameSpaceTreeControlDropHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INameSpaceTreeControlDropHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INameSpaceTreeControlDropHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INameSpaceTreeControlDropHandler * This);
        HRESULT ( STDMETHODCALLTYPE *OnDragEnter )(
            INameSpaceTreeControlDropHandler * This,
            _In_opt_ IShellItem *psiOver,
            _In_ IShellItemArray *psiaData,
            _In_ BOOL fOutsideSource,
            _In_ DWORD grfKeyState,
            _Inout_ DWORD *pdwEffect);
        HRESULT ( STDMETHODCALLTYPE *OnDragOver )(
            INameSpaceTreeControlDropHandler * This,
            _In_opt_ IShellItem *psiOver,
            _In_ IShellItemArray *psiaData,
            _In_ DWORD grfKeyState,
            _Inout_ DWORD *pdwEffect);
        HRESULT ( STDMETHODCALLTYPE *OnDragPosition )(
            INameSpaceTreeControlDropHandler * This,
            _In_opt_ IShellItem *psiOver,
            _In_ IShellItemArray *psiaData,
            _In_ int iNewPosition,
            _In_ int iOldPosition);
        HRESULT ( STDMETHODCALLTYPE *OnDrop )(
            INameSpaceTreeControlDropHandler * This,
            _In_opt_ IShellItem *psiOver,
            _In_ IShellItemArray *psiaData,
            _In_ int iPosition,
            _In_ DWORD grfKeyState,
            _Inout_ DWORD *pdwEffect);
        HRESULT ( STDMETHODCALLTYPE *OnDropPosition )(
            INameSpaceTreeControlDropHandler * This,
            _In_opt_ IShellItem *psiOver,
            _In_ IShellItemArray *psiaData,
            _In_ int iNewPosition,
            _In_ int iOldPosition);
        HRESULT ( STDMETHODCALLTYPE *OnDragLeave )(
            INameSpaceTreeControlDropHandler * This,
            _In_opt_ IShellItem *psiOver);
        END_INTERFACE
    } INameSpaceTreeControlDropHandlerVtbl;
    interface INameSpaceTreeControlDropHandler
    {
        CONST_VTBL struct INameSpaceTreeControlDropHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnDragEnter(This,psiOver,psiaData,fOutsideSource,grfKeyState,pdwEffect) )
    ( (This)->lpVtbl -> OnDragOver(This,psiOver,psiaData,grfKeyState,pdwEffect) )
    ( (This)->lpVtbl -> OnDragPosition(This,psiOver,psiaData,iNewPosition,iOldPosition) )
    ( (This)->lpVtbl -> OnDrop(This,psiOver,psiaData,iPosition,grfKeyState,pdwEffect) )
    ( (This)->lpVtbl -> OnDropPosition(This,psiOver,psiaData,iNewPosition,iOldPosition) )
    ( (This)->lpVtbl -> OnDragLeave(This,psiOver) )
EXTERN_C const IID IID_INameSpaceTreeAccessible;
    typedef struct INameSpaceTreeAccessibleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INameSpaceTreeAccessible * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INameSpaceTreeAccessible * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INameSpaceTreeAccessible * This);
        HRESULT ( STDMETHODCALLTYPE *OnGetDefaultAccessibilityAction )(
            INameSpaceTreeAccessible * This,
            _In_ IShellItem *psi,
            _Outptr_ BSTR *pbstrDefaultAction);
        HRESULT ( STDMETHODCALLTYPE *OnDoDefaultAccessibilityAction )(
            INameSpaceTreeAccessible * This,
            _In_ IShellItem *psi);
        HRESULT ( STDMETHODCALLTYPE *OnGetAccessibilityRole )(
            INameSpaceTreeAccessible * This,
            _In_ IShellItem *psi,
            _Out_ VARIANT *pvarRole);
        END_INTERFACE
    } INameSpaceTreeAccessibleVtbl;
    interface INameSpaceTreeAccessible
    {
        CONST_VTBL struct INameSpaceTreeAccessibleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnGetDefaultAccessibilityAction(This,psi,pbstrDefaultAction) )
    ( (This)->lpVtbl -> OnDoDefaultAccessibilityAction(This,psi) )
    ( (This)->lpVtbl -> OnGetAccessibilityRole(This,psi,pvarRole) )
typedef struct NSTCCUSTOMDRAW
    {
    IShellItem *psi;
    UINT uItemState;
    NSTCITEMSTATE nstcis;
    LPCWSTR pszText;
    int iImage;
    HIMAGELIST himl;
    int iLevel;
    int iIndent;
    } NSTCCUSTOMDRAW;
EXTERN_C const IID IID_INameSpaceTreeControlCustomDraw;
    typedef struct INameSpaceTreeControlCustomDrawVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INameSpaceTreeControlCustomDraw * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INameSpaceTreeControlCustomDraw * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INameSpaceTreeControlCustomDraw * This);
        HRESULT ( STDMETHODCALLTYPE *PrePaint )(
            INameSpaceTreeControlCustomDraw * This,
            _In_ HDC hdc,
            _In_ RECT *prc,
            _Out_ LRESULT *plres);
        HRESULT ( STDMETHODCALLTYPE *PostPaint )(
            INameSpaceTreeControlCustomDraw * This,
            _In_ HDC hdc,
            _In_ RECT *prc);
        HRESULT ( STDMETHODCALLTYPE *ItemPrePaint )(
            INameSpaceTreeControlCustomDraw * This,
            _In_ HDC hdc,
            _In_ RECT *prc,
            _In_ NSTCCUSTOMDRAW *pnstccdItem,
            _Inout_ COLORREF *pclrText,
            _Inout_ COLORREF *pclrTextBk,
            _Out_ LRESULT *plres);
        HRESULT ( STDMETHODCALLTYPE *ItemPostPaint )(
            INameSpaceTreeControlCustomDraw * This,
            _In_ HDC hdc,
            _In_ RECT *prc,
            _In_ NSTCCUSTOMDRAW *pnstccdItem);
        END_INTERFACE
    } INameSpaceTreeControlCustomDrawVtbl;
    interface INameSpaceTreeControlCustomDraw
    {
        CONST_VTBL struct INameSpaceTreeControlCustomDrawVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> PrePaint(This,hdc,prc,plres) )
    ( (This)->lpVtbl -> PostPaint(This,hdc,prc) )
    ( (This)->lpVtbl -> ItemPrePaint(This,hdc,prc,pnstccdItem,pclrText,pclrTextBk,plres) )
    ( (This)->lpVtbl -> ItemPostPaint(This,hdc,prc,pnstccdItem) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0044_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0044_v0_0_s_ifspec;
EXTERN_C const IID IID_ITrayDeskBand;
    typedef struct ITrayDeskBandVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITrayDeskBand * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITrayDeskBand * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITrayDeskBand * This);
        HRESULT ( STDMETHODCALLTYPE *ShowDeskBand )(
            __RPC__in ITrayDeskBand * This,
                       __RPC__in REFCLSID clsid);
        HRESULT ( STDMETHODCALLTYPE *HideDeskBand )(
            __RPC__in ITrayDeskBand * This,
                       __RPC__in REFCLSID clsid);
        HRESULT ( STDMETHODCALLTYPE *IsDeskBandShown )(
            __RPC__in ITrayDeskBand * This,
                       __RPC__in REFCLSID clsid);
        HRESULT ( STDMETHODCALLTYPE *DeskBandRegistrationChanged )(
            __RPC__in ITrayDeskBand * This);
        END_INTERFACE
    } ITrayDeskBandVtbl;
    interface ITrayDeskBand
    {
        CONST_VTBL struct ITrayDeskBandVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ShowDeskBand(This,clsid) )
    ( (This)->lpVtbl -> HideDeskBand(This,clsid) )
    ( (This)->lpVtbl -> IsDeskBandShown(This,clsid) )
    ( (This)->lpVtbl -> DeskBandRegistrationChanged(This) )
EXTERN_C const IID IID_IBandHost;
    typedef struct IBandHostVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBandHost * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBandHost * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBandHost * This);
        HRESULT ( STDMETHODCALLTYPE *CreateBand )(
            __RPC__in IBandHost * This,
                       __RPC__in REFCLSID rclsidBand,
                       BOOL fAvailable,
                       BOOL fVisible,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppv);
        HRESULT ( STDMETHODCALLTYPE *SetBandAvailability )(
            __RPC__in IBandHost * This,
                       __RPC__in REFCLSID rclsidBand,
                       BOOL fAvailable);
        HRESULT ( STDMETHODCALLTYPE *DestroyBand )(
            __RPC__in IBandHost * This,
                       __RPC__in REFCLSID rclsidBand);
        END_INTERFACE
    } IBandHostVtbl;
    interface IBandHost
    {
        CONST_VTBL struct IBandHostVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateBand(This,rclsidBand,fAvailable,fVisible,riid,ppv) )
    ( (This)->lpVtbl -> SetBandAvailability(This,rclsidBand,fAvailable) )
    ( (This)->lpVtbl -> DestroyBand(This,rclsidBand) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0048_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0048_v0_0_s_ifspec;
EXTERN_C const IID IID_IComputerInfoChangeNotify;
    typedef struct IComputerInfoChangeNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IComputerInfoChangeNotify * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IComputerInfoChangeNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IComputerInfoChangeNotify * This);
        HRESULT ( STDMETHODCALLTYPE *ComputerInfoChanged )(
            __RPC__in IComputerInfoChangeNotify * This);
        END_INTERFACE
    } IComputerInfoChangeNotifyVtbl;
    interface IComputerInfoChangeNotify
    {
        CONST_VTBL struct IComputerInfoChangeNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ComputerInfoChanged(This) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0049_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0049_v0_0_s_ifspec;
EXTERN_C const IID IID_IDesktopGadget;
    typedef struct IDesktopGadgetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDesktopGadget * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDesktopGadget * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDesktopGadget * This);
        HRESULT ( STDMETHODCALLTYPE *RunGadget )(
            __RPC__in IDesktopGadget * This,
                       __RPC__in LPCWSTR gadgetPath);
        END_INTERFACE
    } IDesktopGadgetVtbl;
    interface IDesktopGadget
    {
        CONST_VTBL struct IDesktopGadgetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RunGadget(This,gadgetPath) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0050_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0050_v0_0_s_ifspec;
EXTERN_C const IID LIBID_ShellObjects;
EXTERN_C const CLSID CLSID_QueryCancelAutoPlay;
class DECLSPEC_UUID("331F1768-05A9-4ddd-B86E-DAE34DDC998A")
QueryCancelAutoPlay;
EXTERN_C const CLSID CLSID_TimeCategorizer;
class DECLSPEC_UUID("3bb4118f-ddfd-4d30-a348-9fb5d6bf1afe")
TimeCategorizer;
EXTERN_C const CLSID CLSID_AlphabeticalCategorizer;
class DECLSPEC_UUID("3c2654c6-7372-4f6b-b310-55d6128f49d2")
AlphabeticalCategorizer;
EXTERN_C const CLSID CLSID_MergedCategorizer;
class DECLSPEC_UUID("8e827c11-33e7-4bc1-b242-8cd9a1c2b304")
MergedCategorizer;
EXTERN_C const CLSID CLSID_ImageProperties;
class DECLSPEC_UUID("7ab770c7-0e23-4d7a-8aa2-19bfad479829")
ImageProperties;
EXTERN_C const CLSID CLSID_CDBurn;
class DECLSPEC_UUID("fbeb8a05-beee-4442-804e-409d6c4515e9")
CDBurn;
EXTERN_C const CLSID CLSID_StartMenuPin;
class DECLSPEC_UUID("a2a9545d-a0c2-42b4-9708-a0b2badd77c8")
StartMenuPin;
EXTERN_C const CLSID CLSID_WebWizardHost;
class DECLSPEC_UUID("c827f149-55c1-4d28-935e-57e47caed973")
WebWizardHost;
EXTERN_C const CLSID CLSID_PublishDropTarget;
class DECLSPEC_UUID("CC6EEFFB-43F6-46c5-9619-51D571967F7D")
PublishDropTarget;
EXTERN_C const CLSID CLSID_PublishingWizard;
class DECLSPEC_UUID("6b33163c-76a5-4b6c-bf21-45de9cd503a1")
PublishingWizard;
EXTERN_C const CLSID CLSID_InternetPrintOrdering;
class DECLSPEC_UUID("add36aa8-751a-4579-a266-d66f5202ccbb")
InternetPrintOrdering;
EXTERN_C const CLSID CLSID_FolderViewHost;
class DECLSPEC_UUID("20b1cb23-6968-4eb9-b7d4-a66d00d07cee")
FolderViewHost;
EXTERN_C const CLSID CLSID_ExplorerBrowser;
class DECLSPEC_UUID("71f96385-ddd6-48d3-a0c1-ae06e8b055fb")
ExplorerBrowser;
EXTERN_C const CLSID CLSID_ImageRecompress;
class DECLSPEC_UUID("6e33091c-d2f8-4740-b55e-2e11d1477a2c")
ImageRecompress;
EXTERN_C const CLSID CLSID_TrayBandSiteService;
class DECLSPEC_UUID("F60AD0A0-E5E1-45cb-B51A-E15B9F8B2934")
TrayBandSiteService;
EXTERN_C const CLSID CLSID_TrayDeskBand;
class DECLSPEC_UUID("E6442437-6C68-4f52-94DD-2CFED267EFB9")
TrayDeskBand;
EXTERN_C const CLSID CLSID_AttachmentServices;
class DECLSPEC_UUID("4125dd96-e03a-4103-8f70-e0597d803b9c")
AttachmentServices;
EXTERN_C const CLSID CLSID_DocPropShellExtension;
class DECLSPEC_UUID("883373C3-BF89-11D1-BE35-080036B11A03")
DocPropShellExtension;
EXTERN_C const CLSID CLSID_FSCopyHandler;
class DECLSPEC_UUID("D197380A-0A79-4dc8-A033-ED882C2FA14B")
FSCopyHandler;
EXTERN_C const CLSID CLSID_PreviousVersions;
class DECLSPEC_UUID("596AB062-B4D2-4215-9F74-E9109B0A8153")
PreviousVersions;
EXTERN_C const CLSID CLSID_NamespaceTreeControl;
class DECLSPEC_UUID("AE054212-3535-4430-83ED-D501AA6680E6")
NamespaceTreeControl;
EXTERN_C const CLSID CLSID_IENamespaceTreeControl;
class DECLSPEC_UUID("ACE52D03-E5CD-4b20-82FF-E71B11BEAE1D")
IENamespaceTreeControl;
EXTERN_C const CLSID CLSID_ApplicationAssociationRegistrationUI;
class DECLSPEC_UUID("1968106d-f3b5-44cf-890e-116fcb9ecef1")
ApplicationAssociationRegistrationUI;
EXTERN_C const CLSID CLSID_DesktopGadget;
class DECLSPEC_UUID("924ccc1b-6562-4c85-8657-d177925222b6")
DesktopGadget;
EXTERN_C const CLSID CLSID_AccessibilityDockingService;
class DECLSPEC_UUID("29CE1D46-B481-4AA0-A08A-D3EBC8ACA402")
AccessibilityDockingService;
EXTERN_C const CLSID CLSID_ExecuteFolder;
class DECLSPEC_UUID("11dbb47c-a525-400b-9e80-a54615a090c0")
ExecuteFolder;
EXTERN_C const CLSID CLSID_VirtualDesktopManager;
class DECLSPEC_UUID("aa509086-5ca9-4c25-8f95-589d3c07b48a")
VirtualDesktopManager;
EXTERN_C const CLSID CLSID_StorageProviderBanners;
class DECLSPEC_UUID("7CCDF9F4-E576-455A-8BC7-F6EC68D6F063")
StorageProviderBanners;
typedef
enum UNDOCK_REASON
    {
        UR_RESOLUTION_CHANGE = 0,
        UR_MONITOR_DISCONNECT = 1
    } UNDOCK_REASON;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0051_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0051_v0_0_s_ifspec;
EXTERN_C const IID IID_IAccessibilityDockingServiceCallback;
    typedef struct IAccessibilityDockingServiceCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAccessibilityDockingServiceCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAccessibilityDockingServiceCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAccessibilityDockingServiceCallback * This);
        HRESULT ( STDMETHODCALLTYPE *Undocked )(
            __RPC__in IAccessibilityDockingServiceCallback * This,
                       UNDOCK_REASON undockReason);
        END_INTERFACE
    } IAccessibilityDockingServiceCallbackVtbl;
    interface IAccessibilityDockingServiceCallback
    {
        CONST_VTBL struct IAccessibilityDockingServiceCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Undocked(This,undockReason) )
EXTERN_C const IID IID_IAccessibilityDockingService;
    typedef struct IAccessibilityDockingServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAccessibilityDockingService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAccessibilityDockingService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAccessibilityDockingService * This);
        HRESULT ( STDMETHODCALLTYPE *GetAvailableSize )(
            __RPC__in IAccessibilityDockingService * This,
                       __RPC__in HMONITOR hMonitor,
                        __RPC__out UINT *pcxFixed,
                        __RPC__out UINT *pcyMax);
        HRESULT ( STDMETHODCALLTYPE *DockWindow )(
            __RPC__in IAccessibilityDockingService * This,
                       __RPC__in HWND hwnd,
                       __RPC__in HMONITOR hMonitor,
                       UINT cyRequested,
                       __RPC__in_opt IAccessibilityDockingServiceCallback *pCallback);
        HRESULT ( STDMETHODCALLTYPE *UndockWindow )(
            __RPC__in IAccessibilityDockingService * This,
                       __RPC__in HWND hwnd);
        END_INTERFACE
    } IAccessibilityDockingServiceVtbl;
    interface IAccessibilityDockingService
    {
        CONST_VTBL struct IAccessibilityDockingServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAvailableSize(This,hMonitor,pcxFixed,pcyMax) )
    ( (This)->lpVtbl -> DockWindow(This,hwnd,hMonitor,cyRequested,pCallback) )
    ( (This)->lpVtbl -> UndockWindow(This,hwnd) )
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0053_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0053_v0_0_s_ifspec;
typedef
enum BANNER_NOTIFICATION_EVENT
    {
        BNE_Rendered = 0,
        BNE_Hovered = ( BNE_Rendered + 1 ) ,
        BNE_Closed = ( BNE_Hovered + 1 ) ,
        BNE_Dismissed = ( BNE_Closed + 1 ) ,
        BNE_Button1Clicked = ( BNE_Dismissed + 1 ) ,
        BNE_Button2Clicked = ( BNE_Button1Clicked + 1 )
    } BANNER_NOTIFICATION_EVENT;
typedef struct BANNER_NOTIFICATION
    {
    BANNER_NOTIFICATION_EVENT event;
    LPCWSTR providerIdentity;
    LPCWSTR contentId;
    } BANNER_NOTIFICATION;
EXTERN_C const IID IID_IBannerNotificationHandler;
    typedef struct IBannerNotificationHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBannerNotificationHandler * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBannerNotificationHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBannerNotificationHandler * This);
        HRESULT ( STDMETHODCALLTYPE *OnBannerEvent )(
            __RPC__in IBannerNotificationHandler * This,
                       __RPC__in const BANNER_NOTIFICATION *notification);
        END_INTERFACE
    } IBannerNotificationHandlerVtbl;
    interface IBannerNotificationHandler
    {
        CONST_VTBL struct IBannerNotificationHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnBannerEvent(This,notification) )
EXTERN_C const IID IID_IStorageProviderBanners;
    typedef struct IStorageProviderBannersVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IStorageProviderBanners * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IStorageProviderBanners * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IStorageProviderBanners * This);
        HRESULT ( STDMETHODCALLTYPE *SetBanner )(
            __RPC__in IStorageProviderBanners * This,
                       __RPC__in LPCWSTR providerIdentity,
                       __RPC__in LPCWSTR subscriptionId,
                       __RPC__in LPCWSTR contentId);
        HRESULT ( STDMETHODCALLTYPE *ClearBanner )(
            __RPC__in IStorageProviderBanners * This,
                       __RPC__in LPCWSTR providerIdentity,
                       __RPC__in LPCWSTR subscriptionId);
        HRESULT ( STDMETHODCALLTYPE *ClearAllBanners )(
            __RPC__in IStorageProviderBanners * This,
                       __RPC__in LPCWSTR providerIdentity);
        HRESULT ( STDMETHODCALLTYPE *GetBanner )(
            __RPC__in IStorageProviderBanners * This,
                       __RPC__in LPCWSTR providerIdentity,
                       __RPC__in LPCWSTR subscriptionId,
                        __RPC__deref_out_opt LPWSTR *contentId);
        END_INTERFACE
    } IStorageProviderBannersVtbl;
    interface IStorageProviderBanners
    {
        CONST_VTBL struct IStorageProviderBannersVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetBanner(This,providerIdentity,subscriptionId,contentId) )
    ( (This)->lpVtbl -> ClearBanner(This,providerIdentity,subscriptionId) )
    ( (This)->lpVtbl -> ClearAllBanners(This,providerIdentity) )
    ( (This)->lpVtbl -> GetBanner(This,providerIdentity,subscriptionId,contentId) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0055_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shobjidl_0000_0055_v0_0_s_ifspec;
unsigned long __RPC_USER HBITMAP_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree( __RPC__in unsigned long *, __RPC__in HBITMAP * );
unsigned long __RPC_USER HICON_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * );
void __RPC_USER HICON_UserFree( __RPC__in unsigned long *, __RPC__in HICON * );
unsigned long __RPC_USER HMONITOR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HMONITOR * );
unsigned char * __RPC_USER HMONITOR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HMONITOR * );
unsigned char * __RPC_USER HMONITOR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HMONITOR * );
void __RPC_USER HMONITOR_UserFree( __RPC__in unsigned long *, __RPC__in HMONITOR * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER PCIDLIST_ABSOLUTE_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in PCIDLIST_ABSOLUTE * );
unsigned char * __RPC_USER PCIDLIST_ABSOLUTE_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PCIDLIST_ABSOLUTE * );
unsigned char * __RPC_USER PCIDLIST_ABSOLUTE_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PCIDLIST_ABSOLUTE * );
void __RPC_USER PCIDLIST_ABSOLUTE_UserFree( __RPC__in unsigned long *, __RPC__in PCIDLIST_ABSOLUTE * );
unsigned long __RPC_USER PITEMID_CHILD_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in PITEMID_CHILD * );
unsigned char * __RPC_USER PITEMID_CHILD_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PITEMID_CHILD * );
unsigned char * __RPC_USER PITEMID_CHILD_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PITEMID_CHILD * );
void __RPC_USER PITEMID_CHILD_UserFree( __RPC__in unsigned long *, __RPC__in PITEMID_CHILD * );
unsigned long __RPC_USER HBITMAP_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HBITMAP * );
unsigned char * __RPC_USER HBITMAP_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HBITMAP * );
void __RPC_USER HBITMAP_UserFree64( __RPC__in unsigned long *, __RPC__in HBITMAP * );
unsigned long __RPC_USER HICON_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HICON * );
unsigned char * __RPC_USER HICON_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HICON * );
void __RPC_USER HICON_UserFree64( __RPC__in unsigned long *, __RPC__in HICON * );
unsigned long __RPC_USER HMONITOR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HMONITOR * );
unsigned char * __RPC_USER HMONITOR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HMONITOR * );
unsigned char * __RPC_USER HMONITOR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HMONITOR * );
void __RPC_USER HMONITOR_UserFree64( __RPC__in unsigned long *, __RPC__in HMONITOR * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER PCIDLIST_ABSOLUTE_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in PCIDLIST_ABSOLUTE * );
unsigned char * __RPC_USER PCIDLIST_ABSOLUTE_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PCIDLIST_ABSOLUTE * );
unsigned char * __RPC_USER PCIDLIST_ABSOLUTE_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PCIDLIST_ABSOLUTE * );
void __RPC_USER PCIDLIST_ABSOLUTE_UserFree64( __RPC__in unsigned long *, __RPC__in PCIDLIST_ABSOLUTE * );
unsigned long __RPC_USER PITEMID_CHILD_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in PITEMID_CHILD * );
unsigned char * __RPC_USER PITEMID_CHILD_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PITEMID_CHILD * );
unsigned char * __RPC_USER PITEMID_CHILD_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PITEMID_CHILD * );
void __RPC_USER PITEMID_CHILD_UserFree64( __RPC__in unsigned long *, __RPC__in PITEMID_CHILD * );
              HRESULT STDMETHODCALLTYPE IResultsFolder_AddIDList_Proxy(
    IResultsFolder * This,
    _In_ PCIDLIST_ABSOLUTE pidl,
    _Outptr_opt_ PITEMID_CHILD *ppidlAdded);
                HRESULT STDMETHODCALLTYPE IResultsFolder_AddIDList_Stub(
    __RPC__in IResultsFolder * This,
               __RPC__in PCIDLIST_ABSOLUTE pidl,
                __RPC__deref_out_opt PITEMID_CHILD *ppidlAdded);
}
