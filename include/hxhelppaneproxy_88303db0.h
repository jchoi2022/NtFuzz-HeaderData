#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IHxHelpPane IHxHelpPane;
typedef interface IHxInteractiveUser IHxInteractiveUser;
typedef class HxHelpPane HxHelpPane;
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_hxhelppaneproxy_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hxhelppaneproxy_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IHxHelpPane;
    typedef struct IHxHelpPaneVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHxHelpPane * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHxHelpPane * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHxHelpPane * This);
        HRESULT ( STDMETHODCALLTYPE *DisplayTask )(
            __RPC__in IHxHelpPane * This,
                       __RPC__in BSTR bstrUrl);
        HRESULT ( STDMETHODCALLTYPE *DisplayContents )(
            __RPC__in IHxHelpPane * This,
            _In_opt_ BSTR bstrUrl);
        HRESULT ( STDMETHODCALLTYPE *DisplaySearchResults )(
            __RPC__in IHxHelpPane * This,
                       __RPC__in BSTR bstrSearchQuery);
        END_INTERFACE
    } IHxHelpPaneVtbl;
    interface IHxHelpPane
    {
        CONST_VTBL struct IHxHelpPaneVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> DisplayTask(This,bstrUrl) )
    ( (This)->lpVtbl -> DisplayContents(This,bstrUrl) )
    ( (This)->lpVtbl -> DisplaySearchResults(This,bstrSearchQuery) )
EXTERN_C const IID IID_IHxInteractiveUser;
    typedef struct IHxInteractiveUserVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IHxInteractiveUser * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IHxInteractiveUser * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IHxInteractiveUser * This);
        HRESULT ( STDMETHODCALLTYPE *Execute )(
            __RPC__in IHxInteractiveUser * This,
                       __RPC__in LPCWSTR pcUrl);
        END_INTERFACE
    } IHxInteractiveUserVtbl;
    interface IHxInteractiveUser
    {
        CONST_VTBL struct IHxInteractiveUserVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Execute(This,pcUrl) )
EXTERN_C const IID LIBID_HelpPane;
EXTERN_C const CLSID CLSID_HxHelpPane;
class DECLSPEC_UUID("8cec58e7-07a1-11d9-b15e-000d56bfe6ee")
HxHelpPane;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_hxhelppaneproxy_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_hxhelppaneproxy_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
