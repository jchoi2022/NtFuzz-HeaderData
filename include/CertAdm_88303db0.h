#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface ICertAdmin ICertAdmin;
typedef interface ICertAdmin2 ICertAdmin2;
typedef interface IOCSPProperty IOCSPProperty;
typedef interface IOCSPPropertyCollection IOCSPPropertyCollection;
typedef interface IOCSPCAConfiguration IOCSPCAConfiguration;
typedef interface IOCSPCAConfigurationCollection IOCSPCAConfigurationCollection;
typedef interface IOCSPAdmin IOCSPAdmin;
typedef class CCertAdmin CCertAdmin;
typedef class CCertView CCertView;
typedef class OCSPPropertyCollection OCSPPropertyCollection;
typedef class OCSPAdmin OCSPAdmin;
#include "wtypes.h"
#include "certview.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_certadm_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certadm_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_ICertAdmin;
    typedef struct ICertAdminVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertAdmin * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertAdmin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertAdmin * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertAdmin * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertAdmin * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertAdmin * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertAdmin * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *IsValidCertificate )(
            __RPC__in ICertAdmin * This,
                       __RPC__in const BSTR strConfig,
                       __RPC__in const BSTR strSerialNumber,
                                __RPC__out LONG *pDisposition);
        HRESULT ( STDMETHODCALLTYPE *GetRevocationReason )(
            __RPC__in ICertAdmin * This,
                                __RPC__out LONG *pReason);
        HRESULT ( STDMETHODCALLTYPE *RevokeCertificate )(
            __RPC__in ICertAdmin * This,
                       __RPC__in const BSTR strConfig,
                       __RPC__in const BSTR strSerialNumber,
                       LONG Reason,
                       DATE Date);
        HRESULT ( STDMETHODCALLTYPE *SetRequestAttributes )(
            __RPC__in ICertAdmin * This,
                       __RPC__in const BSTR strConfig,
                       LONG RequestId,
                       __RPC__in const BSTR strAttributes);
        HRESULT ( STDMETHODCALLTYPE *SetCertificateExtension )(
            __RPC__in ICertAdmin * This,
                       __RPC__in const BSTR strConfig,
                       LONG RequestId,
                       __RPC__in const BSTR strExtensionName,
                       LONG Type,
                       LONG Flags,
                       __RPC__in const VARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *DenyRequest )(
            __RPC__in ICertAdmin * This,
                       __RPC__in const BSTR strConfig,
                       LONG RequestId);
        HRESULT ( STDMETHODCALLTYPE *ResubmitRequest )(
            __RPC__in ICertAdmin * This,
                       __RPC__in const BSTR strConfig,
                       LONG RequestId,
                                __RPC__out LONG *pDisposition);
        HRESULT ( STDMETHODCALLTYPE *PublishCRL )(
            __RPC__in ICertAdmin * This,
                       __RPC__in const BSTR strConfig,
                       DATE Date);
        HRESULT ( STDMETHODCALLTYPE *GetCRL )(
            __RPC__in ICertAdmin * This,
                       __RPC__in const BSTR strConfig,
                       LONG Flags,
                                __RPC__deref_out_opt BSTR *pstrCRL);
        HRESULT ( STDMETHODCALLTYPE *ImportCertificate )(
            __RPC__in ICertAdmin * This,
                       __RPC__in const BSTR strConfig,
                       __RPC__in const BSTR strCertificate,
                       LONG Flags,
                                __RPC__out LONG *pRequestId);
        END_INTERFACE
    } ICertAdminVtbl;
    interface ICertAdmin
    {
        CONST_VTBL struct ICertAdminVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> IsValidCertificate(This,strConfig,strSerialNumber,pDisposition) )
    ( (This)->lpVtbl -> GetRevocationReason(This,pReason) )
    ( (This)->lpVtbl -> RevokeCertificate(This,strConfig,strSerialNumber,Reason,Date) )
    ( (This)->lpVtbl -> SetRequestAttributes(This,strConfig,RequestId,strAttributes) )
    ( (This)->lpVtbl -> SetCertificateExtension(This,strConfig,RequestId,strExtensionName,Type,Flags,pvarValue) )
    ( (This)->lpVtbl -> DenyRequest(This,strConfig,RequestId) )
    ( (This)->lpVtbl -> ResubmitRequest(This,strConfig,RequestId,pDisposition) )
    ( (This)->lpVtbl -> PublishCRL(This,strConfig,Date) )
    ( (This)->lpVtbl -> GetCRL(This,strConfig,Flags,pstrCRL) )
    ( (This)->lpVtbl -> ImportCertificate(This,strConfig,strCertificate,Flags,pRequestId) )
extern RPC_IF_HANDLE __MIDL_itf_certadm_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certadm_0000_0001_v0_0_s_ifspec;
EXTERN_C const IID IID_ICertAdmin2;
    typedef struct ICertAdmin2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ICertAdmin2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ICertAdmin2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in ICertAdmin2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in ICertAdmin2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ICertAdmin2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        HRESULT ( STDMETHODCALLTYPE *IsValidCertificate )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       __RPC__in const BSTR strSerialNumber,
                                __RPC__out LONG *pDisposition);
        HRESULT ( STDMETHODCALLTYPE *GetRevocationReason )(
            __RPC__in ICertAdmin2 * This,
                                __RPC__out LONG *pReason);
        HRESULT ( STDMETHODCALLTYPE *RevokeCertificate )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       __RPC__in const BSTR strSerialNumber,
                       LONG Reason,
                       DATE Date);
        HRESULT ( STDMETHODCALLTYPE *SetRequestAttributes )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       LONG RequestId,
                       __RPC__in const BSTR strAttributes);
        HRESULT ( STDMETHODCALLTYPE *SetCertificateExtension )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       LONG RequestId,
                       __RPC__in const BSTR strExtensionName,
                       LONG Type,
                       LONG Flags,
                       __RPC__in const VARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *DenyRequest )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       LONG RequestId);
        HRESULT ( STDMETHODCALLTYPE *ResubmitRequest )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       LONG RequestId,
                                __RPC__out LONG *pDisposition);
        HRESULT ( STDMETHODCALLTYPE *PublishCRL )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       DATE Date);
        HRESULT ( STDMETHODCALLTYPE *GetCRL )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       LONG Flags,
                                __RPC__deref_out_opt BSTR *pstrCRL);
        HRESULT ( STDMETHODCALLTYPE *ImportCertificate )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       __RPC__in const BSTR strCertificate,
                       LONG Flags,
                                __RPC__out LONG *pRequestId);
        HRESULT ( STDMETHODCALLTYPE *PublishCRLs )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       DATE Date,
                       LONG CRLFlags);
        HRESULT ( STDMETHODCALLTYPE *GetCAProperty )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       LONG PropId,
                       LONG PropIndex,
                       LONG PropType,
                       LONG Flags,
                                __RPC__out VARIANT *pvarPropertyValue);
        HRESULT ( STDMETHODCALLTYPE *SetCAProperty )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       LONG PropId,
                       LONG PropIndex,
                       LONG PropType,
                       __RPC__in VARIANT *pvarPropertyValue);
        HRESULT ( STDMETHODCALLTYPE *GetCAPropertyFlags )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       LONG PropId,
                                __RPC__out LONG *pPropFlags);
        HRESULT ( STDMETHODCALLTYPE *GetCAPropertyDisplayName )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       LONG PropId,
                                __RPC__deref_out_opt BSTR *pstrDisplayName);
        HRESULT ( STDMETHODCALLTYPE *GetArchivedKey )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       LONG RequestId,
                       LONG Flags,
                                __RPC__deref_out_opt BSTR *pstrArchivedKey);
        HRESULT ( STDMETHODCALLTYPE *GetConfigEntry )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       __RPC__in const BSTR strNodePath,
                       __RPC__in const BSTR strEntryName,
                                __RPC__out VARIANT *pvarEntry);
        HRESULT ( STDMETHODCALLTYPE *SetConfigEntry )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       __RPC__in const BSTR strNodePath,
                       __RPC__in const BSTR strEntryName,
                       __RPC__in VARIANT *pvarEntry);
        HRESULT ( STDMETHODCALLTYPE *ImportKey )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       LONG RequestId,
                       __RPC__in const BSTR strCertHash,
                       LONG Flags,
                       __RPC__in const BSTR strKey);
        HRESULT ( STDMETHODCALLTYPE *GetMyRoles )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                                __RPC__out LONG *pRoles);
        HRESULT ( STDMETHODCALLTYPE *DeleteRow )(
            __RPC__in ICertAdmin2 * This,
                       __RPC__in const BSTR strConfig,
                       LONG Flags,
                       DATE Date,
                       LONG Table,
                       LONG RowId,
                                __RPC__out LONG *pcDeleted);
        END_INTERFACE
    } ICertAdmin2Vtbl;
    interface ICertAdmin2
    {
        CONST_VTBL struct ICertAdmin2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> IsValidCertificate(This,strConfig,strSerialNumber,pDisposition) )
    ( (This)->lpVtbl -> GetRevocationReason(This,pReason) )
    ( (This)->lpVtbl -> RevokeCertificate(This,strConfig,strSerialNumber,Reason,Date) )
    ( (This)->lpVtbl -> SetRequestAttributes(This,strConfig,RequestId,strAttributes) )
    ( (This)->lpVtbl -> SetCertificateExtension(This,strConfig,RequestId,strExtensionName,Type,Flags,pvarValue) )
    ( (This)->lpVtbl -> DenyRequest(This,strConfig,RequestId) )
    ( (This)->lpVtbl -> ResubmitRequest(This,strConfig,RequestId,pDisposition) )
    ( (This)->lpVtbl -> PublishCRL(This,strConfig,Date) )
    ( (This)->lpVtbl -> GetCRL(This,strConfig,Flags,pstrCRL) )
    ( (This)->lpVtbl -> ImportCertificate(This,strConfig,strCertificate,Flags,pRequestId) )
    ( (This)->lpVtbl -> PublishCRLs(This,strConfig,Date,CRLFlags) )
    ( (This)->lpVtbl -> GetCAProperty(This,strConfig,PropId,PropIndex,PropType,Flags,pvarPropertyValue) )
    ( (This)->lpVtbl -> SetCAProperty(This,strConfig,PropId,PropIndex,PropType,pvarPropertyValue) )
    ( (This)->lpVtbl -> GetCAPropertyFlags(This,strConfig,PropId,pPropFlags) )
    ( (This)->lpVtbl -> GetCAPropertyDisplayName(This,strConfig,PropId,pstrDisplayName) )
    ( (This)->lpVtbl -> GetArchivedKey(This,strConfig,RequestId,Flags,pstrArchivedKey) )
    ( (This)->lpVtbl -> GetConfigEntry(This,strConfig,strNodePath,strEntryName,pvarEntry) )
    ( (This)->lpVtbl -> SetConfigEntry(This,strConfig,strNodePath,strEntryName,pvarEntry) )
    ( (This)->lpVtbl -> ImportKey(This,strConfig,RequestId,strCertHash,Flags,strKey) )
    ( (This)->lpVtbl -> GetMyRoles(This,strConfig,pRoles) )
    ( (This)->lpVtbl -> DeleteRow(This,strConfig,Flags,Date,Table,RowId,pcDeleted) )
EXTERN_C const IID IID_IOCSPProperty;
    typedef struct IOCSPPropertyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOCSPProperty * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOCSPProperty * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOCSPProperty * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IOCSPProperty * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IOCSPProperty * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IOCSPProperty * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IOCSPProperty * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Name )(
            __RPC__in IOCSPProperty * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Value )(
            __RPC__in IOCSPProperty * This,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_Value )(
            __RPC__in IOCSPProperty * This,
                       VARIANT newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modified )(
            __RPC__in IOCSPProperty * This,
                                __RPC__out VARIANT_BOOL *pVal);
        END_INTERFACE
    } IOCSPPropertyVtbl;
    interface IOCSPProperty
    {
        CONST_VTBL struct IOCSPPropertyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Name(This,pVal) )
    ( (This)->lpVtbl -> get_Value(This,pVal) )
    ( (This)->lpVtbl -> put_Value(This,newVal) )
    ( (This)->lpVtbl -> get_Modified(This,pVal) )
EXTERN_C const IID IID_IOCSPPropertyCollection;
    typedef struct IOCSPPropertyCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOCSPPropertyCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOCSPPropertyCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOCSPPropertyCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IOCSPPropertyCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IOCSPPropertyCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IOCSPPropertyCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IOCSPPropertyCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IOCSPPropertyCollection * This,
                                __RPC__deref_out_opt IUnknown **ppVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IOCSPPropertyCollection * This,
                       LONG Index,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IOCSPPropertyCollection * This,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ItemByName )(
            __RPC__in IOCSPPropertyCollection * This,
                       __RPC__in const BSTR bstrPropName,
                                __RPC__out VARIANT *pVal);
                               HRESULT ( STDMETHODCALLTYPE *CreateProperty )(
            __RPC__in IOCSPPropertyCollection * This,
                       __RPC__in const BSTR bstrPropName,
                       __RPC__in const VARIANT *pVarPropValue,
                                __RPC__deref_out_opt IOCSPProperty **ppVal);
                               HRESULT ( STDMETHODCALLTYPE *DeleteProperty )(
            __RPC__in IOCSPPropertyCollection * This,
                       __RPC__in const BSTR bstrPropName);
                               HRESULT ( STDMETHODCALLTYPE *InitializeFromProperties )(
            __RPC__in IOCSPPropertyCollection * This,
                       __RPC__in const VARIANT *pVarProperties);
                               HRESULT ( STDMETHODCALLTYPE *GetAllProperties )(
            __RPC__in IOCSPPropertyCollection * This,
                                __RPC__out VARIANT *pVarProperties);
        END_INTERFACE
    } IOCSPPropertyCollectionVtbl;
    interface IOCSPPropertyCollection
    {
        CONST_VTBL struct IOCSPPropertyCollectionVtbl *lpVtbl;
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
    ( (This)->lpVtbl -> get_ItemByName(This,bstrPropName,pVal) )
    ( (This)->lpVtbl -> CreateProperty(This,bstrPropName,pVarPropValue,ppVal) )
    ( (This)->lpVtbl -> DeleteProperty(This,bstrPropName) )
    ( (This)->lpVtbl -> InitializeFromProperties(This,pVarProperties) )
    ( (This)->lpVtbl -> GetAllProperties(This,pVarProperties) )
EXTERN_C const IID IID_IOCSPCAConfiguration;
    typedef struct IOCSPCAConfigurationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOCSPCAConfiguration * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOCSPCAConfiguration * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOCSPCAConfiguration * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IOCSPCAConfiguration * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IOCSPCAConfiguration * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IOCSPCAConfiguration * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IOCSPCAConfiguration * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_Identifier )(
            __RPC__in IOCSPCAConfiguration * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CACertificate )(
            __RPC__in IOCSPCAConfiguration * This,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_HashAlgorithm )(
            __RPC__in IOCSPCAConfiguration * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_HashAlgorithm )(
            __RPC__in IOCSPCAConfiguration * This,
                       __RPC__in const BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SigningFlags )(
            __RPC__in IOCSPCAConfiguration * This,
                                __RPC__out ULONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SigningFlags )(
            __RPC__in IOCSPCAConfiguration * This,
                       ULONG newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SigningCertificate )(
            __RPC__in IOCSPCAConfiguration * This,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SigningCertificate )(
            __RPC__in IOCSPCAConfiguration * This,
                       VARIANT newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ReminderDuration )(
            __RPC__in IOCSPCAConfiguration * This,
                                __RPC__out ULONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_ReminderDuration )(
            __RPC__in IOCSPCAConfiguration * This,
                       ULONG newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ErrorCode )(
            __RPC__in IOCSPCAConfiguration * This,
                                __RPC__out ULONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CSPName )(
            __RPC__in IOCSPCAConfiguration * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_KeySpec )(
            __RPC__in IOCSPCAConfiguration * This,
                                __RPC__out ULONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProviderCLSID )(
            __RPC__in IOCSPCAConfiguration * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_ProviderCLSID )(
            __RPC__in IOCSPCAConfiguration * This,
                       __RPC__in const BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ProviderProperties )(
            __RPC__in IOCSPCAConfiguration * This,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_ProviderProperties )(
            __RPC__in IOCSPCAConfiguration * This,
                       VARIANT newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Modified )(
            __RPC__in IOCSPCAConfiguration * This,
                                __RPC__out VARIANT_BOOL *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_LocalRevocationInformation )(
            __RPC__in IOCSPCAConfiguration * This,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_LocalRevocationInformation )(
            __RPC__in IOCSPCAConfiguration * This,
                       VARIANT newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_SigningCertificateTemplate )(
            __RPC__in IOCSPCAConfiguration * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_SigningCertificateTemplate )(
            __RPC__in IOCSPCAConfiguration * This,
                       __RPC__in const BSTR newVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_CAConfig )(
            __RPC__in IOCSPCAConfiguration * This,
                                __RPC__deref_out_opt BSTR *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *put_CAConfig )(
            __RPC__in IOCSPCAConfiguration * This,
                       __RPC__in const BSTR newVal);
        END_INTERFACE
    } IOCSPCAConfigurationVtbl;
    interface IOCSPCAConfiguration
    {
        CONST_VTBL struct IOCSPCAConfigurationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_Identifier(This,pVal) )
    ( (This)->lpVtbl -> get_CACertificate(This,pVal) )
    ( (This)->lpVtbl -> get_HashAlgorithm(This,pVal) )
    ( (This)->lpVtbl -> put_HashAlgorithm(This,newVal) )
    ( (This)->lpVtbl -> get_SigningFlags(This,pVal) )
    ( (This)->lpVtbl -> put_SigningFlags(This,newVal) )
    ( (This)->lpVtbl -> get_SigningCertificate(This,pVal) )
    ( (This)->lpVtbl -> put_SigningCertificate(This,newVal) )
    ( (This)->lpVtbl -> get_ReminderDuration(This,pVal) )
    ( (This)->lpVtbl -> put_ReminderDuration(This,newVal) )
    ( (This)->lpVtbl -> get_ErrorCode(This,pVal) )
    ( (This)->lpVtbl -> get_CSPName(This,pVal) )
    ( (This)->lpVtbl -> get_KeySpec(This,pVal) )
    ( (This)->lpVtbl -> get_ProviderCLSID(This,pVal) )
    ( (This)->lpVtbl -> put_ProviderCLSID(This,newVal) )
    ( (This)->lpVtbl -> get_ProviderProperties(This,pVal) )
    ( (This)->lpVtbl -> put_ProviderProperties(This,newVal) )
    ( (This)->lpVtbl -> get_Modified(This,pVal) )
    ( (This)->lpVtbl -> get_LocalRevocationInformation(This,pVal) )
    ( (This)->lpVtbl -> put_LocalRevocationInformation(This,newVal) )
    ( (This)->lpVtbl -> get_SigningCertificateTemplate(This,pVal) )
    ( (This)->lpVtbl -> put_SigningCertificateTemplate(This,newVal) )
    ( (This)->lpVtbl -> get_CAConfig(This,pVal) )
    ( (This)->lpVtbl -> put_CAConfig(This,newVal) )
EXTERN_C const IID IID_IOCSPCAConfigurationCollection;
    typedef struct IOCSPCAConfigurationCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOCSPCAConfigurationCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOCSPCAConfigurationCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOCSPCAConfigurationCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IOCSPCAConfigurationCollection * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IOCSPCAConfigurationCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IOCSPCAConfigurationCollection * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IOCSPCAConfigurationCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get__NewEnum )(
            __RPC__in IOCSPCAConfigurationCollection * This,
                                __RPC__deref_out_opt IUnknown **pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Item )(
            __RPC__in IOCSPCAConfigurationCollection * This,
                       LONG Index,
                                __RPC__out VARIANT *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_Count )(
            __RPC__in IOCSPCAConfigurationCollection * This,
                                __RPC__out LONG *pVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_ItemByName )(
            __RPC__in IOCSPCAConfigurationCollection * This,
                       __RPC__in const BSTR bstrIdentifier,
                                __RPC__out VARIANT *pVal);
                               HRESULT ( STDMETHODCALLTYPE *CreateCAConfiguration )(
            __RPC__in IOCSPCAConfigurationCollection * This,
                       __RPC__in const BSTR bstrIdentifier,
                       VARIANT varCACert,
                                __RPC__deref_out_opt IOCSPCAConfiguration **ppVal);
                               HRESULT ( STDMETHODCALLTYPE *DeleteCAConfiguration )(
            __RPC__in IOCSPCAConfigurationCollection * This,
                       __RPC__in const BSTR bstrIdentifier);
        END_INTERFACE
    } IOCSPCAConfigurationCollectionVtbl;
    interface IOCSPCAConfigurationCollection
    {
        CONST_VTBL struct IOCSPCAConfigurationCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get__NewEnum(This,pVal) )
    ( (This)->lpVtbl -> get_Item(This,Index,pVal) )
    ( (This)->lpVtbl -> get_Count(This,pVal) )
    ( (This)->lpVtbl -> get_ItemByName(This,bstrIdentifier,pVal) )
    ( (This)->lpVtbl -> CreateCAConfiguration(This,bstrIdentifier,varCACert,ppVal) )
    ( (This)->lpVtbl -> DeleteCAConfiguration(This,bstrIdentifier) )
EXTERN_C const IID IID_IOCSPAdmin;
    typedef struct IOCSPAdminVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOCSPAdmin * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOCSPAdmin * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOCSPAdmin * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IOCSPAdmin * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IOCSPAdmin * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IOCSPAdmin * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IOCSPAdmin * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_OCSPServiceProperties )(
            __RPC__in IOCSPAdmin * This,
                                __RPC__deref_out_opt IOCSPPropertyCollection **ppVal);
                                        HRESULT ( STDMETHODCALLTYPE *get_OCSPCAConfigurationCollection )(
            __RPC__in IOCSPAdmin * This,
                                __RPC__deref_out_opt IOCSPCAConfigurationCollection **pVal);
                               HRESULT ( STDMETHODCALLTYPE *GetConfiguration )(
            __RPC__in IOCSPAdmin * This,
                       __RPC__in const BSTR bstrServerName,
                       VARIANT_BOOL bForce);
                               HRESULT ( STDMETHODCALLTYPE *SetConfiguration )(
            __RPC__in IOCSPAdmin * This,
                       __RPC__in const BSTR bstrServerName,
                       VARIANT_BOOL bForce);
                               HRESULT ( STDMETHODCALLTYPE *GetMyRoles )(
            __RPC__in IOCSPAdmin * This,
                       __RPC__in const BSTR bstrServerName,
                                __RPC__out LONG *pRoles);
                               HRESULT ( STDMETHODCALLTYPE *Ping )(
            __RPC__in IOCSPAdmin * This,
                       __RPC__in const BSTR bstrServerName);
                               HRESULT ( STDMETHODCALLTYPE *SetSecurity )(
            __RPC__in IOCSPAdmin * This,
                       __RPC__in const BSTR bstrServerName,
                       __RPC__in const BSTR bstrVal);
                               HRESULT ( STDMETHODCALLTYPE *GetSecurity )(
            __RPC__in IOCSPAdmin * This,
                       __RPC__in const BSTR bstrServerName,
                                __RPC__deref_out_opt BSTR *pVal);
                               HRESULT ( STDMETHODCALLTYPE *GetSigningCertificates )(
            __RPC__in IOCSPAdmin * This,
                       __RPC__in const BSTR bstrServerName,
                       __RPC__in const VARIANT *pCACertVar,
                                __RPC__out VARIANT *pVal);
                               HRESULT ( STDMETHODCALLTYPE *GetHashAlgorithms )(
            __RPC__in IOCSPAdmin * This,
                       __RPC__in const BSTR bstrServerName,
                       __RPC__in const BSTR bstrCAId,
                                __RPC__out VARIANT *pVal);
        END_INTERFACE
    } IOCSPAdminVtbl;
    interface IOCSPAdmin
    {
        CONST_VTBL struct IOCSPAdminVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_OCSPServiceProperties(This,ppVal) )
    ( (This)->lpVtbl -> get_OCSPCAConfigurationCollection(This,pVal) )
    ( (This)->lpVtbl -> GetConfiguration(This,bstrServerName,bForce) )
    ( (This)->lpVtbl -> SetConfiguration(This,bstrServerName,bForce) )
    ( (This)->lpVtbl -> GetMyRoles(This,bstrServerName,pRoles) )
    ( (This)->lpVtbl -> Ping(This,bstrServerName) )
    ( (This)->lpVtbl -> SetSecurity(This,bstrServerName,bstrVal) )
    ( (This)->lpVtbl -> GetSecurity(This,bstrServerName,pVal) )
    ( (This)->lpVtbl -> GetSigningCertificates(This,bstrServerName,pCACertVar,pVal) )
    ( (This)->lpVtbl -> GetHashAlgorithms(This,bstrServerName,bstrCAId,pVal) )
enum OCSPSigningFlag
    {
        OCSP_SF_SILENT = 0x1,
        OCSP_SF_USE_CACERT = 0x2,
        OCSP_SF_ALLOW_SIGNINGCERT_AUTORENEWAL = 0x4,
        OCSP_SF_FORCE_SIGNINGCERT_ISSUER_ISCA = 0x8,
        OCSP_SF_AUTODISCOVER_SIGNINGCERT = 0x10,
        OCSP_SF_MANUAL_ASSIGN_SIGNINGCERT = 0x20,
        OCSP_SF_RESPONDER_ID_KEYHASH = 0x40,
        OCSP_SF_RESPONDER_ID_NAME = 0x80,
        OCSP_SF_ALLOW_NONCE_EXTENSION = 0x100,
        OCSP_SF_ALLOW_SIGNINGCERT_AUTOENROLLMENT = 0x200
    } ;
enum OCSPRequestFlag
    {
        OCSP_RF_REJECT_SIGNED_REQUESTS = 0x1
    } ;
EXTERN_C const IID LIBID_CERTADMINLib;
EXTERN_C const CLSID CLSID_CCertAdmin;
class DECLSPEC_UUID("37eabaf0-7fb6-11d0-8817-00a0c903b83c")
CCertAdmin;
EXTERN_C const CLSID CLSID_CCertView;
class DECLSPEC_UUID("a12d0f7a-1e84-11d1-9bd6-00c04fb683fa")
CCertView;
EXTERN_C const CLSID CLSID_OCSPPropertyCollection;
class DECLSPEC_UUID("F935A528-BA8A-4DD9-BA79-F283275CB2DE")
OCSPPropertyCollection;
EXTERN_C const CLSID CLSID_OCSPAdmin;
class DECLSPEC_UUID("D3F73511-92C9-47CB-8FF2-8D891A7C4DE4")
OCSPAdmin;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_certadm_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_certadm_0000_0008_v0_0_s_ifspec;
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
