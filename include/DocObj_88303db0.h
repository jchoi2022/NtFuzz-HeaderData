#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IOleDocument IOleDocument;
typedef interface IOleDocumentSite IOleDocumentSite;
typedef interface IOleDocumentView IOleDocumentView;
typedef interface IEnumOleDocumentViews IEnumOleDocumentViews;
typedef interface IContinueCallback IContinueCallback;
typedef interface IPrint IPrint;
typedef interface IOleCommandTarget IOleCommandTarget;
typedef interface IZoomEvents IZoomEvents;
typedef interface IProtectFocus IProtectFocus;
typedef interface IProtectedModeMenuServices IProtectedModeMenuServices;
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib,"uuid.lib")
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0000_v0_0_s_ifspec;
typedef __RPC_unique_pointer IOleDocument *LPOLEDOCUMENT;
typedef
enum __MIDL_IOleDocument_0001
    {
        DOCMISC_CANCREATEMULTIPLEVIEWS = 1,
        DOCMISC_SUPPORTCOMPLEXRECTANGLES = 2,
        DOCMISC_CANTOPENEDIT = 4,
        DOCMISC_NOFILESUPPORT = 8
    } DOCMISC;
EXTERN_C const IID IID_IOleDocument;
    typedef struct IOleDocumentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleDocument * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleDocument * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleDocument * This);
        HRESULT ( STDMETHODCALLTYPE *CreateView )(
            __RPC__in IOleDocument * This,
                               __RPC__in_opt IOleInPlaceSite *pIPSite,
                               __RPC__in_opt IStream *pstm,
                       DWORD dwReserved,
                        __RPC__deref_out_opt IOleDocumentView **ppView);
        HRESULT ( STDMETHODCALLTYPE *GetDocMiscStatus )(
            __RPC__in IOleDocument * This,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *EnumViews )(
            __RPC__in IOleDocument * This,
                        __RPC__deref_out_opt IEnumOleDocumentViews **ppEnum,
                        __RPC__deref_out_opt IOleDocumentView **ppView);
        END_INTERFACE
    } IOleDocumentVtbl;
    interface IOleDocument
    {
        CONST_VTBL struct IOleDocumentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateView(This,pIPSite,pstm,dwReserved,ppView) )
    ( (This)->lpVtbl -> GetDocMiscStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> EnumViews(This,ppEnum,ppView) )
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0001_v0_0_s_ifspec;
typedef __RPC_unique_pointer IOleDocumentSite *LPOLEDOCUMENTSITE;
EXTERN_C const IID IID_IOleDocumentSite;
    typedef struct IOleDocumentSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleDocumentSite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleDocumentSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleDocumentSite * This);
        HRESULT ( STDMETHODCALLTYPE *ActivateMe )(
            __RPC__in IOleDocumentSite * This,
                       __RPC__in_opt IOleDocumentView *pViewToActivate);
        END_INTERFACE
    } IOleDocumentSiteVtbl;
    interface IOleDocumentSite
    {
        CONST_VTBL struct IOleDocumentSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ActivateMe(This,pViewToActivate) )
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0002_v0_0_s_ifspec;
typedef __RPC_unique_pointer IOleDocumentView *LPOLEDOCUMENTVIEW;
EXTERN_C const IID IID_IOleDocumentView;
    typedef struct IOleDocumentViewVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleDocumentView * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleDocumentView * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleDocumentView * This);
        HRESULT ( STDMETHODCALLTYPE *SetInPlaceSite )(
            __RPC__in IOleDocumentView * This,
                               __RPC__in_opt IOleInPlaceSite *pIPSite);
        HRESULT ( STDMETHODCALLTYPE *GetInPlaceSite )(
            __RPC__in IOleDocumentView * This,
                        __RPC__deref_out_opt IOleInPlaceSite **ppIPSite);
        HRESULT ( STDMETHODCALLTYPE *GetDocument )(
            __RPC__in IOleDocumentView * This,
                        __RPC__deref_out_opt IUnknown **ppunk);
                           HRESULT ( STDMETHODCALLTYPE *SetRect )(
            __RPC__in IOleDocumentView * This,
                       __RPC__in LPRECT prcView);
        HRESULT ( STDMETHODCALLTYPE *GetRect )(
            __RPC__in IOleDocumentView * This,
                        __RPC__out LPRECT prcView);
                           HRESULT ( STDMETHODCALLTYPE *SetRectComplex )(
            __RPC__in IOleDocumentView * This,
                               __RPC__in_opt LPRECT prcView,
                               __RPC__in_opt LPRECT prcHScroll,
                               __RPC__in_opt LPRECT prcVScroll,
                               __RPC__in_opt LPRECT prcSizeBox);
        HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in IOleDocumentView * This,
                       BOOL fShow);
        HRESULT ( STDMETHODCALLTYPE *UIActivate )(
            __RPC__in IOleDocumentView * This,
                       BOOL fUIActivate);
        HRESULT ( STDMETHODCALLTYPE *Open )(
            __RPC__in IOleDocumentView * This);
        HRESULT ( STDMETHODCALLTYPE *CloseView )(
            __RPC__in IOleDocumentView * This,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *SaveViewState )(
            __RPC__in IOleDocumentView * This,
                       __RPC__in_opt LPSTREAM pstm);
        HRESULT ( STDMETHODCALLTYPE *ApplyViewState )(
            __RPC__in IOleDocumentView * This,
                       __RPC__in_opt LPSTREAM pstm);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IOleDocumentView * This,
                       __RPC__in_opt IOleInPlaceSite *pIPSiteNew,
                        __RPC__deref_out_opt IOleDocumentView **ppViewNew);
        END_INTERFACE
    } IOleDocumentViewVtbl;
    interface IOleDocumentView
    {
        CONST_VTBL struct IOleDocumentViewVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetInPlaceSite(This,pIPSite) )
    ( (This)->lpVtbl -> GetInPlaceSite(This,ppIPSite) )
    ( (This)->lpVtbl -> GetDocument(This,ppunk) )
    ( (This)->lpVtbl -> SetRect(This,prcView) )
    ( (This)->lpVtbl -> GetRect(This,prcView) )
    ( (This)->lpVtbl -> SetRectComplex(This,prcView,prcHScroll,prcVScroll,prcSizeBox) )
    ( (This)->lpVtbl -> Show(This,fShow) )
    ( (This)->lpVtbl -> UIActivate(This,fUIActivate) )
    ( (This)->lpVtbl -> Open(This) )
    ( (This)->lpVtbl -> CloseView(This,dwReserved) )
    ( (This)->lpVtbl -> SaveViewState(This,pstm) )
    ( (This)->lpVtbl -> ApplyViewState(This,pstm) )
    ( (This)->lpVtbl -> Clone(This,pIPSiteNew,ppViewNew) )
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0003_v0_0_s_ifspec;
typedef __RPC_unique_pointer IEnumOleDocumentViews *LPENUMOLEDOCUMENTVIEWS;
EXTERN_C const IID IID_IEnumOleDocumentViews;
    typedef struct IEnumOleDocumentViewsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumOleDocumentViews * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumOleDocumentViews * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumOleDocumentViews * This);
                      HRESULT ( __stdcall *Next )(
            IEnumOleDocumentViews * This,
                       ULONG cViews,
                        IOleDocumentView **rgpView,
                        ULONG *pcFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumOleDocumentViews * This,
                       ULONG cViews);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumOleDocumentViews * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumOleDocumentViews * This,
                        __RPC__deref_out_opt IEnumOleDocumentViews **ppEnum);
        END_INTERFACE
    } IEnumOleDocumentViewsVtbl;
    interface IEnumOleDocumentViews
    {
        CONST_VTBL struct IEnumOleDocumentViewsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,cViews,rgpView,pcFetched) )
    ( (This)->lpVtbl -> Skip(This,cViews) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppEnum) )
                HRESULT __stdcall IEnumOleDocumentViews_RemoteNext_Proxy(
    __RPC__in IEnumOleDocumentViews * This,
               ULONG cViews,
                                    __RPC__out_ecount_part(cViews, *pcFetched) IOleDocumentView **rgpView,
                __RPC__out ULONG *pcFetched);
void __RPC_STUB IEnumOleDocumentViews_RemoteNext_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0004_v0_0_s_ifspec;
typedef __RPC_unique_pointer IContinueCallback *LPCONTINUECALLBACK;
EXTERN_C const IID IID_IContinueCallback;
    typedef struct IContinueCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IContinueCallback * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IContinueCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IContinueCallback * This);
        HRESULT ( STDMETHODCALLTYPE *FContinue )(
            __RPC__in IContinueCallback * This);
        HRESULT ( STDMETHODCALLTYPE *FContinuePrinting )(
            __RPC__in IContinueCallback * This,
                       LONG nCntPrinted,
                       LONG nCurPage,
                               __RPC__in_opt wchar_t *pwszPrintStatus);
        END_INTERFACE
    } IContinueCallbackVtbl;
    interface IContinueCallback
    {
        CONST_VTBL struct IContinueCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FContinue(This) )
    ( (This)->lpVtbl -> FContinuePrinting(This,nCntPrinted,nCurPage,pwszPrintStatus) )
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0005_v0_0_s_ifspec;
typedef __RPC_unique_pointer IPrint *LPPRINT;
typedef
enum __MIDL_IPrint_0001
    {
        PRINTFLAG_MAYBOTHERUSER = 1,
        PRINTFLAG_PROMPTUSER = 2,
        PRINTFLAG_USERMAYCHANGEPRINTER = 4,
        PRINTFLAG_RECOMPOSETODEVICE = 8,
        PRINTFLAG_DONTACTUALLYPRINT = 16,
        PRINTFLAG_FORCEPROPERTIES = 32,
        PRINTFLAG_PRINTTOFILE = 64
    } PRINTFLAG;
typedef struct tagPAGERANGE
    {
    LONG nFromPage;
    LONG nToPage;
    } PAGERANGE;
typedef struct tagPAGESET
    {
    ULONG cbStruct;
    BOOL fOddPages;
    BOOL fEvenPages;
    ULONG cPageRange;
                    PAGERANGE rgPages[ 1 ];
    } PAGESET;
EXTERN_C const IID IID_IPrint;
    typedef struct IPrintVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IPrint * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IPrint * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IPrint * This);
        HRESULT ( STDMETHODCALLTYPE *SetInitialPageNum )(
            __RPC__in IPrint * This,
                       LONG nFirstPage);
        HRESULT ( STDMETHODCALLTYPE *GetPageInfo )(
            __RPC__in IPrint * This,
                        __RPC__out LONG *pnFirstPage,
                        __RPC__out LONG *pcPages);
                      HRESULT ( __stdcall *Print )(
            IPrint * This,
                       DWORD grfFlags,
                            DVTARGETDEVICE **pptd,
                            PAGESET **ppPageSet,
                                    STGMEDIUM *pstgmOptions,
                       IContinueCallback *pcallback,
                       LONG nFirstPage,
                        LONG *pcPagesPrinted,
                        LONG *pnLastPage);
        END_INTERFACE
    } IPrintVtbl;
    interface IPrint
    {
        CONST_VTBL struct IPrintVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetInitialPageNum(This,nFirstPage) )
    ( (This)->lpVtbl -> GetPageInfo(This,pnFirstPage,pcPages) )
    ( (This)->lpVtbl -> Print(This,grfFlags,pptd,ppPageSet,pstgmOptions,pcallback,nFirstPage,pcPagesPrinted,pnLastPage) )
                HRESULT __stdcall IPrint_RemotePrint_Proxy(
    __RPC__in IPrint * This,
               DWORD grfFlags,
                    __RPC__deref_inout_opt DVTARGETDEVICE **pptd,
                    __RPC__deref_inout_opt PAGESET **pppageset,
                            __RPC__inout_opt RemSTGMEDIUM *pstgmOptions,
               __RPC__in_opt IContinueCallback *pcallback,
               LONG nFirstPage,
                __RPC__out LONG *pcPagesPrinted,
                __RPC__out LONG *pnLastPage);
void __RPC_STUB IPrint_RemotePrint_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0006_v0_0_s_ifspec;
typedef __RPC_unique_pointer IOleCommandTarget *LPOLECOMMANDTARGET;
typedef
enum OLECMDF
    {
        OLECMDF_SUPPORTED = 0x1,
        OLECMDF_ENABLED = 0x2,
        OLECMDF_LATCHED = 0x4,
        OLECMDF_NINCHED = 0x8,
        OLECMDF_INVISIBLE = 0x10,
        OLECMDF_DEFHIDEONCTXTMENU = 0x20
    } OLECMDF;
typedef struct _tagOLECMD
    {
    ULONG cmdID;
    DWORD cmdf;
    } OLECMD;
typedef struct _tagOLECMDTEXT
    {
    DWORD cmdtextf;
    ULONG cwActual;
    ULONG cwBuf;
                    wchar_t rgwz[ 1 ];
    } OLECMDTEXT;
typedef
enum OLECMDTEXTF
    {
        OLECMDTEXTF_NONE = 0,
        OLECMDTEXTF_NAME = 1,
        OLECMDTEXTF_STATUS = 2
    } OLECMDTEXTF;
typedef
enum OLECMDEXECOPT
    {
        OLECMDEXECOPT_DODEFAULT = 0,
        OLECMDEXECOPT_PROMPTUSER = 1,
        OLECMDEXECOPT_DONTPROMPTUSER = 2,
        OLECMDEXECOPT_SHOWHELP = 3
    } OLECMDEXECOPT;
typedef
enum OLECMDID
    {
        OLECMDID_OPEN = 1,
        OLECMDID_NEW = 2,
        OLECMDID_SAVE = 3,
        OLECMDID_SAVEAS = 4,
        OLECMDID_SAVECOPYAS = 5,
        OLECMDID_PRINT = 6,
        OLECMDID_PRINTPREVIEW = 7,
        OLECMDID_PAGESETUP = 8,
        OLECMDID_SPELL = 9,
        OLECMDID_PROPERTIES = 10,
        OLECMDID_CUT = 11,
        OLECMDID_COPY = 12,
        OLECMDID_PASTE = 13,
        OLECMDID_PASTESPECIAL = 14,
        OLECMDID_UNDO = 15,
        OLECMDID_REDO = 16,
        OLECMDID_SELECTALL = 17,
        OLECMDID_CLEARSELECTION = 18,
        OLECMDID_ZOOM = 19,
        OLECMDID_GETZOOMRANGE = 20,
        OLECMDID_UPDATECOMMANDS = 21,
        OLECMDID_REFRESH = 22,
        OLECMDID_STOP = 23,
        OLECMDID_HIDETOOLBARS = 24,
        OLECMDID_SETPROGRESSMAX = 25,
        OLECMDID_SETPROGRESSPOS = 26,
        OLECMDID_SETPROGRESSTEXT = 27,
        OLECMDID_SETTITLE = 28,
        OLECMDID_SETDOWNLOADSTATE = 29,
        OLECMDID_STOPDOWNLOAD = 30,
        OLECMDID_ONTOOLBARACTIVATED = 31,
        OLECMDID_FIND = 32,
        OLECMDID_DELETE = 33,
        OLECMDID_HTTPEQUIV = 34,
        OLECMDID_HTTPEQUIV_DONE = 35,
        OLECMDID_ENABLE_INTERACTION = 36,
        OLECMDID_ONUNLOAD = 37,
        OLECMDID_PROPERTYBAG2 = 38,
        OLECMDID_PREREFRESH = 39,
        OLECMDID_SHOWSCRIPTERROR = 40,
        OLECMDID_SHOWMESSAGE = 41,
        OLECMDID_SHOWFIND = 42,
        OLECMDID_SHOWPAGESETUP = 43,
        OLECMDID_SHOWPRINT = 44,
        OLECMDID_CLOSE = 45,
        OLECMDID_ALLOWUILESSSAVEAS = 46,
        OLECMDID_DONTDOWNLOADCSS = 47,
        OLECMDID_UPDATEPAGESTATUS = 48,
        OLECMDID_PRINT2 = 49,
        OLECMDID_PRINTPREVIEW2 = 50,
        OLECMDID_SETPRINTTEMPLATE = 51,
        OLECMDID_GETPRINTTEMPLATE = 52,
        OLECMDID_PAGEACTIONBLOCKED = 55,
        OLECMDID_PAGEACTIONUIQUERY = 56,
        OLECMDID_FOCUSVIEWCONTROLS = 57,
        OLECMDID_FOCUSVIEWCONTROLSQUERY = 58,
        OLECMDID_SHOWPAGEACTIONMENU = 59,
        OLECMDID_ADDTRAVELENTRY = 60,
        OLECMDID_UPDATETRAVELENTRY = 61,
        OLECMDID_UPDATEBACKFORWARDSTATE = 62,
        OLECMDID_OPTICAL_ZOOM = 63,
        OLECMDID_OPTICAL_GETZOOMRANGE = 64,
        OLECMDID_WINDOWSTATECHANGED = 65,
        OLECMDID_ACTIVEXINSTALLSCOPE = 66,
        OLECMDID_UPDATETRAVELENTRY_DATARECOVERY = 67,
        OLECMDID_SHOWTASKDLG = 68,
        OLECMDID_POPSTATEEVENT = 69,
        OLECMDID_VIEWPORT_MODE = 70,
        OLECMDID_LAYOUT_VIEWPORT_WIDTH = 71,
        OLECMDID_VISUAL_VIEWPORT_EXCLUDE_BOTTOM = 72,
        OLECMDID_USER_OPTICAL_ZOOM = 73,
        OLECMDID_PAGEAVAILABLE = 74,
        OLECMDID_GETUSERSCALABLE = 75,
        OLECMDID_UPDATE_CARET = 76,
        OLECMDID_ENABLE_VISIBILITY = 77,
        OLECMDID_MEDIA_PLAYBACK = 78,
        OLECMDID_SETFAVICON = 79,
        OLECMDID_SET_HOST_FULLSCREENMODE = 80,
        OLECMDID_EXITFULLSCREEN = 81,
        OLECMDID_SCROLLCOMPLETE = 82,
        OLECMDID_ONBEFOREUNLOAD = 83,
        OLECMDID_SHOWMESSAGE_BLOCKABLE = 84,
        OLECMDID_SHOWTASKDLG_BLOCKABLE = 85
    } OLECMDID;
typedef
enum MEDIAPLAYBACK_STATE
    {
        MEDIAPLAYBACK_RESUME = 0,
        MEDIAPLAYBACK_PAUSE = 1,
        MEDIAPLAYBACK_PAUSE_AND_SUSPEND = 2,
        MEDIAPLAYBACK_RESUME_FROM_SUSPEND = 3
    } MEDIAPLAYBACK_STATE;
typedef
enum IGNOREMIME
    {
        IGNOREMIME_PROMPT = 0x1,
        IGNOREMIME_TEXT = 0x2
    } IGNOREMIME;
typedef
enum WPCSETTING
    {
        WPCSETTING_LOGGING_ENABLED = 0x1,
        WPCSETTING_FILEDOWNLOAD_BLOCKED = 0x2
    } WPCSETTING;
EXTERN_C const IID IID_IOleCommandTarget;
    typedef struct IOleCommandTargetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOleCommandTarget * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOleCommandTarget * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOleCommandTarget * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryStatus )(
            __RPC__in IOleCommandTarget * This,
                               __RPC__in_opt const GUID *pguidCmdGroup,
                       ULONG cCmds,
                                     __RPC__inout_ecount_full(cCmds) OLECMD prgCmds[ ],
                                    __RPC__inout_opt OLECMDTEXT *pCmdText);
        HRESULT ( STDMETHODCALLTYPE *Exec )(
            __RPC__in IOleCommandTarget * This,
                               __RPC__in_opt const GUID *pguidCmdGroup,
                       DWORD nCmdID,
                       DWORD nCmdexecopt,
                               __RPC__in_opt VARIANT *pvaIn,
                                    __RPC__inout_opt VARIANT *pvaOut);
        END_INTERFACE
    } IOleCommandTargetVtbl;
    interface IOleCommandTarget
    {
        CONST_VTBL struct IOleCommandTargetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryStatus(This,pguidCmdGroup,cCmds,prgCmds,pCmdText) )
    ( (This)->lpVtbl -> Exec(This,pguidCmdGroup,nCmdID,nCmdexecopt,pvaIn,pvaOut) )
typedef enum
{
      OLECMDIDF_REFRESH_NORMAL = 0,
      OLECMDIDF_REFRESH_IFEXPIRED = 1,
      OLECMDIDF_REFRESH_CONTINUE = 2,
      OLECMDIDF_REFRESH_COMPLETELY = 3,
      OLECMDIDF_REFRESH_NO_CACHE = 4,
      OLECMDIDF_REFRESH_RELOAD = 5,
      OLECMDIDF_REFRESH_LEVELMASK = 0x00FF,
      OLECMDIDF_REFRESH_CLEARUSERINPUT = 0x1000,
      OLECMDIDF_REFRESH_PROMPTIFOFFLINE = 0x2000,
      OLECMDIDF_REFRESH_THROUGHSCRIPT = 0x4000,
      OLECMDIDF_REFRESH_SKIPBEFOREUNLOADEVENT = 0x8000,
      OLECMDIDF_REFRESH_PAGEACTION_ACTIVEXINSTALL = 0x00010000,
      OLECMDIDF_REFRESH_PAGEACTION_FILEDOWNLOAD = 0x00020000,
      OLECMDIDF_REFRESH_PAGEACTION_LOCALMACHINE = 0x00040000,
      OLECMDIDF_REFRESH_PAGEACTION_POPUPWINDOW = 0x00080000,
      OLECMDIDF_REFRESH_PAGEACTION_PROTLOCKDOWNLOCALMACHINE = 0x00100000,
      OLECMDIDF_REFRESH_PAGEACTION_PROTLOCKDOWNTRUSTED = 0x00200000,
      OLECMDIDF_REFRESH_PAGEACTION_PROTLOCKDOWNINTRANET = 0x00400000,
      OLECMDIDF_REFRESH_PAGEACTION_PROTLOCKDOWNINTERNET = 0x00800000,
      OLECMDIDF_REFRESH_PAGEACTION_PROTLOCKDOWNRESTRICTED = 0x01000000,
      OLECMDIDF_REFRESH_PAGEACTION_MIXEDCONTENT = 0x02000000,
      OLECMDIDF_REFRESH_PAGEACTION_INVALID_CERT = 0x04000000,
      OLECMDIDF_REFRESH_PAGEACTION_ALLOW_VERSION = 0x08000000,
} OLECMDID_REFRESHFLAG;
typedef enum
{
      OLECMDIDF_PAGEACTION_FILEDOWNLOAD = 0x00000001,
      OLECMDIDF_PAGEACTION_ACTIVEXINSTALL = 0x00000002,
      OLECMDIDF_PAGEACTION_ACTIVEXTRUSTFAIL = 0x00000004,
      OLECMDIDF_PAGEACTION_ACTIVEXUSERDISABLE = 0x00000008,
      OLECMDIDF_PAGEACTION_ACTIVEXDISALLOW = 0x00000010,
      OLECMDIDF_PAGEACTION_ACTIVEXUNSAFE = 0x00000020,
      OLECMDIDF_PAGEACTION_POPUPWINDOW = 0x00000040,
      OLECMDIDF_PAGEACTION_LOCALMACHINE = 0x00000080,
      OLECMDIDF_PAGEACTION_MIMETEXTPLAIN = 0x00000100,
      OLECMDIDF_PAGEACTION_SCRIPTNAVIGATE = 0x00000200,
      OLECMDIDF_PAGEACTION_SCRIPTNAVIGATE_ACTIVEXINSTALL = 0x00000200,
      OLECMDIDF_PAGEACTION_PROTLOCKDOWNLOCALMACHINE = 0x00000400,
      OLECMDIDF_PAGEACTION_PROTLOCKDOWNTRUSTED = 0x00000800,
      OLECMDIDF_PAGEACTION_PROTLOCKDOWNINTRANET = 0x00001000,
      OLECMDIDF_PAGEACTION_PROTLOCKDOWNINTERNET = 0x00002000,
      OLECMDIDF_PAGEACTION_PROTLOCKDOWNRESTRICTED = 0x00004000,
      OLECMDIDF_PAGEACTION_PROTLOCKDOWNDENY = 0x00008000,
      OLECMDIDF_PAGEACTION_POPUPALLOWED = 0x00010000,
      OLECMDIDF_PAGEACTION_SCRIPTPROMPT = 0x00020000,
      OLECMDIDF_PAGEACTION_ACTIVEXUSERAPPROVAL = 0x00040000,
      OLECMDIDF_PAGEACTION_MIXEDCONTENT = 0x00080000,
      OLECMDIDF_PAGEACTION_INVALID_CERT = 0x00100000,
      OLECMDIDF_PAGEACTION_INTRANETZONEREQUEST = 0x00200000,
      OLECMDIDF_PAGEACTION_XSSFILTERED = 0x00400000,
      OLECMDIDF_PAGEACTION_SPOOFABLEIDNHOST = 0x00800000,
      OLECMDIDF_PAGEACTION_ACTIVEX_EPM_INCOMPATIBLE = 0x01000000,
      OLECMDIDF_PAGEACTION_SCRIPTNAVIGATE_ACTIVEXUSERAPPROVAL = 0x02000000,
      OLECMDIDF_PAGEACTION_WPCBLOCKED = 0x04000000,
      OLECMDIDF_PAGEACTION_WPCBLOCKED_ACTIVEX = 0x08000000,
      OLECMDIDF_PAGEACTION_EXTENSION_COMPAT_BLOCKED = 0x10000000,
      OLECMDIDF_PAGEACTION_NORESETACTIVEX = 0x20000000,
      OLECMDIDF_PAGEACTION_GENERIC_STATE = 0x40000000,
      OLECMDIDF_PAGEACTION_RESET = (int) 0x80000000,
} OLECMDID_PAGEACTIONFLAG;
typedef enum
{
      OLECMDIDF_BROWSERSTATE_EXTENSIONSOFF = 0x00000001,
      OLECMDIDF_BROWSERSTATE_IESECURITY = 0x00000002,
      OLECMDIDF_BROWSERSTATE_PROTECTEDMODE_OFF = 0x00000004,
      OLECMDIDF_BROWSERSTATE_RESET = 0x00000008,
      OLECMDIDF_BROWSERSTATE_REQUIRESACTIVEX = 0x00000010,
      OLECMDIDF_BROWSERSTATE_DESKTOPHTMLDIALOG = 0x00000020,
      OLECMDIDF_BROWSERSTATE_BLOCKEDVERSION = 0x00000040,
} OLECMDID_BROWSERSTATEFLAG;
typedef enum
{
      OLECMDIDF_OPTICAL_ZOOM_NOPERSIST = 0x00000001,
      OLECMDIDF_OPTICAL_ZOOM_NOLAYOUT = 0x00000010,
      OLECMDIDF_OPTICAL_ZOOM_NOTRANSIENT = 0x00000020,
      OLECMDIDF_OPTICAL_ZOOM_RELOADFORNEWTAB = 0x00000040,
} OLECMDID_OPTICAL_ZOOMFLAG;
typedef enum
{
    PAGEACTION_UI_DEFAULT = 0,
    PAGEACTION_UI_MODAL = 1,
    PAGEACTION_UI_MODELESS = 2,
    PAGEACTION_UI_SILENT = 3,
} PAGEACTION_UI;
typedef enum
{
    OLECMDIDF_WINDOWSTATE_USERVISIBLE = 0x00000001,
    OLECMDIDF_WINDOWSTATE_ENABLED = 0x00000002,
    OLECMDIDF_WINDOWSTATE_USERVISIBLE_VALID = 0x00010000,
    OLECMDIDF_WINDOWSTATE_ENABLED_VALID = 0x00020000,
} OLECMDID_WINDOWSTATE_FLAG;
typedef enum
{
    OLECMDIDF_VIEWPORTMODE_FIXED_LAYOUT_WIDTH = 0x00000001,
    OLECMDIDF_VIEWPORTMODE_EXCLUDE_VISUAL_BOTTOM = 0x00000002,
    OLECMDIDF_VIEWPORTMODE_FIXED_LAYOUT_WIDTH_VALID = 0x00010000,
    OLECMDIDF_VIEWPORTMODE_EXCLUDE_VISUAL_BOTTOM_VALID = 0x00020000,
} OLECMDID_VIEWPORT_MODE_FLAG;
EXTERN_C const GUID SID_SContainerDispatch;
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IZoomEvents;
    typedef struct IZoomEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IZoomEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IZoomEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IZoomEvents * This);
        HRESULT ( STDMETHODCALLTYPE *OnZoomPercentChanged )(
            __RPC__in IZoomEvents * This,
                       ULONG ulZoomPercent);
        END_INTERFACE
    } IZoomEventsVtbl;
    interface IZoomEvents
    {
        CONST_VTBL struct IZoomEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnZoomPercentChanged(This,ulZoomPercent) )
EXTERN_C const IID IID_IProtectFocus;
    typedef struct IProtectFocusVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProtectFocus * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProtectFocus * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProtectFocus * This);
        HRESULT ( STDMETHODCALLTYPE *AllowFocusChange )(
            __RPC__in IProtectFocus * This,
                        __RPC__out BOOL *pfAllow);
        END_INTERFACE
    } IProtectFocusVtbl;
    interface IProtectFocus
    {
        CONST_VTBL struct IProtectFocusVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AllowFocusChange(This,pfAllow) )
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IProtectedModeMenuServices;
    typedef struct IProtectedModeMenuServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProtectedModeMenuServices * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProtectedModeMenuServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProtectedModeMenuServices * This);
        HRESULT ( STDMETHODCALLTYPE *CreateMenu )(
            __RPC__in IProtectedModeMenuServices * This,
                        __RPC__deref_out_opt HMENU *phMenu);
        HRESULT ( STDMETHODCALLTYPE *LoadMenu )(
            __RPC__in IProtectedModeMenuServices * This,
                               __RPC__in_string LPCWSTR pszModuleName,
                               __RPC__in_string LPCWSTR pszMenuName,
                        __RPC__deref_out_opt HMENU *phMenu);
        HRESULT ( STDMETHODCALLTYPE *LoadMenuID )(
            __RPC__in IProtectedModeMenuServices * This,
                               __RPC__in_string LPCWSTR pszModuleName,
                       WORD wResourceID,
                        __RPC__deref_out_opt HMENU *phMenu);
        END_INTERFACE
    } IProtectedModeMenuServicesVtbl;
    interface IProtectedModeMenuServices
    {
        CONST_VTBL struct IProtectedModeMenuServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateMenu(This,phMenu) )
    ( (This)->lpVtbl -> LoadMenu(This,pszModuleName,pszMenuName,phMenu) )
    ( (This)->lpVtbl -> LoadMenuID(This,pszModuleName,wResourceID,phMenu) )
#endif
#pragma endregion
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP) && !WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagPAGESET {} PAGESET;
#endif
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_docobj_0000_0010_v0_0_s_ifspec;
unsigned long __RPC_USER HMENU_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HMENU * );
unsigned char * __RPC_USER HMENU_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HMENU * );
unsigned char * __RPC_USER HMENU_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HMENU * );
void __RPC_USER HMENU_UserFree( __RPC__in unsigned long *, __RPC__in HMENU * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER HMENU_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HMENU * );
unsigned char * __RPC_USER HMENU_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HMENU * );
unsigned char * __RPC_USER HMENU_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HMENU * );
void __RPC_USER HMENU_UserFree64( __RPC__in unsigned long *, __RPC__in HMENU * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
              HRESULT __stdcall IEnumOleDocumentViews_Next_Proxy(
    IEnumOleDocumentViews * This,
               ULONG cViews,
                IOleDocumentView **rgpView,
                ULONG *pcFetched);
                HRESULT __stdcall IEnumOleDocumentViews_Next_Stub(
    __RPC__in IEnumOleDocumentViews * This,
               ULONG cViews,
                                    __RPC__out_ecount_part(cViews, *pcFetched) IOleDocumentView **rgpView,
                __RPC__out ULONG *pcFetched);
              HRESULT __stdcall IPrint_Print_Proxy(
    IPrint * This,
               DWORD grfFlags,
                    DVTARGETDEVICE **pptd,
                    PAGESET **ppPageSet,
                            STGMEDIUM *pstgmOptions,
               IContinueCallback *pcallback,
               LONG nFirstPage,
                LONG *pcPagesPrinted,
                LONG *pnLastPage);
                HRESULT __stdcall IPrint_Print_Stub(
    __RPC__in IPrint * This,
               DWORD grfFlags,
                    __RPC__deref_inout_opt DVTARGETDEVICE **pptd,
                    __RPC__deref_inout_opt PAGESET **pppageset,
                            __RPC__inout_opt RemSTGMEDIUM *pstgmOptions,
               __RPC__in_opt IContinueCallback *pcallback,
               LONG nFirstPage,
                __RPC__out LONG *pcPagesPrinted,
                __RPC__out LONG *pnLastPage);
}
