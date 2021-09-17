#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWscProduct IWscProduct;
typedef interface IWscProduct2 IWscProduct2;
typedef interface IWscProduct3 IWscProduct3;
typedef interface IWSCProductList IWSCProductList;
typedef interface IWSCDefaultProduct IWSCDefaultProduct;
typedef class WSCProductList WSCProductList;
typedef class WSCDefaultProduct WSCDefaultProduct;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum WSC_SECURITY_PRODUCT_SUBSTATUS
    {
        WSC_SECURITY_PRODUCT_SUBSTATUS_NOT_SET = 0,
        WSC_SECURITY_PRODUCT_SUBSTATUS_NO_ACTION = 1,
        WSC_SECURITY_PRODUCT_SUBSTATUS_ACTION_RECOMMENDED = 2,
        WSC_SECURITY_PRODUCT_SUBSTATUS_ACTION_NEEDED = 3
    } WSC_SECURITY_PRODUCT_SUBSTATUS;
typedef
enum WSC_SECURITY_PRODUCT_STATE
    {
        WSC_SECURITY_PRODUCT_STATE_ON = 0,
        WSC_SECURITY_PRODUCT_STATE_OFF = 1,
        WSC_SECURITY_PRODUCT_STATE_SNOOZED = 2,
        WSC_SECURITY_PRODUCT_STATE_EXPIRED = 3
    } WSC_SECURITY_PRODUCT_STATE;
typedef
enum _SECURITY_PRODUCT_TYPE
    {
        SECURITY_PRODUCT_TYPE_ANTIVIRUS = 0,
        SECURITY_PRODUCT_TYPE_FIREWALL = 1,
        SECURITY_PRODUCT_TYPE_ANTISPYWARE = 2
    } SECURITY_PRODUCT_TYPE;
typedef
enum _WSC_SECURITY_SIGNATURE_STATUS
    {
        WSC_SECURITY_PRODUCT_OUT_OF_DATE = 0,
        WSC_SECURITY_PRODUCT_UP_TO_DATE = 1
    } WSC_SECURITY_SIGNATURE_STATUS;
extern RPC_IF_HANDLE __MIDL_itf_iwscapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iwscapi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWscProduct;
    typedef struct IWscProductVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWscProduct * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWscProduct * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWscProduct * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWscProduct * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWscProduct * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWscProduct * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWscProduct * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProductName )(
            __RPC__in IWscProduct * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProductState )(
            __RPC__in IWscProduct * This,
                                __RPC__out WSC_SECURITY_PRODUCT_STATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SignatureStatus )(
            __RPC__in IWscProduct * This,
                                __RPC__out WSC_SECURITY_SIGNATURE_STATUS *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RemediationPath )(
            __RPC__in IWscProduct * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProductStateTimestamp )(
            __RPC__in IWscProduct * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProductGuid )(
            __RPC__in IWscProduct * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProductIsDefault )(
            __RPC__in IWscProduct * This,
                                __RPC__out BOOL *pVal);
        END_INTERFACE
    } IWscProductVtbl;
    interface IWscProduct
    {
        CONST_VTBL struct IWscProductVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ProductName(This,pVal) )
    ( (This)->lpVtbl -> get_ProductState(This,pVal) )
    ( (This)->lpVtbl -> get_SignatureStatus(This,pVal) )
    ( (This)->lpVtbl -> get_RemediationPath(This,pVal) )
    ( (This)->lpVtbl -> get_ProductStateTimestamp(This,pVal) )
    ( (This)->lpVtbl -> get_ProductGuid(This,pVal) )
    ( (This)->lpVtbl -> get_ProductIsDefault(This,pVal) )
EXTERN_C const IID IID_IWscProduct2;
    typedef struct IWscProduct2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWscProduct2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWscProduct2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWscProduct2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWscProduct2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWscProduct2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWscProduct2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWscProduct2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProductName )(
            __RPC__in IWscProduct2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProductState )(
            __RPC__in IWscProduct2 * This,
                                __RPC__out WSC_SECURITY_PRODUCT_STATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SignatureStatus )(
            __RPC__in IWscProduct2 * This,
                                __RPC__out WSC_SECURITY_SIGNATURE_STATUS *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RemediationPath )(
            __RPC__in IWscProduct2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProductStateTimestamp )(
            __RPC__in IWscProduct2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProductGuid )(
            __RPC__in IWscProduct2 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProductIsDefault )(
            __RPC__in IWscProduct2 * This,
                                __RPC__out BOOL *pVal);
                            HRESULT ( STDMETHODCALLTYPE *get_AntivirusScanSubstatus )(
            __RPC__in IWscProduct2 * This,
                                __RPC__out WSC_SECURITY_PRODUCT_SUBSTATUS *peStatus);
                            HRESULT ( STDMETHODCALLTYPE *get_AntivirusSettingsSubstatus )(
            __RPC__in IWscProduct2 * This,
                                __RPC__out WSC_SECURITY_PRODUCT_SUBSTATUS *peStatus);
                            HRESULT ( STDMETHODCALLTYPE *get_AntivirusProtectionUpdateSubstatus )(
            __RPC__in IWscProduct2 * This,
                                __RPC__out WSC_SECURITY_PRODUCT_SUBSTATUS *peStatus);
                            HRESULT ( STDMETHODCALLTYPE *get_FirewallDomainProfileSubstatus )(
            __RPC__in IWscProduct2 * This,
                                __RPC__out WSC_SECURITY_PRODUCT_SUBSTATUS *peStatus);
                            HRESULT ( STDMETHODCALLTYPE *get_FirewallPrivateProfileSubstatus )(
            __RPC__in IWscProduct2 * This,
                                __RPC__out WSC_SECURITY_PRODUCT_SUBSTATUS *peStatus);
                            HRESULT ( STDMETHODCALLTYPE *get_FirewallPublicProfileSubstatus )(
            __RPC__in IWscProduct2 * This,
                                __RPC__out WSC_SECURITY_PRODUCT_SUBSTATUS *peStatus);
        END_INTERFACE
    } IWscProduct2Vtbl;
    interface IWscProduct2
    {
        CONST_VTBL struct IWscProduct2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ProductName(This,pVal) )
    ( (This)->lpVtbl -> get_ProductState(This,pVal) )
    ( (This)->lpVtbl -> get_SignatureStatus(This,pVal) )
    ( (This)->lpVtbl -> get_RemediationPath(This,pVal) )
    ( (This)->lpVtbl -> get_ProductStateTimestamp(This,pVal) )
    ( (This)->lpVtbl -> get_ProductGuid(This,pVal) )
    ( (This)->lpVtbl -> get_ProductIsDefault(This,pVal) )
    ( (This)->lpVtbl -> get_AntivirusScanSubstatus(This,peStatus) )
    ( (This)->lpVtbl -> get_AntivirusSettingsSubstatus(This,peStatus) )
    ( (This)->lpVtbl -> get_AntivirusProtectionUpdateSubstatus(This,peStatus) )
    ( (This)->lpVtbl -> get_FirewallDomainProfileSubstatus(This,peStatus) )
    ( (This)->lpVtbl -> get_FirewallPrivateProfileSubstatus(This,peStatus) )
    ( (This)->lpVtbl -> get_FirewallPublicProfileSubstatus(This,peStatus) )
EXTERN_C const IID IID_IWscProduct3;
    typedef struct IWscProduct3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWscProduct3 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWscProduct3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWscProduct3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWscProduct3 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWscProduct3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWscProduct3 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWscProduct3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProductName )(
            __RPC__in IWscProduct3 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProductState )(
            __RPC__in IWscProduct3 * This,
                                __RPC__out WSC_SECURITY_PRODUCT_STATE *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SignatureStatus )(
            __RPC__in IWscProduct3 * This,
                                __RPC__out WSC_SECURITY_SIGNATURE_STATUS *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_RemediationPath )(
            __RPC__in IWscProduct3 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProductStateTimestamp )(
            __RPC__in IWscProduct3 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProductGuid )(
            __RPC__in IWscProduct3 * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProductIsDefault )(
            __RPC__in IWscProduct3 * This,
                                __RPC__out BOOL *pVal);
                            HRESULT ( STDMETHODCALLTYPE *get_AntivirusScanSubstatus )(
            __RPC__in IWscProduct3 * This,
                                __RPC__out WSC_SECURITY_PRODUCT_SUBSTATUS *peStatus);
                            HRESULT ( STDMETHODCALLTYPE *get_AntivirusSettingsSubstatus )(
            __RPC__in IWscProduct3 * This,
                                __RPC__out WSC_SECURITY_PRODUCT_SUBSTATUS *peStatus);
                            HRESULT ( STDMETHODCALLTYPE *get_AntivirusProtectionUpdateSubstatus )(
            __RPC__in IWscProduct3 * This,
                                __RPC__out WSC_SECURITY_PRODUCT_SUBSTATUS *peStatus);
                            HRESULT ( STDMETHODCALLTYPE *get_FirewallDomainProfileSubstatus )(
            __RPC__in IWscProduct3 * This,
                                __RPC__out WSC_SECURITY_PRODUCT_SUBSTATUS *peStatus);
                            HRESULT ( STDMETHODCALLTYPE *get_FirewallPrivateProfileSubstatus )(
            __RPC__in IWscProduct3 * This,
                                __RPC__out WSC_SECURITY_PRODUCT_SUBSTATUS *peStatus);
                            HRESULT ( STDMETHODCALLTYPE *get_FirewallPublicProfileSubstatus )(
            __RPC__in IWscProduct3 * This,
                                __RPC__out WSC_SECURITY_PRODUCT_SUBSTATUS *peStatus);
                            HRESULT ( STDMETHODCALLTYPE *get_AntivirusDaysUntilExpired )(
            __RPC__in IWscProduct3 * This,
                                __RPC__out DWORD *pdwDays);
        END_INTERFACE
    } IWscProduct3Vtbl;
    interface IWscProduct3
    {
        CONST_VTBL struct IWscProduct3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_ProductName(This,pVal) )
    ( (This)->lpVtbl -> get_ProductState(This,pVal) )
    ( (This)->lpVtbl -> get_SignatureStatus(This,pVal) )
    ( (This)->lpVtbl -> get_RemediationPath(This,pVal) )
    ( (This)->lpVtbl -> get_ProductStateTimestamp(This,pVal) )
    ( (This)->lpVtbl -> get_ProductGuid(This,pVal) )
    ( (This)->lpVtbl -> get_ProductIsDefault(This,pVal) )
    ( (This)->lpVtbl -> get_AntivirusScanSubstatus(This,peStatus) )
    ( (This)->lpVtbl -> get_AntivirusSettingsSubstatus(This,peStatus) )
    ( (This)->lpVtbl -> get_AntivirusProtectionUpdateSubstatus(This,peStatus) )
    ( (This)->lpVtbl -> get_FirewallDomainProfileSubstatus(This,peStatus) )
    ( (This)->lpVtbl -> get_FirewallPrivateProfileSubstatus(This,peStatus) )
    ( (This)->lpVtbl -> get_FirewallPublicProfileSubstatus(This,peStatus) )
    ( (This)->lpVtbl -> get_AntivirusDaysUntilExpired(This,pdwDays) )
EXTERN_C const IID IID_IWSCProductList;
    typedef struct IWSCProductListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWSCProductList * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWSCProductList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWSCProductList * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWSCProductList * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWSCProductList * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWSCProductList * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWSCProductList * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IWSCProductList * This,
                       ULONG provider);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IWSCProductList * This,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IWSCProductList * This,
                       ULONG index,
                                __RPC__deref_out_opt IWscProduct **pVal);
        END_INTERFACE
    } IWSCProductListVtbl;
    interface IWSCProductList
    {
        CONST_VTBL struct IWSCProductListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> Initialize(This,provider) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get_Item(This,index,pVal) )
EXTERN_C const IID IID_IWSCDefaultProduct;
    typedef struct IWSCDefaultProductVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IWSCDefaultProduct * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IWSCDefaultProduct * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IWSCDefaultProduct * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IWSCDefaultProduct * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IWSCDefaultProduct * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IWSCDefaultProduct * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IWSCDefaultProduct * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *SetDefaultProduct )(
            __RPC__in IWSCDefaultProduct * This,
                       SECURITY_PRODUCT_TYPE eType,
                       __RPC__in BSTR pGuid);
        END_INTERFACE
    } IWSCDefaultProductVtbl;
    interface IWSCDefaultProduct
    {
        CONST_VTBL struct IWSCDefaultProductVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> SetDefaultProduct(This,eType,pGuid) )
EXTERN_C const IID LIBID_wscAPILib;
EXTERN_C const CLSID CLSID_WSCProductList;
class DECLSPEC_UUID("17072F7B-9ABE-4A74-A261-1EB76B55107A")
WSCProductList;
EXTERN_C const CLSID CLSID_WSCDefaultProduct;
class DECLSPEC_UUID("2981a36e-f22d-11e5-9ce9-5e5517507c66")
WSCDefaultProduct;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_iwscapi_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_iwscapi_0000_0006_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
}
