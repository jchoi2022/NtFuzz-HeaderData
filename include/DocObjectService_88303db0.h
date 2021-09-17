#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDocObjectService IDocObjectService;
#include "objidl.h"
#include "mshtml.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_docobjectservice_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_docobjectservice_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDocObjectService;
    typedef struct IDocObjectServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDocObjectService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDocObjectService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDocObjectService * This);
        HRESULT ( STDMETHODCALLTYPE *FireBeforeNavigate2 )(
            __RPC__in IDocObjectService * This,
                       __RPC__in_opt IDispatch *pDispatch,
                       __RPC__in LPCWSTR lpszUrl,
                       DWORD dwFlags,
                       __RPC__in LPCWSTR lpszFrameName,
                       __RPC__in BYTE *pPostData,
                       DWORD cbPostData,
                       __RPC__in LPCWSTR lpszHeaders,
                       BOOL fPlayNavSound,
                        __RPC__out BOOL *pfCancel);
        HRESULT ( STDMETHODCALLTYPE *FireNavigateComplete2 )(
            __RPC__in IDocObjectService * This,
                       __RPC__in_opt IHTMLWindow2 *pHTMLWindow2,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *FireDownloadBegin )(
            __RPC__in IDocObjectService * This);
        HRESULT ( STDMETHODCALLTYPE *FireDownloadComplete )(
            __RPC__in IDocObjectService * This);
        HRESULT ( STDMETHODCALLTYPE *FireDocumentComplete )(
            __RPC__in IDocObjectService * This,
                       __RPC__in_opt IHTMLWindow2 *pHTMLWindow,
                       DWORD dwFlags);
        HRESULT ( STDMETHODCALLTYPE *UpdateDesktopComponent )(
            __RPC__in IDocObjectService * This,
                       __RPC__in_opt IHTMLWindow2 *pHTMLWindow);
        HRESULT ( STDMETHODCALLTYPE *GetPendingUrl )(
            __RPC__in IDocObjectService * This,
                        __RPC__deref_out_opt BSTR *pbstrPendingUrl);
        HRESULT ( STDMETHODCALLTYPE *ActiveElementChanged )(
            __RPC__in IDocObjectService * This,
            __RPC__in_opt IHTMLElement *pHTMLElement);
        HRESULT ( STDMETHODCALLTYPE *GetUrlSearchComponent )(
            __RPC__in IDocObjectService * This,
                        __RPC__deref_out_opt BSTR *pbstrSearch);
        HRESULT ( STDMETHODCALLTYPE *IsErrorUrl )(
            __RPC__in IDocObjectService * This,
                       __RPC__in LPCWSTR lpszUrl,
                        __RPC__out BOOL *pfIsError);
        END_INTERFACE
    } IDocObjectServiceVtbl;
    interface IDocObjectService
    {
        CONST_VTBL struct IDocObjectServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FireBeforeNavigate2(This,pDispatch,lpszUrl,dwFlags,lpszFrameName,pPostData,cbPostData,lpszHeaders,fPlayNavSound,pfCancel) )
    ( (This)->lpVtbl -> FireNavigateComplete2(This,pHTMLWindow2,dwFlags) )
    ( (This)->lpVtbl -> FireDownloadBegin(This) )
    ( (This)->lpVtbl -> FireDownloadComplete(This) )
    ( (This)->lpVtbl -> FireDocumentComplete(This,pHTMLWindow,dwFlags) )
    ( (This)->lpVtbl -> UpdateDesktopComponent(This,pHTMLWindow) )
    ( (This)->lpVtbl -> GetPendingUrl(This,pbstrPendingUrl) )
    ( (This)->lpVtbl -> ActiveElementChanged(This,pHTMLElement) )
    ( (This)->lpVtbl -> GetUrlSearchComponent(This,pbstrSearch) )
    ( (This)->lpVtbl -> IsErrorUrl(This,lpszUrl,pfIsError) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_docobjectservice_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_docobjectservice_0000_0001_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
