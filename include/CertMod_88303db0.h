#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICertManageModule ICertManageModule;
#include "wtypes.h"
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
const WCHAR wszCMM_PROP_NAME[ ] = L"Name";
const WCHAR wszCMM_PROP_DESCRIPTION[ ] = L"Description";
const WCHAR wszCMM_PROP_COPYRIGHT[ ] = L"Copyright";
const WCHAR wszCMM_PROP_FILEVER[ ] = L"File Version";
const WCHAR wszCMM_PROP_PRODUCTVER[ ] = L"Product Version";
const WCHAR wszCMM_PROP_DISPLAY_HWND[ ] = L"HWND";
const WCHAR wszCMM_PROP_ISMULTITHREADED[ ] = L"IsMultiThreaded";
extern RPC_IF_HANDLE __MIDL_itf_certmod_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certmod_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICertManageModule;
    typedef struct ICertManageModuleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertManageModule * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertManageModule * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertManageModule * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertManageModule * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertManageModule * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertManageModule * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertManageModule * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in ICertManageModule * This,
                       __RPC__in const BSTR strConfig,
                       __RPC__in BSTR strStorageLocation,
                       __RPC__in BSTR strPropertyName,
                       LONG Flags,
                                __RPC__out VARIANT *pvarProperty);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in ICertManageModule * This,
                       __RPC__in const BSTR strConfig,
                       __RPC__in BSTR strStorageLocation,
                       __RPC__in BSTR strPropertyName,
                       LONG Flags,
                       __RPC__in const VARIANT *pvarProperty);
        HRESULT ( STDMETHODCALLTYPE *Configure )(
            __RPC__in ICertManageModule * This,
                       __RPC__in const BSTR strConfig,
                       __RPC__in BSTR strStorageLocation,
                       LONG Flags);
        END_INTERFACE
    } ICertManageModuleVtbl;
    interface ICertManageModule
    {
        CONST_VTBL struct ICertManageModuleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetProperty(This,strConfig,strStorageLocation,strPropertyName,Flags,pvarProperty) )
    ( (This)->lpVtbl -> SetProperty(This,strConfig,strStorageLocation,strPropertyName,Flags,pvarProperty) )
    ( (This)->lpVtbl -> Configure(This,strConfig,strStorageLocation,Flags) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_certmod_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certmod_0000_0001_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
