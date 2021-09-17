#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWMIExtension IWMIExtension;
typedef class WMIExtension WMIExtension;
#include "oaidl.h"
#include "ocidl.h"
#include "wbemdisp.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family or WinMgmt Package
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_PKG_WINMGMT)
extern RPC_IF_HANDLE __MIDL_itf_wbemads_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemads_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID LIBID_WMIEXTENSIONLib;
EXTERN_C const IID IID_IWMIExtension;
    typedef struct IWMIExtensionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWMIExtension * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWMIExtension * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWMIExtension * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWMIExtension * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWMIExtension * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWMIExtension * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWMIExtension * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_WMIObjectPath )(
            __RPC__in IWMIExtension * This,
                                __RPC__deref_out_opt BSTR *strWMIObjectPath);
                               HRESULT ( STDMETHODCALLTYPE *GetWMIObject )(
            __RPC__in IWMIExtension * This,
                                __RPC__deref_out_opt ISWbemObject **objWMIObject);
                               HRESULT ( STDMETHODCALLTYPE *GetWMIServices )(
            __RPC__in IWMIExtension * This,
                                __RPC__deref_out_opt ISWbemServices **objWMIServices);
        END_INTERFACE
    } IWMIExtensionVtbl;
    interface IWMIExtension
    {
        CONST_VTBL struct IWMIExtensionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_WMIObjectPath(This,strWMIObjectPath) )
    ( (This)->lpVtbl -> GetWMIObject(This,objWMIObject) )
    ( (This)->lpVtbl -> GetWMIServices(This,objWMIServices) )
EXTERN_C const CLSID CLSID_WMIExtension;
class DECLSPEC_UUID("f0975afe-5c7f-11d2-8b74-00104b2afb41")
WMIExtension;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wbemads_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wbemads_0000_0002_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
