#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWebBrowserEventsService IWebBrowserEventsService;
typedef interface IWebBrowserEventsUrlService IWebBrowserEventsUrlService;
#include "objidl.h"
#include "oleidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma comment(lib,"uuid.lib")
extern RPC_IF_HANDLE __MIDL_itf_webevnts_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_webevnts_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWebBrowserEventsService;
    typedef struct IWebBrowserEventsServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWebBrowserEventsService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWebBrowserEventsService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWebBrowserEventsService * This);
                                        HRESULT ( STDMETHODCALLTYPE *FireBeforeNavigate2Event )(
            __RPC__in IWebBrowserEventsService * This,
                                __RPC__out VARIANT_BOOL *pfCancel);
                                        HRESULT ( STDMETHODCALLTYPE *FireNavigateComplete2Event )(
            __RPC__in IWebBrowserEventsService * This);
                                        HRESULT ( STDMETHODCALLTYPE *FireDownloadBeginEvent )(
            __RPC__in IWebBrowserEventsService * This);
                                        HRESULT ( STDMETHODCALLTYPE *FireDownloadCompleteEvent )(
            __RPC__in IWebBrowserEventsService * This);
                                        HRESULT ( STDMETHODCALLTYPE *FireDocumentCompleteEvent )(
            __RPC__in IWebBrowserEventsService * This);
        END_INTERFACE
    } IWebBrowserEventsServiceVtbl;
    interface IWebBrowserEventsService
    {
        CONST_VTBL struct IWebBrowserEventsServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> FireBeforeNavigate2Event(This,pfCancel) )
    ( (This)->lpVtbl -> FireNavigateComplete2Event(This) )
    ( (This)->lpVtbl -> FireDownloadBeginEvent(This) )
    ( (This)->lpVtbl -> FireDownloadCompleteEvent(This) )
    ( (This)->lpVtbl -> FireDocumentCompleteEvent(This) )
EXTERN_C const IID IID_IWebBrowserEventsUrlService;
    typedef struct IWebBrowserEventsUrlServiceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWebBrowserEventsUrlService * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWebBrowserEventsUrlService * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWebBrowserEventsUrlService * This);
                                        HRESULT ( STDMETHODCALLTYPE *GetUrlForEvents )(
            __RPC__in IWebBrowserEventsUrlService * This,
                                __RPC__deref_out_opt BSTR *pUrl);
        END_INTERFACE
    } IWebBrowserEventsUrlServiceVtbl;
    interface IWebBrowserEventsUrlService
    {
        CONST_VTBL struct IWebBrowserEventsUrlServiceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetUrlForEvents(This,pUrl) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_webevnts_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_webevnts_0000_0002_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
