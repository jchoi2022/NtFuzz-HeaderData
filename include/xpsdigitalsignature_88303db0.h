#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IXpsSigningOptions IXpsSigningOptions;
typedef interface IXpsSignatureCollection IXpsSignatureCollection;
typedef interface IXpsSignature IXpsSignature;
typedef interface IXpsSignatureBlockCollection IXpsSignatureBlockCollection;
typedef interface IXpsSignatureBlock IXpsSignatureBlock;
typedef interface IXpsSignatureRequestCollection IXpsSignatureRequestCollection;
typedef interface IXpsSignatureRequest IXpsSignatureRequest;
typedef interface IXpsSignatureManager IXpsSignatureManager;
typedef class XpsSignatureManager XpsSignatureManager;
#include "oaidl.h"
#include "wincrypt.h"
#include "msopc.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_xpsdigitalsignature_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsdigitalsignature_0000_0000_v0_0_s_ifspec;
typedef
enum __MIDL___MIDL_itf_xpsdigitalsignature_0000_0000_0001
    {
        XPS_SIGNATURE_STATUS_INCOMPLIANT = 1,
        XPS_SIGNATURE_STATUS_INCOMPLETE = 2,
        XPS_SIGNATURE_STATUS_BROKEN = 3,
        XPS_SIGNATURE_STATUS_QUESTIONABLE = 4,
        XPS_SIGNATURE_STATUS_VALID = 5
    } XPS_SIGNATURE_STATUS;
typedef
enum __MIDL___MIDL_itf_xpsdigitalsignature_0000_0000_0002
    {
        XPS_SIGN_POLICY_NONE = 0,
        XPS_SIGN_POLICY_CORE_PROPERTIES = 0x1,
        XPS_SIGN_POLICY_SIGNATURE_RELATIONSHIPS = 0x2,
        XPS_SIGN_POLICY_PRINT_TICKET = 0x4,
        XPS_SIGN_POLICY_DISCARD_CONTROL = 0x8,
        XPS_SIGN_POLICY_ALL = 0xf
    } XPS_SIGN_POLICY;
DEFINE_ENUM_FLAG_OPERATORS(XPS_SIGN_POLICY)
typedef
enum __MIDL___MIDL_itf_xpsdigitalsignature_0000_0000_0003
    {
        XPS_SIGN_FLAGS_NONE = 0,
        XPS_SIGN_FLAGS_IGNORE_MARKUP_COMPATIBILITY = 0x1
    } XPS_SIGN_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(XPS_SIGN_FLAGS)
EXTERN_C const IID LIBID_MSXPSSIG;
EXTERN_C const IID IID_IXpsSigningOptions;
    typedef struct IXpsSigningOptionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsSigningOptions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsSigningOptions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsSigningOptions * This);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureId )(
            __RPC__in IXpsSigningOptions * This,
                                        __RPC__deref_out_opt_string LPWSTR *signatureId);
        HRESULT ( STDMETHODCALLTYPE *SetSignatureId )(
            __RPC__in IXpsSigningOptions * This,
                               __RPC__in_string LPCWSTR signatureId);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureMethod )(
            __RPC__in IXpsSigningOptions * This,
                                        __RPC__deref_out_opt_string LPWSTR *signatureMethod);
        HRESULT ( STDMETHODCALLTYPE *SetSignatureMethod )(
            __RPC__in IXpsSigningOptions * This,
                               __RPC__in_string LPCWSTR signatureMethod);
        HRESULT ( STDMETHODCALLTYPE *GetDigestMethod )(
            __RPC__in IXpsSigningOptions * This,
                                        __RPC__deref_out_opt_string LPWSTR *digestMethod);
        HRESULT ( STDMETHODCALLTYPE *SetDigestMethod )(
            __RPC__in IXpsSigningOptions * This,
                               __RPC__in_string LPCWSTR digestMethod);
        HRESULT ( STDMETHODCALLTYPE *GetSignaturePartName )(
            __RPC__in IXpsSigningOptions * This,
                                __RPC__deref_out_opt IOpcPartUri **signaturePartName);
        HRESULT ( STDMETHODCALLTYPE *SetSignaturePartName )(
            __RPC__in IXpsSigningOptions * This,
                       __RPC__in_opt IOpcPartUri *signaturePartName);
        HRESULT ( STDMETHODCALLTYPE *GetPolicy )(
            __RPC__in IXpsSigningOptions * This,
                                __RPC__out XPS_SIGN_POLICY *policy);
        HRESULT ( STDMETHODCALLTYPE *SetPolicy )(
            __RPC__in IXpsSigningOptions * This,
                       XPS_SIGN_POLICY policy);
        HRESULT ( STDMETHODCALLTYPE *GetSigningTimeFormat )(
            __RPC__in IXpsSigningOptions * This,
                                __RPC__out OPC_SIGNATURE_TIME_FORMAT *timeFormat);
        HRESULT ( STDMETHODCALLTYPE *SetSigningTimeFormat )(
            __RPC__in IXpsSigningOptions * This,
                       OPC_SIGNATURE_TIME_FORMAT timeFormat);
        HRESULT ( STDMETHODCALLTYPE *GetCustomObjects )(
            __RPC__in IXpsSigningOptions * This,
                                __RPC__deref_out_opt IOpcSignatureCustomObjectSet **customObjectSet);
        HRESULT ( STDMETHODCALLTYPE *GetCustomReferences )(
            __RPC__in IXpsSigningOptions * This,
                                __RPC__deref_out_opt IOpcSignatureReferenceSet **customReferenceSet);
        HRESULT ( STDMETHODCALLTYPE *GetCertificateSet )(
            __RPC__in IXpsSigningOptions * This,
                                __RPC__deref_out_opt IOpcCertificateSet **certificateSet);
        HRESULT ( STDMETHODCALLTYPE *GetFlags )(
            __RPC__in IXpsSigningOptions * This,
                                __RPC__out XPS_SIGN_FLAGS *flags);
        HRESULT ( STDMETHODCALLTYPE *SetFlags )(
            __RPC__in IXpsSigningOptions * This,
                       XPS_SIGN_FLAGS flags);
        END_INTERFACE
    } IXpsSigningOptionsVtbl;
    interface IXpsSigningOptions
    {
        CONST_VTBL struct IXpsSigningOptionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSignatureId(This,signatureId) )
    ( (This)->lpVtbl -> SetSignatureId(This,signatureId) )
    ( (This)->lpVtbl -> GetSignatureMethod(This,signatureMethod) )
    ( (This)->lpVtbl -> SetSignatureMethod(This,signatureMethod) )
    ( (This)->lpVtbl -> GetDigestMethod(This,digestMethod) )
    ( (This)->lpVtbl -> SetDigestMethod(This,digestMethod) )
    ( (This)->lpVtbl -> GetSignaturePartName(This,signaturePartName) )
    ( (This)->lpVtbl -> SetSignaturePartName(This,signaturePartName) )
    ( (This)->lpVtbl -> GetPolicy(This,policy) )
    ( (This)->lpVtbl -> SetPolicy(This,policy) )
    ( (This)->lpVtbl -> GetSigningTimeFormat(This,timeFormat) )
    ( (This)->lpVtbl -> SetSigningTimeFormat(This,timeFormat) )
    ( (This)->lpVtbl -> GetCustomObjects(This,customObjectSet) )
    ( (This)->lpVtbl -> GetCustomReferences(This,customReferenceSet) )
    ( (This)->lpVtbl -> GetCertificateSet(This,certificateSet) )
    ( (This)->lpVtbl -> GetFlags(This,flags) )
    ( (This)->lpVtbl -> SetFlags(This,flags) )
EXTERN_C const IID IID_IXpsSignatureCollection;
    typedef struct IXpsSignatureCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsSignatureCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsSignatureCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsSignatureCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IXpsSignatureCollection * This,
                                __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IXpsSignatureCollection * This,
                       UINT32 index,
                                __RPC__deref_out_opt IXpsSignature **signature);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IXpsSignatureCollection * This,
            UINT32 index);
        END_INTERFACE
    } IXpsSignatureCollectionVtbl;
    interface IXpsSignatureCollection
    {
        CONST_VTBL struct IXpsSignatureCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetAt(This,index,signature) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
EXTERN_C const IID IID_IXpsSignature;
    typedef struct IXpsSignatureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXpsSignature * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXpsSignature * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXpsSignature * This);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureId )(
            IXpsSignature * This,
                                        LPWSTR *sigId);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureValue )(
            IXpsSignature * This,
                                          UINT8 **signatureHashValue,
                        UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetCertificateEnumerator )(
            IXpsSignature * This,
                                IOpcCertificateEnumerator **certificateEnumerator);
        HRESULT ( STDMETHODCALLTYPE *GetSigningTime )(
            IXpsSignature * This,
                                        LPWSTR *sigDateTimeString);
        HRESULT ( STDMETHODCALLTYPE *GetSigningTimeFormat )(
            IXpsSignature * This,
                                OPC_SIGNATURE_TIME_FORMAT *timeFormat);
        HRESULT ( STDMETHODCALLTYPE *GetSignaturePartName )(
            IXpsSignature * This,
                                IOpcPartUri **signaturePartName);
        HRESULT ( STDMETHODCALLTYPE *Verify )(
            IXpsSignature * This,
                       const CERT_CONTEXT *x509Certificate,
                                XPS_SIGNATURE_STATUS *sigStatus);
        HRESULT ( STDMETHODCALLTYPE *GetPolicy )(
            IXpsSignature * This,
                                XPS_SIGN_POLICY *policy);
        HRESULT ( STDMETHODCALLTYPE *GetCustomObjectEnumerator )(
            IXpsSignature * This,
                                IOpcSignatureCustomObjectEnumerator **customObjectEnumerator);
        HRESULT ( STDMETHODCALLTYPE *GetCustomReferenceEnumerator )(
            IXpsSignature * This,
                                IOpcSignatureReferenceEnumerator **customReferenceEnumerator);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureXml )(
            IXpsSignature * This,
                                          UINT8 **signatureXml,
                        UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *SetSignatureXml )(
            IXpsSignature * This,
                                const UINT8 *signatureXml,
                       UINT32 count);
        END_INTERFACE
    } IXpsSignatureVtbl;
    interface IXpsSignature
    {
        CONST_VTBL struct IXpsSignatureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSignatureId(This,sigId) )
    ( (This)->lpVtbl -> GetSignatureValue(This,signatureHashValue,count) )
    ( (This)->lpVtbl -> GetCertificateEnumerator(This,certificateEnumerator) )
    ( (This)->lpVtbl -> GetSigningTime(This,sigDateTimeString) )
    ( (This)->lpVtbl -> GetSigningTimeFormat(This,timeFormat) )
    ( (This)->lpVtbl -> GetSignaturePartName(This,signaturePartName) )
    ( (This)->lpVtbl -> Verify(This,x509Certificate,sigStatus) )
    ( (This)->lpVtbl -> GetPolicy(This,policy) )
    ( (This)->lpVtbl -> GetCustomObjectEnumerator(This,customObjectEnumerator) )
    ( (This)->lpVtbl -> GetCustomReferenceEnumerator(This,customReferenceEnumerator) )
    ( (This)->lpVtbl -> GetSignatureXml(This,signatureXml,count) )
    ( (This)->lpVtbl -> SetSignatureXml(This,signatureXml,count) )
EXTERN_C const IID IID_IXpsSignatureBlockCollection;
    typedef struct IXpsSignatureBlockCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsSignatureBlockCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsSignatureBlockCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsSignatureBlockCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IXpsSignatureBlockCollection * This,
                                __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IXpsSignatureBlockCollection * This,
                       UINT32 index,
                                __RPC__deref_out_opt IXpsSignatureBlock **signatureBlock);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IXpsSignatureBlockCollection * This,
            UINT32 index);
        END_INTERFACE
    } IXpsSignatureBlockCollectionVtbl;
    interface IXpsSignatureBlockCollection
    {
        CONST_VTBL struct IXpsSignatureBlockCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetAt(This,index,signatureBlock) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
EXTERN_C const IID IID_IXpsSignatureBlock;
    typedef struct IXpsSignatureBlockVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsSignatureBlock * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsSignatureBlock * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsSignatureBlock * This);
        HRESULT ( STDMETHODCALLTYPE *GetRequests )(
            __RPC__in IXpsSignatureBlock * This,
                                __RPC__deref_out_opt IXpsSignatureRequestCollection **requests);
        HRESULT ( STDMETHODCALLTYPE *GetPartName )(
            __RPC__in IXpsSignatureBlock * This,
                                __RPC__deref_out_opt IOpcPartUri **partName);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentIndex )(
            __RPC__in IXpsSignatureBlock * This,
                                __RPC__out UINT32 *fixedDocumentIndex);
        HRESULT ( STDMETHODCALLTYPE *GetDocumentName )(
            __RPC__in IXpsSignatureBlock * This,
                                __RPC__deref_out_opt IOpcPartUri **fixedDocumentName);
        HRESULT ( STDMETHODCALLTYPE *CreateRequest )(
            __RPC__in IXpsSignatureBlock * This,
                               __RPC__in_string LPCWSTR requestId,
                                __RPC__deref_out_opt IXpsSignatureRequest **signatureRequest);
        END_INTERFACE
    } IXpsSignatureBlockVtbl;
    interface IXpsSignatureBlock
    {
        CONST_VTBL struct IXpsSignatureBlockVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRequests(This,requests) )
    ( (This)->lpVtbl -> GetPartName(This,partName) )
    ( (This)->lpVtbl -> GetDocumentIndex(This,fixedDocumentIndex) )
    ( (This)->lpVtbl -> GetDocumentName(This,fixedDocumentName) )
    ( (This)->lpVtbl -> CreateRequest(This,requestId,signatureRequest) )
EXTERN_C const IID IID_IXpsSignatureRequestCollection;
    typedef struct IXpsSignatureRequestCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsSignatureRequestCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsSignatureRequestCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsSignatureRequestCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetCount )(
            __RPC__in IXpsSignatureRequestCollection * This,
                                __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetAt )(
            __RPC__in IXpsSignatureRequestCollection * This,
                       UINT32 index,
                                __RPC__deref_out_opt IXpsSignatureRequest **signatureRequest);
        HRESULT ( STDMETHODCALLTYPE *RemoveAt )(
            __RPC__in IXpsSignatureRequestCollection * This,
                       UINT32 index);
        END_INTERFACE
    } IXpsSignatureRequestCollectionVtbl;
    interface IXpsSignatureRequestCollection
    {
        CONST_VTBL struct IXpsSignatureRequestCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,count) )
    ( (This)->lpVtbl -> GetAt(This,index,signatureRequest) )
    ( (This)->lpVtbl -> RemoveAt(This,index) )
EXTERN_C const IID IID_IXpsSignatureRequest;
    typedef struct IXpsSignatureRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXpsSignatureRequest * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXpsSignatureRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXpsSignatureRequest * This);
        HRESULT ( STDMETHODCALLTYPE *GetIntent )(
            __RPC__in IXpsSignatureRequest * This,
                                        __RPC__deref_out_opt_string LPWSTR *intent);
        HRESULT ( STDMETHODCALLTYPE *SetIntent )(
            __RPC__in IXpsSignatureRequest * This,
                               __RPC__in_string LPCWSTR intent);
        HRESULT ( STDMETHODCALLTYPE *GetRequestedSigner )(
            __RPC__in IXpsSignatureRequest * This,
                                        __RPC__deref_out_opt_string LPWSTR *signerName);
        HRESULT ( STDMETHODCALLTYPE *SetRequestedSigner )(
            __RPC__in IXpsSignatureRequest * This,
                               __RPC__in_string LPCWSTR signerName);
        HRESULT ( STDMETHODCALLTYPE *GetRequestSignByDate )(
            __RPC__in IXpsSignatureRequest * This,
                                        __RPC__deref_out_opt_string LPWSTR *dateString);
        HRESULT ( STDMETHODCALLTYPE *SetRequestSignByDate )(
            __RPC__in IXpsSignatureRequest * This,
                               __RPC__in_string LPCWSTR dateString);
        HRESULT ( STDMETHODCALLTYPE *GetSigningLocale )(
            __RPC__in IXpsSignatureRequest * This,
                                        __RPC__deref_out_opt_string LPWSTR *place);
        HRESULT ( STDMETHODCALLTYPE *SetSigningLocale )(
            __RPC__in IXpsSignatureRequest * This,
                               __RPC__in_string LPCWSTR place);
        HRESULT ( STDMETHODCALLTYPE *GetSpotLocation )(
            __RPC__in IXpsSignatureRequest * This,
                        __RPC__out INT32 *pageIndex,
                        __RPC__deref_out_opt IOpcPartUri **pagePartName,
                        __RPC__out float *x,
                        __RPC__out float *y);
        HRESULT ( STDMETHODCALLTYPE *SetSpotLocation )(
            __RPC__in IXpsSignatureRequest * This,
                       INT32 pageIndex,
                       float x,
                       float y);
        HRESULT ( STDMETHODCALLTYPE *GetRequestId )(
            __RPC__in IXpsSignatureRequest * This,
                                        __RPC__deref_out_opt_string LPWSTR *requestId);
        HRESULT ( STDMETHODCALLTYPE *GetSignature )(
            __RPC__in IXpsSignatureRequest * This,
                                __RPC__deref_out_opt IXpsSignature **signature);
        END_INTERFACE
    } IXpsSignatureRequestVtbl;
    interface IXpsSignatureRequest
    {
        CONST_VTBL struct IXpsSignatureRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetIntent(This,intent) )
    ( (This)->lpVtbl -> SetIntent(This,intent) )
    ( (This)->lpVtbl -> GetRequestedSigner(This,signerName) )
    ( (This)->lpVtbl -> SetRequestedSigner(This,signerName) )
    ( (This)->lpVtbl -> GetRequestSignByDate(This,dateString) )
    ( (This)->lpVtbl -> SetRequestSignByDate(This,dateString) )
    ( (This)->lpVtbl -> GetSigningLocale(This,place) )
    ( (This)->lpVtbl -> SetSigningLocale(This,place) )
    ( (This)->lpVtbl -> GetSpotLocation(This,pageIndex,pagePartName,x,y) )
    ( (This)->lpVtbl -> SetSpotLocation(This,pageIndex,x,y) )
    ( (This)->lpVtbl -> GetRequestId(This,requestId) )
    ( (This)->lpVtbl -> GetSignature(This,signature) )
EXTERN_C const IID IID_IXpsSignatureManager;
    typedef struct IXpsSignatureManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXpsSignatureManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXpsSignatureManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXpsSignatureManager * This);
        HRESULT ( STDMETHODCALLTYPE *LoadPackageFile )(
            IXpsSignatureManager * This,
                               LPCWSTR fileName);
        HRESULT ( STDMETHODCALLTYPE *LoadPackageStream )(
            IXpsSignatureManager * This,
                       IStream *stream);
        HRESULT ( STDMETHODCALLTYPE *Sign )(
            IXpsSignatureManager * This,
                       IXpsSigningOptions *signOptions,
                       const CERT_CONTEXT *x509Certificate,
                                IXpsSignature **signature);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureOriginPartName )(
            IXpsSignatureManager * This,
                                IOpcPartUri **signatureOriginPartName);
        HRESULT ( STDMETHODCALLTYPE *SetSignatureOriginPartName )(
            IXpsSignatureManager * This,
                       IOpcPartUri *signatureOriginPartName);
        HRESULT ( STDMETHODCALLTYPE *GetSignatures )(
            IXpsSignatureManager * This,
                                IXpsSignatureCollection **signatures);
        HRESULT ( STDMETHODCALLTYPE *AddSignatureBlock )(
            IXpsSignatureManager * This,
                       IOpcPartUri *partName,
                       UINT32 fixedDocumentIndex,
                                IXpsSignatureBlock **signatureBlock);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureBlocks )(
            IXpsSignatureManager * This,
                                IXpsSignatureBlockCollection **signatureBlocks);
        HRESULT ( STDMETHODCALLTYPE *CreateSigningOptions )(
            IXpsSignatureManager * This,
                                IXpsSigningOptions **signingOptions);
        HRESULT ( STDMETHODCALLTYPE *SavePackageToFile )(
            IXpsSignatureManager * This,
                               LPCWSTR fileName,
                               LPSECURITY_ATTRIBUTES securityAttributes,
                       DWORD flagsAndAttributes);
        HRESULT ( STDMETHODCALLTYPE *SavePackageToStream )(
            IXpsSignatureManager * This,
                       IStream *stream);
        END_INTERFACE
    } IXpsSignatureManagerVtbl;
    interface IXpsSignatureManager
    {
        CONST_VTBL struct IXpsSignatureManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> LoadPackageFile(This,fileName) )
    ( (This)->lpVtbl -> LoadPackageStream(This,stream) )
    ( (This)->lpVtbl -> Sign(This,signOptions,x509Certificate,signature) )
    ( (This)->lpVtbl -> GetSignatureOriginPartName(This,signatureOriginPartName) )
    ( (This)->lpVtbl -> SetSignatureOriginPartName(This,signatureOriginPartName) )
    ( (This)->lpVtbl -> GetSignatures(This,signatures) )
    ( (This)->lpVtbl -> AddSignatureBlock(This,partName,fixedDocumentIndex,signatureBlock) )
    ( (This)->lpVtbl -> GetSignatureBlocks(This,signatureBlocks) )
    ( (This)->lpVtbl -> CreateSigningOptions(This,signingOptions) )
    ( (This)->lpVtbl -> SavePackageToFile(This,fileName,securityAttributes,flagsAndAttributes) )
    ( (This)->lpVtbl -> SavePackageToStream(This,stream) )
EXTERN_C const CLSID CLSID_XpsSignatureManager;
class DECLSPEC_UUID("b0c43320-2315-44a2-b70a-0943a140a8ee")
XpsSignatureManager;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_xpsdigitalsignature_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xpsdigitalsignature_0000_0001_v0_0_s_ifspec;
}
