#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICertSrvSetupKeyInformation ICertSrvSetupKeyInformation;
typedef interface ICertSrvSetupKeyInformationCollection ICertSrvSetupKeyInformationCollection;
typedef interface ICertSrvSetup ICertSrvSetup;
typedef interface IMSCEPSetup IMSCEPSetup;
typedef interface ICertificateEnrollmentServerSetup ICertificateEnrollmentServerSetup;
typedef interface ICertificateEnrollmentPolicyServerSetup ICertificateEnrollmentPolicyServerSetup;
typedef class CCertSrvSetupKeyInformation CCertSrvSetupKeyInformation;
typedef class CCertSrvSetup CCertSrvSetup;
typedef class CMSCEPSetup CMSCEPSetup;
typedef class CCertificateEnrollmentServerSetup CCertificateEnrollmentServerSetup;
typedef class CCertificateEnrollmentPolicyServerSetup CCertificateEnrollmentPolicyServerSetup;
#include "wtypes.h"
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICertSrvSetupKeyInformation;
    typedef struct ICertSrvSetupKeyInformationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertSrvSetupKeyInformation * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertSrvSetupKeyInformation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertSrvSetupKeyInformation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertSrvSetupKeyInformation * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertSrvSetupKeyInformation * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertSrvSetupKeyInformation * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertSrvSetupKeyInformation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProviderName )(
            __RPC__in ICertSrvSetupKeyInformation * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_ProviderName )(
            __RPC__in ICertSrvSetupKeyInformation * This,
                       __RPC__in const BSTR bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Length )(
            __RPC__in ICertSrvSetupKeyInformation * This,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Length )(
            __RPC__in ICertSrvSetupKeyInformation * This,
                       LONG lVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Existing )(
            __RPC__in ICertSrvSetupKeyInformation * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Existing )(
            __RPC__in ICertSrvSetupKeyInformation * This,
                       VARIANT_BOOL bVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ContainerName )(
            __RPC__in ICertSrvSetupKeyInformation * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_ContainerName )(
            __RPC__in ICertSrvSetupKeyInformation * This,
                       __RPC__in const BSTR bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in ICertSrvSetupKeyInformation * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in ICertSrvSetupKeyInformation * This,
                       __RPC__in const BSTR bstrVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ExistingCACertificate )(
            __RPC__in ICertSrvSetupKeyInformation * This,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_ExistingCACertificate )(
            __RPC__in ICertSrvSetupKeyInformation * This,
                       VARIANT varVal);
        END_INTERFACE
    } ICertSrvSetupKeyInformationVtbl;
    interface ICertSrvSetupKeyInformation
    {
        CONST_VTBL struct ICertSrvSetupKeyInformationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ProviderName(This,pVal) )
    ( (This)->lpVtbl -> put_ProviderName(This,bstrVal) )
    ( (This)->lpVtbl -> get_Length(This,pVal) )
    ( (This)->lpVtbl -> put_Length(This,lVal) )
    ( (This)->lpVtbl -> get_Existing(This,pVal) )
    ( (This)->lpVtbl -> put_Existing(This,bVal) )
    ( (This)->lpVtbl -> get_ContainerName(This,pVal) )
    ( (This)->lpVtbl -> put_ContainerName(This,bstrVal) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,pVal) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,bstrVal) )
    ( (This)->lpVtbl -> get_ExistingCACertificate(This,pVal) )
    ( (This)->lpVtbl -> put_ExistingCACertificate(This,varVal) )
EXTERN_C const IID IID_ICertSrvSetupKeyInformationCollection;
    typedef struct ICertSrvSetupKeyInformationCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertSrvSetupKeyInformationCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertSrvSetupKeyInformationCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertSrvSetupKeyInformationCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertSrvSetupKeyInformationCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertSrvSetupKeyInformationCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertSrvSetupKeyInformationCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertSrvSetupKeyInformationCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in ICertSrvSetupKeyInformationCollection * This,
                                __RPC__deref_out_opt IUnknown **ppVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in ICertSrvSetupKeyInformationCollection * This,
                       LONG Index,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in ICertSrvSetupKeyInformationCollection * This,
                                __RPC__out LONG *pVal);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in ICertSrvSetupKeyInformationCollection * This,
                       __RPC__in_opt ICertSrvSetupKeyInformation *pIKeyInformation);
        END_INTERFACE
    } ICertSrvSetupKeyInformationCollectionVtbl;
    interface ICertSrvSetupKeyInformationCollection
    {
        CONST_VTBL struct ICertSrvSetupKeyInformationCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,ppVal) )
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> Add(This,pIKeyInformation) )
typedef
enum __MIDL___MIDL_itf_casetup_0000_0002_0001
    {
        ENUM_SETUPPROP_INVALID = -1,
        ENUM_SETUPPROP_CATYPE = 0,
        ENUM_SETUPPROP_CAKEYINFORMATION = 1,
        ENUM_SETUPPROP_INTERACTIVE = 2,
        ENUM_SETUPPROP_CANAME = 3,
        ENUM_SETUPPROP_CADSSUFFIX = 4,
        ENUM_SETUPPROP_VALIDITYPERIOD = 5,
        ENUM_SETUPPROP_VALIDITYPERIODUNIT = 6,
        ENUM_SETUPPROP_EXPIRATIONDATE = 7,
        ENUM_SETUPPROP_PRESERVEDATABASE = 8,
        ENUM_SETUPPROP_DATABASEDIRECTORY = 9,
        ENUM_SETUPPROP_LOGDIRECTORY = 10,
        ENUM_SETUPPROP_SHAREDFOLDER = 11,
        ENUM_SETUPPROP_PARENTCAMACHINE = 12,
        ENUM_SETUPPROP_PARENTCANAME = 13,
        ENUM_SETUPPROP_REQUESTFILE = 14,
        ENUM_SETUPPROP_WEBCAMACHINE = 15,
        ENUM_SETUPPROP_WEBCANAME = 16
    } CASetupProperty;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_ICertSrvSetup;
    typedef struct ICertSrvSetupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertSrvSetup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertSrvSetup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertSrvSetup * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertSrvSetup * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertSrvSetup * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertSrvSetup * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertSrvSetup * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_CAErrorId )(
            __RPC__in ICertSrvSetup * This,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CAErrorString )(
            __RPC__in ICertSrvSetup * This,
                                __RPC__deref_out_opt BSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *InitializeDefaults )(
            __RPC__in ICertSrvSetup * This,
                       VARIANT_BOOL bServer,
                       VARIANT_BOOL bClient);
        HRESULT ( STDMETHODCALLTYPE *GetCASetupProperty )(
            __RPC__in ICertSrvSetup * This,
                       CASetupProperty propertyId,
                                __RPC__out VARIANT *pPropertyValue);
        HRESULT ( STDMETHODCALLTYPE *SetCASetupProperty )(
            __RPC__in ICertSrvSetup * This,
                       CASetupProperty propertyId,
                       __RPC__in VARIANT *pPropertyValue);
        HRESULT ( STDMETHODCALLTYPE *IsPropertyEditable )(
            __RPC__in ICertSrvSetup * This,
                       CASetupProperty propertyId,
                                __RPC__out VARIANT_BOOL *pbEditable);
        HRESULT ( STDMETHODCALLTYPE *GetSupportedCATypes )(
            __RPC__in ICertSrvSetup * This,
                                __RPC__out VARIANT *pCATypes);
        HRESULT ( STDMETHODCALLTYPE *GetProviderNameList )(
            __RPC__in ICertSrvSetup * This,
                                __RPC__out VARIANT *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetKeyLengthList )(
            __RPC__in ICertSrvSetup * This,
                       __RPC__in const BSTR bstrProviderName,
                                __RPC__out VARIANT *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetHashAlgorithmList )(
            __RPC__in ICertSrvSetup * This,
                       __RPC__in const BSTR bstrProviderName,
                                __RPC__out VARIANT *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetPrivateKeyContainerList )(
            __RPC__in ICertSrvSetup * This,
                       __RPC__in const BSTR bstrProviderName,
                                __RPC__out VARIANT *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetExistingCACertificates )(
            __RPC__in ICertSrvSetup * This,
                                __RPC__deref_out_opt ICertSrvSetupKeyInformationCollection **ppVal);
        HRESULT ( STDMETHODCALLTYPE *CAImportPFX )(
            __RPC__in ICertSrvSetup * This,
                       __RPC__in const BSTR bstrFileName,
                       __RPC__in const BSTR bstrPasswd,
                       VARIANT_BOOL bOverwriteExistingKey,
                                __RPC__deref_out_opt ICertSrvSetupKeyInformation **ppVal);
        HRESULT ( STDMETHODCALLTYPE *SetCADistinguishedName )(
            __RPC__in ICertSrvSetup * This,
                       __RPC__in const BSTR bstrCADN,
                       VARIANT_BOOL bIgnoreUnicode,
                       VARIANT_BOOL bOverwriteExistingKey,
                       VARIANT_BOOL bOverwriteExistingCAInDS);
        HRESULT ( STDMETHODCALLTYPE *SetDatabaseInformation )(
            __RPC__in ICertSrvSetup * This,
                       __RPC__in const BSTR bstrDBDirectory,
                       __RPC__in const BSTR bstrLogDirectory,
                       __RPC__in const BSTR bstrSharedFolder,
                       VARIANT_BOOL bForceOverwrite);
        HRESULT ( STDMETHODCALLTYPE *SetParentCAInformation )(
            __RPC__in ICertSrvSetup * This,
                       __RPC__in const BSTR bstrCAConfiguration);
        HRESULT ( STDMETHODCALLTYPE *SetWebCAInformation )(
            __RPC__in ICertSrvSetup * This,
                       __RPC__in const BSTR bstrCAConfiguration);
        HRESULT ( STDMETHODCALLTYPE *Install )(
            __RPC__in ICertSrvSetup * This);
        HRESULT ( STDMETHODCALLTYPE *PreUnInstall )(
            __RPC__in ICertSrvSetup * This,
                       VARIANT_BOOL bClientOnly);
        HRESULT ( STDMETHODCALLTYPE *PostUnInstall )(
            __RPC__in ICertSrvSetup * This);
        END_INTERFACE
    } ICertSrvSetupVtbl;
    interface ICertSrvSetup
    {
        CONST_VTBL struct ICertSrvSetupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_CAErrorId(This,pVal) )
    ( (This)->lpVtbl -> get_CAErrorString(This,pVal) )
    ( (This)->lpVtbl -> InitializeDefaults(This,bServer,bClient) )
    ( (This)->lpVtbl -> GetCASetupProperty(This,propertyId,pPropertyValue) )
    ( (This)->lpVtbl -> SetCASetupProperty(This,propertyId,pPropertyValue) )
    ( (This)->lpVtbl -> IsPropertyEditable(This,propertyId,pbEditable) )
    ( (This)->lpVtbl -> GetSupportedCATypes(This,pCATypes) )
    ( (This)->lpVtbl -> GetProviderNameList(This,pVal) )
    ( (This)->lpVtbl -> GetKeyLengthList(This,bstrProviderName,pVal) )
    ( (This)->lpVtbl -> GetHashAlgorithmList(This,bstrProviderName,pVal) )
    ( (This)->lpVtbl -> GetPrivateKeyContainerList(This,bstrProviderName,pVal) )
    ( (This)->lpVtbl -> GetExistingCACertificates(This,ppVal) )
    ( (This)->lpVtbl -> CAImportPFX(This,bstrFileName,bstrPasswd,bOverwriteExistingKey,ppVal) )
    ( (This)->lpVtbl -> SetCADistinguishedName(This,bstrCADN,bIgnoreUnicode,bOverwriteExistingKey,bOverwriteExistingCAInDS) )
    ( (This)->lpVtbl -> SetDatabaseInformation(This,bstrDBDirectory,bstrLogDirectory,bstrSharedFolder,bForceOverwrite) )
    ( (This)->lpVtbl -> SetParentCAInformation(This,bstrCAConfiguration) )
    ( (This)->lpVtbl -> SetWebCAInformation(This,bstrCAConfiguration) )
    ( (This)->lpVtbl -> Install(This) )
    ( (This)->lpVtbl -> PreUnInstall(This,bClientOnly) )
    ( (This)->lpVtbl -> PostUnInstall(This) )
typedef
enum __MIDL___MIDL_itf_casetup_0000_0003_0001
    {
        ENUM_CEPSETUPPROP_USELOCALSYSTEM = 0,
        ENUM_CEPSETUPPROP_USECHALLENGE = 1,
        ENUM_CEPSETUPPROP_RANAME_CN = 2,
        ENUM_CEPSETUPPROP_RANAME_EMAIL = 3,
        ENUM_CEPSETUPPROP_RANAME_COMPANY = 4,
        ENUM_CEPSETUPPROP_RANAME_DEPT = 5,
        ENUM_CEPSETUPPROP_RANAME_CITY = 6,
        ENUM_CEPSETUPPROP_RANAME_STATE = 7,
        ENUM_CEPSETUPPROP_RANAME_COUNTRY = 8,
        ENUM_CEPSETUPPROP_SIGNINGKEYINFORMATION = 9,
        ENUM_CEPSETUPPROP_EXCHANGEKEYINFORMATION = 10,
        ENUM_CEPSETUPPROP_CAINFORMATION = 11,
        ENUM_CEPSETUPPROP_MSCEPURL = 12,
        ENUM_CEPSETUPPROP_CHALLENGEURL = 13
    } MSCEPSetupProperty;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IMSCEPSetup;
    typedef struct IMSCEPSetupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMSCEPSetup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMSCEPSetup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMSCEPSetup * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IMSCEPSetup * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IMSCEPSetup * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IMSCEPSetup * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMSCEPSetup * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_MSCEPErrorId )(
            __RPC__in IMSCEPSetup * This,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_MSCEPErrorString )(
            __RPC__in IMSCEPSetup * This,
                                __RPC__deref_out_opt BSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *InitializeDefaults )(
            __RPC__in IMSCEPSetup * This);
        HRESULT ( STDMETHODCALLTYPE *GetMSCEPSetupProperty )(
            __RPC__in IMSCEPSetup * This,
                       MSCEPSetupProperty propertyId,
                                __RPC__out VARIANT *pVal);
        HRESULT ( STDMETHODCALLTYPE *SetMSCEPSetupProperty )(
            __RPC__in IMSCEPSetup * This,
                       MSCEPSetupProperty propertyId,
                       __RPC__in VARIANT *pPropertyValue);
        HRESULT ( STDMETHODCALLTYPE *SetAccountInformation )(
            __RPC__in IMSCEPSetup * This,
                       __RPC__in const BSTR bstrUserName,
                       __RPC__in const BSTR bstrPassword);
        HRESULT ( STDMETHODCALLTYPE *IsMSCEPStoreEmpty )(
            __RPC__in IMSCEPSetup * This,
                                __RPC__out VARIANT_BOOL *pbEmpty);
        HRESULT ( STDMETHODCALLTYPE *GetProviderNameList )(
            __RPC__in IMSCEPSetup * This,
                       VARIANT_BOOL bExchange,
                                __RPC__out VARIANT *pVal);
        HRESULT ( STDMETHODCALLTYPE *GetKeyLengthList )(
            __RPC__in IMSCEPSetup * This,
                       VARIANT_BOOL bExchange,
                       __RPC__in const BSTR bstrProviderName,
                                __RPC__out VARIANT *pVal);
        HRESULT ( STDMETHODCALLTYPE *Install )(
            __RPC__in IMSCEPSetup * This);
        HRESULT ( STDMETHODCALLTYPE *PreUnInstall )(
            __RPC__in IMSCEPSetup * This);
        HRESULT ( STDMETHODCALLTYPE *PostUnInstall )(
            __RPC__in IMSCEPSetup * This);
        END_INTERFACE
    } IMSCEPSetupVtbl;
    interface IMSCEPSetup
    {
        CONST_VTBL struct IMSCEPSetupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_MSCEPErrorId(This,pVal) )
    ( (This)->lpVtbl -> get_MSCEPErrorString(This,pVal) )
    ( (This)->lpVtbl -> InitializeDefaults(This) )
    ( (This)->lpVtbl -> GetMSCEPSetupProperty(This,propertyId,pVal) )
    ( (This)->lpVtbl -> SetMSCEPSetupProperty(This,propertyId,pPropertyValue) )
    ( (This)->lpVtbl -> SetAccountInformation(This,bstrUserName,bstrPassword) )
    ( (This)->lpVtbl -> IsMSCEPStoreEmpty(This,pbEmpty) )
    ( (This)->lpVtbl -> GetProviderNameList(This,bExchange,pVal) )
    ( (This)->lpVtbl -> GetKeyLengthList(This,bExchange,bstrProviderName,pVal) )
    ( (This)->lpVtbl -> Install(This) )
    ( (This)->lpVtbl -> PreUnInstall(This) )
    ( (This)->lpVtbl -> PostUnInstall(This) )
typedef
enum __MIDL___MIDL_itf_casetup_0000_0004_0001
    {
        ENUM_CESSETUPPROP_USE_IISAPPPOOLIDENTITY = 0,
        ENUM_CESSETUPPROP_CACONFIG = 1,
        ENUM_CESSETUPPROP_AUTHENTICATION = 2,
        ENUM_CESSETUPPROP_SSLCERTHASH = 3,
        ENUM_CESSETUPPROP_URL = 4,
        ENUM_CESSETUPPROP_RENEWALONLY = 5,
        ENUM_CESSETUPPROP_ALLOW_KEYBASED_RENEWAL = 6
    } CESSetupProperty;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0004_v0_0_s_ifspec;
EXTERN_C const IID IID_ICertificateEnrollmentServerSetup;
    typedef struct ICertificateEnrollmentServerSetupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertificateEnrollmentServerSetup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertificateEnrollmentServerSetup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertificateEnrollmentServerSetup * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertificateEnrollmentServerSetup * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertificateEnrollmentServerSetup * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertificateEnrollmentServerSetup * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertificateEnrollmentServerSetup * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ErrorString )(
            __RPC__in ICertificateEnrollmentServerSetup * This,
                                __RPC__deref_out_opt BSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *InitializeInstallDefaults )(
            __RPC__in ICertificateEnrollmentServerSetup * This);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in ICertificateEnrollmentServerSetup * This,
                       CESSetupProperty propertyId,
                                __RPC__out VARIANT *pPropertyValue);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in ICertificateEnrollmentServerSetup * This,
                       CESSetupProperty propertyId,
                       __RPC__in VARIANT *pPropertyValue);
        HRESULT ( STDMETHODCALLTYPE *SetApplicationPoolCredentials )(
            __RPC__in ICertificateEnrollmentServerSetup * This,
                       __RPC__in const BSTR bstrUsername,
                       __RPC__in const BSTR bstrPassword);
        HRESULT ( STDMETHODCALLTYPE *Install )(
            __RPC__in ICertificateEnrollmentServerSetup * This);
        HRESULT ( STDMETHODCALLTYPE *UnInstall )(
            __RPC__in ICertificateEnrollmentServerSetup * This,
                                 __RPC__in VARIANT *pCAConfig,
                                 __RPC__in VARIANT *pAuthentication);
        END_INTERFACE
    } ICertificateEnrollmentServerSetupVtbl;
    interface ICertificateEnrollmentServerSetup
    {
        CONST_VTBL struct ICertificateEnrollmentServerSetupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ErrorString(This,pVal) )
    ( (This)->lpVtbl -> InitializeInstallDefaults(This) )
    ( (This)->lpVtbl -> GetProperty(This,propertyId,pPropertyValue) )
    ( (This)->lpVtbl -> SetProperty(This,propertyId,pPropertyValue) )
    ( (This)->lpVtbl -> SetApplicationPoolCredentials(This,bstrUsername,bstrPassword) )
    ( (This)->lpVtbl -> Install(This) )
    ( (This)->lpVtbl -> UnInstall(This,pCAConfig,pAuthentication) )
typedef
enum __MIDL___MIDL_itf_casetup_0000_0005_0001
    {
        ENUM_CEPSETUPPROP_AUTHENTICATION = 0,
        ENUM_CEPSETUPPROP_SSLCERTHASH = 1,
        ENUM_CEPSETUPPROP_URL = 2,
        ENUM_CEPSETUPPROP_KEYBASED_RENEWAL = 3
    } CEPSetupProperty;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_ICertificateEnrollmentPolicyServerSetup;
    typedef struct ICertificateEnrollmentPolicyServerSetupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertificateEnrollmentPolicyServerSetup * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertificateEnrollmentPolicyServerSetup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertificateEnrollmentPolicyServerSetup * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertificateEnrollmentPolicyServerSetup * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertificateEnrollmentPolicyServerSetup * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertificateEnrollmentPolicyServerSetup * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertificateEnrollmentPolicyServerSetup * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ErrorString )(
            __RPC__in ICertificateEnrollmentPolicyServerSetup * This,
                                __RPC__deref_out_opt BSTR *pVal);
        HRESULT ( STDMETHODCALLTYPE *InitializeInstallDefaults )(
            __RPC__in ICertificateEnrollmentPolicyServerSetup * This);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            __RPC__in ICertificateEnrollmentPolicyServerSetup * This,
                       CEPSetupProperty propertyId,
                                __RPC__out VARIANT *pPropertyValue);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            __RPC__in ICertificateEnrollmentPolicyServerSetup * This,
                       CEPSetupProperty propertyId,
                       __RPC__in VARIANT *pPropertyValue);
        HRESULT ( STDMETHODCALLTYPE *Install )(
            __RPC__in ICertificateEnrollmentPolicyServerSetup * This);
        HRESULT ( STDMETHODCALLTYPE *UnInstall )(
            __RPC__in ICertificateEnrollmentPolicyServerSetup * This,
                                 __RPC__in VARIANT *pAuthKeyBasedRenewal);
        END_INTERFACE
    } ICertificateEnrollmentPolicyServerSetupVtbl;
    interface ICertificateEnrollmentPolicyServerSetup
    {
        CONST_VTBL struct ICertificateEnrollmentPolicyServerSetupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ErrorString(This,pVal) )
    ( (This)->lpVtbl -> InitializeInstallDefaults(This) )
    ( (This)->lpVtbl -> GetProperty(This,propertyId,pPropertyValue) )
    ( (This)->lpVtbl -> SetProperty(This,propertyId,pPropertyValue) )
    ( (This)->lpVtbl -> Install(This) )
    ( (This)->lpVtbl -> UnInstall(This,pAuthKeyBasedRenewal) )
EXTERN_C const IID LIBID_CertSrvSetupLib;
EXTERN_C const CLSID CLSID_CCertSrvSetupKeyInformation;
class DECLSPEC_UUID("38373906-5433-4633-b0fb-29b7e78262e1")
CCertSrvSetupKeyInformation;
EXTERN_C const CLSID CLSID_CCertSrvSetup;
class DECLSPEC_UUID("961f180f-f55c-413d-a9b3-7d2af4d8e42f")
CCertSrvSetup;
EXTERN_C const CLSID CLSID_CMSCEPSetup;
class DECLSPEC_UUID("aa4f5c02-8e7c-49c4-94fa-67a5cc5eadb4")
CMSCEPSetup;
EXTERN_C const CLSID CLSID_CCertificateEnrollmentServerSetup;
class DECLSPEC_UUID("9902F3BC-88AF-4cf8-AE62-7140531552B6")
CCertificateEnrollmentServerSetup;
EXTERN_C const CLSID CLSID_CCertificateEnrollmentPolicyServerSetup;
class DECLSPEC_UUID("AFE2FA32-41B1-459d-A5DE-49ADD8A72182")
CCertificateEnrollmentPolicyServerSetup;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_casetup_0000_0007_v0_0_s_ifspec;
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
