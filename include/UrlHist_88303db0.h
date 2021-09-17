#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IEnumSTATURL IEnumSTATURL;
typedef interface IUrlHistoryStg IUrlHistoryStg;
typedef interface IUrlHistoryStg2 IUrlHistoryStg2;
typedef interface IUrlHistoryNotify IUrlHistoryNotify;
#include "objidl.h"
#include "oleidl.h"
#include "oaidl.h"
#include "docobj.h"
extern "C"{
#pragma comment(lib,"uuid.lib")
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum _ADDURL_FLAG
    {
        ADDURL_FIRST = 0,
        ADDURL_ADDTOHISTORYANDCACHE = 0,
        ADDURL_ADDTOCACHE = 1,
        ADDURL_Max = 2147483647L
    } ADDURL_FLAG;
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0000_v0_0_s_ifspec;
typedef __RPC_unique_pointer IEnumSTATURL *LPENUMSTATURL;
typedef struct _STATURL
    {
    DWORD cbSize;
    LPWSTR pwcsUrl;
    LPWSTR pwcsTitle;
    FILETIME ftLastVisited;
    FILETIME ftLastUpdated;
    FILETIME ftExpires;
    DWORD dwFlags;
    } STATURL;
typedef struct _STATURL *LPSTATURL;
EXTERN_C const IID IID_IEnumSTATURL;
    typedef struct IEnumSTATURLVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEnumSTATURL * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEnumSTATURL * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEnumSTATURL * This);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in IEnumSTATURL * This,
                       ULONG celt,
                            __RPC__inout LPSTATURL rgelt,
                            __RPC__inout ULONG *pceltFetched);
        HRESULT ( STDMETHODCALLTYPE *Skip )(
            __RPC__in IEnumSTATURL * This,
                       ULONG celt);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IEnumSTATURL * This);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IEnumSTATURL * This,
                        __RPC__deref_out_opt IEnumSTATURL **ppenum);
        HRESULT ( STDMETHODCALLTYPE *SetFilter )(
            __RPC__in IEnumSTATURL * This,
                               __RPC__in_opt LPCOLESTR poszFilter,
                       DWORD dwFlags);
        END_INTERFACE
    } IEnumSTATURLVtbl;
    interface IEnumSTATURL
    {
        CONST_VTBL struct IEnumSTATURLVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Next(This,celt,rgelt,pceltFetched) )
    ( (This)->lpVtbl -> Skip(This,celt) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Clone(This,ppenum) )
    ( (This)->lpVtbl -> SetFilter(This,poszFilter,dwFlags) )
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0001_v0_0_s_ifspec;
typedef __RPC_unique_pointer IUrlHistoryStg *LPURLHISTORYSTG;
EXTERN_C const IID IID_IUrlHistoryStg;
    typedef struct IUrlHistoryStgVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUrlHistoryStg * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUrlHistoryStg * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUrlHistoryStg * This);
        HRESULT ( STDMETHODCALLTYPE *AddUrl )(
            __RPC__in IUrlHistoryStg * This,
                       __RPC__in LPCOLESTR pocsUrl,
                               __RPC__in_opt LPCOLESTR pocsTitle,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *DeleteUrl )(
            __RPC__in IUrlHistoryStg * This,
                       __RPC__in LPCOLESTR pocsUrl,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *QueryUrl )(
            __RPC__in IUrlHistoryStg * This,
                       __RPC__in LPCOLESTR pocsUrl,
                       DWORD dwFlags,
                                    __RPC__inout_opt LPSTATURL lpSTATURL);
        HRESULT ( STDMETHODCALLTYPE *BindToObject )(
            __RPC__in IUrlHistoryStg * This,
                       __RPC__in LPCOLESTR pocsUrl,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppvOut);
        HRESULT ( STDMETHODCALLTYPE *EnumUrls )(
            __RPC__in IUrlHistoryStg * This,
                        __RPC__deref_out_opt IEnumSTATURL **ppEnum);
        END_INTERFACE
    } IUrlHistoryStgVtbl;
    interface IUrlHistoryStg
    {
        CONST_VTBL struct IUrlHistoryStgVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddUrl(This,pocsUrl,pocsTitle,dwFlags) )
    ( (This)->lpVtbl -> DeleteUrl(This,pocsUrl,dwFlags) )
    ( (This)->lpVtbl -> QueryUrl(This,pocsUrl,dwFlags,lpSTATURL) )
    ( (This)->lpVtbl -> BindToObject(This,pocsUrl,riid,ppvOut) )
    ( (This)->lpVtbl -> EnumUrls(This,ppEnum) )
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0002_v0_0_s_ifspec;
typedef __RPC_unique_pointer IUrlHistoryStg2 *LPURLHISTORYSTG2;
EXTERN_C const IID IID_IUrlHistoryStg2;
    typedef struct IUrlHistoryStg2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUrlHistoryStg2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUrlHistoryStg2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUrlHistoryStg2 * This);
        HRESULT ( STDMETHODCALLTYPE *AddUrl )(
            __RPC__in IUrlHistoryStg2 * This,
                       __RPC__in LPCOLESTR pocsUrl,
                               __RPC__in_opt LPCOLESTR pocsTitle,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *DeleteUrl )(
            __RPC__in IUrlHistoryStg2 * This,
                       __RPC__in LPCOLESTR pocsUrl,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *QueryUrl )(
            __RPC__in IUrlHistoryStg2 * This,
                       __RPC__in LPCOLESTR pocsUrl,
                       DWORD dwFlags,
                                    __RPC__inout_opt LPSTATURL lpSTATURL);
        HRESULT ( STDMETHODCALLTYPE *BindToObject )(
            __RPC__in IUrlHistoryStg2 * This,
                       __RPC__in LPCOLESTR pocsUrl,
                       __RPC__in REFIID riid,
                                __RPC__deref_out_opt void **ppvOut);
        HRESULT ( STDMETHODCALLTYPE *EnumUrls )(
            __RPC__in IUrlHistoryStg2 * This,
                        __RPC__deref_out_opt IEnumSTATURL **ppEnum);
        HRESULT ( STDMETHODCALLTYPE *AddUrlAndNotify )(
            __RPC__in IUrlHistoryStg2 * This,
                       __RPC__in LPCOLESTR pocsUrl,
                               __RPC__in_opt LPCOLESTR pocsTitle,
                       DWORD dwFlags,
                       BOOL fWriteHistory,
                       __RPC__in_opt IOleCommandTarget *poctNotify,
                               __RPC__in_opt IUnknown *punkISFolder);
        HRESULT ( STDMETHODCALLTYPE *ClearHistory )(
            __RPC__in IUrlHistoryStg2 * This);
        END_INTERFACE
    } IUrlHistoryStg2Vtbl;
    interface IUrlHistoryStg2
    {
        CONST_VTBL struct IUrlHistoryStg2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddUrl(This,pocsUrl,pocsTitle,dwFlags) )
    ( (This)->lpVtbl -> DeleteUrl(This,pocsUrl,dwFlags) )
    ( (This)->lpVtbl -> QueryUrl(This,pocsUrl,dwFlags,lpSTATURL) )
    ( (This)->lpVtbl -> BindToObject(This,pocsUrl,riid,ppvOut) )
    ( (This)->lpVtbl -> EnumUrls(This,ppEnum) )
    ( (This)->lpVtbl -> AddUrlAndNotify(This,pocsUrl,pocsTitle,dwFlags,fWriteHistory,poctNotify,punkISFolder) )
    ( (This)->lpVtbl -> ClearHistory(This) )
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0003_v0_0_s_ifspec;
typedef __RPC_unique_pointer IUrlHistoryNotify *LPURLHISTORYNOTIFY;
EXTERN_C const IID IID_IUrlHistoryNotify;
    typedef struct IUrlHistoryNotifyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IUrlHistoryNotify * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IUrlHistoryNotify * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IUrlHistoryNotify * This);
                           HRESULT ( STDMETHODCALLTYPE *QueryStatus )(
            __RPC__in IUrlHistoryNotify * This,
                               __RPC__in_opt const GUID *pguidCmdGroup,
                       ULONG cCmds,
                                     __RPC__inout_ecount_full(cCmds) OLECMD prgCmds[ ],
                                    __RPC__inout_opt OLECMDTEXT *pCmdText);
        HRESULT ( STDMETHODCALLTYPE *Exec )(
            __RPC__in IUrlHistoryNotify * This,
                               __RPC__in_opt const GUID *pguidCmdGroup,
                       DWORD nCmdID,
                       DWORD nCmdexecopt,
                               __RPC__in_opt VARIANT *pvaIn,
                                    __RPC__inout_opt VARIANT *pvaOut);
        END_INTERFACE
    } IUrlHistoryNotifyVtbl;
    interface IUrlHistoryNotify
    {
        CONST_VTBL struct IUrlHistoryNotifyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryStatus(This,pguidCmdGroup,cCmds,prgCmds,pCmdText) )
    ( (This)->lpVtbl -> Exec(This,pguidCmdGroup,nCmdID,nCmdexecopt,pvaIn,pvaOut) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_urlhist_0000_0004_v0_0_s_ifspec;
}
