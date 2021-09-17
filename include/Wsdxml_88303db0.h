#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IWSDXMLContext IWSDXMLContext;
#include "oaidl.h"
#include "ocidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct _WSDXML_NAMESPACE WSDXML_NAMESPACE;
typedef struct _WSDXML_NAME WSDXML_NAME;
typedef struct _WSDXML_TYPE WSDXML_TYPE;
typedef struct _WSDXML_PREFIX_MAPPING WSDXML_PREFIX_MAPPING;
typedef struct _WSDXML_ATTRIBUTE WSDXML_ATTRIBUTE;
typedef struct _WSDXML_NODE WSDXML_NODE;
typedef struct _WSDXML_ELEMENT WSDXML_ELEMENT;
typedef struct _WSDXML_TEXT WSDXML_TEXT;
typedef struct _WSDXML_ELEMENT_LIST WSDXML_ELEMENT_LIST;
typedef const WSDXML_NAMESPACE *PCWSDXML_NAMESPACE;
typedef const WSDXML_TYPE *PCWSDXML_TYPE;
typedef struct _WSD_DATETIME
    {
    BOOL isPositive;
    ULONG year;
    UCHAR month;
    UCHAR day;
    UCHAR hour;
    UCHAR minute;
    UCHAR second;
    UINT millisecond;
    BOOL TZIsLocal;
    BOOL TZIsPositive;
    UCHAR TZHour;
    UCHAR TZMinute;
    } WSD_DATETIME;
typedef struct _WSD_DURATION
    {
    BOOL isPositive;
    ULONG year;
    ULONG month;
    ULONG day;
    ULONG hour;
    ULONG minute;
    ULONG second;
    ULONG millisecond;
    } WSD_DURATION;
enum __MIDL___MIDL_itf_wsdxml_0000_0000_0001
    {
        OpNone = 0,
        OpEndOfTable = ( OpNone + 1 ) ,
        OpBeginElement_ = ( OpEndOfTable + 1 ) ,
        OpBeginAnyElement = ( OpBeginElement_ + 1 ) ,
        OpEndElement = ( OpBeginAnyElement + 1 ) ,
        OpElement_ = ( OpEndElement + 1 ) ,
        OpAnyElement = ( OpElement_ + 1 ) ,
        OpAnyElements = ( OpAnyElement + 1 ) ,
        OpAnyText = ( OpAnyElements + 1 ) ,
        OpAttribute_ = ( OpAnyText + 1 ) ,
        OpBeginChoice = ( OpAttribute_ + 1 ) ,
        OpEndChoice = ( OpBeginChoice + 1 ) ,
        OpBeginSequence = ( OpEndChoice + 1 ) ,
        OpEndSequence = ( OpBeginSequence + 1 ) ,
        OpBeginAll = ( OpEndSequence + 1 ) ,
        OpEndAll = ( OpBeginAll + 1 ) ,
        OpAnything = ( OpEndAll + 1 ) ,
        OpAnyNumber = ( OpAnything + 1 ) ,
        OpOneOrMore = ( OpAnyNumber + 1 ) ,
        OpOptional = ( OpOneOrMore + 1 ) ,
        OpFormatBool_ = ( OpOptional + 1 ) ,
        OpFormatInt8_ = ( OpFormatBool_ + 1 ) ,
        OpFormatInt16_ = ( OpFormatInt8_ + 1 ) ,
        OpFormatInt32_ = ( OpFormatInt16_ + 1 ) ,
        OpFormatInt64_ = ( OpFormatInt32_ + 1 ) ,
        OpFormatUInt8_ = ( OpFormatInt64_ + 1 ) ,
        OpFormatUInt16_ = ( OpFormatUInt8_ + 1 ) ,
        OpFormatUInt32_ = ( OpFormatUInt16_ + 1 ) ,
        OpFormatUInt64_ = ( OpFormatUInt32_ + 1 ) ,
        OpFormatUnicodeString_ = ( OpFormatUInt64_ + 1 ) ,
        OpFormatDom_ = ( OpFormatUnicodeString_ + 1 ) ,
        OpFormatStruct_ = ( OpFormatDom_ + 1 ) ,
        OpFormatUri_ = ( OpFormatStruct_ + 1 ) ,
        OpFormatUuidUri_ = ( OpFormatUri_ + 1 ) ,
        OpFormatName_ = ( OpFormatUuidUri_ + 1 ) ,
        OpFormatListInsertTail_ = ( OpFormatName_ + 1 ) ,
        OpFormatType_ = ( OpFormatListInsertTail_ + 1 ) ,
        OpFormatDynamicType_ = ( OpFormatType_ + 1 ) ,
        OpFormatLookupType_ = ( OpFormatDynamicType_ + 1 ) ,
        OpFormatDuration_ = ( OpFormatLookupType_ + 1 ) ,
        OpFormatDateTime_ = ( OpFormatDuration_ + 1 ) ,
        OpFormatFloat_ = ( OpFormatDateTime_ + 1 ) ,
        OpFormatDouble_ = ( OpFormatFloat_ + 1 ) ,
        OpProcess_ = ( OpFormatDouble_ + 1 ) ,
        OpQualifiedAttribute_ = ( OpProcess_ + 1 ) ,
        OpFormatXMLDeclaration_ = ( OpQualifiedAttribute_ + 1 ) ,
        OpFormatMax = ( OpFormatXMLDeclaration_ + 1 )
    } ;
HRESULT WINAPI
WSDXMLGetNameFromBuiltinNamespace(
    _In_ LPCWSTR pszNamespace,
    _In_ LPCWSTR pszName,
    _Outptr_ WSDXML_NAME** ppName);
HRESULT WINAPI
WSDXMLCreateContext(
    _Outptr_ IWSDXMLContext** ppContext);
extern RPC_IF_HANDLE __MIDL_itf_wsdxml_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdxml_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IWSDXMLContext;
    typedef struct IWSDXMLContextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IWSDXMLContext * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IWSDXMLContext * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IWSDXMLContext * This);
        HRESULT ( STDMETHODCALLTYPE *AddNamespace )(
            IWSDXMLContext * This,
            _In_ LPCWSTR pszUri,
            _In_ LPCWSTR pszSuggestedPrefix,
            _Outptr_opt_ WSDXML_NAMESPACE **ppNamespace);
        HRESULT ( STDMETHODCALLTYPE *AddNameToNamespace )(
            IWSDXMLContext * This,
            _In_ LPCWSTR pszUri,
            _In_ LPCWSTR pszName,
            _Outptr_opt_ WSDXML_NAME **ppName);
        HRESULT ( STDMETHODCALLTYPE *SetNamespaces )(
            IWSDXMLContext * This,
            _In_reads_(wNamespacesCount) const PCWSDXML_NAMESPACE *pNamespaces,
                       WORD wNamespacesCount,
                       BYTE bLayerNumber);
        HRESULT ( STDMETHODCALLTYPE *SetTypes )(
            IWSDXMLContext * This,
            _In_reads_(dwTypesCount) const PCWSDXML_TYPE *pTypes,
                       DWORD dwTypesCount,
                       BYTE bLayerNumber);
        END_INTERFACE
    } IWSDXMLContextVtbl;
    interface IWSDXMLContext
    {
        CONST_VTBL struct IWSDXMLContextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> AddNamespace(This,pszUri,pszSuggestedPrefix,ppNamespace) )
    ( (This)->lpVtbl -> AddNameToNamespace(This,pszUri,pszName,ppName) )
    ( (This)->lpVtbl -> SetNamespaces(This,pNamespaces,wNamespacesCount,bLayerNumber) )
    ( (This)->lpVtbl -> SetTypes(This,pTypes,dwTypesCount,bLayerNumber) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_wsdxml_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_wsdxml_0000_0001_v0_0_s_ifspec;
}
