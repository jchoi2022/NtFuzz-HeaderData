#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IOpcUri IOpcUri;
typedef interface IOpcPartUri IOpcPartUri;
typedef interface IOpcPackage IOpcPackage;
typedef interface IOpcPart IOpcPart;
typedef interface IOpcRelationship IOpcRelationship;
typedef interface IOpcPartSet IOpcPartSet;
typedef interface IOpcRelationshipSet IOpcRelationshipSet;
typedef interface IOpcPartEnumerator IOpcPartEnumerator;
typedef interface IOpcRelationshipEnumerator IOpcRelationshipEnumerator;
typedef interface IOpcSignaturePartReference IOpcSignaturePartReference;
typedef interface IOpcSignatureRelationshipReference IOpcSignatureRelationshipReference;
typedef interface IOpcRelationshipSelector IOpcRelationshipSelector;
typedef interface IOpcSignatureReference IOpcSignatureReference;
typedef interface IOpcSignatureCustomObject IOpcSignatureCustomObject;
typedef interface IOpcDigitalSignature IOpcDigitalSignature;
typedef interface IOpcSigningOptions IOpcSigningOptions;
typedef interface IOpcDigitalSignatureManager IOpcDigitalSignatureManager;
typedef interface IOpcSignaturePartReferenceEnumerator IOpcSignaturePartReferenceEnumerator;
typedef interface IOpcSignatureRelationshipReferenceEnumerator IOpcSignatureRelationshipReferenceEnumerator;
typedef interface IOpcRelationshipSelectorEnumerator IOpcRelationshipSelectorEnumerator;
typedef interface IOpcSignatureReferenceEnumerator IOpcSignatureReferenceEnumerator;
typedef interface IOpcSignatureCustomObjectEnumerator IOpcSignatureCustomObjectEnumerator;
typedef interface IOpcCertificateEnumerator IOpcCertificateEnumerator;
typedef interface IOpcDigitalSignatureEnumerator IOpcDigitalSignatureEnumerator;
typedef interface IOpcSignaturePartReferenceSet IOpcSignaturePartReferenceSet;
typedef interface IOpcSignatureRelationshipReferenceSet IOpcSignatureRelationshipReferenceSet;
typedef interface IOpcRelationshipSelectorSet IOpcRelationshipSelectorSet;
typedef interface IOpcSignatureReferenceSet IOpcSignatureReferenceSet;
typedef interface IOpcSignatureCustomObjectSet IOpcSignatureCustomObjectSet;
typedef interface IOpcCertificateSet IOpcCertificateSet;
typedef interface IOpcFactory IOpcFactory;
typedef class OpcFactory OpcFactory;
#include "oaidl.h"
#include "ocidl.h"
#include "wincrypt.h"
extern "C"{
#include <winapifamily.h>
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_msopc_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msopc_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IOpcUri;
    typedef struct IOpcUriVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcUri * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcUri * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcUri * This);
                           HRESULT ( STDMETHODCALLTYPE *GetPropertyBSTR )(
            __RPC__in IOpcUri * This,
                              Uri_PROPERTY uriProp,
                        __RPC__deref_out_opt BSTR *pbstrProperty,
                       DWORD dwFlags);
                           HRESULT ( STDMETHODCALLTYPE *GetPropertyLength )(
            __RPC__in IOpcUri * This,
                              Uri_PROPERTY uriProp,
                        __RPC__out DWORD *pcchProperty,
                       DWORD dwFlags);
                           HRESULT ( STDMETHODCALLTYPE *GetPropertyDWORD )(
            __RPC__in IOpcUri * This,
                              Uri_PROPERTY uriProp,
                        __RPC__out DWORD *pdwProperty,
                       DWORD dwFlags);
                           HRESULT ( STDMETHODCALLTYPE *HasProperty )(
            __RPC__in IOpcUri * This,
                              Uri_PROPERTY uriProp,
                        __RPC__out BOOL *pfHasProperty);
                           HRESULT ( STDMETHODCALLTYPE *GetAbsoluteUri )(
            __RPC__in IOpcUri * This,
                        __RPC__deref_out_opt BSTR *pbstrAbsoluteUri);
                           HRESULT ( STDMETHODCALLTYPE *GetAuthority )(
            __RPC__in IOpcUri * This,
                        __RPC__deref_out_opt BSTR *pbstrAuthority);
                           HRESULT ( STDMETHODCALLTYPE *GetDisplayUri )(
            __RPC__in IOpcUri * This,
                        __RPC__deref_out_opt BSTR *pbstrDisplayString);
                           HRESULT ( STDMETHODCALLTYPE *GetDomain )(
            __RPC__in IOpcUri * This,
                        __RPC__deref_out_opt BSTR *pbstrDomain);
                           HRESULT ( STDMETHODCALLTYPE *GetExtension )(
            __RPC__in IOpcUri * This,
                        __RPC__deref_out_opt BSTR *pbstrExtension);
                           HRESULT ( STDMETHODCALLTYPE *GetFragment )(
            __RPC__in IOpcUri * This,
                        __RPC__deref_out_opt BSTR *pbstrFragment);
                           HRESULT ( STDMETHODCALLTYPE *GetHost )(
            __RPC__in IOpcUri * This,
                        __RPC__deref_out_opt BSTR *pbstrHost);
                           HRESULT ( STDMETHODCALLTYPE *GetPassword )(
            __RPC__in IOpcUri * This,
                        __RPC__deref_out_opt BSTR *pbstrPassword);
                           HRESULT ( STDMETHODCALLTYPE *GetPath )(
            __RPC__in IOpcUri * This,
                        __RPC__deref_out_opt BSTR *pbstrPath);
                           HRESULT ( STDMETHODCALLTYPE *GetPathAndQuery )(
            __RPC__in IOpcUri * This,
                        __RPC__deref_out_opt BSTR *pbstrPathAndQuery);
                           HRESULT ( STDMETHODCALLTYPE *GetQuery )(
            __RPC__in IOpcUri * This,
                        __RPC__deref_out_opt BSTR *pbstrQuery);
                           HRESULT ( STDMETHODCALLTYPE *GetRawUri )(
            __RPC__in IOpcUri * This,
                        __RPC__deref_out_opt BSTR *pbstrRawUri);
                           HRESULT ( STDMETHODCALLTYPE *GetSchemeName )(
            __RPC__in IOpcUri * This,
                        __RPC__deref_out_opt BSTR *pbstrSchemeName);
                           HRESULT ( STDMETHODCALLTYPE *GetUserInfo )(
            __RPC__in IOpcUri * This,
                        __RPC__deref_out_opt BSTR *pbstrUserInfo);
                           HRESULT ( STDMETHODCALLTYPE *GetUserName )(
            __RPC__in IOpcUri * This,
                        __RPC__deref_out_opt BSTR *pbstrUserName);
                           HRESULT ( STDMETHODCALLTYPE *GetHostType )(
            __RPC__in IOpcUri * This,
                        __RPC__out DWORD *pdwHostType);
                           HRESULT ( STDMETHODCALLTYPE *GetPort )(
            __RPC__in IOpcUri * This,
                        __RPC__out DWORD *pdwPort);
                           HRESULT ( STDMETHODCALLTYPE *GetScheme )(
            __RPC__in IOpcUri * This,
                        __RPC__out DWORD *pdwScheme);
                           HRESULT ( STDMETHODCALLTYPE *GetZone )(
            __RPC__in IOpcUri * This,
                        __RPC__out DWORD *pdwZone);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IOpcUri * This,
                        __RPC__out LPDWORD pdwFlags);
                           HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            __RPC__in IOpcUri * This,
                       __RPC__in_opt IUri *pUri,
                        __RPC__out BOOL *pfEqual);
        HRESULT ( STDMETHODCALLTYPE *GetRelationshipsPartUri )(
            __RPC__in IOpcUri * This,
                                __RPC__deref_out_opt IOpcPartUri **relationshipPartUri);
        HRESULT ( STDMETHODCALLTYPE *GetRelativeUri )(
            __RPC__in IOpcUri * This,
                       __RPC__in_opt IOpcPartUri *targetPartUri,
                                __RPC__deref_out_opt IUri **relativeUri);
        HRESULT ( STDMETHODCALLTYPE *CombinePartUri )(
            __RPC__in IOpcUri * This,
                       __RPC__in_opt IUri *relativeUri,
                                __RPC__deref_out_opt IOpcPartUri **combinedUri);
        END_INTERFACE
    } IOpcUriVtbl;
    interface IOpcUri
    {
        CONST_VTBL struct IOpcUriVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropertyBSTR(This,uriProp,pbstrProperty,dwFlags) )
    ( (This)->lpVtbl -> GetPropertyLength(This,uriProp,pcchProperty,dwFlags) )
    ( (This)->lpVtbl -> GetPropertyDWORD(This,uriProp,pdwProperty,dwFlags) )
    ( (This)->lpVtbl -> HasProperty(This,uriProp,pfHasProperty) )
    ( (This)->lpVtbl -> GetAbsoluteUri(This,pbstrAbsoluteUri) )
    ( (This)->lpVtbl -> GetAuthority(This,pbstrAuthority) )
    ( (This)->lpVtbl -> GetDisplayUri(This,pbstrDisplayString) )
    ( (This)->lpVtbl -> GetDomain(This,pbstrDomain) )
    ( (This)->lpVtbl -> GetExtension(This,pbstrExtension) )
    ( (This)->lpVtbl -> GetFragment(This,pbstrFragment) )
    ( (This)->lpVtbl -> GetHost(This,pbstrHost) )
    ( (This)->lpVtbl -> GetPassword(This,pbstrPassword) )
    ( (This)->lpVtbl -> GetPath(This,pbstrPath) )
    ( (This)->lpVtbl -> GetPathAndQuery(This,pbstrPathAndQuery) )
    ( (This)->lpVtbl -> GetQuery(This,pbstrQuery) )
    ( (This)->lpVtbl -> GetRawUri(This,pbstrRawUri) )
    ( (This)->lpVtbl -> GetSchemeName(This,pbstrSchemeName) )
    ( (This)->lpVtbl -> GetUserInfo(This,pbstrUserInfo) )
    ( (This)->lpVtbl -> GetUserName(This,pbstrUserName) )
    ( (This)->lpVtbl -> GetHostType(This,pdwHostType) )
    ( (This)->lpVtbl -> GetPort(This,pdwPort) )
    ( (This)->lpVtbl -> GetScheme(This,pdwScheme) )
    ( (This)->lpVtbl -> GetZone(This,pdwZone) )
    ( (This)->lpVtbl -> GetProperties(This,pdwFlags) )
    ( (This)->lpVtbl -> IsEqual(This,pUri,pfEqual) )
    ( (This)->lpVtbl -> GetRelationshipsPartUri(This,relationshipPartUri) )
    ( (This)->lpVtbl -> GetRelativeUri(This,targetPartUri,relativeUri) )
    ( (This)->lpVtbl -> CombinePartUri(This,relativeUri,combinedUri) )
EXTERN_C const IID IID_IOpcPartUri;
    typedef struct IOpcPartUriVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcPartUri * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcPartUri * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcPartUri * This);
                           HRESULT ( STDMETHODCALLTYPE *GetPropertyBSTR )(
            __RPC__in IOpcPartUri * This,
                              Uri_PROPERTY uriProp,
                        __RPC__deref_out_opt BSTR *pbstrProperty,
                       DWORD dwFlags);
                           HRESULT ( STDMETHODCALLTYPE *GetPropertyLength )(
            __RPC__in IOpcPartUri * This,
                              Uri_PROPERTY uriProp,
                        __RPC__out DWORD *pcchProperty,
                       DWORD dwFlags);
                           HRESULT ( STDMETHODCALLTYPE *GetPropertyDWORD )(
            __RPC__in IOpcPartUri * This,
                              Uri_PROPERTY uriProp,
                        __RPC__out DWORD *pdwProperty,
                       DWORD dwFlags);
                           HRESULT ( STDMETHODCALLTYPE *HasProperty )(
            __RPC__in IOpcPartUri * This,
                              Uri_PROPERTY uriProp,
                        __RPC__out BOOL *pfHasProperty);
                           HRESULT ( STDMETHODCALLTYPE *GetAbsoluteUri )(
            __RPC__in IOpcPartUri * This,
                        __RPC__deref_out_opt BSTR *pbstrAbsoluteUri);
                           HRESULT ( STDMETHODCALLTYPE *GetAuthority )(
            __RPC__in IOpcPartUri * This,
                        __RPC__deref_out_opt BSTR *pbstrAuthority);
                           HRESULT ( STDMETHODCALLTYPE *GetDisplayUri )(
            __RPC__in IOpcPartUri * This,
                        __RPC__deref_out_opt BSTR *pbstrDisplayString);
                           HRESULT ( STDMETHODCALLTYPE *GetDomain )(
            __RPC__in IOpcPartUri * This,
                        __RPC__deref_out_opt BSTR *pbstrDomain);
                           HRESULT ( STDMETHODCALLTYPE *GetExtension )(
            __RPC__in IOpcPartUri * This,
                        __RPC__deref_out_opt BSTR *pbstrExtension);
                           HRESULT ( STDMETHODCALLTYPE *GetFragment )(
            __RPC__in IOpcPartUri * This,
                        __RPC__deref_out_opt BSTR *pbstrFragment);
                           HRESULT ( STDMETHODCALLTYPE *GetHost )(
            __RPC__in IOpcPartUri * This,
                        __RPC__deref_out_opt BSTR *pbstrHost);
                           HRESULT ( STDMETHODCALLTYPE *GetPassword )(
            __RPC__in IOpcPartUri * This,
                        __RPC__deref_out_opt BSTR *pbstrPassword);
                           HRESULT ( STDMETHODCALLTYPE *GetPath )(
            __RPC__in IOpcPartUri * This,
                        __RPC__deref_out_opt BSTR *pbstrPath);
                           HRESULT ( STDMETHODCALLTYPE *GetPathAndQuery )(
            __RPC__in IOpcPartUri * This,
                        __RPC__deref_out_opt BSTR *pbstrPathAndQuery);
                           HRESULT ( STDMETHODCALLTYPE *GetQuery )(
            __RPC__in IOpcPartUri * This,
                        __RPC__deref_out_opt BSTR *pbstrQuery);
                           HRESULT ( STDMETHODCALLTYPE *GetRawUri )(
            __RPC__in IOpcPartUri * This,
                        __RPC__deref_out_opt BSTR *pbstrRawUri);
                           HRESULT ( STDMETHODCALLTYPE *GetSchemeName )(
            __RPC__in IOpcPartUri * This,
                        __RPC__deref_out_opt BSTR *pbstrSchemeName);
                           HRESULT ( STDMETHODCALLTYPE *GetUserInfo )(
            __RPC__in IOpcPartUri * This,
                        __RPC__deref_out_opt BSTR *pbstrUserInfo);
                           HRESULT ( STDMETHODCALLTYPE *GetUserName )(
            __RPC__in IOpcPartUri * This,
                        __RPC__deref_out_opt BSTR *pbstrUserName);
                           HRESULT ( STDMETHODCALLTYPE *GetHostType )(
            __RPC__in IOpcPartUri * This,
                        __RPC__out DWORD *pdwHostType);
                           HRESULT ( STDMETHODCALLTYPE *GetPort )(
            __RPC__in IOpcPartUri * This,
                        __RPC__out DWORD *pdwPort);
                           HRESULT ( STDMETHODCALLTYPE *GetScheme )(
            __RPC__in IOpcPartUri * This,
                        __RPC__out DWORD *pdwScheme);
                           HRESULT ( STDMETHODCALLTYPE *GetZone )(
            __RPC__in IOpcPartUri * This,
                        __RPC__out DWORD *pdwZone);
                           HRESULT ( STDMETHODCALLTYPE *GetProperties )(
            __RPC__in IOpcPartUri * This,
                        __RPC__out LPDWORD pdwFlags);
                           HRESULT ( STDMETHODCALLTYPE *IsEqual )(
            __RPC__in IOpcPartUri * This,
                       __RPC__in_opt IUri *pUri,
                        __RPC__out BOOL *pfEqual);
        HRESULT ( STDMETHODCALLTYPE *GetRelationshipsPartUri )(
            __RPC__in IOpcPartUri * This,
                                __RPC__deref_out_opt IOpcPartUri **relationshipPartUri);
        HRESULT ( STDMETHODCALLTYPE *GetRelativeUri )(
            __RPC__in IOpcPartUri * This,
                       __RPC__in_opt IOpcPartUri *targetPartUri,
                                __RPC__deref_out_opt IUri **relativeUri);
        HRESULT ( STDMETHODCALLTYPE *CombinePartUri )(
            __RPC__in IOpcPartUri * This,
                       __RPC__in_opt IUri *relativeUri,
                                __RPC__deref_out_opt IOpcPartUri **combinedUri);
        HRESULT ( STDMETHODCALLTYPE *ComparePartUri )(
            __RPC__in IOpcPartUri * This,
                       __RPC__in_opt IOpcPartUri *partUri,
                                __RPC__out INT32 *comparisonResult);
        HRESULT ( STDMETHODCALLTYPE *GetSourceUri )(
            __RPC__in IOpcPartUri * This,
                                __RPC__deref_out_opt IOpcUri **sourceUri);
        HRESULT ( STDMETHODCALLTYPE *IsRelationshipsPartUri )(
            __RPC__in IOpcPartUri * This,
                                __RPC__out BOOL *isRelationshipUri);
        END_INTERFACE
    } IOpcPartUriVtbl;
    interface IOpcPartUri
    {
        CONST_VTBL struct IOpcPartUriVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPropertyBSTR(This,uriProp,pbstrProperty,dwFlags) )
    ( (This)->lpVtbl -> GetPropertyLength(This,uriProp,pcchProperty,dwFlags) )
    ( (This)->lpVtbl -> GetPropertyDWORD(This,uriProp,pdwProperty,dwFlags) )
    ( (This)->lpVtbl -> HasProperty(This,uriProp,pfHasProperty) )
    ( (This)->lpVtbl -> GetAbsoluteUri(This,pbstrAbsoluteUri) )
    ( (This)->lpVtbl -> GetAuthority(This,pbstrAuthority) )
    ( (This)->lpVtbl -> GetDisplayUri(This,pbstrDisplayString) )
    ( (This)->lpVtbl -> GetDomain(This,pbstrDomain) )
    ( (This)->lpVtbl -> GetExtension(This,pbstrExtension) )
    ( (This)->lpVtbl -> GetFragment(This,pbstrFragment) )
    ( (This)->lpVtbl -> GetHost(This,pbstrHost) )
    ( (This)->lpVtbl -> GetPassword(This,pbstrPassword) )
    ( (This)->lpVtbl -> GetPath(This,pbstrPath) )
    ( (This)->lpVtbl -> GetPathAndQuery(This,pbstrPathAndQuery) )
    ( (This)->lpVtbl -> GetQuery(This,pbstrQuery) )
    ( (This)->lpVtbl -> GetRawUri(This,pbstrRawUri) )
    ( (This)->lpVtbl -> GetSchemeName(This,pbstrSchemeName) )
    ( (This)->lpVtbl -> GetUserInfo(This,pbstrUserInfo) )
    ( (This)->lpVtbl -> GetUserName(This,pbstrUserName) )
    ( (This)->lpVtbl -> GetHostType(This,pdwHostType) )
    ( (This)->lpVtbl -> GetPort(This,pdwPort) )
    ( (This)->lpVtbl -> GetScheme(This,pdwScheme) )
    ( (This)->lpVtbl -> GetZone(This,pdwZone) )
    ( (This)->lpVtbl -> GetProperties(This,pdwFlags) )
    ( (This)->lpVtbl -> IsEqual(This,pUri,pfEqual) )
    ( (This)->lpVtbl -> GetRelationshipsPartUri(This,relationshipPartUri) )
    ( (This)->lpVtbl -> GetRelativeUri(This,targetPartUri,relativeUri) )
    ( (This)->lpVtbl -> CombinePartUri(This,relativeUri,combinedUri) )
    ( (This)->lpVtbl -> ComparePartUri(This,partUri,comparisonResult) )
    ( (This)->lpVtbl -> GetSourceUri(This,sourceUri) )
    ( (This)->lpVtbl -> IsRelationshipsPartUri(This,isRelationshipUri) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_msopc_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msopc_0000_0002_v0_0_s_ifspec;
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum __MIDL___MIDL_itf_msopc_0000_0002_0001
    {
        OPC_URI_TARGET_MODE_INTERNAL = 0,
        OPC_URI_TARGET_MODE_EXTERNAL = 1
    } OPC_URI_TARGET_MODE;
typedef
enum __MIDL___MIDL_itf_msopc_0000_0002_0002
    {
        OPC_COMPRESSION_NONE = -1,
        OPC_COMPRESSION_NORMAL = 0,
        OPC_COMPRESSION_MAXIMUM = 1,
        OPC_COMPRESSION_FAST = 2,
        OPC_COMPRESSION_SUPERFAST = 3
    } OPC_COMPRESSION_OPTIONS;
typedef
enum __MIDL___MIDL_itf_msopc_0000_0002_0003
    {
        OPC_STREAM_IO_READ = 1,
        OPC_STREAM_IO_WRITE = 2
    } OPC_STREAM_IO_MODE;
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum __MIDL___MIDL_itf_msopc_0000_0002_0004
    {
        OPC_READ_DEFAULT = 0,
        OPC_VALIDATE_ON_LOAD = 0x1,
        OPC_CACHE_ON_ACCESS = 0x2
    } OPC_READ_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(OPC_READ_FLAGS);
typedef
enum __MIDL___MIDL_itf_msopc_0000_0002_0005
    {
        OPC_WRITE_DEFAULT = 0,
        OPC_WRITE_FORCE_ZIP32 = 0x1
    } OPC_WRITE_FLAGS;
DEFINE_ENUM_FLAG_OPERATORS(OPC_WRITE_FLAGS);
#endif
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum OPC_SIGNATURE_VALIDATION_RESULT
    {
        OPC_SIGNATURE_VALID = 0,
        OPC_SIGNATURE_INVALID = -1
    } OPC_SIGNATURE_VALIDATION_RESULT;
typedef
enum __MIDL___MIDL_itf_msopc_0001_0076_0001
    {
        OPC_CANONICALIZATION_NONE = 0,
        OPC_CANONICALIZATION_C14N = 1,
        OPC_CANONICALIZATION_C14N_WITH_COMMENTS = 2
    } OPC_CANONICALIZATION_METHOD;
typedef
enum __MIDL___MIDL_itf_msopc_0001_0076_0002
    {
        OPC_RELATIONSHIP_SELECT_BY_ID = 0,
        OPC_RELATIONSHIP_SELECT_BY_TYPE = 1
    } OPC_RELATIONSHIP_SELECTOR;
typedef
enum __MIDL___MIDL_itf_msopc_0001_0076_0003
    {
        OPC_RELATIONSHIP_SIGN_USING_SELECTORS = 0,
        OPC_RELATIONSHIP_SIGN_PART = 1
    } OPC_RELATIONSHIPS_SIGNING_OPTION;
typedef
enum __MIDL___MIDL_itf_msopc_0001_0076_0004
    {
        OPC_CERTIFICATE_IN_CERTIFICATE_PART = 0,
        OPC_CERTIFICATE_IN_SIGNATURE_PART = 1,
        OPC_CERTIFICATE_NOT_EMBEDDED = 2
    } OPC_CERTIFICATE_EMBEDDING_OPTION;
typedef
enum __MIDL___MIDL_itf_msopc_0001_0076_0005
    {
        OPC_SIGNATURE_TIME_FORMAT_MILLISECONDS = 0,
        OPC_SIGNATURE_TIME_FORMAT_SECONDS = 1,
        OPC_SIGNATURE_TIME_FORMAT_MINUTES = 2,
        OPC_SIGNATURE_TIME_FORMAT_DAYS = 3,
        OPC_SIGNATURE_TIME_FORMAT_MONTHS = 4,
        OPC_SIGNATURE_TIME_FORMAT_YEARS = 5
    } OPC_SIGNATURE_TIME_FORMAT;
#endif
#pragma endregion
EXTERN_C const IID LIBID_MSOPC;
EXTERN_C const IID IID_IOpcPackage;
    typedef struct IOpcPackageVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcPackage * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcPackage * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcPackage * This);
        HRESULT ( STDMETHODCALLTYPE *GetPartSet )(
            __RPC__in IOpcPackage * This,
                                __RPC__deref_out_opt IOpcPartSet **partSet);
        HRESULT ( STDMETHODCALLTYPE *GetRelationshipSet )(
            __RPC__in IOpcPackage * This,
                                __RPC__deref_out_opt IOpcRelationshipSet **relationshipSet);
        END_INTERFACE
    } IOpcPackageVtbl;
    interface IOpcPackage
    {
        CONST_VTBL struct IOpcPackageVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartSet(This,partSet) )
    ( (This)->lpVtbl -> GetRelationshipSet(This,relationshipSet) )
EXTERN_C const IID IID_IOpcPart;
    typedef struct IOpcPartVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcPart * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcPart * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcPart * This);
        HRESULT ( STDMETHODCALLTYPE *GetRelationshipSet )(
            __RPC__in IOpcPart * This,
                                __RPC__deref_out_opt IOpcRelationshipSet **relationshipSet);
        HRESULT ( STDMETHODCALLTYPE *GetContentStream )(
            __RPC__in IOpcPart * This,
                                __RPC__deref_out_opt IStream **stream);
        HRESULT ( STDMETHODCALLTYPE *GetName )(
            __RPC__in IOpcPart * This,
                                __RPC__deref_out_opt IOpcPartUri **name);
        HRESULT ( STDMETHODCALLTYPE *GetContentType )(
            __RPC__in IOpcPart * This,
                                        __RPC__deref_out_opt_string LPWSTR *contentType);
        HRESULT ( STDMETHODCALLTYPE *GetCompressionOptions )(
            __RPC__in IOpcPart * This,
                                __RPC__out OPC_COMPRESSION_OPTIONS *compressionOptions);
        END_INTERFACE
    } IOpcPartVtbl;
    interface IOpcPart
    {
        CONST_VTBL struct IOpcPartVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRelationshipSet(This,relationshipSet) )
    ( (This)->lpVtbl -> GetContentStream(This,stream) )
    ( (This)->lpVtbl -> GetName(This,name) )
    ( (This)->lpVtbl -> GetContentType(This,contentType) )
    ( (This)->lpVtbl -> GetCompressionOptions(This,compressionOptions) )
EXTERN_C const IID IID_IOpcRelationship;
    typedef struct IOpcRelationshipVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcRelationship * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcRelationship * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcRelationship * This);
        HRESULT ( STDMETHODCALLTYPE *GetId )(
            __RPC__in IOpcRelationship * This,
                                        __RPC__deref_out_opt_string LPWSTR *relationshipIdentifier);
        HRESULT ( STDMETHODCALLTYPE *GetRelationshipType )(
            __RPC__in IOpcRelationship * This,
                                        __RPC__deref_out_opt_string LPWSTR *relationshipType);
        HRESULT ( STDMETHODCALLTYPE *GetSourceUri )(
            __RPC__in IOpcRelationship * This,
                                __RPC__deref_out_opt IOpcUri **sourceUri);
        HRESULT ( STDMETHODCALLTYPE *GetTargetUri )(
            __RPC__in IOpcRelationship * This,
                                __RPC__deref_out_opt IUri **targetUri);
        HRESULT ( STDMETHODCALLTYPE *GetTargetMode )(
            __RPC__in IOpcRelationship * This,
                                __RPC__out OPC_URI_TARGET_MODE *targetMode);
        END_INTERFACE
    } IOpcRelationshipVtbl;
    interface IOpcRelationship
    {
        CONST_VTBL struct IOpcRelationshipVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetId(This,relationshipIdentifier) )
    ( (This)->lpVtbl -> GetRelationshipType(This,relationshipType) )
    ( (This)->lpVtbl -> GetSourceUri(This,sourceUri) )
    ( (This)->lpVtbl -> GetTargetUri(This,targetUri) )
    ( (This)->lpVtbl -> GetTargetMode(This,targetMode) )
EXTERN_C const IID IID_IOpcPartSet;
    typedef struct IOpcPartSetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcPartSet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcPartSet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcPartSet * This);
        HRESULT ( STDMETHODCALLTYPE *GetPart )(
            __RPC__in IOpcPartSet * This,
                       __RPC__in_opt IOpcPartUri *name,
                                __RPC__deref_out_opt IOpcPart **part);
        HRESULT ( STDMETHODCALLTYPE *CreatePart )(
            __RPC__in IOpcPartSet * This,
                       __RPC__in_opt IOpcPartUri *name,
                               __RPC__in_string LPCWSTR contentType,
                       OPC_COMPRESSION_OPTIONS compressionOptions,
                                __RPC__deref_out_opt IOpcPart **part);
        HRESULT ( STDMETHODCALLTYPE *DeletePart )(
            __RPC__in IOpcPartSet * This,
                       __RPC__in_opt IOpcPartUri *name);
        HRESULT ( STDMETHODCALLTYPE *PartExists )(
            __RPC__in IOpcPartSet * This,
                       __RPC__in_opt IOpcPartUri *name,
                                __RPC__out BOOL *partExists);
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )(
            __RPC__in IOpcPartSet * This,
                                __RPC__deref_out_opt IOpcPartEnumerator **partEnumerator);
        END_INTERFACE
    } IOpcPartSetVtbl;
    interface IOpcPartSet
    {
        CONST_VTBL struct IOpcPartSetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPart(This,name,part) )
    ( (This)->lpVtbl -> CreatePart(This,name,contentType,compressionOptions,part) )
    ( (This)->lpVtbl -> DeletePart(This,name) )
    ( (This)->lpVtbl -> PartExists(This,name,partExists) )
    ( (This)->lpVtbl -> GetEnumerator(This,partEnumerator) )
EXTERN_C const IID IID_IOpcRelationshipSet;
    typedef struct IOpcRelationshipSetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcRelationshipSet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcRelationshipSet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcRelationshipSet * This);
        HRESULT ( STDMETHODCALLTYPE *GetRelationship )(
            __RPC__in IOpcRelationshipSet * This,
                               __RPC__in_string LPCWSTR relationshipIdentifier,
                                __RPC__deref_out_opt IOpcRelationship **relationship);
        HRESULT ( STDMETHODCALLTYPE *CreateRelationship )(
            __RPC__in IOpcRelationshipSet * This,
                                       __RPC__in_opt_string LPCWSTR relationshipIdentifier,
                               __RPC__in_string LPCWSTR relationshipType,
                       __RPC__in_opt IUri *targetUri,
                       OPC_URI_TARGET_MODE targetMode,
                                __RPC__deref_out_opt IOpcRelationship **relationship);
        HRESULT ( STDMETHODCALLTYPE *DeleteRelationship )(
            __RPC__in IOpcRelationshipSet * This,
                               __RPC__in_string LPCWSTR relationshipIdentifier);
        HRESULT ( STDMETHODCALLTYPE *RelationshipExists )(
            __RPC__in IOpcRelationshipSet * This,
                               __RPC__in_string LPCWSTR relationshipIdentifier,
                                __RPC__out BOOL *relationshipExists);
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )(
            __RPC__in IOpcRelationshipSet * This,
                                __RPC__deref_out_opt IOpcRelationshipEnumerator **relationshipEnumerator);
        HRESULT ( STDMETHODCALLTYPE *GetEnumeratorForType )(
            __RPC__in IOpcRelationshipSet * This,
                               __RPC__in_string LPCWSTR relationshipType,
                                __RPC__deref_out_opt IOpcRelationshipEnumerator **relationshipEnumerator);
        HRESULT ( STDMETHODCALLTYPE *GetRelationshipsContentStream )(
            __RPC__in IOpcRelationshipSet * This,
                                __RPC__deref_out_opt IStream **contents);
        END_INTERFACE
    } IOpcRelationshipSetVtbl;
    interface IOpcRelationshipSet
    {
        CONST_VTBL struct IOpcRelationshipSetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetRelationship(This,relationshipIdentifier,relationship) )
    ( (This)->lpVtbl -> CreateRelationship(This,relationshipIdentifier,relationshipType,targetUri,targetMode,relationship) )
    ( (This)->lpVtbl -> DeleteRelationship(This,relationshipIdentifier) )
    ( (This)->lpVtbl -> RelationshipExists(This,relationshipIdentifier,relationshipExists) )
    ( (This)->lpVtbl -> GetEnumerator(This,relationshipEnumerator) )
    ( (This)->lpVtbl -> GetEnumeratorForType(This,relationshipType,relationshipEnumerator) )
    ( (This)->lpVtbl -> GetRelationshipsContentStream(This,contents) )
EXTERN_C const IID IID_IOpcPartEnumerator;
    typedef struct IOpcPartEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcPartEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcPartEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcPartEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IOpcPartEnumerator * This,
                                __RPC__out BOOL *hasNext);
        HRESULT ( STDMETHODCALLTYPE *MovePrevious )(
            __RPC__in IOpcPartEnumerator * This,
                                __RPC__out BOOL *hasPrevious);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IOpcPartEnumerator * This,
                                __RPC__deref_out_opt IOpcPart **part);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IOpcPartEnumerator * This,
                                __RPC__deref_out_opt IOpcPartEnumerator **copy);
        END_INTERFACE
    } IOpcPartEnumeratorVtbl;
    interface IOpcPartEnumerator
    {
        CONST_VTBL struct IOpcPartEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
    ( (This)->lpVtbl -> MovePrevious(This,hasPrevious) )
    ( (This)->lpVtbl -> GetCurrent(This,part) )
    ( (This)->lpVtbl -> Clone(This,copy) )
EXTERN_C const IID IID_IOpcRelationshipEnumerator;
    typedef struct IOpcRelationshipEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcRelationshipEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcRelationshipEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcRelationshipEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IOpcRelationshipEnumerator * This,
                                __RPC__out BOOL *hasNext);
        HRESULT ( STDMETHODCALLTYPE *MovePrevious )(
            __RPC__in IOpcRelationshipEnumerator * This,
                                __RPC__out BOOL *hasPrevious);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IOpcRelationshipEnumerator * This,
                                __RPC__deref_out_opt IOpcRelationship **relationship);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IOpcRelationshipEnumerator * This,
                                __RPC__deref_out_opt IOpcRelationshipEnumerator **copy);
        END_INTERFACE
    } IOpcRelationshipEnumeratorVtbl;
    interface IOpcRelationshipEnumerator
    {
        CONST_VTBL struct IOpcRelationshipEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
    ( (This)->lpVtbl -> MovePrevious(This,hasPrevious) )
    ( (This)->lpVtbl -> GetCurrent(This,relationship) )
    ( (This)->lpVtbl -> Clone(This,copy) )
EXTERN_C const IID IID_IOpcSignaturePartReference;
    typedef struct IOpcSignaturePartReferenceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcSignaturePartReference * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcSignaturePartReference * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcSignaturePartReference * This);
        HRESULT ( STDMETHODCALLTYPE *GetPartName )(
            __RPC__in IOpcSignaturePartReference * This,
                                __RPC__deref_out_opt IOpcPartUri **partName);
        HRESULT ( STDMETHODCALLTYPE *GetContentType )(
            __RPC__in IOpcSignaturePartReference * This,
                                        __RPC__deref_out_opt_string LPWSTR *contentType);
        HRESULT ( STDMETHODCALLTYPE *GetDigestMethod )(
            __RPC__in IOpcSignaturePartReference * This,
                                        __RPC__deref_out_opt_string LPWSTR *digestMethod);
        HRESULT ( STDMETHODCALLTYPE *GetDigestValue )(
            __RPC__in IOpcSignaturePartReference * This,
                                          __RPC__deref_out_ecount_full_opt(*count) UINT8 **digestValue,
                        __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetTransformMethod )(
            __RPC__in IOpcSignaturePartReference * This,
                                __RPC__out OPC_CANONICALIZATION_METHOD *transformMethod);
        END_INTERFACE
    } IOpcSignaturePartReferenceVtbl;
    interface IOpcSignaturePartReference
    {
        CONST_VTBL struct IOpcSignaturePartReferenceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPartName(This,partName) )
    ( (This)->lpVtbl -> GetContentType(This,contentType) )
    ( (This)->lpVtbl -> GetDigestMethod(This,digestMethod) )
    ( (This)->lpVtbl -> GetDigestValue(This,digestValue,count) )
    ( (This)->lpVtbl -> GetTransformMethod(This,transformMethod) )
EXTERN_C const IID IID_IOpcSignatureRelationshipReference;
    typedef struct IOpcSignatureRelationshipReferenceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcSignatureRelationshipReference * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcSignatureRelationshipReference * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcSignatureRelationshipReference * This);
        HRESULT ( STDMETHODCALLTYPE *GetSourceUri )(
            __RPC__in IOpcSignatureRelationshipReference * This,
                                __RPC__deref_out_opt IOpcUri **sourceUri);
        HRESULT ( STDMETHODCALLTYPE *GetDigestMethod )(
            __RPC__in IOpcSignatureRelationshipReference * This,
                                        __RPC__deref_out_opt_string LPWSTR *digestMethod);
        HRESULT ( STDMETHODCALLTYPE *GetDigestValue )(
            __RPC__in IOpcSignatureRelationshipReference * This,
                                          __RPC__deref_out_ecount_full_opt(*count) UINT8 **digestValue,
                        __RPC__out UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetTransformMethod )(
            __RPC__in IOpcSignatureRelationshipReference * This,
                                __RPC__out OPC_CANONICALIZATION_METHOD *transformMethod);
        HRESULT ( STDMETHODCALLTYPE *GetRelationshipSigningOption )(
            __RPC__in IOpcSignatureRelationshipReference * This,
                                __RPC__out OPC_RELATIONSHIPS_SIGNING_OPTION *relationshipSigningOption);
        HRESULT ( STDMETHODCALLTYPE *GetRelationshipSelectorEnumerator )(
            __RPC__in IOpcSignatureRelationshipReference * This,
                                __RPC__deref_out_opt IOpcRelationshipSelectorEnumerator **selectorEnumerator);
        END_INTERFACE
    } IOpcSignatureRelationshipReferenceVtbl;
    interface IOpcSignatureRelationshipReference
    {
        CONST_VTBL struct IOpcSignatureRelationshipReferenceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSourceUri(This,sourceUri) )
    ( (This)->lpVtbl -> GetDigestMethod(This,digestMethod) )
    ( (This)->lpVtbl -> GetDigestValue(This,digestValue,count) )
    ( (This)->lpVtbl -> GetTransformMethod(This,transformMethod) )
    ( (This)->lpVtbl -> GetRelationshipSigningOption(This,relationshipSigningOption) )
    ( (This)->lpVtbl -> GetRelationshipSelectorEnumerator(This,selectorEnumerator) )
EXTERN_C const IID IID_IOpcRelationshipSelector;
    typedef struct IOpcRelationshipSelectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcRelationshipSelector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcRelationshipSelector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcRelationshipSelector * This);
        HRESULT ( STDMETHODCALLTYPE *GetSelectorType )(
            __RPC__in IOpcRelationshipSelector * This,
                                __RPC__out OPC_RELATIONSHIP_SELECTOR *selector);
        HRESULT ( STDMETHODCALLTYPE *GetSelectionCriterion )(
            __RPC__in IOpcRelationshipSelector * This,
                                        __RPC__deref_out_opt_string LPWSTR *selectionCriterion);
        END_INTERFACE
    } IOpcRelationshipSelectorVtbl;
    interface IOpcRelationshipSelector
    {
        CONST_VTBL struct IOpcRelationshipSelectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSelectorType(This,selector) )
    ( (This)->lpVtbl -> GetSelectionCriterion(This,selectionCriterion) )
EXTERN_C const IID IID_IOpcSignatureReference;
    typedef struct IOpcSignatureReferenceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcSignatureReference * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcSignatureReference * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcSignatureReference * This);
        HRESULT ( STDMETHODCALLTYPE *GetId )(
            __RPC__in IOpcSignatureReference * This,
                                        __RPC__deref_out_opt_string LPWSTR *referenceId);
        HRESULT ( STDMETHODCALLTYPE *GetUri )(
            __RPC__in IOpcSignatureReference * This,
                                __RPC__deref_out_opt IUri **referenceUri);
        HRESULT ( STDMETHODCALLTYPE *GetType )(
            __RPC__in IOpcSignatureReference * This,
                                        __RPC__deref_out_opt_string LPWSTR *type);
        HRESULT ( STDMETHODCALLTYPE *GetTransformMethod )(
            __RPC__in IOpcSignatureReference * This,
                                __RPC__out OPC_CANONICALIZATION_METHOD *transformMethod);
        HRESULT ( STDMETHODCALLTYPE *GetDigestMethod )(
            __RPC__in IOpcSignatureReference * This,
                                        __RPC__deref_out_opt_string LPWSTR *digestMethod);
        HRESULT ( STDMETHODCALLTYPE *GetDigestValue )(
            __RPC__in IOpcSignatureReference * This,
                                          __RPC__deref_out_ecount_full_opt(*count) UINT8 **digestValue,
                        __RPC__out UINT32 *count);
        END_INTERFACE
    } IOpcSignatureReferenceVtbl;
    interface IOpcSignatureReference
    {
        CONST_VTBL struct IOpcSignatureReferenceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetId(This,referenceId) )
    ( (This)->lpVtbl -> GetUri(This,referenceUri) )
    ( (This)->lpVtbl -> GetType(This,type) )
    ( (This)->lpVtbl -> GetTransformMethod(This,transformMethod) )
    ( (This)->lpVtbl -> GetDigestMethod(This,digestMethod) )
    ( (This)->lpVtbl -> GetDigestValue(This,digestValue,count) )
EXTERN_C const IID IID_IOpcSignatureCustomObject;
    typedef struct IOpcSignatureCustomObjectVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcSignatureCustomObject * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcSignatureCustomObject * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcSignatureCustomObject * This);
        HRESULT ( STDMETHODCALLTYPE *GetXml )(
            __RPC__in IOpcSignatureCustomObject * This,
                                          __RPC__deref_out_ecount_full_opt(*count) UINT8 **xmlMarkup,
                        __RPC__out UINT32 *count);
        END_INTERFACE
    } IOpcSignatureCustomObjectVtbl;
    interface IOpcSignatureCustomObject
    {
        CONST_VTBL struct IOpcSignatureCustomObjectVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetXml(This,xmlMarkup,count) )
EXTERN_C const IID IID_IOpcDigitalSignature;
    typedef struct IOpcDigitalSignatureVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IOpcDigitalSignature * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IOpcDigitalSignature * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IOpcDigitalSignature * This);
        HRESULT ( STDMETHODCALLTYPE *GetNamespaces )(
            IOpcDigitalSignature * This,
            __RPC__deref_out_ecount_full_opt(*count) LPWSTR **prefixes,
            __RPC__deref_out_ecount_full_opt(*count) LPWSTR **namespaces,
                        UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureId )(
            IOpcDigitalSignature * This,
            __RPC__deref_out_opt_string LPWSTR *signatureId);
        HRESULT ( STDMETHODCALLTYPE *GetSignaturePartName )(
            IOpcDigitalSignature * This,
                                IOpcPartUri **signaturePartName);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureMethod )(
            IOpcDigitalSignature * This,
            __RPC__deref_out_opt_string LPWSTR *signatureMethod);
        HRESULT ( STDMETHODCALLTYPE *GetCanonicalizationMethod )(
            IOpcDigitalSignature * This,
                                OPC_CANONICALIZATION_METHOD *canonicalizationMethod);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureValue )(
            IOpcDigitalSignature * This,
            __RPC__deref_out_ecount_full_opt(*count) UINT8 **signatureValue,
                        UINT32 *count);
        HRESULT ( STDMETHODCALLTYPE *GetSignaturePartReferenceEnumerator )(
            IOpcDigitalSignature * This,
                                IOpcSignaturePartReferenceEnumerator **partReferenceEnumerator);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureRelationshipReferenceEnumerator )(
            IOpcDigitalSignature * This,
                                IOpcSignatureRelationshipReferenceEnumerator **relationshipReferenceEnumerator);
        HRESULT ( STDMETHODCALLTYPE *GetSigningTime )(
            IOpcDigitalSignature * This,
            __RPC__deref_out_opt_string LPWSTR *signingTime);
        HRESULT ( STDMETHODCALLTYPE *GetTimeFormat )(
            IOpcDigitalSignature * This,
                                OPC_SIGNATURE_TIME_FORMAT *timeFormat);
        HRESULT ( STDMETHODCALLTYPE *GetPackageObjectReference )(
            IOpcDigitalSignature * This,
                                IOpcSignatureReference **packageObjectReference);
        HRESULT ( STDMETHODCALLTYPE *GetCertificateEnumerator )(
            IOpcDigitalSignature * This,
                                IOpcCertificateEnumerator **certificateEnumerator);
        HRESULT ( STDMETHODCALLTYPE *GetCustomReferenceEnumerator )(
            IOpcDigitalSignature * This,
                                IOpcSignatureReferenceEnumerator **customReferenceEnumerator);
        HRESULT ( STDMETHODCALLTYPE *GetCustomObjectEnumerator )(
            IOpcDigitalSignature * This,
                                IOpcSignatureCustomObjectEnumerator **customObjectEnumerator);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureXml )(
            IOpcDigitalSignature * This,
                                          UINT8 **signatureXml,
                        UINT32 *count);
        END_INTERFACE
    } IOpcDigitalSignatureVtbl;
    interface IOpcDigitalSignature
    {
        CONST_VTBL struct IOpcDigitalSignatureVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetNamespaces(This,prefixes,namespaces,count) )
    ( (This)->lpVtbl -> GetSignatureId(This,signatureId) )
    ( (This)->lpVtbl -> GetSignaturePartName(This,signaturePartName) )
    ( (This)->lpVtbl -> GetSignatureMethod(This,signatureMethod) )
    ( (This)->lpVtbl -> GetCanonicalizationMethod(This,canonicalizationMethod) )
    ( (This)->lpVtbl -> GetSignatureValue(This,signatureValue,count) )
    ( (This)->lpVtbl -> GetSignaturePartReferenceEnumerator(This,partReferenceEnumerator) )
    ( (This)->lpVtbl -> GetSignatureRelationshipReferenceEnumerator(This,relationshipReferenceEnumerator) )
    ( (This)->lpVtbl -> GetSigningTime(This,signingTime) )
    ( (This)->lpVtbl -> GetTimeFormat(This,timeFormat) )
    ( (This)->lpVtbl -> GetPackageObjectReference(This,packageObjectReference) )
    ( (This)->lpVtbl -> GetCertificateEnumerator(This,certificateEnumerator) )
    ( (This)->lpVtbl -> GetCustomReferenceEnumerator(This,customReferenceEnumerator) )
    ( (This)->lpVtbl -> GetCustomObjectEnumerator(This,customObjectEnumerator) )
    ( (This)->lpVtbl -> GetSignatureXml(This,signatureXml,count) )
EXTERN_C const IID IID_IOpcSigningOptions;
    typedef struct IOpcSigningOptionsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcSigningOptions * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcSigningOptions * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcSigningOptions * This);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureId )(
            __RPC__in IOpcSigningOptions * This,
                                        __RPC__deref_out_opt_string LPWSTR *signatureId);
        HRESULT ( STDMETHODCALLTYPE *SetSignatureId )(
            __RPC__in IOpcSigningOptions * This,
                       __RPC__in LPCWSTR signatureId);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureMethod )(
            __RPC__in IOpcSigningOptions * This,
                                        __RPC__deref_out_opt_string LPWSTR *signatureMethod);
        HRESULT ( STDMETHODCALLTYPE *SetSignatureMethod )(
            __RPC__in IOpcSigningOptions * This,
                       __RPC__in LPCWSTR signatureMethod);
        HRESULT ( STDMETHODCALLTYPE *GetDefaultDigestMethod )(
            __RPC__in IOpcSigningOptions * This,
                                        __RPC__deref_out_opt_string LPWSTR *digestMethod);
        HRESULT ( STDMETHODCALLTYPE *SetDefaultDigestMethod )(
            __RPC__in IOpcSigningOptions * This,
                       __RPC__in LPCWSTR digestMethod);
        HRESULT ( STDMETHODCALLTYPE *GetCertificateEmbeddingOption )(
            __RPC__in IOpcSigningOptions * This,
                                __RPC__out OPC_CERTIFICATE_EMBEDDING_OPTION *embeddingOption);
        HRESULT ( STDMETHODCALLTYPE *SetCertificateEmbeddingOption )(
            __RPC__in IOpcSigningOptions * This,
                       OPC_CERTIFICATE_EMBEDDING_OPTION embeddingOption);
        HRESULT ( STDMETHODCALLTYPE *GetTimeFormat )(
            __RPC__in IOpcSigningOptions * This,
                                __RPC__out OPC_SIGNATURE_TIME_FORMAT *timeFormat);
        HRESULT ( STDMETHODCALLTYPE *SetTimeFormat )(
            __RPC__in IOpcSigningOptions * This,
                       OPC_SIGNATURE_TIME_FORMAT timeFormat);
        HRESULT ( STDMETHODCALLTYPE *GetSignaturePartReferenceSet )(
            __RPC__in IOpcSigningOptions * This,
                                __RPC__deref_out_opt IOpcSignaturePartReferenceSet **partReferenceSet);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureRelationshipReferenceSet )(
            __RPC__in IOpcSigningOptions * This,
                                __RPC__deref_out_opt IOpcSignatureRelationshipReferenceSet **relationshipReferenceSet);
        HRESULT ( STDMETHODCALLTYPE *GetCustomObjectSet )(
            __RPC__in IOpcSigningOptions * This,
                                __RPC__deref_out_opt IOpcSignatureCustomObjectSet **customObjectSet);
        HRESULT ( STDMETHODCALLTYPE *GetCustomReferenceSet )(
            __RPC__in IOpcSigningOptions * This,
                                __RPC__deref_out_opt IOpcSignatureReferenceSet **customReferenceSet);
        HRESULT ( STDMETHODCALLTYPE *GetCertificateSet )(
            __RPC__in IOpcSigningOptions * This,
                                __RPC__deref_out_opt IOpcCertificateSet **certificateSet);
        HRESULT ( STDMETHODCALLTYPE *GetSignaturePartName )(
            __RPC__in IOpcSigningOptions * This,
                                __RPC__deref_out_opt IOpcPartUri **signaturePartName);
        HRESULT ( STDMETHODCALLTYPE *SetSignaturePartName )(
            __RPC__in IOpcSigningOptions * This,
                               __RPC__in_opt IOpcPartUri *signaturePartName);
        END_INTERFACE
    } IOpcSigningOptionsVtbl;
    interface IOpcSigningOptions
    {
        CONST_VTBL struct IOpcSigningOptionsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSignatureId(This,signatureId) )
    ( (This)->lpVtbl -> SetSignatureId(This,signatureId) )
    ( (This)->lpVtbl -> GetSignatureMethod(This,signatureMethod) )
    ( (This)->lpVtbl -> SetSignatureMethod(This,signatureMethod) )
    ( (This)->lpVtbl -> GetDefaultDigestMethod(This,digestMethod) )
    ( (This)->lpVtbl -> SetDefaultDigestMethod(This,digestMethod) )
    ( (This)->lpVtbl -> GetCertificateEmbeddingOption(This,embeddingOption) )
    ( (This)->lpVtbl -> SetCertificateEmbeddingOption(This,embeddingOption) )
    ( (This)->lpVtbl -> GetTimeFormat(This,timeFormat) )
    ( (This)->lpVtbl -> SetTimeFormat(This,timeFormat) )
    ( (This)->lpVtbl -> GetSignaturePartReferenceSet(This,partReferenceSet) )
    ( (This)->lpVtbl -> GetSignatureRelationshipReferenceSet(This,relationshipReferenceSet) )
    ( (This)->lpVtbl -> GetCustomObjectSet(This,customObjectSet) )
    ( (This)->lpVtbl -> GetCustomReferenceSet(This,customReferenceSet) )
    ( (This)->lpVtbl -> GetCertificateSet(This,certificateSet) )
    ( (This)->lpVtbl -> GetSignaturePartName(This,signaturePartName) )
    ( (This)->lpVtbl -> SetSignaturePartName(This,signaturePartName) )
EXTERN_C const IID IID_IOpcDigitalSignatureManager;
    typedef struct IOpcDigitalSignatureManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IOpcDigitalSignatureManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IOpcDigitalSignatureManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IOpcDigitalSignatureManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureOriginPartName )(
            IOpcDigitalSignatureManager * This,
                                IOpcPartUri **signatureOriginPartName);
        HRESULT ( STDMETHODCALLTYPE *SetSignatureOriginPartName )(
            IOpcDigitalSignatureManager * This,
                               IOpcPartUri *signatureOriginPartName);
        HRESULT ( STDMETHODCALLTYPE *GetSignatureEnumerator )(
            IOpcDigitalSignatureManager * This,
                                IOpcDigitalSignatureEnumerator **signatureEnumerator);
        HRESULT ( STDMETHODCALLTYPE *RemoveSignature )(
            IOpcDigitalSignatureManager * This,
                       IOpcPartUri *signaturePartName);
        HRESULT ( STDMETHODCALLTYPE *CreateSigningOptions )(
            IOpcDigitalSignatureManager * This,
                                IOpcSigningOptions **signingOptions);
        HRESULT ( STDMETHODCALLTYPE *Validate )(
            IOpcDigitalSignatureManager * This,
                       IOpcDigitalSignature *signature,
                       const CERT_CONTEXT *certificate,
                                OPC_SIGNATURE_VALIDATION_RESULT *validationResult);
        HRESULT ( STDMETHODCALLTYPE *Sign )(
            IOpcDigitalSignatureManager * This,
                       const CERT_CONTEXT *certificate,
                       IOpcSigningOptions *signingOptions,
                                IOpcDigitalSignature **digitalSignature);
        HRESULT ( STDMETHODCALLTYPE *ReplaceSignatureXml )(
            IOpcDigitalSignatureManager * This,
                       IOpcPartUri *signaturePartName,
                                const UINT8 *newSignatureXml,
                       UINT32 count,
                                IOpcDigitalSignature **digitalSignature);
        END_INTERFACE
    } IOpcDigitalSignatureManagerVtbl;
    interface IOpcDigitalSignatureManager
    {
        CONST_VTBL struct IOpcDigitalSignatureManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetSignatureOriginPartName(This,signatureOriginPartName) )
    ( (This)->lpVtbl -> SetSignatureOriginPartName(This,signatureOriginPartName) )
    ( (This)->lpVtbl -> GetSignatureEnumerator(This,signatureEnumerator) )
    ( (This)->lpVtbl -> RemoveSignature(This,signaturePartName) )
    ( (This)->lpVtbl -> CreateSigningOptions(This,signingOptions) )
    ( (This)->lpVtbl -> Validate(This,signature,certificate,validationResult) )
    ( (This)->lpVtbl -> Sign(This,certificate,signingOptions,digitalSignature) )
    ( (This)->lpVtbl -> ReplaceSignatureXml(This,signaturePartName,newSignatureXml,count,digitalSignature) )
EXTERN_C const IID IID_IOpcSignaturePartReferenceEnumerator;
    typedef struct IOpcSignaturePartReferenceEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcSignaturePartReferenceEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcSignaturePartReferenceEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcSignaturePartReferenceEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IOpcSignaturePartReferenceEnumerator * This,
                                __RPC__out BOOL *hasNext);
        HRESULT ( STDMETHODCALLTYPE *MovePrevious )(
            __RPC__in IOpcSignaturePartReferenceEnumerator * This,
                                __RPC__out BOOL *hasPrevious);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IOpcSignaturePartReferenceEnumerator * This,
                                __RPC__deref_out_opt IOpcSignaturePartReference **partReference);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IOpcSignaturePartReferenceEnumerator * This,
                                __RPC__deref_out_opt IOpcSignaturePartReferenceEnumerator **copy);
        END_INTERFACE
    } IOpcSignaturePartReferenceEnumeratorVtbl;
    interface IOpcSignaturePartReferenceEnumerator
    {
        CONST_VTBL struct IOpcSignaturePartReferenceEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
    ( (This)->lpVtbl -> MovePrevious(This,hasPrevious) )
    ( (This)->lpVtbl -> GetCurrent(This,partReference) )
    ( (This)->lpVtbl -> Clone(This,copy) )
EXTERN_C const IID IID_IOpcSignatureRelationshipReferenceEnumerator;
    typedef struct IOpcSignatureRelationshipReferenceEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcSignatureRelationshipReferenceEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcSignatureRelationshipReferenceEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcSignatureRelationshipReferenceEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IOpcSignatureRelationshipReferenceEnumerator * This,
                                __RPC__out BOOL *hasNext);
        HRESULT ( STDMETHODCALLTYPE *MovePrevious )(
            __RPC__in IOpcSignatureRelationshipReferenceEnumerator * This,
                                __RPC__out BOOL *hasPrevious);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IOpcSignatureRelationshipReferenceEnumerator * This,
                                __RPC__deref_out_opt IOpcSignatureRelationshipReference **relationshipReference);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IOpcSignatureRelationshipReferenceEnumerator * This,
                                __RPC__deref_out_opt IOpcSignatureRelationshipReferenceEnumerator **copy);
        END_INTERFACE
    } IOpcSignatureRelationshipReferenceEnumeratorVtbl;
    interface IOpcSignatureRelationshipReferenceEnumerator
    {
        CONST_VTBL struct IOpcSignatureRelationshipReferenceEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
    ( (This)->lpVtbl -> MovePrevious(This,hasPrevious) )
    ( (This)->lpVtbl -> GetCurrent(This,relationshipReference) )
    ( (This)->lpVtbl -> Clone(This,copy) )
EXTERN_C const IID IID_IOpcRelationshipSelectorEnumerator;
    typedef struct IOpcRelationshipSelectorEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcRelationshipSelectorEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcRelationshipSelectorEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcRelationshipSelectorEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IOpcRelationshipSelectorEnumerator * This,
                                __RPC__out BOOL *hasNext);
        HRESULT ( STDMETHODCALLTYPE *MovePrevious )(
            __RPC__in IOpcRelationshipSelectorEnumerator * This,
                                __RPC__out BOOL *hasPrevious);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IOpcRelationshipSelectorEnumerator * This,
                                __RPC__deref_out_opt IOpcRelationshipSelector **relationshipSelector);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IOpcRelationshipSelectorEnumerator * This,
                                __RPC__deref_out_opt IOpcRelationshipSelectorEnumerator **copy);
        END_INTERFACE
    } IOpcRelationshipSelectorEnumeratorVtbl;
    interface IOpcRelationshipSelectorEnumerator
    {
        CONST_VTBL struct IOpcRelationshipSelectorEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
    ( (This)->lpVtbl -> MovePrevious(This,hasPrevious) )
    ( (This)->lpVtbl -> GetCurrent(This,relationshipSelector) )
    ( (This)->lpVtbl -> Clone(This,copy) )
EXTERN_C const IID IID_IOpcSignatureReferenceEnumerator;
    typedef struct IOpcSignatureReferenceEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcSignatureReferenceEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcSignatureReferenceEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcSignatureReferenceEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IOpcSignatureReferenceEnumerator * This,
                                __RPC__out BOOL *hasNext);
        HRESULT ( STDMETHODCALLTYPE *MovePrevious )(
            __RPC__in IOpcSignatureReferenceEnumerator * This,
                                __RPC__out BOOL *hasPrevious);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IOpcSignatureReferenceEnumerator * This,
                                __RPC__deref_out_opt IOpcSignatureReference **reference);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IOpcSignatureReferenceEnumerator * This,
                                __RPC__deref_out_opt IOpcSignatureReferenceEnumerator **copy);
        END_INTERFACE
    } IOpcSignatureReferenceEnumeratorVtbl;
    interface IOpcSignatureReferenceEnumerator
    {
        CONST_VTBL struct IOpcSignatureReferenceEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
    ( (This)->lpVtbl -> MovePrevious(This,hasPrevious) )
    ( (This)->lpVtbl -> GetCurrent(This,reference) )
    ( (This)->lpVtbl -> Clone(This,copy) )
EXTERN_C const IID IID_IOpcSignatureCustomObjectEnumerator;
    typedef struct IOpcSignatureCustomObjectEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcSignatureCustomObjectEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcSignatureCustomObjectEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcSignatureCustomObjectEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IOpcSignatureCustomObjectEnumerator * This,
                                __RPC__out BOOL *hasNext);
        HRESULT ( STDMETHODCALLTYPE *MovePrevious )(
            __RPC__in IOpcSignatureCustomObjectEnumerator * This,
                                __RPC__out BOOL *hasPrevious);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IOpcSignatureCustomObjectEnumerator * This,
                                __RPC__deref_out_opt IOpcSignatureCustomObject **customObject);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IOpcSignatureCustomObjectEnumerator * This,
                                __RPC__deref_out_opt IOpcSignatureCustomObjectEnumerator **copy);
        END_INTERFACE
    } IOpcSignatureCustomObjectEnumeratorVtbl;
    interface IOpcSignatureCustomObjectEnumerator
    {
        CONST_VTBL struct IOpcSignatureCustomObjectEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
    ( (This)->lpVtbl -> MovePrevious(This,hasPrevious) )
    ( (This)->lpVtbl -> GetCurrent(This,customObject) )
    ( (This)->lpVtbl -> Clone(This,copy) )
EXTERN_C const IID IID_IOpcCertificateEnumerator;
    typedef struct IOpcCertificateEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IOpcCertificateEnumerator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IOpcCertificateEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IOpcCertificateEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            IOpcCertificateEnumerator * This,
                                BOOL *hasNext);
        HRESULT ( STDMETHODCALLTYPE *MovePrevious )(
            IOpcCertificateEnumerator * This,
                                BOOL *hasPrevious);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            IOpcCertificateEnumerator * This,
                                const CERT_CONTEXT **certificate);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            IOpcCertificateEnumerator * This,
                                IOpcCertificateEnumerator **copy);
        END_INTERFACE
    } IOpcCertificateEnumeratorVtbl;
    interface IOpcCertificateEnumerator
    {
        CONST_VTBL struct IOpcCertificateEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
    ( (This)->lpVtbl -> MovePrevious(This,hasPrevious) )
    ( (This)->lpVtbl -> GetCurrent(This,certificate) )
    ( (This)->lpVtbl -> Clone(This,copy) )
EXTERN_C const IID IID_IOpcDigitalSignatureEnumerator;
    typedef struct IOpcDigitalSignatureEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcDigitalSignatureEnumerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcDigitalSignatureEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcDigitalSignatureEnumerator * This);
        HRESULT ( STDMETHODCALLTYPE *MoveNext )(
            __RPC__in IOpcDigitalSignatureEnumerator * This,
                                __RPC__out BOOL *hasNext);
        HRESULT ( STDMETHODCALLTYPE *MovePrevious )(
            __RPC__in IOpcDigitalSignatureEnumerator * This,
                                __RPC__out BOOL *hasPrevious);
        HRESULT ( STDMETHODCALLTYPE *GetCurrent )(
            __RPC__in IOpcDigitalSignatureEnumerator * This,
                                __RPC__deref_out_opt IOpcDigitalSignature **digitalSignature);
        HRESULT ( STDMETHODCALLTYPE *Clone )(
            __RPC__in IOpcDigitalSignatureEnumerator * This,
                                __RPC__deref_out_opt IOpcDigitalSignatureEnumerator **copy);
        END_INTERFACE
    } IOpcDigitalSignatureEnumeratorVtbl;
    interface IOpcDigitalSignatureEnumerator
    {
        CONST_VTBL struct IOpcDigitalSignatureEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MoveNext(This,hasNext) )
    ( (This)->lpVtbl -> MovePrevious(This,hasPrevious) )
    ( (This)->lpVtbl -> GetCurrent(This,digitalSignature) )
    ( (This)->lpVtbl -> Clone(This,copy) )
EXTERN_C const IID IID_IOpcSignaturePartReferenceSet;
    typedef struct IOpcSignaturePartReferenceSetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcSignaturePartReferenceSet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcSignaturePartReferenceSet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcSignaturePartReferenceSet * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IOpcSignaturePartReferenceSet * This,
                       __RPC__in_opt IOpcPartUri *partUri,
                               __RPC__in_opt LPCWSTR digestMethod,
                       OPC_CANONICALIZATION_METHOD transformMethod,
                                __RPC__deref_out_opt IOpcSignaturePartReference **partReference);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IOpcSignaturePartReferenceSet * This,
                       __RPC__in_opt IOpcSignaturePartReference *partReference);
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )(
            __RPC__in IOpcSignaturePartReferenceSet * This,
                                __RPC__deref_out_opt IOpcSignaturePartReferenceEnumerator **partReferenceEnumerator);
        END_INTERFACE
    } IOpcSignaturePartReferenceSetVtbl;
    interface IOpcSignaturePartReferenceSet
    {
        CONST_VTBL struct IOpcSignaturePartReferenceSetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,partUri,digestMethod,transformMethod,partReference) )
    ( (This)->lpVtbl -> Delete(This,partReference) )
    ( (This)->lpVtbl -> GetEnumerator(This,partReferenceEnumerator) )
EXTERN_C const IID IID_IOpcSignatureRelationshipReferenceSet;
    typedef struct IOpcSignatureRelationshipReferenceSetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcSignatureRelationshipReferenceSet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcSignatureRelationshipReferenceSet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcSignatureRelationshipReferenceSet * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IOpcSignatureRelationshipReferenceSet * This,
                       __RPC__in_opt IOpcUri *sourceUri,
                               __RPC__in_opt LPCWSTR digestMethod,
                       OPC_RELATIONSHIPS_SIGNING_OPTION relationshipSigningOption,
                               __RPC__in_opt IOpcRelationshipSelectorSet *selectorSet,
                       OPC_CANONICALIZATION_METHOD transformMethod,
                                __RPC__deref_out_opt IOpcSignatureRelationshipReference **relationshipReference);
        HRESULT ( STDMETHODCALLTYPE *CreateRelationshipSelectorSet )(
            __RPC__in IOpcSignatureRelationshipReferenceSet * This,
                        __RPC__deref_out_opt IOpcRelationshipSelectorSet **selectorSet);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IOpcSignatureRelationshipReferenceSet * This,
                       __RPC__in_opt IOpcSignatureRelationshipReference *relationshipReference);
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )(
            __RPC__in IOpcSignatureRelationshipReferenceSet * This,
                                __RPC__deref_out_opt IOpcSignatureRelationshipReferenceEnumerator **relationshipReferenceEnumerator);
        END_INTERFACE
    } IOpcSignatureRelationshipReferenceSetVtbl;
    interface IOpcSignatureRelationshipReferenceSet
    {
        CONST_VTBL struct IOpcSignatureRelationshipReferenceSetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,sourceUri,digestMethod,relationshipSigningOption,selectorSet,transformMethod,relationshipReference) )
    ( (This)->lpVtbl -> CreateRelationshipSelectorSet(This,selectorSet) )
    ( (This)->lpVtbl -> Delete(This,relationshipReference) )
    ( (This)->lpVtbl -> GetEnumerator(This,relationshipReferenceEnumerator) )
EXTERN_C const IID IID_IOpcRelationshipSelectorSet;
    typedef struct IOpcRelationshipSelectorSetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcRelationshipSelectorSet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcRelationshipSelectorSet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcRelationshipSelectorSet * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IOpcRelationshipSelectorSet * This,
                       OPC_RELATIONSHIP_SELECTOR selector,
                       __RPC__in LPCWSTR selectionCriterion,
                                __RPC__deref_out_opt IOpcRelationshipSelector **relationshipSelector);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IOpcRelationshipSelectorSet * This,
                       __RPC__in_opt IOpcRelationshipSelector *relationshipSelector);
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )(
            __RPC__in IOpcRelationshipSelectorSet * This,
                                __RPC__deref_out_opt IOpcRelationshipSelectorEnumerator **relationshipSelectorEnumerator);
        END_INTERFACE
    } IOpcRelationshipSelectorSetVtbl;
    interface IOpcRelationshipSelectorSet
    {
        CONST_VTBL struct IOpcRelationshipSelectorSetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,selector,selectionCriterion,relationshipSelector) )
    ( (This)->lpVtbl -> Delete(This,relationshipSelector) )
    ( (This)->lpVtbl -> GetEnumerator(This,relationshipSelectorEnumerator) )
EXTERN_C const IID IID_IOpcSignatureReferenceSet;
    typedef struct IOpcSignatureReferenceSetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcSignatureReferenceSet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcSignatureReferenceSet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcSignatureReferenceSet * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IOpcSignatureReferenceSet * This,
                       __RPC__in_opt IUri *referenceUri,
                               __RPC__in_opt LPCWSTR referenceId,
                               __RPC__in_opt LPCWSTR type,
                               __RPC__in_opt LPCWSTR digestMethod,
                       OPC_CANONICALIZATION_METHOD transformMethod,
                                __RPC__deref_out_opt IOpcSignatureReference **reference);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IOpcSignatureReferenceSet * This,
                       __RPC__in_opt IOpcSignatureReference *reference);
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )(
            __RPC__in IOpcSignatureReferenceSet * This,
                                __RPC__deref_out_opt IOpcSignatureReferenceEnumerator **referenceEnumerator);
        END_INTERFACE
    } IOpcSignatureReferenceSetVtbl;
    interface IOpcSignatureReferenceSet
    {
        CONST_VTBL struct IOpcSignatureReferenceSetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,referenceUri,referenceId,type,digestMethod,transformMethod,reference) )
    ( (This)->lpVtbl -> Delete(This,reference) )
    ( (This)->lpVtbl -> GetEnumerator(This,referenceEnumerator) )
EXTERN_C const IID IID_IOpcSignatureCustomObjectSet;
    typedef struct IOpcSignatureCustomObjectSetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcSignatureCustomObjectSet * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcSignatureCustomObjectSet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcSignatureCustomObjectSet * This);
        HRESULT ( STDMETHODCALLTYPE *Create )(
            __RPC__in IOpcSignatureCustomObjectSet * This,
                                __RPC__in_ecount_full(count) const UINT8 *xmlMarkup,
                       UINT32 count,
                                __RPC__deref_out_opt IOpcSignatureCustomObject **customObject);
        HRESULT ( STDMETHODCALLTYPE *Delete )(
            __RPC__in IOpcSignatureCustomObjectSet * This,
                       __RPC__in_opt IOpcSignatureCustomObject *customObject);
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )(
            __RPC__in IOpcSignatureCustomObjectSet * This,
                                __RPC__deref_out_opt IOpcSignatureCustomObjectEnumerator **customObjectEnumerator);
        END_INTERFACE
    } IOpcSignatureCustomObjectSetVtbl;
    interface IOpcSignatureCustomObjectSet
    {
        CONST_VTBL struct IOpcSignatureCustomObjectSetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Create(This,xmlMarkup,count,customObject) )
    ( (This)->lpVtbl -> Delete(This,customObject) )
    ( (This)->lpVtbl -> GetEnumerator(This,customObjectEnumerator) )
EXTERN_C const IID IID_IOpcCertificateSet;
    typedef struct IOpcCertificateSetVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IOpcCertificateSet * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IOpcCertificateSet * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IOpcCertificateSet * This);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            IOpcCertificateSet * This,
                       const CERT_CONTEXT *certificate);
        HRESULT ( STDMETHODCALLTYPE *Remove )(
            IOpcCertificateSet * This,
                       const CERT_CONTEXT *certificate);
        HRESULT ( STDMETHODCALLTYPE *GetEnumerator )(
            IOpcCertificateSet * This,
                                IOpcCertificateEnumerator **certificateEnumerator);
        END_INTERFACE
    } IOpcCertificateSetVtbl;
    interface IOpcCertificateSet
    {
        CONST_VTBL struct IOpcCertificateSetVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Add(This,certificate) )
    ( (This)->lpVtbl -> Remove(This,certificate) )
    ( (This)->lpVtbl -> GetEnumerator(This,certificateEnumerator) )
EXTERN_C const IID IID_IOpcFactory;
    typedef struct IOpcFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IOpcFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IOpcFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IOpcFactory * This);
        HRESULT ( STDMETHODCALLTYPE *CreatePackageRootUri )(
            __RPC__in IOpcFactory * This,
                                __RPC__deref_out_opt IOpcUri **rootUri);
        HRESULT ( STDMETHODCALLTYPE *CreatePartUri )(
            __RPC__in IOpcFactory * This,
                               __RPC__in_string LPCWSTR pwzUri,
                                __RPC__deref_out_opt IOpcPartUri **partUri);
                      HRESULT ( STDMETHODCALLTYPE *CreateStreamOnFile )(
            IOpcFactory * This,
                               LPCWSTR filename,
                       OPC_STREAM_IO_MODE ioMode,
                               LPSECURITY_ATTRIBUTES securityAttributes,
                       DWORD dwFlagsAndAttributes,
                                IStream **stream);
        HRESULT ( STDMETHODCALLTYPE *CreatePackage )(
            __RPC__in IOpcFactory * This,
                                __RPC__deref_out_opt IOpcPackage **package);
        HRESULT ( STDMETHODCALLTYPE *ReadPackageFromStream )(
            __RPC__in IOpcFactory * This,
                       __RPC__in_opt IStream *stream,
                       OPC_READ_FLAGS flags,
                                __RPC__deref_out_opt IOpcPackage **package);
        HRESULT ( STDMETHODCALLTYPE *WritePackageToStream )(
            __RPC__in IOpcFactory * This,
                       __RPC__in_opt IOpcPackage *package,
                       OPC_WRITE_FLAGS flags,
                       __RPC__in_opt IStream *stream);
        HRESULT ( STDMETHODCALLTYPE *CreateDigitalSignatureManager )(
            __RPC__in IOpcFactory * This,
                       __RPC__in_opt IOpcPackage *package,
                                __RPC__deref_out_opt IOpcDigitalSignatureManager **signatureManager);
        END_INTERFACE
    } IOpcFactoryVtbl;
    interface IOpcFactory
    {
        CONST_VTBL struct IOpcFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreatePackageRootUri(This,rootUri) )
    ( (This)->lpVtbl -> CreatePartUri(This,pwzUri,partUri) )
    ( (This)->lpVtbl -> CreateStreamOnFile(This,filename,ioMode,securityAttributes,dwFlagsAndAttributes,stream) )
    ( (This)->lpVtbl -> CreatePackage(This,package) )
    ( (This)->lpVtbl -> ReadPackageFromStream(This,stream,flags,package) )
    ( (This)->lpVtbl -> WritePackageToStream(This,package,flags,stream) )
    ( (This)->lpVtbl -> CreateDigitalSignatureManager(This,package,signatureManager) )
EXTERN_C const CLSID CLSID_OpcFactory;
class DECLSPEC_UUID("6B2D6BA0-9F3E-4f27-920B-313CC426A39E")
OpcFactory;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_msopc_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msopc_0000_0003_v0_0_s_ifspec;
}
