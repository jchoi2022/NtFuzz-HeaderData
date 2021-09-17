#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IHlink IHlink;
typedef interface IHlinkSite IHlinkSite;
typedef interface IHlinkTarget IHlinkTarget;
typedef interface IHlinkFrame IHlinkFrame;
typedef interface IEnumHLITEM IEnumHLITEM;
typedef interface IHlinkBrowseContext IHlinkBrowseContext;
typedef interface IExtensionServices IExtensionServices;
#include "urlmon.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib,"uuid.lib")
STDAPI HlinkCreateFromMoniker(
             IMoniker * pimkTrgt,
             LPCWSTR pwzLocation,
             LPCWSTR pwzFriendlyName,
             IHlinkSite * pihlsite,
             DWORD dwSiteData,
             IUnknown * piunkOuter,
             REFIID riid,
             void ** ppvObj);
STDAPI HlinkCreateFromString(
             LPCWSTR pwzTarget,
             LPCWSTR pwzLocation,
             LPCWSTR pwzFriendlyName,
             IHlinkSite * pihlsite,
             DWORD dwSiteData,
             IUnknown * piunkOuter,
             REFIID riid,
             void ** ppvObj);
STDAPI HlinkCreateFromData(
             IDataObject *piDataObj,
             IHlinkSite * pihlsite,
             DWORD dwSiteData,
             IUnknown * piunkOuter,
             REFIID riid,
             void ** ppvObj);
STDAPI HlinkQueryCreateFromData(IDataObject *piDataObj);
STDAPI HlinkClone(
             IHlink * pihl,
             REFIID riid,
             IHlinkSite * pihlsiteForClone,
             DWORD dwSiteData,
             void ** ppvObj);
STDAPI HlinkCreateBrowseContext(
             IUnknown * piunkOuter,
             REFIID riid,
             void ** ppvObj);
STDAPI HlinkNavigateToStringReference(
             LPCWSTR pwzTarget,
             LPCWSTR pwzLocation,
             IHlinkSite * pihlsite,
             DWORD dwSiteData,
             IHlinkFrame *pihlframe,
             DWORD grfHLNF,
             LPBC pibc,
             IBindStatusCallback * pibsc,
             IHlinkBrowseContext *pihlbc);
STDAPI HlinkNavigate(
             IHlink * pihl,
             IHlinkFrame * pihlframe,
             DWORD grfHLNF,
             LPBC pbc,
             IBindStatusCallback * pibsc,
             IHlinkBrowseContext *pihlbc);
STDAPI HlinkOnNavigate(
             IHlinkFrame * pihlframe,
             IHlinkBrowseContext * pihlbc,
             DWORD grfHLNF,
             IMoniker * pimkTarget,
             LPCWSTR pwzLocation,
             LPCWSTR pwzFriendlyName,
             ULONG * puHLID);
STDAPI HlinkUpdateStackItem(
             IHlinkFrame * pihlframe,
             IHlinkBrowseContext * pihlbc,
             ULONG uHLID,
             IMoniker * pimkTrgt,
             LPCWSTR pwzLocation,
             LPCWSTR pwzFriendlyName);
STDAPI HlinkOnRenameDocument(
             DWORD dwReserved,
             IHlinkBrowseContext * pihlbc,
             IMoniker * pimkOld,
             IMoniker * pimkNew);
STDAPI HlinkResolveMonikerForData(
             LPMONIKER pimkReference,
             DWORD reserved,
             LPBC pibc,
             ULONG cFmtetc,
             FORMATETC * rgFmtetc,
             IBindStatusCallback * pibsc,
             LPMONIKER pimkBase);
STDAPI HlinkResolveStringForData(
             LPCWSTR pwzReference,
             DWORD reserved,
             LPBC pibc,
             ULONG cFmtetc,
             FORMATETC * rgFmtetc,
             IBindStatusCallback * pibsc,
             LPMONIKER pimkBase);
STDAPI HlinkParseDisplayName(
             LPBC pibc,
             LPCWSTR pwzDisplayName,
             BOOL fNoForceAbs,
             ULONG * pcchEaten,
             IMoniker ** ppimk);
STDAPI HlinkCreateExtensionServices(
             LPCWSTR pwzAdditionalHeaders,
             HWND phwnd,
             LPCWSTR pszUsername,
             LPCWSTR pszPassword,
             IUnknown * piunkOuter,
             REFIID riid,
             void ** ppvObj);
STDAPI HlinkPreprocessMoniker(
             LPBC pibc,
             IMoniker *pimkIn,
             IMoniker **ppimkOut);
STDAPI OleSaveToStreamEx(
             IUnknown * piunk,
             IStream * pistm,
             BOOL fClearDirty);
typedef
enum _HLSR_NOREDEF10
    {
        HLSR_HOME = 0,
        HLSR_SEARCHPAGE = 1,
        HLSR_HISTORYFOLDER = 2
    } HLSR;
STDAPI HlinkSetSpecialReference(
             ULONG uReference,
             LPCWSTR pwzReference);
STDAPI HlinkGetSpecialReference(
             ULONG uReference,
             _Outptr_ LPWSTR *ppwzReference);
typedef
enum _HLSHORTCUTF__NOREDEF10
    {
        HLSHORTCUTF_DEFAULT = 0,
        HLSHORTCUTF_DONTACTUALLYCREATE = 0x1,
        HLSHORTCUTF_USEFILENAMEFROMFRIENDLYNAME = 0x2,
        HLSHORTCUTF_USEUNIQUEFILENAME = 0x4,
        HLSHORTCUTF_MAYUSEEXISTINGSHORTCUT = 0x8
    } HLSHORTCUTF;
STDAPI HlinkCreateShortcut(
             DWORD grfHLSHORTCUTF,
             IHlink *pihl,
             LPCWSTR pwzDir,
             LPCWSTR pwzFileName,
             _Outptr_ LPWSTR *ppwzShortcutFile,
             DWORD dwReserved);
STDAPI HlinkCreateShortcutFromMoniker(
             DWORD grfHLSHORTCUTF,
             IMoniker *pimkTarget,
             LPCWSTR pwzLocation,
             LPCWSTR pwzDir,
             LPCWSTR pwzFileName,
             _Outptr_ LPWSTR *ppwzShortcutFile,
             DWORD dwReserved);
STDAPI HlinkCreateShortcutFromString(
             DWORD grfHLSHORTCUTF,
             LPCWSTR pwzTarget,
             LPCWSTR pwzLocation,
             LPCWSTR pwzDir,
             LPCWSTR pwzFileName,
             _Outptr_ LPWSTR *ppwzShortcutFile,
             DWORD dwReserved);
STDAPI HlinkResolveShortcut(
             LPCWSTR pwzShortcutFileName,
             IHlinkSite * pihlsite,
             DWORD dwSiteData,
             IUnknown * piunkOuter,
             REFIID riid,
             void ** ppvObj);
STDAPI HlinkResolveShortcutToMoniker(
             LPCWSTR pwzShortcutFileName,
             IMoniker **ppimkTarget,
             _Outptr_ LPWSTR *ppwzLocation);
STDAPI HlinkResolveShortcutToString(
             LPCWSTR pwzShortcutFileName,
             _Outptr_ LPWSTR *ppwzTarget,
             _Outptr_ LPWSTR *ppwzLocation);
 STDAPI HlinkIsShortcut(LPCWSTR pwzFileName);
STDAPI HlinkGetValueFromParams(
             LPCWSTR pwzParams,
             LPCWSTR pwzName,
             _Outptr_ LPWSTR *ppwzValue);
typedef
enum _HLTRANSLATEF_NOREDEF10
    {
        HLTRANSLATEF_DEFAULT = 0,
        HLTRANSLATEF_DONTAPPLYDEFAULTPREFIX = 0x1
    } HLTRANSLATEF;
STDAPI HlinkTranslateURL(
             LPCWSTR pwzURL,
             DWORD grfFlags,
             _Outptr_ LPWSTR *ppwzTranslatedURL);
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0000_v0_0_s_ifspec;
typedef __RPC_unique_pointer IHlink *LPHLINK;
typedef
enum __MIDL_IHlink_0001
    {
        HLNF_INTERNALJUMP = 0x1,
        HLNF_OPENINNEWWINDOW = 0x2,
        HLNF_NAVIGATINGBACK = 0x4,
        HLNF_NAVIGATINGFORWARD = 0x8,
        HLNF_NAVIGATINGTOSTACKITEM = 0x10,
        HLNF_CREATENOHISTORY = 0x20
    } HLNF;
typedef
enum __MIDL_IHlink_0002
    {
        HLINKGETREF_DEFAULT = 0,
        HLINKGETREF_ABSOLUTE = 1,
        HLINKGETREF_RELATIVE = 2
    } HLINKGETREF;
typedef
enum __MIDL_IHlink_0003
    {
        HLFNAMEF_DEFAULT = 0,
        HLFNAMEF_TRYCACHE = 0x1,
        HLFNAMEF_TRYPRETTYTARGET = 0x2,
        HLFNAMEF_TRYFULLTARGET = 0x4,
        HLFNAMEF_TRYWIN95SHORTCUT = 0x8
    } HLFNAMEF;
typedef
enum __MIDL_IHlink_0004
    {
        HLINKMISC_RELATIVE = 0x1
    } HLINKMISC;
typedef
enum __MIDL_IHlink_0005
    {
        HLINKSETF_TARGET = 0x1,
        HLINKSETF_LOCATION = 0x2
    } HLINKSETF;
EXTERN_C const IID IID_IHlink;
    typedef struct IHlinkVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHlink * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHlink * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHlink * This);
        HRESULT ( STDMETHODCALLTYPE *SetHlinkSite )(
            __RPC__in IHlink * This,
                               __RPC__in_opt IHlinkSite *pihlSite,
                       DWORD dwSiteData);
        HRESULT ( STDMETHODCALLTYPE *GetHlinkSite )(
            __RPC__in IHlink * This,
                        __RPC__deref_out_opt IHlinkSite **ppihlSite,
                        __RPC__out DWORD *pdwSiteData);
        HRESULT ( STDMETHODCALLTYPE *SetMonikerReference )(
            __RPC__in IHlink * This,
                       DWORD grfHLSETF,
                               __RPC__in_opt IMoniker *pimkTarget,
                               __RPC__in_opt LPCWSTR pwzLocation);
                      HRESULT ( STDMETHODCALLTYPE *GetMonikerReference )(
            IHlink * This,
                       DWORD dwWhichRef,
            _Outptr_opt_result_maybenull_ IMoniker **ppimkTarget,
            _Outptr_opt_result_maybenull_ LPWSTR *ppwzLocation);
        HRESULT ( STDMETHODCALLTYPE *SetStringReference )(
            __RPC__in IHlink * This,
                       DWORD grfHLSETF,
                               __RPC__in_opt LPCWSTR pwzTarget,
                               __RPC__in_opt LPCWSTR pwzLocation);
                      HRESULT ( STDMETHODCALLTYPE *GetStringReference )(
            IHlink * This,
                       DWORD dwWhichRef,
            _Outptr_opt_ LPWSTR *ppwzTarget,
            _Outptr_opt_result_maybenull_ LPWSTR *ppwzLocation);
        HRESULT ( STDMETHODCALLTYPE *SetFriendlyName )(
            __RPC__in IHlink * This,
                               __RPC__in_opt LPCWSTR pwzFriendlyName);
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )(
            __RPC__in IHlink * This,
                       DWORD grfHLFNAMEF,
                        __RPC__deref_out_opt LPWSTR *ppwzFriendlyName);
        HRESULT ( STDMETHODCALLTYPE *SetTargetFrameName )(
            __RPC__in IHlink * This,
                               __RPC__in_opt LPCWSTR pwzTargetFrameName);
        HRESULT ( STDMETHODCALLTYPE *GetTargetFrameName )(
            __RPC__in IHlink * This,
                        __RPC__deref_out_opt LPWSTR *ppwzTargetFrameName);
        HRESULT ( STDMETHODCALLTYPE *GetMiscStatus )(
            __RPC__in IHlink * This,
                        __RPC__out DWORD *pdwStatus);
        HRESULT ( STDMETHODCALLTYPE *Navigate )(
            __RPC__in IHlink * This,
                       DWORD grfHLNF,
                               __RPC__in_opt LPBC pibc,
                               __RPC__in_opt IBindStatusCallback *pibsc,
                               __RPC__in_opt IHlinkBrowseContext *pihlbc);
        HRESULT ( STDMETHODCALLTYPE *SetAdditionalParams )(
            __RPC__in IHlink * This,
                               __RPC__in_opt LPCWSTR pwzAdditionalParams);
        HRESULT ( STDMETHODCALLTYPE *GetAdditionalParams )(
            __RPC__in IHlink * This,
                        __RPC__deref_out_opt LPWSTR *ppwzAdditionalParams);
        END_INTERFACE
    } IHlinkVtbl;
    interface IHlink
    {
        CONST_VTBL struct IHlinkVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetHlinkSite(This,pihlSite,dwSiteData) )
    ( (This)->lpVtbl -> GetHlinkSite(This,ppihlSite,pdwSiteData) )
    ( (This)->lpVtbl -> SetMonikerReference(This,grfHLSETF,pimkTarget,pwzLocation) )
    ( (This)->lpVtbl -> GetMonikerReference(This,dwWhichRef,ppimkTarget,ppwzLocation) )
    ( (This)->lpVtbl -> SetStringReference(This,grfHLSETF,pwzTarget,pwzLocation) )
    ( (This)->lpVtbl -> GetStringReference(This,dwWhichRef,ppwzTarget,ppwzLocation) )
    ( (This)->lpVtbl -> SetFriendlyName(This,pwzFriendlyName) )
    ( (This)->lpVtbl -> GetFriendlyName(This,grfHLFNAMEF,ppwzFriendlyName) )
    ( (This)->lpVtbl -> SetTargetFrameName(This,pwzTargetFrameName) )
    ( (This)->lpVtbl -> GetTargetFrameName(This,ppwzTargetFrameName) )
    ( (This)->lpVtbl -> GetMiscStatus(This,pdwStatus) )
    ( (This)->lpVtbl -> Navigate(This,grfHLNF,pibc,pibsc,pihlbc) )
    ( (This)->lpVtbl -> SetAdditionalParams(This,pwzAdditionalParams) )
    ( (This)->lpVtbl -> GetAdditionalParams(This,ppwzAdditionalParams) )
                HRESULT STDMETHODCALLTYPE IHlink_RemoteGetMonikerReference_Proxy(
    __RPC__in IHlink * This,
               DWORD dwWhichRef,
                __RPC__deref_out_opt IMoniker **ppimkTarget,
                __RPC__deref_out_opt LPWSTR *ppwzLocation);
void __RPC_STUB IHlink_RemoteGetMonikerReference_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
                HRESULT STDMETHODCALLTYPE IHlink_RemoteGetStringReference_Proxy(
    __RPC__in IHlink * This,
               DWORD dwWhichRef,
                __RPC__deref_out_opt LPWSTR *ppwzTarget,
                __RPC__deref_out_opt LPWSTR *ppwzLocation);
void __RPC_STUB IHlink_RemoteGetStringReference_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const GUID SID_SContainer;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0001_v0_0_s_ifspec;
typedef __RPC_unique_pointer IHlinkSite *LPHLINKSITE;
typedef
enum __MIDL_IHlinkSite_0001
    {
        HLINKWHICHMK_CONTAINER = 1,
        HLINKWHICHMK_BASE = 2
    } HLINKWHICHMK;
EXTERN_C const IID IID_IHlinkSite;
    typedef struct IHlinkSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHlinkSite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHlinkSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHlinkSite * This);
        HRESULT ( STDMETHODCALLTYPE *QueryService )(
            __RPC__in IHlinkSite * This,
                       DWORD dwSiteData,
                       __RPC__in REFGUID guidService,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt IUnknown **ppiunk);
        HRESULT ( STDMETHODCALLTYPE *GetMoniker )(
            __RPC__in IHlinkSite * This,
                       DWORD dwSiteData,
                       DWORD dwAssign,
                       DWORD dwWhich,
                        __RPC__deref_out_opt IMoniker **ppimk);
        HRESULT ( STDMETHODCALLTYPE *ReadyToNavigate )(
            __RPC__in IHlinkSite * This,
                       DWORD dwSiteData,
                       DWORD dwReserved);
        HRESULT ( STDMETHODCALLTYPE *OnNavigationComplete )(
            __RPC__in IHlinkSite * This,
                       DWORD dwSiteData,
                       DWORD dwreserved,
                       HRESULT hrError,
                               __RPC__in_opt LPCWSTR pwzError);
        END_INTERFACE
    } IHlinkSiteVtbl;
    interface IHlinkSite
    {
        CONST_VTBL struct IHlinkSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryService(This,dwSiteData,guidService,riid,ppiunk) )
    ( (This)->lpVtbl -> GetMoniker(This,dwSiteData,dwAssign,dwWhich,ppimk) )
    ( (This)->lpVtbl -> ReadyToNavigate(This,dwSiteData,dwReserved) )
    ( (This)->lpVtbl -> OnNavigationComplete(This,dwSiteData,dwreserved,hrError,pwzError) )
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0002_v0_0_s_ifspec;
typedef __RPC_unique_pointer IHlinkTarget *LPHLINKTARGET;
EXTERN_C const IID IID_IHlinkTarget;
    typedef struct IHlinkTargetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHlinkTarget * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHlinkTarget * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHlinkTarget * This);
        HRESULT ( STDMETHODCALLTYPE *SetBrowseContext )(
            __RPC__in IHlinkTarget * This,
                               __RPC__in_opt IHlinkBrowseContext *pihlbc);
        HRESULT ( STDMETHODCALLTYPE *GetBrowseContext )(
            __RPC__in IHlinkTarget * This,
                        __RPC__deref_out_opt IHlinkBrowseContext **ppihlbc);
        HRESULT ( STDMETHODCALLTYPE *Navigate )(
            __RPC__in IHlinkTarget * This,
                       DWORD grfHLNF,
                               __RPC__in_opt LPCWSTR pwzJumpLocation);
        HRESULT ( STDMETHODCALLTYPE *GetMoniker )(
            __RPC__in IHlinkTarget * This,
                               __RPC__in_opt LPCWSTR pwzLocation,
                       DWORD dwAssign,
                        __RPC__deref_out_opt IMoniker **ppimkLocation);
        HRESULT ( STDMETHODCALLTYPE *GetFriendlyName )(
            __RPC__in IHlinkTarget * This,
                               __RPC__in_opt LPCWSTR pwzLocation,
                        __RPC__deref_out_opt LPWSTR *ppwzFriendlyName);
        END_INTERFACE
    } IHlinkTargetVtbl;
    interface IHlinkTarget
    {
        CONST_VTBL struct IHlinkTargetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetBrowseContext(This,pihlbc) )
    ( (This)->lpVtbl -> GetBrowseContext(This,ppihlbc) )
    ( (This)->lpVtbl -> Navigate(This,grfHLNF,pwzJumpLocation) )
    ( (This)->lpVtbl -> GetMoniker(This,pwzLocation,dwAssign,ppimkLocation) )
    ( (This)->lpVtbl -> GetFriendlyName(This,pwzLocation,ppwzFriendlyName) )
EXTERN_C const GUID SID_SHlinkFrame;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0003_v0_0_s_ifspec;
typedef __RPC_unique_pointer IHlinkFrame *LPHLINKFRAME;
EXTERN_C const IID IID_IHlinkFrame;
    typedef struct IHlinkFrameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHlinkFrame * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHlinkFrame * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHlinkFrame * This);
        HRESULT ( STDMETHODCALLTYPE *SetBrowseContext )(
            __RPC__in IHlinkFrame * This,
                               __RPC__in_opt IHlinkBrowseContext *pihlbc);
        HRESULT ( STDMETHODCALLTYPE *GetBrowseContext )(
            __RPC__in IHlinkFrame * This,
                        __RPC__deref_out_opt IHlinkBrowseContext **ppihlbc);
        HRESULT ( STDMETHODCALLTYPE *Navigate )(
            __RPC__in IHlinkFrame * This,
                       DWORD grfHLNF,
                               __RPC__in_opt LPBC pbc,
                               __RPC__in_opt IBindStatusCallback *pibsc,
                               __RPC__in_opt IHlink *pihlNavigate);
        HRESULT ( STDMETHODCALLTYPE *OnNavigate )(
            __RPC__in IHlinkFrame * This,
                       DWORD grfHLNF,
                               __RPC__in_opt IMoniker *pimkTarget,
                               __RPC__in_opt LPCWSTR pwzLocation,
                               __RPC__in_opt LPCWSTR pwzFriendlyName,
                       DWORD dwreserved);
        HRESULT ( STDMETHODCALLTYPE *UpdateHlink )(
            __RPC__in IHlinkFrame * This,
                       ULONG uHLID,
                               __RPC__in_opt IMoniker *pimkTarget,
                               __RPC__in_opt LPCWSTR pwzLocation,
                               __RPC__in_opt LPCWSTR pwzFriendlyName);
        END_INTERFACE
    } IHlinkFrameVtbl;
    interface IHlinkFrame
    {
        CONST_VTBL struct IHlinkFrameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetBrowseContext(This,pihlbc) )
    ( (This)->lpVtbl -> GetBrowseContext(This,ppihlbc) )
    ( (This)->lpVtbl -> Navigate(This,grfHLNF,pbc,pibsc,pihlNavigate) )
    ( (This)->lpVtbl -> OnNavigate(This,grfHLNF,pimkTarget,pwzLocation,pwzFriendlyName,dwreserved) )
    ( (This)->lpVtbl -> UpdateHlink(This,uHLID,pimkTarget,pwzLocation,pwzFriendlyName) )
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0004_v0_0_s_ifspec;
typedef IEnumHLITEM *LPENUMHLITEM;
typedef struct tagHLITEM
    {
    ULONG uHLID;
    LPWSTR pwzFriendlyName;
    } HLITEM;
typedef HLITEM *LPHLITEM;
EXTERN_C const IID IID_IEnumHLITEM;
    typedef struct IEnumHLITEMVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnumHLITEM * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnumHLITEM * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnumHLITEM * This);
        HRESULT ( __stdcall *Next )(
            IEnumHLITEM * This,
                       ULONG celt,
                        HLITEM *rgelt,
                        ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            IEnumHLITEM * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnumHLITEM * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IEnumHLITEM * This,
                        IEnumHLITEM **ppienumhlitem);
        END_INTERFACE
    } IEnumHLITEMVtbl;
    interface IEnumHLITEM
    {
        CONST_VTBL struct IEnumHLITEMVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppienumhlitem) )
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0005_v0_0_s_ifspec;
typedef IHlinkBrowseContext *LPHLINKBROWSECONTEXT;
enum __MIDL_IHlinkBrowseContext_0001
    {
        HLTB_DOCKEDLEFT = 0,
        HLTB_DOCKEDTOP = 1,
        HLTB_DOCKEDRIGHT = 2,
        HLTB_DOCKEDBOTTOM = 3,
        HLTB_FLOATING = 4
    } ;
typedef struct _tagHLTBINFO
    {
    ULONG uDockType;
    RECT rcTbPos;
    } HLTBINFO;
enum __MIDL_IHlinkBrowseContext_0002
    {
        HLBWIF_HASFRAMEWNDINFO = 0x1,
        HLBWIF_HASDOCWNDINFO = 0x2,
        HLBWIF_FRAMEWNDMAXIMIZED = 0x4,
        HLBWIF_DOCWNDMAXIMIZED = 0x8,
        HLBWIF_HASWEBTOOLBARINFO = 0x10,
        HLBWIF_WEBTOOLBARHIDDEN = 0x20
    } ;
typedef struct _tagHLBWINFO
    {
    ULONG cbSize;
    DWORD grfHLBWIF;
    RECT rcFramePos;
    RECT rcDocPos;
    HLTBINFO hltbinfo;
    } HLBWINFO;
typedef HLBWINFO *LPHLBWINFO;
enum __MIDL_IHlinkBrowseContext_0003
    {
        HLID_INVALID = 0,
        HLID_PREVIOUS = 0xffffffff,
        HLID_NEXT = 0xfffffffe,
        HLID_CURRENT = 0xfffffffd,
        HLID_STACKBOTTOM = 0xfffffffc,
        HLID_STACKTOP = 0xfffffffb
    } ;
enum __MIDL_IHlinkBrowseContext_0004
    {
        HLQF_ISVALID = 0x1,
        HLQF_ISCURRENT = 0x2
    } ;
EXTERN_C const IID IID_IHlinkBrowseContext;
    typedef struct IHlinkBrowseContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IHlinkBrowseContext * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IHlinkBrowseContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IHlinkBrowseContext * This);
        HRESULT ( STDMETHODCALLTYPE *Register )(
            IHlinkBrowseContext * This,
                       DWORD reserved,
                               IUnknown *piunk,
                               IMoniker *pimk,
                        DWORD *pdwRegister);
        HRESULT ( STDMETHODCALLTYPE *GetObject )(
            IHlinkBrowseContext * This,
                               IMoniker *pimk,
                       BOOL fBindIfRootRegistered,
                        IUnknown **ppiunk);
        HRESULT ( STDMETHODCALLTYPE *Revoke )(
            IHlinkBrowseContext * This,
                       DWORD dwRegister);
        HRESULT ( STDMETHODCALLTYPE *SetBrowseWindowInfo )(
            IHlinkBrowseContext * This,
                               HLBWINFO *phlbwi);
        HRESULT ( STDMETHODCALLTYPE *GetBrowseWindowInfo )(
            IHlinkBrowseContext * This,
                        HLBWINFO *phlbwi);
        HRESULT ( STDMETHODCALLTYPE *SetInitialHlink )(
            IHlinkBrowseContext * This,
                               IMoniker *pimkTarget,
                               LPCWSTR pwzLocation,
                               LPCWSTR pwzFriendlyName);
        HRESULT ( STDMETHODCALLTYPE *OnNavigateHlink )(
            IHlinkBrowseContext * This,
                       DWORD grfHLNF,
                               IMoniker *pimkTarget,
                               LPCWSTR pwzLocation,
                               LPCWSTR pwzFriendlyName,
                        ULONG *puHLID);
        HRESULT ( STDMETHODCALLTYPE *UpdateHlink )(
            IHlinkBrowseContext * This,
                       ULONG uHLID,
                               IMoniker *pimkTarget,
                               LPCWSTR pwzLocation,
                               LPCWSTR pwzFriendlyName);
        HRESULT ( STDMETHODCALLTYPE *EnumNavigationStack )(
            IHlinkBrowseContext * This,
                       DWORD dwReserved,
                       DWORD grfHLFNAMEF,
                        IEnumHLITEM **ppienumhlitem);
        HRESULT ( STDMETHODCALLTYPE *QueryHlink )(
            IHlinkBrowseContext * This,
                       DWORD grfHLQF,
                       ULONG uHLID);
        HRESULT ( STDMETHODCALLTYPE *GetHlink )(
            IHlinkBrowseContext * This,
                       ULONG uHLID,
                        IHlink **ppihl);
        HRESULT ( STDMETHODCALLTYPE *SetCurrentHlink )(
            IHlinkBrowseContext * This,
                       ULONG uHLID);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IHlinkBrowseContext * This,
                               IUnknown *piunkOuter,
                       REFIID riid,
                                IUnknown **ppiunkObj);
        HRESULT ( STDMETHODCALLTYPE *Close )(
            IHlinkBrowseContext * This,
                       DWORD reserved);
        END_INTERFACE
    } IHlinkBrowseContextVtbl;
    interface IHlinkBrowseContext
    {
        CONST_VTBL struct IHlinkBrowseContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Register(This,reserved,piunk,pimk,pdwRegister) )
    ( (This)->lpVtbl -> GetObject(This,pimk,fBindIfRootRegistered,ppiunk) )
    ( (This)->lpVtbl -> Revoke(This,dwRegister) )
    ( (This)->lpVtbl -> SetBrowseWindowInfo(This,phlbwi) )
    ( (This)->lpVtbl -> GetBrowseWindowInfo(This,phlbwi) )
    ( (This)->lpVtbl -> SetInitialHlink(This,pimkTarget,pwzLocation,pwzFriendlyName) )
    ( (This)->lpVtbl -> OnNavigateHlink(This,grfHLNF,pimkTarget,pwzLocation,pwzFriendlyName,puHLID) )
    ( (This)->lpVtbl -> UpdateHlink(This,uHLID,pimkTarget,pwzLocation,pwzFriendlyName) )
    ( (This)->lpVtbl -> EnumNavigationStack(This,dwReserved,grfHLFNAMEF,ppienumhlitem) )
    ( (This)->lpVtbl -> QueryHlink(This,grfHLQF,uHLID) )
    ( (This)->lpVtbl -> GetHlink(This,uHLID,ppihl) )
    ( (This)->lpVtbl -> SetCurrentHlink(This,uHLID) )
    ( (This)->lpVtbl -> Clone(This,piunkOuter,riid,ppiunkObj) )
    ( (This)->lpVtbl -> Close(This,reserved) )
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0006_v0_0_s_ifspec;
typedef IExtensionServices *LPEXTENSIONSERVICES;
EXTERN_C const IID IID_IExtensionServices;
    typedef struct IExtensionServicesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IExtensionServices * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IExtensionServices * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IExtensionServices * This);
        HRESULT ( STDMETHODCALLTYPE *SetAdditionalHeaders )(
            IExtensionServices * This,
                       LPCWSTR pwzAdditionalHeaders);
        HRESULT ( STDMETHODCALLTYPE *SetAuthenticateData )(
            IExtensionServices * This,
                       HWND phwnd,
                       LPCWSTR pwzUsername,
                       LPCWSTR pwzPassword);
        END_INTERFACE
    } IExtensionServicesVtbl;
    interface IExtensionServices
    {
        CONST_VTBL struct IExtensionServicesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetAdditionalHeaders(This,pwzAdditionalHeaders) )
    ( (This)->lpVtbl -> SetAuthenticateData(This,phwnd,pwzUsername,pwzPassword) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hlink_0000_0007_v0_0_s_ifspec;
              HRESULT STDMETHODCALLTYPE IHlink_GetMonikerReference_Proxy(
    IHlink * This,
               DWORD dwWhichRef,
    _Outptr_opt_result_maybenull_ IMoniker **ppimkTarget,
    _Outptr_opt_result_maybenull_ LPWSTR *ppwzLocation);
                HRESULT STDMETHODCALLTYPE IHlink_GetMonikerReference_Stub(
    __RPC__in IHlink * This,
               DWORD dwWhichRef,
                __RPC__deref_out_opt IMoniker **ppimkTarget,
                __RPC__deref_out_opt LPWSTR *ppwzLocation);
              HRESULT STDMETHODCALLTYPE IHlink_GetStringReference_Proxy(
    IHlink * This,
               DWORD dwWhichRef,
    _Outptr_opt_ LPWSTR *ppwzTarget,
    _Outptr_opt_result_maybenull_ LPWSTR *ppwzLocation);
                HRESULT STDMETHODCALLTYPE IHlink_GetStringReference_Stub(
    __RPC__in IHlink * This,
               DWORD dwWhichRef,
                __RPC__deref_out_opt LPWSTR *ppwzTarget,
                __RPC__deref_out_opt LPWSTR *ppwzLocation);
}
