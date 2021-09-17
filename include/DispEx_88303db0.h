#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IDispatchEx IDispatchEx;
typedef interface IDispError IDispError;
typedef interface IVariantChangeType IVariantChangeType;
typedef interface IObjectIdentity IObjectIdentity;
typedef interface ICanHandleException ICanHandleException;
typedef interface IProvideRuntimeContext IProvideRuntimeContext;
#include "ocidl.h"
extern "C"{
#pragma comment(lib,"uuid.lib")
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "servprov.h"
DEFINE_GUID(IID_IDispatchEx, 0xa6ef9860, 0xc720, 0x11d0, 0x93, 0x37, 0x0, 0xa0, 0xc9, 0xd, 0xca, 0xa9);
DEFINE_GUID(IID_IDispError, 0xa6ef9861, 0xc720, 0x11d0, 0x93, 0x37, 0x0, 0xa0, 0xc9, 0xd, 0xca, 0xa9);
DEFINE_GUID(IID_IVariantChangeType, 0xa6ef9862, 0xc720, 0x11d0, 0x93, 0x37, 0x0, 0xa0, 0xc9, 0xd, 0xca, 0xa9);
DEFINE_GUID(SID_VariantConversion, 0x1f101481, 0xbccd, 0x11d0, 0x93, 0x36, 0x0, 0xa0, 0xc9, 0xd, 0xca, 0xa9);
DEFINE_GUID(SID_GetCaller, 0x4717cc40, 0xbcb9, 0x11d0, 0x93, 0x36, 0x0, 0xa0, 0xc9, 0xd, 0xca, 0xa9);
DEFINE_GUID(SID_ProvideRuntimeContext, 0x74a5040c, 0xdd0c, 0x48f0, 0xac, 0x85, 0x19, 0x4c, 0x32, 0x59, 0x18, 0xa);
DEFINE_GUID(IID_IProvideRuntimeContext, 0x10e2414a, 0xec59, 0x49d2, 0xbc, 0x51, 0x5a, 0xdd, 0x2c, 0x36, 0xfe, 0xbc);
DEFINE_GUID(IID_IObjectIdentity, 0xca04b7e6, 0xd21, 0x11d1, 0x8c, 0xc5, 0x0, 0xc0, 0x4f, 0xc2, 0xb0, 0x85);
DEFINE_GUID(IID_ICanHandleException, 0xc5598e60, 0xb307, 0x11d1, 0xb2, 0x7d, 0x0, 0x60, 0x08, 0xc3, 0xfb, 0xfb);
       (fdexPropCanGet | fdexPropCanPut | fdexPropCanPutRef | \
        fdexPropCanCall | fdexPropCanConstruct | fdexPropCanSourceEvents)
       (fdexPropCannotGet | fdexPropCannotPut | fdexPropCannotPutRef | \
        fdexPropCannotCall | fdexPropCannotConstruct | fdexPropCannotSourceEvents)
       (fdexPropNoSideEffects | fdexPropDynamicType)
       (grfdexPropCanAll | grfdexPropCannotAll | grfdexPropExtraAll)
extern RPC_IF_HANDLE __MIDL_itf_dispex_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dispex_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IDispatchEx;
    typedef struct IDispatchExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDispatchEx * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDispatchEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDispatchEx * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IDispatchEx * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IDispatchEx * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IDispatchEx * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDispatchEx * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *GetDispID )(
            __RPC__in IDispatchEx * This,
                       __RPC__in BSTR bstrName,
                       DWORD grfdex,
                        __RPC__out DISPID *pid);
                      HRESULT ( STDMETHODCALLTYPE *InvokeEx )(
            IDispatchEx * This,
            _In_ DISPID id,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pdp,
            _Out_opt_ VARIANT *pvarRes,
            _Out_opt_ EXCEPINFO *pei,
            _In_opt_ IServiceProvider *pspCaller);
        HRESULT ( STDMETHODCALLTYPE *DeleteMemberByName )(
            __RPC__in IDispatchEx * This,
                       __RPC__in BSTR bstrName,
                       DWORD grfdex);
        HRESULT ( STDMETHODCALLTYPE *DeleteMemberByDispID )(
            __RPC__in IDispatchEx * This,
                       DISPID id);
        HRESULT ( STDMETHODCALLTYPE *GetMemberProperties )(
            __RPC__in IDispatchEx * This,
                       DISPID id,
                       DWORD grfdexFetch,
                        __RPC__out DWORD *pgrfdex);
        HRESULT ( STDMETHODCALLTYPE *GetMemberName )(
            __RPC__in IDispatchEx * This,
                       DISPID id,
                        __RPC__deref_out_opt BSTR *pbstrName);
        HRESULT ( STDMETHODCALLTYPE *GetNextDispID )(
            __RPC__in IDispatchEx * This,
                       DWORD grfdex,
                       DISPID id,
                        __RPC__out DISPID *pid);
        HRESULT ( STDMETHODCALLTYPE *GetNameSpaceParent )(
            __RPC__in IDispatchEx * This,
                        __RPC__deref_out_opt IUnknown **ppunk);
        END_INTERFACE
    } IDispatchExVtbl;
    interface IDispatchEx
    {
        CONST_VTBL struct IDispatchExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetDispID(This,bstrName,grfdex,pid) )
    ( (This)->lpVtbl -> InvokeEx(This,id,lcid,wFlags,pdp,pvarRes,pei,pspCaller) )
    ( (This)->lpVtbl -> DeleteMemberByName(This,bstrName,grfdex) )
    ( (This)->lpVtbl -> DeleteMemberByDispID(This,id) )
    ( (This)->lpVtbl -> GetMemberProperties(This,id,grfdexFetch,pgrfdex) )
    ( (This)->lpVtbl -> GetMemberName(This,id,pbstrName) )
    ( (This)->lpVtbl -> GetNextDispID(This,grfdex,id,pid) )
    ( (This)->lpVtbl -> GetNameSpaceParent(This,ppunk) )
                HRESULT STDMETHODCALLTYPE IDispatchEx_RemoteInvokeEx_Proxy(
    __RPC__in IDispatchEx * This,
               DISPID id,
               LCID lcid,
               DWORD dwFlags,
               __RPC__in DISPPARAMS *pdp,
                __RPC__out VARIANT *pvarRes,
                __RPC__out EXCEPINFO *pei,
                       __RPC__in_opt IServiceProvider *pspCaller,
               UINT cvarRefArg,
                        __RPC__in_ecount_full(cvarRefArg) UINT *rgiRefArg,
                             __RPC__inout_ecount_full(cvarRefArg) VARIANT *rgvarRefArg);
void __RPC_STUB IDispatchEx_RemoteInvokeEx_Stub(
    IRpcStubBuffer *This,
    IRpcChannelBuffer *_pRpcChannelBuffer,
    PRPC_MESSAGE _pRpcMessage,
    DWORD *_pdwStubPhase);
EXTERN_C const IID IID_IDispError;
    typedef struct IDispErrorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IDispError * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IDispError * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IDispError * This);
        HRESULT ( STDMETHODCALLTYPE *QueryErrorInfo )(
            __RPC__in IDispError * This,
                       GUID guidErrorType,
                        __RPC__deref_out_opt IDispError **ppde);
        HRESULT ( STDMETHODCALLTYPE *GetNext )(
            __RPC__in IDispError * This,
                        __RPC__deref_out_opt IDispError **ppde);
        HRESULT ( STDMETHODCALLTYPE *GetHresult )(
            __RPC__in IDispError * This,
                        __RPC__out HRESULT *phr);
        HRESULT ( STDMETHODCALLTYPE *GetSource )(
            __RPC__in IDispError * This,
                        __RPC__deref_out_opt BSTR *pbstrSource);
        HRESULT ( STDMETHODCALLTYPE *GetHelpInfo )(
            __RPC__in IDispError * This,
                        __RPC__deref_out_opt BSTR *pbstrFileName,
                        __RPC__out DWORD *pdwContext);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in IDispError * This,
                        __RPC__deref_out_opt BSTR *pbstrDescription);
        END_INTERFACE
    } IDispErrorVtbl;
    interface IDispError
    {
        CONST_VTBL struct IDispErrorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> QueryErrorInfo(This,guidErrorType,ppde) )
    ( (This)->lpVtbl -> GetNext(This,ppde) )
    ( (This)->lpVtbl -> GetHresult(This,phr) )
    ( (This)->lpVtbl -> GetSource(This,pbstrSource) )
    ( (This)->lpVtbl -> GetHelpInfo(This,pbstrFileName,pdwContext) )
    ( (This)->lpVtbl -> GetDescription(This,pbstrDescription) )
EXTERN_C const IID IID_IVariantChangeType;
    typedef struct IVariantChangeTypeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IVariantChangeType * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IVariantChangeType * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IVariantChangeType * This);
        HRESULT ( STDMETHODCALLTYPE *ChangeType )(
            __RPC__in IVariantChangeType * This,
                                    __RPC__inout_opt VARIANT *pvarDst,
                               __RPC__in_opt VARIANT *pvarSrc,
                       LCID lcid,
                       VARTYPE vtNew);
        END_INTERFACE
    } IVariantChangeTypeVtbl;
    interface IVariantChangeType
    {
        CONST_VTBL struct IVariantChangeTypeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ChangeType(This,pvarDst,pvarSrc,lcid,vtNew) )
EXTERN_C const IID IID_IObjectIdentity;
    typedef struct IObjectIdentityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IObjectIdentity * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IObjectIdentity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IObjectIdentity * This);
        HRESULT ( STDMETHODCALLTYPE *IsEqualObject )(
            __RPC__in IObjectIdentity * This,
                       __RPC__in_opt IUnknown *punk);
        END_INTERFACE
    } IObjectIdentityVtbl;
    interface IObjectIdentity
    {
        CONST_VTBL struct IObjectIdentityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsEqualObject(This,punk) )
EXTERN_C const IID IID_ICanHandleException;
    typedef struct ICanHandleExceptionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICanHandleException * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICanHandleException * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICanHandleException * This);
        HRESULT ( STDMETHODCALLTYPE *CanHandleException )(
            __RPC__in ICanHandleException * This,
                       __RPC__in EXCEPINFO *pExcepInfo,
                       __RPC__in VARIANT *pvar);
        END_INTERFACE
    } ICanHandleExceptionVtbl;
    interface ICanHandleException
    {
        CONST_VTBL struct ICanHandleExceptionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CanHandleException(This,pExcepInfo,pvar) )
EXTERN_C const IID IID_IProvideRuntimeContext;
    typedef struct IProvideRuntimeContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IProvideRuntimeContext * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IProvideRuntimeContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IProvideRuntimeContext * This);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSourceContext )(
            __RPC__in IProvideRuntimeContext * This,
                        __RPC__out DWORD_PTR *pdwContext,
                        __RPC__out VARIANT_BOOL *pfExecutingGlobalCode);
        END_INTERFACE
    } IProvideRuntimeContextVtbl;
    interface IProvideRuntimeContext
    {
        CONST_VTBL struct IProvideRuntimeContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrentSourceContext(This,pdwContext,pfExecutingGlobalCode) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_dispex_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_dispex_0000_0006_v0_0_s_ifspec;
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
              HRESULT STDMETHODCALLTYPE IDispatchEx_InvokeEx_Proxy(
    IDispatchEx * This,
    _In_ DISPID id,
    _In_ LCID lcid,
    _In_ WORD wFlags,
    _In_ DISPPARAMS *pdp,
    _Out_opt_ VARIANT *pvarRes,
    _Out_opt_ EXCEPINFO *pei,
    _In_opt_ IServiceProvider *pspCaller);
                HRESULT STDMETHODCALLTYPE IDispatchEx_InvokeEx_Stub(
    __RPC__in IDispatchEx * This,
               DISPID id,
               LCID lcid,
               DWORD dwFlags,
               __RPC__in DISPPARAMS *pdp,
                __RPC__out VARIANT *pvarRes,
                __RPC__out EXCEPINFO *pei,
                       __RPC__in_opt IServiceProvider *pspCaller,
               UINT cvarRefArg,
                        __RPC__in_ecount_full(cvarRefArg) UINT *rgiRefArg,
                             __RPC__inout_ecount_full(cvarRefArg) VARIANT *rgvarRefArg);
}
