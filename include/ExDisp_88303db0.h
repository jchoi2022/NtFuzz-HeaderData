#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IWebBrowser IWebBrowser;
typedef interface DWebBrowserEvents DWebBrowserEvents;
typedef interface IWebBrowserApp IWebBrowserApp;
typedef interface IWebBrowser2 IWebBrowser2;
typedef interface DWebBrowserEvents2 DWebBrowserEvents2;
typedef class WebBrowser_V1 WebBrowser_V1;
typedef class WebBrowser WebBrowser;
typedef class InternetExplorer InternetExplorer;
typedef class InternetExplorerMedium InternetExplorerMedium;
typedef class ShellBrowserWindow ShellBrowserWindow;
typedef interface DShellWindowsEvents DShellWindowsEvents;
typedef interface IShellWindows IShellWindows;
typedef class ShellWindows ShellWindows;
typedef interface IShellUIHelper IShellUIHelper;
typedef interface IShellUIHelper2 IShellUIHelper2;
typedef interface IShellUIHelper3 IShellUIHelper3;
typedef interface IShellUIHelper4 IShellUIHelper4;
typedef interface IShellUIHelper5 IShellUIHelper5;
typedef interface IShellUIHelper6 IShellUIHelper6;
typedef interface IShellUIHelper7 IShellUIHelper7;
typedef interface IShellUIHelper8 IShellUIHelper8;
typedef interface IShellUIHelper9 IShellUIHelper9;
typedef class ShellUIHelper ShellUIHelper;
typedef interface DShellNameSpaceEvents DShellNameSpaceEvents;
typedef interface IShellFavoritesNameSpace IShellFavoritesNameSpace;
typedef interface IShellNameSpace IShellNameSpace;
typedef class ShellNameSpace ShellNameSpace;
typedef interface IScriptErrorList IScriptErrorList;
typedef class CScriptErrorList CScriptErrorList;
#include "ocidl.h"
#include "docobj.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_exdisp_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_exdisp_0000_0000_v0_0_s_ifspec;
typedef DECLSPEC_UUID("34A226E0-DF30-11CF-89A9-00A0C9054129")
enum CommandStateChangeConstants
    {
        CSC_UPDATECOMMANDS = ( int )0xffffffff,
        CSC_NAVIGATEFORWARD = 0x1,
        CSC_NAVIGATEBACK = 0x2
    } CommandStateChangeConstants;
typedef DECLSPEC_UUID("65507BE0-91A8-11d3-A845-009027220E6D")
enum SecureLockIconConstants
    {
        secureLockIconUnsecure = 0,
        secureLockIconMixed = 0x1,
        secureLockIconSecureUnknownBits = 0x2,
        secureLockIconSecure40Bit = 0x3,
        secureLockIconSecure56Bit = 0x4,
        secureLockIconSecureFortezza = 0x5,
        secureLockIconSecure128Bit = 0x6
    } SecureLockIconConstants;
typedef DECLSPEC_UUID("a8317d46-03cb-4975-ae94-85e9f2e1d020")
enum NewProcessCauseConstants
    {
        ProtectedModeRedirect = 0x1
    } NewProcessCauseConstants;
typedef DECLSPEC_UUID("F41E6981-28E5-11d0-82B4-00A0C90C29C5")
enum ShellWindowTypeConstants
    {
        SWC_EXPLORER = 0,
        SWC_BROWSER = 0x1,
        SWC_3RDPARTY = 0x2,
        SWC_CALLBACK = 0x4,
        SWC_DESKTOP = 0x8
    } ShellWindowTypeConstants;
typedef DECLSPEC_UUID("7716a370-38ca-11d0-a48b-00a0c90a8f39")
enum ShellWindowFindWindowOptions
    {
        SWFO_NEEDDISPATCH = 0x1,
        SWFO_INCLUDEPENDING = 0x2,
        SWFO_COOKIEPASSED = 0x4
    } ShellWindowFindWindowOptions;
EXTERN_C const IID LIBID_SHDocVw;
typedef DECLSPEC_UUID("14EE5380-A378-11cf-A731-00A0C9082637")
enum BrowserNavConstants
    {
        navOpenInNewWindow = 0x1,
        navNoHistory = 0x2,
        navNoReadFromCache = 0x4,
        navNoWriteToCache = 0x8,
        navAllowAutosearch = 0x10,
        navBrowserBar = 0x20,
        navHyperlink = 0x40,
        navEnforceRestricted = 0x80,
        navNewWindowsManaged = 0x100,
        navUntrustedForDownload = 0x200,
        navTrustedForActiveX = 0x400,
        navOpenInNewTab = 0x800,
        navOpenInBackgroundTab = 0x1000,
        navKeepWordWheelText = 0x2000,
        navVirtualTab = 0x4000,
        navBlockRedirectsXDomain = 0x8000,
        navOpenNewForegroundTab = 0x10000,
        navTravelLogScreenshot = 0x20000,
        navDeferUnload = 0x40000,
        navSpeculative = 0x80000,
        navSuggestNewWindow = 0x100000,
        navSuggestNewTab = 0x200000,
        navReserved1 = 0x400000,
        navHomepageNavigate = 0x800000,
        navRefresh = 0x1000000,
        navHostNavigation = 0x2000000,
        navReserved2 = 0x4000000,
        navReserved3 = 0x8000000,
        navReserved4 = 0x10000000,
        navReserved5 = 0x20000000,
        navReserved6 = 0x40000000,
        navReserved7 = 0x80000000
    } BrowserNavConstants;
typedef DECLSPEC_UUID("C317C261-A991-11cf-A731-00A0C9082637")
enum RefreshConstants
    {
        REFRESH_NORMAL = 0,
        REFRESH_IFEXPIRED = 1,
        REFRESH_COMPLETELY = 3
    } RefreshConstants;
EXTERN_C const IID IID_IWebBrowser;
    typedef struct IWebBrowserVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWebBrowser * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWebBrowser * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWebBrowser * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWebBrowser * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWebBrowser * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWebBrowser * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWebBrowser * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                            HRESULT ( STDMETHODCALLTYPE *GoBack )(
            __RPC__in IWebBrowser * This);
                                            HRESULT ( STDMETHODCALLTYPE *GoForward )(
            __RPC__in IWebBrowser * This);
                                            HRESULT ( STDMETHODCALLTYPE *GoHome )(
            __RPC__in IWebBrowser * This);
                                            HRESULT ( STDMETHODCALLTYPE *GoSearch )(
            __RPC__in IWebBrowser * This);
                                            HRESULT ( STDMETHODCALLTYPE *Navigate )(
            __RPC__in IWebBrowser * This,
                       __RPC__in BSTR URL,
                                         __RPC__in_opt VARIANT *Flags,
                                         __RPC__in_opt VARIANT *TargetFrameName,
                                         __RPC__in_opt VARIANT *PostData,
                                         __RPC__in_opt VARIANT *Headers);
                                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IWebBrowser * This);
                                            HRESULT ( STDMETHODCALLTYPE *Refresh2 )(
            __RPC__in IWebBrowser * This,
                                         __RPC__in_opt VARIANT *Level);
                                            HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IWebBrowser * This);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in IWebBrowser * This,
                                __RPC__deref_out_opt IDispatch **ppDisp);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IWebBrowser * This,
                                __RPC__deref_out_opt IDispatch **ppDisp);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Container )(
            __RPC__in IWebBrowser * This,
                                __RPC__deref_out_opt IDispatch **ppDisp);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Document )(
            __RPC__in IWebBrowser * This,
                                __RPC__deref_out_opt IDispatch **ppDisp);
                                                     HRESULT ( STDMETHODCALLTYPE *get_TopLevelContainer )(
            __RPC__in IWebBrowser * This,
                                __RPC__out VARIANT_BOOL *pBool);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IWebBrowser * This,
                                __RPC__deref_out_opt BSTR *Type);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Left )(
            __RPC__in IWebBrowser * This,
                                __RPC__out long *pl);
                            HRESULT ( STDMETHODCALLTYPE *put_Left )(
            __RPC__in IWebBrowser * This,
                       long Left);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Top )(
            __RPC__in IWebBrowser * This,
                                __RPC__out long *pl);
                            HRESULT ( STDMETHODCALLTYPE *put_Top )(
            __RPC__in IWebBrowser * This,
                       long Top);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Width )(
            __RPC__in IWebBrowser * This,
                                __RPC__out long *pl);
                            HRESULT ( STDMETHODCALLTYPE *put_Width )(
            __RPC__in IWebBrowser * This,
                       long Width);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Height )(
            __RPC__in IWebBrowser * This,
                                __RPC__out long *pl);
                            HRESULT ( STDMETHODCALLTYPE *put_Height )(
            __RPC__in IWebBrowser * This,
                       long Height);
                                                     HRESULT ( STDMETHODCALLTYPE *get_LocationName )(
            __RPC__in IWebBrowser * This,
                                __RPC__deref_out_opt BSTR *LocationName);
                                                     HRESULT ( STDMETHODCALLTYPE *get_LocationURL )(
            __RPC__in IWebBrowser * This,
                                __RPC__deref_out_opt BSTR *LocationURL);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Busy )(
            __RPC__in IWebBrowser * This,
                                __RPC__out VARIANT_BOOL *pBool);
        END_INTERFACE
    } IWebBrowserVtbl;
    interface IWebBrowser
    {
        CONST_VTBL struct IWebBrowserVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GoBack(This) )
    ( (This)->lpVtbl -> GoForward(This) )
    ( (This)->lpVtbl -> GoHome(This) )
    ( (This)->lpVtbl -> GoSearch(This) )
    ( (This)->lpVtbl -> Navigate(This,URL,Flags,TargetFrameName,PostData,Headers) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Refresh2(This,Level) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> get_Application(This,ppDisp) )
    ( (This)->lpVtbl -> get_Parent(This,ppDisp) )
    ( (This)->lpVtbl -> get_Container(This,ppDisp) )
    ( (This)->lpVtbl -> get_Document(This,ppDisp) )
    ( (This)->lpVtbl -> get_TopLevelContainer(This,pBool) )
    ( (This)->lpVtbl -> get_Type(This,Type) )
    ( (This)->lpVtbl -> get_Left(This,pl) )
    ( (This)->lpVtbl -> put_Left(This,Left) )
    ( (This)->lpVtbl -> get_Top(This,pl) )
    ( (This)->lpVtbl -> put_Top(This,Top) )
    ( (This)->lpVtbl -> get_Width(This,pl) )
    ( (This)->lpVtbl -> put_Width(This,Width) )
    ( (This)->lpVtbl -> get_Height(This,pl) )
    ( (This)->lpVtbl -> put_Height(This,Height) )
    ( (This)->lpVtbl -> get_LocationName(This,LocationName) )
    ( (This)->lpVtbl -> get_LocationURL(This,LocationURL) )
    ( (This)->lpVtbl -> get_Busy(This,pBool) )
EXTERN_C const IID DIID_DWebBrowserEvents;
    typedef struct DWebBrowserEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DWebBrowserEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DWebBrowserEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DWebBrowserEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DWebBrowserEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DWebBrowserEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DWebBrowserEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DWebBrowserEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } DWebBrowserEventsVtbl;
    interface DWebBrowserEvents
    {
        CONST_VTBL struct DWebBrowserEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_IWebBrowserApp;
    typedef struct IWebBrowserAppVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWebBrowserApp * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWebBrowserApp * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWebBrowserApp * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWebBrowserApp * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWebBrowserApp * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWebBrowserApp * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWebBrowserApp * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                            HRESULT ( STDMETHODCALLTYPE *GoBack )(
            __RPC__in IWebBrowserApp * This);
                                            HRESULT ( STDMETHODCALLTYPE *GoForward )(
            __RPC__in IWebBrowserApp * This);
                                            HRESULT ( STDMETHODCALLTYPE *GoHome )(
            __RPC__in IWebBrowserApp * This);
                                            HRESULT ( STDMETHODCALLTYPE *GoSearch )(
            __RPC__in IWebBrowserApp * This);
                                            HRESULT ( STDMETHODCALLTYPE *Navigate )(
            __RPC__in IWebBrowserApp * This,
                       __RPC__in BSTR URL,
                                         __RPC__in_opt VARIANT *Flags,
                                         __RPC__in_opt VARIANT *TargetFrameName,
                                         __RPC__in_opt VARIANT *PostData,
                                         __RPC__in_opt VARIANT *Headers);
                                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IWebBrowserApp * This);
                                            HRESULT ( STDMETHODCALLTYPE *Refresh2 )(
            __RPC__in IWebBrowserApp * This,
                                         __RPC__in_opt VARIANT *Level);
                                            HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IWebBrowserApp * This);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__deref_out_opt IDispatch **ppDisp);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__deref_out_opt IDispatch **ppDisp);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Container )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__deref_out_opt IDispatch **ppDisp);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Document )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__deref_out_opt IDispatch **ppDisp);
                                                     HRESULT ( STDMETHODCALLTYPE *get_TopLevelContainer )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__out VARIANT_BOOL *pBool);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__deref_out_opt BSTR *Type);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Left )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__out long *pl);
                            HRESULT ( STDMETHODCALLTYPE *put_Left )(
            __RPC__in IWebBrowserApp * This,
                       long Left);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Top )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__out long *pl);
                            HRESULT ( STDMETHODCALLTYPE *put_Top )(
            __RPC__in IWebBrowserApp * This,
                       long Top);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Width )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__out long *pl);
                            HRESULT ( STDMETHODCALLTYPE *put_Width )(
            __RPC__in IWebBrowserApp * This,
                       long Width);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Height )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__out long *pl);
                            HRESULT ( STDMETHODCALLTYPE *put_Height )(
            __RPC__in IWebBrowserApp * This,
                       long Height);
                                                     HRESULT ( STDMETHODCALLTYPE *get_LocationName )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__deref_out_opt BSTR *LocationName);
                                                     HRESULT ( STDMETHODCALLTYPE *get_LocationURL )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__deref_out_opt BSTR *LocationURL);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Busy )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__out VARIANT_BOOL *pBool);
                                            HRESULT ( STDMETHODCALLTYPE *Quit )(
            __RPC__in IWebBrowserApp * This);
                                            HRESULT ( STDMETHODCALLTYPE *ClientToWindow )(
            __RPC__in IWebBrowserApp * This,
                            __RPC__inout int *pcx,
                            __RPC__inout int *pcy);
                                            HRESULT ( STDMETHODCALLTYPE *PutProperty )(
            __RPC__in IWebBrowserApp * This,
                       __RPC__in BSTR Property,
                       VARIANT vtValue);
                                            HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IWebBrowserApp * This,
                       __RPC__in BSTR Property,
                                __RPC__out VARIANT *pvtValue);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__deref_out_opt BSTR *Name);
                                                     HRESULT ( STDMETHODCALLTYPE *get_HWND )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__out SHANDLE_PTR *pHWND);
                                                     HRESULT ( STDMETHODCALLTYPE *get_FullName )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__deref_out_opt BSTR *FullName);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__deref_out_opt BSTR *Path);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Visible )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__out VARIANT_BOOL *pBool);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Visible )(
            __RPC__in IWebBrowserApp * This,
                       VARIANT_BOOL Value);
                                                     HRESULT ( STDMETHODCALLTYPE *get_StatusBar )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__out VARIANT_BOOL *pBool);
                                                     HRESULT ( STDMETHODCALLTYPE *put_StatusBar )(
            __RPC__in IWebBrowserApp * This,
                       VARIANT_BOOL Value);
                                                     HRESULT ( STDMETHODCALLTYPE *get_StatusText )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__deref_out_opt BSTR *StatusText);
                                                     HRESULT ( STDMETHODCALLTYPE *put_StatusText )(
            __RPC__in IWebBrowserApp * This,
                       __RPC__in BSTR StatusText);
                                                     HRESULT ( STDMETHODCALLTYPE *get_ToolBar )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__out int *Value);
                                                     HRESULT ( STDMETHODCALLTYPE *put_ToolBar )(
            __RPC__in IWebBrowserApp * This,
                       int Value);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MenuBar )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__out VARIANT_BOOL *Value);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MenuBar )(
            __RPC__in IWebBrowserApp * This,
                       VARIANT_BOOL Value);
                                                     HRESULT ( STDMETHODCALLTYPE *get_FullScreen )(
            __RPC__in IWebBrowserApp * This,
                                __RPC__out VARIANT_BOOL *pbFullScreen);
                                                     HRESULT ( STDMETHODCALLTYPE *put_FullScreen )(
            __RPC__in IWebBrowserApp * This,
                       VARIANT_BOOL bFullScreen);
        END_INTERFACE
    } IWebBrowserAppVtbl;
    interface IWebBrowserApp
    {
        CONST_VTBL struct IWebBrowserAppVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GoBack(This) )
    ( (This)->lpVtbl -> GoForward(This) )
    ( (This)->lpVtbl -> GoHome(This) )
    ( (This)->lpVtbl -> GoSearch(This) )
    ( (This)->lpVtbl -> Navigate(This,URL,Flags,TargetFrameName,PostData,Headers) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Refresh2(This,Level) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> get_Application(This,ppDisp) )
    ( (This)->lpVtbl -> get_Parent(This,ppDisp) )
    ( (This)->lpVtbl -> get_Container(This,ppDisp) )
    ( (This)->lpVtbl -> get_Document(This,ppDisp) )
    ( (This)->lpVtbl -> get_TopLevelContainer(This,pBool) )
    ( (This)->lpVtbl -> get_Type(This,Type) )
    ( (This)->lpVtbl -> get_Left(This,pl) )
    ( (This)->lpVtbl -> put_Left(This,Left) )
    ( (This)->lpVtbl -> get_Top(This,pl) )
    ( (This)->lpVtbl -> put_Top(This,Top) )
    ( (This)->lpVtbl -> get_Width(This,pl) )
    ( (This)->lpVtbl -> put_Width(This,Width) )
    ( (This)->lpVtbl -> get_Height(This,pl) )
    ( (This)->lpVtbl -> put_Height(This,Height) )
    ( (This)->lpVtbl -> get_LocationName(This,LocationName) )
    ( (This)->lpVtbl -> get_LocationURL(This,LocationURL) )
    ( (This)->lpVtbl -> get_Busy(This,pBool) )
    ( (This)->lpVtbl -> Quit(This) )
    ( (This)->lpVtbl -> ClientToWindow(This,pcx,pcy) )
    ( (This)->lpVtbl -> PutProperty(This,Property,vtValue) )
    ( (This)->lpVtbl -> GetProperty(This,Property,pvtValue) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_HWND(This,pHWND) )
    ( (This)->lpVtbl -> get_FullName(This,FullName) )
    ( (This)->lpVtbl -> get_Path(This,Path) )
    ( (This)->lpVtbl -> get_Visible(This,pBool) )
    ( (This)->lpVtbl -> put_Visible(This,Value) )
    ( (This)->lpVtbl -> get_StatusBar(This,pBool) )
    ( (This)->lpVtbl -> put_StatusBar(This,Value) )
    ( (This)->lpVtbl -> get_StatusText(This,StatusText) )
    ( (This)->lpVtbl -> put_StatusText(This,StatusText) )
    ( (This)->lpVtbl -> get_ToolBar(This,Value) )
    ( (This)->lpVtbl -> put_ToolBar(This,Value) )
    ( (This)->lpVtbl -> get_MenuBar(This,Value) )
    ( (This)->lpVtbl -> put_MenuBar(This,Value) )
    ( (This)->lpVtbl -> get_FullScreen(This,pbFullScreen) )
    ( (This)->lpVtbl -> put_FullScreen(This,bFullScreen) )
EXTERN_C const IID IID_IWebBrowser2;
    typedef struct IWebBrowser2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWebBrowser2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWebBrowser2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWebBrowser2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWebBrowser2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWebBrowser2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWebBrowser2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWebBrowser2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                            HRESULT ( STDMETHODCALLTYPE *GoBack )(
            __RPC__in IWebBrowser2 * This);
                                            HRESULT ( STDMETHODCALLTYPE *GoForward )(
            __RPC__in IWebBrowser2 * This);
                                            HRESULT ( STDMETHODCALLTYPE *GoHome )(
            __RPC__in IWebBrowser2 * This);
                                            HRESULT ( STDMETHODCALLTYPE *GoSearch )(
            __RPC__in IWebBrowser2 * This);
                                            HRESULT ( STDMETHODCALLTYPE *Navigate )(
            __RPC__in IWebBrowser2 * This,
                       __RPC__in BSTR URL,
                                         __RPC__in_opt VARIANT *Flags,
                                         __RPC__in_opt VARIANT *TargetFrameName,
                                         __RPC__in_opt VARIANT *PostData,
                                         __RPC__in_opt VARIANT *Headers);
                                            HRESULT ( STDMETHODCALLTYPE *Refresh )(
            __RPC__in IWebBrowser2 * This);
                                            HRESULT ( STDMETHODCALLTYPE *Refresh2 )(
            __RPC__in IWebBrowser2 * This,
                                         __RPC__in_opt VARIANT *Level);
                                            HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IWebBrowser2 * This);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Application )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__deref_out_opt IDispatch **ppDisp);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Parent )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__deref_out_opt IDispatch **ppDisp);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Container )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__deref_out_opt IDispatch **ppDisp);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Document )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__deref_out_opt IDispatch **ppDisp);
                                                     HRESULT ( STDMETHODCALLTYPE *get_TopLevelContainer )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out VARIANT_BOOL *pBool);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Type )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__deref_out_opt BSTR *Type);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Left )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out long *pl);
                            HRESULT ( STDMETHODCALLTYPE *put_Left )(
            __RPC__in IWebBrowser2 * This,
                       long Left);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Top )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out long *pl);
                            HRESULT ( STDMETHODCALLTYPE *put_Top )(
            __RPC__in IWebBrowser2 * This,
                       long Top);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Width )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out long *pl);
                            HRESULT ( STDMETHODCALLTYPE *put_Width )(
            __RPC__in IWebBrowser2 * This,
                       long Width);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Height )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out long *pl);
                            HRESULT ( STDMETHODCALLTYPE *put_Height )(
            __RPC__in IWebBrowser2 * This,
                       long Height);
                                                     HRESULT ( STDMETHODCALLTYPE *get_LocationName )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__deref_out_opt BSTR *LocationName);
                                                     HRESULT ( STDMETHODCALLTYPE *get_LocationURL )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__deref_out_opt BSTR *LocationURL);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Busy )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out VARIANT_BOOL *pBool);
                                            HRESULT ( STDMETHODCALLTYPE *Quit )(
            __RPC__in IWebBrowser2 * This);
                                            HRESULT ( STDMETHODCALLTYPE *ClientToWindow )(
            __RPC__in IWebBrowser2 * This,
                            __RPC__inout int *pcx,
                            __RPC__inout int *pcy);
                                            HRESULT ( STDMETHODCALLTYPE *PutProperty )(
            __RPC__in IWebBrowser2 * This,
                       __RPC__in BSTR Property,
                       VARIANT vtValue);
                                            HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in IWebBrowser2 * This,
                       __RPC__in BSTR Property,
                                __RPC__out VARIANT *pvtValue);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__deref_out_opt BSTR *Name);
                                                     HRESULT ( STDMETHODCALLTYPE *get_HWND )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out SHANDLE_PTR *pHWND);
                                                     HRESULT ( STDMETHODCALLTYPE *get_FullName )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__deref_out_opt BSTR *FullName);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Path )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__deref_out_opt BSTR *Path);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Visible )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out VARIANT_BOOL *pBool);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Visible )(
            __RPC__in IWebBrowser2 * This,
                       VARIANT_BOOL Value);
                                                     HRESULT ( STDMETHODCALLTYPE *get_StatusBar )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out VARIANT_BOOL *pBool);
                                                     HRESULT ( STDMETHODCALLTYPE *put_StatusBar )(
            __RPC__in IWebBrowser2 * This,
                       VARIANT_BOOL Value);
                                                     HRESULT ( STDMETHODCALLTYPE *get_StatusText )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__deref_out_opt BSTR *StatusText);
                                                     HRESULT ( STDMETHODCALLTYPE *put_StatusText )(
            __RPC__in IWebBrowser2 * This,
                       __RPC__in BSTR StatusText);
                                                     HRESULT ( STDMETHODCALLTYPE *get_ToolBar )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out int *Value);
                                                     HRESULT ( STDMETHODCALLTYPE *put_ToolBar )(
            __RPC__in IWebBrowser2 * This,
                       int Value);
                                                     HRESULT ( STDMETHODCALLTYPE *get_MenuBar )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out VARIANT_BOOL *Value);
                                                     HRESULT ( STDMETHODCALLTYPE *put_MenuBar )(
            __RPC__in IWebBrowser2 * This,
                       VARIANT_BOOL Value);
                                                     HRESULT ( STDMETHODCALLTYPE *get_FullScreen )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out VARIANT_BOOL *pbFullScreen);
                                                     HRESULT ( STDMETHODCALLTYPE *put_FullScreen )(
            __RPC__in IWebBrowser2 * This,
                       VARIANT_BOOL bFullScreen);
                                            HRESULT ( STDMETHODCALLTYPE *Navigate2 )(
            __RPC__in IWebBrowser2 * This,
                       __RPC__in VARIANT *URL,
                                         __RPC__in_opt VARIANT *Flags,
                                         __RPC__in_opt VARIANT *TargetFrameName,
                                         __RPC__in_opt VARIANT *PostData,
                                         __RPC__in_opt VARIANT *Headers);
                                            HRESULT ( STDMETHODCALLTYPE *QueryStatusWB )(
            __RPC__in IWebBrowser2 * This,
                       OLECMDID cmdID,
                                __RPC__out OLECMDF *pcmdf);
                                            HRESULT ( STDMETHODCALLTYPE *ExecWB )(
            __RPC__in IWebBrowser2 * This,
                       OLECMDID cmdID,
                       OLECMDEXECOPT cmdexecopt,
                                         __RPC__in_opt VARIANT *pvaIn,
                                              __RPC__inout_opt VARIANT *pvaOut);
                                            HRESULT ( STDMETHODCALLTYPE *ShowBrowserBar )(
            __RPC__in IWebBrowser2 * This,
                       __RPC__in VARIANT *pvaClsid,
                                         __RPC__in_opt VARIANT *pvarShow,
                                         __RPC__in_opt VARIANT *pvarSize);
                                      HRESULT ( STDMETHODCALLTYPE *get_ReadyState )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out READYSTATE *plReadyState);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Offline )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out VARIANT_BOOL *pbOffline);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Offline )(
            __RPC__in IWebBrowser2 * This,
                       VARIANT_BOOL bOffline);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Silent )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out VARIANT_BOOL *pbSilent);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Silent )(
            __RPC__in IWebBrowser2 * This,
                       VARIANT_BOOL bSilent);
                                                     HRESULT ( STDMETHODCALLTYPE *get_RegisterAsBrowser )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out VARIANT_BOOL *pbRegister);
                                                     HRESULT ( STDMETHODCALLTYPE *put_RegisterAsBrowser )(
            __RPC__in IWebBrowser2 * This,
                       VARIANT_BOOL bRegister);
                                                     HRESULT ( STDMETHODCALLTYPE *get_RegisterAsDropTarget )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out VARIANT_BOOL *pbRegister);
                                                     HRESULT ( STDMETHODCALLTYPE *put_RegisterAsDropTarget )(
            __RPC__in IWebBrowser2 * This,
                       VARIANT_BOOL bRegister);
                                                     HRESULT ( STDMETHODCALLTYPE *get_TheaterMode )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out VARIANT_BOOL *pbRegister);
                                                     HRESULT ( STDMETHODCALLTYPE *put_TheaterMode )(
            __RPC__in IWebBrowser2 * This,
                       VARIANT_BOOL bRegister);
                                                     HRESULT ( STDMETHODCALLTYPE *get_AddressBar )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out VARIANT_BOOL *Value);
                                                     HRESULT ( STDMETHODCALLTYPE *put_AddressBar )(
            __RPC__in IWebBrowser2 * This,
                       VARIANT_BOOL Value);
                                                     HRESULT ( STDMETHODCALLTYPE *get_Resizable )(
            __RPC__in IWebBrowser2 * This,
                                __RPC__out VARIANT_BOOL *Value);
                                                     HRESULT ( STDMETHODCALLTYPE *put_Resizable )(
            __RPC__in IWebBrowser2 * This,
                       VARIANT_BOOL Value);
        END_INTERFACE
    } IWebBrowser2Vtbl;
    interface IWebBrowser2
    {
        CONST_VTBL struct IWebBrowser2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GoBack(This) )
    ( (This)->lpVtbl -> GoForward(This) )
    ( (This)->lpVtbl -> GoHome(This) )
    ( (This)->lpVtbl -> GoSearch(This) )
    ( (This)->lpVtbl -> Navigate(This,URL,Flags,TargetFrameName,PostData,Headers) )
    ( (This)->lpVtbl -> Refresh(This) )
    ( (This)->lpVtbl -> Refresh2(This,Level) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> get_Application(This,ppDisp) )
    ( (This)->lpVtbl -> get_Parent(This,ppDisp) )
    ( (This)->lpVtbl -> get_Container(This,ppDisp) )
    ( (This)->lpVtbl -> get_Document(This,ppDisp) )
    ( (This)->lpVtbl -> get_TopLevelContainer(This,pBool) )
    ( (This)->lpVtbl -> get_Type(This,Type) )
    ( (This)->lpVtbl -> get_Left(This,pl) )
    ( (This)->lpVtbl -> put_Left(This,Left) )
    ( (This)->lpVtbl -> get_Top(This,pl) )
    ( (This)->lpVtbl -> put_Top(This,Top) )
    ( (This)->lpVtbl -> get_Width(This,pl) )
    ( (This)->lpVtbl -> put_Width(This,Width) )
    ( (This)->lpVtbl -> get_Height(This,pl) )
    ( (This)->lpVtbl -> put_Height(This,Height) )
    ( (This)->lpVtbl -> get_LocationName(This,LocationName) )
    ( (This)->lpVtbl -> get_LocationURL(This,LocationURL) )
    ( (This)->lpVtbl -> get_Busy(This,pBool) )
    ( (This)->lpVtbl -> Quit(This) )
    ( (This)->lpVtbl -> ClientToWindow(This,pcx,pcy) )
    ( (This)->lpVtbl -> PutProperty(This,Property,vtValue) )
    ( (This)->lpVtbl -> GetProperty(This,Property,pvtValue) )
    ( (This)->lpVtbl -> get_Name(This,Name) )
    ( (This)->lpVtbl -> get_HWND(This,pHWND) )
    ( (This)->lpVtbl -> get_FullName(This,FullName) )
    ( (This)->lpVtbl -> get_Path(This,Path) )
    ( (This)->lpVtbl -> get_Visible(This,pBool) )
    ( (This)->lpVtbl -> put_Visible(This,Value) )
    ( (This)->lpVtbl -> get_StatusBar(This,pBool) )
    ( (This)->lpVtbl -> put_StatusBar(This,Value) )
    ( (This)->lpVtbl -> get_StatusText(This,StatusText) )
    ( (This)->lpVtbl -> put_StatusText(This,StatusText) )
    ( (This)->lpVtbl -> get_ToolBar(This,Value) )
    ( (This)->lpVtbl -> put_ToolBar(This,Value) )
    ( (This)->lpVtbl -> get_MenuBar(This,Value) )
    ( (This)->lpVtbl -> put_MenuBar(This,Value) )
    ( (This)->lpVtbl -> get_FullScreen(This,pbFullScreen) )
    ( (This)->lpVtbl -> put_FullScreen(This,bFullScreen) )
    ( (This)->lpVtbl -> Navigate2(This,URL,Flags,TargetFrameName,PostData,Headers) )
    ( (This)->lpVtbl -> QueryStatusWB(This,cmdID,pcmdf) )
    ( (This)->lpVtbl -> ExecWB(This,cmdID,cmdexecopt,pvaIn,pvaOut) )
    ( (This)->lpVtbl -> ShowBrowserBar(This,pvaClsid,pvarShow,pvarSize) )
    ( (This)->lpVtbl -> get_ReadyState(This,plReadyState) )
    ( (This)->lpVtbl -> get_Offline(This,pbOffline) )
    ( (This)->lpVtbl -> put_Offline(This,bOffline) )
    ( (This)->lpVtbl -> get_Silent(This,pbSilent) )
    ( (This)->lpVtbl -> put_Silent(This,bSilent) )
    ( (This)->lpVtbl -> get_RegisterAsBrowser(This,pbRegister) )
    ( (This)->lpVtbl -> put_RegisterAsBrowser(This,bRegister) )
    ( (This)->lpVtbl -> get_RegisterAsDropTarget(This,pbRegister) )
    ( (This)->lpVtbl -> put_RegisterAsDropTarget(This,bRegister) )
    ( (This)->lpVtbl -> get_TheaterMode(This,pbRegister) )
    ( (This)->lpVtbl -> put_TheaterMode(This,bRegister) )
    ( (This)->lpVtbl -> get_AddressBar(This,Value) )
    ( (This)->lpVtbl -> put_AddressBar(This,Value) )
    ( (This)->lpVtbl -> get_Resizable(This,Value) )
    ( (This)->lpVtbl -> put_Resizable(This,Value) )
EXTERN_C const IID DIID_DWebBrowserEvents2;
    typedef struct DWebBrowserEvents2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DWebBrowserEvents2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DWebBrowserEvents2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DWebBrowserEvents2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DWebBrowserEvents2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DWebBrowserEvents2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DWebBrowserEvents2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DWebBrowserEvents2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } DWebBrowserEvents2Vtbl;
    interface DWebBrowserEvents2
    {
        CONST_VTBL struct DWebBrowserEvents2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const CLSID CLSID_WebBrowser_V1;
class DECLSPEC_UUID("EAB22AC3-30C1-11CF-A7EB-0000C05BAE0B")
WebBrowser_V1;
EXTERN_C const CLSID CLSID_WebBrowser;
class DECLSPEC_UUID("8856F961-340A-11D0-A96B-00C04FD705A2")
WebBrowser;
EXTERN_C const CLSID CLSID_InternetExplorer;
class DECLSPEC_UUID("0002DF01-0000-0000-C000-000000000046")
InternetExplorer;
EXTERN_C const CLSID CLSID_InternetExplorerMedium;
class DECLSPEC_UUID("D5E8041D-920F-45e9-B8FB-B1DEB82C6E5E")
InternetExplorerMedium;
EXTERN_C const CLSID CLSID_ShellBrowserWindow;
class DECLSPEC_UUID("c08afd90-f2a1-11d1-8455-00a0c91f3880")
ShellBrowserWindow;
EXTERN_C const IID DIID_DShellWindowsEvents;
    typedef struct DShellWindowsEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DShellWindowsEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DShellWindowsEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DShellWindowsEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DShellWindowsEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DShellWindowsEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DShellWindowsEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DShellWindowsEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } DShellWindowsEventsVtbl;
    interface DShellWindowsEvents
    {
        CONST_VTBL struct DShellWindowsEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_IShellWindows;
    typedef struct IShellWindowsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellWindows * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellWindows * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellWindows * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellWindows * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellWindows * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellWindows * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellWindows * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                    HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IShellWindows * This,
                                __RPC__out long *Count);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            __RPC__in IShellWindows * This,
                                 VARIANT index,
                                __RPC__deref_out_opt IDispatch **Folder);
                               HRESULT ( STDMETHODCALLTYPE *_NewEnum )(
            __RPC__in IShellWindows * This,
                                __RPC__deref_out_opt IUnknown **ppunk);
                                   HRESULT ( STDMETHODCALLTYPE *Register )(
            __RPC__in IShellWindows * This,
                       __RPC__in_opt IDispatch *pid,
                       long hwnd,
                       int swClass,
                        __RPC__out long *plCookie);
                                   HRESULT ( STDMETHODCALLTYPE *RegisterPending )(
            __RPC__in IShellWindows * This,
                       long lThreadId,
                       __RPC__in VARIANT *pvarloc,
                       __RPC__in VARIANT *pvarlocRoot,
                       int swClass,
                        __RPC__out long *plCookie);
                                   HRESULT ( STDMETHODCALLTYPE *Revoke )(
            __RPC__in IShellWindows * This,
                       long lCookie);
                                   HRESULT ( STDMETHODCALLTYPE *OnNavigate )(
            __RPC__in IShellWindows * This,
                       long lCookie,
                       __RPC__in VARIANT *pvarLoc);
                                   HRESULT ( STDMETHODCALLTYPE *OnActivated )(
            __RPC__in IShellWindows * This,
                       long lCookie,
                       VARIANT_BOOL fActive);
                                   HRESULT ( STDMETHODCALLTYPE *FindWindowSW )(
            __RPC__in IShellWindows * This,
                       __RPC__in VARIANT *pvarLoc,
                       __RPC__in VARIANT *pvarLocRoot,
                       int swClass,
                        __RPC__out long *phwnd,
                       int swfwOptions,
                                __RPC__deref_out_opt IDispatch **ppdispOut);
                                   HRESULT ( STDMETHODCALLTYPE *OnCreated )(
            __RPC__in IShellWindows * This,
                       long lCookie,
                       __RPC__in_opt IUnknown *punk);
                                   HRESULT ( STDMETHODCALLTYPE *ProcessAttachDetach )(
            __RPC__in IShellWindows * This,
                       VARIANT_BOOL fAttach);
        END_INTERFACE
    } IShellWindowsVtbl;
    interface IShellWindows
    {
        CONST_VTBL struct IShellWindowsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Count(This,Count) )
    ( (This)->lpVtbl -> Item(This,index,Folder) )
    ( (This)->lpVtbl -> _NewEnum(This,ppunk) )
    ( (This)->lpVtbl -> Register(This,pid,hwnd,swClass,plCookie) )
    ( (This)->lpVtbl -> RegisterPending(This,lThreadId,pvarloc,pvarlocRoot,swClass,plCookie) )
    ( (This)->lpVtbl -> Revoke(This,lCookie) )
    ( (This)->lpVtbl -> OnNavigate(This,lCookie,pvarLoc) )
    ( (This)->lpVtbl -> OnActivated(This,lCookie,fActive) )
    ( (This)->lpVtbl -> FindWindowSW(This,pvarLoc,pvarLocRoot,swClass,phwnd,swfwOptions,ppdispOut) )
    ( (This)->lpVtbl -> OnCreated(This,lCookie,punk) )
    ( (This)->lpVtbl -> ProcessAttachDetach(This,fAttach) )
EXTERN_C const CLSID CLSID_ShellWindows;
class DECLSPEC_UUID("9BA05972-F6A8-11CF-A442-00A0C90A8F39")
ShellWindows;
EXTERN_C const IID IID_IShellUIHelper;
    typedef struct IShellUIHelperVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellUIHelper * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellUIHelper * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellUIHelper * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellUIHelper * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellUIHelper * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellUIHelper * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellUIHelper * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                           HRESULT ( STDMETHODCALLTYPE *ResetFirstBootMode )(
            __RPC__in IShellUIHelper * This);
                           HRESULT ( STDMETHODCALLTYPE *ResetSafeMode )(
            __RPC__in IShellUIHelper * This);
                           HRESULT ( STDMETHODCALLTYPE *RefreshOfflineDesktop )(
            __RPC__in IShellUIHelper * This);
                   HRESULT ( STDMETHODCALLTYPE *AddFavorite )(
            __RPC__in IShellUIHelper * This,
                       __RPC__in BSTR URL,
                                         __RPC__in_opt VARIANT *Title);
                   HRESULT ( STDMETHODCALLTYPE *AddChannel )(
            __RPC__in IShellUIHelper * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *AddDesktopComponent )(
            __RPC__in IShellUIHelper * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Type,
                                         __RPC__in_opt VARIANT *Left,
                                         __RPC__in_opt VARIANT *Top,
                                         __RPC__in_opt VARIANT *Width,
                                         __RPC__in_opt VARIANT *Height);
                   HRESULT ( STDMETHODCALLTYPE *IsSubscribed )(
            __RPC__in IShellUIHelper * This,
                       __RPC__in BSTR URL,
                                __RPC__out VARIANT_BOOL *pBool);
                   HRESULT ( STDMETHODCALLTYPE *NavigateAndFind )(
            __RPC__in IShellUIHelper * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR strQuery,
                       __RPC__in VARIANT *varTargetFrame);
                   HRESULT ( STDMETHODCALLTYPE *ImportExportFavorites )(
            __RPC__in IShellUIHelper * This,
                       VARIANT_BOOL fImport,
                       __RPC__in BSTR strImpExpPath);
                   HRESULT ( STDMETHODCALLTYPE *AutoCompleteSaveForm )(
            __RPC__in IShellUIHelper * This,
                                         __RPC__in_opt VARIANT *Form);
                   HRESULT ( STDMETHODCALLTYPE *AutoScan )(
            __RPC__in IShellUIHelper * This,
                       __RPC__in BSTR strSearch,
                       __RPC__in BSTR strFailureUrl,
                                         __RPC__in_opt VARIANT *pvarTargetFrame);
                           HRESULT ( STDMETHODCALLTYPE *AutoCompleteAttach )(
            __RPC__in IShellUIHelper * This,
                                         __RPC__in_opt VARIANT *Reserved);
                   HRESULT ( STDMETHODCALLTYPE *ShowBrowserUI )(
            __RPC__in IShellUIHelper * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in VARIANT *pvarIn,
                                __RPC__out VARIANT *pvarOut);
        END_INTERFACE
    } IShellUIHelperVtbl;
    interface IShellUIHelper
    {
        CONST_VTBL struct IShellUIHelperVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ResetFirstBootMode(This) )
    ( (This)->lpVtbl -> ResetSafeMode(This) )
    ( (This)->lpVtbl -> RefreshOfflineDesktop(This) )
    ( (This)->lpVtbl -> AddFavorite(This,URL,Title) )
    ( (This)->lpVtbl -> AddChannel(This,URL) )
    ( (This)->lpVtbl -> AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) )
    ( (This)->lpVtbl -> IsSubscribed(This,URL,pBool) )
    ( (This)->lpVtbl -> NavigateAndFind(This,URL,strQuery,varTargetFrame) )
    ( (This)->lpVtbl -> ImportExportFavorites(This,fImport,strImpExpPath) )
    ( (This)->lpVtbl -> AutoCompleteSaveForm(This,Form) )
    ( (This)->lpVtbl -> AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) )
    ( (This)->lpVtbl -> AutoCompleteAttach(This,Reserved) )
    ( (This)->lpVtbl -> ShowBrowserUI(This,bstrName,pvarIn,pvarOut) )
EXTERN_C const IID IID_IShellUIHelper2;
    typedef struct IShellUIHelper2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellUIHelper2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellUIHelper2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellUIHelper2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellUIHelper2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellUIHelper2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellUIHelper2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellUIHelper2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                           HRESULT ( STDMETHODCALLTYPE *ResetFirstBootMode )(
            __RPC__in IShellUIHelper2 * This);
                           HRESULT ( STDMETHODCALLTYPE *ResetSafeMode )(
            __RPC__in IShellUIHelper2 * This);
                           HRESULT ( STDMETHODCALLTYPE *RefreshOfflineDesktop )(
            __RPC__in IShellUIHelper2 * This);
                   HRESULT ( STDMETHODCALLTYPE *AddFavorite )(
            __RPC__in IShellUIHelper2 * This,
                       __RPC__in BSTR URL,
                                         __RPC__in_opt VARIANT *Title);
                   HRESULT ( STDMETHODCALLTYPE *AddChannel )(
            __RPC__in IShellUIHelper2 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *AddDesktopComponent )(
            __RPC__in IShellUIHelper2 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Type,
                                         __RPC__in_opt VARIANT *Left,
                                         __RPC__in_opt VARIANT *Top,
                                         __RPC__in_opt VARIANT *Width,
                                         __RPC__in_opt VARIANT *Height);
                   HRESULT ( STDMETHODCALLTYPE *IsSubscribed )(
            __RPC__in IShellUIHelper2 * This,
                       __RPC__in BSTR URL,
                                __RPC__out VARIANT_BOOL *pBool);
                   HRESULT ( STDMETHODCALLTYPE *NavigateAndFind )(
            __RPC__in IShellUIHelper2 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR strQuery,
                       __RPC__in VARIANT *varTargetFrame);
                   HRESULT ( STDMETHODCALLTYPE *ImportExportFavorites )(
            __RPC__in IShellUIHelper2 * This,
                       VARIANT_BOOL fImport,
                       __RPC__in BSTR strImpExpPath);
                   HRESULT ( STDMETHODCALLTYPE *AutoCompleteSaveForm )(
            __RPC__in IShellUIHelper2 * This,
                                         __RPC__in_opt VARIANT *Form);
                   HRESULT ( STDMETHODCALLTYPE *AutoScan )(
            __RPC__in IShellUIHelper2 * This,
                       __RPC__in BSTR strSearch,
                       __RPC__in BSTR strFailureUrl,
                                         __RPC__in_opt VARIANT *pvarTargetFrame);
                           HRESULT ( STDMETHODCALLTYPE *AutoCompleteAttach )(
            __RPC__in IShellUIHelper2 * This,
                                         __RPC__in_opt VARIANT *Reserved);
                   HRESULT ( STDMETHODCALLTYPE *ShowBrowserUI )(
            __RPC__in IShellUIHelper2 * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in VARIANT *pvarIn,
                                __RPC__out VARIANT *pvarOut);
                   HRESULT ( STDMETHODCALLTYPE *AddSearchProvider )(
            __RPC__in IShellUIHelper2 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceShown )(
            __RPC__in IShellUIHelper2 * This);
                   HRESULT ( STDMETHODCALLTYPE *SkipRunOnce )(
            __RPC__in IShellUIHelper2 * This);
                   HRESULT ( STDMETHODCALLTYPE *CustomizeSettings )(
            __RPC__in IShellUIHelper2 * This,
                       VARIANT_BOOL fSQM,
                       VARIANT_BOOL fPhishing,
                       __RPC__in BSTR bstrLocale);
                   HRESULT ( STDMETHODCALLTYPE *SqmEnabled )(
            __RPC__in IShellUIHelper2 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *PhishingEnabled )(
            __RPC__in IShellUIHelper2 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *BrandImageUri )(
            __RPC__in IShellUIHelper2 * This,
                                __RPC__deref_out_opt BSTR *pbstrUri);
                   HRESULT ( STDMETHODCALLTYPE *SkipTabsWelcome )(
            __RPC__in IShellUIHelper2 * This);
                   HRESULT ( STDMETHODCALLTYPE *DiagnoseConnection )(
            __RPC__in IShellUIHelper2 * This);
                   HRESULT ( STDMETHODCALLTYPE *CustomizeClearType )(
            __RPC__in IShellUIHelper2 * This,
                       VARIANT_BOOL fSet);
                   HRESULT ( STDMETHODCALLTYPE *IsSearchProviderInstalled )(
            __RPC__in IShellUIHelper2 * This,
                       __RPC__in BSTR URL,
                                __RPC__out DWORD *pdwResult);
                   HRESULT ( STDMETHODCALLTYPE *IsSearchMigrated )(
            __RPC__in IShellUIHelper2 * This,
                                __RPC__out VARIANT_BOOL *pfMigrated);
                   HRESULT ( STDMETHODCALLTYPE *DefaultSearchProvider )(
            __RPC__in IShellUIHelper2 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceRequiredSettingsComplete )(
            __RPC__in IShellUIHelper2 * This,
                       VARIANT_BOOL fComplete);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceHasShown )(
            __RPC__in IShellUIHelper2 * This,
                                __RPC__out VARIANT_BOOL *pfShown);
                   HRESULT ( STDMETHODCALLTYPE *SearchGuideUrl )(
            __RPC__in IShellUIHelper2 * This,
                                __RPC__deref_out_opt BSTR *pbstrUrl);
        END_INTERFACE
    } IShellUIHelper2Vtbl;
    interface IShellUIHelper2
    {
        CONST_VTBL struct IShellUIHelper2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ResetFirstBootMode(This) )
    ( (This)->lpVtbl -> ResetSafeMode(This) )
    ( (This)->lpVtbl -> RefreshOfflineDesktop(This) )
    ( (This)->lpVtbl -> AddFavorite(This,URL,Title) )
    ( (This)->lpVtbl -> AddChannel(This,URL) )
    ( (This)->lpVtbl -> AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) )
    ( (This)->lpVtbl -> IsSubscribed(This,URL,pBool) )
    ( (This)->lpVtbl -> NavigateAndFind(This,URL,strQuery,varTargetFrame) )
    ( (This)->lpVtbl -> ImportExportFavorites(This,fImport,strImpExpPath) )
    ( (This)->lpVtbl -> AutoCompleteSaveForm(This,Form) )
    ( (This)->lpVtbl -> AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) )
    ( (This)->lpVtbl -> AutoCompleteAttach(This,Reserved) )
    ( (This)->lpVtbl -> ShowBrowserUI(This,bstrName,pvarIn,pvarOut) )
    ( (This)->lpVtbl -> AddSearchProvider(This,URL) )
    ( (This)->lpVtbl -> RunOnceShown(This) )
    ( (This)->lpVtbl -> SkipRunOnce(This) )
    ( (This)->lpVtbl -> CustomizeSettings(This,fSQM,fPhishing,bstrLocale) )
    ( (This)->lpVtbl -> SqmEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> PhishingEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> BrandImageUri(This,pbstrUri) )
    ( (This)->lpVtbl -> SkipTabsWelcome(This) )
    ( (This)->lpVtbl -> DiagnoseConnection(This) )
    ( (This)->lpVtbl -> CustomizeClearType(This,fSet) )
    ( (This)->lpVtbl -> IsSearchProviderInstalled(This,URL,pdwResult) )
    ( (This)->lpVtbl -> IsSearchMigrated(This,pfMigrated) )
    ( (This)->lpVtbl -> DefaultSearchProvider(This,pbstrName) )
    ( (This)->lpVtbl -> RunOnceRequiredSettingsComplete(This,fComplete) )
    ( (This)->lpVtbl -> RunOnceHasShown(This,pfShown) )
    ( (This)->lpVtbl -> SearchGuideUrl(This,pbstrUrl) )
EXTERN_C const IID IID_IShellUIHelper3;
    typedef struct IShellUIHelper3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellUIHelper3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellUIHelper3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellUIHelper3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellUIHelper3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellUIHelper3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellUIHelper3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellUIHelper3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                           HRESULT ( STDMETHODCALLTYPE *ResetFirstBootMode )(
            __RPC__in IShellUIHelper3 * This);
                           HRESULT ( STDMETHODCALLTYPE *ResetSafeMode )(
            __RPC__in IShellUIHelper3 * This);
                           HRESULT ( STDMETHODCALLTYPE *RefreshOfflineDesktop )(
            __RPC__in IShellUIHelper3 * This);
                   HRESULT ( STDMETHODCALLTYPE *AddFavorite )(
            __RPC__in IShellUIHelper3 * This,
                       __RPC__in BSTR URL,
                                         __RPC__in_opt VARIANT *Title);
                   HRESULT ( STDMETHODCALLTYPE *AddChannel )(
            __RPC__in IShellUIHelper3 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *AddDesktopComponent )(
            __RPC__in IShellUIHelper3 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Type,
                                         __RPC__in_opt VARIANT *Left,
                                         __RPC__in_opt VARIANT *Top,
                                         __RPC__in_opt VARIANT *Width,
                                         __RPC__in_opt VARIANT *Height);
                   HRESULT ( STDMETHODCALLTYPE *IsSubscribed )(
            __RPC__in IShellUIHelper3 * This,
                       __RPC__in BSTR URL,
                                __RPC__out VARIANT_BOOL *pBool);
                   HRESULT ( STDMETHODCALLTYPE *NavigateAndFind )(
            __RPC__in IShellUIHelper3 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR strQuery,
                       __RPC__in VARIANT *varTargetFrame);
                   HRESULT ( STDMETHODCALLTYPE *ImportExportFavorites )(
            __RPC__in IShellUIHelper3 * This,
                       VARIANT_BOOL fImport,
                       __RPC__in BSTR strImpExpPath);
                   HRESULT ( STDMETHODCALLTYPE *AutoCompleteSaveForm )(
            __RPC__in IShellUIHelper3 * This,
                                         __RPC__in_opt VARIANT *Form);
                   HRESULT ( STDMETHODCALLTYPE *AutoScan )(
            __RPC__in IShellUIHelper3 * This,
                       __RPC__in BSTR strSearch,
                       __RPC__in BSTR strFailureUrl,
                                         __RPC__in_opt VARIANT *pvarTargetFrame);
                           HRESULT ( STDMETHODCALLTYPE *AutoCompleteAttach )(
            __RPC__in IShellUIHelper3 * This,
                                         __RPC__in_opt VARIANT *Reserved);
                   HRESULT ( STDMETHODCALLTYPE *ShowBrowserUI )(
            __RPC__in IShellUIHelper3 * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in VARIANT *pvarIn,
                                __RPC__out VARIANT *pvarOut);
                   HRESULT ( STDMETHODCALLTYPE *AddSearchProvider )(
            __RPC__in IShellUIHelper3 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceShown )(
            __RPC__in IShellUIHelper3 * This);
                   HRESULT ( STDMETHODCALLTYPE *SkipRunOnce )(
            __RPC__in IShellUIHelper3 * This);
                   HRESULT ( STDMETHODCALLTYPE *CustomizeSettings )(
            __RPC__in IShellUIHelper3 * This,
                       VARIANT_BOOL fSQM,
                       VARIANT_BOOL fPhishing,
                       __RPC__in BSTR bstrLocale);
                   HRESULT ( STDMETHODCALLTYPE *SqmEnabled )(
            __RPC__in IShellUIHelper3 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *PhishingEnabled )(
            __RPC__in IShellUIHelper3 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *BrandImageUri )(
            __RPC__in IShellUIHelper3 * This,
                                __RPC__deref_out_opt BSTR *pbstrUri);
                   HRESULT ( STDMETHODCALLTYPE *SkipTabsWelcome )(
            __RPC__in IShellUIHelper3 * This);
                   HRESULT ( STDMETHODCALLTYPE *DiagnoseConnection )(
            __RPC__in IShellUIHelper3 * This);
                   HRESULT ( STDMETHODCALLTYPE *CustomizeClearType )(
            __RPC__in IShellUIHelper3 * This,
                       VARIANT_BOOL fSet);
                   HRESULT ( STDMETHODCALLTYPE *IsSearchProviderInstalled )(
            __RPC__in IShellUIHelper3 * This,
                       __RPC__in BSTR URL,
                                __RPC__out DWORD *pdwResult);
                   HRESULT ( STDMETHODCALLTYPE *IsSearchMigrated )(
            __RPC__in IShellUIHelper3 * This,
                                __RPC__out VARIANT_BOOL *pfMigrated);
                   HRESULT ( STDMETHODCALLTYPE *DefaultSearchProvider )(
            __RPC__in IShellUIHelper3 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceRequiredSettingsComplete )(
            __RPC__in IShellUIHelper3 * This,
                       VARIANT_BOOL fComplete);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceHasShown )(
            __RPC__in IShellUIHelper3 * This,
                                __RPC__out VARIANT_BOOL *pfShown);
                   HRESULT ( STDMETHODCALLTYPE *SearchGuideUrl )(
            __RPC__in IShellUIHelper3 * This,
                                __RPC__deref_out_opt BSTR *pbstrUrl);
                   HRESULT ( STDMETHODCALLTYPE *AddService )(
            __RPC__in IShellUIHelper3 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *IsServiceInstalled )(
            __RPC__in IShellUIHelper3 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Verb,
                                __RPC__out DWORD *pdwResult);
                   HRESULT ( STDMETHODCALLTYPE *InPrivateFilteringEnabled )(
            __RPC__in IShellUIHelper3 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *AddToFavoritesBar )(
            __RPC__in IShellUIHelper3 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Title,
                                 __RPC__in VARIANT *Type);
                   HRESULT ( STDMETHODCALLTYPE *BuildNewTabPage )(
            __RPC__in IShellUIHelper3 * This);
                   HRESULT ( STDMETHODCALLTYPE *SetRecentlyClosedVisible )(
            __RPC__in IShellUIHelper3 * This,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *SetActivitiesVisible )(
            __RPC__in IShellUIHelper3 * This,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *ContentDiscoveryReset )(
            __RPC__in IShellUIHelper3 * This);
                   HRESULT ( STDMETHODCALLTYPE *IsSuggestedSitesEnabled )(
            __RPC__in IShellUIHelper3 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *EnableSuggestedSites )(
            __RPC__in IShellUIHelper3 * This,
                       VARIANT_BOOL fEnable);
                   HRESULT ( STDMETHODCALLTYPE *NavigateToSuggestedSites )(
            __RPC__in IShellUIHelper3 * This,
                       __RPC__in BSTR bstrRelativeUrl);
                   HRESULT ( STDMETHODCALLTYPE *ShowTabsHelp )(
            __RPC__in IShellUIHelper3 * This);
                   HRESULT ( STDMETHODCALLTYPE *ShowInPrivateHelp )(
            __RPC__in IShellUIHelper3 * This);
        END_INTERFACE
    } IShellUIHelper3Vtbl;
    interface IShellUIHelper3
    {
        CONST_VTBL struct IShellUIHelper3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ResetFirstBootMode(This) )
    ( (This)->lpVtbl -> ResetSafeMode(This) )
    ( (This)->lpVtbl -> RefreshOfflineDesktop(This) )
    ( (This)->lpVtbl -> AddFavorite(This,URL,Title) )
    ( (This)->lpVtbl -> AddChannel(This,URL) )
    ( (This)->lpVtbl -> AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) )
    ( (This)->lpVtbl -> IsSubscribed(This,URL,pBool) )
    ( (This)->lpVtbl -> NavigateAndFind(This,URL,strQuery,varTargetFrame) )
    ( (This)->lpVtbl -> ImportExportFavorites(This,fImport,strImpExpPath) )
    ( (This)->lpVtbl -> AutoCompleteSaveForm(This,Form) )
    ( (This)->lpVtbl -> AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) )
    ( (This)->lpVtbl -> AutoCompleteAttach(This,Reserved) )
    ( (This)->lpVtbl -> ShowBrowserUI(This,bstrName,pvarIn,pvarOut) )
    ( (This)->lpVtbl -> AddSearchProvider(This,URL) )
    ( (This)->lpVtbl -> RunOnceShown(This) )
    ( (This)->lpVtbl -> SkipRunOnce(This) )
    ( (This)->lpVtbl -> CustomizeSettings(This,fSQM,fPhishing,bstrLocale) )
    ( (This)->lpVtbl -> SqmEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> PhishingEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> BrandImageUri(This,pbstrUri) )
    ( (This)->lpVtbl -> SkipTabsWelcome(This) )
    ( (This)->lpVtbl -> DiagnoseConnection(This) )
    ( (This)->lpVtbl -> CustomizeClearType(This,fSet) )
    ( (This)->lpVtbl -> IsSearchProviderInstalled(This,URL,pdwResult) )
    ( (This)->lpVtbl -> IsSearchMigrated(This,pfMigrated) )
    ( (This)->lpVtbl -> DefaultSearchProvider(This,pbstrName) )
    ( (This)->lpVtbl -> RunOnceRequiredSettingsComplete(This,fComplete) )
    ( (This)->lpVtbl -> RunOnceHasShown(This,pfShown) )
    ( (This)->lpVtbl -> SearchGuideUrl(This,pbstrUrl) )
    ( (This)->lpVtbl -> AddService(This,URL) )
    ( (This)->lpVtbl -> IsServiceInstalled(This,URL,Verb,pdwResult) )
    ( (This)->lpVtbl -> InPrivateFilteringEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> AddToFavoritesBar(This,URL,Title,Type) )
    ( (This)->lpVtbl -> BuildNewTabPage(This) )
    ( (This)->lpVtbl -> SetRecentlyClosedVisible(This,fVisible) )
    ( (This)->lpVtbl -> SetActivitiesVisible(This,fVisible) )
    ( (This)->lpVtbl -> ContentDiscoveryReset(This) )
    ( (This)->lpVtbl -> IsSuggestedSitesEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> EnableSuggestedSites(This,fEnable) )
    ( (This)->lpVtbl -> NavigateToSuggestedSites(This,bstrRelativeUrl) )
    ( (This)->lpVtbl -> ShowTabsHelp(This) )
    ( (This)->lpVtbl -> ShowInPrivateHelp(This) )
EXTERN_C const IID IID_IShellUIHelper4;
    typedef struct IShellUIHelper4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellUIHelper4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellUIHelper4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellUIHelper4 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellUIHelper4 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellUIHelper4 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                           HRESULT ( STDMETHODCALLTYPE *ResetFirstBootMode )(
            __RPC__in IShellUIHelper4 * This);
                           HRESULT ( STDMETHODCALLTYPE *ResetSafeMode )(
            __RPC__in IShellUIHelper4 * This);
                           HRESULT ( STDMETHODCALLTYPE *RefreshOfflineDesktop )(
            __RPC__in IShellUIHelper4 * This);
                   HRESULT ( STDMETHODCALLTYPE *AddFavorite )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in BSTR URL,
                                         __RPC__in_opt VARIANT *Title);
                   HRESULT ( STDMETHODCALLTYPE *AddChannel )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *AddDesktopComponent )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Type,
                                         __RPC__in_opt VARIANT *Left,
                                         __RPC__in_opt VARIANT *Top,
                                         __RPC__in_opt VARIANT *Width,
                                         __RPC__in_opt VARIANT *Height);
                   HRESULT ( STDMETHODCALLTYPE *IsSubscribed )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in BSTR URL,
                                __RPC__out VARIANT_BOOL *pBool);
                   HRESULT ( STDMETHODCALLTYPE *NavigateAndFind )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR strQuery,
                       __RPC__in VARIANT *varTargetFrame);
                   HRESULT ( STDMETHODCALLTYPE *ImportExportFavorites )(
            __RPC__in IShellUIHelper4 * This,
                       VARIANT_BOOL fImport,
                       __RPC__in BSTR strImpExpPath);
                   HRESULT ( STDMETHODCALLTYPE *AutoCompleteSaveForm )(
            __RPC__in IShellUIHelper4 * This,
                                         __RPC__in_opt VARIANT *Form);
                   HRESULT ( STDMETHODCALLTYPE *AutoScan )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in BSTR strSearch,
                       __RPC__in BSTR strFailureUrl,
                                         __RPC__in_opt VARIANT *pvarTargetFrame);
                           HRESULT ( STDMETHODCALLTYPE *AutoCompleteAttach )(
            __RPC__in IShellUIHelper4 * This,
                                         __RPC__in_opt VARIANT *Reserved);
                   HRESULT ( STDMETHODCALLTYPE *ShowBrowserUI )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in VARIANT *pvarIn,
                                __RPC__out VARIANT *pvarOut);
                   HRESULT ( STDMETHODCALLTYPE *AddSearchProvider )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceShown )(
            __RPC__in IShellUIHelper4 * This);
                   HRESULT ( STDMETHODCALLTYPE *SkipRunOnce )(
            __RPC__in IShellUIHelper4 * This);
                   HRESULT ( STDMETHODCALLTYPE *CustomizeSettings )(
            __RPC__in IShellUIHelper4 * This,
                       VARIANT_BOOL fSQM,
                       VARIANT_BOOL fPhishing,
                       __RPC__in BSTR bstrLocale);
                   HRESULT ( STDMETHODCALLTYPE *SqmEnabled )(
            __RPC__in IShellUIHelper4 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *PhishingEnabled )(
            __RPC__in IShellUIHelper4 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *BrandImageUri )(
            __RPC__in IShellUIHelper4 * This,
                                __RPC__deref_out_opt BSTR *pbstrUri);
                   HRESULT ( STDMETHODCALLTYPE *SkipTabsWelcome )(
            __RPC__in IShellUIHelper4 * This);
                   HRESULT ( STDMETHODCALLTYPE *DiagnoseConnection )(
            __RPC__in IShellUIHelper4 * This);
                   HRESULT ( STDMETHODCALLTYPE *CustomizeClearType )(
            __RPC__in IShellUIHelper4 * This,
                       VARIANT_BOOL fSet);
                   HRESULT ( STDMETHODCALLTYPE *IsSearchProviderInstalled )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in BSTR URL,
                                __RPC__out DWORD *pdwResult);
                   HRESULT ( STDMETHODCALLTYPE *IsSearchMigrated )(
            __RPC__in IShellUIHelper4 * This,
                                __RPC__out VARIANT_BOOL *pfMigrated);
                   HRESULT ( STDMETHODCALLTYPE *DefaultSearchProvider )(
            __RPC__in IShellUIHelper4 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceRequiredSettingsComplete )(
            __RPC__in IShellUIHelper4 * This,
                       VARIANT_BOOL fComplete);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceHasShown )(
            __RPC__in IShellUIHelper4 * This,
                                __RPC__out VARIANT_BOOL *pfShown);
                   HRESULT ( STDMETHODCALLTYPE *SearchGuideUrl )(
            __RPC__in IShellUIHelper4 * This,
                                __RPC__deref_out_opt BSTR *pbstrUrl);
                   HRESULT ( STDMETHODCALLTYPE *AddService )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *IsServiceInstalled )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Verb,
                                __RPC__out DWORD *pdwResult);
                   HRESULT ( STDMETHODCALLTYPE *InPrivateFilteringEnabled )(
            __RPC__in IShellUIHelper4 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *AddToFavoritesBar )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Title,
                                 __RPC__in VARIANT *Type);
                   HRESULT ( STDMETHODCALLTYPE *BuildNewTabPage )(
            __RPC__in IShellUIHelper4 * This);
                   HRESULT ( STDMETHODCALLTYPE *SetRecentlyClosedVisible )(
            __RPC__in IShellUIHelper4 * This,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *SetActivitiesVisible )(
            __RPC__in IShellUIHelper4 * This,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *ContentDiscoveryReset )(
            __RPC__in IShellUIHelper4 * This);
                   HRESULT ( STDMETHODCALLTYPE *IsSuggestedSitesEnabled )(
            __RPC__in IShellUIHelper4 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *EnableSuggestedSites )(
            __RPC__in IShellUIHelper4 * This,
                       VARIANT_BOOL fEnable);
                   HRESULT ( STDMETHODCALLTYPE *NavigateToSuggestedSites )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in BSTR bstrRelativeUrl);
                   HRESULT ( STDMETHODCALLTYPE *ShowTabsHelp )(
            __RPC__in IShellUIHelper4 * This);
                   HRESULT ( STDMETHODCALLTYPE *ShowInPrivateHelp )(
            __RPC__in IShellUIHelper4 * This);
                   HRESULT ( STDMETHODCALLTYPE *msIsSiteMode )(
            __RPC__in IShellUIHelper4 * This,
                                __RPC__out VARIANT_BOOL *pfSiteMode);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeShowThumbBar )(
            __RPC__in IShellUIHelper4 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeAddThumbBarButton )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in BSTR bstrIconURL,
                       __RPC__in BSTR bstrTooltip,
                                __RPC__out VARIANT *pvarButtonID);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeUpdateThumbBarButton )(
            __RPC__in IShellUIHelper4 * This,
                       VARIANT ButtonID,
                       VARIANT_BOOL fEnabled,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeSetIconOverlay )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in BSTR IconUrl,
                                 __RPC__in VARIANT *pvarDescription);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeClearIconOverlay )(
            __RPC__in IShellUIHelper4 * This);
                   HRESULT ( STDMETHODCALLTYPE *msAddSiteMode )(
            __RPC__in IShellUIHelper4 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeCreateJumpList )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in BSTR bstrHeader);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeAddJumpListItem )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in BSTR bstrActionUri,
                       __RPC__in BSTR bstrIconUri,
                                 __RPC__in VARIANT *pvarWindowType);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeClearJumpList )(
            __RPC__in IShellUIHelper4 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeShowJumpList )(
            __RPC__in IShellUIHelper4 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeAddButtonStyle )(
            __RPC__in IShellUIHelper4 * This,
                       VARIANT uiButtonID,
                       __RPC__in BSTR bstrIconUrl,
                       __RPC__in BSTR bstrTooltip,
                                __RPC__out VARIANT *pvarStyleID);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeShowButtonStyle )(
            __RPC__in IShellUIHelper4 * This,
                       VARIANT uiButtonID,
                       VARIANT uiStyleID);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeActivate )(
            __RPC__in IShellUIHelper4 * This);
                   HRESULT ( STDMETHODCALLTYPE *msIsSiteModeFirstRun )(
            __RPC__in IShellUIHelper4 * This,
                       VARIANT_BOOL fPreserveState,
                                __RPC__out VARIANT *puiFirstRun);
                   HRESULT ( STDMETHODCALLTYPE *msAddTrackingProtectionList )(
            __RPC__in IShellUIHelper4 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR bstrFilterName);
                   HRESULT ( STDMETHODCALLTYPE *msTrackingProtectionEnabled )(
            __RPC__in IShellUIHelper4 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *msActiveXFilteringEnabled )(
            __RPC__in IShellUIHelper4 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
        END_INTERFACE
    } IShellUIHelper4Vtbl;
    interface IShellUIHelper4
    {
        CONST_VTBL struct IShellUIHelper4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ResetFirstBootMode(This) )
    ( (This)->lpVtbl -> ResetSafeMode(This) )
    ( (This)->lpVtbl -> RefreshOfflineDesktop(This) )
    ( (This)->lpVtbl -> AddFavorite(This,URL,Title) )
    ( (This)->lpVtbl -> AddChannel(This,URL) )
    ( (This)->lpVtbl -> AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) )
    ( (This)->lpVtbl -> IsSubscribed(This,URL,pBool) )
    ( (This)->lpVtbl -> NavigateAndFind(This,URL,strQuery,varTargetFrame) )
    ( (This)->lpVtbl -> ImportExportFavorites(This,fImport,strImpExpPath) )
    ( (This)->lpVtbl -> AutoCompleteSaveForm(This,Form) )
    ( (This)->lpVtbl -> AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) )
    ( (This)->lpVtbl -> AutoCompleteAttach(This,Reserved) )
    ( (This)->lpVtbl -> ShowBrowserUI(This,bstrName,pvarIn,pvarOut) )
    ( (This)->lpVtbl -> AddSearchProvider(This,URL) )
    ( (This)->lpVtbl -> RunOnceShown(This) )
    ( (This)->lpVtbl -> SkipRunOnce(This) )
    ( (This)->lpVtbl -> CustomizeSettings(This,fSQM,fPhishing,bstrLocale) )
    ( (This)->lpVtbl -> SqmEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> PhishingEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> BrandImageUri(This,pbstrUri) )
    ( (This)->lpVtbl -> SkipTabsWelcome(This) )
    ( (This)->lpVtbl -> DiagnoseConnection(This) )
    ( (This)->lpVtbl -> CustomizeClearType(This,fSet) )
    ( (This)->lpVtbl -> IsSearchProviderInstalled(This,URL,pdwResult) )
    ( (This)->lpVtbl -> IsSearchMigrated(This,pfMigrated) )
    ( (This)->lpVtbl -> DefaultSearchProvider(This,pbstrName) )
    ( (This)->lpVtbl -> RunOnceRequiredSettingsComplete(This,fComplete) )
    ( (This)->lpVtbl -> RunOnceHasShown(This,pfShown) )
    ( (This)->lpVtbl -> SearchGuideUrl(This,pbstrUrl) )
    ( (This)->lpVtbl -> AddService(This,URL) )
    ( (This)->lpVtbl -> IsServiceInstalled(This,URL,Verb,pdwResult) )
    ( (This)->lpVtbl -> InPrivateFilteringEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> AddToFavoritesBar(This,URL,Title,Type) )
    ( (This)->lpVtbl -> BuildNewTabPage(This) )
    ( (This)->lpVtbl -> SetRecentlyClosedVisible(This,fVisible) )
    ( (This)->lpVtbl -> SetActivitiesVisible(This,fVisible) )
    ( (This)->lpVtbl -> ContentDiscoveryReset(This) )
    ( (This)->lpVtbl -> IsSuggestedSitesEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> EnableSuggestedSites(This,fEnable) )
    ( (This)->lpVtbl -> NavigateToSuggestedSites(This,bstrRelativeUrl) )
    ( (This)->lpVtbl -> ShowTabsHelp(This) )
    ( (This)->lpVtbl -> ShowInPrivateHelp(This) )
    ( (This)->lpVtbl -> msIsSiteMode(This,pfSiteMode) )
    ( (This)->lpVtbl -> msSiteModeShowThumbBar(This) )
    ( (This)->lpVtbl -> msSiteModeAddThumbBarButton(This,bstrIconURL,bstrTooltip,pvarButtonID) )
    ( (This)->lpVtbl -> msSiteModeUpdateThumbBarButton(This,ButtonID,fEnabled,fVisible) )
    ( (This)->lpVtbl -> msSiteModeSetIconOverlay(This,IconUrl,pvarDescription) )
    ( (This)->lpVtbl -> msSiteModeClearIconOverlay(This) )
    ( (This)->lpVtbl -> msAddSiteMode(This) )
    ( (This)->lpVtbl -> msSiteModeCreateJumpList(This,bstrHeader) )
    ( (This)->lpVtbl -> msSiteModeAddJumpListItem(This,bstrName,bstrActionUri,bstrIconUri,pvarWindowType) )
    ( (This)->lpVtbl -> msSiteModeClearJumpList(This) )
    ( (This)->lpVtbl -> msSiteModeShowJumpList(This) )
    ( (This)->lpVtbl -> msSiteModeAddButtonStyle(This,uiButtonID,bstrIconUrl,bstrTooltip,pvarStyleID) )
    ( (This)->lpVtbl -> msSiteModeShowButtonStyle(This,uiButtonID,uiStyleID) )
    ( (This)->lpVtbl -> msSiteModeActivate(This) )
    ( (This)->lpVtbl -> msIsSiteModeFirstRun(This,fPreserveState,puiFirstRun) )
    ( (This)->lpVtbl -> msAddTrackingProtectionList(This,URL,bstrFilterName) )
    ( (This)->lpVtbl -> msTrackingProtectionEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> msActiveXFilteringEnabled(This,pfEnabled) )
EXTERN_C const IID IID_IShellUIHelper5;
    typedef struct IShellUIHelper5Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellUIHelper5 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellUIHelper5 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellUIHelper5 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellUIHelper5 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellUIHelper5 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                           HRESULT ( STDMETHODCALLTYPE *ResetFirstBootMode )(
            __RPC__in IShellUIHelper5 * This);
                           HRESULT ( STDMETHODCALLTYPE *ResetSafeMode )(
            __RPC__in IShellUIHelper5 * This);
                           HRESULT ( STDMETHODCALLTYPE *RefreshOfflineDesktop )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *AddFavorite )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR URL,
                                         __RPC__in_opt VARIANT *Title);
                   HRESULT ( STDMETHODCALLTYPE *AddChannel )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *AddDesktopComponent )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Type,
                                         __RPC__in_opt VARIANT *Left,
                                         __RPC__in_opt VARIANT *Top,
                                         __RPC__in_opt VARIANT *Width,
                                         __RPC__in_opt VARIANT *Height);
                   HRESULT ( STDMETHODCALLTYPE *IsSubscribed )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR URL,
                                __RPC__out VARIANT_BOOL *pBool);
                   HRESULT ( STDMETHODCALLTYPE *NavigateAndFind )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR strQuery,
                       __RPC__in VARIANT *varTargetFrame);
                   HRESULT ( STDMETHODCALLTYPE *ImportExportFavorites )(
            __RPC__in IShellUIHelper5 * This,
                       VARIANT_BOOL fImport,
                       __RPC__in BSTR strImpExpPath);
                   HRESULT ( STDMETHODCALLTYPE *AutoCompleteSaveForm )(
            __RPC__in IShellUIHelper5 * This,
                                         __RPC__in_opt VARIANT *Form);
                   HRESULT ( STDMETHODCALLTYPE *AutoScan )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR strSearch,
                       __RPC__in BSTR strFailureUrl,
                                         __RPC__in_opt VARIANT *pvarTargetFrame);
                           HRESULT ( STDMETHODCALLTYPE *AutoCompleteAttach )(
            __RPC__in IShellUIHelper5 * This,
                                         __RPC__in_opt VARIANT *Reserved);
                   HRESULT ( STDMETHODCALLTYPE *ShowBrowserUI )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in VARIANT *pvarIn,
                                __RPC__out VARIANT *pvarOut);
                   HRESULT ( STDMETHODCALLTYPE *AddSearchProvider )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceShown )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *SkipRunOnce )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *CustomizeSettings )(
            __RPC__in IShellUIHelper5 * This,
                       VARIANT_BOOL fSQM,
                       VARIANT_BOOL fPhishing,
                       __RPC__in BSTR bstrLocale);
                   HRESULT ( STDMETHODCALLTYPE *SqmEnabled )(
            __RPC__in IShellUIHelper5 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *PhishingEnabled )(
            __RPC__in IShellUIHelper5 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *BrandImageUri )(
            __RPC__in IShellUIHelper5 * This,
                                __RPC__deref_out_opt BSTR *pbstrUri);
                   HRESULT ( STDMETHODCALLTYPE *SkipTabsWelcome )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *DiagnoseConnection )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *CustomizeClearType )(
            __RPC__in IShellUIHelper5 * This,
                       VARIANT_BOOL fSet);
                   HRESULT ( STDMETHODCALLTYPE *IsSearchProviderInstalled )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR URL,
                                __RPC__out DWORD *pdwResult);
                   HRESULT ( STDMETHODCALLTYPE *IsSearchMigrated )(
            __RPC__in IShellUIHelper5 * This,
                                __RPC__out VARIANT_BOOL *pfMigrated);
                   HRESULT ( STDMETHODCALLTYPE *DefaultSearchProvider )(
            __RPC__in IShellUIHelper5 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceRequiredSettingsComplete )(
            __RPC__in IShellUIHelper5 * This,
                       VARIANT_BOOL fComplete);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceHasShown )(
            __RPC__in IShellUIHelper5 * This,
                                __RPC__out VARIANT_BOOL *pfShown);
                   HRESULT ( STDMETHODCALLTYPE *SearchGuideUrl )(
            __RPC__in IShellUIHelper5 * This,
                                __RPC__deref_out_opt BSTR *pbstrUrl);
                   HRESULT ( STDMETHODCALLTYPE *AddService )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *IsServiceInstalled )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Verb,
                                __RPC__out DWORD *pdwResult);
                   HRESULT ( STDMETHODCALLTYPE *InPrivateFilteringEnabled )(
            __RPC__in IShellUIHelper5 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *AddToFavoritesBar )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Title,
                                 __RPC__in VARIANT *Type);
                   HRESULT ( STDMETHODCALLTYPE *BuildNewTabPage )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *SetRecentlyClosedVisible )(
            __RPC__in IShellUIHelper5 * This,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *SetActivitiesVisible )(
            __RPC__in IShellUIHelper5 * This,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *ContentDiscoveryReset )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *IsSuggestedSitesEnabled )(
            __RPC__in IShellUIHelper5 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *EnableSuggestedSites )(
            __RPC__in IShellUIHelper5 * This,
                       VARIANT_BOOL fEnable);
                   HRESULT ( STDMETHODCALLTYPE *NavigateToSuggestedSites )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR bstrRelativeUrl);
                   HRESULT ( STDMETHODCALLTYPE *ShowTabsHelp )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *ShowInPrivateHelp )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *msIsSiteMode )(
            __RPC__in IShellUIHelper5 * This,
                                __RPC__out VARIANT_BOOL *pfSiteMode);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeShowThumbBar )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeAddThumbBarButton )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR bstrIconURL,
                       __RPC__in BSTR bstrTooltip,
                                __RPC__out VARIANT *pvarButtonID);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeUpdateThumbBarButton )(
            __RPC__in IShellUIHelper5 * This,
                       VARIANT ButtonID,
                       VARIANT_BOOL fEnabled,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeSetIconOverlay )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR IconUrl,
                                 __RPC__in VARIANT *pvarDescription);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeClearIconOverlay )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *msAddSiteMode )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeCreateJumpList )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR bstrHeader);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeAddJumpListItem )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in BSTR bstrActionUri,
                       __RPC__in BSTR bstrIconUri,
                                 __RPC__in VARIANT *pvarWindowType);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeClearJumpList )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeShowJumpList )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeAddButtonStyle )(
            __RPC__in IShellUIHelper5 * This,
                       VARIANT uiButtonID,
                       __RPC__in BSTR bstrIconUrl,
                       __RPC__in BSTR bstrTooltip,
                                __RPC__out VARIANT *pvarStyleID);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeShowButtonStyle )(
            __RPC__in IShellUIHelper5 * This,
                       VARIANT uiButtonID,
                       VARIANT uiStyleID);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeActivate )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *msIsSiteModeFirstRun )(
            __RPC__in IShellUIHelper5 * This,
                       VARIANT_BOOL fPreserveState,
                                __RPC__out VARIANT *puiFirstRun);
                   HRESULT ( STDMETHODCALLTYPE *msAddTrackingProtectionList )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR bstrFilterName);
                   HRESULT ( STDMETHODCALLTYPE *msTrackingProtectionEnabled )(
            __RPC__in IShellUIHelper5 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *msActiveXFilteringEnabled )(
            __RPC__in IShellUIHelper5 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *msProvisionNetworks )(
            __RPC__in IShellUIHelper5 * This,
                       __RPC__in BSTR bstrProvisioningXml,
                                __RPC__out VARIANT *puiResult);
                   HRESULT ( STDMETHODCALLTYPE *msReportSafeUrl )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeRefreshBadge )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeClearBadge )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *msDiagnoseConnectionUILess )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *msLaunchNetworkClientHelp )(
            __RPC__in IShellUIHelper5 * This);
                   HRESULT ( STDMETHODCALLTYPE *msChangeDefaultBrowser )(
            __RPC__in IShellUIHelper5 * This,
                       VARIANT_BOOL fChange);
        END_INTERFACE
    } IShellUIHelper5Vtbl;
    interface IShellUIHelper5
    {
        CONST_VTBL struct IShellUIHelper5Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ResetFirstBootMode(This) )
    ( (This)->lpVtbl -> ResetSafeMode(This) )
    ( (This)->lpVtbl -> RefreshOfflineDesktop(This) )
    ( (This)->lpVtbl -> AddFavorite(This,URL,Title) )
    ( (This)->lpVtbl -> AddChannel(This,URL) )
    ( (This)->lpVtbl -> AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) )
    ( (This)->lpVtbl -> IsSubscribed(This,URL,pBool) )
    ( (This)->lpVtbl -> NavigateAndFind(This,URL,strQuery,varTargetFrame) )
    ( (This)->lpVtbl -> ImportExportFavorites(This,fImport,strImpExpPath) )
    ( (This)->lpVtbl -> AutoCompleteSaveForm(This,Form) )
    ( (This)->lpVtbl -> AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) )
    ( (This)->lpVtbl -> AutoCompleteAttach(This,Reserved) )
    ( (This)->lpVtbl -> ShowBrowserUI(This,bstrName,pvarIn,pvarOut) )
    ( (This)->lpVtbl -> AddSearchProvider(This,URL) )
    ( (This)->lpVtbl -> RunOnceShown(This) )
    ( (This)->lpVtbl -> SkipRunOnce(This) )
    ( (This)->lpVtbl -> CustomizeSettings(This,fSQM,fPhishing,bstrLocale) )
    ( (This)->lpVtbl -> SqmEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> PhishingEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> BrandImageUri(This,pbstrUri) )
    ( (This)->lpVtbl -> SkipTabsWelcome(This) )
    ( (This)->lpVtbl -> DiagnoseConnection(This) )
    ( (This)->lpVtbl -> CustomizeClearType(This,fSet) )
    ( (This)->lpVtbl -> IsSearchProviderInstalled(This,URL,pdwResult) )
    ( (This)->lpVtbl -> IsSearchMigrated(This,pfMigrated) )
    ( (This)->lpVtbl -> DefaultSearchProvider(This,pbstrName) )
    ( (This)->lpVtbl -> RunOnceRequiredSettingsComplete(This,fComplete) )
    ( (This)->lpVtbl -> RunOnceHasShown(This,pfShown) )
    ( (This)->lpVtbl -> SearchGuideUrl(This,pbstrUrl) )
    ( (This)->lpVtbl -> AddService(This,URL) )
    ( (This)->lpVtbl -> IsServiceInstalled(This,URL,Verb,pdwResult) )
    ( (This)->lpVtbl -> InPrivateFilteringEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> AddToFavoritesBar(This,URL,Title,Type) )
    ( (This)->lpVtbl -> BuildNewTabPage(This) )
    ( (This)->lpVtbl -> SetRecentlyClosedVisible(This,fVisible) )
    ( (This)->lpVtbl -> SetActivitiesVisible(This,fVisible) )
    ( (This)->lpVtbl -> ContentDiscoveryReset(This) )
    ( (This)->lpVtbl -> IsSuggestedSitesEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> EnableSuggestedSites(This,fEnable) )
    ( (This)->lpVtbl -> NavigateToSuggestedSites(This,bstrRelativeUrl) )
    ( (This)->lpVtbl -> ShowTabsHelp(This) )
    ( (This)->lpVtbl -> ShowInPrivateHelp(This) )
    ( (This)->lpVtbl -> msIsSiteMode(This,pfSiteMode) )
    ( (This)->lpVtbl -> msSiteModeShowThumbBar(This) )
    ( (This)->lpVtbl -> msSiteModeAddThumbBarButton(This,bstrIconURL,bstrTooltip,pvarButtonID) )
    ( (This)->lpVtbl -> msSiteModeUpdateThumbBarButton(This,ButtonID,fEnabled,fVisible) )
    ( (This)->lpVtbl -> msSiteModeSetIconOverlay(This,IconUrl,pvarDescription) )
    ( (This)->lpVtbl -> msSiteModeClearIconOverlay(This) )
    ( (This)->lpVtbl -> msAddSiteMode(This) )
    ( (This)->lpVtbl -> msSiteModeCreateJumpList(This,bstrHeader) )
    ( (This)->lpVtbl -> msSiteModeAddJumpListItem(This,bstrName,bstrActionUri,bstrIconUri,pvarWindowType) )
    ( (This)->lpVtbl -> msSiteModeClearJumpList(This) )
    ( (This)->lpVtbl -> msSiteModeShowJumpList(This) )
    ( (This)->lpVtbl -> msSiteModeAddButtonStyle(This,uiButtonID,bstrIconUrl,bstrTooltip,pvarStyleID) )
    ( (This)->lpVtbl -> msSiteModeShowButtonStyle(This,uiButtonID,uiStyleID) )
    ( (This)->lpVtbl -> msSiteModeActivate(This) )
    ( (This)->lpVtbl -> msIsSiteModeFirstRun(This,fPreserveState,puiFirstRun) )
    ( (This)->lpVtbl -> msAddTrackingProtectionList(This,URL,bstrFilterName) )
    ( (This)->lpVtbl -> msTrackingProtectionEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> msActiveXFilteringEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> msProvisionNetworks(This,bstrProvisioningXml,puiResult) )
    ( (This)->lpVtbl -> msReportSafeUrl(This) )
    ( (This)->lpVtbl -> msSiteModeRefreshBadge(This) )
    ( (This)->lpVtbl -> msSiteModeClearBadge(This) )
    ( (This)->lpVtbl -> msDiagnoseConnectionUILess(This) )
    ( (This)->lpVtbl -> msLaunchNetworkClientHelp(This) )
    ( (This)->lpVtbl -> msChangeDefaultBrowser(This,fChange) )
EXTERN_C const IID IID_IShellUIHelper6;
    typedef struct IShellUIHelper6Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellUIHelper6 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellUIHelper6 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellUIHelper6 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellUIHelper6 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellUIHelper6 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                           HRESULT ( STDMETHODCALLTYPE *ResetFirstBootMode )(
            __RPC__in IShellUIHelper6 * This);
                           HRESULT ( STDMETHODCALLTYPE *ResetSafeMode )(
            __RPC__in IShellUIHelper6 * This);
                           HRESULT ( STDMETHODCALLTYPE *RefreshOfflineDesktop )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *AddFavorite )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR URL,
                                         __RPC__in_opt VARIANT *Title);
                   HRESULT ( STDMETHODCALLTYPE *AddChannel )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *AddDesktopComponent )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Type,
                                         __RPC__in_opt VARIANT *Left,
                                         __RPC__in_opt VARIANT *Top,
                                         __RPC__in_opt VARIANT *Width,
                                         __RPC__in_opt VARIANT *Height);
                   HRESULT ( STDMETHODCALLTYPE *IsSubscribed )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR URL,
                                __RPC__out VARIANT_BOOL *pBool);
                   HRESULT ( STDMETHODCALLTYPE *NavigateAndFind )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR strQuery,
                       __RPC__in VARIANT *varTargetFrame);
                   HRESULT ( STDMETHODCALLTYPE *ImportExportFavorites )(
            __RPC__in IShellUIHelper6 * This,
                       VARIANT_BOOL fImport,
                       __RPC__in BSTR strImpExpPath);
                   HRESULT ( STDMETHODCALLTYPE *AutoCompleteSaveForm )(
            __RPC__in IShellUIHelper6 * This,
                                         __RPC__in_opt VARIANT *Form);
                   HRESULT ( STDMETHODCALLTYPE *AutoScan )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR strSearch,
                       __RPC__in BSTR strFailureUrl,
                                         __RPC__in_opt VARIANT *pvarTargetFrame);
                           HRESULT ( STDMETHODCALLTYPE *AutoCompleteAttach )(
            __RPC__in IShellUIHelper6 * This,
                                         __RPC__in_opt VARIANT *Reserved);
                   HRESULT ( STDMETHODCALLTYPE *ShowBrowserUI )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in VARIANT *pvarIn,
                                __RPC__out VARIANT *pvarOut);
                   HRESULT ( STDMETHODCALLTYPE *AddSearchProvider )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceShown )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *SkipRunOnce )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *CustomizeSettings )(
            __RPC__in IShellUIHelper6 * This,
                       VARIANT_BOOL fSQM,
                       VARIANT_BOOL fPhishing,
                       __RPC__in BSTR bstrLocale);
                   HRESULT ( STDMETHODCALLTYPE *SqmEnabled )(
            __RPC__in IShellUIHelper6 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *PhishingEnabled )(
            __RPC__in IShellUIHelper6 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *BrandImageUri )(
            __RPC__in IShellUIHelper6 * This,
                                __RPC__deref_out_opt BSTR *pbstrUri);
                   HRESULT ( STDMETHODCALLTYPE *SkipTabsWelcome )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *DiagnoseConnection )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *CustomizeClearType )(
            __RPC__in IShellUIHelper6 * This,
                       VARIANT_BOOL fSet);
                   HRESULT ( STDMETHODCALLTYPE *IsSearchProviderInstalled )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR URL,
                                __RPC__out DWORD *pdwResult);
                   HRESULT ( STDMETHODCALLTYPE *IsSearchMigrated )(
            __RPC__in IShellUIHelper6 * This,
                                __RPC__out VARIANT_BOOL *pfMigrated);
                   HRESULT ( STDMETHODCALLTYPE *DefaultSearchProvider )(
            __RPC__in IShellUIHelper6 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceRequiredSettingsComplete )(
            __RPC__in IShellUIHelper6 * This,
                       VARIANT_BOOL fComplete);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceHasShown )(
            __RPC__in IShellUIHelper6 * This,
                                __RPC__out VARIANT_BOOL *pfShown);
                   HRESULT ( STDMETHODCALLTYPE *SearchGuideUrl )(
            __RPC__in IShellUIHelper6 * This,
                                __RPC__deref_out_opt BSTR *pbstrUrl);
                   HRESULT ( STDMETHODCALLTYPE *AddService )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *IsServiceInstalled )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Verb,
                                __RPC__out DWORD *pdwResult);
                   HRESULT ( STDMETHODCALLTYPE *InPrivateFilteringEnabled )(
            __RPC__in IShellUIHelper6 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *AddToFavoritesBar )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Title,
                                 __RPC__in VARIANT *Type);
                   HRESULT ( STDMETHODCALLTYPE *BuildNewTabPage )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *SetRecentlyClosedVisible )(
            __RPC__in IShellUIHelper6 * This,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *SetActivitiesVisible )(
            __RPC__in IShellUIHelper6 * This,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *ContentDiscoveryReset )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *IsSuggestedSitesEnabled )(
            __RPC__in IShellUIHelper6 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *EnableSuggestedSites )(
            __RPC__in IShellUIHelper6 * This,
                       VARIANT_BOOL fEnable);
                   HRESULT ( STDMETHODCALLTYPE *NavigateToSuggestedSites )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR bstrRelativeUrl);
                   HRESULT ( STDMETHODCALLTYPE *ShowTabsHelp )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *ShowInPrivateHelp )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *msIsSiteMode )(
            __RPC__in IShellUIHelper6 * This,
                                __RPC__out VARIANT_BOOL *pfSiteMode);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeShowThumbBar )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeAddThumbBarButton )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR bstrIconURL,
                       __RPC__in BSTR bstrTooltip,
                                __RPC__out VARIANT *pvarButtonID);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeUpdateThumbBarButton )(
            __RPC__in IShellUIHelper6 * This,
                       VARIANT ButtonID,
                       VARIANT_BOOL fEnabled,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeSetIconOverlay )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR IconUrl,
                                 __RPC__in VARIANT *pvarDescription);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeClearIconOverlay )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *msAddSiteMode )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeCreateJumpList )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR bstrHeader);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeAddJumpListItem )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in BSTR bstrActionUri,
                       __RPC__in BSTR bstrIconUri,
                                 __RPC__in VARIANT *pvarWindowType);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeClearJumpList )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeShowJumpList )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeAddButtonStyle )(
            __RPC__in IShellUIHelper6 * This,
                       VARIANT uiButtonID,
                       __RPC__in BSTR bstrIconUrl,
                       __RPC__in BSTR bstrTooltip,
                                __RPC__out VARIANT *pvarStyleID);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeShowButtonStyle )(
            __RPC__in IShellUIHelper6 * This,
                       VARIANT uiButtonID,
                       VARIANT uiStyleID);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeActivate )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *msIsSiteModeFirstRun )(
            __RPC__in IShellUIHelper6 * This,
                       VARIANT_BOOL fPreserveState,
                                __RPC__out VARIANT *puiFirstRun);
                   HRESULT ( STDMETHODCALLTYPE *msAddTrackingProtectionList )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR bstrFilterName);
                   HRESULT ( STDMETHODCALLTYPE *msTrackingProtectionEnabled )(
            __RPC__in IShellUIHelper6 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *msActiveXFilteringEnabled )(
            __RPC__in IShellUIHelper6 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *msProvisionNetworks )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR bstrProvisioningXml,
                                __RPC__out VARIANT *puiResult);
                   HRESULT ( STDMETHODCALLTYPE *msReportSafeUrl )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeRefreshBadge )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeClearBadge )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *msDiagnoseConnectionUILess )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *msLaunchNetworkClientHelp )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *msChangeDefaultBrowser )(
            __RPC__in IShellUIHelper6 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msStopPeriodicTileUpdate )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *msStartPeriodicTileUpdate )(
            __RPC__in IShellUIHelper6 * This,
                       VARIANT pollingUris,
                                 VARIANT startTime,
                                 VARIANT uiUpdateRecurrence);
                   HRESULT ( STDMETHODCALLTYPE *msStartPeriodicTileUpdateBatch )(
            __RPC__in IShellUIHelper6 * This,
                       VARIANT pollingUris,
                                 VARIANT startTime,
                                 VARIANT uiUpdateRecurrence);
                   HRESULT ( STDMETHODCALLTYPE *msClearTile )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *msEnableTileNotificationQueue )(
            __RPC__in IShellUIHelper6 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msPinnedSiteState )(
            __RPC__in IShellUIHelper6 * This,
                                __RPC__out VARIANT *pvarSiteState);
                   HRESULT ( STDMETHODCALLTYPE *msEnableTileNotificationQueueForSquare150x150 )(
            __RPC__in IShellUIHelper6 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msEnableTileNotificationQueueForWide310x150 )(
            __RPC__in IShellUIHelper6 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msEnableTileNotificationQueueForSquare310x310 )(
            __RPC__in IShellUIHelper6 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msScheduledTileNotification )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR bstrNotificationXml,
                       __RPC__in BSTR bstrNotificationId,
                       __RPC__in BSTR bstrNotificationTag,
                                 VARIANT startTime,
                                 VARIANT expirationTime);
                   HRESULT ( STDMETHODCALLTYPE *msRemoveScheduledTileNotification )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR bstrNotificationId);
                   HRESULT ( STDMETHODCALLTYPE *msStartPeriodicBadgeUpdate )(
            __RPC__in IShellUIHelper6 * This,
                       __RPC__in BSTR pollingUri,
                                 VARIANT startTime,
                                 VARIANT uiUpdateRecurrence);
                   HRESULT ( STDMETHODCALLTYPE *msStopPeriodicBadgeUpdate )(
            __RPC__in IShellUIHelper6 * This);
                   HRESULT ( STDMETHODCALLTYPE *msLaunchInternetOptions )(
            __RPC__in IShellUIHelper6 * This);
        END_INTERFACE
    } IShellUIHelper6Vtbl;
    interface IShellUIHelper6
    {
        CONST_VTBL struct IShellUIHelper6Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ResetFirstBootMode(This) )
    ( (This)->lpVtbl -> ResetSafeMode(This) )
    ( (This)->lpVtbl -> RefreshOfflineDesktop(This) )
    ( (This)->lpVtbl -> AddFavorite(This,URL,Title) )
    ( (This)->lpVtbl -> AddChannel(This,URL) )
    ( (This)->lpVtbl -> AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) )
    ( (This)->lpVtbl -> IsSubscribed(This,URL,pBool) )
    ( (This)->lpVtbl -> NavigateAndFind(This,URL,strQuery,varTargetFrame) )
    ( (This)->lpVtbl -> ImportExportFavorites(This,fImport,strImpExpPath) )
    ( (This)->lpVtbl -> AutoCompleteSaveForm(This,Form) )
    ( (This)->lpVtbl -> AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) )
    ( (This)->lpVtbl -> AutoCompleteAttach(This,Reserved) )
    ( (This)->lpVtbl -> ShowBrowserUI(This,bstrName,pvarIn,pvarOut) )
    ( (This)->lpVtbl -> AddSearchProvider(This,URL) )
    ( (This)->lpVtbl -> RunOnceShown(This) )
    ( (This)->lpVtbl -> SkipRunOnce(This) )
    ( (This)->lpVtbl -> CustomizeSettings(This,fSQM,fPhishing,bstrLocale) )
    ( (This)->lpVtbl -> SqmEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> PhishingEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> BrandImageUri(This,pbstrUri) )
    ( (This)->lpVtbl -> SkipTabsWelcome(This) )
    ( (This)->lpVtbl -> DiagnoseConnection(This) )
    ( (This)->lpVtbl -> CustomizeClearType(This,fSet) )
    ( (This)->lpVtbl -> IsSearchProviderInstalled(This,URL,pdwResult) )
    ( (This)->lpVtbl -> IsSearchMigrated(This,pfMigrated) )
    ( (This)->lpVtbl -> DefaultSearchProvider(This,pbstrName) )
    ( (This)->lpVtbl -> RunOnceRequiredSettingsComplete(This,fComplete) )
    ( (This)->lpVtbl -> RunOnceHasShown(This,pfShown) )
    ( (This)->lpVtbl -> SearchGuideUrl(This,pbstrUrl) )
    ( (This)->lpVtbl -> AddService(This,URL) )
    ( (This)->lpVtbl -> IsServiceInstalled(This,URL,Verb,pdwResult) )
    ( (This)->lpVtbl -> InPrivateFilteringEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> AddToFavoritesBar(This,URL,Title,Type) )
    ( (This)->lpVtbl -> BuildNewTabPage(This) )
    ( (This)->lpVtbl -> SetRecentlyClosedVisible(This,fVisible) )
    ( (This)->lpVtbl -> SetActivitiesVisible(This,fVisible) )
    ( (This)->lpVtbl -> ContentDiscoveryReset(This) )
    ( (This)->lpVtbl -> IsSuggestedSitesEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> EnableSuggestedSites(This,fEnable) )
    ( (This)->lpVtbl -> NavigateToSuggestedSites(This,bstrRelativeUrl) )
    ( (This)->lpVtbl -> ShowTabsHelp(This) )
    ( (This)->lpVtbl -> ShowInPrivateHelp(This) )
    ( (This)->lpVtbl -> msIsSiteMode(This,pfSiteMode) )
    ( (This)->lpVtbl -> msSiteModeShowThumbBar(This) )
    ( (This)->lpVtbl -> msSiteModeAddThumbBarButton(This,bstrIconURL,bstrTooltip,pvarButtonID) )
    ( (This)->lpVtbl -> msSiteModeUpdateThumbBarButton(This,ButtonID,fEnabled,fVisible) )
    ( (This)->lpVtbl -> msSiteModeSetIconOverlay(This,IconUrl,pvarDescription) )
    ( (This)->lpVtbl -> msSiteModeClearIconOverlay(This) )
    ( (This)->lpVtbl -> msAddSiteMode(This) )
    ( (This)->lpVtbl -> msSiteModeCreateJumpList(This,bstrHeader) )
    ( (This)->lpVtbl -> msSiteModeAddJumpListItem(This,bstrName,bstrActionUri,bstrIconUri,pvarWindowType) )
    ( (This)->lpVtbl -> msSiteModeClearJumpList(This) )
    ( (This)->lpVtbl -> msSiteModeShowJumpList(This) )
    ( (This)->lpVtbl -> msSiteModeAddButtonStyle(This,uiButtonID,bstrIconUrl,bstrTooltip,pvarStyleID) )
    ( (This)->lpVtbl -> msSiteModeShowButtonStyle(This,uiButtonID,uiStyleID) )
    ( (This)->lpVtbl -> msSiteModeActivate(This) )
    ( (This)->lpVtbl -> msIsSiteModeFirstRun(This,fPreserveState,puiFirstRun) )
    ( (This)->lpVtbl -> msAddTrackingProtectionList(This,URL,bstrFilterName) )
    ( (This)->lpVtbl -> msTrackingProtectionEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> msActiveXFilteringEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> msProvisionNetworks(This,bstrProvisioningXml,puiResult) )
    ( (This)->lpVtbl -> msReportSafeUrl(This) )
    ( (This)->lpVtbl -> msSiteModeRefreshBadge(This) )
    ( (This)->lpVtbl -> msSiteModeClearBadge(This) )
    ( (This)->lpVtbl -> msDiagnoseConnectionUILess(This) )
    ( (This)->lpVtbl -> msLaunchNetworkClientHelp(This) )
    ( (This)->lpVtbl -> msChangeDefaultBrowser(This,fChange) )
    ( (This)->lpVtbl -> msStopPeriodicTileUpdate(This) )
    ( (This)->lpVtbl -> msStartPeriodicTileUpdate(This,pollingUris,startTime,uiUpdateRecurrence) )
    ( (This)->lpVtbl -> msStartPeriodicTileUpdateBatch(This,pollingUris,startTime,uiUpdateRecurrence) )
    ( (This)->lpVtbl -> msClearTile(This) )
    ( (This)->lpVtbl -> msEnableTileNotificationQueue(This,fChange) )
    ( (This)->lpVtbl -> msPinnedSiteState(This,pvarSiteState) )
    ( (This)->lpVtbl -> msEnableTileNotificationQueueForSquare150x150(This,fChange) )
    ( (This)->lpVtbl -> msEnableTileNotificationQueueForWide310x150(This,fChange) )
    ( (This)->lpVtbl -> msEnableTileNotificationQueueForSquare310x310(This,fChange) )
    ( (This)->lpVtbl -> msScheduledTileNotification(This,bstrNotificationXml,bstrNotificationId,bstrNotificationTag,startTime,expirationTime) )
    ( (This)->lpVtbl -> msRemoveScheduledTileNotification(This,bstrNotificationId) )
    ( (This)->lpVtbl -> msStartPeriodicBadgeUpdate(This,pollingUri,startTime,uiUpdateRecurrence) )
    ( (This)->lpVtbl -> msStopPeriodicBadgeUpdate(This) )
    ( (This)->lpVtbl -> msLaunchInternetOptions(This) )
EXTERN_C const IID IID_IShellUIHelper7;
    typedef struct IShellUIHelper7Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellUIHelper7 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellUIHelper7 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellUIHelper7 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellUIHelper7 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellUIHelper7 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                           HRESULT ( STDMETHODCALLTYPE *ResetFirstBootMode )(
            __RPC__in IShellUIHelper7 * This);
                           HRESULT ( STDMETHODCALLTYPE *ResetSafeMode )(
            __RPC__in IShellUIHelper7 * This);
                           HRESULT ( STDMETHODCALLTYPE *RefreshOfflineDesktop )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *AddFavorite )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR URL,
                                         __RPC__in_opt VARIANT *Title);
                   HRESULT ( STDMETHODCALLTYPE *AddChannel )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *AddDesktopComponent )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Type,
                                         __RPC__in_opt VARIANT *Left,
                                         __RPC__in_opt VARIANT *Top,
                                         __RPC__in_opt VARIANT *Width,
                                         __RPC__in_opt VARIANT *Height);
                   HRESULT ( STDMETHODCALLTYPE *IsSubscribed )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR URL,
                                __RPC__out VARIANT_BOOL *pBool);
                   HRESULT ( STDMETHODCALLTYPE *NavigateAndFind )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR strQuery,
                       __RPC__in VARIANT *varTargetFrame);
                   HRESULT ( STDMETHODCALLTYPE *ImportExportFavorites )(
            __RPC__in IShellUIHelper7 * This,
                       VARIANT_BOOL fImport,
                       __RPC__in BSTR strImpExpPath);
                   HRESULT ( STDMETHODCALLTYPE *AutoCompleteSaveForm )(
            __RPC__in IShellUIHelper7 * This,
                                         __RPC__in_opt VARIANT *Form);
                   HRESULT ( STDMETHODCALLTYPE *AutoScan )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR strSearch,
                       __RPC__in BSTR strFailureUrl,
                                         __RPC__in_opt VARIANT *pvarTargetFrame);
                           HRESULT ( STDMETHODCALLTYPE *AutoCompleteAttach )(
            __RPC__in IShellUIHelper7 * This,
                                         __RPC__in_opt VARIANT *Reserved);
                   HRESULT ( STDMETHODCALLTYPE *ShowBrowserUI )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in VARIANT *pvarIn,
                                __RPC__out VARIANT *pvarOut);
                   HRESULT ( STDMETHODCALLTYPE *AddSearchProvider )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceShown )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *SkipRunOnce )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *CustomizeSettings )(
            __RPC__in IShellUIHelper7 * This,
                       VARIANT_BOOL fSQM,
                       VARIANT_BOOL fPhishing,
                       __RPC__in BSTR bstrLocale);
                   HRESULT ( STDMETHODCALLTYPE *SqmEnabled )(
            __RPC__in IShellUIHelper7 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *PhishingEnabled )(
            __RPC__in IShellUIHelper7 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *BrandImageUri )(
            __RPC__in IShellUIHelper7 * This,
                                __RPC__deref_out_opt BSTR *pbstrUri);
                   HRESULT ( STDMETHODCALLTYPE *SkipTabsWelcome )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *DiagnoseConnection )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *CustomizeClearType )(
            __RPC__in IShellUIHelper7 * This,
                       VARIANT_BOOL fSet);
                   HRESULT ( STDMETHODCALLTYPE *IsSearchProviderInstalled )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR URL,
                                __RPC__out DWORD *pdwResult);
                   HRESULT ( STDMETHODCALLTYPE *IsSearchMigrated )(
            __RPC__in IShellUIHelper7 * This,
                                __RPC__out VARIANT_BOOL *pfMigrated);
                   HRESULT ( STDMETHODCALLTYPE *DefaultSearchProvider )(
            __RPC__in IShellUIHelper7 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceRequiredSettingsComplete )(
            __RPC__in IShellUIHelper7 * This,
                       VARIANT_BOOL fComplete);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceHasShown )(
            __RPC__in IShellUIHelper7 * This,
                                __RPC__out VARIANT_BOOL *pfShown);
                   HRESULT ( STDMETHODCALLTYPE *SearchGuideUrl )(
            __RPC__in IShellUIHelper7 * This,
                                __RPC__deref_out_opt BSTR *pbstrUrl);
                   HRESULT ( STDMETHODCALLTYPE *AddService )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *IsServiceInstalled )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Verb,
                                __RPC__out DWORD *pdwResult);
                   HRESULT ( STDMETHODCALLTYPE *InPrivateFilteringEnabled )(
            __RPC__in IShellUIHelper7 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *AddToFavoritesBar )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Title,
                                 __RPC__in VARIANT *Type);
                   HRESULT ( STDMETHODCALLTYPE *BuildNewTabPage )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *SetRecentlyClosedVisible )(
            __RPC__in IShellUIHelper7 * This,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *SetActivitiesVisible )(
            __RPC__in IShellUIHelper7 * This,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *ContentDiscoveryReset )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *IsSuggestedSitesEnabled )(
            __RPC__in IShellUIHelper7 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *EnableSuggestedSites )(
            __RPC__in IShellUIHelper7 * This,
                       VARIANT_BOOL fEnable);
                   HRESULT ( STDMETHODCALLTYPE *NavigateToSuggestedSites )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR bstrRelativeUrl);
                   HRESULT ( STDMETHODCALLTYPE *ShowTabsHelp )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *ShowInPrivateHelp )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *msIsSiteMode )(
            __RPC__in IShellUIHelper7 * This,
                                __RPC__out VARIANT_BOOL *pfSiteMode);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeShowThumbBar )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeAddThumbBarButton )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR bstrIconURL,
                       __RPC__in BSTR bstrTooltip,
                                __RPC__out VARIANT *pvarButtonID);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeUpdateThumbBarButton )(
            __RPC__in IShellUIHelper7 * This,
                       VARIANT ButtonID,
                       VARIANT_BOOL fEnabled,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeSetIconOverlay )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR IconUrl,
                                 __RPC__in VARIANT *pvarDescription);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeClearIconOverlay )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *msAddSiteMode )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeCreateJumpList )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR bstrHeader);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeAddJumpListItem )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in BSTR bstrActionUri,
                       __RPC__in BSTR bstrIconUri,
                                 __RPC__in VARIANT *pvarWindowType);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeClearJumpList )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeShowJumpList )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeAddButtonStyle )(
            __RPC__in IShellUIHelper7 * This,
                       VARIANT uiButtonID,
                       __RPC__in BSTR bstrIconUrl,
                       __RPC__in BSTR bstrTooltip,
                                __RPC__out VARIANT *pvarStyleID);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeShowButtonStyle )(
            __RPC__in IShellUIHelper7 * This,
                       VARIANT uiButtonID,
                       VARIANT uiStyleID);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeActivate )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *msIsSiteModeFirstRun )(
            __RPC__in IShellUIHelper7 * This,
                       VARIANT_BOOL fPreserveState,
                                __RPC__out VARIANT *puiFirstRun);
                   HRESULT ( STDMETHODCALLTYPE *msAddTrackingProtectionList )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR bstrFilterName);
                   HRESULT ( STDMETHODCALLTYPE *msTrackingProtectionEnabled )(
            __RPC__in IShellUIHelper7 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *msActiveXFilteringEnabled )(
            __RPC__in IShellUIHelper7 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *msProvisionNetworks )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR bstrProvisioningXml,
                                __RPC__out VARIANT *puiResult);
                   HRESULT ( STDMETHODCALLTYPE *msReportSafeUrl )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeRefreshBadge )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeClearBadge )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *msDiagnoseConnectionUILess )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *msLaunchNetworkClientHelp )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *msChangeDefaultBrowser )(
            __RPC__in IShellUIHelper7 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msStopPeriodicTileUpdate )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *msStartPeriodicTileUpdate )(
            __RPC__in IShellUIHelper7 * This,
                       VARIANT pollingUris,
                                 VARIANT startTime,
                                 VARIANT uiUpdateRecurrence);
                   HRESULT ( STDMETHODCALLTYPE *msStartPeriodicTileUpdateBatch )(
            __RPC__in IShellUIHelper7 * This,
                       VARIANT pollingUris,
                                 VARIANT startTime,
                                 VARIANT uiUpdateRecurrence);
                   HRESULT ( STDMETHODCALLTYPE *msClearTile )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *msEnableTileNotificationQueue )(
            __RPC__in IShellUIHelper7 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msPinnedSiteState )(
            __RPC__in IShellUIHelper7 * This,
                                __RPC__out VARIANT *pvarSiteState);
                   HRESULT ( STDMETHODCALLTYPE *msEnableTileNotificationQueueForSquare150x150 )(
            __RPC__in IShellUIHelper7 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msEnableTileNotificationQueueForWide310x150 )(
            __RPC__in IShellUIHelper7 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msEnableTileNotificationQueueForSquare310x310 )(
            __RPC__in IShellUIHelper7 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msScheduledTileNotification )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR bstrNotificationXml,
                       __RPC__in BSTR bstrNotificationId,
                       __RPC__in BSTR bstrNotificationTag,
                                 VARIANT startTime,
                                 VARIANT expirationTime);
                   HRESULT ( STDMETHODCALLTYPE *msRemoveScheduledTileNotification )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR bstrNotificationId);
                   HRESULT ( STDMETHODCALLTYPE *msStartPeriodicBadgeUpdate )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR pollingUri,
                                 VARIANT startTime,
                                 VARIANT uiUpdateRecurrence);
                   HRESULT ( STDMETHODCALLTYPE *msStopPeriodicBadgeUpdate )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *msLaunchInternetOptions )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *SetExperimentalFlag )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR bstrFlagString,
                       VARIANT_BOOL vfFlag);
                   HRESULT ( STDMETHODCALLTYPE *GetExperimentalFlag )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR bstrFlagString,
                                __RPC__out VARIANT_BOOL *vfFlag);
                   HRESULT ( STDMETHODCALLTYPE *SetExperimentalValue )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR bstrValueString,
                       DWORD dwValue);
                   HRESULT ( STDMETHODCALLTYPE *GetExperimentalValue )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR bstrValueString,
                                __RPC__out DWORD *pdwValue);
                   HRESULT ( STDMETHODCALLTYPE *ResetAllExperimentalFlagsAndValues )(
            __RPC__in IShellUIHelper7 * This);
                   HRESULT ( STDMETHODCALLTYPE *GetNeedIEAutoLaunchFlag )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR bstrUrl,
                                __RPC__out VARIANT_BOOL *flag);
                   HRESULT ( STDMETHODCALLTYPE *SetNeedIEAutoLaunchFlag )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR bstrUrl,
                       VARIANT_BOOL flag);
                   HRESULT ( STDMETHODCALLTYPE *HasNeedIEAutoLaunchFlag )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR bstrUrl,
                                __RPC__out VARIANT_BOOL *exists);
                   HRESULT ( STDMETHODCALLTYPE *LaunchIE )(
            __RPC__in IShellUIHelper7 * This,
                       __RPC__in BSTR bstrUrl,
                       VARIANT_BOOL automated);
        END_INTERFACE
    } IShellUIHelper7Vtbl;
    interface IShellUIHelper7
    {
        CONST_VTBL struct IShellUIHelper7Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ResetFirstBootMode(This) )
    ( (This)->lpVtbl -> ResetSafeMode(This) )
    ( (This)->lpVtbl -> RefreshOfflineDesktop(This) )
    ( (This)->lpVtbl -> AddFavorite(This,URL,Title) )
    ( (This)->lpVtbl -> AddChannel(This,URL) )
    ( (This)->lpVtbl -> AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) )
    ( (This)->lpVtbl -> IsSubscribed(This,URL,pBool) )
    ( (This)->lpVtbl -> NavigateAndFind(This,URL,strQuery,varTargetFrame) )
    ( (This)->lpVtbl -> ImportExportFavorites(This,fImport,strImpExpPath) )
    ( (This)->lpVtbl -> AutoCompleteSaveForm(This,Form) )
    ( (This)->lpVtbl -> AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) )
    ( (This)->lpVtbl -> AutoCompleteAttach(This,Reserved) )
    ( (This)->lpVtbl -> ShowBrowserUI(This,bstrName,pvarIn,pvarOut) )
    ( (This)->lpVtbl -> AddSearchProvider(This,URL) )
    ( (This)->lpVtbl -> RunOnceShown(This) )
    ( (This)->lpVtbl -> SkipRunOnce(This) )
    ( (This)->lpVtbl -> CustomizeSettings(This,fSQM,fPhishing,bstrLocale) )
    ( (This)->lpVtbl -> SqmEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> PhishingEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> BrandImageUri(This,pbstrUri) )
    ( (This)->lpVtbl -> SkipTabsWelcome(This) )
    ( (This)->lpVtbl -> DiagnoseConnection(This) )
    ( (This)->lpVtbl -> CustomizeClearType(This,fSet) )
    ( (This)->lpVtbl -> IsSearchProviderInstalled(This,URL,pdwResult) )
    ( (This)->lpVtbl -> IsSearchMigrated(This,pfMigrated) )
    ( (This)->lpVtbl -> DefaultSearchProvider(This,pbstrName) )
    ( (This)->lpVtbl -> RunOnceRequiredSettingsComplete(This,fComplete) )
    ( (This)->lpVtbl -> RunOnceHasShown(This,pfShown) )
    ( (This)->lpVtbl -> SearchGuideUrl(This,pbstrUrl) )
    ( (This)->lpVtbl -> AddService(This,URL) )
    ( (This)->lpVtbl -> IsServiceInstalled(This,URL,Verb,pdwResult) )
    ( (This)->lpVtbl -> InPrivateFilteringEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> AddToFavoritesBar(This,URL,Title,Type) )
    ( (This)->lpVtbl -> BuildNewTabPage(This) )
    ( (This)->lpVtbl -> SetRecentlyClosedVisible(This,fVisible) )
    ( (This)->lpVtbl -> SetActivitiesVisible(This,fVisible) )
    ( (This)->lpVtbl -> ContentDiscoveryReset(This) )
    ( (This)->lpVtbl -> IsSuggestedSitesEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> EnableSuggestedSites(This,fEnable) )
    ( (This)->lpVtbl -> NavigateToSuggestedSites(This,bstrRelativeUrl) )
    ( (This)->lpVtbl -> ShowTabsHelp(This) )
    ( (This)->lpVtbl -> ShowInPrivateHelp(This) )
    ( (This)->lpVtbl -> msIsSiteMode(This,pfSiteMode) )
    ( (This)->lpVtbl -> msSiteModeShowThumbBar(This) )
    ( (This)->lpVtbl -> msSiteModeAddThumbBarButton(This,bstrIconURL,bstrTooltip,pvarButtonID) )
    ( (This)->lpVtbl -> msSiteModeUpdateThumbBarButton(This,ButtonID,fEnabled,fVisible) )
    ( (This)->lpVtbl -> msSiteModeSetIconOverlay(This,IconUrl,pvarDescription) )
    ( (This)->lpVtbl -> msSiteModeClearIconOverlay(This) )
    ( (This)->lpVtbl -> msAddSiteMode(This) )
    ( (This)->lpVtbl -> msSiteModeCreateJumpList(This,bstrHeader) )
    ( (This)->lpVtbl -> msSiteModeAddJumpListItem(This,bstrName,bstrActionUri,bstrIconUri,pvarWindowType) )
    ( (This)->lpVtbl -> msSiteModeClearJumpList(This) )
    ( (This)->lpVtbl -> msSiteModeShowJumpList(This) )
    ( (This)->lpVtbl -> msSiteModeAddButtonStyle(This,uiButtonID,bstrIconUrl,bstrTooltip,pvarStyleID) )
    ( (This)->lpVtbl -> msSiteModeShowButtonStyle(This,uiButtonID,uiStyleID) )
    ( (This)->lpVtbl -> msSiteModeActivate(This) )
    ( (This)->lpVtbl -> msIsSiteModeFirstRun(This,fPreserveState,puiFirstRun) )
    ( (This)->lpVtbl -> msAddTrackingProtectionList(This,URL,bstrFilterName) )
    ( (This)->lpVtbl -> msTrackingProtectionEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> msActiveXFilteringEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> msProvisionNetworks(This,bstrProvisioningXml,puiResult) )
    ( (This)->lpVtbl -> msReportSafeUrl(This) )
    ( (This)->lpVtbl -> msSiteModeRefreshBadge(This) )
    ( (This)->lpVtbl -> msSiteModeClearBadge(This) )
    ( (This)->lpVtbl -> msDiagnoseConnectionUILess(This) )
    ( (This)->lpVtbl -> msLaunchNetworkClientHelp(This) )
    ( (This)->lpVtbl -> msChangeDefaultBrowser(This,fChange) )
    ( (This)->lpVtbl -> msStopPeriodicTileUpdate(This) )
    ( (This)->lpVtbl -> msStartPeriodicTileUpdate(This,pollingUris,startTime,uiUpdateRecurrence) )
    ( (This)->lpVtbl -> msStartPeriodicTileUpdateBatch(This,pollingUris,startTime,uiUpdateRecurrence) )
    ( (This)->lpVtbl -> msClearTile(This) )
    ( (This)->lpVtbl -> msEnableTileNotificationQueue(This,fChange) )
    ( (This)->lpVtbl -> msPinnedSiteState(This,pvarSiteState) )
    ( (This)->lpVtbl -> msEnableTileNotificationQueueForSquare150x150(This,fChange) )
    ( (This)->lpVtbl -> msEnableTileNotificationQueueForWide310x150(This,fChange) )
    ( (This)->lpVtbl -> msEnableTileNotificationQueueForSquare310x310(This,fChange) )
    ( (This)->lpVtbl -> msScheduledTileNotification(This,bstrNotificationXml,bstrNotificationId,bstrNotificationTag,startTime,expirationTime) )
    ( (This)->lpVtbl -> msRemoveScheduledTileNotification(This,bstrNotificationId) )
    ( (This)->lpVtbl -> msStartPeriodicBadgeUpdate(This,pollingUri,startTime,uiUpdateRecurrence) )
    ( (This)->lpVtbl -> msStopPeriodicBadgeUpdate(This) )
    ( (This)->lpVtbl -> msLaunchInternetOptions(This) )
    ( (This)->lpVtbl -> SetExperimentalFlag(This,bstrFlagString,vfFlag) )
    ( (This)->lpVtbl -> GetExperimentalFlag(This,bstrFlagString,vfFlag) )
    ( (This)->lpVtbl -> SetExperimentalValue(This,bstrValueString,dwValue) )
    ( (This)->lpVtbl -> GetExperimentalValue(This,bstrValueString,pdwValue) )
    ( (This)->lpVtbl -> ResetAllExperimentalFlagsAndValues(This) )
    ( (This)->lpVtbl -> GetNeedIEAutoLaunchFlag(This,bstrUrl,flag) )
    ( (This)->lpVtbl -> SetNeedIEAutoLaunchFlag(This,bstrUrl,flag) )
    ( (This)->lpVtbl -> HasNeedIEAutoLaunchFlag(This,bstrUrl,exists) )
    ( (This)->lpVtbl -> LaunchIE(This,bstrUrl,automated) )
EXTERN_C const IID IID_IShellUIHelper8;
    typedef struct IShellUIHelper8Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellUIHelper8 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellUIHelper8 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellUIHelper8 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellUIHelper8 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellUIHelper8 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                           HRESULT ( STDMETHODCALLTYPE *ResetFirstBootMode )(
            __RPC__in IShellUIHelper8 * This);
                           HRESULT ( STDMETHODCALLTYPE *ResetSafeMode )(
            __RPC__in IShellUIHelper8 * This);
                           HRESULT ( STDMETHODCALLTYPE *RefreshOfflineDesktop )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *AddFavorite )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR URL,
                                         __RPC__in_opt VARIANT *Title);
                   HRESULT ( STDMETHODCALLTYPE *AddChannel )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *AddDesktopComponent )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Type,
                                         __RPC__in_opt VARIANT *Left,
                                         __RPC__in_opt VARIANT *Top,
                                         __RPC__in_opt VARIANT *Width,
                                         __RPC__in_opt VARIANT *Height);
                   HRESULT ( STDMETHODCALLTYPE *IsSubscribed )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR URL,
                                __RPC__out VARIANT_BOOL *pBool);
                   HRESULT ( STDMETHODCALLTYPE *NavigateAndFind )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR strQuery,
                       __RPC__in VARIANT *varTargetFrame);
                   HRESULT ( STDMETHODCALLTYPE *ImportExportFavorites )(
            __RPC__in IShellUIHelper8 * This,
                       VARIANT_BOOL fImport,
                       __RPC__in BSTR strImpExpPath);
                   HRESULT ( STDMETHODCALLTYPE *AutoCompleteSaveForm )(
            __RPC__in IShellUIHelper8 * This,
                                         __RPC__in_opt VARIANT *Form);
                   HRESULT ( STDMETHODCALLTYPE *AutoScan )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR strSearch,
                       __RPC__in BSTR strFailureUrl,
                                         __RPC__in_opt VARIANT *pvarTargetFrame);
                           HRESULT ( STDMETHODCALLTYPE *AutoCompleteAttach )(
            __RPC__in IShellUIHelper8 * This,
                                         __RPC__in_opt VARIANT *Reserved);
                   HRESULT ( STDMETHODCALLTYPE *ShowBrowserUI )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in VARIANT *pvarIn,
                                __RPC__out VARIANT *pvarOut);
                   HRESULT ( STDMETHODCALLTYPE *AddSearchProvider )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceShown )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *SkipRunOnce )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *CustomizeSettings )(
            __RPC__in IShellUIHelper8 * This,
                       VARIANT_BOOL fSQM,
                       VARIANT_BOOL fPhishing,
                       __RPC__in BSTR bstrLocale);
                   HRESULT ( STDMETHODCALLTYPE *SqmEnabled )(
            __RPC__in IShellUIHelper8 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *PhishingEnabled )(
            __RPC__in IShellUIHelper8 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *BrandImageUri )(
            __RPC__in IShellUIHelper8 * This,
                                __RPC__deref_out_opt BSTR *pbstrUri);
                   HRESULT ( STDMETHODCALLTYPE *SkipTabsWelcome )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *DiagnoseConnection )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *CustomizeClearType )(
            __RPC__in IShellUIHelper8 * This,
                       VARIANT_BOOL fSet);
                   HRESULT ( STDMETHODCALLTYPE *IsSearchProviderInstalled )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR URL,
                                __RPC__out DWORD *pdwResult);
                   HRESULT ( STDMETHODCALLTYPE *IsSearchMigrated )(
            __RPC__in IShellUIHelper8 * This,
                                __RPC__out VARIANT_BOOL *pfMigrated);
                   HRESULT ( STDMETHODCALLTYPE *DefaultSearchProvider )(
            __RPC__in IShellUIHelper8 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceRequiredSettingsComplete )(
            __RPC__in IShellUIHelper8 * This,
                       VARIANT_BOOL fComplete);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceHasShown )(
            __RPC__in IShellUIHelper8 * This,
                                __RPC__out VARIANT_BOOL *pfShown);
                   HRESULT ( STDMETHODCALLTYPE *SearchGuideUrl )(
            __RPC__in IShellUIHelper8 * This,
                                __RPC__deref_out_opt BSTR *pbstrUrl);
                   HRESULT ( STDMETHODCALLTYPE *AddService )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *IsServiceInstalled )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Verb,
                                __RPC__out DWORD *pdwResult);
                   HRESULT ( STDMETHODCALLTYPE *InPrivateFilteringEnabled )(
            __RPC__in IShellUIHelper8 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *AddToFavoritesBar )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Title,
                                 __RPC__in VARIANT *Type);
                   HRESULT ( STDMETHODCALLTYPE *BuildNewTabPage )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *SetRecentlyClosedVisible )(
            __RPC__in IShellUIHelper8 * This,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *SetActivitiesVisible )(
            __RPC__in IShellUIHelper8 * This,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *ContentDiscoveryReset )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *IsSuggestedSitesEnabled )(
            __RPC__in IShellUIHelper8 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *EnableSuggestedSites )(
            __RPC__in IShellUIHelper8 * This,
                       VARIANT_BOOL fEnable);
                   HRESULT ( STDMETHODCALLTYPE *NavigateToSuggestedSites )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR bstrRelativeUrl);
                   HRESULT ( STDMETHODCALLTYPE *ShowTabsHelp )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *ShowInPrivateHelp )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *msIsSiteMode )(
            __RPC__in IShellUIHelper8 * This,
                                __RPC__out VARIANT_BOOL *pfSiteMode);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeShowThumbBar )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeAddThumbBarButton )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR bstrIconURL,
                       __RPC__in BSTR bstrTooltip,
                                __RPC__out VARIANT *pvarButtonID);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeUpdateThumbBarButton )(
            __RPC__in IShellUIHelper8 * This,
                       VARIANT ButtonID,
                       VARIANT_BOOL fEnabled,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeSetIconOverlay )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR IconUrl,
                                 __RPC__in VARIANT *pvarDescription);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeClearIconOverlay )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *msAddSiteMode )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeCreateJumpList )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR bstrHeader);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeAddJumpListItem )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in BSTR bstrActionUri,
                       __RPC__in BSTR bstrIconUri,
                                 __RPC__in VARIANT *pvarWindowType);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeClearJumpList )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeShowJumpList )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeAddButtonStyle )(
            __RPC__in IShellUIHelper8 * This,
                       VARIANT uiButtonID,
                       __RPC__in BSTR bstrIconUrl,
                       __RPC__in BSTR bstrTooltip,
                                __RPC__out VARIANT *pvarStyleID);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeShowButtonStyle )(
            __RPC__in IShellUIHelper8 * This,
                       VARIANT uiButtonID,
                       VARIANT uiStyleID);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeActivate )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *msIsSiteModeFirstRun )(
            __RPC__in IShellUIHelper8 * This,
                       VARIANT_BOOL fPreserveState,
                                __RPC__out VARIANT *puiFirstRun);
                   HRESULT ( STDMETHODCALLTYPE *msAddTrackingProtectionList )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR bstrFilterName);
                   HRESULT ( STDMETHODCALLTYPE *msTrackingProtectionEnabled )(
            __RPC__in IShellUIHelper8 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *msActiveXFilteringEnabled )(
            __RPC__in IShellUIHelper8 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *msProvisionNetworks )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR bstrProvisioningXml,
                                __RPC__out VARIANT *puiResult);
                   HRESULT ( STDMETHODCALLTYPE *msReportSafeUrl )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeRefreshBadge )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeClearBadge )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *msDiagnoseConnectionUILess )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *msLaunchNetworkClientHelp )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *msChangeDefaultBrowser )(
            __RPC__in IShellUIHelper8 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msStopPeriodicTileUpdate )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *msStartPeriodicTileUpdate )(
            __RPC__in IShellUIHelper8 * This,
                       VARIANT pollingUris,
                                 VARIANT startTime,
                                 VARIANT uiUpdateRecurrence);
                   HRESULT ( STDMETHODCALLTYPE *msStartPeriodicTileUpdateBatch )(
            __RPC__in IShellUIHelper8 * This,
                       VARIANT pollingUris,
                                 VARIANT startTime,
                                 VARIANT uiUpdateRecurrence);
                   HRESULT ( STDMETHODCALLTYPE *msClearTile )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *msEnableTileNotificationQueue )(
            __RPC__in IShellUIHelper8 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msPinnedSiteState )(
            __RPC__in IShellUIHelper8 * This,
                                __RPC__out VARIANT *pvarSiteState);
                   HRESULT ( STDMETHODCALLTYPE *msEnableTileNotificationQueueForSquare150x150 )(
            __RPC__in IShellUIHelper8 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msEnableTileNotificationQueueForWide310x150 )(
            __RPC__in IShellUIHelper8 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msEnableTileNotificationQueueForSquare310x310 )(
            __RPC__in IShellUIHelper8 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msScheduledTileNotification )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR bstrNotificationXml,
                       __RPC__in BSTR bstrNotificationId,
                       __RPC__in BSTR bstrNotificationTag,
                                 VARIANT startTime,
                                 VARIANT expirationTime);
                   HRESULT ( STDMETHODCALLTYPE *msRemoveScheduledTileNotification )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR bstrNotificationId);
                   HRESULT ( STDMETHODCALLTYPE *msStartPeriodicBadgeUpdate )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR pollingUri,
                                 VARIANT startTime,
                                 VARIANT uiUpdateRecurrence);
                   HRESULT ( STDMETHODCALLTYPE *msStopPeriodicBadgeUpdate )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *msLaunchInternetOptions )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *SetExperimentalFlag )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR bstrFlagString,
                       VARIANT_BOOL vfFlag);
                   HRESULT ( STDMETHODCALLTYPE *GetExperimentalFlag )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR bstrFlagString,
                                __RPC__out VARIANT_BOOL *vfFlag);
                   HRESULT ( STDMETHODCALLTYPE *SetExperimentalValue )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR bstrValueString,
                       DWORD dwValue);
                   HRESULT ( STDMETHODCALLTYPE *GetExperimentalValue )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR bstrValueString,
                                __RPC__out DWORD *pdwValue);
                   HRESULT ( STDMETHODCALLTYPE *ResetAllExperimentalFlagsAndValues )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *GetNeedIEAutoLaunchFlag )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR bstrUrl,
                                __RPC__out VARIANT_BOOL *flag);
                   HRESULT ( STDMETHODCALLTYPE *SetNeedIEAutoLaunchFlag )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR bstrUrl,
                       VARIANT_BOOL flag);
                   HRESULT ( STDMETHODCALLTYPE *HasNeedIEAutoLaunchFlag )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR bstrUrl,
                                __RPC__out VARIANT_BOOL *exists);
                   HRESULT ( STDMETHODCALLTYPE *LaunchIE )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR bstrUrl,
                       VARIANT_BOOL automated);
                   HRESULT ( STDMETHODCALLTYPE *GetCVListData )(
            __RPC__in IShellUIHelper8 * This,
                                __RPC__deref_out_opt BSTR *pbstrResult);
                   HRESULT ( STDMETHODCALLTYPE *GetCVListLocalData )(
            __RPC__in IShellUIHelper8 * This,
                                __RPC__deref_out_opt BSTR *pbstrResult);
                   HRESULT ( STDMETHODCALLTYPE *GetEMIEListData )(
            __RPC__in IShellUIHelper8 * This,
                                __RPC__deref_out_opt BSTR *pbstrResult);
                   HRESULT ( STDMETHODCALLTYPE *GetEMIEListLocalData )(
            __RPC__in IShellUIHelper8 * This,
                                __RPC__deref_out_opt BSTR *pbstrResult);
                   HRESULT ( STDMETHODCALLTYPE *OpenFavoritesPane )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *OpenFavoritesSettings )(
            __RPC__in IShellUIHelper8 * This);
                   HRESULT ( STDMETHODCALLTYPE *LaunchInHVSI )(
            __RPC__in IShellUIHelper8 * This,
                       __RPC__in BSTR bstrUrl);
        END_INTERFACE
    } IShellUIHelper8Vtbl;
    interface IShellUIHelper8
    {
        CONST_VTBL struct IShellUIHelper8Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ResetFirstBootMode(This) )
    ( (This)->lpVtbl -> ResetSafeMode(This) )
    ( (This)->lpVtbl -> RefreshOfflineDesktop(This) )
    ( (This)->lpVtbl -> AddFavorite(This,URL,Title) )
    ( (This)->lpVtbl -> AddChannel(This,URL) )
    ( (This)->lpVtbl -> AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) )
    ( (This)->lpVtbl -> IsSubscribed(This,URL,pBool) )
    ( (This)->lpVtbl -> NavigateAndFind(This,URL,strQuery,varTargetFrame) )
    ( (This)->lpVtbl -> ImportExportFavorites(This,fImport,strImpExpPath) )
    ( (This)->lpVtbl -> AutoCompleteSaveForm(This,Form) )
    ( (This)->lpVtbl -> AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) )
    ( (This)->lpVtbl -> AutoCompleteAttach(This,Reserved) )
    ( (This)->lpVtbl -> ShowBrowserUI(This,bstrName,pvarIn,pvarOut) )
    ( (This)->lpVtbl -> AddSearchProvider(This,URL) )
    ( (This)->lpVtbl -> RunOnceShown(This) )
    ( (This)->lpVtbl -> SkipRunOnce(This) )
    ( (This)->lpVtbl -> CustomizeSettings(This,fSQM,fPhishing,bstrLocale) )
    ( (This)->lpVtbl -> SqmEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> PhishingEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> BrandImageUri(This,pbstrUri) )
    ( (This)->lpVtbl -> SkipTabsWelcome(This) )
    ( (This)->lpVtbl -> DiagnoseConnection(This) )
    ( (This)->lpVtbl -> CustomizeClearType(This,fSet) )
    ( (This)->lpVtbl -> IsSearchProviderInstalled(This,URL,pdwResult) )
    ( (This)->lpVtbl -> IsSearchMigrated(This,pfMigrated) )
    ( (This)->lpVtbl -> DefaultSearchProvider(This,pbstrName) )
    ( (This)->lpVtbl -> RunOnceRequiredSettingsComplete(This,fComplete) )
    ( (This)->lpVtbl -> RunOnceHasShown(This,pfShown) )
    ( (This)->lpVtbl -> SearchGuideUrl(This,pbstrUrl) )
    ( (This)->lpVtbl -> AddService(This,URL) )
    ( (This)->lpVtbl -> IsServiceInstalled(This,URL,Verb,pdwResult) )
    ( (This)->lpVtbl -> InPrivateFilteringEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> AddToFavoritesBar(This,URL,Title,Type) )
    ( (This)->lpVtbl -> BuildNewTabPage(This) )
    ( (This)->lpVtbl -> SetRecentlyClosedVisible(This,fVisible) )
    ( (This)->lpVtbl -> SetActivitiesVisible(This,fVisible) )
    ( (This)->lpVtbl -> ContentDiscoveryReset(This) )
    ( (This)->lpVtbl -> IsSuggestedSitesEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> EnableSuggestedSites(This,fEnable) )
    ( (This)->lpVtbl -> NavigateToSuggestedSites(This,bstrRelativeUrl) )
    ( (This)->lpVtbl -> ShowTabsHelp(This) )
    ( (This)->lpVtbl -> ShowInPrivateHelp(This) )
    ( (This)->lpVtbl -> msIsSiteMode(This,pfSiteMode) )
    ( (This)->lpVtbl -> msSiteModeShowThumbBar(This) )
    ( (This)->lpVtbl -> msSiteModeAddThumbBarButton(This,bstrIconURL,bstrTooltip,pvarButtonID) )
    ( (This)->lpVtbl -> msSiteModeUpdateThumbBarButton(This,ButtonID,fEnabled,fVisible) )
    ( (This)->lpVtbl -> msSiteModeSetIconOverlay(This,IconUrl,pvarDescription) )
    ( (This)->lpVtbl -> msSiteModeClearIconOverlay(This) )
    ( (This)->lpVtbl -> msAddSiteMode(This) )
    ( (This)->lpVtbl -> msSiteModeCreateJumpList(This,bstrHeader) )
    ( (This)->lpVtbl -> msSiteModeAddJumpListItem(This,bstrName,bstrActionUri,bstrIconUri,pvarWindowType) )
    ( (This)->lpVtbl -> msSiteModeClearJumpList(This) )
    ( (This)->lpVtbl -> msSiteModeShowJumpList(This) )
    ( (This)->lpVtbl -> msSiteModeAddButtonStyle(This,uiButtonID,bstrIconUrl,bstrTooltip,pvarStyleID) )
    ( (This)->lpVtbl -> msSiteModeShowButtonStyle(This,uiButtonID,uiStyleID) )
    ( (This)->lpVtbl -> msSiteModeActivate(This) )
    ( (This)->lpVtbl -> msIsSiteModeFirstRun(This,fPreserveState,puiFirstRun) )
    ( (This)->lpVtbl -> msAddTrackingProtectionList(This,URL,bstrFilterName) )
    ( (This)->lpVtbl -> msTrackingProtectionEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> msActiveXFilteringEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> msProvisionNetworks(This,bstrProvisioningXml,puiResult) )
    ( (This)->lpVtbl -> msReportSafeUrl(This) )
    ( (This)->lpVtbl -> msSiteModeRefreshBadge(This) )
    ( (This)->lpVtbl -> msSiteModeClearBadge(This) )
    ( (This)->lpVtbl -> msDiagnoseConnectionUILess(This) )
    ( (This)->lpVtbl -> msLaunchNetworkClientHelp(This) )
    ( (This)->lpVtbl -> msChangeDefaultBrowser(This,fChange) )
    ( (This)->lpVtbl -> msStopPeriodicTileUpdate(This) )
    ( (This)->lpVtbl -> msStartPeriodicTileUpdate(This,pollingUris,startTime,uiUpdateRecurrence) )
    ( (This)->lpVtbl -> msStartPeriodicTileUpdateBatch(This,pollingUris,startTime,uiUpdateRecurrence) )
    ( (This)->lpVtbl -> msClearTile(This) )
    ( (This)->lpVtbl -> msEnableTileNotificationQueue(This,fChange) )
    ( (This)->lpVtbl -> msPinnedSiteState(This,pvarSiteState) )
    ( (This)->lpVtbl -> msEnableTileNotificationQueueForSquare150x150(This,fChange) )
    ( (This)->lpVtbl -> msEnableTileNotificationQueueForWide310x150(This,fChange) )
    ( (This)->lpVtbl -> msEnableTileNotificationQueueForSquare310x310(This,fChange) )
    ( (This)->lpVtbl -> msScheduledTileNotification(This,bstrNotificationXml,bstrNotificationId,bstrNotificationTag,startTime,expirationTime) )
    ( (This)->lpVtbl -> msRemoveScheduledTileNotification(This,bstrNotificationId) )
    ( (This)->lpVtbl -> msStartPeriodicBadgeUpdate(This,pollingUri,startTime,uiUpdateRecurrence) )
    ( (This)->lpVtbl -> msStopPeriodicBadgeUpdate(This) )
    ( (This)->lpVtbl -> msLaunchInternetOptions(This) )
    ( (This)->lpVtbl -> SetExperimentalFlag(This,bstrFlagString,vfFlag) )
    ( (This)->lpVtbl -> GetExperimentalFlag(This,bstrFlagString,vfFlag) )
    ( (This)->lpVtbl -> SetExperimentalValue(This,bstrValueString,dwValue) )
    ( (This)->lpVtbl -> GetExperimentalValue(This,bstrValueString,pdwValue) )
    ( (This)->lpVtbl -> ResetAllExperimentalFlagsAndValues(This) )
    ( (This)->lpVtbl -> GetNeedIEAutoLaunchFlag(This,bstrUrl,flag) )
    ( (This)->lpVtbl -> SetNeedIEAutoLaunchFlag(This,bstrUrl,flag) )
    ( (This)->lpVtbl -> HasNeedIEAutoLaunchFlag(This,bstrUrl,exists) )
    ( (This)->lpVtbl -> LaunchIE(This,bstrUrl,automated) )
    ( (This)->lpVtbl -> GetCVListData(This,pbstrResult) )
    ( (This)->lpVtbl -> GetCVListLocalData(This,pbstrResult) )
    ( (This)->lpVtbl -> GetEMIEListData(This,pbstrResult) )
    ( (This)->lpVtbl -> GetEMIEListLocalData(This,pbstrResult) )
    ( (This)->lpVtbl -> OpenFavoritesPane(This) )
    ( (This)->lpVtbl -> OpenFavoritesSettings(This) )
    ( (This)->lpVtbl -> LaunchInHVSI(This,bstrUrl) )
EXTERN_C const IID IID_IShellUIHelper9;
    typedef struct IShellUIHelper9Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellUIHelper9 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellUIHelper9 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellUIHelper9 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellUIHelper9 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellUIHelper9 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                           HRESULT ( STDMETHODCALLTYPE *ResetFirstBootMode )(
            __RPC__in IShellUIHelper9 * This);
                           HRESULT ( STDMETHODCALLTYPE *ResetSafeMode )(
            __RPC__in IShellUIHelper9 * This);
                           HRESULT ( STDMETHODCALLTYPE *RefreshOfflineDesktop )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *AddFavorite )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR URL,
                                         __RPC__in_opt VARIANT *Title);
                   HRESULT ( STDMETHODCALLTYPE *AddChannel )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *AddDesktopComponent )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Type,
                                         __RPC__in_opt VARIANT *Left,
                                         __RPC__in_opt VARIANT *Top,
                                         __RPC__in_opt VARIANT *Width,
                                         __RPC__in_opt VARIANT *Height);
                   HRESULT ( STDMETHODCALLTYPE *IsSubscribed )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR URL,
                                __RPC__out VARIANT_BOOL *pBool);
                   HRESULT ( STDMETHODCALLTYPE *NavigateAndFind )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR strQuery,
                       __RPC__in VARIANT *varTargetFrame);
                   HRESULT ( STDMETHODCALLTYPE *ImportExportFavorites )(
            __RPC__in IShellUIHelper9 * This,
                       VARIANT_BOOL fImport,
                       __RPC__in BSTR strImpExpPath);
                   HRESULT ( STDMETHODCALLTYPE *AutoCompleteSaveForm )(
            __RPC__in IShellUIHelper9 * This,
                                         __RPC__in_opt VARIANT *Form);
                   HRESULT ( STDMETHODCALLTYPE *AutoScan )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR strSearch,
                       __RPC__in BSTR strFailureUrl,
                                         __RPC__in_opt VARIANT *pvarTargetFrame);
                           HRESULT ( STDMETHODCALLTYPE *AutoCompleteAttach )(
            __RPC__in IShellUIHelper9 * This,
                                         __RPC__in_opt VARIANT *Reserved);
                   HRESULT ( STDMETHODCALLTYPE *ShowBrowserUI )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in VARIANT *pvarIn,
                                __RPC__out VARIANT *pvarOut);
                   HRESULT ( STDMETHODCALLTYPE *AddSearchProvider )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceShown )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *SkipRunOnce )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *CustomizeSettings )(
            __RPC__in IShellUIHelper9 * This,
                       VARIANT_BOOL fSQM,
                       VARIANT_BOOL fPhishing,
                       __RPC__in BSTR bstrLocale);
                   HRESULT ( STDMETHODCALLTYPE *SqmEnabled )(
            __RPC__in IShellUIHelper9 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *PhishingEnabled )(
            __RPC__in IShellUIHelper9 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *BrandImageUri )(
            __RPC__in IShellUIHelper9 * This,
                                __RPC__deref_out_opt BSTR *pbstrUri);
                   HRESULT ( STDMETHODCALLTYPE *SkipTabsWelcome )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *DiagnoseConnection )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *CustomizeClearType )(
            __RPC__in IShellUIHelper9 * This,
                       VARIANT_BOOL fSet);
                   HRESULT ( STDMETHODCALLTYPE *IsSearchProviderInstalled )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR URL,
                                __RPC__out DWORD *pdwResult);
                   HRESULT ( STDMETHODCALLTYPE *IsSearchMigrated )(
            __RPC__in IShellUIHelper9 * This,
                                __RPC__out VARIANT_BOOL *pfMigrated);
                   HRESULT ( STDMETHODCALLTYPE *DefaultSearchProvider )(
            __RPC__in IShellUIHelper9 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceRequiredSettingsComplete )(
            __RPC__in IShellUIHelper9 * This,
                       VARIANT_BOOL fComplete);
                   HRESULT ( STDMETHODCALLTYPE *RunOnceHasShown )(
            __RPC__in IShellUIHelper9 * This,
                                __RPC__out VARIANT_BOOL *pfShown);
                   HRESULT ( STDMETHODCALLTYPE *SearchGuideUrl )(
            __RPC__in IShellUIHelper9 * This,
                                __RPC__deref_out_opt BSTR *pbstrUrl);
                   HRESULT ( STDMETHODCALLTYPE *AddService )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR URL);
                   HRESULT ( STDMETHODCALLTYPE *IsServiceInstalled )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Verb,
                                __RPC__out DWORD *pdwResult);
                   HRESULT ( STDMETHODCALLTYPE *InPrivateFilteringEnabled )(
            __RPC__in IShellUIHelper9 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *AddToFavoritesBar )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR Title,
                                 __RPC__in VARIANT *Type);
                   HRESULT ( STDMETHODCALLTYPE *BuildNewTabPage )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *SetRecentlyClosedVisible )(
            __RPC__in IShellUIHelper9 * This,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *SetActivitiesVisible )(
            __RPC__in IShellUIHelper9 * This,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *ContentDiscoveryReset )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *IsSuggestedSitesEnabled )(
            __RPC__in IShellUIHelper9 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *EnableSuggestedSites )(
            __RPC__in IShellUIHelper9 * This,
                       VARIANT_BOOL fEnable);
                   HRESULT ( STDMETHODCALLTYPE *NavigateToSuggestedSites )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR bstrRelativeUrl);
                   HRESULT ( STDMETHODCALLTYPE *ShowTabsHelp )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *ShowInPrivateHelp )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *msIsSiteMode )(
            __RPC__in IShellUIHelper9 * This,
                                __RPC__out VARIANT_BOOL *pfSiteMode);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeShowThumbBar )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeAddThumbBarButton )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR bstrIconURL,
                       __RPC__in BSTR bstrTooltip,
                                __RPC__out VARIANT *pvarButtonID);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeUpdateThumbBarButton )(
            __RPC__in IShellUIHelper9 * This,
                       VARIANT ButtonID,
                       VARIANT_BOOL fEnabled,
                       VARIANT_BOOL fVisible);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeSetIconOverlay )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR IconUrl,
                                 __RPC__in VARIANT *pvarDescription);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeClearIconOverlay )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *msAddSiteMode )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeCreateJumpList )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR bstrHeader);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeAddJumpListItem )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR bstrName,
                       __RPC__in BSTR bstrActionUri,
                       __RPC__in BSTR bstrIconUri,
                                 __RPC__in VARIANT *pvarWindowType);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeClearJumpList )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeShowJumpList )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeAddButtonStyle )(
            __RPC__in IShellUIHelper9 * This,
                       VARIANT uiButtonID,
                       __RPC__in BSTR bstrIconUrl,
                       __RPC__in BSTR bstrTooltip,
                                __RPC__out VARIANT *pvarStyleID);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeShowButtonStyle )(
            __RPC__in IShellUIHelper9 * This,
                       VARIANT uiButtonID,
                       VARIANT uiStyleID);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeActivate )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *msIsSiteModeFirstRun )(
            __RPC__in IShellUIHelper9 * This,
                       VARIANT_BOOL fPreserveState,
                                __RPC__out VARIANT *puiFirstRun);
                   HRESULT ( STDMETHODCALLTYPE *msAddTrackingProtectionList )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR URL,
                       __RPC__in BSTR bstrFilterName);
                   HRESULT ( STDMETHODCALLTYPE *msTrackingProtectionEnabled )(
            __RPC__in IShellUIHelper9 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *msActiveXFilteringEnabled )(
            __RPC__in IShellUIHelper9 * This,
                                __RPC__out VARIANT_BOOL *pfEnabled);
                   HRESULT ( STDMETHODCALLTYPE *msProvisionNetworks )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR bstrProvisioningXml,
                                __RPC__out VARIANT *puiResult);
                   HRESULT ( STDMETHODCALLTYPE *msReportSafeUrl )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeRefreshBadge )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *msSiteModeClearBadge )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *msDiagnoseConnectionUILess )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *msLaunchNetworkClientHelp )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *msChangeDefaultBrowser )(
            __RPC__in IShellUIHelper9 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msStopPeriodicTileUpdate )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *msStartPeriodicTileUpdate )(
            __RPC__in IShellUIHelper9 * This,
                       VARIANT pollingUris,
                                 VARIANT startTime,
                                 VARIANT uiUpdateRecurrence);
                   HRESULT ( STDMETHODCALLTYPE *msStartPeriodicTileUpdateBatch )(
            __RPC__in IShellUIHelper9 * This,
                       VARIANT pollingUris,
                                 VARIANT startTime,
                                 VARIANT uiUpdateRecurrence);
                   HRESULT ( STDMETHODCALLTYPE *msClearTile )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *msEnableTileNotificationQueue )(
            __RPC__in IShellUIHelper9 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msPinnedSiteState )(
            __RPC__in IShellUIHelper9 * This,
                                __RPC__out VARIANT *pvarSiteState);
                   HRESULT ( STDMETHODCALLTYPE *msEnableTileNotificationQueueForSquare150x150 )(
            __RPC__in IShellUIHelper9 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msEnableTileNotificationQueueForWide310x150 )(
            __RPC__in IShellUIHelper9 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msEnableTileNotificationQueueForSquare310x310 )(
            __RPC__in IShellUIHelper9 * This,
                       VARIANT_BOOL fChange);
                   HRESULT ( STDMETHODCALLTYPE *msScheduledTileNotification )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR bstrNotificationXml,
                       __RPC__in BSTR bstrNotificationId,
                       __RPC__in BSTR bstrNotificationTag,
                                 VARIANT startTime,
                                 VARIANT expirationTime);
                   HRESULT ( STDMETHODCALLTYPE *msRemoveScheduledTileNotification )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR bstrNotificationId);
                   HRESULT ( STDMETHODCALLTYPE *msStartPeriodicBadgeUpdate )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR pollingUri,
                                 VARIANT startTime,
                                 VARIANT uiUpdateRecurrence);
                   HRESULT ( STDMETHODCALLTYPE *msStopPeriodicBadgeUpdate )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *msLaunchInternetOptions )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *SetExperimentalFlag )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR bstrFlagString,
                       VARIANT_BOOL vfFlag);
                   HRESULT ( STDMETHODCALLTYPE *GetExperimentalFlag )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR bstrFlagString,
                                __RPC__out VARIANT_BOOL *vfFlag);
                   HRESULT ( STDMETHODCALLTYPE *SetExperimentalValue )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR bstrValueString,
                       DWORD dwValue);
                   HRESULT ( STDMETHODCALLTYPE *GetExperimentalValue )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR bstrValueString,
                                __RPC__out DWORD *pdwValue);
                   HRESULT ( STDMETHODCALLTYPE *ResetAllExperimentalFlagsAndValues )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *GetNeedIEAutoLaunchFlag )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR bstrUrl,
                                __RPC__out VARIANT_BOOL *flag);
                   HRESULT ( STDMETHODCALLTYPE *SetNeedIEAutoLaunchFlag )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR bstrUrl,
                       VARIANT_BOOL flag);
                   HRESULT ( STDMETHODCALLTYPE *HasNeedIEAutoLaunchFlag )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR bstrUrl,
                                __RPC__out VARIANT_BOOL *exists);
                   HRESULT ( STDMETHODCALLTYPE *LaunchIE )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR bstrUrl,
                       VARIANT_BOOL automated);
                   HRESULT ( STDMETHODCALLTYPE *GetCVListData )(
            __RPC__in IShellUIHelper9 * This,
                                __RPC__deref_out_opt BSTR *pbstrResult);
                   HRESULT ( STDMETHODCALLTYPE *GetCVListLocalData )(
            __RPC__in IShellUIHelper9 * This,
                                __RPC__deref_out_opt BSTR *pbstrResult);
                   HRESULT ( STDMETHODCALLTYPE *GetEMIEListData )(
            __RPC__in IShellUIHelper9 * This,
                                __RPC__deref_out_opt BSTR *pbstrResult);
                   HRESULT ( STDMETHODCALLTYPE *GetEMIEListLocalData )(
            __RPC__in IShellUIHelper9 * This,
                                __RPC__deref_out_opt BSTR *pbstrResult);
                   HRESULT ( STDMETHODCALLTYPE *OpenFavoritesPane )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *OpenFavoritesSettings )(
            __RPC__in IShellUIHelper9 * This);
                   HRESULT ( STDMETHODCALLTYPE *LaunchInHVSI )(
            __RPC__in IShellUIHelper9 * This,
                       __RPC__in BSTR bstrUrl);
                   HRESULT ( STDMETHODCALLTYPE *GetOSSku )(
            __RPC__in IShellUIHelper9 * This,
                                __RPC__out DWORD *pdwResult);
        END_INTERFACE
    } IShellUIHelper9Vtbl;
    interface IShellUIHelper9
    {
        CONST_VTBL struct IShellUIHelper9Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ResetFirstBootMode(This) )
    ( (This)->lpVtbl -> ResetSafeMode(This) )
    ( (This)->lpVtbl -> RefreshOfflineDesktop(This) )
    ( (This)->lpVtbl -> AddFavorite(This,URL,Title) )
    ( (This)->lpVtbl -> AddChannel(This,URL) )
    ( (This)->lpVtbl -> AddDesktopComponent(This,URL,Type,Left,Top,Width,Height) )
    ( (This)->lpVtbl -> IsSubscribed(This,URL,pBool) )
    ( (This)->lpVtbl -> NavigateAndFind(This,URL,strQuery,varTargetFrame) )
    ( (This)->lpVtbl -> ImportExportFavorites(This,fImport,strImpExpPath) )
    ( (This)->lpVtbl -> AutoCompleteSaveForm(This,Form) )
    ( (This)->lpVtbl -> AutoScan(This,strSearch,strFailureUrl,pvarTargetFrame) )
    ( (This)->lpVtbl -> AutoCompleteAttach(This,Reserved) )
    ( (This)->lpVtbl -> ShowBrowserUI(This,bstrName,pvarIn,pvarOut) )
    ( (This)->lpVtbl -> AddSearchProvider(This,URL) )
    ( (This)->lpVtbl -> RunOnceShown(This) )
    ( (This)->lpVtbl -> SkipRunOnce(This) )
    ( (This)->lpVtbl -> CustomizeSettings(This,fSQM,fPhishing,bstrLocale) )
    ( (This)->lpVtbl -> SqmEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> PhishingEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> BrandImageUri(This,pbstrUri) )
    ( (This)->lpVtbl -> SkipTabsWelcome(This) )
    ( (This)->lpVtbl -> DiagnoseConnection(This) )
    ( (This)->lpVtbl -> CustomizeClearType(This,fSet) )
    ( (This)->lpVtbl -> IsSearchProviderInstalled(This,URL,pdwResult) )
    ( (This)->lpVtbl -> IsSearchMigrated(This,pfMigrated) )
    ( (This)->lpVtbl -> DefaultSearchProvider(This,pbstrName) )
    ( (This)->lpVtbl -> RunOnceRequiredSettingsComplete(This,fComplete) )
    ( (This)->lpVtbl -> RunOnceHasShown(This,pfShown) )
    ( (This)->lpVtbl -> SearchGuideUrl(This,pbstrUrl) )
    ( (This)->lpVtbl -> AddService(This,URL) )
    ( (This)->lpVtbl -> IsServiceInstalled(This,URL,Verb,pdwResult) )
    ( (This)->lpVtbl -> InPrivateFilteringEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> AddToFavoritesBar(This,URL,Title,Type) )
    ( (This)->lpVtbl -> BuildNewTabPage(This) )
    ( (This)->lpVtbl -> SetRecentlyClosedVisible(This,fVisible) )
    ( (This)->lpVtbl -> SetActivitiesVisible(This,fVisible) )
    ( (This)->lpVtbl -> ContentDiscoveryReset(This) )
    ( (This)->lpVtbl -> IsSuggestedSitesEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> EnableSuggestedSites(This,fEnable) )
    ( (This)->lpVtbl -> NavigateToSuggestedSites(This,bstrRelativeUrl) )
    ( (This)->lpVtbl -> ShowTabsHelp(This) )
    ( (This)->lpVtbl -> ShowInPrivateHelp(This) )
    ( (This)->lpVtbl -> msIsSiteMode(This,pfSiteMode) )
    ( (This)->lpVtbl -> msSiteModeShowThumbBar(This) )
    ( (This)->lpVtbl -> msSiteModeAddThumbBarButton(This,bstrIconURL,bstrTooltip,pvarButtonID) )
    ( (This)->lpVtbl -> msSiteModeUpdateThumbBarButton(This,ButtonID,fEnabled,fVisible) )
    ( (This)->lpVtbl -> msSiteModeSetIconOverlay(This,IconUrl,pvarDescription) )
    ( (This)->lpVtbl -> msSiteModeClearIconOverlay(This) )
    ( (This)->lpVtbl -> msAddSiteMode(This) )
    ( (This)->lpVtbl -> msSiteModeCreateJumpList(This,bstrHeader) )
    ( (This)->lpVtbl -> msSiteModeAddJumpListItem(This,bstrName,bstrActionUri,bstrIconUri,pvarWindowType) )
    ( (This)->lpVtbl -> msSiteModeClearJumpList(This) )
    ( (This)->lpVtbl -> msSiteModeShowJumpList(This) )
    ( (This)->lpVtbl -> msSiteModeAddButtonStyle(This,uiButtonID,bstrIconUrl,bstrTooltip,pvarStyleID) )
    ( (This)->lpVtbl -> msSiteModeShowButtonStyle(This,uiButtonID,uiStyleID) )
    ( (This)->lpVtbl -> msSiteModeActivate(This) )
    ( (This)->lpVtbl -> msIsSiteModeFirstRun(This,fPreserveState,puiFirstRun) )
    ( (This)->lpVtbl -> msAddTrackingProtectionList(This,URL,bstrFilterName) )
    ( (This)->lpVtbl -> msTrackingProtectionEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> msActiveXFilteringEnabled(This,pfEnabled) )
    ( (This)->lpVtbl -> msProvisionNetworks(This,bstrProvisioningXml,puiResult) )
    ( (This)->lpVtbl -> msReportSafeUrl(This) )
    ( (This)->lpVtbl -> msSiteModeRefreshBadge(This) )
    ( (This)->lpVtbl -> msSiteModeClearBadge(This) )
    ( (This)->lpVtbl -> msDiagnoseConnectionUILess(This) )
    ( (This)->lpVtbl -> msLaunchNetworkClientHelp(This) )
    ( (This)->lpVtbl -> msChangeDefaultBrowser(This,fChange) )
    ( (This)->lpVtbl -> msStopPeriodicTileUpdate(This) )
    ( (This)->lpVtbl -> msStartPeriodicTileUpdate(This,pollingUris,startTime,uiUpdateRecurrence) )
    ( (This)->lpVtbl -> msStartPeriodicTileUpdateBatch(This,pollingUris,startTime,uiUpdateRecurrence) )
    ( (This)->lpVtbl -> msClearTile(This) )
    ( (This)->lpVtbl -> msEnableTileNotificationQueue(This,fChange) )
    ( (This)->lpVtbl -> msPinnedSiteState(This,pvarSiteState) )
    ( (This)->lpVtbl -> msEnableTileNotificationQueueForSquare150x150(This,fChange) )
    ( (This)->lpVtbl -> msEnableTileNotificationQueueForWide310x150(This,fChange) )
    ( (This)->lpVtbl -> msEnableTileNotificationQueueForSquare310x310(This,fChange) )
    ( (This)->lpVtbl -> msScheduledTileNotification(This,bstrNotificationXml,bstrNotificationId,bstrNotificationTag,startTime,expirationTime) )
    ( (This)->lpVtbl -> msRemoveScheduledTileNotification(This,bstrNotificationId) )
    ( (This)->lpVtbl -> msStartPeriodicBadgeUpdate(This,pollingUri,startTime,uiUpdateRecurrence) )
    ( (This)->lpVtbl -> msStopPeriodicBadgeUpdate(This) )
    ( (This)->lpVtbl -> msLaunchInternetOptions(This) )
    ( (This)->lpVtbl -> SetExperimentalFlag(This,bstrFlagString,vfFlag) )
    ( (This)->lpVtbl -> GetExperimentalFlag(This,bstrFlagString,vfFlag) )
    ( (This)->lpVtbl -> SetExperimentalValue(This,bstrValueString,dwValue) )
    ( (This)->lpVtbl -> GetExperimentalValue(This,bstrValueString,pdwValue) )
    ( (This)->lpVtbl -> ResetAllExperimentalFlagsAndValues(This) )
    ( (This)->lpVtbl -> GetNeedIEAutoLaunchFlag(This,bstrUrl,flag) )
    ( (This)->lpVtbl -> SetNeedIEAutoLaunchFlag(This,bstrUrl,flag) )
    ( (This)->lpVtbl -> HasNeedIEAutoLaunchFlag(This,bstrUrl,exists) )
    ( (This)->lpVtbl -> LaunchIE(This,bstrUrl,automated) )
    ( (This)->lpVtbl -> GetCVListData(This,pbstrResult) )
    ( (This)->lpVtbl -> GetCVListLocalData(This,pbstrResult) )
    ( (This)->lpVtbl -> GetEMIEListData(This,pbstrResult) )
    ( (This)->lpVtbl -> GetEMIEListLocalData(This,pbstrResult) )
    ( (This)->lpVtbl -> OpenFavoritesPane(This) )
    ( (This)->lpVtbl -> OpenFavoritesSettings(This) )
    ( (This)->lpVtbl -> LaunchInHVSI(This,bstrUrl) )
    ( (This)->lpVtbl -> GetOSSku(This,pdwResult) )
EXTERN_C const CLSID CLSID_ShellUIHelper;
class DECLSPEC_UUID("64AB4BB7-111E-11d1-8F79-00C04FC2FBE1")
ShellUIHelper;
EXTERN_C const IID DIID_DShellNameSpaceEvents;
    typedef struct DShellNameSpaceEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in DShellNameSpaceEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in DShellNameSpaceEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in DShellNameSpaceEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in DShellNameSpaceEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in DShellNameSpaceEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in DShellNameSpaceEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            DShellNameSpaceEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } DShellNameSpaceEventsVtbl;
    interface DShellNameSpaceEvents
    {
        CONST_VTBL struct DShellNameSpaceEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_IShellFavoritesNameSpace;
    typedef struct IShellFavoritesNameSpaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellFavoritesNameSpace * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellFavoritesNameSpace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellFavoritesNameSpace * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellFavoritesNameSpace * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellFavoritesNameSpace * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellFavoritesNameSpace * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellFavoritesNameSpace * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *MoveSelectionUp )(
            __RPC__in IShellFavoritesNameSpace * This);
                               HRESULT ( STDMETHODCALLTYPE *MoveSelectionDown )(
            __RPC__in IShellFavoritesNameSpace * This);
                               HRESULT ( STDMETHODCALLTYPE *ResetSort )(
            __RPC__in IShellFavoritesNameSpace * This);
                               HRESULT ( STDMETHODCALLTYPE *NewFolder )(
            __RPC__in IShellFavoritesNameSpace * This);
                               HRESULT ( STDMETHODCALLTYPE *Synchronize )(
            __RPC__in IShellFavoritesNameSpace * This);
                               HRESULT ( STDMETHODCALLTYPE *Import )(
            __RPC__in IShellFavoritesNameSpace * This);
                               HRESULT ( STDMETHODCALLTYPE *Export )(
            __RPC__in IShellFavoritesNameSpace * This);
                               HRESULT ( STDMETHODCALLTYPE *InvokeContextMenuCommand )(
            __RPC__in IShellFavoritesNameSpace * This,
                       __RPC__in BSTR strCommand);
                               HRESULT ( STDMETHODCALLTYPE *MoveSelectionTo )(
            __RPC__in IShellFavoritesNameSpace * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubscriptionsEnabled )(
            __RPC__in IShellFavoritesNameSpace * This,
                                __RPC__out VARIANT_BOOL *pBool);
                               HRESULT ( STDMETHODCALLTYPE *CreateSubscriptionForSelection )(
            __RPC__in IShellFavoritesNameSpace * This,
                                __RPC__out VARIANT_BOOL *pBool);
                               HRESULT ( STDMETHODCALLTYPE *DeleteSubscriptionForSelection )(
            __RPC__in IShellFavoritesNameSpace * This,
                                __RPC__out VARIANT_BOOL *pBool);
                               HRESULT ( STDMETHODCALLTYPE *SetRoot )(
            __RPC__in IShellFavoritesNameSpace * This,
                       __RPC__in BSTR bstrFullPath);
        END_INTERFACE
    } IShellFavoritesNameSpaceVtbl;
    interface IShellFavoritesNameSpace
    {
        CONST_VTBL struct IShellFavoritesNameSpaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> MoveSelectionUp(This) )
    ( (This)->lpVtbl -> MoveSelectionDown(This) )
    ( (This)->lpVtbl -> ResetSort(This) )
    ( (This)->lpVtbl -> NewFolder(This) )
    ( (This)->lpVtbl -> Synchronize(This) )
    ( (This)->lpVtbl -> Import(This) )
    ( (This)->lpVtbl -> Export(This) )
    ( (This)->lpVtbl -> InvokeContextMenuCommand(This,strCommand) )
    ( (This)->lpVtbl -> MoveSelectionTo(This) )
    ( (This)->lpVtbl -> get_SubscriptionsEnabled(This,pBool) )
    ( (This)->lpVtbl -> CreateSubscriptionForSelection(This,pBool) )
    ( (This)->lpVtbl -> DeleteSubscriptionForSelection(This,pBool) )
    ( (This)->lpVtbl -> SetRoot(This,bstrFullPath) )
EXTERN_C const IID IID_IShellNameSpace;
    typedef struct IShellNameSpaceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IShellNameSpace * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IShellNameSpace * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IShellNameSpace * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IShellNameSpace * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IShellNameSpace * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IShellNameSpace * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IShellNameSpace * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *MoveSelectionUp )(
            __RPC__in IShellNameSpace * This);
                               HRESULT ( STDMETHODCALLTYPE *MoveSelectionDown )(
            __RPC__in IShellNameSpace * This);
                               HRESULT ( STDMETHODCALLTYPE *ResetSort )(
            __RPC__in IShellNameSpace * This);
                               HRESULT ( STDMETHODCALLTYPE *NewFolder )(
            __RPC__in IShellNameSpace * This);
                               HRESULT ( STDMETHODCALLTYPE *Synchronize )(
            __RPC__in IShellNameSpace * This);
                               HRESULT ( STDMETHODCALLTYPE *Import )(
            __RPC__in IShellNameSpace * This);
                               HRESULT ( STDMETHODCALLTYPE *Export )(
            __RPC__in IShellNameSpace * This);
                               HRESULT ( STDMETHODCALLTYPE *InvokeContextMenuCommand )(
            __RPC__in IShellNameSpace * This,
                       __RPC__in BSTR strCommand);
                               HRESULT ( STDMETHODCALLTYPE *MoveSelectionTo )(
            __RPC__in IShellNameSpace * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_SubscriptionsEnabled )(
            __RPC__in IShellNameSpace * This,
                                __RPC__out VARIANT_BOOL *pBool);
                               HRESULT ( STDMETHODCALLTYPE *CreateSubscriptionForSelection )(
            __RPC__in IShellNameSpace * This,
                                __RPC__out VARIANT_BOOL *pBool);
                               HRESULT ( STDMETHODCALLTYPE *DeleteSubscriptionForSelection )(
            __RPC__in IShellNameSpace * This,
                                __RPC__out VARIANT_BOOL *pBool);
                               HRESULT ( STDMETHODCALLTYPE *SetRoot )(
            __RPC__in IShellNameSpace * This,
                       __RPC__in BSTR bstrFullPath);
                                        HRESULT ( STDMETHODCALLTYPE *get_EnumOptions )(
            __RPC__in IShellNameSpace * This,
                                __RPC__out LONG *pgrfEnumFlags);
                                        HRESULT ( STDMETHODCALLTYPE *put_EnumOptions )(
            __RPC__in IShellNameSpace * This,
                       LONG lVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SelectedItem )(
            __RPC__in IShellNameSpace * This,
                                __RPC__deref_out_opt IDispatch **pItem);
                                        HRESULT ( STDMETHODCALLTYPE *put_SelectedItem )(
            __RPC__in IShellNameSpace * This,
                       __RPC__in_opt IDispatch *pItem);
                                        HRESULT ( STDMETHODCALLTYPE *get_Root )(
            __RPC__in IShellNameSpace * This,
                                __RPC__out VARIANT *pvar);
                                        HRESULT ( STDMETHODCALLTYPE *put_Root )(
            __RPC__in IShellNameSpace * This,
                       VARIANT var);
                                        HRESULT ( STDMETHODCALLTYPE *get_Depth )(
            __RPC__in IShellNameSpace * This,
                                __RPC__out int *piDepth);
                                        HRESULT ( STDMETHODCALLTYPE *put_Depth )(
            __RPC__in IShellNameSpace * This,
                       int iDepth);
                                        HRESULT ( STDMETHODCALLTYPE *get_Mode )(
            __RPC__in IShellNameSpace * This,
                                __RPC__out UINT *puMode);
                                        HRESULT ( STDMETHODCALLTYPE *put_Mode )(
            __RPC__in IShellNameSpace * This,
                       UINT uMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_Flags )(
            __RPC__in IShellNameSpace * This,
                                __RPC__out DWORD *pdwFlags);
                                        HRESULT ( STDMETHODCALLTYPE *put_Flags )(
            __RPC__in IShellNameSpace * This,
                       DWORD dwFlags);
                                        HRESULT ( STDMETHODCALLTYPE *put_TVFlags )(
            __RPC__in IShellNameSpace * This,
                       DWORD dwFlags);
                                        HRESULT ( STDMETHODCALLTYPE *get_TVFlags )(
            __RPC__in IShellNameSpace * This,
                                __RPC__out DWORD *dwFlags);
                                        HRESULT ( STDMETHODCALLTYPE *get_Columns )(
            __RPC__in IShellNameSpace * This,
                                __RPC__deref_out_opt BSTR *bstrColumns);
                                        HRESULT ( STDMETHODCALLTYPE *put_Columns )(
            __RPC__in IShellNameSpace * This,
                       __RPC__in BSTR bstrColumns);
                                        HRESULT ( STDMETHODCALLTYPE *get_CountViewTypes )(
            __RPC__in IShellNameSpace * This,
                                __RPC__out int *piTypes);
                               HRESULT ( STDMETHODCALLTYPE *SetViewType )(
            __RPC__in IShellNameSpace * This,
                       int iType);
                               HRESULT ( STDMETHODCALLTYPE *SelectedItems )(
            __RPC__in IShellNameSpace * This,
                                __RPC__deref_out_opt IDispatch **ppid);
                               HRESULT ( STDMETHODCALLTYPE *Expand )(
            __RPC__in IShellNameSpace * This,
                       VARIANT var,
            int iDepth);
                               HRESULT ( STDMETHODCALLTYPE *UnselectAll )(
            __RPC__in IShellNameSpace * This);
        END_INTERFACE
    } IShellNameSpaceVtbl;
    interface IShellNameSpace
    {
        CONST_VTBL struct IShellNameSpaceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> MoveSelectionUp(This) )
    ( (This)->lpVtbl -> MoveSelectionDown(This) )
    ( (This)->lpVtbl -> ResetSort(This) )
    ( (This)->lpVtbl -> NewFolder(This) )
    ( (This)->lpVtbl -> Synchronize(This) )
    ( (This)->lpVtbl -> Import(This) )
    ( (This)->lpVtbl -> Export(This) )
    ( (This)->lpVtbl -> InvokeContextMenuCommand(This,strCommand) )
    ( (This)->lpVtbl -> MoveSelectionTo(This) )
    ( (This)->lpVtbl -> get_SubscriptionsEnabled(This,pBool) )
    ( (This)->lpVtbl -> CreateSubscriptionForSelection(This,pBool) )
    ( (This)->lpVtbl -> DeleteSubscriptionForSelection(This,pBool) )
    ( (This)->lpVtbl -> SetRoot(This,bstrFullPath) )
    ( (This)->lpVtbl -> get_EnumOptions(This,pgrfEnumFlags) )
    ( (This)->lpVtbl -> put_EnumOptions(This,lVal) )
    ( (This)->lpVtbl -> get_SelectedItem(This,pItem) )
    ( (This)->lpVtbl -> put_SelectedItem(This,pItem) )
    ( (This)->lpVtbl -> get_Root(This,pvar) )
    ( (This)->lpVtbl -> put_Root(This,var) )
    ( (This)->lpVtbl -> get_Depth(This,piDepth) )
    ( (This)->lpVtbl -> put_Depth(This,iDepth) )
    ( (This)->lpVtbl -> get_Mode(This,puMode) )
    ( (This)->lpVtbl -> put_Mode(This,uMode) )
    ( (This)->lpVtbl -> get_Flags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_Flags(This,dwFlags) )
    ( (This)->lpVtbl -> put_TVFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_TVFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_Columns(This,bstrColumns) )
    ( (This)->lpVtbl -> put_Columns(This,bstrColumns) )
    ( (This)->lpVtbl -> get_CountViewTypes(This,piTypes) )
    ( (This)->lpVtbl -> SetViewType(This,iType) )
    ( (This)->lpVtbl -> SelectedItems(This,ppid) )
    ( (This)->lpVtbl -> Expand(This,var,iDepth) )
    ( (This)->lpVtbl -> UnselectAll(This) )
EXTERN_C const CLSID CLSID_ShellNameSpace;
class DECLSPEC_UUID("55136805-B2DE-11D1-B9F2-00A0C98BC547")
ShellNameSpace;
EXTERN_C const IID IID_IScriptErrorList;
    typedef struct IScriptErrorListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IScriptErrorList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IScriptErrorList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IScriptErrorList * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IScriptErrorList * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IScriptErrorList * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IScriptErrorList * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IScriptErrorList * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *advanceError )(
            __RPC__in IScriptErrorList * This);
                   HRESULT ( STDMETHODCALLTYPE *retreatError )(
            __RPC__in IScriptErrorList * This);
                   HRESULT ( STDMETHODCALLTYPE *canAdvanceError )(
            __RPC__in IScriptErrorList * This,
                                __RPC__out BOOL *pfCanAdvance);
                   HRESULT ( STDMETHODCALLTYPE *canRetreatError )(
            __RPC__in IScriptErrorList * This,
                                __RPC__out BOOL *pfCanRetreat);
                   HRESULT ( STDMETHODCALLTYPE *getErrorLine )(
            __RPC__in IScriptErrorList * This,
                                __RPC__out LONG *plLine);
                   HRESULT ( STDMETHODCALLTYPE *getErrorChar )(
            __RPC__in IScriptErrorList * This,
                                __RPC__out LONG *plChar);
                   HRESULT ( STDMETHODCALLTYPE *getErrorCode )(
            __RPC__in IScriptErrorList * This,
                                __RPC__out LONG *plCode);
                   HRESULT ( STDMETHODCALLTYPE *getErrorMsg )(
            __RPC__in IScriptErrorList * This,
                                __RPC__deref_out_opt BSTR *pstr);
                   HRESULT ( STDMETHODCALLTYPE *getErrorUrl )(
            __RPC__in IScriptErrorList * This,
                                __RPC__deref_out_opt BSTR *pstr);
                   HRESULT ( STDMETHODCALLTYPE *getAlwaysShowLockState )(
            __RPC__in IScriptErrorList * This,
                                __RPC__out BOOL *pfAlwaysShowLocked);
                   HRESULT ( STDMETHODCALLTYPE *getDetailsPaneOpen )(
            __RPC__in IScriptErrorList * This,
                                __RPC__out BOOL *pfDetailsPaneOpen);
                   HRESULT ( STDMETHODCALLTYPE *setDetailsPaneOpen )(
            __RPC__in IScriptErrorList * This,
            BOOL fDetailsPaneOpen);
                   HRESULT ( STDMETHODCALLTYPE *getPerErrorDisplay )(
            __RPC__in IScriptErrorList * This,
                                __RPC__out BOOL *pfPerErrorDisplay);
                   HRESULT ( STDMETHODCALLTYPE *setPerErrorDisplay )(
            __RPC__in IScriptErrorList * This,
            BOOL fPerErrorDisplay);
        END_INTERFACE
    } IScriptErrorListVtbl;
    interface IScriptErrorList
    {
        CONST_VTBL struct IScriptErrorListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> advanceError(This) )
    ( (This)->lpVtbl -> retreatError(This) )
    ( (This)->lpVtbl -> canAdvanceError(This,pfCanAdvance) )
    ( (This)->lpVtbl -> canRetreatError(This,pfCanRetreat) )
    ( (This)->lpVtbl -> getErrorLine(This,plLine) )
    ( (This)->lpVtbl -> getErrorChar(This,plChar) )
    ( (This)->lpVtbl -> getErrorCode(This,plCode) )
    ( (This)->lpVtbl -> getErrorMsg(This,pstr) )
    ( (This)->lpVtbl -> getErrorUrl(This,pstr) )
    ( (This)->lpVtbl -> getAlwaysShowLockState(This,pfAlwaysShowLocked) )
    ( (This)->lpVtbl -> getDetailsPaneOpen(This,pfDetailsPaneOpen) )
    ( (This)->lpVtbl -> setDetailsPaneOpen(This,fDetailsPaneOpen) )
    ( (This)->lpVtbl -> getPerErrorDisplay(This,pfPerErrorDisplay) )
    ( (This)->lpVtbl -> setPerErrorDisplay(This,fPerErrorDisplay) )
EXTERN_C const CLSID CLSID_CScriptErrorList;
class DECLSPEC_UUID("EFD01300-160F-11d2-BB2E-00805FF7EFCA")
CScriptErrorList;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_exdisp_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_exdisp_0000_0001_v0_0_s_ifspec;
}
