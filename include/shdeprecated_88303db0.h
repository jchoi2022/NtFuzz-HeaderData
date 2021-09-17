#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITravelEntry ITravelEntry;
typedef interface ITravelLog ITravelLog;
typedef interface IExpDispSupportXP IExpDispSupportXP;
typedef interface IExpDispSupport IExpDispSupport;
typedef interface IBrowserService IBrowserService;
typedef interface IShellService IShellService;
typedef interface IBrowserService2 IBrowserService2;
typedef interface IBrowserService3 IBrowserService3;
typedef interface IBrowserService4 IBrowserService4;
typedef interface ITrackShellMenu ITrackShellMenu;
typedef class TrackShellMenu TrackShellMenu;
#include "objidl.h"
#include "ocidl.h"
#include "shtypes.h"
#include "tlogstg.h"
#include "shobjidl_core.h"
#include "hlink.h"
#include "exdisp.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITravelEntry;
    typedef struct ITravelEntryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITravelEntry * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITravelEntry * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITravelEntry * This);
                                        HRESULT ( STDMETHODCALLTYPE *Invoke )(
            __RPC__in ITravelEntry * This,
                       __RPC__in_opt IUnknown *punk);
                                        HRESULT ( STDMETHODCALLTYPE *Update )(
            __RPC__in ITravelEntry * This,
                       __RPC__in_opt IUnknown *punk,
                       BOOL fIsLocalAnchor);
                                        HRESULT ( STDMETHODCALLTYPE *GetPidl )(
            __RPC__in ITravelEntry * This,
                        __RPC__deref_out_opt PIDLIST_ABSOLUTE *ppidl);
        END_INTERFACE
    } ITravelEntryVtbl;
    interface ITravelEntry
    {
        CONST_VTBL struct ITravelEntryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Invoke(This,punk) )
    ( (This)->lpVtbl -> Update(This,punk,fIsLocalAnchor) )
    ( (This)->lpVtbl -> GetPidl(This,ppidl) )
EXTERN_C const IID IID_ITravelLog;
    typedef struct ITravelLogVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITravelLog * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITravelLog * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITravelLog * This);
                                        HRESULT ( STDMETHODCALLTYPE *AddEntry )(
            __RPC__in ITravelLog * This,
                       __RPC__in_opt IUnknown *punk,
                       BOOL fIsLocalAnchor);
                                        HRESULT ( STDMETHODCALLTYPE *UpdateEntry )(
            __RPC__in ITravelLog * This,
                       __RPC__in_opt IUnknown *punk,
                       BOOL fIsLocalAnchor);
                                        HRESULT ( STDMETHODCALLTYPE *UpdateExternal )(
            __RPC__in ITravelLog * This,
                       __RPC__in_opt IUnknown *punk,
                       __RPC__in_opt IUnknown *punkHLBrowseContext);
                                        HRESULT ( STDMETHODCALLTYPE *Travel )(
            __RPC__in ITravelLog * This,
                       __RPC__in_opt IUnknown *punk,
                       int iOffset);
                                               HRESULT ( STDMETHODCALLTYPE *GetTravelEntry )(
            ITravelLog * This,
            _In_ IUnknown *punk,
            _In_ int iOffset,
            _Outptr_opt_ ITravelEntry **ppte);
                                        HRESULT ( STDMETHODCALLTYPE *FindTravelEntry )(
            __RPC__in ITravelLog * This,
                       __RPC__in_opt IUnknown *punk,
                       __RPC__in PCIDLIST_ABSOLUTE pidl,
                        __RPC__deref_out_opt ITravelEntry **ppte);
                                        HRESULT ( STDMETHODCALLTYPE *GetToolTipText )(
            __RPC__in ITravelLog * This,
                       __RPC__in_opt IUnknown *punk,
                       int iOffset,
                       int idsTemplate,
                                 __RPC__out_ecount_full(cchText) LPWSTR pwzText,
                       DWORD cchText);
                                        HRESULT ( STDMETHODCALLTYPE *InsertMenuEntries )(
            __RPC__in ITravelLog * This,
                       __RPC__in_opt IUnknown *punk,
                       __RPC__in HMENU hmenu,
                       int nPos,
                       int idFirst,
                       int idLast,
                       DWORD dwFlags);
                                        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in ITravelLog * This,
                        __RPC__deref_out_opt ITravelLog **pptl);
                                               DWORD ( STDMETHODCALLTYPE *CountEntries )(
            ITravelLog * This,
                       IUnknown *punk);
                                        HRESULT ( STDMETHODCALLTYPE *Revert )(
            __RPC__in ITravelLog * This);
        END_INTERFACE
    } ITravelLogVtbl;
    interface ITravelLog
    {
        CONST_VTBL struct ITravelLogVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddEntry(This,punk,fIsLocalAnchor) )
    ( (This)->lpVtbl -> UpdateEntry(This,punk,fIsLocalAnchor) )
    ( (This)->lpVtbl -> UpdateExternal(This,punk,punkHLBrowseContext) )
    ( (This)->lpVtbl -> Travel(This,punk,iOffset) )
    ( (This)->lpVtbl -> GetTravelEntry(This,punk,iOffset,ppte) )
    ( (This)->lpVtbl -> FindTravelEntry(This,punk,pidl,ppte) )
    ( (This)->lpVtbl -> GetToolTipText(This,punk,iOffset,idsTemplate,pwzText,cchText) )
    ( (This)->lpVtbl -> InsertMenuEntries(This,punk,hmenu,nPos,idFirst,idLast,dwFlags) )
    ( (This)->lpVtbl -> Clone(This,pptl) )
    ( (This)->lpVtbl -> CountEntries(This,punk) )
    ( (This)->lpVtbl -> Revert(This) )
                HRESULT STDMETHODCALLTYPE ITravelLog_RemoteGetTravelEntry_Proxy(
    __RPC__in ITravelLog * This,
               __RPC__in_opt IUnknown *punk,
               int iOffset,
                __RPC__deref_out_opt ITravelEntry **ppte);
void __RPC_STUB ITravelLog_RemoteGetTravelEntry_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
class CIE4ConnectionPoint : public IConnectionPoint
{
    virtual HRESULT DoInvokeIE4(BOOL *pf, void **ppv, DISPID dispid, DISPPARAMS *pdispparams) PURE;
    virtual HRESULT DoInvokePIDLIE4(DISPID dispid, PCIDLIST_ABSOLUTE pidl, BOOL fCanCancel) PURE;
};
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IExpDispSupportXP;
    typedef struct IExpDispSupportXPVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IExpDispSupportXP * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IExpDispSupportXP * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IExpDispSupportXP * This);
        HRESULT ( STDMETHODCALLTYPE *FindCIE4ConnectionPoint )(
            IExpDispSupportXP * This,
            _In_ REFIID riid,
            _Outptr_ CIE4ConnectionPoint **ppccp);
        HRESULT ( STDMETHODCALLTYPE *OnTranslateAccelerator )(
            IExpDispSupportXP * This,
            _In_ MSG *pMsg,
            _In_ DWORD grfModifiers);
        HRESULT ( STDMETHODCALLTYPE *OnInvoke )(
            IExpDispSupportXP * This,
            _In_ DISPID dispidMember,
            _In_ REFIID iid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pdispparams,
            _Out_ VARIANT *pVarResult,
            _Out_ EXCEPINFO *pexcepinfo,
            _Out_ UINT *puArgErr);
        END_INTERFACE
    } IExpDispSupportXPVtbl;
    interface IExpDispSupportXP
    {
        CONST_VTBL struct IExpDispSupportXPVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindCIE4ConnectionPoint(This,riid,ppccp) )
    ( (This)->lpVtbl -> OnTranslateAccelerator(This,pMsg,grfModifiers) )
    ( (This)->lpVtbl -> OnInvoke(This,dispidMember,iid,lcid,wFlags,pdispparams,pVarResult,pexcepinfo,puArgErr) )
EXTERN_C const IID IID_IExpDispSupport;
    typedef struct IExpDispSupportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IExpDispSupport * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IExpDispSupport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IExpDispSupport * This);
        HRESULT ( STDMETHODCALLTYPE *FindConnectionPoint )(
            IExpDispSupport * This,
            _In_ REFIID riid,
            _Outptr_ IConnectionPoint **ppccp);
        HRESULT ( STDMETHODCALLTYPE *OnTranslateAccelerator )(
            IExpDispSupport * This,
            _In_ MSG *pMsg,
            _In_ DWORD grfModifiers);
        HRESULT ( STDMETHODCALLTYPE *OnInvoke )(
            IExpDispSupport * This,
            _In_ DISPID dispidMember,
            _In_ REFIID iid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pdispparams,
            _Out_ VARIANT *pVarResult,
            _Out_ EXCEPINFO *pexcepinfo,
            _Out_ UINT *puArgErr);
        END_INTERFACE
    } IExpDispSupportVtbl;
    interface IExpDispSupport
    {
        CONST_VTBL struct IExpDispSupportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindConnectionPoint(This,riid,ppccp) )
    ( (This)->lpVtbl -> OnTranslateAccelerator(This,pMsg,grfModifiers) )
    ( (This)->lpVtbl -> OnInvoke(This,dispidMember,iid,lcid,wFlags,pdispparams,pVarResult,pexcepinfo,puArgErr) )
typedef
enum tagBNSTATE
    {
        BNS_NORMAL = 0,
        BNS_BEGIN_NAVIGATE = 1,
        BNS_NAVIGATE = 2
    } BNSTATE;
enum SHELLBROWSERSHOWCONTROL
    {
        SBSC_HIDE = 0,
        SBSC_SHOW = 1,
        SBSC_TOGGLE = 2,
        SBSC_QUERY = 3
    } ;
                                        + sizeof("://") \
                                        + INTERNET_MAX_PATH_LENGTH)
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_IBrowserService;
    typedef struct IBrowserServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IBrowserService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IBrowserService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IBrowserService * This);
                      HRESULT ( STDMETHODCALLTYPE *GetParentSite )(
            IBrowserService * This,
            _Outptr_ IOleInPlaceSite **ppipsite);
                      HRESULT ( STDMETHODCALLTYPE *SetTitle )(
            IBrowserService * This,
            _In_ IShellView *psv,
            _In_ LPCWSTR pszName);
                      HRESULT ( STDMETHODCALLTYPE *GetTitle )(
            IBrowserService * This,
            _In_ IShellView *psv,
            _Out_writes_(cchName) LPWSTR pszName,
            DWORD cchName);
                      HRESULT ( STDMETHODCALLTYPE *GetOleObject )(
            IBrowserService * This,
            _Outptr_ IOleObject **ppobjv);
        HRESULT ( STDMETHODCALLTYPE *GetTravelLog )(
            __RPC__in IBrowserService * This,
                        __RPC__deref_out_opt ITravelLog **pptl);
                      HRESULT ( STDMETHODCALLTYPE *ShowControlWindow )(
            IBrowserService * This,
            UINT id,
            BOOL fShow);
                      HRESULT ( STDMETHODCALLTYPE *IsControlWindowShown )(
            IBrowserService * This,
            UINT id,
            _Out_ BOOL *pfShown);
                      HRESULT ( STDMETHODCALLTYPE *IEGetDisplayName )(
            IBrowserService * This,
            _In_ PCIDLIST_ABSOLUTE pidl,
            _Out_writes_(INTERNET_MAX_URL_LENGTH) LPWSTR pwszName,
            UINT uFlags);
                      HRESULT ( STDMETHODCALLTYPE *IEParseDisplayName )(
            IBrowserService * This,
            UINT uiCP,
            _In_ LPCWSTR pwszPath,
            _Outptr_ PIDLIST_ABSOLUTE *ppidlOut);
                      HRESULT ( STDMETHODCALLTYPE *DisplayParseError )(
            IBrowserService * This,
            HRESULT hres,
            _In_ LPCWSTR pwszPath);
                      HRESULT ( STDMETHODCALLTYPE *NavigateToPidl )(
            IBrowserService * This,
            _In_ PCIDLIST_ABSOLUTE pidl,
            DWORD grfHLNF);
                      HRESULT ( STDMETHODCALLTYPE *SetNavigateState )(
            IBrowserService * This,
            BNSTATE bnstate);
                      HRESULT ( STDMETHODCALLTYPE *GetNavigateState )(
            IBrowserService * This,
            _Out_ BNSTATE *pbnstate);
                      HRESULT ( STDMETHODCALLTYPE *NotifyRedirect )(
            IBrowserService * This,
            _In_ IShellView *psv,
            _In_ PCIDLIST_ABSOLUTE pidl,
            _Out_ BOOL *pfDidBrowse);
                      HRESULT ( STDMETHODCALLTYPE *UpdateWindowList )(
            IBrowserService * This);
        HRESULT ( STDMETHODCALLTYPE *UpdateBackForwardState )(
            __RPC__in IBrowserService * This);
                      HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            IBrowserService * This,
            DWORD dwFlags,
            DWORD dwFlagMask);
                      HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            IBrowserService * This,
            _Out_ DWORD *pdwFlags);
                      HRESULT ( STDMETHODCALLTYPE *CanNavigateNow )(
            IBrowserService * This);
                      HRESULT ( STDMETHODCALLTYPE *GetPidl )(
            IBrowserService * This,
            _Out_ PIDLIST_ABSOLUTE *ppidl);
                      HRESULT ( STDMETHODCALLTYPE *SetReferrer )(
            IBrowserService * This,
            _In_ PCIDLIST_ABSOLUTE pidl);
                      DWORD ( STDMETHODCALLTYPE *GetBrowserIndex )(
            IBrowserService * This);
                      HRESULT ( STDMETHODCALLTYPE *GetBrowserByIndex )(
            IBrowserService * This,
            DWORD dwID,
            _Outptr_ IUnknown **ppunk);
                      HRESULT ( STDMETHODCALLTYPE *GetHistoryObject )(
            IBrowserService * This,
            _Outptr_ IOleObject **ppole,
            _Outptr_ IStream **pstm,
            _Outptr_ IBindCtx **ppbc);
                      HRESULT ( STDMETHODCALLTYPE *SetHistoryObject )(
            IBrowserService * This,
            _In_ IOleObject *pole,
            BOOL fIsLocalAnchor);
                      HRESULT ( STDMETHODCALLTYPE *CacheOLEServer )(
            IBrowserService * This,
            _In_ IOleObject *pole);
                      HRESULT ( STDMETHODCALLTYPE *GetSetCodePage )(
            IBrowserService * This,
            _In_ VARIANT *pvarIn,
            _Out_ VARIANT *pvarOut);
                      HRESULT ( STDMETHODCALLTYPE *OnHttpEquiv )(
            IBrowserService * This,
            _In_ IShellView *psv,
            BOOL fDone,
            _In_ VARIANT *pvarargIn,
            _Out_ VARIANT *pvarargOut);
                      HRESULT ( STDMETHODCALLTYPE *GetPalette )(
            IBrowserService * This,
            _Out_ HPALETTE *hpal);
                      HRESULT ( STDMETHODCALLTYPE *RegisterWindow )(
            IBrowserService * This,
            BOOL fForceRegister,
            int swc);
        END_INTERFACE
    } IBrowserServiceVtbl;
    interface IBrowserService
    {
        CONST_VTBL struct IBrowserServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetParentSite(This,ppipsite) )
    ( (This)->lpVtbl -> SetTitle(This,psv,pszName) )
    ( (This)->lpVtbl -> GetTitle(This,psv,pszName,cchName) )
    ( (This)->lpVtbl -> GetOleObject(This,ppobjv) )
    ( (This)->lpVtbl -> GetTravelLog(This,pptl) )
    ( (This)->lpVtbl -> ShowControlWindow(This,id,fShow) )
    ( (This)->lpVtbl -> IsControlWindowShown(This,id,pfShown) )
    ( (This)->lpVtbl -> IEGetDisplayName(This,pidl,pwszName,uFlags) )
    ( (This)->lpVtbl -> IEParseDisplayName(This,uiCP,pwszPath,ppidlOut) )
    ( (This)->lpVtbl -> DisplayParseError(This,hres,pwszPath) )
    ( (This)->lpVtbl -> NavigateToPidl(This,pidl,grfHLNF) )
    ( (This)->lpVtbl -> SetNavigateState(This,bnstate) )
    ( (This)->lpVtbl -> GetNavigateState(This,pbnstate) )
    ( (This)->lpVtbl -> NotifyRedirect(This,psv,pidl,pfDidBrowse) )
    ( (This)->lpVtbl -> UpdateWindowList(This) )
    ( (This)->lpVtbl -> UpdateBackForwardState(This) )
    ( (This)->lpVtbl -> SetFlags(This,dwFlags,dwFlagMask) )
    ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> CanNavigateNow(This) )
    ( (This)->lpVtbl -> GetPidl(This,ppidl) )
    ( (This)->lpVtbl -> SetReferrer(This,pidl) )
    ( (This)->lpVtbl -> GetBrowserIndex(This) )
    ( (This)->lpVtbl -> GetBrowserByIndex(This,dwID,ppunk) )
    ( (This)->lpVtbl -> GetHistoryObject(This,ppole,pstm,ppbc) )
    ( (This)->lpVtbl -> SetHistoryObject(This,pole,fIsLocalAnchor) )
    ( (This)->lpVtbl -> CacheOLEServer(This,pole) )
    ( (This)->lpVtbl -> GetSetCodePage(This,pvarIn,pvarOut) )
    ( (This)->lpVtbl -> OnHttpEquiv(This,psv,fDone,pvarargIn,pvarargOut) )
    ( (This)->lpVtbl -> GetPalette(This,hpal) )
    ( (This)->lpVtbl -> RegisterWindow(This,fForceRegister,swc) )
EXTERN_C const IID IID_IShellService;
    typedef struct IShellServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IShellService * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IShellService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IShellService * This);
        HRESULT ( STDMETHODCALLTYPE *SetOwner )(
            IShellService * This,
            _In_opt_ IUnknown *punkOwner);
        END_INTERFACE
    } IShellServiceVtbl;
    interface IShellService
    {
        CONST_VTBL struct IShellServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetOwner(This,punkOwner) )
enum SECURELOCKCODE
    {
        SECURELOCK_NOCHANGE = -1,
        SECURELOCK_SET_UNSECURE = 0,
        SECURELOCK_SET_MIXED = ( SECURELOCK_SET_UNSECURE + 1 ) ,
        SECURELOCK_SET_SECUREUNKNOWNBIT = ( SECURELOCK_SET_MIXED + 1 ) ,
        SECURELOCK_SET_SECURE40BIT = ( SECURELOCK_SET_SECUREUNKNOWNBIT + 1 ) ,
        SECURELOCK_SET_SECURE56BIT = ( SECURELOCK_SET_SECURE40BIT + 1 ) ,
        SECURELOCK_SET_FORTEZZA = ( SECURELOCK_SET_SECURE56BIT + 1 ) ,
        SECURELOCK_SET_SECURE128BIT = ( SECURELOCK_SET_FORTEZZA + 1 ) ,
        SECURELOCK_FIRSTSUGGEST = ( SECURELOCK_SET_SECURE128BIT + 1 ) ,
        SECURELOCK_SUGGEST_UNSECURE = SECURELOCK_FIRSTSUGGEST,
        SECURELOCK_SUGGEST_MIXED = ( SECURELOCK_SUGGEST_UNSECURE + 1 ) ,
        SECURELOCK_SUGGEST_SECUREUNKNOWNBIT = ( SECURELOCK_SUGGEST_MIXED + 1 ) ,
        SECURELOCK_SUGGEST_SECURE40BIT = ( SECURELOCK_SUGGEST_SECUREUNKNOWNBIT + 1 ) ,
        SECURELOCK_SUGGEST_SECURE56BIT = ( SECURELOCK_SUGGEST_SECURE40BIT + 1 ) ,
        SECURELOCK_SUGGEST_FORTEZZA = ( SECURELOCK_SUGGEST_SECURE56BIT + 1 ) ,
        SECURELOCK_SUGGEST_SECURE128BIT = ( SECURELOCK_SUGGEST_FORTEZZA + 1 )
    } ;
#include <pshpack8.h>
typedef struct BASEBROWSERDATAXP
    {
    HWND _hwnd;
    ITravelLog *_ptl;
    IHlinkFrame *_phlf;
    IWebBrowser2 *_pautoWB2;
    IExpDispSupportXP *_pautoEDS;
    IShellService *_pautoSS;
    int _eSecureLockIcon;
    UINT _fCreatingViewWindow : 1;
    UINT _uActivateState;
    PCIDLIST_ABSOLUTE _pidlViewState;
    IOleCommandTarget *_pctView;
    PIDLIST_ABSOLUTE _pidlCur;
    IShellView *_psv;
    IShellFolder *_psf;
    HWND _hwndView;
    LPWSTR _pszTitleCur;
    PIDLIST_ABSOLUTE _pidlPending;
    IShellView *_psvPending;
    IShellFolder *_psfPending;
    HWND _hwndViewPending;
    LPWSTR _pszTitlePending;
    BOOL _fIsViewMSHTML;
    BOOL _fPrivacyImpacted;
    CLSID _clsidView;
    CLSID _clsidViewPending;
    HWND _hwndFrame;
    } BASEBROWSERDATAXP;
typedef struct BASEBROWSERDATAXP *LPBASEBROWSERDATAXP;
typedef struct BASEBROWSERDATALH
    {
    HWND _hwnd;
    ITravelLog *_ptl;
    IHlinkFrame *_phlf;
    IWebBrowser2 *_pautoWB2;
    IExpDispSupport *_pautoEDS;
    IShellService *_pautoSS;
    int _eSecureLockIcon;
    UINT _fCreatingViewWindow : 1;
    UINT _uActivateState;
    PCIDLIST_ABSOLUTE _pidlViewState;
    IOleCommandTarget *_pctView;
    PIDLIST_ABSOLUTE _pidlCur;
    IShellView *_psv;
    IShellFolder *_psf;
    HWND _hwndView;
    LPWSTR _pszTitleCur;
    PIDLIST_ABSOLUTE _pidlPending;
    IShellView *_psvPending;
    IShellFolder *_psfPending;
    HWND _hwndViewPending;
    LPWSTR _pszTitlePending;
    BOOL _fIsViewMSHTML;
    BOOL _fPrivacyImpacted;
    CLSID _clsidView;
    CLSID _clsidViewPending;
    HWND _hwndFrame;
    LONG _lPhishingFilterStatus;
    } BASEBROWSERDATALH;
typedef struct BASEBROWSERDATALH *LPBASEBROWSERDATALH;
#if 0
typedef BASEBROWSERDATALH BASEBROWSERDATA;
#endif
typedef BASEBROWSERDATALH BASEBROWSERDATA;
typedef const BASEBROWSERDATA *LPCBASEBROWSERDATA;
typedef BASEBROWSERDATA *LPBASEBROWSERDATA;
typedef struct tagFolderSetData
    {
    FOLDERSETTINGS _fs;
    SHELLVIEWID _vidRestore;
    DWORD _dwViewPriority;
    } FOLDERSETDATA;
typedef struct tagFolderSetData *LPFOLDERSETDATA;
#if 0
typedef void *LPCREATESTRUCT;
typedef void NMHDR;
#endif
typedef struct SToolbarItem
    {
    IDockingWindow *ptbar;
    BORDERWIDTHS rcBorderTool;
    LPWSTR pwszItem;
    BOOL fShow;
    HMONITOR hMon;
    } TOOLBARITEM;
typedef struct SToolbarItem *LPTOOLBARITEM;
#include <poppack.h>
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IBrowserService2;
    typedef struct IBrowserService2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IBrowserService2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IBrowserService2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IBrowserService2 * This);
                      HRESULT ( STDMETHODCALLTYPE *GetParentSite )(
            IBrowserService2 * This,
            _Outptr_ IOleInPlaceSite **ppipsite);
                      HRESULT ( STDMETHODCALLTYPE *SetTitle )(
            IBrowserService2 * This,
            _In_ IShellView *psv,
            _In_ LPCWSTR pszName);
                      HRESULT ( STDMETHODCALLTYPE *GetTitle )(
            IBrowserService2 * This,
            _In_ IShellView *psv,
            _Out_writes_(cchName) LPWSTR pszName,
            DWORD cchName);
                      HRESULT ( STDMETHODCALLTYPE *GetOleObject )(
            IBrowserService2 * This,
            _Outptr_ IOleObject **ppobjv);
        HRESULT ( STDMETHODCALLTYPE *GetTravelLog )(
            IBrowserService2 * This,
                        ITravelLog **pptl);
                      HRESULT ( STDMETHODCALLTYPE *ShowControlWindow )(
            IBrowserService2 * This,
            UINT id,
            BOOL fShow);
                      HRESULT ( STDMETHODCALLTYPE *IsControlWindowShown )(
            IBrowserService2 * This,
            UINT id,
            _Out_ BOOL *pfShown);
                      HRESULT ( STDMETHODCALLTYPE *IEGetDisplayName )(
            IBrowserService2 * This,
            _In_ PCIDLIST_ABSOLUTE pidl,
            _Out_writes_(INTERNET_MAX_URL_LENGTH) LPWSTR pwszName,
            UINT uFlags);
                      HRESULT ( STDMETHODCALLTYPE *IEParseDisplayName )(
            IBrowserService2 * This,
            UINT uiCP,
            _In_ LPCWSTR pwszPath,
            _Outptr_ PIDLIST_ABSOLUTE *ppidlOut);
                      HRESULT ( STDMETHODCALLTYPE *DisplayParseError )(
            IBrowserService2 * This,
            HRESULT hres,
            _In_ LPCWSTR pwszPath);
                      HRESULT ( STDMETHODCALLTYPE *NavigateToPidl )(
            IBrowserService2 * This,
            _In_ PCIDLIST_ABSOLUTE pidl,
            DWORD grfHLNF);
                      HRESULT ( STDMETHODCALLTYPE *SetNavigateState )(
            IBrowserService2 * This,
            BNSTATE bnstate);
                      HRESULT ( STDMETHODCALLTYPE *GetNavigateState )(
            IBrowserService2 * This,
            _Out_ BNSTATE *pbnstate);
                      HRESULT ( STDMETHODCALLTYPE *NotifyRedirect )(
            IBrowserService2 * This,
            _In_ IShellView *psv,
            _In_ PCIDLIST_ABSOLUTE pidl,
            _Out_ BOOL *pfDidBrowse);
                      HRESULT ( STDMETHODCALLTYPE *UpdateWindowList )(
            IBrowserService2 * This);
        HRESULT ( STDMETHODCALLTYPE *UpdateBackForwardState )(
            IBrowserService2 * This);
                      HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            IBrowserService2 * This,
            DWORD dwFlags,
            DWORD dwFlagMask);
                      HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            IBrowserService2 * This,
            _Out_ DWORD *pdwFlags);
                      HRESULT ( STDMETHODCALLTYPE *CanNavigateNow )(
            IBrowserService2 * This);
                      HRESULT ( STDMETHODCALLTYPE *GetPidl )(
            IBrowserService2 * This,
            _Out_ PIDLIST_ABSOLUTE *ppidl);
                      HRESULT ( STDMETHODCALLTYPE *SetReferrer )(
            IBrowserService2 * This,
            _In_ PCIDLIST_ABSOLUTE pidl);
                      DWORD ( STDMETHODCALLTYPE *GetBrowserIndex )(
            IBrowserService2 * This);
                      HRESULT ( STDMETHODCALLTYPE *GetBrowserByIndex )(
            IBrowserService2 * This,
            DWORD dwID,
            _Outptr_ IUnknown **ppunk);
                      HRESULT ( STDMETHODCALLTYPE *GetHistoryObject )(
            IBrowserService2 * This,
            _Outptr_ IOleObject **ppole,
            _Outptr_ IStream **pstm,
            _Outptr_ IBindCtx **ppbc);
                      HRESULT ( STDMETHODCALLTYPE *SetHistoryObject )(
            IBrowserService2 * This,
            _In_ IOleObject *pole,
            BOOL fIsLocalAnchor);
                      HRESULT ( STDMETHODCALLTYPE *CacheOLEServer )(
            IBrowserService2 * This,
            _In_ IOleObject *pole);
                      HRESULT ( STDMETHODCALLTYPE *GetSetCodePage )(
            IBrowserService2 * This,
            _In_ VARIANT *pvarIn,
            _Out_ VARIANT *pvarOut);
                      HRESULT ( STDMETHODCALLTYPE *OnHttpEquiv )(
            IBrowserService2 * This,
            _In_ IShellView *psv,
            BOOL fDone,
            _In_ VARIANT *pvarargIn,
            _Out_ VARIANT *pvarargOut);
                      HRESULT ( STDMETHODCALLTYPE *GetPalette )(
            IBrowserService2 * This,
            _Out_ HPALETTE *hpal);
                      HRESULT ( STDMETHODCALLTYPE *RegisterWindow )(
            IBrowserService2 * This,
            BOOL fForceRegister,
            int swc);
        LRESULT ( STDMETHODCALLTYPE *WndProcBS )(
            IBrowserService2 * This,
            _In_ HWND hwnd,
            _In_ UINT uMsg,
            _In_ WPARAM wParam,
            _In_ LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *SetAsDefFolderSettings )(
            IBrowserService2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetViewRect )(
            IBrowserService2 * This,
            _Out_ RECT *prc);
        HRESULT ( STDMETHODCALLTYPE *OnSize )(
            IBrowserService2 * This,
            _In_ WPARAM wParam);
        HRESULT ( STDMETHODCALLTYPE *OnCreate )(
            IBrowserService2 * This,
            _In_ struct tagCREATESTRUCTW *pcs);
        LRESULT ( STDMETHODCALLTYPE *OnCommand )(
            IBrowserService2 * This,
            _In_ WPARAM wParam,
            _In_ LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *OnDestroy )(
            IBrowserService2 * This);
        LRESULT ( STDMETHODCALLTYPE *OnNotify )(
            IBrowserService2 * This,
            _In_ struct tagNMHDR *pnm);
        HRESULT ( STDMETHODCALLTYPE *OnSetFocus )(
            IBrowserService2 * This);
        HRESULT ( STDMETHODCALLTYPE *OnFrameWindowActivateBS )(
            IBrowserService2 * This,
            _In_ BOOL fActive);
        HRESULT ( STDMETHODCALLTYPE *ReleaseShellView )(
            IBrowserService2 * This);
        HRESULT ( STDMETHODCALLTYPE *ActivatePendingView )(
            IBrowserService2 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateViewWindow )(
            IBrowserService2 * This,
            _In_ IShellView *psvNew,
            _In_ IShellView *psvOld,
            _In_ LPRECT prcView,
            _Out_ HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *CreateBrowserPropSheetExt )(
            IBrowserService2 * This,
            _In_ REFIID riid,
            _Outptr_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetViewWindow )(
            IBrowserService2 * This,
            _Out_ HWND *phwndView);
        HRESULT ( STDMETHODCALLTYPE *GetBaseBrowserData )(
            IBrowserService2 * This,
            _Outptr_ LPCBASEBROWSERDATA *pbbd);
        LPBASEBROWSERDATA ( STDMETHODCALLTYPE *PutBaseBrowserData )(
            IBrowserService2 * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeTravelLog )(
            IBrowserService2 * This,
            _In_ ITravelLog *ptl,
            _In_ DWORD dw);
        HRESULT ( STDMETHODCALLTYPE *SetTopBrowser )(
            IBrowserService2 * This);
        HRESULT ( STDMETHODCALLTYPE *Offline )(
            IBrowserService2 * This,
            _In_ int iCmd);
        HRESULT ( STDMETHODCALLTYPE *AllowViewResize )(
            IBrowserService2 * This,
            _In_ BOOL f);
        HRESULT ( STDMETHODCALLTYPE *SetActivateState )(
            IBrowserService2 * This,
            _In_ UINT u);
        HRESULT ( STDMETHODCALLTYPE *UpdateSecureLockIcon )(
            IBrowserService2 * This,
            _In_ int eSecureLock);
        HRESULT ( STDMETHODCALLTYPE *InitializeDownloadManager )(
            IBrowserService2 * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeTransitionSite )(
            IBrowserService2 * This);
        HRESULT ( STDMETHODCALLTYPE *_Initialize )(
            IBrowserService2 * This,
            _In_ HWND hwnd,
            _In_ IUnknown *pauto);
        HRESULT ( STDMETHODCALLTYPE *_CancelPendingNavigationAsync )(
            IBrowserService2 * This);
        HRESULT ( STDMETHODCALLTYPE *_CancelPendingView )(
            IBrowserService2 * This);
        HRESULT ( STDMETHODCALLTYPE *_MaySaveChanges )(
            IBrowserService2 * This);
        HRESULT ( STDMETHODCALLTYPE *_PauseOrResumeView )(
            IBrowserService2 * This,
            BOOL fPaused);
        HRESULT ( STDMETHODCALLTYPE *_DisableModeless )(
            IBrowserService2 * This);
        HRESULT ( STDMETHODCALLTYPE *_NavigateToPidl )(
            IBrowserService2 * This,
            _In_ PCIDLIST_ABSOLUTE pidl,
            _In_ DWORD grfHLNF,
            _In_ DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *_TryShell2Rename )(
            IBrowserService2 * This,
            _In_ IShellView *psv,
            _In_ PCIDLIST_ABSOLUTE pidlNew);
        HRESULT ( STDMETHODCALLTYPE *_SwitchActivationNow )(
            IBrowserService2 * This);
        HRESULT ( STDMETHODCALLTYPE *_ExecChildren )(
            IBrowserService2 * This,
            _In_ IUnknown *punkBar,
            _In_ BOOL fBroadcast,
            _In_opt_ const GUID *pguidCmdGroup,
            _In_ DWORD nCmdID,
            _In_ DWORD nCmdexecopt,
            _In_opt_ VARIANTARG *pvarargIn,
            _Inout_opt_ VARIANTARG *pvarargOut);
        HRESULT ( STDMETHODCALLTYPE *_SendChildren )(
            IBrowserService2 * This,
            _In_ HWND hwndBar,
            _In_ BOOL fBroadcast,
            _In_ UINT uMsg,
            _In_ WPARAM wParam,
            _In_ LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *GetFolderSetData )(
            IBrowserService2 * This,
                        struct tagFolderSetData *pfsd);
        HRESULT ( STDMETHODCALLTYPE *_OnFocusChange )(
            IBrowserService2 * This,
            _In_ UINT itb);
        HRESULT ( STDMETHODCALLTYPE *v_ShowHideChildWindows )(
            IBrowserService2 * This,
            _In_ BOOL fChildOnly);
        UINT ( STDMETHODCALLTYPE *_get_itbLastFocus )(
            IBrowserService2 * This);
        HRESULT ( STDMETHODCALLTYPE *_put_itbLastFocus )(
            IBrowserService2 * This,
            _In_ UINT itbLastFocus);
        HRESULT ( STDMETHODCALLTYPE *_UIActivateView )(
            IBrowserService2 * This,
            _In_ UINT uState);
        HRESULT ( STDMETHODCALLTYPE *_GetViewBorderRect )(
            IBrowserService2 * This,
                        RECT *prc);
        HRESULT ( STDMETHODCALLTYPE *_UpdateViewRectSize )(
            IBrowserService2 * This);
        HRESULT ( STDMETHODCALLTYPE *_ResizeNextBorder )(
            IBrowserService2 * This,
            _In_ UINT itb);
        HRESULT ( STDMETHODCALLTYPE *_ResizeView )(
            IBrowserService2 * This);
        HRESULT ( STDMETHODCALLTYPE *_GetEffectiveClientArea )(
            IBrowserService2 * This,
            _Out_ LPRECT lprectBorder,
            _In_ HMONITOR hmon);
        IStream *( STDMETHODCALLTYPE *v_GetViewStream )(
            IBrowserService2 * This,
                       PCIDLIST_ABSOLUTE pidl,
            _In_ DWORD grfMode,
            _In_ LPCWSTR pwszName);
        LRESULT ( STDMETHODCALLTYPE *ForwardViewMsg )(
            IBrowserService2 * This,
            _In_ UINT uMsg,
            _In_ WPARAM wParam,
            _In_ LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *SetAcceleratorMenu )(
            IBrowserService2 * This,
            _In_ HACCEL hacc);
        int ( STDMETHODCALLTYPE *_GetToolbarCount )(
            IBrowserService2 * This);
        LPTOOLBARITEM ( STDMETHODCALLTYPE *_GetToolbarItem )(
            IBrowserService2 * This,
            _In_ int itb);
        HRESULT ( STDMETHODCALLTYPE *_SaveToolbars )(
            IBrowserService2 * This,
                       IStream *pstm);
        HRESULT ( STDMETHODCALLTYPE *_LoadToolbars )(
            IBrowserService2 * This,
            _In_ IStream *pstm);
        HRESULT ( STDMETHODCALLTYPE *_CloseAndReleaseToolbars )(
            IBrowserService2 * This,
            BOOL fClose);
        HRESULT ( STDMETHODCALLTYPE *v_MayGetNextToolbarFocus )(
            IBrowserService2 * This,
            _In_ LPMSG lpMsg,
            _In_ UINT itbNext,
            _In_ int citb,
            _Out_ LPTOOLBARITEM *pptbi,
            _Out_ HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *_ResizeNextBorderHelper )(
            IBrowserService2 * This,
            UINT itb,
            BOOL bUseHmonitor);
        UINT ( STDMETHODCALLTYPE *_FindTBar )(
            IBrowserService2 * This,
            _In_ IUnknown *punkSrc);
        HRESULT ( STDMETHODCALLTYPE *_SetFocus )(
            IBrowserService2 * This,
            _In_ LPTOOLBARITEM ptbi,
            _In_ HWND hwnd,
            _In_ LPMSG lpMsg);
        HRESULT ( STDMETHODCALLTYPE *v_MayTranslateAccelerator )(
            IBrowserService2 * This,
                       MSG *pmsg);
        HRESULT ( STDMETHODCALLTYPE *_GetBorderDWHelper )(
            IBrowserService2 * This,
            _In_ IUnknown *punkSrc,
            _Out_ LPRECT lprectBorder,
            _In_ BOOL bUseHmonitor);
        HRESULT ( STDMETHODCALLTYPE *v_CheckZoneCrossing )(
            IBrowserService2 * This,
            _In_ PCIDLIST_ABSOLUTE pidl);
        END_INTERFACE
    } IBrowserService2Vtbl;
    interface IBrowserService2
    {
        CONST_VTBL struct IBrowserService2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetParentSite(This,ppipsite) )
    ( (This)->lpVtbl -> SetTitle(This,psv,pszName) )
    ( (This)->lpVtbl -> GetTitle(This,psv,pszName,cchName) )
    ( (This)->lpVtbl -> GetOleObject(This,ppobjv) )
    ( (This)->lpVtbl -> GetTravelLog(This,pptl) )
    ( (This)->lpVtbl -> ShowControlWindow(This,id,fShow) )
    ( (This)->lpVtbl -> IsControlWindowShown(This,id,pfShown) )
    ( (This)->lpVtbl -> IEGetDisplayName(This,pidl,pwszName,uFlags) )
    ( (This)->lpVtbl -> IEParseDisplayName(This,uiCP,pwszPath,ppidlOut) )
    ( (This)->lpVtbl -> DisplayParseError(This,hres,pwszPath) )
    ( (This)->lpVtbl -> NavigateToPidl(This,pidl,grfHLNF) )
    ( (This)->lpVtbl -> SetNavigateState(This,bnstate) )
    ( (This)->lpVtbl -> GetNavigateState(This,pbnstate) )
    ( (This)->lpVtbl -> NotifyRedirect(This,psv,pidl,pfDidBrowse) )
    ( (This)->lpVtbl -> UpdateWindowList(This) )
    ( (This)->lpVtbl -> UpdateBackForwardState(This) )
    ( (This)->lpVtbl -> SetFlags(This,dwFlags,dwFlagMask) )
    ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> CanNavigateNow(This) )
    ( (This)->lpVtbl -> GetPidl(This,ppidl) )
    ( (This)->lpVtbl -> SetReferrer(This,pidl) )
    ( (This)->lpVtbl -> GetBrowserIndex(This) )
    ( (This)->lpVtbl -> GetBrowserByIndex(This,dwID,ppunk) )
    ( (This)->lpVtbl -> GetHistoryObject(This,ppole,pstm,ppbc) )
    ( (This)->lpVtbl -> SetHistoryObject(This,pole,fIsLocalAnchor) )
    ( (This)->lpVtbl -> CacheOLEServer(This,pole) )
    ( (This)->lpVtbl -> GetSetCodePage(This,pvarIn,pvarOut) )
    ( (This)->lpVtbl -> OnHttpEquiv(This,psv,fDone,pvarargIn,pvarargOut) )
    ( (This)->lpVtbl -> GetPalette(This,hpal) )
    ( (This)->lpVtbl -> RegisterWindow(This,fForceRegister,swc) )
    ( (This)->lpVtbl -> WndProcBS(This,hwnd,uMsg,wParam,lParam) )
    ( (This)->lpVtbl -> SetAsDefFolderSettings(This) )
    ( (This)->lpVtbl -> GetViewRect(This,prc) )
    ( (This)->lpVtbl -> OnSize(This,wParam) )
    ( (This)->lpVtbl -> OnCreate(This,pcs) )
    ( (This)->lpVtbl -> OnCommand(This,wParam,lParam) )
    ( (This)->lpVtbl -> OnDestroy(This) )
    ( (This)->lpVtbl -> OnNotify(This,pnm) )
    ( (This)->lpVtbl -> OnSetFocus(This) )
    ( (This)->lpVtbl -> OnFrameWindowActivateBS(This,fActive) )
    ( (This)->lpVtbl -> ReleaseShellView(This) )
    ( (This)->lpVtbl -> ActivatePendingView(This) )
    ( (This)->lpVtbl -> CreateViewWindow(This,psvNew,psvOld,prcView,phwnd) )
    ( (This)->lpVtbl -> CreateBrowserPropSheetExt(This,riid,ppv) )
    ( (This)->lpVtbl -> GetViewWindow(This,phwndView) )
    ( (This)->lpVtbl -> GetBaseBrowserData(This,pbbd) )
    ( (This)->lpVtbl -> PutBaseBrowserData(This) )
    ( (This)->lpVtbl -> InitializeTravelLog(This,ptl,dw) )
    ( (This)->lpVtbl -> SetTopBrowser(This) )
    ( (This)->lpVtbl -> Offline(This,iCmd) )
    ( (This)->lpVtbl -> AllowViewResize(This,f) )
    ( (This)->lpVtbl -> SetActivateState(This,u) )
    ( (This)->lpVtbl -> UpdateSecureLockIcon(This,eSecureLock) )
    ( (This)->lpVtbl -> InitializeDownloadManager(This) )
    ( (This)->lpVtbl -> InitializeTransitionSite(This) )
    ( (This)->lpVtbl -> _Initialize(This,hwnd,pauto) )
    ( (This)->lpVtbl -> _CancelPendingNavigationAsync(This) )
    ( (This)->lpVtbl -> _CancelPendingView(This) )
    ( (This)->lpVtbl -> _MaySaveChanges(This) )
    ( (This)->lpVtbl -> _PauseOrResumeView(This,fPaused) )
    ( (This)->lpVtbl -> _DisableModeless(This) )
    ( (This)->lpVtbl -> _NavigateToPidl(This,pidl,grfHLNF,dwFlags) )
    ( (This)->lpVtbl -> _TryShell2Rename(This,psv,pidlNew) )
    ( (This)->lpVtbl -> _SwitchActivationNow(This) )
    ( (This)->lpVtbl -> _ExecChildren(This,punkBar,fBroadcast,pguidCmdGroup,nCmdID,nCmdexecopt,pvarargIn,pvarargOut) )
    ( (This)->lpVtbl -> _SendChildren(This,hwndBar,fBroadcast,uMsg,wParam,lParam) )
    ( (This)->lpVtbl -> GetFolderSetData(This,pfsd) )
    ( (This)->lpVtbl -> _OnFocusChange(This,itb) )
    ( (This)->lpVtbl -> v_ShowHideChildWindows(This,fChildOnly) )
    ( (This)->lpVtbl -> _get_itbLastFocus(This) )
    ( (This)->lpVtbl -> _put_itbLastFocus(This,itbLastFocus) )
    ( (This)->lpVtbl -> _UIActivateView(This,uState) )
    ( (This)->lpVtbl -> _GetViewBorderRect(This,prc) )
    ( (This)->lpVtbl -> _UpdateViewRectSize(This) )
    ( (This)->lpVtbl -> _ResizeNextBorder(This,itb) )
    ( (This)->lpVtbl -> _ResizeView(This) )
    ( (This)->lpVtbl -> _GetEffectiveClientArea(This,lprectBorder,hmon) )
    ( (This)->lpVtbl -> v_GetViewStream(This,pidl,grfMode,pwszName) )
    ( (This)->lpVtbl -> ForwardViewMsg(This,uMsg,wParam,lParam) )
    ( (This)->lpVtbl -> SetAcceleratorMenu(This,hacc) )
    ( (This)->lpVtbl -> _GetToolbarCount(This) )
    ( (This)->lpVtbl -> _GetToolbarItem(This,itb) )
    ( (This)->lpVtbl -> _SaveToolbars(This,pstm) )
    ( (This)->lpVtbl -> _LoadToolbars(This,pstm) )
    ( (This)->lpVtbl -> _CloseAndReleaseToolbars(This,fClose) )
    ( (This)->lpVtbl -> v_MayGetNextToolbarFocus(This,lpMsg,itbNext,citb,pptbi,phwnd) )
    ( (This)->lpVtbl -> _ResizeNextBorderHelper(This,itb,bUseHmonitor) )
    ( (This)->lpVtbl -> _FindTBar(This,punkSrc) )
    ( (This)->lpVtbl -> _SetFocus(This,ptbi,hwnd,lpMsg) )
    ( (This)->lpVtbl -> v_MayTranslateAccelerator(This,pmsg) )
    ( (This)->lpVtbl -> _GetBorderDWHelper(This,punkSrc,lprectBorder,bUseHmonitor) )
    ( (This)->lpVtbl -> v_CheckZoneCrossing(This,pidl) )
typedef
enum IEPDNFLAGS
    {
        IEPDN_BINDINGUI = 0x1
    } IEPDNFLAGS;
EXTERN_C const IID IID_IBrowserService3;
    typedef struct IBrowserService3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IBrowserService3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IBrowserService3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IBrowserService3 * This);
                      HRESULT ( STDMETHODCALLTYPE *GetParentSite )(
            IBrowserService3 * This,
            _Outptr_ IOleInPlaceSite **ppipsite);
                      HRESULT ( STDMETHODCALLTYPE *SetTitle )(
            IBrowserService3 * This,
            _In_ IShellView *psv,
            _In_ LPCWSTR pszName);
                      HRESULT ( STDMETHODCALLTYPE *GetTitle )(
            IBrowserService3 * This,
            _In_ IShellView *psv,
            _Out_writes_(cchName) LPWSTR pszName,
            DWORD cchName);
                      HRESULT ( STDMETHODCALLTYPE *GetOleObject )(
            IBrowserService3 * This,
            _Outptr_ IOleObject **ppobjv);
        HRESULT ( STDMETHODCALLTYPE *GetTravelLog )(
            IBrowserService3 * This,
                        ITravelLog **pptl);
                      HRESULT ( STDMETHODCALLTYPE *ShowControlWindow )(
            IBrowserService3 * This,
            UINT id,
            BOOL fShow);
                      HRESULT ( STDMETHODCALLTYPE *IsControlWindowShown )(
            IBrowserService3 * This,
            UINT id,
            _Out_ BOOL *pfShown);
                      HRESULT ( STDMETHODCALLTYPE *IEGetDisplayName )(
            IBrowserService3 * This,
            _In_ PCIDLIST_ABSOLUTE pidl,
            _Out_writes_(INTERNET_MAX_URL_LENGTH) LPWSTR pwszName,
            UINT uFlags);
                      HRESULT ( STDMETHODCALLTYPE *IEParseDisplayName )(
            IBrowserService3 * This,
            UINT uiCP,
            _In_ LPCWSTR pwszPath,
            _Outptr_ PIDLIST_ABSOLUTE *ppidlOut);
                      HRESULT ( STDMETHODCALLTYPE *DisplayParseError )(
            IBrowserService3 * This,
            HRESULT hres,
            _In_ LPCWSTR pwszPath);
                      HRESULT ( STDMETHODCALLTYPE *NavigateToPidl )(
            IBrowserService3 * This,
            _In_ PCIDLIST_ABSOLUTE pidl,
            DWORD grfHLNF);
                      HRESULT ( STDMETHODCALLTYPE *SetNavigateState )(
            IBrowserService3 * This,
            BNSTATE bnstate);
                      HRESULT ( STDMETHODCALLTYPE *GetNavigateState )(
            IBrowserService3 * This,
            _Out_ BNSTATE *pbnstate);
                      HRESULT ( STDMETHODCALLTYPE *NotifyRedirect )(
            IBrowserService3 * This,
            _In_ IShellView *psv,
            _In_ PCIDLIST_ABSOLUTE pidl,
            _Out_ BOOL *pfDidBrowse);
                      HRESULT ( STDMETHODCALLTYPE *UpdateWindowList )(
            IBrowserService3 * This);
        HRESULT ( STDMETHODCALLTYPE *UpdateBackForwardState )(
            IBrowserService3 * This);
                      HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            IBrowserService3 * This,
            DWORD dwFlags,
            DWORD dwFlagMask);
                      HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            IBrowserService3 * This,
            _Out_ DWORD *pdwFlags);
                      HRESULT ( STDMETHODCALLTYPE *CanNavigateNow )(
            IBrowserService3 * This);
                      HRESULT ( STDMETHODCALLTYPE *GetPidl )(
            IBrowserService3 * This,
            _Out_ PIDLIST_ABSOLUTE *ppidl);
                      HRESULT ( STDMETHODCALLTYPE *SetReferrer )(
            IBrowserService3 * This,
            _In_ PCIDLIST_ABSOLUTE pidl);
                      DWORD ( STDMETHODCALLTYPE *GetBrowserIndex )(
            IBrowserService3 * This);
                      HRESULT ( STDMETHODCALLTYPE *GetBrowserByIndex )(
            IBrowserService3 * This,
            DWORD dwID,
            _Outptr_ IUnknown **ppunk);
                      HRESULT ( STDMETHODCALLTYPE *GetHistoryObject )(
            IBrowserService3 * This,
            _Outptr_ IOleObject **ppole,
            _Outptr_ IStream **pstm,
            _Outptr_ IBindCtx **ppbc);
                      HRESULT ( STDMETHODCALLTYPE *SetHistoryObject )(
            IBrowserService3 * This,
            _In_ IOleObject *pole,
            BOOL fIsLocalAnchor);
                      HRESULT ( STDMETHODCALLTYPE *CacheOLEServer )(
            IBrowserService3 * This,
            _In_ IOleObject *pole);
                      HRESULT ( STDMETHODCALLTYPE *GetSetCodePage )(
            IBrowserService3 * This,
            _In_ VARIANT *pvarIn,
            _Out_ VARIANT *pvarOut);
                      HRESULT ( STDMETHODCALLTYPE *OnHttpEquiv )(
            IBrowserService3 * This,
            _In_ IShellView *psv,
            BOOL fDone,
            _In_ VARIANT *pvarargIn,
            _Out_ VARIANT *pvarargOut);
                      HRESULT ( STDMETHODCALLTYPE *GetPalette )(
            IBrowserService3 * This,
            _Out_ HPALETTE *hpal);
                      HRESULT ( STDMETHODCALLTYPE *RegisterWindow )(
            IBrowserService3 * This,
            BOOL fForceRegister,
            int swc);
        LRESULT ( STDMETHODCALLTYPE *WndProcBS )(
            IBrowserService3 * This,
            _In_ HWND hwnd,
            _In_ UINT uMsg,
            _In_ WPARAM wParam,
            _In_ LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *SetAsDefFolderSettings )(
            IBrowserService3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetViewRect )(
            IBrowserService3 * This,
            _Out_ RECT *prc);
        HRESULT ( STDMETHODCALLTYPE *OnSize )(
            IBrowserService3 * This,
            _In_ WPARAM wParam);
        HRESULT ( STDMETHODCALLTYPE *OnCreate )(
            IBrowserService3 * This,
            _In_ struct tagCREATESTRUCTW *pcs);
        LRESULT ( STDMETHODCALLTYPE *OnCommand )(
            IBrowserService3 * This,
            _In_ WPARAM wParam,
            _In_ LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *OnDestroy )(
            IBrowserService3 * This);
        LRESULT ( STDMETHODCALLTYPE *OnNotify )(
            IBrowserService3 * This,
            _In_ struct tagNMHDR *pnm);
        HRESULT ( STDMETHODCALLTYPE *OnSetFocus )(
            IBrowserService3 * This);
        HRESULT ( STDMETHODCALLTYPE *OnFrameWindowActivateBS )(
            IBrowserService3 * This,
            _In_ BOOL fActive);
        HRESULT ( STDMETHODCALLTYPE *ReleaseShellView )(
            IBrowserService3 * This);
        HRESULT ( STDMETHODCALLTYPE *ActivatePendingView )(
            IBrowserService3 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateViewWindow )(
            IBrowserService3 * This,
            _In_ IShellView *psvNew,
            _In_ IShellView *psvOld,
            _In_ LPRECT prcView,
            _Out_ HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *CreateBrowserPropSheetExt )(
            IBrowserService3 * This,
            _In_ REFIID riid,
            _Outptr_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetViewWindow )(
            IBrowserService3 * This,
            _Out_ HWND *phwndView);
        HRESULT ( STDMETHODCALLTYPE *GetBaseBrowserData )(
            IBrowserService3 * This,
            _Outptr_ LPCBASEBROWSERDATA *pbbd);
        LPBASEBROWSERDATA ( STDMETHODCALLTYPE *PutBaseBrowserData )(
            IBrowserService3 * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeTravelLog )(
            IBrowserService3 * This,
            _In_ ITravelLog *ptl,
            _In_ DWORD dw);
        HRESULT ( STDMETHODCALLTYPE *SetTopBrowser )(
            IBrowserService3 * This);
        HRESULT ( STDMETHODCALLTYPE *Offline )(
            IBrowserService3 * This,
            _In_ int iCmd);
        HRESULT ( STDMETHODCALLTYPE *AllowViewResize )(
            IBrowserService3 * This,
            _In_ BOOL f);
        HRESULT ( STDMETHODCALLTYPE *SetActivateState )(
            IBrowserService3 * This,
            _In_ UINT u);
        HRESULT ( STDMETHODCALLTYPE *UpdateSecureLockIcon )(
            IBrowserService3 * This,
            _In_ int eSecureLock);
        HRESULT ( STDMETHODCALLTYPE *InitializeDownloadManager )(
            IBrowserService3 * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeTransitionSite )(
            IBrowserService3 * This);
        HRESULT ( STDMETHODCALLTYPE *_Initialize )(
            IBrowserService3 * This,
            _In_ HWND hwnd,
            _In_ IUnknown *pauto);
        HRESULT ( STDMETHODCALLTYPE *_CancelPendingNavigationAsync )(
            IBrowserService3 * This);
        HRESULT ( STDMETHODCALLTYPE *_CancelPendingView )(
            IBrowserService3 * This);
        HRESULT ( STDMETHODCALLTYPE *_MaySaveChanges )(
            IBrowserService3 * This);
        HRESULT ( STDMETHODCALLTYPE *_PauseOrResumeView )(
            IBrowserService3 * This,
            BOOL fPaused);
        HRESULT ( STDMETHODCALLTYPE *_DisableModeless )(
            IBrowserService3 * This);
        HRESULT ( STDMETHODCALLTYPE *_NavigateToPidl )(
            IBrowserService3 * This,
            _In_ PCIDLIST_ABSOLUTE pidl,
            _In_ DWORD grfHLNF,
            _In_ DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *_TryShell2Rename )(
            IBrowserService3 * This,
            _In_ IShellView *psv,
            _In_ PCIDLIST_ABSOLUTE pidlNew);
        HRESULT ( STDMETHODCALLTYPE *_SwitchActivationNow )(
            IBrowserService3 * This);
        HRESULT ( STDMETHODCALLTYPE *_ExecChildren )(
            IBrowserService3 * This,
            _In_ IUnknown *punkBar,
            _In_ BOOL fBroadcast,
            _In_opt_ const GUID *pguidCmdGroup,
            _In_ DWORD nCmdID,
            _In_ DWORD nCmdexecopt,
            _In_opt_ VARIANTARG *pvarargIn,
            _Inout_opt_ VARIANTARG *pvarargOut);
        HRESULT ( STDMETHODCALLTYPE *_SendChildren )(
            IBrowserService3 * This,
            _In_ HWND hwndBar,
            _In_ BOOL fBroadcast,
            _In_ UINT uMsg,
            _In_ WPARAM wParam,
            _In_ LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *GetFolderSetData )(
            IBrowserService3 * This,
                        struct tagFolderSetData *pfsd);
        HRESULT ( STDMETHODCALLTYPE *_OnFocusChange )(
            IBrowserService3 * This,
            _In_ UINT itb);
        HRESULT ( STDMETHODCALLTYPE *v_ShowHideChildWindows )(
            IBrowserService3 * This,
            _In_ BOOL fChildOnly);
        UINT ( STDMETHODCALLTYPE *_get_itbLastFocus )(
            IBrowserService3 * This);
        HRESULT ( STDMETHODCALLTYPE *_put_itbLastFocus )(
            IBrowserService3 * This,
            _In_ UINT itbLastFocus);
        HRESULT ( STDMETHODCALLTYPE *_UIActivateView )(
            IBrowserService3 * This,
            _In_ UINT uState);
        HRESULT ( STDMETHODCALLTYPE *_GetViewBorderRect )(
            IBrowserService3 * This,
                        RECT *prc);
        HRESULT ( STDMETHODCALLTYPE *_UpdateViewRectSize )(
            IBrowserService3 * This);
        HRESULT ( STDMETHODCALLTYPE *_ResizeNextBorder )(
            IBrowserService3 * This,
            _In_ UINT itb);
        HRESULT ( STDMETHODCALLTYPE *_ResizeView )(
            IBrowserService3 * This);
        HRESULT ( STDMETHODCALLTYPE *_GetEffectiveClientArea )(
            IBrowserService3 * This,
            _Out_ LPRECT lprectBorder,
            _In_ HMONITOR hmon);
        IStream *( STDMETHODCALLTYPE *v_GetViewStream )(
            IBrowserService3 * This,
                       PCIDLIST_ABSOLUTE pidl,
            _In_ DWORD grfMode,
            _In_ LPCWSTR pwszName);
        LRESULT ( STDMETHODCALLTYPE *ForwardViewMsg )(
            IBrowserService3 * This,
            _In_ UINT uMsg,
            _In_ WPARAM wParam,
            _In_ LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *SetAcceleratorMenu )(
            IBrowserService3 * This,
            _In_ HACCEL hacc);
        int ( STDMETHODCALLTYPE *_GetToolbarCount )(
            IBrowserService3 * This);
        LPTOOLBARITEM ( STDMETHODCALLTYPE *_GetToolbarItem )(
            IBrowserService3 * This,
            _In_ int itb);
        HRESULT ( STDMETHODCALLTYPE *_SaveToolbars )(
            IBrowserService3 * This,
                       IStream *pstm);
        HRESULT ( STDMETHODCALLTYPE *_LoadToolbars )(
            IBrowserService3 * This,
            _In_ IStream *pstm);
        HRESULT ( STDMETHODCALLTYPE *_CloseAndReleaseToolbars )(
            IBrowserService3 * This,
            BOOL fClose);
        HRESULT ( STDMETHODCALLTYPE *v_MayGetNextToolbarFocus )(
            IBrowserService3 * This,
            _In_ LPMSG lpMsg,
            _In_ UINT itbNext,
            _In_ int citb,
            _Out_ LPTOOLBARITEM *pptbi,
            _Out_ HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *_ResizeNextBorderHelper )(
            IBrowserService3 * This,
            UINT itb,
            BOOL bUseHmonitor);
        UINT ( STDMETHODCALLTYPE *_FindTBar )(
            IBrowserService3 * This,
            _In_ IUnknown *punkSrc);
        HRESULT ( STDMETHODCALLTYPE *_SetFocus )(
            IBrowserService3 * This,
            _In_ LPTOOLBARITEM ptbi,
            _In_ HWND hwnd,
            _In_ LPMSG lpMsg);
        HRESULT ( STDMETHODCALLTYPE *v_MayTranslateAccelerator )(
            IBrowserService3 * This,
                       MSG *pmsg);
        HRESULT ( STDMETHODCALLTYPE *_GetBorderDWHelper )(
            IBrowserService3 * This,
            _In_ IUnknown *punkSrc,
            _Out_ LPRECT lprectBorder,
            _In_ BOOL bUseHmonitor);
        HRESULT ( STDMETHODCALLTYPE *v_CheckZoneCrossing )(
            IBrowserService3 * This,
            _In_ PCIDLIST_ABSOLUTE pidl);
        HRESULT ( STDMETHODCALLTYPE *_PositionViewWindow )(
            IBrowserService3 * This,
            _In_ HWND hwnd,
            _In_ LPRECT prc);
        HRESULT ( STDMETHODCALLTYPE *IEParseDisplayNameEx )(
            IBrowserService3 * This,
            _In_ UINT uiCP,
            _In_ LPCWSTR pwszPath,
            _In_ DWORD dwFlags,
            _Outptr_ PIDLIST_ABSOLUTE *ppidlOut);
        END_INTERFACE
    } IBrowserService3Vtbl;
    interface IBrowserService3
    {
        CONST_VTBL struct IBrowserService3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetParentSite(This,ppipsite) )
    ( (This)->lpVtbl -> SetTitle(This,psv,pszName) )
    ( (This)->lpVtbl -> GetTitle(This,psv,pszName,cchName) )
    ( (This)->lpVtbl -> GetOleObject(This,ppobjv) )
    ( (This)->lpVtbl -> GetTravelLog(This,pptl) )
    ( (This)->lpVtbl -> ShowControlWindow(This,id,fShow) )
    ( (This)->lpVtbl -> IsControlWindowShown(This,id,pfShown) )
    ( (This)->lpVtbl -> IEGetDisplayName(This,pidl,pwszName,uFlags) )
    ( (This)->lpVtbl -> IEParseDisplayName(This,uiCP,pwszPath,ppidlOut) )
    ( (This)->lpVtbl -> DisplayParseError(This,hres,pwszPath) )
    ( (This)->lpVtbl -> NavigateToPidl(This,pidl,grfHLNF) )
    ( (This)->lpVtbl -> SetNavigateState(This,bnstate) )
    ( (This)->lpVtbl -> GetNavigateState(This,pbnstate) )
    ( (This)->lpVtbl -> NotifyRedirect(This,psv,pidl,pfDidBrowse) )
    ( (This)->lpVtbl -> UpdateWindowList(This) )
    ( (This)->lpVtbl -> UpdateBackForwardState(This) )
    ( (This)->lpVtbl -> SetFlags(This,dwFlags,dwFlagMask) )
    ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> CanNavigateNow(This) )
    ( (This)->lpVtbl -> GetPidl(This,ppidl) )
    ( (This)->lpVtbl -> SetReferrer(This,pidl) )
    ( (This)->lpVtbl -> GetBrowserIndex(This) )
    ( (This)->lpVtbl -> GetBrowserByIndex(This,dwID,ppunk) )
    ( (This)->lpVtbl -> GetHistoryObject(This,ppole,pstm,ppbc) )
    ( (This)->lpVtbl -> SetHistoryObject(This,pole,fIsLocalAnchor) )
    ( (This)->lpVtbl -> CacheOLEServer(This,pole) )
    ( (This)->lpVtbl -> GetSetCodePage(This,pvarIn,pvarOut) )
    ( (This)->lpVtbl -> OnHttpEquiv(This,psv,fDone,pvarargIn,pvarargOut) )
    ( (This)->lpVtbl -> GetPalette(This,hpal) )
    ( (This)->lpVtbl -> RegisterWindow(This,fForceRegister,swc) )
    ( (This)->lpVtbl -> WndProcBS(This,hwnd,uMsg,wParam,lParam) )
    ( (This)->lpVtbl -> SetAsDefFolderSettings(This) )
    ( (This)->lpVtbl -> GetViewRect(This,prc) )
    ( (This)->lpVtbl -> OnSize(This,wParam) )
    ( (This)->lpVtbl -> OnCreate(This,pcs) )
    ( (This)->lpVtbl -> OnCommand(This,wParam,lParam) )
    ( (This)->lpVtbl -> OnDestroy(This) )
    ( (This)->lpVtbl -> OnNotify(This,pnm) )
    ( (This)->lpVtbl -> OnSetFocus(This) )
    ( (This)->lpVtbl -> OnFrameWindowActivateBS(This,fActive) )
    ( (This)->lpVtbl -> ReleaseShellView(This) )
    ( (This)->lpVtbl -> ActivatePendingView(This) )
    ( (This)->lpVtbl -> CreateViewWindow(This,psvNew,psvOld,prcView,phwnd) )
    ( (This)->lpVtbl -> CreateBrowserPropSheetExt(This,riid,ppv) )
    ( (This)->lpVtbl -> GetViewWindow(This,phwndView) )
    ( (This)->lpVtbl -> GetBaseBrowserData(This,pbbd) )
    ( (This)->lpVtbl -> PutBaseBrowserData(This) )
    ( (This)->lpVtbl -> InitializeTravelLog(This,ptl,dw) )
    ( (This)->lpVtbl -> SetTopBrowser(This) )
    ( (This)->lpVtbl -> Offline(This,iCmd) )
    ( (This)->lpVtbl -> AllowViewResize(This,f) )
    ( (This)->lpVtbl -> SetActivateState(This,u) )
    ( (This)->lpVtbl -> UpdateSecureLockIcon(This,eSecureLock) )
    ( (This)->lpVtbl -> InitializeDownloadManager(This) )
    ( (This)->lpVtbl -> InitializeTransitionSite(This) )
    ( (This)->lpVtbl -> _Initialize(This,hwnd,pauto) )
    ( (This)->lpVtbl -> _CancelPendingNavigationAsync(This) )
    ( (This)->lpVtbl -> _CancelPendingView(This) )
    ( (This)->lpVtbl -> _MaySaveChanges(This) )
    ( (This)->lpVtbl -> _PauseOrResumeView(This,fPaused) )
    ( (This)->lpVtbl -> _DisableModeless(This) )
    ( (This)->lpVtbl -> _NavigateToPidl(This,pidl,grfHLNF,dwFlags) )
    ( (This)->lpVtbl -> _TryShell2Rename(This,psv,pidlNew) )
    ( (This)->lpVtbl -> _SwitchActivationNow(This) )
    ( (This)->lpVtbl -> _ExecChildren(This,punkBar,fBroadcast,pguidCmdGroup,nCmdID,nCmdexecopt,pvarargIn,pvarargOut) )
    ( (This)->lpVtbl -> _SendChildren(This,hwndBar,fBroadcast,uMsg,wParam,lParam) )
    ( (This)->lpVtbl -> GetFolderSetData(This,pfsd) )
    ( (This)->lpVtbl -> _OnFocusChange(This,itb) )
    ( (This)->lpVtbl -> v_ShowHideChildWindows(This,fChildOnly) )
    ( (This)->lpVtbl -> _get_itbLastFocus(This) )
    ( (This)->lpVtbl -> _put_itbLastFocus(This,itbLastFocus) )
    ( (This)->lpVtbl -> _UIActivateView(This,uState) )
    ( (This)->lpVtbl -> _GetViewBorderRect(This,prc) )
    ( (This)->lpVtbl -> _UpdateViewRectSize(This) )
    ( (This)->lpVtbl -> _ResizeNextBorder(This,itb) )
    ( (This)->lpVtbl -> _ResizeView(This) )
    ( (This)->lpVtbl -> _GetEffectiveClientArea(This,lprectBorder,hmon) )
    ( (This)->lpVtbl -> v_GetViewStream(This,pidl,grfMode,pwszName) )
    ( (This)->lpVtbl -> ForwardViewMsg(This,uMsg,wParam,lParam) )
    ( (This)->lpVtbl -> SetAcceleratorMenu(This,hacc) )
    ( (This)->lpVtbl -> _GetToolbarCount(This) )
    ( (This)->lpVtbl -> _GetToolbarItem(This,itb) )
    ( (This)->lpVtbl -> _SaveToolbars(This,pstm) )
    ( (This)->lpVtbl -> _LoadToolbars(This,pstm) )
    ( (This)->lpVtbl -> _CloseAndReleaseToolbars(This,fClose) )
    ( (This)->lpVtbl -> v_MayGetNextToolbarFocus(This,lpMsg,itbNext,citb,pptbi,phwnd) )
    ( (This)->lpVtbl -> _ResizeNextBorderHelper(This,itb,bUseHmonitor) )
    ( (This)->lpVtbl -> _FindTBar(This,punkSrc) )
    ( (This)->lpVtbl -> _SetFocus(This,ptbi,hwnd,lpMsg) )
    ( (This)->lpVtbl -> v_MayTranslateAccelerator(This,pmsg) )
    ( (This)->lpVtbl -> _GetBorderDWHelper(This,punkSrc,lprectBorder,bUseHmonitor) )
    ( (This)->lpVtbl -> v_CheckZoneCrossing(This,pidl) )
    ( (This)->lpVtbl -> _PositionViewWindow(This,hwnd,prc) )
    ( (This)->lpVtbl -> IEParseDisplayNameEx(This,uiCP,pwszPath,dwFlags,ppidlOut) )
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_IBrowserService4;
    typedef struct IBrowserService4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IBrowserService4 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IBrowserService4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IBrowserService4 * This);
                      HRESULT ( STDMETHODCALLTYPE *GetParentSite )(
            IBrowserService4 * This,
            _Outptr_ IOleInPlaceSite **ppipsite);
                      HRESULT ( STDMETHODCALLTYPE *SetTitle )(
            IBrowserService4 * This,
            _In_ IShellView *psv,
            _In_ LPCWSTR pszName);
                      HRESULT ( STDMETHODCALLTYPE *GetTitle )(
            IBrowserService4 * This,
            _In_ IShellView *psv,
            _Out_writes_(cchName) LPWSTR pszName,
            DWORD cchName);
                      HRESULT ( STDMETHODCALLTYPE *GetOleObject )(
            IBrowserService4 * This,
            _Outptr_ IOleObject **ppobjv);
        HRESULT ( STDMETHODCALLTYPE *GetTravelLog )(
            IBrowserService4 * This,
                        ITravelLog **pptl);
                      HRESULT ( STDMETHODCALLTYPE *ShowControlWindow )(
            IBrowserService4 * This,
            UINT id,
            BOOL fShow);
                      HRESULT ( STDMETHODCALLTYPE *IsControlWindowShown )(
            IBrowserService4 * This,
            UINT id,
            _Out_ BOOL *pfShown);
                      HRESULT ( STDMETHODCALLTYPE *IEGetDisplayName )(
            IBrowserService4 * This,
            _In_ PCIDLIST_ABSOLUTE pidl,
            _Out_writes_(INTERNET_MAX_URL_LENGTH) LPWSTR pwszName,
            UINT uFlags);
                      HRESULT ( STDMETHODCALLTYPE *IEParseDisplayName )(
            IBrowserService4 * This,
            UINT uiCP,
            _In_ LPCWSTR pwszPath,
            _Outptr_ PIDLIST_ABSOLUTE *ppidlOut);
                      HRESULT ( STDMETHODCALLTYPE *DisplayParseError )(
            IBrowserService4 * This,
            HRESULT hres,
            _In_ LPCWSTR pwszPath);
                      HRESULT ( STDMETHODCALLTYPE *NavigateToPidl )(
            IBrowserService4 * This,
            _In_ PCIDLIST_ABSOLUTE pidl,
            DWORD grfHLNF);
                      HRESULT ( STDMETHODCALLTYPE *SetNavigateState )(
            IBrowserService4 * This,
            BNSTATE bnstate);
                      HRESULT ( STDMETHODCALLTYPE *GetNavigateState )(
            IBrowserService4 * This,
            _Out_ BNSTATE *pbnstate);
                      HRESULT ( STDMETHODCALLTYPE *NotifyRedirect )(
            IBrowserService4 * This,
            _In_ IShellView *psv,
            _In_ PCIDLIST_ABSOLUTE pidl,
            _Out_ BOOL *pfDidBrowse);
                      HRESULT ( STDMETHODCALLTYPE *UpdateWindowList )(
            IBrowserService4 * This);
        HRESULT ( STDMETHODCALLTYPE *UpdateBackForwardState )(
            IBrowserService4 * This);
                      HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            IBrowserService4 * This,
            DWORD dwFlags,
            DWORD dwFlagMask);
                      HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            IBrowserService4 * This,
            _Out_ DWORD *pdwFlags);
                      HRESULT ( STDMETHODCALLTYPE *CanNavigateNow )(
            IBrowserService4 * This);
                      HRESULT ( STDMETHODCALLTYPE *GetPidl )(
            IBrowserService4 * This,
            _Out_ PIDLIST_ABSOLUTE *ppidl);
                      HRESULT ( STDMETHODCALLTYPE *SetReferrer )(
            IBrowserService4 * This,
            _In_ PCIDLIST_ABSOLUTE pidl);
                      DWORD ( STDMETHODCALLTYPE *GetBrowserIndex )(
            IBrowserService4 * This);
                      HRESULT ( STDMETHODCALLTYPE *GetBrowserByIndex )(
            IBrowserService4 * This,
            DWORD dwID,
            _Outptr_ IUnknown **ppunk);
                      HRESULT ( STDMETHODCALLTYPE *GetHistoryObject )(
            IBrowserService4 * This,
            _Outptr_ IOleObject **ppole,
            _Outptr_ IStream **pstm,
            _Outptr_ IBindCtx **ppbc);
                      HRESULT ( STDMETHODCALLTYPE *SetHistoryObject )(
            IBrowserService4 * This,
            _In_ IOleObject *pole,
            BOOL fIsLocalAnchor);
                      HRESULT ( STDMETHODCALLTYPE *CacheOLEServer )(
            IBrowserService4 * This,
            _In_ IOleObject *pole);
                      HRESULT ( STDMETHODCALLTYPE *GetSetCodePage )(
            IBrowserService4 * This,
            _In_ VARIANT *pvarIn,
            _Out_ VARIANT *pvarOut);
                      HRESULT ( STDMETHODCALLTYPE *OnHttpEquiv )(
            IBrowserService4 * This,
            _In_ IShellView *psv,
            BOOL fDone,
            _In_ VARIANT *pvarargIn,
            _Out_ VARIANT *pvarargOut);
                      HRESULT ( STDMETHODCALLTYPE *GetPalette )(
            IBrowserService4 * This,
            _Out_ HPALETTE *hpal);
                      HRESULT ( STDMETHODCALLTYPE *RegisterWindow )(
            IBrowserService4 * This,
            BOOL fForceRegister,
            int swc);
        LRESULT ( STDMETHODCALLTYPE *WndProcBS )(
            IBrowserService4 * This,
            _In_ HWND hwnd,
            _In_ UINT uMsg,
            _In_ WPARAM wParam,
            _In_ LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *SetAsDefFolderSettings )(
            IBrowserService4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetViewRect )(
            IBrowserService4 * This,
            _Out_ RECT *prc);
        HRESULT ( STDMETHODCALLTYPE *OnSize )(
            IBrowserService4 * This,
            _In_ WPARAM wParam);
        HRESULT ( STDMETHODCALLTYPE *OnCreate )(
            IBrowserService4 * This,
            _In_ struct tagCREATESTRUCTW *pcs);
        LRESULT ( STDMETHODCALLTYPE *OnCommand )(
            IBrowserService4 * This,
            _In_ WPARAM wParam,
            _In_ LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *OnDestroy )(
            IBrowserService4 * This);
        LRESULT ( STDMETHODCALLTYPE *OnNotify )(
            IBrowserService4 * This,
            _In_ struct tagNMHDR *pnm);
        HRESULT ( STDMETHODCALLTYPE *OnSetFocus )(
            IBrowserService4 * This);
        HRESULT ( STDMETHODCALLTYPE *OnFrameWindowActivateBS )(
            IBrowserService4 * This,
            _In_ BOOL fActive);
        HRESULT ( STDMETHODCALLTYPE *ReleaseShellView )(
            IBrowserService4 * This);
        HRESULT ( STDMETHODCALLTYPE *ActivatePendingView )(
            IBrowserService4 * This);
        HRESULT ( STDMETHODCALLTYPE *CreateViewWindow )(
            IBrowserService4 * This,
            _In_ IShellView *psvNew,
            _In_ IShellView *psvOld,
            _In_ LPRECT prcView,
            _Out_ HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *CreateBrowserPropSheetExt )(
            IBrowserService4 * This,
            _In_ REFIID riid,
            _Outptr_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *GetViewWindow )(
            IBrowserService4 * This,
            _Out_ HWND *phwndView);
        HRESULT ( STDMETHODCALLTYPE *GetBaseBrowserData )(
            IBrowserService4 * This,
            _Outptr_ LPCBASEBROWSERDATA *pbbd);
        LPBASEBROWSERDATA ( STDMETHODCALLTYPE *PutBaseBrowserData )(
            IBrowserService4 * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeTravelLog )(
            IBrowserService4 * This,
            _In_ ITravelLog *ptl,
            _In_ DWORD dw);
        HRESULT ( STDMETHODCALLTYPE *SetTopBrowser )(
            IBrowserService4 * This);
        HRESULT ( STDMETHODCALLTYPE *Offline )(
            IBrowserService4 * This,
            _In_ int iCmd);
        HRESULT ( STDMETHODCALLTYPE *AllowViewResize )(
            IBrowserService4 * This,
            _In_ BOOL f);
        HRESULT ( STDMETHODCALLTYPE *SetActivateState )(
            IBrowserService4 * This,
            _In_ UINT u);
        HRESULT ( STDMETHODCALLTYPE *UpdateSecureLockIcon )(
            IBrowserService4 * This,
            _In_ int eSecureLock);
        HRESULT ( STDMETHODCALLTYPE *InitializeDownloadManager )(
            IBrowserService4 * This);
        HRESULT ( STDMETHODCALLTYPE *InitializeTransitionSite )(
            IBrowserService4 * This);
        HRESULT ( STDMETHODCALLTYPE *_Initialize )(
            IBrowserService4 * This,
            _In_ HWND hwnd,
            _In_ IUnknown *pauto);
        HRESULT ( STDMETHODCALLTYPE *_CancelPendingNavigationAsync )(
            IBrowserService4 * This);
        HRESULT ( STDMETHODCALLTYPE *_CancelPendingView )(
            IBrowserService4 * This);
        HRESULT ( STDMETHODCALLTYPE *_MaySaveChanges )(
            IBrowserService4 * This);
        HRESULT ( STDMETHODCALLTYPE *_PauseOrResumeView )(
            IBrowserService4 * This,
            BOOL fPaused);
        HRESULT ( STDMETHODCALLTYPE *_DisableModeless )(
            IBrowserService4 * This);
        HRESULT ( STDMETHODCALLTYPE *_NavigateToPidl )(
            IBrowserService4 * This,
            _In_ PCIDLIST_ABSOLUTE pidl,
            _In_ DWORD grfHLNF,
            _In_ DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *_TryShell2Rename )(
            IBrowserService4 * This,
            _In_ IShellView *psv,
            _In_ PCIDLIST_ABSOLUTE pidlNew);
        HRESULT ( STDMETHODCALLTYPE *_SwitchActivationNow )(
            IBrowserService4 * This);
        HRESULT ( STDMETHODCALLTYPE *_ExecChildren )(
            IBrowserService4 * This,
            _In_ IUnknown *punkBar,
            _In_ BOOL fBroadcast,
            _In_opt_ const GUID *pguidCmdGroup,
            _In_ DWORD nCmdID,
            _In_ DWORD nCmdexecopt,
            _In_opt_ VARIANTARG *pvarargIn,
            _Inout_opt_ VARIANTARG *pvarargOut);
        HRESULT ( STDMETHODCALLTYPE *_SendChildren )(
            IBrowserService4 * This,
            _In_ HWND hwndBar,
            _In_ BOOL fBroadcast,
            _In_ UINT uMsg,
            _In_ WPARAM wParam,
            _In_ LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *GetFolderSetData )(
            IBrowserService4 * This,
                        struct tagFolderSetData *pfsd);
        HRESULT ( STDMETHODCALLTYPE *_OnFocusChange )(
            IBrowserService4 * This,
            _In_ UINT itb);
        HRESULT ( STDMETHODCALLTYPE *v_ShowHideChildWindows )(
            IBrowserService4 * This,
            _In_ BOOL fChildOnly);
        UINT ( STDMETHODCALLTYPE *_get_itbLastFocus )(
            IBrowserService4 * This);
        HRESULT ( STDMETHODCALLTYPE *_put_itbLastFocus )(
            IBrowserService4 * This,
            _In_ UINT itbLastFocus);
        HRESULT ( STDMETHODCALLTYPE *_UIActivateView )(
            IBrowserService4 * This,
            _In_ UINT uState);
        HRESULT ( STDMETHODCALLTYPE *_GetViewBorderRect )(
            IBrowserService4 * This,
                        RECT *prc);
        HRESULT ( STDMETHODCALLTYPE *_UpdateViewRectSize )(
            IBrowserService4 * This);
        HRESULT ( STDMETHODCALLTYPE *_ResizeNextBorder )(
            IBrowserService4 * This,
            _In_ UINT itb);
        HRESULT ( STDMETHODCALLTYPE *_ResizeView )(
            IBrowserService4 * This);
        HRESULT ( STDMETHODCALLTYPE *_GetEffectiveClientArea )(
            IBrowserService4 * This,
            _Out_ LPRECT lprectBorder,
            _In_ HMONITOR hmon);
        IStream *( STDMETHODCALLTYPE *v_GetViewStream )(
            IBrowserService4 * This,
                       PCIDLIST_ABSOLUTE pidl,
            _In_ DWORD grfMode,
            _In_ LPCWSTR pwszName);
        LRESULT ( STDMETHODCALLTYPE *ForwardViewMsg )(
            IBrowserService4 * This,
            _In_ UINT uMsg,
            _In_ WPARAM wParam,
            _In_ LPARAM lParam);
        HRESULT ( STDMETHODCALLTYPE *SetAcceleratorMenu )(
            IBrowserService4 * This,
            _In_ HACCEL hacc);
        int ( STDMETHODCALLTYPE *_GetToolbarCount )(
            IBrowserService4 * This);
        LPTOOLBARITEM ( STDMETHODCALLTYPE *_GetToolbarItem )(
            IBrowserService4 * This,
            _In_ int itb);
        HRESULT ( STDMETHODCALLTYPE *_SaveToolbars )(
            IBrowserService4 * This,
                       IStream *pstm);
        HRESULT ( STDMETHODCALLTYPE *_LoadToolbars )(
            IBrowserService4 * This,
            _In_ IStream *pstm);
        HRESULT ( STDMETHODCALLTYPE *_CloseAndReleaseToolbars )(
            IBrowserService4 * This,
            BOOL fClose);
        HRESULT ( STDMETHODCALLTYPE *v_MayGetNextToolbarFocus )(
            IBrowserService4 * This,
            _In_ LPMSG lpMsg,
            _In_ UINT itbNext,
            _In_ int citb,
            _Out_ LPTOOLBARITEM *pptbi,
            _Out_ HWND *phwnd);
        HRESULT ( STDMETHODCALLTYPE *_ResizeNextBorderHelper )(
            IBrowserService4 * This,
            UINT itb,
            BOOL bUseHmonitor);
        UINT ( STDMETHODCALLTYPE *_FindTBar )(
            IBrowserService4 * This,
            _In_ IUnknown *punkSrc);
        HRESULT ( STDMETHODCALLTYPE *_SetFocus )(
            IBrowserService4 * This,
            _In_ LPTOOLBARITEM ptbi,
            _In_ HWND hwnd,
            _In_ LPMSG lpMsg);
        HRESULT ( STDMETHODCALLTYPE *v_MayTranslateAccelerator )(
            IBrowserService4 * This,
                       MSG *pmsg);
        HRESULT ( STDMETHODCALLTYPE *_GetBorderDWHelper )(
            IBrowserService4 * This,
            _In_ IUnknown *punkSrc,
            _Out_ LPRECT lprectBorder,
            _In_ BOOL bUseHmonitor);
        HRESULT ( STDMETHODCALLTYPE *v_CheckZoneCrossing )(
            IBrowserService4 * This,
            _In_ PCIDLIST_ABSOLUTE pidl);
        HRESULT ( STDMETHODCALLTYPE *_PositionViewWindow )(
            IBrowserService4 * This,
            _In_ HWND hwnd,
            _In_ LPRECT prc);
        HRESULT ( STDMETHODCALLTYPE *IEParseDisplayNameEx )(
            IBrowserService4 * This,
            _In_ UINT uiCP,
            _In_ LPCWSTR pwszPath,
            _In_ DWORD dwFlags,
            _Outptr_ PIDLIST_ABSOLUTE *ppidlOut);
        HRESULT ( STDMETHODCALLTYPE *ActivateView )(
            IBrowserService4 * This,
                       BOOL fPendingView);
        HRESULT ( STDMETHODCALLTYPE *SaveViewState )(
            IBrowserService4 * This);
        HRESULT ( STDMETHODCALLTYPE *_ResizeAllBorders )(
            IBrowserService4 * This);
        END_INTERFACE
    } IBrowserService4Vtbl;
    interface IBrowserService4
    {
        CONST_VTBL struct IBrowserService4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetParentSite(This,ppipsite) )
    ( (This)->lpVtbl -> SetTitle(This,psv,pszName) )
    ( (This)->lpVtbl -> GetTitle(This,psv,pszName,cchName) )
    ( (This)->lpVtbl -> GetOleObject(This,ppobjv) )
    ( (This)->lpVtbl -> GetTravelLog(This,pptl) )
    ( (This)->lpVtbl -> ShowControlWindow(This,id,fShow) )
    ( (This)->lpVtbl -> IsControlWindowShown(This,id,pfShown) )
    ( (This)->lpVtbl -> IEGetDisplayName(This,pidl,pwszName,uFlags) )
    ( (This)->lpVtbl -> IEParseDisplayName(This,uiCP,pwszPath,ppidlOut) )
    ( (This)->lpVtbl -> DisplayParseError(This,hres,pwszPath) )
    ( (This)->lpVtbl -> NavigateToPidl(This,pidl,grfHLNF) )
    ( (This)->lpVtbl -> SetNavigateState(This,bnstate) )
    ( (This)->lpVtbl -> GetNavigateState(This,pbnstate) )
    ( (This)->lpVtbl -> NotifyRedirect(This,psv,pidl,pfDidBrowse) )
    ( (This)->lpVtbl -> UpdateWindowList(This) )
    ( (This)->lpVtbl -> UpdateBackForwardState(This) )
    ( (This)->lpVtbl -> SetFlags(This,dwFlags,dwFlagMask) )
    ( (This)->lpVtbl -> GetFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> CanNavigateNow(This) )
    ( (This)->lpVtbl -> GetPidl(This,ppidl) )
    ( (This)->lpVtbl -> SetReferrer(This,pidl) )
    ( (This)->lpVtbl -> GetBrowserIndex(This) )
    ( (This)->lpVtbl -> GetBrowserByIndex(This,dwID,ppunk) )
    ( (This)->lpVtbl -> GetHistoryObject(This,ppole,pstm,ppbc) )
    ( (This)->lpVtbl -> SetHistoryObject(This,pole,fIsLocalAnchor) )
    ( (This)->lpVtbl -> CacheOLEServer(This,pole) )
    ( (This)->lpVtbl -> GetSetCodePage(This,pvarIn,pvarOut) )
    ( (This)->lpVtbl -> OnHttpEquiv(This,psv,fDone,pvarargIn,pvarargOut) )
    ( (This)->lpVtbl -> GetPalette(This,hpal) )
    ( (This)->lpVtbl -> RegisterWindow(This,fForceRegister,swc) )
    ( (This)->lpVtbl -> WndProcBS(This,hwnd,uMsg,wParam,lParam) )
    ( (This)->lpVtbl -> SetAsDefFolderSettings(This) )
    ( (This)->lpVtbl -> GetViewRect(This,prc) )
    ( (This)->lpVtbl -> OnSize(This,wParam) )
    ( (This)->lpVtbl -> OnCreate(This,pcs) )
    ( (This)->lpVtbl -> OnCommand(This,wParam,lParam) )
    ( (This)->lpVtbl -> OnDestroy(This) )
    ( (This)->lpVtbl -> OnNotify(This,pnm) )
    ( (This)->lpVtbl -> OnSetFocus(This) )
    ( (This)->lpVtbl -> OnFrameWindowActivateBS(This,fActive) )
    ( (This)->lpVtbl -> ReleaseShellView(This) )
    ( (This)->lpVtbl -> ActivatePendingView(This) )
    ( (This)->lpVtbl -> CreateViewWindow(This,psvNew,psvOld,prcView,phwnd) )
    ( (This)->lpVtbl -> CreateBrowserPropSheetExt(This,riid,ppv) )
    ( (This)->lpVtbl -> GetViewWindow(This,phwndView) )
    ( (This)->lpVtbl -> GetBaseBrowserData(This,pbbd) )
    ( (This)->lpVtbl -> PutBaseBrowserData(This) )
    ( (This)->lpVtbl -> InitializeTravelLog(This,ptl,dw) )
    ( (This)->lpVtbl -> SetTopBrowser(This) )
    ( (This)->lpVtbl -> Offline(This,iCmd) )
    ( (This)->lpVtbl -> AllowViewResize(This,f) )
    ( (This)->lpVtbl -> SetActivateState(This,u) )
    ( (This)->lpVtbl -> UpdateSecureLockIcon(This,eSecureLock) )
    ( (This)->lpVtbl -> InitializeDownloadManager(This) )
    ( (This)->lpVtbl -> InitializeTransitionSite(This) )
    ( (This)->lpVtbl -> _Initialize(This,hwnd,pauto) )
    ( (This)->lpVtbl -> _CancelPendingNavigationAsync(This) )
    ( (This)->lpVtbl -> _CancelPendingView(This) )
    ( (This)->lpVtbl -> _MaySaveChanges(This) )
    ( (This)->lpVtbl -> _PauseOrResumeView(This,fPaused) )
    ( (This)->lpVtbl -> _DisableModeless(This) )
    ( (This)->lpVtbl -> _NavigateToPidl(This,pidl,grfHLNF,dwFlags) )
    ( (This)->lpVtbl -> _TryShell2Rename(This,psv,pidlNew) )
    ( (This)->lpVtbl -> _SwitchActivationNow(This) )
    ( (This)->lpVtbl -> _ExecChildren(This,punkBar,fBroadcast,pguidCmdGroup,nCmdID,nCmdexecopt,pvarargIn,pvarargOut) )
    ( (This)->lpVtbl -> _SendChildren(This,hwndBar,fBroadcast,uMsg,wParam,lParam) )
    ( (This)->lpVtbl -> GetFolderSetData(This,pfsd) )
    ( (This)->lpVtbl -> _OnFocusChange(This,itb) )
    ( (This)->lpVtbl -> v_ShowHideChildWindows(This,fChildOnly) )
    ( (This)->lpVtbl -> _get_itbLastFocus(This) )
    ( (This)->lpVtbl -> _put_itbLastFocus(This,itbLastFocus) )
    ( (This)->lpVtbl -> _UIActivateView(This,uState) )
    ( (This)->lpVtbl -> _GetViewBorderRect(This,prc) )
    ( (This)->lpVtbl -> _UpdateViewRectSize(This) )
    ( (This)->lpVtbl -> _ResizeNextBorder(This,itb) )
    ( (This)->lpVtbl -> _ResizeView(This) )
    ( (This)->lpVtbl -> _GetEffectiveClientArea(This,lprectBorder,hmon) )
    ( (This)->lpVtbl -> v_GetViewStream(This,pidl,grfMode,pwszName) )
    ( (This)->lpVtbl -> ForwardViewMsg(This,uMsg,wParam,lParam) )
    ( (This)->lpVtbl -> SetAcceleratorMenu(This,hacc) )
    ( (This)->lpVtbl -> _GetToolbarCount(This) )
    ( (This)->lpVtbl -> _GetToolbarItem(This,itb) )
    ( (This)->lpVtbl -> _SaveToolbars(This,pstm) )
    ( (This)->lpVtbl -> _LoadToolbars(This,pstm) )
    ( (This)->lpVtbl -> _CloseAndReleaseToolbars(This,fClose) )
    ( (This)->lpVtbl -> v_MayGetNextToolbarFocus(This,lpMsg,itbNext,citb,pptbi,phwnd) )
    ( (This)->lpVtbl -> _ResizeNextBorderHelper(This,itb,bUseHmonitor) )
    ( (This)->lpVtbl -> _FindTBar(This,punkSrc) )
    ( (This)->lpVtbl -> _SetFocus(This,ptbi,hwnd,lpMsg) )
    ( (This)->lpVtbl -> v_MayTranslateAccelerator(This,pmsg) )
    ( (This)->lpVtbl -> _GetBorderDWHelper(This,punkSrc,lprectBorder,bUseHmonitor) )
    ( (This)->lpVtbl -> v_CheckZoneCrossing(This,pidl) )
    ( (This)->lpVtbl -> _PositionViewWindow(This,hwnd,prc) )
    ( (This)->lpVtbl -> IEParseDisplayNameEx(This,uiCP,pwszPath,dwFlags,ppidlOut) )
    ( (This)->lpVtbl -> ActivateView(This,fPendingView) )
    ( (This)->lpVtbl -> SaveViewState(This) )
    ( (This)->lpVtbl -> _ResizeAllBorders(This) )
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_ITrackShellMenu;
    typedef struct ITrackShellMenuVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ITrackShellMenu * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ITrackShellMenu * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ITrackShellMenu * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            ITrackShellMenu * This,
            _In_opt_ IShellMenuCallback *psmc,
            _In_ UINT uId,
            _In_ UINT uIdAncestor,
            _In_ DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetMenuInfo )(
            ITrackShellMenu * This,
            _Outptr_opt_ IShellMenuCallback **ppsmc,
            _Out_opt_ UINT *puId,
            _Out_opt_ UINT *puIdAncestor,
            _Out_opt_ DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *SetShellFolder )(
            ITrackShellMenu * This,
            _In_opt_ IShellFolder *psf,
            _In_opt_ PCIDLIST_ABSOLUTE pidlFolder,
            _In_opt_ HKEY hKey,
            _In_ DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetShellFolder )(
            ITrackShellMenu * This,
            _Out_ DWORD *pdwFlags,
            _Outptr_ PIDLIST_ABSOLUTE *ppidl,
                       REFIID riid,
            _Outptr_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *SetMenu )(
            ITrackShellMenu * This,
            _In_opt_ HMENU hmenu,
            _In_opt_ HWND hwnd,
            _In_ DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetMenu )(
            ITrackShellMenu * This,
            _Out_opt_ HMENU *phmenu,
            _Out_opt_ HWND *phwnd,
            _Out_opt_ DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *InvalidateItem )(
            ITrackShellMenu * This,
            _In_opt_ LPSMDATA psmd,
            _In_ DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetState )(
            ITrackShellMenu * This,
            _Out_ LPSMDATA psmd);
        HRESULT ( STDMETHODCALLTYPE *SetMenuToolbar )(
            ITrackShellMenu * This,
            _In_ IUnknown *punk,
            _In_ DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *SetObscured )(
            ITrackShellMenu * This,
                       HWND hwndTB,
                       IUnknown *punkBand,
            DWORD dwSMSetFlags);
        HRESULT ( STDMETHODCALLTYPE *Popup )(
            ITrackShellMenu * This,
                       HWND hwnd,
                       POINTL *ppt,
                       RECTL *prcExclude,
            MP_POPUPFLAGS dwFlags);
        END_INTERFACE
    } ITrackShellMenuVtbl;
    interface ITrackShellMenu
    {
        CONST_VTBL struct ITrackShellMenuVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,psmc,uId,uIdAncestor,dwFlags) )
    ( (This)->lpVtbl -> GetMenuInfo(This,ppsmc,puId,puIdAncestor,pdwFlags) )
    ( (This)->lpVtbl -> SetShellFolder(This,psf,pidlFolder,hKey,dwFlags) )
    ( (This)->lpVtbl -> GetShellFolder(This,pdwFlags,ppidl,riid,ppv) )
    ( (This)->lpVtbl -> SetMenu(This,hmenu,hwnd,dwFlags) )
    ( (This)->lpVtbl -> GetMenu(This,phmenu,phwnd,pdwFlags) )
    ( (This)->lpVtbl -> InvalidateItem(This,psmd,dwFlags) )
    ( (This)->lpVtbl -> GetState(This,psmd) )
    ( (This)->lpVtbl -> SetMenuToolbar(This,punk,dwFlags) )
    ( (This)->lpVtbl -> SetObscured(This,hwndTB,punkBand,dwSMSetFlags) )
    ( (This)->lpVtbl -> Popup(This,hwnd,ppt,prcExclude,dwFlags) )
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0010_v0_0_s_ifspec;
EXTERN_C const IID LIBID_ShellDeprecatedObjects;
EXTERN_C const CLSID CLSID_TrackShellMenu;
class DECLSPEC_UUID("8278F931-2A3E-11d2-838F-00C04FD918D0")
TrackShellMenu;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_shdeprecated_0000_0011_v0_0_s_ifspec;
unsigned long __RPC_USER HMENU_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HMENU * );
unsigned char * __RPC_USER HMENU_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HMENU * );
unsigned char * __RPC_USER HMENU_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HMENU * );
void __RPC_USER HMENU_UserFree( __RPC__in unsigned long *, __RPC__in HMENU * );
unsigned long __RPC_USER PCIDLIST_ABSOLUTE_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in PCIDLIST_ABSOLUTE * );
unsigned char * __RPC_USER PCIDLIST_ABSOLUTE_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PCIDLIST_ABSOLUTE * );
unsigned char * __RPC_USER PCIDLIST_ABSOLUTE_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PCIDLIST_ABSOLUTE * );
void __RPC_USER PCIDLIST_ABSOLUTE_UserFree( __RPC__in unsigned long *, __RPC__in PCIDLIST_ABSOLUTE * );
unsigned long __RPC_USER PIDLIST_ABSOLUTE_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in PIDLIST_ABSOLUTE * );
unsigned char * __RPC_USER PIDLIST_ABSOLUTE_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PIDLIST_ABSOLUTE * );
unsigned char * __RPC_USER PIDLIST_ABSOLUTE_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PIDLIST_ABSOLUTE * );
void __RPC_USER PIDLIST_ABSOLUTE_UserFree( __RPC__in unsigned long *, __RPC__in PIDLIST_ABSOLUTE * );
unsigned long __RPC_USER HMENU_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HMENU * );
unsigned char * __RPC_USER HMENU_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HMENU * );
unsigned char * __RPC_USER HMENU_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HMENU * );
void __RPC_USER HMENU_UserFree64( __RPC__in unsigned long *, __RPC__in HMENU * );
unsigned long __RPC_USER PCIDLIST_ABSOLUTE_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in PCIDLIST_ABSOLUTE * );
unsigned char * __RPC_USER PCIDLIST_ABSOLUTE_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PCIDLIST_ABSOLUTE * );
unsigned char * __RPC_USER PCIDLIST_ABSOLUTE_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PCIDLIST_ABSOLUTE * );
void __RPC_USER PCIDLIST_ABSOLUTE_UserFree64( __RPC__in unsigned long *, __RPC__in PCIDLIST_ABSOLUTE * );
unsigned long __RPC_USER PIDLIST_ABSOLUTE_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in PIDLIST_ABSOLUTE * );
unsigned char * __RPC_USER PIDLIST_ABSOLUTE_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in PIDLIST_ABSOLUTE * );
unsigned char * __RPC_USER PIDLIST_ABSOLUTE_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out PIDLIST_ABSOLUTE * );
void __RPC_USER PIDLIST_ABSOLUTE_UserFree64( __RPC__in unsigned long *, __RPC__in PIDLIST_ABSOLUTE * );
                                       HRESULT STDMETHODCALLTYPE ITravelLog_GetTravelEntry_Proxy(
    ITravelLog * This,
    _In_ IUnknown *punk,
    _In_ int iOffset,
    _Outptr_opt_ ITravelEntry **ppte);
                HRESULT STDMETHODCALLTYPE ITravelLog_GetTravelEntry_Stub(
    __RPC__in ITravelLog * This,
               __RPC__in_opt IUnknown *punk,
               int iOffset,
                __RPC__deref_out_opt ITravelEntry **ppte);
}
