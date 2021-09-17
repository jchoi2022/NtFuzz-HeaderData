#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICorrelationEngine ICorrelationEngine;
typedef class CorrelationEngine CorrelationEngine;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_correngine_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_correngine_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICorrelationEngine;
    typedef struct ICorrelationEngineVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICorrelationEngine * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICorrelationEngine * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICorrelationEngine * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICorrelationEngine * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICorrelationEngine * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICorrelationEngine * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICorrelationEngine * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_RetainGlobalEvents )(
            __RPC__in ICorrelationEngine * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_RetainGlobalEvents )(
            __RPC__in ICorrelationEngine * This,
                       VARIANT_BOOL newVal);
                               HRESULT ( STDMETHODCALLTYPE *Filter )(
            __RPC__in ICorrelationEngine * This,
                       __RPC__in BSTR InputTraceFile,
                       __RPC__in BSTR OutputTraceFile,
                       __RPC__in BSTR FilterActivityId);
                               HRESULT ( STDMETHODCALLTYPE *Normalize )(
            __RPC__in ICorrelationEngine * This,
                       __RPC__in BSTR InputTraceFile,
                       __RPC__in BSTR OutputTraceFile);
                                        HRESULT ( STDMETHODCALLTYPE *get_RetainPII )(
            __RPC__in ICorrelationEngine * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_RetainPII )(
            __RPC__in ICorrelationEngine * This,
                       VARIANT_BOOL newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RetainCorrelationEvents )(
            __RPC__in ICorrelationEngine * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_RetainCorrelationEvents )(
            __RPC__in ICorrelationEngine * This,
                       VARIANT_BOOL newVal);
        END_INTERFACE
    } ICorrelationEngineVtbl;
    interface ICorrelationEngine
    {
        CONST_VTBL struct ICorrelationEngineVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_RetainGlobalEvents(This,pVal) )
    ( (This)->lpVtbl -> put_RetainGlobalEvents(This,newVal) )
    ( (This)->lpVtbl -> Filter(This,InputTraceFile,OutputTraceFile,FilterActivityId) )
    ( (This)->lpVtbl -> Normalize(This,InputTraceFile,OutputTraceFile) )
    ( (This)->lpVtbl -> get_RetainPII(This,pVal) )
    ( (This)->lpVtbl -> put_RetainPII(This,newVal) )
    ( (This)->lpVtbl -> get_RetainCorrelationEvents(This,pVal) )
    ( (This)->lpVtbl -> put_RetainCorrelationEvents(This,newVal) )
EXTERN_C const IID LIBID_CorrEngineLib;
EXTERN_C const CLSID CLSID_CorrelationEngine;
class DECLSPEC_UUID("FCDC2CF5-ABCD-4BA5-94DA-1823AE06FE2B")
CorrelationEngine;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_correngine_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_correngine_0000_0002_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
