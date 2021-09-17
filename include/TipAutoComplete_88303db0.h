#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ITipAutoCompleteProvider ITipAutoCompleteProvider;
typedef interface ITipAutoCompleteClient ITipAutoCompleteClient;
typedef class TipAutoCompleteClient TipAutoCompleteClient;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_tipautocomplete_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tipautocomplete_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ITipAutoCompleteProvider;
    typedef struct ITipAutoCompleteProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITipAutoCompleteProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITipAutoCompleteProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITipAutoCompleteProvider * This);
                           HRESULT ( STDMETHODCALLTYPE *UpdatePendingText )(
            __RPC__in ITipAutoCompleteProvider * This,
                       __RPC__in BSTR bstrPendingText);
                           HRESULT ( STDMETHODCALLTYPE *Show )(
            __RPC__in ITipAutoCompleteProvider * This,
                       BOOL fShow);
        END_INTERFACE
    } ITipAutoCompleteProviderVtbl;
    interface ITipAutoCompleteProvider
    {
        CONST_VTBL struct ITipAutoCompleteProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> UpdatePendingText(This,bstrPendingText) )
    ( (This)->lpVtbl -> Show(This,fShow) )
EXTERN_C const IID IID_ITipAutoCompleteClient;
    typedef struct ITipAutoCompleteClientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITipAutoCompleteClient * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITipAutoCompleteClient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITipAutoCompleteClient * This);
                           HRESULT ( STDMETHODCALLTYPE *AdviseProvider )(
            __RPC__in ITipAutoCompleteClient * This,
                       __RPC__in HWND hWndField,
                       __RPC__in_opt ITipAutoCompleteProvider *pIProvider);
                           HRESULT ( STDMETHODCALLTYPE *UnadviseProvider )(
            __RPC__in ITipAutoCompleteClient * This,
                       __RPC__in HWND hWndField,
                       __RPC__in_opt ITipAutoCompleteProvider *pIProvider);
                           HRESULT ( STDMETHODCALLTYPE *UserSelection )(
            __RPC__in ITipAutoCompleteClient * This);
                           HRESULT ( STDMETHODCALLTYPE *PreferredRects )(
            __RPC__in ITipAutoCompleteClient * This,
                       __RPC__in RECT *prcACList,
                       __RPC__in RECT *prcField,
                        __RPC__out RECT *prcModifiedACList,
                        __RPC__out BOOL *pfShownAboveTip);
                           HRESULT ( STDMETHODCALLTYPE *RequestShowUI )(
            __RPC__in ITipAutoCompleteClient * This,
                       __RPC__in HWND hWndList,
                        __RPC__out BOOL *pfAllowShowing);
        END_INTERFACE
    } ITipAutoCompleteClientVtbl;
    interface ITipAutoCompleteClient
    {
        CONST_VTBL struct ITipAutoCompleteClientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AdviseProvider(This,hWndField,pIProvider) )
    ( (This)->lpVtbl -> UnadviseProvider(This,hWndField,pIProvider) )
    ( (This)->lpVtbl -> UserSelection(This) )
    ( (This)->lpVtbl -> PreferredRects(This,prcACList,prcField,prcModifiedACList,pfShownAboveTip) )
    ( (This)->lpVtbl -> RequestShowUI(This,hWndList,pfAllowShowing) )
EXTERN_C const IID LIBID_TipAutoCompleteClientLib;
EXTERN_C const CLSID CLSID_TipAutoCompleteClient;
class DECLSPEC_UUID("807C1E6C-1D00-453f-B920-B61BB7CDD997")
TipAutoCompleteClient;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_tipautocomplete_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_tipautocomplete_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree( __RPC__in unsigned long *, __RPC__in HWND * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER HWND_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in HWND * );
unsigned char * __RPC_USER HWND_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out HWND * );
void __RPC_USER HWND_UserFree64( __RPC__in unsigned long *, __RPC__in HWND * );
}
