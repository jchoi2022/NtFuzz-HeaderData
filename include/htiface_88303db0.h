#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITargetFrame ITargetFrame;
typedef interface ITargetEmbedding ITargetEmbedding;
typedef interface ITargetFramePriv ITargetFramePriv;
typedef interface ITargetFramePriv2 ITargetFramePriv2;
#include "objidl.h"
#include "oleidl.h"
#include "urlmon.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib,"uuid.lib")
#include "htiframe.h"
EXTERN_C const IID IID_ITargetFrame;
EXTERN_C const IID IID_ITargetEmbedding;
EXTERN_C const IID IID_ITargetFramePriv;
EXTERN_C const IID IID_ITargetFramePriv2;
extern RPC_IF_HANDLE __MIDL_itf_htiface_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_htiface_0000_0000_v0_0_s_ifspec;
typedef __RPC_unique_pointer ITargetFrame *LPTARGETFRAME;
typedef
enum __MIDL_ITargetFrame_0001
    {
        NAVIGATEFRAME_FL_RECORD = 0x1,
        NAVIGATEFRAME_FL_POST = 0x2,
        NAVIGATEFRAME_FL_NO_DOC_CACHE = 0x4,
        NAVIGATEFRAME_FL_NO_IMAGE_CACHE = 0x8,
        NAVIGATEFRAME_FL_AUTH_FAIL_CACHE_OK = 0x10,
        NAVIGATEFRAME_FL_SENDING_FROM_FORM = 0x20,
        NAVIGATEFRAME_FL_REALLY_SENDING_FROM_FORM = 0x40
    } NAVIGATEFRAME_FLAGS;
typedef struct tagNavigateData
    {
    ULONG ulTarget;
    ULONG ulURL;
    ULONG ulRefURL;
    ULONG ulPostData;
    DWORD dwFlags;
    } NAVIGATEDATA;
EXTERN_C const IID IID_ITargetFrame;
    typedef struct ITargetFrameVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITargetFrame * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITargetFrame * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITargetFrame * This);
        HRESULT ( STDMETHODCALLTYPE *SetFrameName )(
            __RPC__in ITargetFrame * This,
                       __RPC__in LPCWSTR pszFrameName);
        HRESULT ( STDMETHODCALLTYPE *GetFrameName )(
            __RPC__in ITargetFrame * This,
                        __RPC__deref_out_opt LPWSTR *ppszFrameName);
        HRESULT ( STDMETHODCALLTYPE *GetParentFrame )(
            __RPC__in ITargetFrame * This,
                        __RPC__deref_out_opt IUnknown **ppunkParent);
        HRESULT ( STDMETHODCALLTYPE *FindFrame )(
            __RPC__in ITargetFrame * This,
                       __RPC__in LPCWSTR pszTargetName,
                       __RPC__in_opt IUnknown *ppunkContextFrame,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IUnknown **ppunkTargetFrame);
        HRESULT ( STDMETHODCALLTYPE *SetFrameSrc )(
            __RPC__in ITargetFrame * This,
                       __RPC__in LPCWSTR pszFrameSrc);
        HRESULT ( STDMETHODCALLTYPE *GetFrameSrc )(
            __RPC__in ITargetFrame * This,
                        __RPC__deref_out_opt LPWSTR *ppszFrameSrc);
        HRESULT ( STDMETHODCALLTYPE *GetFramesContainer )(
            __RPC__in ITargetFrame * This,
                        __RPC__deref_out_opt IOleContainer **ppContainer);
        HRESULT ( STDMETHODCALLTYPE *SetFrameOptions )(
            __RPC__in ITargetFrame * This,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *GetFrameOptions )(
            __RPC__in ITargetFrame * This,
                        __RPC__out DWORD *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *SetFrameMargins )(
            __RPC__in ITargetFrame * This,
                       DWORD dwWidth,
                       DWORD dwHeight);
        HRESULT ( STDMETHODCALLTYPE *GetFrameMargins )(
            __RPC__in ITargetFrame * This,
                        __RPC__out DWORD *pdwWidth,
                        __RPC__out DWORD *pdwHeight);
        HRESULT ( STDMETHODCALLTYPE *RemoteNavigate )(
            __RPC__in ITargetFrame * This,
                       ULONG cLength,
                                __RPC__in_ecount_full(cLength) ULONG *pulData);
        HRESULT ( STDMETHODCALLTYPE *OnChildFrameActivate )(
            __RPC__in ITargetFrame * This,
                       __RPC__in_opt IUnknown *pUnkChildFrame);
        HRESULT ( STDMETHODCALLTYPE *OnChildFrameDeactivate )(
            __RPC__in ITargetFrame * This,
                       __RPC__in_opt IUnknown *pUnkChildFrame);
        END_INTERFACE
    } ITargetFrameVtbl;
    interface ITargetFrame
    {
        CONST_VTBL struct ITargetFrameVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetFrameName(This,pszFrameName) )
    ( (This)->lpVtbl -> GetFrameName(This,ppszFrameName) )
    ( (This)->lpVtbl -> GetParentFrame(This,ppunkParent) )
    ( (This)->lpVtbl -> FindFrame(This,pszTargetName,ppunkContextFrame,dwFlags,ppunkTargetFrame) )
    ( (This)->lpVtbl -> SetFrameSrc(This,pszFrameSrc) )
    ( (This)->lpVtbl -> GetFrameSrc(This,ppszFrameSrc) )
    ( (This)->lpVtbl -> GetFramesContainer(This,ppContainer) )
    ( (This)->lpVtbl -> SetFrameOptions(This,dwFlags) )
    ( (This)->lpVtbl -> GetFrameOptions(This,pdwFlags) )
    ( (This)->lpVtbl -> SetFrameMargins(This,dwWidth,dwHeight) )
    ( (This)->lpVtbl -> GetFrameMargins(This,pdwWidth,pdwHeight) )
    ( (This)->lpVtbl -> RemoteNavigate(This,cLength,pulData) )
    ( (This)->lpVtbl -> OnChildFrameActivate(This,pUnkChildFrame) )
    ( (This)->lpVtbl -> OnChildFrameDeactivate(This,pUnkChildFrame) )
typedef __RPC_unique_pointer ITargetEmbedding *LPTARGETEMBEDDING;
EXTERN_C const IID IID_ITargetEmbedding;
    typedef struct ITargetEmbeddingVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITargetEmbedding * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITargetEmbedding * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITargetEmbedding * This);
        HRESULT ( STDMETHODCALLTYPE *GetTargetFrame )(
            __RPC__in ITargetEmbedding * This,
                        __RPC__deref_out_opt ITargetFrame **ppTargetFrame);
        END_INTERFACE
    } ITargetEmbeddingVtbl;
    interface ITargetEmbedding
    {
        CONST_VTBL struct ITargetEmbeddingVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTargetFrame(This,ppTargetFrame) )
typedef __RPC_unique_pointer ITargetFramePriv *LPTARGETFRAMEPRIV;
EXTERN_C const IID IID_ITargetFramePriv;
    typedef struct ITargetFramePrivVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITargetFramePriv * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITargetFramePriv * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITargetFramePriv * This);
        HRESULT ( STDMETHODCALLTYPE *FindFrameDownwards )(
            __RPC__in ITargetFramePriv * This,
                       __RPC__in LPCWSTR pszTargetName,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IUnknown **ppunkTargetFrame);
        HRESULT ( STDMETHODCALLTYPE *FindFrameInContext )(
            __RPC__in ITargetFramePriv * This,
                       __RPC__in LPCWSTR pszTargetName,
                       __RPC__in_opt IUnknown *punkContextFrame,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IUnknown **ppunkTargetFrame);
        HRESULT ( STDMETHODCALLTYPE *OnChildFrameActivate )(
            __RPC__in ITargetFramePriv * This,
                       __RPC__in_opt IUnknown *pUnkChildFrame);
        HRESULT ( STDMETHODCALLTYPE *OnChildFrameDeactivate )(
            __RPC__in ITargetFramePriv * This,
                       __RPC__in_opt IUnknown *pUnkChildFrame);
        HRESULT ( STDMETHODCALLTYPE *NavigateHack )(
            __RPC__in ITargetFramePriv * This,
                       DWORD grfHLNF,
                               __RPC__in_opt LPBC pbc,
                               __RPC__in_opt IBindStatusCallback *pibsc,
                               __RPC__in_opt LPCWSTR pszTargetName,
                       __RPC__in LPCWSTR pszUrl,
                               __RPC__in_opt LPCWSTR pszLocation);
        HRESULT ( STDMETHODCALLTYPE *FindBrowserByIndex )(
            __RPC__in ITargetFramePriv * This,
                       DWORD dwID,
                        __RPC__deref_out_opt IUnknown **ppunkBrowser);
        END_INTERFACE
    } ITargetFramePrivVtbl;
    interface ITargetFramePriv
    {
        CONST_VTBL struct ITargetFramePrivVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindFrameDownwards(This,pszTargetName,dwFlags,ppunkTargetFrame) )
    ( (This)->lpVtbl -> FindFrameInContext(This,pszTargetName,punkContextFrame,dwFlags,ppunkTargetFrame) )
    ( (This)->lpVtbl -> OnChildFrameActivate(This,pUnkChildFrame) )
    ( (This)->lpVtbl -> OnChildFrameDeactivate(This,pUnkChildFrame) )
    ( (This)->lpVtbl -> NavigateHack(This,grfHLNF,pbc,pibsc,pszTargetName,pszUrl,pszLocation) )
    ( (This)->lpVtbl -> FindBrowserByIndex(This,dwID,ppunkBrowser) )
typedef __RPC_unique_pointer ITargetFramePriv2 *LPTARGETFRAMEPRIV2;
EXTERN_C const IID IID_ITargetFramePriv2;
    typedef struct ITargetFramePriv2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITargetFramePriv2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITargetFramePriv2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITargetFramePriv2 * This);
        HRESULT ( STDMETHODCALLTYPE *FindFrameDownwards )(
            __RPC__in ITargetFramePriv2 * This,
                       __RPC__in LPCWSTR pszTargetName,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IUnknown **ppunkTargetFrame);
        HRESULT ( STDMETHODCALLTYPE *FindFrameInContext )(
            __RPC__in ITargetFramePriv2 * This,
                       __RPC__in LPCWSTR pszTargetName,
                       __RPC__in_opt IUnknown *punkContextFrame,
                       DWORD dwFlags,
                        __RPC__deref_out_opt IUnknown **ppunkTargetFrame);
        HRESULT ( STDMETHODCALLTYPE *OnChildFrameActivate )(
            __RPC__in ITargetFramePriv2 * This,
                       __RPC__in_opt IUnknown *pUnkChildFrame);
        HRESULT ( STDMETHODCALLTYPE *OnChildFrameDeactivate )(
            __RPC__in ITargetFramePriv2 * This,
                       __RPC__in_opt IUnknown *pUnkChildFrame);
        HRESULT ( STDMETHODCALLTYPE *NavigateHack )(
            __RPC__in ITargetFramePriv2 * This,
                       DWORD grfHLNF,
                               __RPC__in_opt LPBC pbc,
                               __RPC__in_opt IBindStatusCallback *pibsc,
                               __RPC__in_opt LPCWSTR pszTargetName,
                       __RPC__in LPCWSTR pszUrl,
                               __RPC__in_opt LPCWSTR pszLocation);
        HRESULT ( STDMETHODCALLTYPE *FindBrowserByIndex )(
            __RPC__in ITargetFramePriv2 * This,
                       DWORD dwID,
                        __RPC__deref_out_opt IUnknown **ppunkBrowser);
        HRESULT ( STDMETHODCALLTYPE *AggregatedNavigation2 )(
            __RPC__in ITargetFramePriv2 * This,
                       DWORD grfHLNF,
                               __RPC__in_opt LPBC pbc,
                               __RPC__in_opt IBindStatusCallback *pibsc,
                               __RPC__in_opt LPCWSTR pszTargetName,
                       __RPC__in_opt IUri *pUri,
                               __RPC__in_opt LPCWSTR pszLocation);
        END_INTERFACE
    } ITargetFramePriv2Vtbl;
    interface ITargetFramePriv2
    {
        CONST_VTBL struct ITargetFramePriv2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FindFrameDownwards(This,pszTargetName,dwFlags,ppunkTargetFrame) )
    ( (This)->lpVtbl -> FindFrameInContext(This,pszTargetName,punkContextFrame,dwFlags,ppunkTargetFrame) )
    ( (This)->lpVtbl -> OnChildFrameActivate(This,pUnkChildFrame) )
    ( (This)->lpVtbl -> OnChildFrameDeactivate(This,pUnkChildFrame) )
    ( (This)->lpVtbl -> NavigateHack(This,grfHLNF,pbc,pibsc,pszTargetName,pszUrl,pszLocation) )
    ( (This)->lpVtbl -> FindBrowserByIndex(This,dwID,ppunkBrowser) )
    ( (This)->lpVtbl -> AggregatedNavigation2(This,grfHLNF,pbc,pibsc,pszTargetName,pUri,pszLocation) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_htiface_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_htiface_0000_0004_v0_0_s_ifspec;
}
