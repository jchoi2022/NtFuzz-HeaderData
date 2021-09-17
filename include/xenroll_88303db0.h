#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICEnroll ICEnroll;
typedef interface ICEnroll2 ICEnroll2;
typedef interface ICEnroll3 ICEnroll3;
typedef interface ICEnroll4 ICEnroll4;
typedef interface IEnroll IEnroll;
typedef interface IEnroll2 IEnroll2;
typedef interface IEnroll4 IEnroll4;
typedef class CEnroll2 CEnroll2;
typedef class CEnroll CEnroll;
#include "oaidl.h"
#include "ocidl.h"
#include "wincrypt.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_xenroll_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xenroll_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICEnroll;
    typedef struct ICEnrollVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICEnroll * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICEnroll * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICEnroll * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICEnroll * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICEnroll * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICEnroll * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICEnroll * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *createFilePKCS10 )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR DNName,
                       __RPC__in BSTR Usage,
                       __RPC__in BSTR wszPKCS10FileName);
        HRESULT ( STDMETHODCALLTYPE *acceptFilePKCS7 )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR wszPKCS7FileName);
        HRESULT ( STDMETHODCALLTYPE *createPKCS10 )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR DNName,
                       __RPC__in BSTR Usage,
                                __RPC__deref_out_opt BSTR *pPKCS10);
        HRESULT ( STDMETHODCALLTYPE *acceptPKCS7 )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR PKCS7);
        HRESULT ( STDMETHODCALLTYPE *getCertFromPKCS7 )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR wszPKCS7,
                                __RPC__deref_out_opt BSTR *pbstrCert);
        HRESULT ( STDMETHODCALLTYPE *enumProviders )(
            __RPC__in ICEnroll * This,
                       LONG dwIndex,
                       LONG dwFlags,
                                __RPC__deref_out_opt BSTR *pbstrProvName);
        HRESULT ( STDMETHODCALLTYPE *enumContainers )(
            __RPC__in ICEnroll * This,
                       LONG dwIndex,
                                __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *freeRequestInfo )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR PKCS7OrPKCS10);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreName )(
            __RPC__in ICEnroll * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreName )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreType )(
            __RPC__in ICEnroll * This,
                                __RPC__deref_out_opt BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreType )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR bstrType);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreFlags )(
            __RPC__in ICEnroll * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreFlags )(
            __RPC__in ICEnroll * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreName )(
            __RPC__in ICEnroll * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreName )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreType )(
            __RPC__in ICEnroll * This,
                                __RPC__deref_out_opt BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreType )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR bstrType);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreFlags )(
            __RPC__in ICEnroll * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreFlags )(
            __RPC__in ICEnroll * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreName )(
            __RPC__in ICEnroll * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreName )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreType )(
            __RPC__in ICEnroll * This,
                                __RPC__deref_out_opt BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreType )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR bstrType);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreFlags )(
            __RPC__in ICEnroll * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreFlags )(
            __RPC__in ICEnroll * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreName )(
            __RPC__in ICEnroll * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreName )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreType )(
            __RPC__in ICEnroll * This,
                                __RPC__deref_out_opt BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreType )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR bstrType);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreFlags )(
            __RPC__in ICEnroll * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreFlags )(
            __RPC__in ICEnroll * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_ContainerName )(
            __RPC__in ICEnroll * This,
                                __RPC__deref_out_opt BSTR *pbstrContainer);
                        HRESULT ( STDMETHODCALLTYPE *put_ContainerName )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR bstrContainer);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderName )(
            __RPC__in ICEnroll * This,
                                __RPC__deref_out_opt BSTR *pbstrProvider);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderName )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR bstrProvider);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderType )(
            __RPC__in ICEnroll * This,
                                __RPC__out LONG *pdwType);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderType )(
            __RPC__in ICEnroll * This,
                       LONG dwType);
                        HRESULT ( STDMETHODCALLTYPE *get_KeySpec )(
            __RPC__in ICEnroll * This,
                                __RPC__out LONG *pdw);
                        HRESULT ( STDMETHODCALLTYPE *put_KeySpec )(
            __RPC__in ICEnroll * This,
                       LONG dw);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderFlags )(
            __RPC__in ICEnroll * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderFlags )(
            __RPC__in ICEnroll * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_UseExistingKeySet )(
            __RPC__in ICEnroll * This,
                                __RPC__out BOOL *fUseExistingKeys);
                        HRESULT ( STDMETHODCALLTYPE *put_UseExistingKeySet )(
            __RPC__in ICEnroll * This,
                       BOOL fUseExistingKeys);
                        HRESULT ( STDMETHODCALLTYPE *get_GenKeyFlags )(
            __RPC__in ICEnroll * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_GenKeyFlags )(
            __RPC__in ICEnroll * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_DeleteRequestCert )(
            __RPC__in ICEnroll * This,
                                __RPC__out BOOL *fDelete);
                        HRESULT ( STDMETHODCALLTYPE *put_DeleteRequestCert )(
            __RPC__in ICEnroll * This,
                       BOOL fDelete);
                        HRESULT ( STDMETHODCALLTYPE *get_WriteCertToCSP )(
            __RPC__in ICEnroll * This,
                                __RPC__out BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_WriteCertToCSP )(
            __RPC__in ICEnroll * This,
                       BOOL fBool);
                        HRESULT ( STDMETHODCALLTYPE *get_SPCFileName )(
            __RPC__in ICEnroll * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                        HRESULT ( STDMETHODCALLTYPE *put_SPCFileName )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR bstr);
                        HRESULT ( STDMETHODCALLTYPE *get_PVKFileName )(
            __RPC__in ICEnroll * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                        HRESULT ( STDMETHODCALLTYPE *put_PVKFileName )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR bstr);
                        HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in ICEnroll * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                        HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in ICEnroll * This,
                       __RPC__in BSTR bstr);
        END_INTERFACE
    } ICEnrollVtbl;
    interface ICEnroll
    {
        CONST_VTBL struct ICEnrollVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> createFilePKCS10(This,DNName,Usage,wszPKCS10FileName) )
    ( (This)->lpVtbl -> acceptFilePKCS7(This,wszPKCS7FileName) )
    ( (This)->lpVtbl -> createPKCS10(This,DNName,Usage,pPKCS10) )
    ( (This)->lpVtbl -> acceptPKCS7(This,PKCS7) )
    ( (This)->lpVtbl -> getCertFromPKCS7(This,wszPKCS7,pbstrCert) )
    ( (This)->lpVtbl -> enumProviders(This,dwIndex,dwFlags,pbstrProvName) )
    ( (This)->lpVtbl -> enumContainers(This,dwIndex,pbstr) )
    ( (This)->lpVtbl -> freeRequestInfo(This,PKCS7OrPKCS10) )
    ( (This)->lpVtbl -> get_MyStoreName(This,pbstrName) )
    ( (This)->lpVtbl -> put_MyStoreName(This,bstrName) )
    ( (This)->lpVtbl -> get_MyStoreType(This,pbstrType) )
    ( (This)->lpVtbl -> put_MyStoreType(This,bstrType) )
    ( (This)->lpVtbl -> get_MyStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_MyStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_CAStoreName(This,pbstrName) )
    ( (This)->lpVtbl -> put_CAStoreName(This,bstrName) )
    ( (This)->lpVtbl -> get_CAStoreType(This,pbstrType) )
    ( (This)->lpVtbl -> put_CAStoreType(This,bstrType) )
    ( (This)->lpVtbl -> get_CAStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_CAStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_RootStoreName(This,pbstrName) )
    ( (This)->lpVtbl -> put_RootStoreName(This,bstrName) )
    ( (This)->lpVtbl -> get_RootStoreType(This,pbstrType) )
    ( (This)->lpVtbl -> put_RootStoreType(This,bstrType) )
    ( (This)->lpVtbl -> get_RootStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_RootStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_RequestStoreName(This,pbstrName) )
    ( (This)->lpVtbl -> put_RequestStoreName(This,bstrName) )
    ( (This)->lpVtbl -> get_RequestStoreType(This,pbstrType) )
    ( (This)->lpVtbl -> put_RequestStoreType(This,bstrType) )
    ( (This)->lpVtbl -> get_RequestStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_RequestStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_ContainerName(This,pbstrContainer) )
    ( (This)->lpVtbl -> put_ContainerName(This,bstrContainer) )
    ( (This)->lpVtbl -> get_ProviderName(This,pbstrProvider) )
    ( (This)->lpVtbl -> put_ProviderName(This,bstrProvider) )
    ( (This)->lpVtbl -> get_ProviderType(This,pdwType) )
    ( (This)->lpVtbl -> put_ProviderType(This,dwType) )
    ( (This)->lpVtbl -> get_KeySpec(This,pdw) )
    ( (This)->lpVtbl -> put_KeySpec(This,dw) )
    ( (This)->lpVtbl -> get_ProviderFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_ProviderFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_UseExistingKeySet(This,fUseExistingKeys) )
    ( (This)->lpVtbl -> put_UseExistingKeySet(This,fUseExistingKeys) )
    ( (This)->lpVtbl -> get_GenKeyFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_GenKeyFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_DeleteRequestCert(This,fDelete) )
    ( (This)->lpVtbl -> put_DeleteRequestCert(This,fDelete) )
    ( (This)->lpVtbl -> get_WriteCertToCSP(This,fBool) )
    ( (This)->lpVtbl -> put_WriteCertToCSP(This,fBool) )
    ( (This)->lpVtbl -> get_SPCFileName(This,pbstr) )
    ( (This)->lpVtbl -> put_SPCFileName(This,bstr) )
    ( (This)->lpVtbl -> get_PVKFileName(This,pbstr) )
    ( (This)->lpVtbl -> put_PVKFileName(This,bstr) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,pbstr) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,bstr) )
EXTERN_C const IID IID_ICEnroll2;
    typedef struct ICEnroll2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICEnroll2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICEnroll2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICEnroll2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICEnroll2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICEnroll2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *createFilePKCS10 )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR DNName,
                       __RPC__in BSTR Usage,
                       __RPC__in BSTR wszPKCS10FileName);
        HRESULT ( STDMETHODCALLTYPE *acceptFilePKCS7 )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR wszPKCS7FileName);
        HRESULT ( STDMETHODCALLTYPE *createPKCS10 )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR DNName,
                       __RPC__in BSTR Usage,
                                __RPC__deref_out_opt BSTR *pPKCS10);
        HRESULT ( STDMETHODCALLTYPE *acceptPKCS7 )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR PKCS7);
        HRESULT ( STDMETHODCALLTYPE *getCertFromPKCS7 )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR wszPKCS7,
                                __RPC__deref_out_opt BSTR *pbstrCert);
        HRESULT ( STDMETHODCALLTYPE *enumProviders )(
            __RPC__in ICEnroll2 * This,
                       LONG dwIndex,
                       LONG dwFlags,
                                __RPC__deref_out_opt BSTR *pbstrProvName);
        HRESULT ( STDMETHODCALLTYPE *enumContainers )(
            __RPC__in ICEnroll2 * This,
                       LONG dwIndex,
                                __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *freeRequestInfo )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR PKCS7OrPKCS10);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreName )(
            __RPC__in ICEnroll2 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreName )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreType )(
            __RPC__in ICEnroll2 * This,
                                __RPC__deref_out_opt BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreType )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR bstrType);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreFlags )(
            __RPC__in ICEnroll2 * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreFlags )(
            __RPC__in ICEnroll2 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreName )(
            __RPC__in ICEnroll2 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreName )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreType )(
            __RPC__in ICEnroll2 * This,
                                __RPC__deref_out_opt BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreType )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR bstrType);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreFlags )(
            __RPC__in ICEnroll2 * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreFlags )(
            __RPC__in ICEnroll2 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreName )(
            __RPC__in ICEnroll2 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreName )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreType )(
            __RPC__in ICEnroll2 * This,
                                __RPC__deref_out_opt BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreType )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR bstrType);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreFlags )(
            __RPC__in ICEnroll2 * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreFlags )(
            __RPC__in ICEnroll2 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreName )(
            __RPC__in ICEnroll2 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreName )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreType )(
            __RPC__in ICEnroll2 * This,
                                __RPC__deref_out_opt BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreType )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR bstrType);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreFlags )(
            __RPC__in ICEnroll2 * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreFlags )(
            __RPC__in ICEnroll2 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_ContainerName )(
            __RPC__in ICEnroll2 * This,
                                __RPC__deref_out_opt BSTR *pbstrContainer);
                        HRESULT ( STDMETHODCALLTYPE *put_ContainerName )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR bstrContainer);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderName )(
            __RPC__in ICEnroll2 * This,
                                __RPC__deref_out_opt BSTR *pbstrProvider);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderName )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR bstrProvider);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderType )(
            __RPC__in ICEnroll2 * This,
                                __RPC__out LONG *pdwType);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderType )(
            __RPC__in ICEnroll2 * This,
                       LONG dwType);
                        HRESULT ( STDMETHODCALLTYPE *get_KeySpec )(
            __RPC__in ICEnroll2 * This,
                                __RPC__out LONG *pdw);
                        HRESULT ( STDMETHODCALLTYPE *put_KeySpec )(
            __RPC__in ICEnroll2 * This,
                       LONG dw);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderFlags )(
            __RPC__in ICEnroll2 * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderFlags )(
            __RPC__in ICEnroll2 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_UseExistingKeySet )(
            __RPC__in ICEnroll2 * This,
                                __RPC__out BOOL *fUseExistingKeys);
                        HRESULT ( STDMETHODCALLTYPE *put_UseExistingKeySet )(
            __RPC__in ICEnroll2 * This,
                       BOOL fUseExistingKeys);
                        HRESULT ( STDMETHODCALLTYPE *get_GenKeyFlags )(
            __RPC__in ICEnroll2 * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_GenKeyFlags )(
            __RPC__in ICEnroll2 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_DeleteRequestCert )(
            __RPC__in ICEnroll2 * This,
                                __RPC__out BOOL *fDelete);
                        HRESULT ( STDMETHODCALLTYPE *put_DeleteRequestCert )(
            __RPC__in ICEnroll2 * This,
                       BOOL fDelete);
                        HRESULT ( STDMETHODCALLTYPE *get_WriteCertToCSP )(
            __RPC__in ICEnroll2 * This,
                                __RPC__out BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_WriteCertToCSP )(
            __RPC__in ICEnroll2 * This,
                       BOOL fBool);
                        HRESULT ( STDMETHODCALLTYPE *get_SPCFileName )(
            __RPC__in ICEnroll2 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                        HRESULT ( STDMETHODCALLTYPE *put_SPCFileName )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR bstr);
                        HRESULT ( STDMETHODCALLTYPE *get_PVKFileName )(
            __RPC__in ICEnroll2 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                        HRESULT ( STDMETHODCALLTYPE *put_PVKFileName )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR bstr);
                        HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in ICEnroll2 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                        HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR bstr);
        HRESULT ( STDMETHODCALLTYPE *addCertTypeToRequest )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR CertType);
        HRESULT ( STDMETHODCALLTYPE *addNameValuePairToSignature )(
            __RPC__in ICEnroll2 * This,
                       __RPC__in BSTR Name,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_WriteCertToUserDS )(
            __RPC__in ICEnroll2 * This,
                                __RPC__out BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_WriteCertToUserDS )(
            __RPC__in ICEnroll2 * This,
                       BOOL fBool);
                        HRESULT ( STDMETHODCALLTYPE *get_EnableT61DNEncoding )(
            __RPC__in ICEnroll2 * This,
                                __RPC__out BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_EnableT61DNEncoding )(
            __RPC__in ICEnroll2 * This,
                       BOOL fBool);
        END_INTERFACE
    } ICEnroll2Vtbl;
    interface ICEnroll2
    {
        CONST_VTBL struct ICEnroll2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> createFilePKCS10(This,DNName,Usage,wszPKCS10FileName) )
    ( (This)->lpVtbl -> acceptFilePKCS7(This,wszPKCS7FileName) )
    ( (This)->lpVtbl -> createPKCS10(This,DNName,Usage,pPKCS10) )
    ( (This)->lpVtbl -> acceptPKCS7(This,PKCS7) )
    ( (This)->lpVtbl -> getCertFromPKCS7(This,wszPKCS7,pbstrCert) )
    ( (This)->lpVtbl -> enumProviders(This,dwIndex,dwFlags,pbstrProvName) )
    ( (This)->lpVtbl -> enumContainers(This,dwIndex,pbstr) )
    ( (This)->lpVtbl -> freeRequestInfo(This,PKCS7OrPKCS10) )
    ( (This)->lpVtbl -> get_MyStoreName(This,pbstrName) )
    ( (This)->lpVtbl -> put_MyStoreName(This,bstrName) )
    ( (This)->lpVtbl -> get_MyStoreType(This,pbstrType) )
    ( (This)->lpVtbl -> put_MyStoreType(This,bstrType) )
    ( (This)->lpVtbl -> get_MyStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_MyStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_CAStoreName(This,pbstrName) )
    ( (This)->lpVtbl -> put_CAStoreName(This,bstrName) )
    ( (This)->lpVtbl -> get_CAStoreType(This,pbstrType) )
    ( (This)->lpVtbl -> put_CAStoreType(This,bstrType) )
    ( (This)->lpVtbl -> get_CAStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_CAStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_RootStoreName(This,pbstrName) )
    ( (This)->lpVtbl -> put_RootStoreName(This,bstrName) )
    ( (This)->lpVtbl -> get_RootStoreType(This,pbstrType) )
    ( (This)->lpVtbl -> put_RootStoreType(This,bstrType) )
    ( (This)->lpVtbl -> get_RootStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_RootStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_RequestStoreName(This,pbstrName) )
    ( (This)->lpVtbl -> put_RequestStoreName(This,bstrName) )
    ( (This)->lpVtbl -> get_RequestStoreType(This,pbstrType) )
    ( (This)->lpVtbl -> put_RequestStoreType(This,bstrType) )
    ( (This)->lpVtbl -> get_RequestStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_RequestStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_ContainerName(This,pbstrContainer) )
    ( (This)->lpVtbl -> put_ContainerName(This,bstrContainer) )
    ( (This)->lpVtbl -> get_ProviderName(This,pbstrProvider) )
    ( (This)->lpVtbl -> put_ProviderName(This,bstrProvider) )
    ( (This)->lpVtbl -> get_ProviderType(This,pdwType) )
    ( (This)->lpVtbl -> put_ProviderType(This,dwType) )
    ( (This)->lpVtbl -> get_KeySpec(This,pdw) )
    ( (This)->lpVtbl -> put_KeySpec(This,dw) )
    ( (This)->lpVtbl -> get_ProviderFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_ProviderFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_UseExistingKeySet(This,fUseExistingKeys) )
    ( (This)->lpVtbl -> put_UseExistingKeySet(This,fUseExistingKeys) )
    ( (This)->lpVtbl -> get_GenKeyFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_GenKeyFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_DeleteRequestCert(This,fDelete) )
    ( (This)->lpVtbl -> put_DeleteRequestCert(This,fDelete) )
    ( (This)->lpVtbl -> get_WriteCertToCSP(This,fBool) )
    ( (This)->lpVtbl -> put_WriteCertToCSP(This,fBool) )
    ( (This)->lpVtbl -> get_SPCFileName(This,pbstr) )
    ( (This)->lpVtbl -> put_SPCFileName(This,bstr) )
    ( (This)->lpVtbl -> get_PVKFileName(This,pbstr) )
    ( (This)->lpVtbl -> put_PVKFileName(This,bstr) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,pbstr) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,bstr) )
    ( (This)->lpVtbl -> addCertTypeToRequest(This,CertType) )
    ( (This)->lpVtbl -> addNameValuePairToSignature(This,Name,Value) )
    ( (This)->lpVtbl -> get_WriteCertToUserDS(This,fBool) )
    ( (This)->lpVtbl -> put_WriteCertToUserDS(This,fBool) )
    ( (This)->lpVtbl -> get_EnableT61DNEncoding(This,fBool) )
    ( (This)->lpVtbl -> put_EnableT61DNEncoding(This,fBool) )
EXTERN_C const IID IID_ICEnroll3;
    typedef struct ICEnroll3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICEnroll3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICEnroll3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICEnroll3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICEnroll3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICEnroll3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *createFilePKCS10 )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR DNName,
                       __RPC__in BSTR Usage,
                       __RPC__in BSTR wszPKCS10FileName);
        HRESULT ( STDMETHODCALLTYPE *acceptFilePKCS7 )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR wszPKCS7FileName);
        HRESULT ( STDMETHODCALLTYPE *createPKCS10 )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR DNName,
                       __RPC__in BSTR Usage,
                                __RPC__deref_out_opt BSTR *pPKCS10);
        HRESULT ( STDMETHODCALLTYPE *acceptPKCS7 )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR PKCS7);
        HRESULT ( STDMETHODCALLTYPE *getCertFromPKCS7 )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR wszPKCS7,
                                __RPC__deref_out_opt BSTR *pbstrCert);
        HRESULT ( STDMETHODCALLTYPE *enumProviders )(
            __RPC__in ICEnroll3 * This,
                       LONG dwIndex,
                       LONG dwFlags,
                                __RPC__deref_out_opt BSTR *pbstrProvName);
        HRESULT ( STDMETHODCALLTYPE *enumContainers )(
            __RPC__in ICEnroll3 * This,
                       LONG dwIndex,
                                __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *freeRequestInfo )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR PKCS7OrPKCS10);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreName )(
            __RPC__in ICEnroll3 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreName )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreType )(
            __RPC__in ICEnroll3 * This,
                                __RPC__deref_out_opt BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreType )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR bstrType);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreFlags )(
            __RPC__in ICEnroll3 * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreFlags )(
            __RPC__in ICEnroll3 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreName )(
            __RPC__in ICEnroll3 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreName )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreType )(
            __RPC__in ICEnroll3 * This,
                                __RPC__deref_out_opt BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreType )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR bstrType);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreFlags )(
            __RPC__in ICEnroll3 * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreFlags )(
            __RPC__in ICEnroll3 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreName )(
            __RPC__in ICEnroll3 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreName )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreType )(
            __RPC__in ICEnroll3 * This,
                                __RPC__deref_out_opt BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreType )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR bstrType);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreFlags )(
            __RPC__in ICEnroll3 * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreFlags )(
            __RPC__in ICEnroll3 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreName )(
            __RPC__in ICEnroll3 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreName )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreType )(
            __RPC__in ICEnroll3 * This,
                                __RPC__deref_out_opt BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreType )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR bstrType);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreFlags )(
            __RPC__in ICEnroll3 * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreFlags )(
            __RPC__in ICEnroll3 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_ContainerName )(
            __RPC__in ICEnroll3 * This,
                                __RPC__deref_out_opt BSTR *pbstrContainer);
                        HRESULT ( STDMETHODCALLTYPE *put_ContainerName )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR bstrContainer);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderName )(
            __RPC__in ICEnroll3 * This,
                                __RPC__deref_out_opt BSTR *pbstrProvider);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderName )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR bstrProvider);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderType )(
            __RPC__in ICEnroll3 * This,
                                __RPC__out LONG *pdwType);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderType )(
            __RPC__in ICEnroll3 * This,
                       LONG dwType);
                        HRESULT ( STDMETHODCALLTYPE *get_KeySpec )(
            __RPC__in ICEnroll3 * This,
                                __RPC__out LONG *pdw);
                        HRESULT ( STDMETHODCALLTYPE *put_KeySpec )(
            __RPC__in ICEnroll3 * This,
                       LONG dw);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderFlags )(
            __RPC__in ICEnroll3 * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderFlags )(
            __RPC__in ICEnroll3 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_UseExistingKeySet )(
            __RPC__in ICEnroll3 * This,
                                __RPC__out BOOL *fUseExistingKeys);
                        HRESULT ( STDMETHODCALLTYPE *put_UseExistingKeySet )(
            __RPC__in ICEnroll3 * This,
                       BOOL fUseExistingKeys);
                        HRESULT ( STDMETHODCALLTYPE *get_GenKeyFlags )(
            __RPC__in ICEnroll3 * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_GenKeyFlags )(
            __RPC__in ICEnroll3 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_DeleteRequestCert )(
            __RPC__in ICEnroll3 * This,
                                __RPC__out BOOL *fDelete);
                        HRESULT ( STDMETHODCALLTYPE *put_DeleteRequestCert )(
            __RPC__in ICEnroll3 * This,
                       BOOL fDelete);
                        HRESULT ( STDMETHODCALLTYPE *get_WriteCertToCSP )(
            __RPC__in ICEnroll3 * This,
                                __RPC__out BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_WriteCertToCSP )(
            __RPC__in ICEnroll3 * This,
                       BOOL fBool);
                        HRESULT ( STDMETHODCALLTYPE *get_SPCFileName )(
            __RPC__in ICEnroll3 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                        HRESULT ( STDMETHODCALLTYPE *put_SPCFileName )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR bstr);
                        HRESULT ( STDMETHODCALLTYPE *get_PVKFileName )(
            __RPC__in ICEnroll3 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                        HRESULT ( STDMETHODCALLTYPE *put_PVKFileName )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR bstr);
                        HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in ICEnroll3 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                        HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR bstr);
        HRESULT ( STDMETHODCALLTYPE *addCertTypeToRequest )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR CertType);
        HRESULT ( STDMETHODCALLTYPE *addNameValuePairToSignature )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR Name,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_WriteCertToUserDS )(
            __RPC__in ICEnroll3 * This,
                                __RPC__out BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_WriteCertToUserDS )(
            __RPC__in ICEnroll3 * This,
                       BOOL fBool);
                        HRESULT ( STDMETHODCALLTYPE *get_EnableT61DNEncoding )(
            __RPC__in ICEnroll3 * This,
                                __RPC__out BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_EnableT61DNEncoding )(
            __RPC__in ICEnroll3 * This,
                       BOOL fBool);
        HRESULT ( STDMETHODCALLTYPE *InstallPKCS7 )(
            __RPC__in ICEnroll3 * This,
                       __RPC__in BSTR PKCS7);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ICEnroll3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedKeySpec )(
            __RPC__in ICEnroll3 * This,
                                __RPC__out LONG *pdwKeySpec);
        HRESULT ( STDMETHODCALLTYPE *GetKeyLen )(
            __RPC__in ICEnroll3 * This,
                       BOOL fMin,
                       BOOL fExchange,
                                __RPC__out LONG *pdwKeySize);
        HRESULT ( STDMETHODCALLTYPE *EnumAlgs )(
            __RPC__in ICEnroll3 * This,
                       LONG dwIndex,
                       LONG algClass,
                                __RPC__out LONG *pdwAlgID);
        HRESULT ( STDMETHODCALLTYPE *GetAlgName )(
            __RPC__in ICEnroll3 * This,
                       LONG algID,
                                __RPC__deref_out_opt BSTR *pbstr);
                        HRESULT ( STDMETHODCALLTYPE *put_ReuseHardwareKeyIfUnableToGenNew )(
            __RPC__in ICEnroll3 * This,
                       BOOL fReuseHardwareKeyIfUnableToGenNew);
                        HRESULT ( STDMETHODCALLTYPE *get_ReuseHardwareKeyIfUnableToGenNew )(
            __RPC__in ICEnroll3 * This,
                                __RPC__out BOOL *fReuseHardwareKeyIfUnableToGenNew);
                        HRESULT ( STDMETHODCALLTYPE *put_HashAlgID )(
            __RPC__in ICEnroll3 * This,
                       LONG hashAlgID);
                        HRESULT ( STDMETHODCALLTYPE *get_HashAlgID )(
            __RPC__in ICEnroll3 * This,
                                __RPC__out LONG *hashAlgID);
                        HRESULT ( STDMETHODCALLTYPE *put_LimitExchangeKeyToEncipherment )(
            __RPC__in ICEnroll3 * This,
                       BOOL fLimitExchangeKeyToEncipherment);
                        HRESULT ( STDMETHODCALLTYPE *get_LimitExchangeKeyToEncipherment )(
            __RPC__in ICEnroll3 * This,
                                __RPC__out BOOL *fLimitExchangeKeyToEncipherment);
                        HRESULT ( STDMETHODCALLTYPE *put_EnableSMIMECapabilities )(
            __RPC__in ICEnroll3 * This,
                       BOOL fEnableSMIMECapabilities);
                        HRESULT ( STDMETHODCALLTYPE *get_EnableSMIMECapabilities )(
            __RPC__in ICEnroll3 * This,
                                __RPC__out BOOL *fEnableSMIMECapabilities);
        END_INTERFACE
    } ICEnroll3Vtbl;
    interface ICEnroll3
    {
        CONST_VTBL struct ICEnroll3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> createFilePKCS10(This,DNName,Usage,wszPKCS10FileName) )
    ( (This)->lpVtbl -> acceptFilePKCS7(This,wszPKCS7FileName) )
    ( (This)->lpVtbl -> createPKCS10(This,DNName,Usage,pPKCS10) )
    ( (This)->lpVtbl -> acceptPKCS7(This,PKCS7) )
    ( (This)->lpVtbl -> getCertFromPKCS7(This,wszPKCS7,pbstrCert) )
    ( (This)->lpVtbl -> enumProviders(This,dwIndex,dwFlags,pbstrProvName) )
    ( (This)->lpVtbl -> enumContainers(This,dwIndex,pbstr) )
    ( (This)->lpVtbl -> freeRequestInfo(This,PKCS7OrPKCS10) )
    ( (This)->lpVtbl -> get_MyStoreName(This,pbstrName) )
    ( (This)->lpVtbl -> put_MyStoreName(This,bstrName) )
    ( (This)->lpVtbl -> get_MyStoreType(This,pbstrType) )
    ( (This)->lpVtbl -> put_MyStoreType(This,bstrType) )
    ( (This)->lpVtbl -> get_MyStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_MyStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_CAStoreName(This,pbstrName) )
    ( (This)->lpVtbl -> put_CAStoreName(This,bstrName) )
    ( (This)->lpVtbl -> get_CAStoreType(This,pbstrType) )
    ( (This)->lpVtbl -> put_CAStoreType(This,bstrType) )
    ( (This)->lpVtbl -> get_CAStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_CAStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_RootStoreName(This,pbstrName) )
    ( (This)->lpVtbl -> put_RootStoreName(This,bstrName) )
    ( (This)->lpVtbl -> get_RootStoreType(This,pbstrType) )
    ( (This)->lpVtbl -> put_RootStoreType(This,bstrType) )
    ( (This)->lpVtbl -> get_RootStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_RootStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_RequestStoreName(This,pbstrName) )
    ( (This)->lpVtbl -> put_RequestStoreName(This,bstrName) )
    ( (This)->lpVtbl -> get_RequestStoreType(This,pbstrType) )
    ( (This)->lpVtbl -> put_RequestStoreType(This,bstrType) )
    ( (This)->lpVtbl -> get_RequestStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_RequestStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_ContainerName(This,pbstrContainer) )
    ( (This)->lpVtbl -> put_ContainerName(This,bstrContainer) )
    ( (This)->lpVtbl -> get_ProviderName(This,pbstrProvider) )
    ( (This)->lpVtbl -> put_ProviderName(This,bstrProvider) )
    ( (This)->lpVtbl -> get_ProviderType(This,pdwType) )
    ( (This)->lpVtbl -> put_ProviderType(This,dwType) )
    ( (This)->lpVtbl -> get_KeySpec(This,pdw) )
    ( (This)->lpVtbl -> put_KeySpec(This,dw) )
    ( (This)->lpVtbl -> get_ProviderFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_ProviderFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_UseExistingKeySet(This,fUseExistingKeys) )
    ( (This)->lpVtbl -> put_UseExistingKeySet(This,fUseExistingKeys) )
    ( (This)->lpVtbl -> get_GenKeyFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_GenKeyFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_DeleteRequestCert(This,fDelete) )
    ( (This)->lpVtbl -> put_DeleteRequestCert(This,fDelete) )
    ( (This)->lpVtbl -> get_WriteCertToCSP(This,fBool) )
    ( (This)->lpVtbl -> put_WriteCertToCSP(This,fBool) )
    ( (This)->lpVtbl -> get_SPCFileName(This,pbstr) )
    ( (This)->lpVtbl -> put_SPCFileName(This,bstr) )
    ( (This)->lpVtbl -> get_PVKFileName(This,pbstr) )
    ( (This)->lpVtbl -> put_PVKFileName(This,bstr) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,pbstr) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,bstr) )
    ( (This)->lpVtbl -> addCertTypeToRequest(This,CertType) )
    ( (This)->lpVtbl -> addNameValuePairToSignature(This,Name,Value) )
    ( (This)->lpVtbl -> get_WriteCertToUserDS(This,fBool) )
    ( (This)->lpVtbl -> put_WriteCertToUserDS(This,fBool) )
    ( (This)->lpVtbl -> get_EnableT61DNEncoding(This,fBool) )
    ( (This)->lpVtbl -> put_EnableT61DNEncoding(This,fBool) )
    ( (This)->lpVtbl -> InstallPKCS7(This,PKCS7) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> GetSupportedKeySpec(This,pdwKeySpec) )
    ( (This)->lpVtbl -> GetKeyLen(This,fMin,fExchange,pdwKeySize) )
    ( (This)->lpVtbl -> EnumAlgs(This,dwIndex,algClass,pdwAlgID) )
    ( (This)->lpVtbl -> GetAlgName(This,algID,pbstr) )
    ( (This)->lpVtbl -> put_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) )
    ( (This)->lpVtbl -> get_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) )
    ( (This)->lpVtbl -> put_HashAlgID(This,hashAlgID) )
    ( (This)->lpVtbl -> get_HashAlgID(This,hashAlgID) )
    ( (This)->lpVtbl -> put_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) )
    ( (This)->lpVtbl -> get_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) )
    ( (This)->lpVtbl -> put_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) )
    ( (This)->lpVtbl -> get_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) )
EXTERN_C const IID IID_ICEnroll4;
    typedef struct ICEnroll4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICEnroll4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICEnroll4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICEnroll4 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICEnroll4 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICEnroll4 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *createFilePKCS10 )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR DNName,
                       __RPC__in BSTR Usage,
                       __RPC__in BSTR wszPKCS10FileName);
        HRESULT ( STDMETHODCALLTYPE *acceptFilePKCS7 )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR wszPKCS7FileName);
        HRESULT ( STDMETHODCALLTYPE *createPKCS10 )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR DNName,
                       __RPC__in BSTR Usage,
                                __RPC__deref_out_opt BSTR *pPKCS10);
        HRESULT ( STDMETHODCALLTYPE *acceptPKCS7 )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR PKCS7);
        HRESULT ( STDMETHODCALLTYPE *getCertFromPKCS7 )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR wszPKCS7,
                                __RPC__deref_out_opt BSTR *pbstrCert);
        HRESULT ( STDMETHODCALLTYPE *enumProviders )(
            __RPC__in ICEnroll4 * This,
                       LONG dwIndex,
                       LONG dwFlags,
                                __RPC__deref_out_opt BSTR *pbstrProvName);
        HRESULT ( STDMETHODCALLTYPE *enumContainers )(
            __RPC__in ICEnroll4 * This,
                       LONG dwIndex,
                                __RPC__deref_out_opt BSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *freeRequestInfo )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR PKCS7OrPKCS10);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreName )(
            __RPC__in ICEnroll4 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreName )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreType )(
            __RPC__in ICEnroll4 * This,
                                __RPC__deref_out_opt BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreType )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR bstrType);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreFlags )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreFlags )(
            __RPC__in ICEnroll4 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreName )(
            __RPC__in ICEnroll4 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreName )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreType )(
            __RPC__in ICEnroll4 * This,
                                __RPC__deref_out_opt BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreType )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR bstrType);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreFlags )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreFlags )(
            __RPC__in ICEnroll4 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreName )(
            __RPC__in ICEnroll4 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreName )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreType )(
            __RPC__in ICEnroll4 * This,
                                __RPC__deref_out_opt BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreType )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR bstrType);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreFlags )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreFlags )(
            __RPC__in ICEnroll4 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreName )(
            __RPC__in ICEnroll4 * This,
                                __RPC__deref_out_opt BSTR *pbstrName);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreName )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR bstrName);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreType )(
            __RPC__in ICEnroll4 * This,
                                __RPC__deref_out_opt BSTR *pbstrType);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreType )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR bstrType);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreFlags )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreFlags )(
            __RPC__in ICEnroll4 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_ContainerName )(
            __RPC__in ICEnroll4 * This,
                                __RPC__deref_out_opt BSTR *pbstrContainer);
                        HRESULT ( STDMETHODCALLTYPE *put_ContainerName )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR bstrContainer);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderName )(
            __RPC__in ICEnroll4 * This,
                                __RPC__deref_out_opt BSTR *pbstrProvider);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderName )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR bstrProvider);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderType )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out LONG *pdwType);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderType )(
            __RPC__in ICEnroll4 * This,
                       LONG dwType);
                        HRESULT ( STDMETHODCALLTYPE *get_KeySpec )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out LONG *pdw);
                        HRESULT ( STDMETHODCALLTYPE *put_KeySpec )(
            __RPC__in ICEnroll4 * This,
                       LONG dw);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderFlags )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderFlags )(
            __RPC__in ICEnroll4 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_UseExistingKeySet )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out BOOL *fUseExistingKeys);
                        HRESULT ( STDMETHODCALLTYPE *put_UseExistingKeySet )(
            __RPC__in ICEnroll4 * This,
                       BOOL fUseExistingKeys);
                        HRESULT ( STDMETHODCALLTYPE *get_GenKeyFlags )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_GenKeyFlags )(
            __RPC__in ICEnroll4 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_DeleteRequestCert )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out BOOL *fDelete);
                        HRESULT ( STDMETHODCALLTYPE *put_DeleteRequestCert )(
            __RPC__in ICEnroll4 * This,
                       BOOL fDelete);
                        HRESULT ( STDMETHODCALLTYPE *get_WriteCertToCSP )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_WriteCertToCSP )(
            __RPC__in ICEnroll4 * This,
                       BOOL fBool);
                        HRESULT ( STDMETHODCALLTYPE *get_SPCFileName )(
            __RPC__in ICEnroll4 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                        HRESULT ( STDMETHODCALLTYPE *put_SPCFileName )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR bstr);
                        HRESULT ( STDMETHODCALLTYPE *get_PVKFileName )(
            __RPC__in ICEnroll4 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                        HRESULT ( STDMETHODCALLTYPE *put_PVKFileName )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR bstr);
                        HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in ICEnroll4 * This,
                                __RPC__deref_out_opt BSTR *pbstr);
                        HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR bstr);
        HRESULT ( STDMETHODCALLTYPE *addCertTypeToRequest )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR CertType);
        HRESULT ( STDMETHODCALLTYPE *addNameValuePairToSignature )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR Name,
                       __RPC__in BSTR Value);
                        HRESULT ( STDMETHODCALLTYPE *get_WriteCertToUserDS )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_WriteCertToUserDS )(
            __RPC__in ICEnroll4 * This,
                       BOOL fBool);
                        HRESULT ( STDMETHODCALLTYPE *get_EnableT61DNEncoding )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_EnableT61DNEncoding )(
            __RPC__in ICEnroll4 * This,
                       BOOL fBool);
        HRESULT ( STDMETHODCALLTYPE *InstallPKCS7 )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR PKCS7);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in ICEnroll4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedKeySpec )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out LONG *pdwKeySpec);
        HRESULT ( STDMETHODCALLTYPE *GetKeyLen )(
            __RPC__in ICEnroll4 * This,
                       BOOL fMin,
                       BOOL fExchange,
                                __RPC__out LONG *pdwKeySize);
        HRESULT ( STDMETHODCALLTYPE *EnumAlgs )(
            __RPC__in ICEnroll4 * This,
                       LONG dwIndex,
                       LONG algClass,
                                __RPC__out LONG *pdwAlgID);
        HRESULT ( STDMETHODCALLTYPE *GetAlgName )(
            __RPC__in ICEnroll4 * This,
                       LONG algID,
                                __RPC__deref_out_opt BSTR *pbstr);
                        HRESULT ( STDMETHODCALLTYPE *put_ReuseHardwareKeyIfUnableToGenNew )(
            __RPC__in ICEnroll4 * This,
                       BOOL fReuseHardwareKeyIfUnableToGenNew);
                        HRESULT ( STDMETHODCALLTYPE *get_ReuseHardwareKeyIfUnableToGenNew )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out BOOL *fReuseHardwareKeyIfUnableToGenNew);
                        HRESULT ( STDMETHODCALLTYPE *put_HashAlgID )(
            __RPC__in ICEnroll4 * This,
                       LONG hashAlgID);
                        HRESULT ( STDMETHODCALLTYPE *get_HashAlgID )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out LONG *hashAlgID);
                        HRESULT ( STDMETHODCALLTYPE *put_LimitExchangeKeyToEncipherment )(
            __RPC__in ICEnroll4 * This,
                       BOOL fLimitExchangeKeyToEncipherment);
                        HRESULT ( STDMETHODCALLTYPE *get_LimitExchangeKeyToEncipherment )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out BOOL *fLimitExchangeKeyToEncipherment);
                        HRESULT ( STDMETHODCALLTYPE *put_EnableSMIMECapabilities )(
            __RPC__in ICEnroll4 * This,
                       BOOL fEnableSMIMECapabilities);
                        HRESULT ( STDMETHODCALLTYPE *get_EnableSMIMECapabilities )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out BOOL *fEnableSMIMECapabilities);
                        HRESULT ( STDMETHODCALLTYPE *put_PrivateKeyArchiveCertificate )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR bstrCert);
                        HRESULT ( STDMETHODCALLTYPE *get_PrivateKeyArchiveCertificate )(
            __RPC__in ICEnroll4 * This,
                                __RPC__deref_out_opt BSTR *pbstrCert);
                        HRESULT ( STDMETHODCALLTYPE *put_ThumbPrint )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR bstrThumbPrint);
                        HRESULT ( STDMETHODCALLTYPE *get_ThumbPrint )(
            __RPC__in ICEnroll4 * This,
                                __RPC__deref_out_opt BSTR *pbstrThumbPrint);
        HRESULT ( STDMETHODCALLTYPE *binaryToString )(
            __RPC__in ICEnroll4 * This,
                       LONG Flags,
                       __RPC__in BSTR strBinary,
                                __RPC__deref_out_opt BSTR *pstrEncoded);
        HRESULT ( STDMETHODCALLTYPE *stringToBinary )(
            __RPC__in ICEnroll4 * This,
                       LONG Flags,
                       __RPC__in BSTR strEncoded,
                                __RPC__deref_out_opt BSTR *pstrBinary);
        HRESULT ( STDMETHODCALLTYPE *addExtensionToRequest )(
            __RPC__in ICEnroll4 * This,
                       LONG Flags,
                       __RPC__in BSTR strName,
                       __RPC__in BSTR strValue);
        HRESULT ( STDMETHODCALLTYPE *addAttributeToRequest )(
            __RPC__in ICEnroll4 * This,
                       LONG Flags,
                       __RPC__in BSTR strName,
                       __RPC__in BSTR strValue);
        HRESULT ( STDMETHODCALLTYPE *addNameValuePairToRequest )(
            __RPC__in ICEnroll4 * This,
                       LONG Flags,
                       __RPC__in BSTR strName,
                       __RPC__in BSTR strValue);
        HRESULT ( STDMETHODCALLTYPE *resetExtensions )(
            __RPC__in ICEnroll4 * This);
        HRESULT ( STDMETHODCALLTYPE *resetAttributes )(
            __RPC__in ICEnroll4 * This);
        HRESULT ( STDMETHODCALLTYPE *createRequest )(
            __RPC__in ICEnroll4 * This,
                       LONG Flags,
                       __RPC__in BSTR strDNName,
                       __RPC__in BSTR Usage,
                                __RPC__deref_out_opt BSTR *pstrRequest);
        HRESULT ( STDMETHODCALLTYPE *createFileRequest )(
            __RPC__in ICEnroll4 * This,
                       LONG Flags,
                       __RPC__in BSTR strDNName,
                       __RPC__in BSTR strUsage,
                       __RPC__in BSTR strRequestFileName);
        HRESULT ( STDMETHODCALLTYPE *acceptResponse )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR strResponse);
        HRESULT ( STDMETHODCALLTYPE *acceptFileResponse )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR strResponseFileName);
        HRESULT ( STDMETHODCALLTYPE *getCertFromResponse )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR strResponse,
                                __RPC__deref_out_opt BSTR *pstrCert);
        HRESULT ( STDMETHODCALLTYPE *getCertFromFileResponse )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR strResponseFileName,
                                __RPC__deref_out_opt BSTR *pstrCert);
        HRESULT ( STDMETHODCALLTYPE *createPFX )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR strPassword,
                                __RPC__deref_out_opt BSTR *pstrPFX);
        HRESULT ( STDMETHODCALLTYPE *createFilePFX )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR strPassword,
                       __RPC__in BSTR strPFXFileName);
        HRESULT ( STDMETHODCALLTYPE *setPendingRequestInfo )(
            __RPC__in ICEnroll4 * This,
                       LONG lRequestID,
                       __RPC__in BSTR strCADNS,
                       __RPC__in BSTR strCAName,
                       __RPC__in BSTR strFriendlyName);
        HRESULT ( STDMETHODCALLTYPE *enumPendingRequest )(
            __RPC__in ICEnroll4 * This,
                       LONG lIndex,
                       LONG lDesiredProperty,
                                __RPC__out VARIANT *pvarProperty);
        HRESULT ( STDMETHODCALLTYPE *removePendingRequest )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR strThumbprint);
        HRESULT ( STDMETHODCALLTYPE *GetKeyLenEx )(
            __RPC__in ICEnroll4 * This,
                       LONG lSizeSpec,
                       LONG lKeySpec,
                                __RPC__out LONG *pdwKeySize);
        HRESULT ( STDMETHODCALLTYPE *InstallPKCS7Ex )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR PKCS7,
                                __RPC__out LONG *plCertInstalled);
        HRESULT ( STDMETHODCALLTYPE *addCertTypeToRequestEx )(
            __RPC__in ICEnroll4 * This,
                       LONG lType,
                       __RPC__in BSTR bstrOIDOrName,
                       LONG lMajorVersion,
                       BOOL fMinorVersion,
                       LONG lMinorVersion);
        HRESULT ( STDMETHODCALLTYPE *getProviderType )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR strProvName,
                                __RPC__out LONG *plProvType);
                        HRESULT ( STDMETHODCALLTYPE *put_SignerCertificate )(
            __RPC__in ICEnroll4 * This,
                       __RPC__in BSTR bstrCert);
                        HRESULT ( STDMETHODCALLTYPE *put_ClientId )(
            __RPC__in ICEnroll4 * This,
                       LONG lClientId);
                        HRESULT ( STDMETHODCALLTYPE *get_ClientId )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out LONG *plClientId);
        HRESULT ( STDMETHODCALLTYPE *addBlobPropertyToCertificate )(
            __RPC__in ICEnroll4 * This,
                       LONG lPropertyId,
                       LONG lReserved,
                       __RPC__in BSTR bstrProperty);
        HRESULT ( STDMETHODCALLTYPE *resetBlobProperties )(
            __RPC__in ICEnroll4 * This);
                        HRESULT ( STDMETHODCALLTYPE *put_IncludeSubjectKeyID )(
            __RPC__in ICEnroll4 * This,
                       BOOL fInclude);
                        HRESULT ( STDMETHODCALLTYPE *get_IncludeSubjectKeyID )(
            __RPC__in ICEnroll4 * This,
                                __RPC__out BOOL *pfInclude);
        END_INTERFACE
    } ICEnroll4Vtbl;
    interface ICEnroll4
    {
        CONST_VTBL struct ICEnroll4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> createFilePKCS10(This,DNName,Usage,wszPKCS10FileName) )
    ( (This)->lpVtbl -> acceptFilePKCS7(This,wszPKCS7FileName) )
    ( (This)->lpVtbl -> createPKCS10(This,DNName,Usage,pPKCS10) )
    ( (This)->lpVtbl -> acceptPKCS7(This,PKCS7) )
    ( (This)->lpVtbl -> getCertFromPKCS7(This,wszPKCS7,pbstrCert) )
    ( (This)->lpVtbl -> enumProviders(This,dwIndex,dwFlags,pbstrProvName) )
    ( (This)->lpVtbl -> enumContainers(This,dwIndex,pbstr) )
    ( (This)->lpVtbl -> freeRequestInfo(This,PKCS7OrPKCS10) )
    ( (This)->lpVtbl -> get_MyStoreName(This,pbstrName) )
    ( (This)->lpVtbl -> put_MyStoreName(This,bstrName) )
    ( (This)->lpVtbl -> get_MyStoreType(This,pbstrType) )
    ( (This)->lpVtbl -> put_MyStoreType(This,bstrType) )
    ( (This)->lpVtbl -> get_MyStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_MyStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_CAStoreName(This,pbstrName) )
    ( (This)->lpVtbl -> put_CAStoreName(This,bstrName) )
    ( (This)->lpVtbl -> get_CAStoreType(This,pbstrType) )
    ( (This)->lpVtbl -> put_CAStoreType(This,bstrType) )
    ( (This)->lpVtbl -> get_CAStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_CAStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_RootStoreName(This,pbstrName) )
    ( (This)->lpVtbl -> put_RootStoreName(This,bstrName) )
    ( (This)->lpVtbl -> get_RootStoreType(This,pbstrType) )
    ( (This)->lpVtbl -> put_RootStoreType(This,bstrType) )
    ( (This)->lpVtbl -> get_RootStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_RootStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_RequestStoreName(This,pbstrName) )
    ( (This)->lpVtbl -> put_RequestStoreName(This,bstrName) )
    ( (This)->lpVtbl -> get_RequestStoreType(This,pbstrType) )
    ( (This)->lpVtbl -> put_RequestStoreType(This,bstrType) )
    ( (This)->lpVtbl -> get_RequestStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_RequestStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_ContainerName(This,pbstrContainer) )
    ( (This)->lpVtbl -> put_ContainerName(This,bstrContainer) )
    ( (This)->lpVtbl -> get_ProviderName(This,pbstrProvider) )
    ( (This)->lpVtbl -> put_ProviderName(This,bstrProvider) )
    ( (This)->lpVtbl -> get_ProviderType(This,pdwType) )
    ( (This)->lpVtbl -> put_ProviderType(This,dwType) )
    ( (This)->lpVtbl -> get_KeySpec(This,pdw) )
    ( (This)->lpVtbl -> put_KeySpec(This,dw) )
    ( (This)->lpVtbl -> get_ProviderFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_ProviderFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_UseExistingKeySet(This,fUseExistingKeys) )
    ( (This)->lpVtbl -> put_UseExistingKeySet(This,fUseExistingKeys) )
    ( (This)->lpVtbl -> get_GenKeyFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_GenKeyFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_DeleteRequestCert(This,fDelete) )
    ( (This)->lpVtbl -> put_DeleteRequestCert(This,fDelete) )
    ( (This)->lpVtbl -> get_WriteCertToCSP(This,fBool) )
    ( (This)->lpVtbl -> put_WriteCertToCSP(This,fBool) )
    ( (This)->lpVtbl -> get_SPCFileName(This,pbstr) )
    ( (This)->lpVtbl -> put_SPCFileName(This,bstr) )
    ( (This)->lpVtbl -> get_PVKFileName(This,pbstr) )
    ( (This)->lpVtbl -> put_PVKFileName(This,bstr) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,pbstr) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,bstr) )
    ( (This)->lpVtbl -> addCertTypeToRequest(This,CertType) )
    ( (This)->lpVtbl -> addNameValuePairToSignature(This,Name,Value) )
    ( (This)->lpVtbl -> get_WriteCertToUserDS(This,fBool) )
    ( (This)->lpVtbl -> put_WriteCertToUserDS(This,fBool) )
    ( (This)->lpVtbl -> get_EnableT61DNEncoding(This,fBool) )
    ( (This)->lpVtbl -> put_EnableT61DNEncoding(This,fBool) )
    ( (This)->lpVtbl -> InstallPKCS7(This,PKCS7) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> GetSupportedKeySpec(This,pdwKeySpec) )
    ( (This)->lpVtbl -> GetKeyLen(This,fMin,fExchange,pdwKeySize) )
    ( (This)->lpVtbl -> EnumAlgs(This,dwIndex,algClass,pdwAlgID) )
    ( (This)->lpVtbl -> GetAlgName(This,algID,pbstr) )
    ( (This)->lpVtbl -> put_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) )
    ( (This)->lpVtbl -> get_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) )
    ( (This)->lpVtbl -> put_HashAlgID(This,hashAlgID) )
    ( (This)->lpVtbl -> get_HashAlgID(This,hashAlgID) )
    ( (This)->lpVtbl -> put_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) )
    ( (This)->lpVtbl -> get_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) )
    ( (This)->lpVtbl -> put_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) )
    ( (This)->lpVtbl -> get_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) )
    ( (This)->lpVtbl -> put_PrivateKeyArchiveCertificate(This,bstrCert) )
    ( (This)->lpVtbl -> get_PrivateKeyArchiveCertificate(This,pbstrCert) )
    ( (This)->lpVtbl -> put_ThumbPrint(This,bstrThumbPrint) )
    ( (This)->lpVtbl -> get_ThumbPrint(This,pbstrThumbPrint) )
    ( (This)->lpVtbl -> binaryToString(This,Flags,strBinary,pstrEncoded) )
    ( (This)->lpVtbl -> stringToBinary(This,Flags,strEncoded,pstrBinary) )
    ( (This)->lpVtbl -> addExtensionToRequest(This,Flags,strName,strValue) )
    ( (This)->lpVtbl -> addAttributeToRequest(This,Flags,strName,strValue) )
    ( (This)->lpVtbl -> addNameValuePairToRequest(This,Flags,strName,strValue) )
    ( (This)->lpVtbl -> resetExtensions(This) )
    ( (This)->lpVtbl -> resetAttributes(This) )
    ( (This)->lpVtbl -> createRequest(This,Flags,strDNName,Usage,pstrRequest) )
    ( (This)->lpVtbl -> createFileRequest(This,Flags,strDNName,strUsage,strRequestFileName) )
    ( (This)->lpVtbl -> acceptResponse(This,strResponse) )
    ( (This)->lpVtbl -> acceptFileResponse(This,strResponseFileName) )
    ( (This)->lpVtbl -> getCertFromResponse(This,strResponse,pstrCert) )
    ( (This)->lpVtbl -> getCertFromFileResponse(This,strResponseFileName,pstrCert) )
    ( (This)->lpVtbl -> createPFX(This,strPassword,pstrPFX) )
    ( (This)->lpVtbl -> createFilePFX(This,strPassword,strPFXFileName) )
    ( (This)->lpVtbl -> setPendingRequestInfo(This,lRequestID,strCADNS,strCAName,strFriendlyName) )
    ( (This)->lpVtbl -> enumPendingRequest(This,lIndex,lDesiredProperty,pvarProperty) )
    ( (This)->lpVtbl -> removePendingRequest(This,strThumbprint) )
    ( (This)->lpVtbl -> GetKeyLenEx(This,lSizeSpec,lKeySpec,pdwKeySize) )
    ( (This)->lpVtbl -> InstallPKCS7Ex(This,PKCS7,plCertInstalled) )
    ( (This)->lpVtbl -> addCertTypeToRequestEx(This,lType,bstrOIDOrName,lMajorVersion,fMinorVersion,lMinorVersion) )
    ( (This)->lpVtbl -> getProviderType(This,strProvName,plProvType) )
    ( (This)->lpVtbl -> put_SignerCertificate(This,bstrCert) )
    ( (This)->lpVtbl -> put_ClientId(This,lClientId) )
    ( (This)->lpVtbl -> get_ClientId(This,plClientId) )
    ( (This)->lpVtbl -> addBlobPropertyToCertificate(This,lPropertyId,lReserved,bstrProperty) )
    ( (This)->lpVtbl -> resetBlobProperties(This) )
    ( (This)->lpVtbl -> put_IncludeSubjectKeyID(This,fInclude) )
    ( (This)->lpVtbl -> get_IncludeSubjectKeyID(This,pfInclude) )
EXTERN_C const IID IID_IEnroll;
    typedef struct IEnrollVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnroll * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnroll * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnroll * This);
        HRESULT ( STDMETHODCALLTYPE *createFilePKCS10WStr )(
            IEnroll * This,
                       LPCWSTR DNName,
                       LPCWSTR Usage,
                       LPCWSTR wszPKCS10FileName);
        HRESULT ( STDMETHODCALLTYPE *acceptFilePKCS7WStr )(
            IEnroll * This,
                       LPCWSTR wszPKCS7FileName);
        HRESULT ( STDMETHODCALLTYPE *createPKCS10WStr )(
            IEnroll * This,
                       LPCWSTR DNName,
                       LPCWSTR Usage,
                        PCRYPT_DATA_BLOB pPkcs10Blob);
        HRESULT ( STDMETHODCALLTYPE *acceptPKCS7Blob )(
            IEnroll * This,
                       PCRYPT_DATA_BLOB pBlobPKCS7);
        PCCERT_CONTEXT ( STDMETHODCALLTYPE *getCertContextFromPKCS7 )(
            IEnroll * This,
                       PCRYPT_DATA_BLOB pBlobPKCS7);
        HCERTSTORE ( STDMETHODCALLTYPE *getMyStore )(
            IEnroll * This);
        HCERTSTORE ( STDMETHODCALLTYPE *getCAStore )(
            IEnroll * This);
        HCERTSTORE ( STDMETHODCALLTYPE *getROOTHStore )(
            IEnroll * This);
        HRESULT ( STDMETHODCALLTYPE *enumProvidersWStr )(
            IEnroll * This,
                       LONG dwIndex,
                       LONG dwFlags,
                        LPWSTR *pbstrProvName);
        HRESULT ( STDMETHODCALLTYPE *enumContainersWStr )(
            IEnroll * This,
                       LONG dwIndex,
                        LPWSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *freeRequestInfoBlob )(
            IEnroll * This,
                       CRYPT_DATA_BLOB pkcs7OrPkcs10);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreNameWStr )(
            IEnroll * This,
                        LPWSTR *szwName);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreNameWStr )(
            IEnroll * This,
                       LPWSTR szwName);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreTypeWStr )(
            IEnroll * This,
                        LPWSTR *szwType);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreTypeWStr )(
            IEnroll * This,
                       LPWSTR szwType);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreFlags )(
            IEnroll * This,
                        LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreFlags )(
            IEnroll * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreNameWStr )(
            IEnroll * This,
                        LPWSTR *szwName);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreNameWStr )(
            IEnroll * This,
                       LPWSTR szwName);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreTypeWStr )(
            IEnroll * This,
                        LPWSTR *szwType);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreTypeWStr )(
            IEnroll * This,
                       LPWSTR szwType);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreFlags )(
            IEnroll * This,
                        LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreFlags )(
            IEnroll * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreNameWStr )(
            IEnroll * This,
                        LPWSTR *szwName);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreNameWStr )(
            IEnroll * This,
                       LPWSTR szwName);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreTypeWStr )(
            IEnroll * This,
                        LPWSTR *szwType);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreTypeWStr )(
            IEnroll * This,
                       LPWSTR szwType);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreFlags )(
            IEnroll * This,
                        LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreFlags )(
            IEnroll * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreNameWStr )(
            IEnroll * This,
                        LPWSTR *szwName);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreNameWStr )(
            IEnroll * This,
                       LPWSTR szwName);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreTypeWStr )(
            IEnroll * This,
                        LPWSTR *szwType);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreTypeWStr )(
            IEnroll * This,
                       LPWSTR szwType);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreFlags )(
            IEnroll * This,
                        LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreFlags )(
            IEnroll * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_ContainerNameWStr )(
            IEnroll * This,
                        LPWSTR *szwContainer);
                        HRESULT ( STDMETHODCALLTYPE *put_ContainerNameWStr )(
            IEnroll * This,
                       LPWSTR szwContainer);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderNameWStr )(
            IEnroll * This,
                        LPWSTR *szwProvider);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderNameWStr )(
            IEnroll * This,
                       LPWSTR szwProvider);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderType )(
            IEnroll * This,
                        LONG *pdwType);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderType )(
            IEnroll * This,
                       LONG dwType);
                        HRESULT ( STDMETHODCALLTYPE *get_KeySpec )(
            IEnroll * This,
                        LONG *pdw);
                        HRESULT ( STDMETHODCALLTYPE *put_KeySpec )(
            IEnroll * This,
                       LONG dw);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderFlags )(
            IEnroll * This,
                        LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderFlags )(
            IEnroll * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_UseExistingKeySet )(
            IEnroll * This,
                        BOOL *fUseExistingKeys);
                        HRESULT ( STDMETHODCALLTYPE *put_UseExistingKeySet )(
            IEnroll * This,
                       BOOL fUseExistingKeys);
                        HRESULT ( STDMETHODCALLTYPE *get_GenKeyFlags )(
            IEnroll * This,
                        LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_GenKeyFlags )(
            IEnroll * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_DeleteRequestCert )(
            IEnroll * This,
                        BOOL *fDelete);
                        HRESULT ( STDMETHODCALLTYPE *put_DeleteRequestCert )(
            IEnroll * This,
                       BOOL fDelete);
                        HRESULT ( STDMETHODCALLTYPE *get_WriteCertToUserDS )(
            IEnroll * This,
                        BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_WriteCertToUserDS )(
            IEnroll * This,
                       BOOL fBool);
                        HRESULT ( STDMETHODCALLTYPE *get_EnableT61DNEncoding )(
            IEnroll * This,
                        BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_EnableT61DNEncoding )(
            IEnroll * This,
                       BOOL fBool);
                        HRESULT ( STDMETHODCALLTYPE *get_WriteCertToCSP )(
            IEnroll * This,
                        BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_WriteCertToCSP )(
            IEnroll * This,
                       BOOL fBool);
                        HRESULT ( STDMETHODCALLTYPE *get_SPCFileNameWStr )(
            IEnroll * This,
                        LPWSTR *szw);
                        HRESULT ( STDMETHODCALLTYPE *put_SPCFileNameWStr )(
            IEnroll * This,
                       LPWSTR szw);
                        HRESULT ( STDMETHODCALLTYPE *get_PVKFileNameWStr )(
            IEnroll * This,
                        LPWSTR *szw);
                        HRESULT ( STDMETHODCALLTYPE *put_PVKFileNameWStr )(
            IEnroll * This,
                       LPWSTR szw);
                        HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithmWStr )(
            IEnroll * This,
                        LPWSTR *szw);
                        HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithmWStr )(
            IEnroll * This,
                       LPWSTR szw);
                        HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )(
            IEnroll * This,
                        PCCERT_CONTEXT *ppCertContext);
                        HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )(
            IEnroll * This,
                       PCCERT_CONTEXT pCertContext);
        HRESULT ( STDMETHODCALLTYPE *AddCertTypeToRequestWStr )(
            IEnroll * This,
                       LPWSTR szw);
        HRESULT ( STDMETHODCALLTYPE *AddNameValuePairToSignatureWStr )(
            IEnroll * This,
                       LPWSTR Name,
                       LPWSTR Value);
        HRESULT ( STDMETHODCALLTYPE *AddExtensionsToRequest )(
            IEnroll * This,
                       PCERT_EXTENSIONS pCertExtensions);
        HRESULT ( STDMETHODCALLTYPE *AddAuthenticatedAttributesToPKCS7Request )(
            IEnroll * This,
                       PCRYPT_ATTRIBUTES pAttributes);
        HRESULT ( STDMETHODCALLTYPE *CreatePKCS7RequestFromRequest )(
            IEnroll * This,
                       PCRYPT_DATA_BLOB pRequest,
                       PCCERT_CONTEXT pSigningCertContext,
                        PCRYPT_DATA_BLOB pPkcs7Blob);
        END_INTERFACE
    } IEnrollVtbl;
    interface IEnroll
    {
        CONST_VTBL struct IEnrollVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> createFilePKCS10WStr(This,DNName,Usage,wszPKCS10FileName) )
    ( (This)->lpVtbl -> acceptFilePKCS7WStr(This,wszPKCS7FileName) )
    ( (This)->lpVtbl -> createPKCS10WStr(This,DNName,Usage,pPkcs10Blob) )
    ( (This)->lpVtbl -> acceptPKCS7Blob(This,pBlobPKCS7) )
    ( (This)->lpVtbl -> getCertContextFromPKCS7(This,pBlobPKCS7) )
    ( (This)->lpVtbl -> getMyStore(This) )
    ( (This)->lpVtbl -> getCAStore(This) )
    ( (This)->lpVtbl -> getROOTHStore(This) )
    ( (This)->lpVtbl -> enumProvidersWStr(This,dwIndex,dwFlags,pbstrProvName) )
    ( (This)->lpVtbl -> enumContainersWStr(This,dwIndex,pbstr) )
    ( (This)->lpVtbl -> freeRequestInfoBlob(This,pkcs7OrPkcs10) )
    ( (This)->lpVtbl -> get_MyStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> put_MyStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> get_MyStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> put_MyStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> get_MyStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_MyStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_CAStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> put_CAStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> get_CAStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> put_CAStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> get_CAStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_CAStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_RootStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> put_RootStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> get_RootStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> put_RootStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> get_RootStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_RootStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_RequestStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> put_RequestStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> get_RequestStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> put_RequestStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> get_RequestStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_RequestStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_ContainerNameWStr(This,szwContainer) )
    ( (This)->lpVtbl -> put_ContainerNameWStr(This,szwContainer) )
    ( (This)->lpVtbl -> get_ProviderNameWStr(This,szwProvider) )
    ( (This)->lpVtbl -> put_ProviderNameWStr(This,szwProvider) )
    ( (This)->lpVtbl -> get_ProviderType(This,pdwType) )
    ( (This)->lpVtbl -> put_ProviderType(This,dwType) )
    ( (This)->lpVtbl -> get_KeySpec(This,pdw) )
    ( (This)->lpVtbl -> put_KeySpec(This,dw) )
    ( (This)->lpVtbl -> get_ProviderFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_ProviderFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_UseExistingKeySet(This,fUseExistingKeys) )
    ( (This)->lpVtbl -> put_UseExistingKeySet(This,fUseExistingKeys) )
    ( (This)->lpVtbl -> get_GenKeyFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_GenKeyFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_DeleteRequestCert(This,fDelete) )
    ( (This)->lpVtbl -> put_DeleteRequestCert(This,fDelete) )
    ( (This)->lpVtbl -> get_WriteCertToUserDS(This,fBool) )
    ( (This)->lpVtbl -> put_WriteCertToUserDS(This,fBool) )
    ( (This)->lpVtbl -> get_EnableT61DNEncoding(This,fBool) )
    ( (This)->lpVtbl -> put_EnableT61DNEncoding(This,fBool) )
    ( (This)->lpVtbl -> get_WriteCertToCSP(This,fBool) )
    ( (This)->lpVtbl -> put_WriteCertToCSP(This,fBool) )
    ( (This)->lpVtbl -> get_SPCFileNameWStr(This,szw) )
    ( (This)->lpVtbl -> put_SPCFileNameWStr(This,szw) )
    ( (This)->lpVtbl -> get_PVKFileNameWStr(This,szw) )
    ( (This)->lpVtbl -> put_PVKFileNameWStr(This,szw) )
    ( (This)->lpVtbl -> get_HashAlgorithmWStr(This,szw) )
    ( (This)->lpVtbl -> put_HashAlgorithmWStr(This,szw) )
    ( (This)->lpVtbl -> get_RenewalCertificate(This,ppCertContext) )
    ( (This)->lpVtbl -> put_RenewalCertificate(This,pCertContext) )
    ( (This)->lpVtbl -> AddCertTypeToRequestWStr(This,szw) )
    ( (This)->lpVtbl -> AddNameValuePairToSignatureWStr(This,Name,Value) )
    ( (This)->lpVtbl -> AddExtensionsToRequest(This,pCertExtensions) )
    ( (This)->lpVtbl -> AddAuthenticatedAttributesToPKCS7Request(This,pAttributes) )
    ( (This)->lpVtbl -> CreatePKCS7RequestFromRequest(This,pRequest,pSigningCertContext,pPkcs7Blob) )
EXTERN_C const IID IID_IEnroll2;
    typedef struct IEnroll2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnroll2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnroll2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnroll2 * This);
        HRESULT ( STDMETHODCALLTYPE *createFilePKCS10WStr )(
            IEnroll2 * This,
                       LPCWSTR DNName,
                       LPCWSTR Usage,
                       LPCWSTR wszPKCS10FileName);
        HRESULT ( STDMETHODCALLTYPE *acceptFilePKCS7WStr )(
            IEnroll2 * This,
                       LPCWSTR wszPKCS7FileName);
        HRESULT ( STDMETHODCALLTYPE *createPKCS10WStr )(
            IEnroll2 * This,
                       LPCWSTR DNName,
                       LPCWSTR Usage,
                        PCRYPT_DATA_BLOB pPkcs10Blob);
        HRESULT ( STDMETHODCALLTYPE *acceptPKCS7Blob )(
            IEnroll2 * This,
                       PCRYPT_DATA_BLOB pBlobPKCS7);
        PCCERT_CONTEXT ( STDMETHODCALLTYPE *getCertContextFromPKCS7 )(
            IEnroll2 * This,
                       PCRYPT_DATA_BLOB pBlobPKCS7);
        HCERTSTORE ( STDMETHODCALLTYPE *getMyStore )(
            IEnroll2 * This);
        HCERTSTORE ( STDMETHODCALLTYPE *getCAStore )(
            IEnroll2 * This);
        HCERTSTORE ( STDMETHODCALLTYPE *getROOTHStore )(
            IEnroll2 * This);
        HRESULT ( STDMETHODCALLTYPE *enumProvidersWStr )(
            IEnroll2 * This,
                       LONG dwIndex,
                       LONG dwFlags,
                        LPWSTR *pbstrProvName);
        HRESULT ( STDMETHODCALLTYPE *enumContainersWStr )(
            IEnroll2 * This,
                       LONG dwIndex,
                        LPWSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *freeRequestInfoBlob )(
            IEnroll2 * This,
                       CRYPT_DATA_BLOB pkcs7OrPkcs10);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreNameWStr )(
            IEnroll2 * This,
                        LPWSTR *szwName);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreNameWStr )(
            IEnroll2 * This,
                       LPWSTR szwName);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreTypeWStr )(
            IEnroll2 * This,
                        LPWSTR *szwType);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreTypeWStr )(
            IEnroll2 * This,
                       LPWSTR szwType);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreFlags )(
            IEnroll2 * This,
                        LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreFlags )(
            IEnroll2 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreNameWStr )(
            IEnroll2 * This,
                        LPWSTR *szwName);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreNameWStr )(
            IEnroll2 * This,
                       LPWSTR szwName);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreTypeWStr )(
            IEnroll2 * This,
                        LPWSTR *szwType);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreTypeWStr )(
            IEnroll2 * This,
                       LPWSTR szwType);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreFlags )(
            IEnroll2 * This,
                        LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreFlags )(
            IEnroll2 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreNameWStr )(
            IEnroll2 * This,
                        LPWSTR *szwName);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreNameWStr )(
            IEnroll2 * This,
                       LPWSTR szwName);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreTypeWStr )(
            IEnroll2 * This,
                        LPWSTR *szwType);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreTypeWStr )(
            IEnroll2 * This,
                       LPWSTR szwType);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreFlags )(
            IEnroll2 * This,
                        LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreFlags )(
            IEnroll2 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreNameWStr )(
            IEnroll2 * This,
                        LPWSTR *szwName);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreNameWStr )(
            IEnroll2 * This,
                       LPWSTR szwName);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreTypeWStr )(
            IEnroll2 * This,
                        LPWSTR *szwType);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreTypeWStr )(
            IEnroll2 * This,
                       LPWSTR szwType);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreFlags )(
            IEnroll2 * This,
                        LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreFlags )(
            IEnroll2 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_ContainerNameWStr )(
            IEnroll2 * This,
                        LPWSTR *szwContainer);
                        HRESULT ( STDMETHODCALLTYPE *put_ContainerNameWStr )(
            IEnroll2 * This,
                       LPWSTR szwContainer);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderNameWStr )(
            IEnroll2 * This,
                        LPWSTR *szwProvider);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderNameWStr )(
            IEnroll2 * This,
                       LPWSTR szwProvider);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderType )(
            IEnroll2 * This,
                        LONG *pdwType);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderType )(
            IEnroll2 * This,
                       LONG dwType);
                        HRESULT ( STDMETHODCALLTYPE *get_KeySpec )(
            IEnroll2 * This,
                        LONG *pdw);
                        HRESULT ( STDMETHODCALLTYPE *put_KeySpec )(
            IEnroll2 * This,
                       LONG dw);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderFlags )(
            IEnroll2 * This,
                        LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderFlags )(
            IEnroll2 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_UseExistingKeySet )(
            IEnroll2 * This,
                        BOOL *fUseExistingKeys);
                        HRESULT ( STDMETHODCALLTYPE *put_UseExistingKeySet )(
            IEnroll2 * This,
                       BOOL fUseExistingKeys);
                        HRESULT ( STDMETHODCALLTYPE *get_GenKeyFlags )(
            IEnroll2 * This,
                        LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_GenKeyFlags )(
            IEnroll2 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_DeleteRequestCert )(
            IEnroll2 * This,
                        BOOL *fDelete);
                        HRESULT ( STDMETHODCALLTYPE *put_DeleteRequestCert )(
            IEnroll2 * This,
                       BOOL fDelete);
                        HRESULT ( STDMETHODCALLTYPE *get_WriteCertToUserDS )(
            IEnroll2 * This,
                        BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_WriteCertToUserDS )(
            IEnroll2 * This,
                       BOOL fBool);
                        HRESULT ( STDMETHODCALLTYPE *get_EnableT61DNEncoding )(
            IEnroll2 * This,
                        BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_EnableT61DNEncoding )(
            IEnroll2 * This,
                       BOOL fBool);
                        HRESULT ( STDMETHODCALLTYPE *get_WriteCertToCSP )(
            IEnroll2 * This,
                        BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_WriteCertToCSP )(
            IEnroll2 * This,
                       BOOL fBool);
                        HRESULT ( STDMETHODCALLTYPE *get_SPCFileNameWStr )(
            IEnroll2 * This,
                        LPWSTR *szw);
                        HRESULT ( STDMETHODCALLTYPE *put_SPCFileNameWStr )(
            IEnroll2 * This,
                       LPWSTR szw);
                        HRESULT ( STDMETHODCALLTYPE *get_PVKFileNameWStr )(
            IEnroll2 * This,
                        LPWSTR *szw);
                        HRESULT ( STDMETHODCALLTYPE *put_PVKFileNameWStr )(
            IEnroll2 * This,
                       LPWSTR szw);
                        HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithmWStr )(
            IEnroll2 * This,
                        LPWSTR *szw);
                        HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithmWStr )(
            IEnroll2 * This,
                       LPWSTR szw);
                        HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )(
            IEnroll2 * This,
                        PCCERT_CONTEXT *ppCertContext);
                        HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )(
            IEnroll2 * This,
                       PCCERT_CONTEXT pCertContext);
        HRESULT ( STDMETHODCALLTYPE *AddCertTypeToRequestWStr )(
            IEnroll2 * This,
                       LPWSTR szw);
        HRESULT ( STDMETHODCALLTYPE *AddNameValuePairToSignatureWStr )(
            IEnroll2 * This,
                       LPWSTR Name,
                       LPWSTR Value);
        HRESULT ( STDMETHODCALLTYPE *AddExtensionsToRequest )(
            IEnroll2 * This,
                       PCERT_EXTENSIONS pCertExtensions);
        HRESULT ( STDMETHODCALLTYPE *AddAuthenticatedAttributesToPKCS7Request )(
            IEnroll2 * This,
                       PCRYPT_ATTRIBUTES pAttributes);
        HRESULT ( STDMETHODCALLTYPE *CreatePKCS7RequestFromRequest )(
            IEnroll2 * This,
                       PCRYPT_DATA_BLOB pRequest,
                       PCCERT_CONTEXT pSigningCertContext,
                        PCRYPT_DATA_BLOB pPkcs7Blob);
        HRESULT ( STDMETHODCALLTYPE *InstallPKCS7Blob )(
            IEnroll2 * This,
                       PCRYPT_DATA_BLOB pBlobPKCS7);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnroll2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedKeySpec )(
            IEnroll2 * This,
                        LONG *pdwKeySpec);
        HRESULT ( STDMETHODCALLTYPE *GetKeyLen )(
            IEnroll2 * This,
                       BOOL fMin,
                       BOOL fExchange,
                        LONG *pdwKeySize);
        HRESULT ( STDMETHODCALLTYPE *EnumAlgs )(
            IEnroll2 * This,
                       LONG dwIndex,
                       LONG algClass,
                        LONG *pdwAlgID);
        HRESULT ( STDMETHODCALLTYPE *GetAlgNameWStr )(
            IEnroll2 * This,
                       LONG algID,
                        LPWSTR *ppwsz);
                        HRESULT ( STDMETHODCALLTYPE *put_ReuseHardwareKeyIfUnableToGenNew )(
            IEnroll2 * This,
                       BOOL fReuseHardwareKeyIfUnableToGenNew);
                        HRESULT ( STDMETHODCALLTYPE *get_ReuseHardwareKeyIfUnableToGenNew )(
            IEnroll2 * This,
                        BOOL *fReuseHardwareKeyIfUnableToGenNew);
                        HRESULT ( STDMETHODCALLTYPE *put_HashAlgID )(
            IEnroll2 * This,
                       LONG hashAlgID);
                        HRESULT ( STDMETHODCALLTYPE *get_HashAlgID )(
            IEnroll2 * This,
                                LONG *hashAlgID);
        HRESULT ( STDMETHODCALLTYPE *SetHStoreMy )(
            IEnroll2 * This,
                       HCERTSTORE hStore);
        HRESULT ( STDMETHODCALLTYPE *SetHStoreCA )(
            IEnroll2 * This,
                       HCERTSTORE hStore);
        HRESULT ( STDMETHODCALLTYPE *SetHStoreROOT )(
            IEnroll2 * This,
                       HCERTSTORE hStore);
        HRESULT ( STDMETHODCALLTYPE *SetHStoreRequest )(
            IEnroll2 * This,
                       HCERTSTORE hStore);
                        HRESULT ( STDMETHODCALLTYPE *put_LimitExchangeKeyToEncipherment )(
            IEnroll2 * This,
                       BOOL fLimitExchangeKeyToEncipherment);
                        HRESULT ( STDMETHODCALLTYPE *get_LimitExchangeKeyToEncipherment )(
            IEnroll2 * This,
                                BOOL *fLimitExchangeKeyToEncipherment);
                        HRESULT ( STDMETHODCALLTYPE *put_EnableSMIMECapabilities )(
            IEnroll2 * This,
                       BOOL fEnableSMIMECapabilities);
                        HRESULT ( STDMETHODCALLTYPE *get_EnableSMIMECapabilities )(
            IEnroll2 * This,
                                BOOL *fEnableSMIMECapabilities);
        END_INTERFACE
    } IEnroll2Vtbl;
    interface IEnroll2
    {
        CONST_VTBL struct IEnroll2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> createFilePKCS10WStr(This,DNName,Usage,wszPKCS10FileName) )
    ( (This)->lpVtbl -> acceptFilePKCS7WStr(This,wszPKCS7FileName) )
    ( (This)->lpVtbl -> createPKCS10WStr(This,DNName,Usage,pPkcs10Blob) )
    ( (This)->lpVtbl -> acceptPKCS7Blob(This,pBlobPKCS7) )
    ( (This)->lpVtbl -> getCertContextFromPKCS7(This,pBlobPKCS7) )
    ( (This)->lpVtbl -> getMyStore(This) )
    ( (This)->lpVtbl -> getCAStore(This) )
    ( (This)->lpVtbl -> getROOTHStore(This) )
    ( (This)->lpVtbl -> enumProvidersWStr(This,dwIndex,dwFlags,pbstrProvName) )
    ( (This)->lpVtbl -> enumContainersWStr(This,dwIndex,pbstr) )
    ( (This)->lpVtbl -> freeRequestInfoBlob(This,pkcs7OrPkcs10) )
    ( (This)->lpVtbl -> get_MyStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> put_MyStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> get_MyStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> put_MyStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> get_MyStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_MyStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_CAStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> put_CAStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> get_CAStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> put_CAStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> get_CAStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_CAStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_RootStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> put_RootStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> get_RootStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> put_RootStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> get_RootStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_RootStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_RequestStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> put_RequestStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> get_RequestStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> put_RequestStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> get_RequestStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_RequestStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_ContainerNameWStr(This,szwContainer) )
    ( (This)->lpVtbl -> put_ContainerNameWStr(This,szwContainer) )
    ( (This)->lpVtbl -> get_ProviderNameWStr(This,szwProvider) )
    ( (This)->lpVtbl -> put_ProviderNameWStr(This,szwProvider) )
    ( (This)->lpVtbl -> get_ProviderType(This,pdwType) )
    ( (This)->lpVtbl -> put_ProviderType(This,dwType) )
    ( (This)->lpVtbl -> get_KeySpec(This,pdw) )
    ( (This)->lpVtbl -> put_KeySpec(This,dw) )
    ( (This)->lpVtbl -> get_ProviderFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_ProviderFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_UseExistingKeySet(This,fUseExistingKeys) )
    ( (This)->lpVtbl -> put_UseExistingKeySet(This,fUseExistingKeys) )
    ( (This)->lpVtbl -> get_GenKeyFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_GenKeyFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_DeleteRequestCert(This,fDelete) )
    ( (This)->lpVtbl -> put_DeleteRequestCert(This,fDelete) )
    ( (This)->lpVtbl -> get_WriteCertToUserDS(This,fBool) )
    ( (This)->lpVtbl -> put_WriteCertToUserDS(This,fBool) )
    ( (This)->lpVtbl -> get_EnableT61DNEncoding(This,fBool) )
    ( (This)->lpVtbl -> put_EnableT61DNEncoding(This,fBool) )
    ( (This)->lpVtbl -> get_WriteCertToCSP(This,fBool) )
    ( (This)->lpVtbl -> put_WriteCertToCSP(This,fBool) )
    ( (This)->lpVtbl -> get_SPCFileNameWStr(This,szw) )
    ( (This)->lpVtbl -> put_SPCFileNameWStr(This,szw) )
    ( (This)->lpVtbl -> get_PVKFileNameWStr(This,szw) )
    ( (This)->lpVtbl -> put_PVKFileNameWStr(This,szw) )
    ( (This)->lpVtbl -> get_HashAlgorithmWStr(This,szw) )
    ( (This)->lpVtbl -> put_HashAlgorithmWStr(This,szw) )
    ( (This)->lpVtbl -> get_RenewalCertificate(This,ppCertContext) )
    ( (This)->lpVtbl -> put_RenewalCertificate(This,pCertContext) )
    ( (This)->lpVtbl -> AddCertTypeToRequestWStr(This,szw) )
    ( (This)->lpVtbl -> AddNameValuePairToSignatureWStr(This,Name,Value) )
    ( (This)->lpVtbl -> AddExtensionsToRequest(This,pCertExtensions) )
    ( (This)->lpVtbl -> AddAuthenticatedAttributesToPKCS7Request(This,pAttributes) )
    ( (This)->lpVtbl -> CreatePKCS7RequestFromRequest(This,pRequest,pSigningCertContext,pPkcs7Blob) )
    ( (This)->lpVtbl -> InstallPKCS7Blob(This,pBlobPKCS7) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> GetSupportedKeySpec(This,pdwKeySpec) )
    ( (This)->lpVtbl -> GetKeyLen(This,fMin,fExchange,pdwKeySize) )
    ( (This)->lpVtbl -> EnumAlgs(This,dwIndex,algClass,pdwAlgID) )
    ( (This)->lpVtbl -> GetAlgNameWStr(This,algID,ppwsz) )
    ( (This)->lpVtbl -> put_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) )
    ( (This)->lpVtbl -> get_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) )
    ( (This)->lpVtbl -> put_HashAlgID(This,hashAlgID) )
    ( (This)->lpVtbl -> get_HashAlgID(This,hashAlgID) )
    ( (This)->lpVtbl -> SetHStoreMy(This,hStore) )
    ( (This)->lpVtbl -> SetHStoreCA(This,hStore) )
    ( (This)->lpVtbl -> SetHStoreROOT(This,hStore) )
    ( (This)->lpVtbl -> SetHStoreRequest(This,hStore) )
    ( (This)->lpVtbl -> put_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) )
    ( (This)->lpVtbl -> get_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) )
    ( (This)->lpVtbl -> put_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) )
    ( (This)->lpVtbl -> get_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) )
EXTERN_C const IID IID_IEnroll4;
    typedef struct IEnroll4Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IEnroll4 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IEnroll4 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IEnroll4 * This);
        HRESULT ( STDMETHODCALLTYPE *createFilePKCS10WStr )(
            IEnroll4 * This,
                       LPCWSTR DNName,
                       LPCWSTR Usage,
                       LPCWSTR wszPKCS10FileName);
        HRESULT ( STDMETHODCALLTYPE *acceptFilePKCS7WStr )(
            IEnroll4 * This,
                       LPCWSTR wszPKCS7FileName);
        HRESULT ( STDMETHODCALLTYPE *createPKCS10WStr )(
            IEnroll4 * This,
                       LPCWSTR DNName,
                       LPCWSTR Usage,
                        PCRYPT_DATA_BLOB pPkcs10Blob);
        HRESULT ( STDMETHODCALLTYPE *acceptPKCS7Blob )(
            IEnroll4 * This,
                       PCRYPT_DATA_BLOB pBlobPKCS7);
        PCCERT_CONTEXT ( STDMETHODCALLTYPE *getCertContextFromPKCS7 )(
            IEnroll4 * This,
                       PCRYPT_DATA_BLOB pBlobPKCS7);
        HCERTSTORE ( STDMETHODCALLTYPE *getMyStore )(
            IEnroll4 * This);
        HCERTSTORE ( STDMETHODCALLTYPE *getCAStore )(
            IEnroll4 * This);
        HCERTSTORE ( STDMETHODCALLTYPE *getROOTHStore )(
            IEnroll4 * This);
        HRESULT ( STDMETHODCALLTYPE *enumProvidersWStr )(
            IEnroll4 * This,
                       LONG dwIndex,
                       LONG dwFlags,
                        LPWSTR *pbstrProvName);
        HRESULT ( STDMETHODCALLTYPE *enumContainersWStr )(
            IEnroll4 * This,
                       LONG dwIndex,
                        LPWSTR *pbstr);
        HRESULT ( STDMETHODCALLTYPE *freeRequestInfoBlob )(
            IEnroll4 * This,
                       CRYPT_DATA_BLOB pkcs7OrPkcs10);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreNameWStr )(
            IEnroll4 * This,
                        LPWSTR *szwName);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreNameWStr )(
            IEnroll4 * This,
                       LPWSTR szwName);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreTypeWStr )(
            IEnroll4 * This,
                        LPWSTR *szwType);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreTypeWStr )(
            IEnroll4 * This,
                       LPWSTR szwType);
                        HRESULT ( STDMETHODCALLTYPE *get_MyStoreFlags )(
            IEnroll4 * This,
                        LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_MyStoreFlags )(
            IEnroll4 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreNameWStr )(
            IEnroll4 * This,
                        LPWSTR *szwName);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreNameWStr )(
            IEnroll4 * This,
                       LPWSTR szwName);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreTypeWStr )(
            IEnroll4 * This,
                        LPWSTR *szwType);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreTypeWStr )(
            IEnroll4 * This,
                       LPWSTR szwType);
                        HRESULT ( STDMETHODCALLTYPE *get_CAStoreFlags )(
            IEnroll4 * This,
                        LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_CAStoreFlags )(
            IEnroll4 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreNameWStr )(
            IEnroll4 * This,
                        LPWSTR *szwName);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreNameWStr )(
            IEnroll4 * This,
                       LPWSTR szwName);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreTypeWStr )(
            IEnroll4 * This,
                        LPWSTR *szwType);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreTypeWStr )(
            IEnroll4 * This,
                       LPWSTR szwType);
                        HRESULT ( STDMETHODCALLTYPE *get_RootStoreFlags )(
            IEnroll4 * This,
                        LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_RootStoreFlags )(
            IEnroll4 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreNameWStr )(
            IEnroll4 * This,
                        LPWSTR *szwName);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreNameWStr )(
            IEnroll4 * This,
                       LPWSTR szwName);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreTypeWStr )(
            IEnroll4 * This,
                        LPWSTR *szwType);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreTypeWStr )(
            IEnroll4 * This,
                       LPWSTR szwType);
                        HRESULT ( STDMETHODCALLTYPE *get_RequestStoreFlags )(
            IEnroll4 * This,
                        LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_RequestStoreFlags )(
            IEnroll4 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_ContainerNameWStr )(
            IEnroll4 * This,
                        LPWSTR *szwContainer);
                        HRESULT ( STDMETHODCALLTYPE *put_ContainerNameWStr )(
            IEnroll4 * This,
                       LPWSTR szwContainer);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderNameWStr )(
            IEnroll4 * This,
                        LPWSTR *szwProvider);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderNameWStr )(
            IEnroll4 * This,
                       LPWSTR szwProvider);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderType )(
            IEnroll4 * This,
                        LONG *pdwType);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderType )(
            IEnroll4 * This,
                       LONG dwType);
                        HRESULT ( STDMETHODCALLTYPE *get_KeySpec )(
            IEnroll4 * This,
                        LONG *pdw);
                        HRESULT ( STDMETHODCALLTYPE *put_KeySpec )(
            IEnroll4 * This,
                       LONG dw);
                        HRESULT ( STDMETHODCALLTYPE *get_ProviderFlags )(
            IEnroll4 * This,
                        LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_ProviderFlags )(
            IEnroll4 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_UseExistingKeySet )(
            IEnroll4 * This,
                        BOOL *fUseExistingKeys);
                        HRESULT ( STDMETHODCALLTYPE *put_UseExistingKeySet )(
            IEnroll4 * This,
                       BOOL fUseExistingKeys);
                        HRESULT ( STDMETHODCALLTYPE *get_GenKeyFlags )(
            IEnroll4 * This,
                        LONG *pdwFlags);
                        HRESULT ( STDMETHODCALLTYPE *put_GenKeyFlags )(
            IEnroll4 * This,
                       LONG dwFlags);
                        HRESULT ( STDMETHODCALLTYPE *get_DeleteRequestCert )(
            IEnroll4 * This,
                        BOOL *fDelete);
                        HRESULT ( STDMETHODCALLTYPE *put_DeleteRequestCert )(
            IEnroll4 * This,
                       BOOL fDelete);
                        HRESULT ( STDMETHODCALLTYPE *get_WriteCertToUserDS )(
            IEnroll4 * This,
                        BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_WriteCertToUserDS )(
            IEnroll4 * This,
                       BOOL fBool);
                        HRESULT ( STDMETHODCALLTYPE *get_EnableT61DNEncoding )(
            IEnroll4 * This,
                        BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_EnableT61DNEncoding )(
            IEnroll4 * This,
                       BOOL fBool);
                        HRESULT ( STDMETHODCALLTYPE *get_WriteCertToCSP )(
            IEnroll4 * This,
                        BOOL *fBool);
                        HRESULT ( STDMETHODCALLTYPE *put_WriteCertToCSP )(
            IEnroll4 * This,
                       BOOL fBool);
                        HRESULT ( STDMETHODCALLTYPE *get_SPCFileNameWStr )(
            IEnroll4 * This,
                        LPWSTR *szw);
                        HRESULT ( STDMETHODCALLTYPE *put_SPCFileNameWStr )(
            IEnroll4 * This,
                       LPWSTR szw);
                        HRESULT ( STDMETHODCALLTYPE *get_PVKFileNameWStr )(
            IEnroll4 * This,
                        LPWSTR *szw);
                        HRESULT ( STDMETHODCALLTYPE *put_PVKFileNameWStr )(
            IEnroll4 * This,
                       LPWSTR szw);
                        HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithmWStr )(
            IEnroll4 * This,
                        LPWSTR *szw);
                        HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithmWStr )(
            IEnroll4 * This,
                       LPWSTR szw);
                        HRESULT ( STDMETHODCALLTYPE *get_RenewalCertificate )(
            IEnroll4 * This,
                        PCCERT_CONTEXT *ppCertContext);
                        HRESULT ( STDMETHODCALLTYPE *put_RenewalCertificate )(
            IEnroll4 * This,
                       PCCERT_CONTEXT pCertContext);
        HRESULT ( STDMETHODCALLTYPE *AddCertTypeToRequestWStr )(
            IEnroll4 * This,
                       LPWSTR szw);
        HRESULT ( STDMETHODCALLTYPE *AddNameValuePairToSignatureWStr )(
            IEnroll4 * This,
                       LPWSTR Name,
                       LPWSTR Value);
        HRESULT ( STDMETHODCALLTYPE *AddExtensionsToRequest )(
            IEnroll4 * This,
                       PCERT_EXTENSIONS pCertExtensions);
        HRESULT ( STDMETHODCALLTYPE *AddAuthenticatedAttributesToPKCS7Request )(
            IEnroll4 * This,
                       PCRYPT_ATTRIBUTES pAttributes);
        HRESULT ( STDMETHODCALLTYPE *CreatePKCS7RequestFromRequest )(
            IEnroll4 * This,
                       PCRYPT_DATA_BLOB pRequest,
                       PCCERT_CONTEXT pSigningCertContext,
                        PCRYPT_DATA_BLOB pPkcs7Blob);
        HRESULT ( STDMETHODCALLTYPE *InstallPKCS7Blob )(
            IEnroll4 * This,
                       PCRYPT_DATA_BLOB pBlobPKCS7);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IEnroll4 * This);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedKeySpec )(
            IEnroll4 * This,
                        LONG *pdwKeySpec);
        HRESULT ( STDMETHODCALLTYPE *GetKeyLen )(
            IEnroll4 * This,
                       BOOL fMin,
                       BOOL fExchange,
                        LONG *pdwKeySize);
        HRESULT ( STDMETHODCALLTYPE *EnumAlgs )(
            IEnroll4 * This,
                       LONG dwIndex,
                       LONG algClass,
                        LONG *pdwAlgID);
        HRESULT ( STDMETHODCALLTYPE *GetAlgNameWStr )(
            IEnroll4 * This,
                       LONG algID,
                        LPWSTR *ppwsz);
                        HRESULT ( STDMETHODCALLTYPE *put_ReuseHardwareKeyIfUnableToGenNew )(
            IEnroll4 * This,
                       BOOL fReuseHardwareKeyIfUnableToGenNew);
                        HRESULT ( STDMETHODCALLTYPE *get_ReuseHardwareKeyIfUnableToGenNew )(
            IEnroll4 * This,
                        BOOL *fReuseHardwareKeyIfUnableToGenNew);
                        HRESULT ( STDMETHODCALLTYPE *put_HashAlgID )(
            IEnroll4 * This,
                       LONG hashAlgID);
                        HRESULT ( STDMETHODCALLTYPE *get_HashAlgID )(
            IEnroll4 * This,
                                LONG *hashAlgID);
        HRESULT ( STDMETHODCALLTYPE *SetHStoreMy )(
            IEnroll4 * This,
                       HCERTSTORE hStore);
        HRESULT ( STDMETHODCALLTYPE *SetHStoreCA )(
            IEnroll4 * This,
                       HCERTSTORE hStore);
        HRESULT ( STDMETHODCALLTYPE *SetHStoreROOT )(
            IEnroll4 * This,
                       HCERTSTORE hStore);
        HRESULT ( STDMETHODCALLTYPE *SetHStoreRequest )(
            IEnroll4 * This,
                       HCERTSTORE hStore);
                        HRESULT ( STDMETHODCALLTYPE *put_LimitExchangeKeyToEncipherment )(
            IEnroll4 * This,
                       BOOL fLimitExchangeKeyToEncipherment);
                        HRESULT ( STDMETHODCALLTYPE *get_LimitExchangeKeyToEncipherment )(
            IEnroll4 * This,
                                BOOL *fLimitExchangeKeyToEncipherment);
                        HRESULT ( STDMETHODCALLTYPE *put_EnableSMIMECapabilities )(
            IEnroll4 * This,
                       BOOL fEnableSMIMECapabilities);
                        HRESULT ( STDMETHODCALLTYPE *get_EnableSMIMECapabilities )(
            IEnroll4 * This,
                                BOOL *fEnableSMIMECapabilities);
                        HRESULT ( STDMETHODCALLTYPE *put_ThumbPrintWStr )(
            IEnroll4 * This,
                       CRYPT_DATA_BLOB thumbPrintBlob);
                        HRESULT ( STDMETHODCALLTYPE *get_ThumbPrintWStr )(
            IEnroll4 * This,
                                PCRYPT_DATA_BLOB thumbPrintBlob);
        HRESULT ( STDMETHODCALLTYPE *SetPrivateKeyArchiveCertificate )(
            IEnroll4 * This,
                       PCCERT_CONTEXT pPrivateKeyArchiveCert);
        PCCERT_CONTEXT ( STDMETHODCALLTYPE *GetPrivateKeyArchiveCertificate )(
            IEnroll4 * This);
        HRESULT ( STDMETHODCALLTYPE *binaryBlobToString )(
            IEnroll4 * This,
                       LONG Flags,
                       PCRYPT_DATA_BLOB pblobBinary,
                        LPWSTR *ppwszString);
        HRESULT ( STDMETHODCALLTYPE *stringToBinaryBlob )(
            IEnroll4 * This,
                       LONG Flags,
                       LPCWSTR pwszString,
                        PCRYPT_DATA_BLOB pblobBinary,
                        LONG *pdwSkip,
                        LONG *pdwFlags);
        HRESULT ( STDMETHODCALLTYPE *addExtensionToRequestWStr )(
            IEnroll4 * This,
                       LONG Flags,
                       LPCWSTR pwszName,
                       PCRYPT_DATA_BLOB pblobValue);
        HRESULT ( STDMETHODCALLTYPE *addAttributeToRequestWStr )(
            IEnroll4 * This,
                       LONG Flags,
                       LPCWSTR pwszName,
                       PCRYPT_DATA_BLOB pblobValue);
        HRESULT ( STDMETHODCALLTYPE *addNameValuePairToRequestWStr )(
            IEnroll4 * This,
                       LONG Flags,
                       LPCWSTR pwszName,
                       LPCWSTR pwszValue);
        HRESULT ( STDMETHODCALLTYPE *resetExtensions )(
            IEnroll4 * This);
        HRESULT ( STDMETHODCALLTYPE *resetAttributes )(
            IEnroll4 * This);
        HRESULT ( STDMETHODCALLTYPE *createRequestWStr )(
            IEnroll4 * This,
                       LONG Flags,
                       LPCWSTR pwszDNName,
                       LPCWSTR pwszUsage,
                        PCRYPT_DATA_BLOB pblobRequest);
        HRESULT ( STDMETHODCALLTYPE *createFileRequestWStr )(
            IEnroll4 * This,
                       LONG Flags,
                       LPCWSTR pwszDNName,
                       LPCWSTR pwszUsage,
                       LPCWSTR pwszRequestFileName);
        HRESULT ( STDMETHODCALLTYPE *acceptResponseBlob )(
            IEnroll4 * This,
                       PCRYPT_DATA_BLOB pblobResponse);
        HRESULT ( STDMETHODCALLTYPE *acceptFileResponseWStr )(
            IEnroll4 * This,
                       LPCWSTR pwszResponseFileName);
        HRESULT ( STDMETHODCALLTYPE *getCertContextFromResponseBlob )(
            IEnroll4 * This,
                       PCRYPT_DATA_BLOB pblobResponse,
                        PCCERT_CONTEXT *ppCertContext);
        HRESULT ( STDMETHODCALLTYPE *getCertContextFromFileResponseWStr )(
            IEnroll4 * This,
                       LPCWSTR pwszResponseFileName,
                        PCCERT_CONTEXT *ppCertContext);
        HRESULT ( STDMETHODCALLTYPE *createPFXWStr )(
            IEnroll4 * This,
                       LPCWSTR pwszPassword,
                        PCRYPT_DATA_BLOB pblobPFX);
        HRESULT ( STDMETHODCALLTYPE *createFilePFXWStr )(
            IEnroll4 * This,
                       LPCWSTR pwszPassword,
                       LPCWSTR pwszPFXFileName);
        HRESULT ( STDMETHODCALLTYPE *setPendingRequestInfoWStr )(
            IEnroll4 * This,
                       LONG lRequestID,
                       LPCWSTR pwszCADNS,
                       LPCWSTR pwszCAName,
                       LPCWSTR pwszFriendlyName);
        HRESULT ( STDMETHODCALLTYPE *enumPendingRequestWStr )(
            IEnroll4 * This,
                       LONG lIndex,
                       LONG lDesiredProperty,
                        LPVOID ppProperty);
        HRESULT ( STDMETHODCALLTYPE *removePendingRequestWStr )(
            IEnroll4 * This,
                       CRYPT_DATA_BLOB thumbPrintBlob);
        HRESULT ( STDMETHODCALLTYPE *GetKeyLenEx )(
            IEnroll4 * This,
                       LONG lSizeSpec,
                       LONG lKeySpec,
                                LONG *pdwKeySize);
        HRESULT ( STDMETHODCALLTYPE *InstallPKCS7BlobEx )(
            IEnroll4 * This,
                       PCRYPT_DATA_BLOB pBlobPKCS7,
                                LONG *plCertInstalled);
        HRESULT ( STDMETHODCALLTYPE *AddCertTypeToRequestWStrEx )(
            IEnroll4 * This,
                       LONG lType,
                       LPCWSTR pwszOIDOrName,
                       LONG lMajorVersion,
                       BOOL fMinorVersion,
                       LONG lMinorVersion);
        HRESULT ( STDMETHODCALLTYPE *getProviderTypeWStr )(
            IEnroll4 * This,
                       LPCWSTR pwszProvName,
                                LONG *plProvType);
        HRESULT ( STDMETHODCALLTYPE *addBlobPropertyToCertificateWStr )(
            IEnroll4 * This,
                       LONG lPropertyId,
                       LONG lReserved,
                       PCRYPT_DATA_BLOB pBlobProperty);
        HRESULT ( STDMETHODCALLTYPE *SetSignerCertificate )(
            IEnroll4 * This,
                       PCCERT_CONTEXT pSignerCert);
                        HRESULT ( STDMETHODCALLTYPE *put_ClientId )(
            IEnroll4 * This,
                       LONG lClientId);
                        HRESULT ( STDMETHODCALLTYPE *get_ClientId )(
            IEnroll4 * This,
                                LONG *plClientId);
                        HRESULT ( STDMETHODCALLTYPE *put_IncludeSubjectKeyID )(
            IEnroll4 * This,
                       BOOL fInclude);
                        HRESULT ( STDMETHODCALLTYPE *get_IncludeSubjectKeyID )(
            IEnroll4 * This,
                                BOOL *pfInclude);
        END_INTERFACE
    } IEnroll4Vtbl;
    interface IEnroll4
    {
        CONST_VTBL struct IEnroll4Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> createFilePKCS10WStr(This,DNName,Usage,wszPKCS10FileName) )
    ( (This)->lpVtbl -> acceptFilePKCS7WStr(This,wszPKCS7FileName) )
    ( (This)->lpVtbl -> createPKCS10WStr(This,DNName,Usage,pPkcs10Blob) )
    ( (This)->lpVtbl -> acceptPKCS7Blob(This,pBlobPKCS7) )
    ( (This)->lpVtbl -> getCertContextFromPKCS7(This,pBlobPKCS7) )
    ( (This)->lpVtbl -> getMyStore(This) )
    ( (This)->lpVtbl -> getCAStore(This) )
    ( (This)->lpVtbl -> getROOTHStore(This) )
    ( (This)->lpVtbl -> enumProvidersWStr(This,dwIndex,dwFlags,pbstrProvName) )
    ( (This)->lpVtbl -> enumContainersWStr(This,dwIndex,pbstr) )
    ( (This)->lpVtbl -> freeRequestInfoBlob(This,pkcs7OrPkcs10) )
    ( (This)->lpVtbl -> get_MyStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> put_MyStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> get_MyStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> put_MyStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> get_MyStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_MyStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_CAStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> put_CAStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> get_CAStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> put_CAStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> get_CAStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_CAStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_RootStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> put_RootStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> get_RootStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> put_RootStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> get_RootStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_RootStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_RequestStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> put_RequestStoreNameWStr(This,szwName) )
    ( (This)->lpVtbl -> get_RequestStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> put_RequestStoreTypeWStr(This,szwType) )
    ( (This)->lpVtbl -> get_RequestStoreFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_RequestStoreFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_ContainerNameWStr(This,szwContainer) )
    ( (This)->lpVtbl -> put_ContainerNameWStr(This,szwContainer) )
    ( (This)->lpVtbl -> get_ProviderNameWStr(This,szwProvider) )
    ( (This)->lpVtbl -> put_ProviderNameWStr(This,szwProvider) )
    ( (This)->lpVtbl -> get_ProviderType(This,pdwType) )
    ( (This)->lpVtbl -> put_ProviderType(This,dwType) )
    ( (This)->lpVtbl -> get_KeySpec(This,pdw) )
    ( (This)->lpVtbl -> put_KeySpec(This,dw) )
    ( (This)->lpVtbl -> get_ProviderFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_ProviderFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_UseExistingKeySet(This,fUseExistingKeys) )
    ( (This)->lpVtbl -> put_UseExistingKeySet(This,fUseExistingKeys) )
    ( (This)->lpVtbl -> get_GenKeyFlags(This,pdwFlags) )
    ( (This)->lpVtbl -> put_GenKeyFlags(This,dwFlags) )
    ( (This)->lpVtbl -> get_DeleteRequestCert(This,fDelete) )
    ( (This)->lpVtbl -> put_DeleteRequestCert(This,fDelete) )
    ( (This)->lpVtbl -> get_WriteCertToUserDS(This,fBool) )
    ( (This)->lpVtbl -> put_WriteCertToUserDS(This,fBool) )
    ( (This)->lpVtbl -> get_EnableT61DNEncoding(This,fBool) )
    ( (This)->lpVtbl -> put_EnableT61DNEncoding(This,fBool) )
    ( (This)->lpVtbl -> get_WriteCertToCSP(This,fBool) )
    ( (This)->lpVtbl -> put_WriteCertToCSP(This,fBool) )
    ( (This)->lpVtbl -> get_SPCFileNameWStr(This,szw) )
    ( (This)->lpVtbl -> put_SPCFileNameWStr(This,szw) )
    ( (This)->lpVtbl -> get_PVKFileNameWStr(This,szw) )
    ( (This)->lpVtbl -> put_PVKFileNameWStr(This,szw) )
    ( (This)->lpVtbl -> get_HashAlgorithmWStr(This,szw) )
    ( (This)->lpVtbl -> put_HashAlgorithmWStr(This,szw) )
    ( (This)->lpVtbl -> get_RenewalCertificate(This,ppCertContext) )
    ( (This)->lpVtbl -> put_RenewalCertificate(This,pCertContext) )
    ( (This)->lpVtbl -> AddCertTypeToRequestWStr(This,szw) )
    ( (This)->lpVtbl -> AddNameValuePairToSignatureWStr(This,Name,Value) )
    ( (This)->lpVtbl -> AddExtensionsToRequest(This,pCertExtensions) )
    ( (This)->lpVtbl -> AddAuthenticatedAttributesToPKCS7Request(This,pAttributes) )
    ( (This)->lpVtbl -> CreatePKCS7RequestFromRequest(This,pRequest,pSigningCertContext,pPkcs7Blob) )
    ( (This)->lpVtbl -> InstallPKCS7Blob(This,pBlobPKCS7) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> GetSupportedKeySpec(This,pdwKeySpec) )
    ( (This)->lpVtbl -> GetKeyLen(This,fMin,fExchange,pdwKeySize) )
    ( (This)->lpVtbl -> EnumAlgs(This,dwIndex,algClass,pdwAlgID) )
    ( (This)->lpVtbl -> GetAlgNameWStr(This,algID,ppwsz) )
    ( (This)->lpVtbl -> put_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) )
    ( (This)->lpVtbl -> get_ReuseHardwareKeyIfUnableToGenNew(This,fReuseHardwareKeyIfUnableToGenNew) )
    ( (This)->lpVtbl -> put_HashAlgID(This,hashAlgID) )
    ( (This)->lpVtbl -> get_HashAlgID(This,hashAlgID) )
    ( (This)->lpVtbl -> SetHStoreMy(This,hStore) )
    ( (This)->lpVtbl -> SetHStoreCA(This,hStore) )
    ( (This)->lpVtbl -> SetHStoreROOT(This,hStore) )
    ( (This)->lpVtbl -> SetHStoreRequest(This,hStore) )
    ( (This)->lpVtbl -> put_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) )
    ( (This)->lpVtbl -> get_LimitExchangeKeyToEncipherment(This,fLimitExchangeKeyToEncipherment) )
    ( (This)->lpVtbl -> put_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) )
    ( (This)->lpVtbl -> get_EnableSMIMECapabilities(This,fEnableSMIMECapabilities) )
    ( (This)->lpVtbl -> put_ThumbPrintWStr(This,thumbPrintBlob) )
    ( (This)->lpVtbl -> get_ThumbPrintWStr(This,thumbPrintBlob) )
    ( (This)->lpVtbl -> SetPrivateKeyArchiveCertificate(This,pPrivateKeyArchiveCert) )
    ( (This)->lpVtbl -> GetPrivateKeyArchiveCertificate(This) )
    ( (This)->lpVtbl -> binaryBlobToString(This,Flags,pblobBinary,ppwszString) )
    ( (This)->lpVtbl -> stringToBinaryBlob(This,Flags,pwszString,pblobBinary,pdwSkip,pdwFlags) )
    ( (This)->lpVtbl -> addExtensionToRequestWStr(This,Flags,pwszName,pblobValue) )
    ( (This)->lpVtbl -> addAttributeToRequestWStr(This,Flags,pwszName,pblobValue) )
    ( (This)->lpVtbl -> addNameValuePairToRequestWStr(This,Flags,pwszName,pwszValue) )
    ( (This)->lpVtbl -> resetExtensions(This) )
    ( (This)->lpVtbl -> resetAttributes(This) )
    ( (This)->lpVtbl -> createRequestWStr(This,Flags,pwszDNName,pwszUsage,pblobRequest) )
    ( (This)->lpVtbl -> createFileRequestWStr(This,Flags,pwszDNName,pwszUsage,pwszRequestFileName) )
    ( (This)->lpVtbl -> acceptResponseBlob(This,pblobResponse) )
    ( (This)->lpVtbl -> acceptFileResponseWStr(This,pwszResponseFileName) )
    ( (This)->lpVtbl -> getCertContextFromResponseBlob(This,pblobResponse,ppCertContext) )
    ( (This)->lpVtbl -> getCertContextFromFileResponseWStr(This,pwszResponseFileName,ppCertContext) )
    ( (This)->lpVtbl -> createPFXWStr(This,pwszPassword,pblobPFX) )
    ( (This)->lpVtbl -> createFilePFXWStr(This,pwszPassword,pwszPFXFileName) )
    ( (This)->lpVtbl -> setPendingRequestInfoWStr(This,lRequestID,pwszCADNS,pwszCAName,pwszFriendlyName) )
    ( (This)->lpVtbl -> enumPendingRequestWStr(This,lIndex,lDesiredProperty,ppProperty) )
    ( (This)->lpVtbl -> removePendingRequestWStr(This,thumbPrintBlob) )
    ( (This)->lpVtbl -> GetKeyLenEx(This,lSizeSpec,lKeySpec,pdwKeySize) )
    ( (This)->lpVtbl -> InstallPKCS7BlobEx(This,pBlobPKCS7,plCertInstalled) )
    ( (This)->lpVtbl -> AddCertTypeToRequestWStrEx(This,lType,pwszOIDOrName,lMajorVersion,fMinorVersion,lMinorVersion) )
    ( (This)->lpVtbl -> getProviderTypeWStr(This,pwszProvName,plProvType) )
    ( (This)->lpVtbl -> addBlobPropertyToCertificateWStr(This,lPropertyId,lReserved,pBlobProperty) )
    ( (This)->lpVtbl -> SetSignerCertificate(This,pSignerCert) )
    ( (This)->lpVtbl -> put_ClientId(This,lClientId) )
    ( (This)->lpVtbl -> get_ClientId(This,plClientId) )
    ( (This)->lpVtbl -> put_IncludeSubjectKeyID(This,fInclude) )
    ( (This)->lpVtbl -> get_IncludeSubjectKeyID(This,pfInclude) )
EXTERN_C const IID LIBID_XENROLLLib;
EXTERN_C const CLSID CLSID_CEnroll2;
class DECLSPEC_UUID("127698e4-e730-4e5c-a2b1-21490a70c8a1")
CEnroll2;
EXTERN_C const CLSID CLSID_CEnroll;
class DECLSPEC_UUID("43F8F289-7A20-11D0-8F06-00C04FC295E1")
CEnroll;
extern "C" IEnroll * WINAPI PIEnrollGetNoCOM(void);
extern "C" IEnroll2 * WINAPI PIEnroll2GetNoCOM(void);
extern "C" IEnroll4 * WINAPI PIEnroll4GetNoCOM(void);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_xenroll_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xenroll_0000_0008_v0_0_s_ifspec;
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
