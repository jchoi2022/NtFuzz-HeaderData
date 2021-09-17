#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IIEWebDriverSite IIEWebDriverSite;
typedef interface IIEWebDriverManager IIEWebDriverManager;
typedef class IEWebDriverManager IEWebDriverManager;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_iewebdriver_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iewebdriver_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IIEWebDriverSite;
    typedef struct IIEWebDriverSiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IIEWebDriverSite * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IIEWebDriverSite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IIEWebDriverSite * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IIEWebDriverSite * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IIEWebDriverSite * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IIEWebDriverSite * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IIEWebDriverSite * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *WindowOperation )(
            __RPC__in IIEWebDriverSite * This,
                       DWORD operationCode,
                       DWORD hWnd);
                   HRESULT ( STDMETHODCALLTYPE *DetachWebdriver )(
            __RPC__in IIEWebDriverSite * This,
                       __RPC__in_opt IUnknown *pUnkWD);
                   HRESULT ( STDMETHODCALLTYPE *GetCapabilityValue )(
            __RPC__in IIEWebDriverSite * This,
                       __RPC__in_opt IUnknown *pUnkWD,
                       __RPC__in LPWSTR capName,
                        __RPC__out VARIANT *capValue);
        END_INTERFACE
    } IIEWebDriverSiteVtbl;
    interface IIEWebDriverSite
    {
        CONST_VTBL struct IIEWebDriverSiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> WindowOperation(This,operationCode,hWnd) )
    ( (This)->lpVtbl -> DetachWebdriver(This,pUnkWD) )
    ( (This)->lpVtbl -> GetCapabilityValue(This,pUnkWD,capName,capValue) )
EXTERN_C const IID IID_IIEWebDriverManager;
    typedef struct IIEWebDriverManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IIEWebDriverManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IIEWebDriverManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IIEWebDriverManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IIEWebDriverManager * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IIEWebDriverManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IIEWebDriverManager * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IIEWebDriverManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *ExecuteCommand )(
            __RPC__in IIEWebDriverManager * This,
                       __RPC__in LPWSTR command,
                        __RPC__deref_out_opt LPWSTR *response);
        END_INTERFACE
    } IIEWebDriverManagerVtbl;
    interface IIEWebDriverManager
    {
        CONST_VTBL struct IIEWebDriverManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> ExecuteCommand(This,command,response) )
EXTERN_C const IID LIBID_IEWebDriverLib;
EXTERN_C const CLSID CLSID_IEWebDriverManager;
class DECLSPEC_UUID("90314AF2-5250-47B3-89D8-6295FC23BC22")
IEWebDriverManager;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_iewebdriver_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iewebdriver_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER VARIANT_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree( __RPC__in unsigned long *, __RPC__in VARIANT * );
unsigned long __RPC_USER VARIANT_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in VARIANT * );
unsigned char * __RPC_USER VARIANT_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out VARIANT * );
void __RPC_USER VARIANT_UserFree64( __RPC__in unsigned long *, __RPC__in VARIANT * );
}
