#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICertGetConfig ICertGetConfig;
typedef interface ICertConfig ICertConfig;
typedef interface ICertConfig2 ICertConfig2;
typedef interface ICertRequest ICertRequest;
typedef interface ICertRequest2 ICertRequest2;
typedef interface ICertRequest3 ICertRequest3;
typedef class CCertGetConfig CCertGetConfig;
typedef class CCertConfig CCertConfig;
typedef class CCertRequest CCertRequest;
typedef class CCertServerPolicy CCertServerPolicy;
typedef class CCertServerExit CCertServerExit;
#include "wtypes.h"
#include "certif.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_certcli_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certcli_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICertGetConfig;
    typedef struct ICertGetConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertGetConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertGetConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertGetConfig * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertGetConfig * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertGetConfig * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertGetConfig * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertGetConfig * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *GetConfig )(
            __RPC__in ICertGetConfig * This,
                       LONG Flags,
                                __RPC__deref_out_opt BSTR *pstrOut);
        END_INTERFACE
    } ICertGetConfigVtbl;
    interface ICertGetConfig
    {
        CONST_VTBL struct ICertGetConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> GetConfig(This,Flags,pstrOut) )
EXTERN_C const IID IID_ICertConfig;
    typedef struct ICertConfigVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertConfig * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertConfig * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertConfig * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertConfig * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertConfig * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertConfig * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertConfig * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ICertConfig * This,
                       LONG Index,
                                __RPC__out LONG *pCount);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in ICertConfig * This,
                                __RPC__out LONG *pIndex);
        HRESULT ( STDMETHODCALLTYPE *GetField )(
            __RPC__in ICertConfig * This,
                       __RPC__in const BSTR strFieldName,
                                __RPC__deref_out_opt BSTR *pstrOut);
        HRESULT ( STDMETHODCALLTYPE *GetConfig )(
            __RPC__in ICertConfig * This,
                       LONG Flags,
                                __RPC__deref_out_opt BSTR *pstrOut);
        END_INTERFACE
    } ICertConfigVtbl;
    interface ICertConfig
    {
        CONST_VTBL struct ICertConfigVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Reset(This,Index,pCount) )
    ( (This)->lpVtbl -> Next(This,pIndex) )
    ( (This)->lpVtbl -> GetField(This,strFieldName,pstrOut) )
    ( (This)->lpVtbl -> GetConfig(This,Flags,pstrOut) )
EXTERN_C const IID IID_ICertConfig2;
    typedef struct ICertConfig2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertConfig2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertConfig2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertConfig2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertConfig2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertConfig2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertConfig2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertConfig2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ICertConfig2 * This,
                       LONG Index,
                                __RPC__out LONG *pCount);
        HRESULT ( STDMETHODCALLTYPE *Next )(
            __RPC__in ICertConfig2 * This,
                                __RPC__out LONG *pIndex);
        HRESULT ( STDMETHODCALLTYPE *GetField )(
            __RPC__in ICertConfig2 * This,
                       __RPC__in const BSTR strFieldName,
                                __RPC__deref_out_opt BSTR *pstrOut);
        HRESULT ( STDMETHODCALLTYPE *GetConfig )(
            __RPC__in ICertConfig2 * This,
                       LONG Flags,
                                __RPC__deref_out_opt BSTR *pstrOut);
        HRESULT ( STDMETHODCALLTYPE *SetSharedFolder )(
            __RPC__in ICertConfig2 * This,
                       __RPC__in const BSTR strSharedFolder);
        END_INTERFACE
    } ICertConfig2Vtbl;
    interface ICertConfig2
    {
        CONST_VTBL struct ICertConfig2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Reset(This,Index,pCount) )
    ( (This)->lpVtbl -> Next(This,pIndex) )
    ( (This)->lpVtbl -> GetField(This,strFieldName,pstrOut) )
    ( (This)->lpVtbl -> GetConfig(This,Flags,pstrOut) )
    ( (This)->lpVtbl -> SetSharedFolder(This,strSharedFolder) )
EXTERN_C const IID IID_ICertRequest;
    typedef struct ICertRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertRequest * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertRequest * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertRequest * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertRequest * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertRequest * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertRequest * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in ICertRequest * This,
                       LONG Flags,
                       __RPC__in const BSTR strRequest,
                       __RPC__in const BSTR strAttributes,
                       __RPC__in const BSTR strConfig,
                                __RPC__out LONG *pDisposition);
        HRESULT ( STDMETHODCALLTYPE *RetrievePending )(
            __RPC__in ICertRequest * This,
                       LONG RequestId,
                       __RPC__in const BSTR strConfig,
                                __RPC__out LONG *pDisposition);
        HRESULT ( STDMETHODCALLTYPE *GetLastStatus )(
            __RPC__in ICertRequest * This,
                                __RPC__out LONG *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetRequestId )(
            __RPC__in ICertRequest * This,
                                __RPC__out LONG *pRequestId);
        HRESULT ( STDMETHODCALLTYPE *GetDispositionMessage )(
            __RPC__in ICertRequest * This,
                                __RPC__deref_out_opt BSTR *pstrDispositionMessage);
        HRESULT ( STDMETHODCALLTYPE *GetCACertificate )(
            __RPC__in ICertRequest * This,
                       LONG fExchangeCertificate,
                       __RPC__in const BSTR strConfig,
                       LONG Flags,
                                __RPC__deref_out_opt BSTR *pstrCertificate);
        HRESULT ( STDMETHODCALLTYPE *GetCertificate )(
            __RPC__in ICertRequest * This,
                       LONG Flags,
                                __RPC__deref_out_opt BSTR *pstrCertificate);
        END_INTERFACE
    } ICertRequestVtbl;
    interface ICertRequest
    {
        CONST_VTBL struct ICertRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Submit(This,Flags,strRequest,strAttributes,strConfig,pDisposition) )
    ( (This)->lpVtbl -> RetrievePending(This,RequestId,strConfig,pDisposition) )
    ( (This)->lpVtbl -> GetLastStatus(This,pStatus) )
    ( (This)->lpVtbl -> GetRequestId(This,pRequestId) )
    ( (This)->lpVtbl -> GetDispositionMessage(This,pstrDispositionMessage) )
    ( (This)->lpVtbl -> GetCACertificate(This,fExchangeCertificate,strConfig,Flags,pstrCertificate) )
    ( (This)->lpVtbl -> GetCertificate(This,Flags,pstrCertificate) )
EXTERN_C const IID IID_ICertRequest2;
    typedef struct ICertRequest2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertRequest2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertRequest2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertRequest2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertRequest2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertRequest2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertRequest2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertRequest2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in ICertRequest2 * This,
                       LONG Flags,
                       __RPC__in const BSTR strRequest,
                       __RPC__in const BSTR strAttributes,
                       __RPC__in const BSTR strConfig,
                                __RPC__out LONG *pDisposition);
        HRESULT ( STDMETHODCALLTYPE *RetrievePending )(
            __RPC__in ICertRequest2 * This,
                       LONG RequestId,
                       __RPC__in const BSTR strConfig,
                                __RPC__out LONG *pDisposition);
        HRESULT ( STDMETHODCALLTYPE *GetLastStatus )(
            __RPC__in ICertRequest2 * This,
                                __RPC__out LONG *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetRequestId )(
            __RPC__in ICertRequest2 * This,
                                __RPC__out LONG *pRequestId);
        HRESULT ( STDMETHODCALLTYPE *GetDispositionMessage )(
            __RPC__in ICertRequest2 * This,
                                __RPC__deref_out_opt BSTR *pstrDispositionMessage);
        HRESULT ( STDMETHODCALLTYPE *GetCACertificate )(
            __RPC__in ICertRequest2 * This,
                       LONG fExchangeCertificate,
                       __RPC__in const BSTR strConfig,
                       LONG Flags,
                                __RPC__deref_out_opt BSTR *pstrCertificate);
        HRESULT ( STDMETHODCALLTYPE *GetCertificate )(
            __RPC__in ICertRequest2 * This,
                       LONG Flags,
                                __RPC__deref_out_opt BSTR *pstrCertificate);
        HRESULT ( STDMETHODCALLTYPE *GetIssuedCertificate )(
            __RPC__in ICertRequest2 * This,
                       __RPC__in const BSTR strConfig,
                       LONG RequestId,
                       __RPC__in const BSTR strSerialNumber,
                                __RPC__out LONG *pDisposition);
        HRESULT ( STDMETHODCALLTYPE *GetErrorMessageText )(
            __RPC__in ICertRequest2 * This,
                       LONG hrMessage,
                       LONG Flags,
                                __RPC__deref_out_opt BSTR *pstrErrorMessageText);
        HRESULT ( STDMETHODCALLTYPE *GetCAProperty )(
            __RPC__in ICertRequest2 * This,
                       __RPC__in const BSTR strConfig,
                       LONG PropId,
                       LONG PropIndex,
                       LONG PropType,
                       LONG Flags,
                                __RPC__out VARIANT *pvarPropertyValue);
        HRESULT ( STDMETHODCALLTYPE *GetCAPropertyFlags )(
            __RPC__in ICertRequest2 * This,
                       __RPC__in const BSTR strConfig,
                       LONG PropId,
                                __RPC__out LONG *pPropFlags);
        HRESULT ( STDMETHODCALLTYPE *GetCAPropertyDisplayName )(
            __RPC__in ICertRequest2 * This,
                       __RPC__in const BSTR strConfig,
                       LONG PropId,
                                __RPC__deref_out_opt BSTR *pstrDisplayName);
        HRESULT ( STDMETHODCALLTYPE *GetFullResponseProperty )(
            __RPC__in ICertRequest2 * This,
                       LONG PropId,
                       LONG PropIndex,
                       LONG PropType,
                       LONG Flags,
                                __RPC__out VARIANT *pvarPropertyValue);
        END_INTERFACE
    } ICertRequest2Vtbl;
    interface ICertRequest2
    {
        CONST_VTBL struct ICertRequest2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Submit(This,Flags,strRequest,strAttributes,strConfig,pDisposition) )
    ( (This)->lpVtbl -> RetrievePending(This,RequestId,strConfig,pDisposition) )
    ( (This)->lpVtbl -> GetLastStatus(This,pStatus) )
    ( (This)->lpVtbl -> GetRequestId(This,pRequestId) )
    ( (This)->lpVtbl -> GetDispositionMessage(This,pstrDispositionMessage) )
    ( (This)->lpVtbl -> GetCACertificate(This,fExchangeCertificate,strConfig,Flags,pstrCertificate) )
    ( (This)->lpVtbl -> GetCertificate(This,Flags,pstrCertificate) )
    ( (This)->lpVtbl -> GetIssuedCertificate(This,strConfig,RequestId,strSerialNumber,pDisposition) )
    ( (This)->lpVtbl -> GetErrorMessageText(This,hrMessage,Flags,pstrErrorMessageText) )
    ( (This)->lpVtbl -> GetCAProperty(This,strConfig,PropId,PropIndex,PropType,Flags,pvarPropertyValue) )
    ( (This)->lpVtbl -> GetCAPropertyFlags(This,strConfig,PropId,pPropFlags) )
    ( (This)->lpVtbl -> GetCAPropertyDisplayName(This,strConfig,PropId,pstrDisplayName) )
    ( (This)->lpVtbl -> GetFullResponseProperty(This,PropId,PropIndex,PropType,Flags,pvarPropertyValue) )
typedef
enum X509EnrollmentAuthFlags
    {
        X509AuthNone = 0,
        X509AuthAnonymous = 1,
        X509AuthKerberos = 2,
        X509AuthUsername = 4,
        X509AuthCertificate = 8
    } X509EnrollmentAuthFlags;
extern RPC_IF_HANDLE __MIDL_itf_certcli_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certcli_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_ICertRequest3;
    typedef struct ICertRequest3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertRequest3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertRequest3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertRequest3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertRequest3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertRequest3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertRequest3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertRequest3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *Submit )(
            __RPC__in ICertRequest3 * This,
                       LONG Flags,
                       __RPC__in const BSTR strRequest,
                       __RPC__in const BSTR strAttributes,
                       __RPC__in const BSTR strConfig,
                                __RPC__out LONG *pDisposition);
        HRESULT ( STDMETHODCALLTYPE *RetrievePending )(
            __RPC__in ICertRequest3 * This,
                       LONG RequestId,
                       __RPC__in const BSTR strConfig,
                                __RPC__out LONG *pDisposition);
        HRESULT ( STDMETHODCALLTYPE *GetLastStatus )(
            __RPC__in ICertRequest3 * This,
                                __RPC__out LONG *pStatus);
        HRESULT ( STDMETHODCALLTYPE *GetRequestId )(
            __RPC__in ICertRequest3 * This,
                                __RPC__out LONG *pRequestId);
        HRESULT ( STDMETHODCALLTYPE *GetDispositionMessage )(
            __RPC__in ICertRequest3 * This,
                                __RPC__deref_out_opt BSTR *pstrDispositionMessage);
        HRESULT ( STDMETHODCALLTYPE *GetCACertificate )(
            __RPC__in ICertRequest3 * This,
                       LONG fExchangeCertificate,
                       __RPC__in const BSTR strConfig,
                       LONG Flags,
                                __RPC__deref_out_opt BSTR *pstrCertificate);
        HRESULT ( STDMETHODCALLTYPE *GetCertificate )(
            __RPC__in ICertRequest3 * This,
                       LONG Flags,
                                __RPC__deref_out_opt BSTR *pstrCertificate);
        HRESULT ( STDMETHODCALLTYPE *GetIssuedCertificate )(
            __RPC__in ICertRequest3 * This,
                       __RPC__in const BSTR strConfig,
                       LONG RequestId,
                       __RPC__in const BSTR strSerialNumber,
                                __RPC__out LONG *pDisposition);
        HRESULT ( STDMETHODCALLTYPE *GetErrorMessageText )(
            __RPC__in ICertRequest3 * This,
                       LONG hrMessage,
                       LONG Flags,
                                __RPC__deref_out_opt BSTR *pstrErrorMessageText);
        HRESULT ( STDMETHODCALLTYPE *GetCAProperty )(
            __RPC__in ICertRequest3 * This,
                       __RPC__in const BSTR strConfig,
                       LONG PropId,
                       LONG PropIndex,
                       LONG PropType,
                       LONG Flags,
                                __RPC__out VARIANT *pvarPropertyValue);
        HRESULT ( STDMETHODCALLTYPE *GetCAPropertyFlags )(
            __RPC__in ICertRequest3 * This,
                       __RPC__in const BSTR strConfig,
                       LONG PropId,
                                __RPC__out LONG *pPropFlags);
        HRESULT ( STDMETHODCALLTYPE *GetCAPropertyDisplayName )(
            __RPC__in ICertRequest3 * This,
                       __RPC__in const BSTR strConfig,
                       LONG PropId,
                                __RPC__deref_out_opt BSTR *pstrDisplayName);
        HRESULT ( STDMETHODCALLTYPE *GetFullResponseProperty )(
            __RPC__in ICertRequest3 * This,
                       LONG PropId,
                       LONG PropIndex,
                       LONG PropType,
                       LONG Flags,
                                __RPC__out VARIANT *pvarPropertyValue);
        HRESULT ( STDMETHODCALLTYPE *SetCredential )(
            __RPC__in ICertRequest3 * This,
                       LONG hWnd,
                       X509EnrollmentAuthFlags AuthType,
                       __RPC__in BSTR strCredential,
                       __RPC__in BSTR strPassword);
        HRESULT ( STDMETHODCALLTYPE *GetRequestIdString )(
            __RPC__in ICertRequest3 * This,
                                __RPC__deref_out_opt BSTR *pstrRequestId);
        HRESULT ( STDMETHODCALLTYPE *GetIssuedCertificate2 )(
            __RPC__in ICertRequest3 * This,
                       __RPC__in BSTR strConfig,
                       __RPC__in BSTR strRequestId,
                       __RPC__in BSTR strSerialNumber,
                                __RPC__out LONG *pDisposition);
        HRESULT ( STDMETHODCALLTYPE *GetRefreshPolicy )(
            __RPC__in ICertRequest3 * This,
                                __RPC__out VARIANT_BOOL *pValue);
        END_INTERFACE
    } ICertRequest3Vtbl;
    interface ICertRequest3
    {
        CONST_VTBL struct ICertRequest3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Submit(This,Flags,strRequest,strAttributes,strConfig,pDisposition) )
    ( (This)->lpVtbl -> RetrievePending(This,RequestId,strConfig,pDisposition) )
    ( (This)->lpVtbl -> GetLastStatus(This,pStatus) )
    ( (This)->lpVtbl -> GetRequestId(This,pRequestId) )
    ( (This)->lpVtbl -> GetDispositionMessage(This,pstrDispositionMessage) )
    ( (This)->lpVtbl -> GetCACertificate(This,fExchangeCertificate,strConfig,Flags,pstrCertificate) )
    ( (This)->lpVtbl -> GetCertificate(This,Flags,pstrCertificate) )
    ( (This)->lpVtbl -> GetIssuedCertificate(This,strConfig,RequestId,strSerialNumber,pDisposition) )
    ( (This)->lpVtbl -> GetErrorMessageText(This,hrMessage,Flags,pstrErrorMessageText) )
    ( (This)->lpVtbl -> GetCAProperty(This,strConfig,PropId,PropIndex,PropType,Flags,pvarPropertyValue) )
    ( (This)->lpVtbl -> GetCAPropertyFlags(This,strConfig,PropId,pPropFlags) )
    ( (This)->lpVtbl -> GetCAPropertyDisplayName(This,strConfig,PropId,pstrDisplayName) )
    ( (This)->lpVtbl -> GetFullResponseProperty(This,PropId,PropIndex,PropType,Flags,pvarPropertyValue) )
    ( (This)->lpVtbl -> SetCredential(This,hWnd,AuthType,strCredential,strPassword) )
    ( (This)->lpVtbl -> GetRequestIdString(This,pstrRequestId) )
    ( (This)->lpVtbl -> GetIssuedCertificate2(This,strConfig,strRequestId,strSerialNumber,pDisposition) )
    ( (This)->lpVtbl -> GetRefreshPolicy(This,pValue) )
EXTERN_C const IID LIBID_CERTCLILib;
EXTERN_C const CLSID CLSID_CCertGetConfig;
class DECLSPEC_UUID("c6cc49b0-ce17-11d0-8833-00a0c903b83c")
CCertGetConfig;
EXTERN_C const CLSID CLSID_CCertConfig;
class DECLSPEC_UUID("372fce38-4324-11d0-8810-00a0c903b83c")
CCertConfig;
EXTERN_C const CLSID CLSID_CCertRequest;
class DECLSPEC_UUID("98aff3f0-5524-11d0-8812-00a0c903b83c")
CCertRequest;
EXTERN_C const CLSID CLSID_CCertServerPolicy;
class DECLSPEC_UUID("aa000926-ffbe-11cf-8800-00a0c903b83c")
CCertServerPolicy;
EXTERN_C const CLSID CLSID_CCertServerExit;
class DECLSPEC_UUID("4c4a5e40-732c-11d0-8816-00a0c903b83c")
CCertServerExit;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_certcli_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certcli_0000_0007_v0_0_s_ifspec;
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
