#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICertPolicy ICertPolicy;
typedef interface ICertPolicy2 ICertPolicy2;
typedef interface INDESPolicy INDESPolicy;
#include "wtypes.h"
#include "certmod.h"
#include "certbase.h"
#include "certbcli.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_certpol_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certpol_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICertPolicy;
    typedef struct ICertPolicyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertPolicy * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertPolicy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertPolicy * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertPolicy * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertPolicy * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertPolicy * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertPolicy * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICertPolicy * This,
                       __RPC__in const BSTR strConfig);
        HRESULT ( STDMETHODCALLTYPE *VerifyRequest )(
            __RPC__in ICertPolicy * This,
                       __RPC__in const BSTR strConfig,
                       LONG Context,
                       LONG bNewRequest,
                       LONG Flags,
                                __RPC__out LONG *pDisposition);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in ICertPolicy * This,
                                __RPC__deref_out_opt BSTR *pstrDescription);
        HRESULT ( STDMETHODCALLTYPE *ShutDown )(
            __RPC__in ICertPolicy * This);
        END_INTERFACE
    } ICertPolicyVtbl;
    interface ICertPolicy
    {
        CONST_VTBL struct ICertPolicyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,strConfig) )
    ( (This)->lpVtbl -> VerifyRequest(This,strConfig,Context,bNewRequest,Flags,pDisposition) )
    ( (This)->lpVtbl -> GetDescription(This,pstrDescription) )
    ( (This)->lpVtbl -> ShutDown(This) )
EXTERN_C const IID IID_ICertPolicy2;
    typedef struct ICertPolicy2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertPolicy2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertPolicy2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertPolicy2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertPolicy2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertPolicy2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertPolicy2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertPolicy2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in ICertPolicy2 * This,
                       __RPC__in const BSTR strConfig);
        HRESULT ( STDMETHODCALLTYPE *VerifyRequest )(
            __RPC__in ICertPolicy2 * This,
                       __RPC__in const BSTR strConfig,
                       LONG Context,
                       LONG bNewRequest,
                       LONG Flags,
                                __RPC__out LONG *pDisposition);
        HRESULT ( STDMETHODCALLTYPE *GetDescription )(
            __RPC__in ICertPolicy2 * This,
                                __RPC__deref_out_opt BSTR *pstrDescription);
        HRESULT ( STDMETHODCALLTYPE *ShutDown )(
            __RPC__in ICertPolicy2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetManageModule )(
            __RPC__in ICertPolicy2 * This,
                                __RPC__deref_out_opt ICertManageModule **ppManageModule);
        END_INTERFACE
    } ICertPolicy2Vtbl;
    interface ICertPolicy2
    {
        CONST_VTBL struct ICertPolicy2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,strConfig) )
    ( (This)->lpVtbl -> VerifyRequest(This,strConfig,Context,bNewRequest,Flags,pDisposition) )
    ( (This)->lpVtbl -> GetDescription(This,pstrDescription) )
    ( (This)->lpVtbl -> ShutDown(This) )
    ( (This)->lpVtbl -> GetManageModule(This,ppManageModule) )
typedef
enum X509SCEPMessageType
    {
        SCEPMessageUnknown = -1,
        SCEPMessageCertResponse = 3,
        SCEPMessagePKCSRequest = 19,
        SCEPMessageGetCertInitial = 20,
        SCEPMessageGetCert = 21,
        SCEPMessageGetCRL = 22,
        SCEPMessageClaimChallengeAnswer = 41
    } X509SCEPMessageType;
typedef
enum X509SCEPDisposition
    {
        SCEPDispositionUnknown = -1,
        SCEPDispositionSuccess = 0,
        SCEPDispositionFailure = 2,
        SCEPDispositionPending = 3,
        SCEPDispositionPendingChallenge = 11
    } X509SCEPDisposition;
typedef
enum X509SCEPFailInfo
    {
        SCEPFailUnknown = -1,
        SCEPFailBadAlgorithm = 0,
        SCEPFailBadMessageCheck = 1,
        SCEPFailBadRequest = 2,
        SCEPFailBadTime = 3,
        SCEPFailBadCertId = 4
    } X509SCEPFailInfo;
extern RPC_IF_HANDLE __MIDL_itf_certpol_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certpol_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_INDESPolicy;
    typedef struct INDESPolicyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            INDESPolicy * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            INDESPolicy * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            INDESPolicy * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            INDESPolicy * This);
        HRESULT ( STDMETHODCALLTYPE *Uninitialize )(
            INDESPolicy * This);
        HRESULT ( STDMETHODCALLTYPE *GenerateChallenge )(
            INDESPolicy * This,
                            PCWSTR pwszTemplate,
                            PCWSTR pwszParams,
                                PWSTR *ppwszResponse);
        HRESULT ( STDMETHODCALLTYPE *VerifyRequest )(
            INDESPolicy * This,
                            CERTTRANSBLOB *pctbRequest,
                            CERTTRANSBLOB *pctbSigningCertEncoded,
                            PCWSTR pwszTemplate,
                            PCWSTR pwszTransactionId,
                                BOOL *pfVerified);
        HRESULT ( STDMETHODCALLTYPE *Notify )(
            INDESPolicy * This,
                            PCWSTR pwszChallenge,
                            PCWSTR pwszTransactionId,
                       X509SCEPDisposition disposition,
                       LONG lastHResult,
                            CERTTRANSBLOB *pctbIssuedCertEncoded);
        END_INTERFACE
    } INDESPolicyVtbl;
    interface INDESPolicy
    {
        CONST_VTBL struct INDESPolicyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This) )
    ( (This)->lpVtbl -> Uninitialize(This) )
    ( (This)->lpVtbl -> GenerateChallenge(This,pwszTemplate,pwszParams,ppwszResponse) )
    ( (This)->lpVtbl -> VerifyRequest(This,pctbRequest,pctbSigningCertEncoded,pwszTemplate,pwszTransactionId,pfVerified) )
    ( (This)->lpVtbl -> Notify(This,pwszChallenge,pwszTransactionId,disposition,lastHResult,pctbIssuedCertEncoded) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_certpol_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certpol_0000_0003_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
