#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IHostDialogHelper IHostDialogHelper;
typedef class HostDialogHelper HostDialogHelper;
typedef interface IDocHostUIHandler IDocHostUIHandler;
typedef interface IDocHostUIHandler2 IDocHostUIHandler2;
typedef interface ICustomDoc ICustomDoc;
typedef interface IDocHostShowUI IDocHostShowUI;
typedef interface IClassFactoryEx IClassFactoryEx;
typedef interface IHTMLOMWindowServices IHTMLOMWindowServices;
#include "ocidl.h"
#include "docobj.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib,"uuid.lib")
EXTERN_C const GUID CGID_ScriptSite;
EXTERN_C const GUID CGID_MSHTML;
typedef interface IHTMLWindow2 IHTMLWindow2;
typedef HRESULT STDAPICALLTYPE SHOWHTMLDIALOGFN (HWND hwndParent, IMoniker *pmk, VARIANT *pvarArgIn, WCHAR* pchOptions, VARIANT *pvArgOut);
typedef HRESULT STDAPICALLTYPE SHOWHTMLDIALOGEXFN (HWND hwndParent, IMoniker *pmk, DWORD dwDialogFlags, VARIANT *pvarArgIn, WCHAR* pchOptions, VARIANT *pvArgOut);
typedef HRESULT STDAPICALLTYPE SHOWMODELESSHTMLDIALOGFN (HWND hwndParent, IMoniker *pmk, VARIANT *pvarArgIn, VARIANT* pvarOptions, IHTMLWindow2 ** ppWindow);
typedef HRESULT STDAPICALLTYPE IEREGISTERXMLNSFN (_In_ LPCWSTR lpszURI, _In_ GUID clsid, _In_ BOOL fMachine);
typedef HRESULT STDAPICALLTYPE IEISXMLNSREGISTEREDFN (_In_ LPCWSTR lpszURI, _Out_ GUID *pCLSID);
STDAPI ShowHTMLDialog(
    HWND hwndParent,
    IMoniker * pMk,
    VARIANT * pvarArgIn,
    _In_z_ LPWSTR pchOptions,
    VARIANT * pvarArgOut
    );
STDAPI ShowHTMLDialogEx(
    HWND hwndParent,
    IMoniker * pMk,
    DWORD dwDialogFlags,
    VARIANT * pvarArgIn,
    _In_ LPWSTR pchOptions,
    VARIANT * pvarArgOut
    );
STDAPI ShowModelessHTMLDialog(
    HWND hwndParent,
    IMoniker * pMk,
    VARIANT * pvarArgIn,
    VARIANT * pvarOptions,
    IHTMLWindow2 ** ppWindow);
STDAPI RunHTMLApplication(
    HINSTANCE hinst,
    HINSTANCE hPrevInst,
    _In_ LPSTR szCmdLine,
    int nCmdShow
    );
STDAPI CreateHTMLPropertyPage(
    IMoniker * pmk,
    IPropertyPage ** ppPP
    );
STDAPI EarlyStartDisplaySystem();
STDAPI IERegisterXMLNS(
     _In_ LPCWSTR lpszURI,
     _In_ GUID clsid,
     _In_ BOOL fMachine
     );
STDAPI IEIsXMLNSRegistered(
     LPCWSTR lpszURI,
     _Out_ GUID *pCLSID
     );
STDAPI GetColorValueFromString(
     _In_ LPCWSTR lpszColor,
     _In_ BOOL fStrictCSS1,
     _In_ BOOL fIsStandardsCSS,
     _Out_ COLORREF *pColor
     );
STDAPI InitializeLocalHtmlEngine();
STDAPI UninitializeLocalHtmlEngine();
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IHostDialogHelper;
    typedef struct IHostDialogHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IHostDialogHelper * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IHostDialogHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IHostDialogHelper * This);
        HRESULT ( STDMETHODCALLTYPE *ShowHTMLDialog )(
            IHostDialogHelper * This,
            HWND hwndParent,
            IMoniker *pMk,
            VARIANT *pvarArgIn,
            _In_z_ WCHAR *pchOptions,
            VARIANT *pvarArgOut,
            IUnknown *punkHost);
        END_INTERFACE
    } IHostDialogHelperVtbl;
    interface IHostDialogHelper
    {
        CONST_VTBL struct IHostDialogHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ShowHTMLDialog(This,hwndParent,pMk,pvarArgIn,pchOptions,pvarArgOut,punkHost) )
EXTERN_C const GUID CLSID_HostDialogHelper;
typedef
enum tagDOCHOSTUITYPE
    {
        DOCHOSTUITYPE_BROWSE = 0,
        DOCHOSTUITYPE_AUTHOR = 1
    } DOCHOSTUITYPE;
typedef
enum tagDOCHOSTUIDBLCLK
    {
        DOCHOSTUIDBLCLK_DEFAULT = 0,
        DOCHOSTUIDBLCLK_SHOWPROPERTIES = 1,
        DOCHOSTUIDBLCLK_SHOWCODE = 2
    } DOCHOSTUIDBLCLK;
typedef
enum tagDOCHOSTUIFLAG
    {
        DOCHOSTUIFLAG_DIALOG = 0x1,
        DOCHOSTUIFLAG_DISABLE_HELP_MENU = 0x2,
        DOCHOSTUIFLAG_NO3DBORDER = 0x4,
        DOCHOSTUIFLAG_SCROLL_NO = 0x8,
        DOCHOSTUIFLAG_DISABLE_SCRIPT_INACTIVE = 0x10,
        DOCHOSTUIFLAG_OPENNEWWIN = 0x20,
        DOCHOSTUIFLAG_DISABLE_OFFSCREEN = 0x40,
        DOCHOSTUIFLAG_FLAT_SCROLLBAR = 0x80,
        DOCHOSTUIFLAG_DIV_BLOCKDEFAULT = 0x100,
        DOCHOSTUIFLAG_ACTIVATE_CLIENTHIT_ONLY = 0x200,
        DOCHOSTUIFLAG_OVERRIDEBEHAVIORFACTORY = 0x400,
        DOCHOSTUIFLAG_CODEPAGELINKEDFONTS = 0x800,
        DOCHOSTUIFLAG_URL_ENCODING_DISABLE_UTF8 = 0x1000,
        DOCHOSTUIFLAG_URL_ENCODING_ENABLE_UTF8 = 0x2000,
        DOCHOSTUIFLAG_ENABLE_FORMS_AUTOCOMPLETE = 0x4000,
        DOCHOSTUIFLAG_ENABLE_INPLACE_NAVIGATION = 0x10000,
        DOCHOSTUIFLAG_IME_ENABLE_RECONVERSION = 0x20000,
        DOCHOSTUIFLAG_THEME = 0x40000,
        DOCHOSTUIFLAG_NOTHEME = 0x80000,
        DOCHOSTUIFLAG_NOPICS = 0x100000,
        DOCHOSTUIFLAG_NO3DOUTERBORDER = 0x200000,
        DOCHOSTUIFLAG_DISABLE_EDIT_NS_FIXUP = 0x400000,
        DOCHOSTUIFLAG_LOCAL_MACHINE_ACCESS_CHECK = 0x800000,
        DOCHOSTUIFLAG_DISABLE_UNTRUSTEDPROTOCOL = 0x1000000,
        DOCHOSTUIFLAG_HOST_NAVIGATES = 0x2000000,
        DOCHOSTUIFLAG_ENABLE_REDIRECT_NOTIFICATION = 0x4000000,
        DOCHOSTUIFLAG_USE_WINDOWLESS_SELECTCONTROL = 0x8000000,
        DOCHOSTUIFLAG_USE_WINDOWED_SELECTCONTROL = 0x10000000,
        DOCHOSTUIFLAG_ENABLE_ACTIVEX_INACTIVATE_MODE = 0x20000000,
        DOCHOSTUIFLAG_DPI_AWARE = 0x40000000
    } DOCHOSTUIFLAG;
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0002_v0_0_s_ifspec;
typedef struct _DOCHOSTUIINFO
    {
    ULONG cbSize;
    DWORD dwFlags;
    DWORD dwDoubleClick;
    OLECHAR *pchHostCss;
    OLECHAR *pchHostNS;
    } DOCHOSTUIINFO;
EXTERN_C const IID IID_IDocHostUIHandler;
    typedef struct IDocHostUIHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDocHostUIHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDocHostUIHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDocHostUIHandler * This);
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )(
            IDocHostUIHandler * This,
            _In_ DWORD dwID,
            _In_ POINT *ppt,
            _In_ IUnknown *pcmdtReserved,
            _In_ IDispatch *pdispReserved);
        HRESULT ( STDMETHODCALLTYPE *GetHostInfo )(
            IDocHostUIHandler * This,
            _Inout_ DOCHOSTUIINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *ShowUI )(
            IDocHostUIHandler * This,
            _In_ DWORD dwID,
            _In_ IOleInPlaceActiveObject *pActiveObject,
            _In_ IOleCommandTarget *pCommandTarget,
            _In_ IOleInPlaceFrame *pFrame,
            _In_ IOleInPlaceUIWindow *pDoc);
        HRESULT ( STDMETHODCALLTYPE *HideUI )(
            IDocHostUIHandler * This);
        HRESULT ( STDMETHODCALLTYPE *UpdateUI )(
            IDocHostUIHandler * This);
        HRESULT ( STDMETHODCALLTYPE *EnableModeless )(
            IDocHostUIHandler * This,
                       BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *OnDocWindowActivate )(
            IDocHostUIHandler * This,
                       BOOL fActivate);
        HRESULT ( STDMETHODCALLTYPE *OnFrameWindowActivate )(
            IDocHostUIHandler * This,
                       BOOL fActivate);
        HRESULT ( STDMETHODCALLTYPE *ResizeBorder )(
            IDocHostUIHandler * This,
            _In_ LPCRECT prcBorder,
            _In_ IOleInPlaceUIWindow *pUIWindow,
            _In_ BOOL fRameWindow);
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )(
            IDocHostUIHandler * This,
                       LPMSG lpMsg,
                       const GUID *pguidCmdGroup,
                       DWORD nCmdID);
        HRESULT ( STDMETHODCALLTYPE *GetOptionKeyPath )(
            IDocHostUIHandler * This,
            _Out_ LPOLESTR *pchKey,
                       DWORD dw);
        HRESULT ( STDMETHODCALLTYPE *GetDropTarget )(
            IDocHostUIHandler * This,
            _In_ IDropTarget *pDropTarget,
            _Outptr_ IDropTarget **ppDropTarget);
        HRESULT ( STDMETHODCALLTYPE *GetExternal )(
            IDocHostUIHandler * This,
            _Outptr_result_maybenull_ IDispatch **ppDispatch);
        HRESULT ( STDMETHODCALLTYPE *TranslateUrl )(
            IDocHostUIHandler * This,
                       DWORD dwTranslate,
            _In_ LPWSTR pchURLIn,
            _Outptr_ LPWSTR *ppchURLOut);
        HRESULT ( STDMETHODCALLTYPE *FilterDataObject )(
            IDocHostUIHandler * This,
            _In_ IDataObject *pDO,
            _Outptr_result_maybenull_ IDataObject **ppDORet);
        END_INTERFACE
    } IDocHostUIHandlerVtbl;
    interface IDocHostUIHandler
    {
        CONST_VTBL struct IDocHostUIHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ShowContextMenu(This,dwID,ppt,pcmdtReserved,pdispReserved) )
    ( (This)->lpVtbl -> GetHostInfo(This,pInfo) )
    ( (This)->lpVtbl -> ShowUI(This,dwID,pActiveObject,pCommandTarget,pFrame,pDoc) )
    ( (This)->lpVtbl -> HideUI(This) )
    ( (This)->lpVtbl -> UpdateUI(This) )
    ( (This)->lpVtbl -> EnableModeless(This,fEnable) )
    ( (This)->lpVtbl -> OnDocWindowActivate(This,fActivate) )
    ( (This)->lpVtbl -> OnFrameWindowActivate(This,fActivate) )
    ( (This)->lpVtbl -> ResizeBorder(This,prcBorder,pUIWindow,fRameWindow) )
    ( (This)->lpVtbl -> TranslateAccelerator(This,lpMsg,pguidCmdGroup,nCmdID) )
    ( (This)->lpVtbl -> GetOptionKeyPath(This,pchKey,dw) )
    ( (This)->lpVtbl -> GetDropTarget(This,pDropTarget,ppDropTarget) )
    ( (This)->lpVtbl -> GetExternal(This,ppDispatch) )
    ( (This)->lpVtbl -> TranslateUrl(This,dwTranslate,pchURLIn,ppchURLOut) )
    ( (This)->lpVtbl -> FilterDataObject(This,pDO,ppDORet) )
EXTERN_C const IID IID_IDocHostUIHandler2;
    typedef struct IDocHostUIHandler2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDocHostUIHandler2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDocHostUIHandler2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDocHostUIHandler2 * This);
        HRESULT ( STDMETHODCALLTYPE *ShowContextMenu )(
            IDocHostUIHandler2 * This,
            _In_ DWORD dwID,
            _In_ POINT *ppt,
            _In_ IUnknown *pcmdtReserved,
            _In_ IDispatch *pdispReserved);
        HRESULT ( STDMETHODCALLTYPE *GetHostInfo )(
            IDocHostUIHandler2 * This,
            _Inout_ DOCHOSTUIINFO *pInfo);
        HRESULT ( STDMETHODCALLTYPE *ShowUI )(
            IDocHostUIHandler2 * This,
            _In_ DWORD dwID,
            _In_ IOleInPlaceActiveObject *pActiveObject,
            _In_ IOleCommandTarget *pCommandTarget,
            _In_ IOleInPlaceFrame *pFrame,
            _In_ IOleInPlaceUIWindow *pDoc);
        HRESULT ( STDMETHODCALLTYPE *HideUI )(
            IDocHostUIHandler2 * This);
        HRESULT ( STDMETHODCALLTYPE *UpdateUI )(
            IDocHostUIHandler2 * This);
        HRESULT ( STDMETHODCALLTYPE *EnableModeless )(
            IDocHostUIHandler2 * This,
                       BOOL fEnable);
        HRESULT ( STDMETHODCALLTYPE *OnDocWindowActivate )(
            IDocHostUIHandler2 * This,
                       BOOL fActivate);
        HRESULT ( STDMETHODCALLTYPE *OnFrameWindowActivate )(
            IDocHostUIHandler2 * This,
                       BOOL fActivate);
        HRESULT ( STDMETHODCALLTYPE *ResizeBorder )(
            IDocHostUIHandler2 * This,
            _In_ LPCRECT prcBorder,
            _In_ IOleInPlaceUIWindow *pUIWindow,
            _In_ BOOL fRameWindow);
        HRESULT ( STDMETHODCALLTYPE *TranslateAccelerator )(
            IDocHostUIHandler2 * This,
                       LPMSG lpMsg,
                       const GUID *pguidCmdGroup,
                       DWORD nCmdID);
        HRESULT ( STDMETHODCALLTYPE *GetOptionKeyPath )(
            IDocHostUIHandler2 * This,
            _Out_ LPOLESTR *pchKey,
                       DWORD dw);
        HRESULT ( STDMETHODCALLTYPE *GetDropTarget )(
            IDocHostUIHandler2 * This,
            _In_ IDropTarget *pDropTarget,
            _Outptr_ IDropTarget **ppDropTarget);
        HRESULT ( STDMETHODCALLTYPE *GetExternal )(
            IDocHostUIHandler2 * This,
            _Outptr_result_maybenull_ IDispatch **ppDispatch);
        HRESULT ( STDMETHODCALLTYPE *TranslateUrl )(
            IDocHostUIHandler2 * This,
                       DWORD dwTranslate,
            _In_ LPWSTR pchURLIn,
            _Outptr_ LPWSTR *ppchURLOut);
        HRESULT ( STDMETHODCALLTYPE *FilterDataObject )(
            IDocHostUIHandler2 * This,
            _In_ IDataObject *pDO,
            _Outptr_result_maybenull_ IDataObject **ppDORet);
        HRESULT ( STDMETHODCALLTYPE *GetOverrideKeyPath )(
            IDocHostUIHandler2 * This,
            _Outptr_ LPOLESTR *pchKey,
                       DWORD dw);
        END_INTERFACE
    } IDocHostUIHandler2Vtbl;
    interface IDocHostUIHandler2
    {
        CONST_VTBL struct IDocHostUIHandler2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ShowContextMenu(This,dwID,ppt,pcmdtReserved,pdispReserved) )
    ( (This)->lpVtbl -> GetHostInfo(This,pInfo) )
    ( (This)->lpVtbl -> ShowUI(This,dwID,pActiveObject,pCommandTarget,pFrame,pDoc) )
    ( (This)->lpVtbl -> HideUI(This) )
    ( (This)->lpVtbl -> UpdateUI(This) )
    ( (This)->lpVtbl -> EnableModeless(This,fEnable) )
    ( (This)->lpVtbl -> OnDocWindowActivate(This,fActivate) )
    ( (This)->lpVtbl -> OnFrameWindowActivate(This,fActivate) )
    ( (This)->lpVtbl -> ResizeBorder(This,prcBorder,pUIWindow,fRameWindow) )
    ( (This)->lpVtbl -> TranslateAccelerator(This,lpMsg,pguidCmdGroup,nCmdID) )
    ( (This)->lpVtbl -> GetOptionKeyPath(This,pchKey,dw) )
    ( (This)->lpVtbl -> GetDropTarget(This,pDropTarget,ppDropTarget) )
    ( (This)->lpVtbl -> GetExternal(This,ppDispatch) )
    ( (This)->lpVtbl -> TranslateUrl(This,dwTranslate,pchURLIn,ppchURLOut) )
    ( (This)->lpVtbl -> FilterDataObject(This,pDO,ppDORet) )
    ( (This)->lpVtbl -> GetOverrideKeyPath(This,pchKey,dw) )
DEFINE_GUID(CGID_DocHostCommandHandler,0xf38bc242,0xb950,0x11d1,0x89,0x18,0x00,0xc0,0x4f,0xc2,0xc8,0x36);
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_ICustomDoc;
    typedef struct ICustomDocVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ICustomDoc * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ICustomDoc * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ICustomDoc * This);
        HRESULT ( STDMETHODCALLTYPE *SetUIHandler )(
            ICustomDoc * This,
                       IDocHostUIHandler *pUIHandler);
        END_INTERFACE
    } ICustomDocVtbl;
    interface ICustomDoc
    {
        CONST_VTBL struct ICustomDocVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetUIHandler(This,pUIHandler) )
EXTERN_C const IID IID_IDocHostShowUI;
    typedef struct IDocHostShowUIVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDocHostShowUI * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDocHostShowUI * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDocHostShowUI * This);
        HRESULT ( STDMETHODCALLTYPE *ShowMessage )(
            IDocHostShowUI * This,
                       HWND hwnd,
            _In_ LPOLESTR lpstrText,
            _In_ LPOLESTR lpstrCaption,
                       DWORD dwType,
            _In_ LPOLESTR lpstrHelpFile,
                       DWORD dwHelpContext,
                        LRESULT *plResult);
        HRESULT ( STDMETHODCALLTYPE *ShowHelp )(
            IDocHostShowUI * This,
                       HWND hwnd,
            _In_ LPOLESTR pszHelpFile,
                       UINT uCommand,
                       DWORD dwData,
                       POINT ptMouse,
                        IDispatch *pDispatchObjectHit);
        END_INTERFACE
    } IDocHostShowUIVtbl;
    interface IDocHostShowUI
    {
        CONST_VTBL struct IDocHostShowUIVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ShowMessage(This,hwnd,lpstrText,lpstrCaption,dwType,lpstrHelpFile,dwHelpContext,plResult) )
    ( (This)->lpVtbl -> ShowHelp(This,hwnd,pszHelpFile,uCommand,dwData,ptMouse,pDispatchObjectHit) )
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IClassFactoryEx;
    typedef struct IClassFactoryExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IClassFactoryEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IClassFactoryEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IClassFactoryEx * This);
                      HRESULT ( STDMETHODCALLTYPE *CreateInstance )(
            IClassFactoryEx * This,
            _In_opt_ IUnknown *pUnkOuter,
            _In_ REFIID riid,
            _COM_Outptr_ void **ppvObject);
                      HRESULT ( STDMETHODCALLTYPE *LockServer )(
            IClassFactoryEx * This,
                       BOOL fLock);
        HRESULT ( STDMETHODCALLTYPE *CreateInstanceWithContext )(
            IClassFactoryEx * This,
            IUnknown *punkContext,
            IUnknown *punkOuter,
            REFIID riid,
                        void **ppv);
        END_INTERFACE
    } IClassFactoryExVtbl;
    interface IClassFactoryEx
    {
        CONST_VTBL struct IClassFactoryExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateInstance(This,pUnkOuter,riid,ppvObject) )
    ( (This)->lpVtbl -> LockServer(This,fLock) )
    ( (This)->lpVtbl -> CreateInstanceWithContext(This,punkContext,punkOuter,riid,ppv) )
EXTERN_C const IID IID_IHTMLOMWindowServices;
    typedef struct IHTMLOMWindowServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHTMLOMWindowServices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHTMLOMWindowServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHTMLOMWindowServices * This);
        HRESULT ( STDMETHODCALLTYPE *moveTo )(
            __RPC__in IHTMLOMWindowServices * This,
                       LONG x,
                       LONG y);
        HRESULT ( STDMETHODCALLTYPE *moveBy )(
            __RPC__in IHTMLOMWindowServices * This,
                       LONG x,
                       LONG y);
        HRESULT ( STDMETHODCALLTYPE *resizeTo )(
            __RPC__in IHTMLOMWindowServices * This,
                       LONG x,
                       LONG y);
        HRESULT ( STDMETHODCALLTYPE *resizeBy )(
            __RPC__in IHTMLOMWindowServices * This,
                       LONG x,
                       LONG y);
        END_INTERFACE
    } IHTMLOMWindowServicesVtbl;
    interface IHTMLOMWindowServices
    {
        CONST_VTBL struct IHTMLOMWindowServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> moveTo(This,x,y) )
    ( (This)->lpVtbl -> moveBy(This,x,y) )
    ( (This)->lpVtbl -> resizeTo(This,x,y) )
    ( (This)->lpVtbl -> resizeBy(This,x,y) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mshtmhst_0000_0008_v0_0_s_ifspec;
}
