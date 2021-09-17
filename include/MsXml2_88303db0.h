#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IXMLDOMImplementation IXMLDOMImplementation;
typedef interface IXMLDOMNode IXMLDOMNode;
typedef interface IXMLDOMDocumentFragment IXMLDOMDocumentFragment;
typedef interface IXMLDOMDocument IXMLDOMDocument;
typedef interface IXMLDOMDocument2 IXMLDOMDocument2;
typedef interface IXMLDOMDocument3 IXMLDOMDocument3;
typedef interface IXMLDOMNodeList IXMLDOMNodeList;
typedef interface IXMLDOMNamedNodeMap IXMLDOMNamedNodeMap;
typedef interface IXMLDOMCharacterData IXMLDOMCharacterData;
typedef interface IXMLDOMAttribute IXMLDOMAttribute;
typedef interface IXMLDOMElement IXMLDOMElement;
typedef interface IXMLDOMText IXMLDOMText;
typedef interface IXMLDOMComment IXMLDOMComment;
typedef interface IXMLDOMProcessingInstruction IXMLDOMProcessingInstruction;
typedef interface IXMLDOMCDATASection IXMLDOMCDATASection;
typedef interface IXMLDOMDocumentType IXMLDOMDocumentType;
typedef interface IXMLDOMNotation IXMLDOMNotation;
typedef interface IXMLDOMEntity IXMLDOMEntity;
typedef interface IXMLDOMEntityReference IXMLDOMEntityReference;
typedef interface IXMLDOMParseError IXMLDOMParseError;
typedef interface IXMLDOMParseError2 IXMLDOMParseError2;
typedef interface IXMLDOMParseErrorCollection IXMLDOMParseErrorCollection;
typedef interface IXMLDOMSchemaCollection IXMLDOMSchemaCollection;
typedef interface IXTLRuntime IXTLRuntime;
typedef interface IXSLTemplate IXSLTemplate;
typedef interface IXSLProcessor IXSLProcessor;
typedef interface ISAXXMLReader ISAXXMLReader;
typedef interface ISAXXMLFilter ISAXXMLFilter;
typedef interface ISAXLocator ISAXLocator;
typedef interface ISAXEntityResolver ISAXEntityResolver;
typedef interface ISAXContentHandler ISAXContentHandler;
typedef interface ISAXDTDHandler ISAXDTDHandler;
typedef interface ISAXErrorHandler ISAXErrorHandler;
typedef interface ISAXLexicalHandler ISAXLexicalHandler;
typedef interface ISAXDeclHandler ISAXDeclHandler;
typedef interface ISAXAttributes ISAXAttributes;
typedef interface IVBSAXXMLReader IVBSAXXMLReader;
typedef interface IVBSAXXMLFilter IVBSAXXMLFilter;
typedef interface IVBSAXLocator IVBSAXLocator;
typedef interface IVBSAXEntityResolver IVBSAXEntityResolver;
typedef interface IVBSAXContentHandler IVBSAXContentHandler;
typedef interface IVBSAXDTDHandler IVBSAXDTDHandler;
typedef interface IVBSAXErrorHandler IVBSAXErrorHandler;
typedef interface IVBSAXLexicalHandler IVBSAXLexicalHandler;
typedef interface IVBSAXDeclHandler IVBSAXDeclHandler;
typedef interface IVBSAXAttributes IVBSAXAttributes;
typedef interface IMXWriter IMXWriter;
typedef interface IMXAttributes IMXAttributes;
typedef interface IMXReaderControl IMXReaderControl;
typedef interface IMXSchemaDeclHandler IMXSchemaDeclHandler;
typedef interface IMXXMLFilter IMXXMLFilter;
typedef interface IXMLDOMSchemaCollection2 IXMLDOMSchemaCollection2;
typedef interface ISchemaStringCollection ISchemaStringCollection;
typedef interface ISchemaItemCollection ISchemaItemCollection;
typedef interface ISchemaItem ISchemaItem;
typedef interface ISchema ISchema;
typedef interface ISchemaParticle ISchemaParticle;
typedef interface ISchemaAttribute ISchemaAttribute;
typedef interface ISchemaElement ISchemaElement;
typedef interface ISchemaType ISchemaType;
typedef interface ISchemaComplexType ISchemaComplexType;
typedef interface ISchemaAttributeGroup ISchemaAttributeGroup;
typedef interface ISchemaModelGroup ISchemaModelGroup;
typedef interface ISchemaAny ISchemaAny;
typedef interface ISchemaIdentityConstraint ISchemaIdentityConstraint;
typedef interface ISchemaNotation ISchemaNotation;
typedef interface IXMLElementCollection IXMLElementCollection;
typedef interface IXMLDocument IXMLDocument;
typedef interface IXMLDocument2 IXMLDocument2;
typedef interface IXMLElement IXMLElement;
typedef interface IXMLElement2 IXMLElement2;
typedef interface IXMLAttribute IXMLAttribute;
typedef interface IXMLError IXMLError;
typedef interface IXMLDOMSelection IXMLDOMSelection;
typedef interface XMLDOMDocumentEvents XMLDOMDocumentEvents;
typedef interface IDSOControl IDSOControl;
typedef interface IXMLHTTPRequest IXMLHTTPRequest;
typedef interface IServerXMLHTTPRequest IServerXMLHTTPRequest;
typedef interface IServerXMLHTTPRequest2 IServerXMLHTTPRequest2;
typedef interface IMXNamespacePrefixes IMXNamespacePrefixes;
typedef interface IVBMXNamespaceManager IVBMXNamespaceManager;
typedef interface IMXNamespaceManager IMXNamespaceManager;
typedef class DOMDocument DOMDocument;
typedef class DOMDocument26 DOMDocument26;
typedef class DOMDocument30 DOMDocument30;
typedef class FreeThreadedDOMDocument FreeThreadedDOMDocument;
typedef class FreeThreadedDOMDocument26 FreeThreadedDOMDocument26;
typedef class FreeThreadedDOMDocument30 FreeThreadedDOMDocument30;
typedef class XMLSchemaCache XMLSchemaCache;
typedef class XMLSchemaCache26 XMLSchemaCache26;
typedef class XMLSchemaCache30 XMLSchemaCache30;
typedef class XSLTemplate XSLTemplate;
typedef class XSLTemplate26 XSLTemplate26;
typedef class XSLTemplate30 XSLTemplate30;
typedef class DSOControl DSOControl;
typedef class DSOControl26 DSOControl26;
typedef class DSOControl30 DSOControl30;
typedef class XMLHTTP XMLHTTP;
typedef class XMLHTTP26 XMLHTTP26;
typedef class XMLHTTP30 XMLHTTP30;
typedef class ServerXMLHTTP ServerXMLHTTP;
typedef class ServerXMLHTTP30 ServerXMLHTTP30;
typedef class SAXXMLReader SAXXMLReader;
typedef class SAXXMLReader30 SAXXMLReader30;
typedef class MXXMLWriter MXXMLWriter;
typedef class MXXMLWriter30 MXXMLWriter30;
typedef class MXHTMLWriter MXHTMLWriter;
typedef class MXHTMLWriter30 MXHTMLWriter30;
typedef class SAXAttributes SAXAttributes;
typedef class SAXAttributes30 SAXAttributes30;
typedef class MXNamespaceManager MXNamespaceManager;
typedef class XMLDocument XMLDocument;
#include "unknwn.h"
#include "objidl.h"
#include "oaidl.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma endregion
#pragma region Desktop Family
#pragma endregion
namespace MSXML2 {
typedef struct _xml_error
    {
    unsigned int _nLine;
    BSTR _pchBuf;
    unsigned int _cchBuf;
    unsigned int _ich;
    BSTR _pszFound;
    BSTR _pszExpected;
    DWORD _reserved1;
    DWORD _reserved2;
    } XML_ERROR;
extern RPC_IF_HANDLE __MIDL_itf_msxml2_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msxml2_0000_0000_v0_0_s_ifspec;
typedef
enum tagXMLEMEM_TYPE
    {
        XMLELEMTYPE_ELEMENT = 0,
        XMLELEMTYPE_TEXT = ( XMLELEMTYPE_ELEMENT + 1 ) ,
        XMLELEMTYPE_COMMENT = ( XMLELEMTYPE_TEXT + 1 ) ,
        XMLELEMTYPE_DOCUMENT = ( XMLELEMTYPE_COMMENT + 1 ) ,
        XMLELEMTYPE_DTD = ( XMLELEMTYPE_DOCUMENT + 1 ) ,
        XMLELEMTYPE_PI = ( XMLELEMTYPE_DTD + 1 ) ,
        XMLELEMTYPE_OTHER = ( XMLELEMTYPE_PI + 1 )
    } XMLELEM_TYPE;
typedef
enum tagDOMNodeType
    {
        NODE_INVALID = 0,
        NODE_ELEMENT = ( NODE_INVALID + 1 ) ,
        NODE_ATTRIBUTE = ( NODE_ELEMENT + 1 ) ,
        NODE_TEXT = ( NODE_ATTRIBUTE + 1 ) ,
        NODE_CDATA_SECTION = ( NODE_TEXT + 1 ) ,
        NODE_ENTITY_REFERENCE = ( NODE_CDATA_SECTION + 1 ) ,
        NODE_ENTITY = ( NODE_ENTITY_REFERENCE + 1 ) ,
        NODE_PROCESSING_INSTRUCTION = ( NODE_ENTITY + 1 ) ,
        NODE_COMMENT = ( NODE_PROCESSING_INSTRUCTION + 1 ) ,
        NODE_DOCUMENT = ( NODE_COMMENT + 1 ) ,
        NODE_DOCUMENT_TYPE = ( NODE_DOCUMENT + 1 ) ,
        NODE_DOCUMENT_FRAGMENT = ( NODE_DOCUMENT_TYPE + 1 ) ,
        NODE_NOTATION = ( NODE_DOCUMENT_FRAGMENT + 1 )
    } DOMNodeType;
typedef
enum _SERVERXMLHTTP_OPTION
    {
        SXH_OPTION_URL = -1,
        SXH_OPTION_URL_CODEPAGE = ( SXH_OPTION_URL + 1 ) ,
        SXH_OPTION_ESCAPE_PERCENT_IN_URL = ( SXH_OPTION_URL_CODEPAGE + 1 ) ,
        SXH_OPTION_IGNORE_SERVER_SSL_CERT_ERROR_FLAGS = ( SXH_OPTION_ESCAPE_PERCENT_IN_URL + 1 ) ,
        SXH_OPTION_SELECT_CLIENT_SSL_CERT = ( SXH_OPTION_IGNORE_SERVER_SSL_CERT_ERROR_FLAGS + 1 )
    } SERVERXMLHTTP_OPTION;
typedef
enum _SXH_SERVER_CERT_OPTION
    {
        SXH_SERVER_CERT_IGNORE_UNKNOWN_CA = 0x100,
        SXH_SERVER_CERT_IGNORE_WRONG_USAGE = 0x200,
        SXH_SERVER_CERT_IGNORE_CERT_CN_INVALID = 0x1000,
        SXH_SERVER_CERT_IGNORE_CERT_DATE_INVALID = 0x2000,
        SXH_SERVER_CERT_IGNORE_ALL_SERVER_ERRORS = ( ( ( SXH_SERVER_CERT_IGNORE_UNKNOWN_CA + SXH_SERVER_CERT_IGNORE_WRONG_USAGE ) + SXH_SERVER_CERT_IGNORE_CERT_CN_INVALID ) + SXH_SERVER_CERT_IGNORE_CERT_DATE_INVALID )
    } SXH_SERVER_CERT_OPTION;
typedef
enum _SXH_PROXY_SETTING
    {
        SXH_PROXY_SET_DEFAULT = 0,
        SXH_PROXY_SET_PRECONFIG = 0,
        SXH_PROXY_SET_DIRECT = 0x1,
        SXH_PROXY_SET_PROXY = 0x2
    } SXH_PROXY_SETTING;
typedef
enum _SOMITEMTYPE
    {
        SOMITEM_SCHEMA = 0x1000,
        SOMITEM_ATTRIBUTE = 0x1001,
        SOMITEM_ATTRIBUTEGROUP = 0x1002,
        SOMITEM_NOTATION = 0x1003,
        SOMITEM_ANNOTATION = 0x1004,
        SOMITEM_IDENTITYCONSTRAINT = 0x1100,
        SOMITEM_KEY = 0x1101,
        SOMITEM_KEYREF = 0x1102,
        SOMITEM_UNIQUE = 0x1103,
        SOMITEM_ANYTYPE = 0x2000,
        SOMITEM_DATATYPE = 0x2100,
        SOMITEM_DATATYPE_ANYTYPE = 0x2101,
        SOMITEM_DATATYPE_ANYURI = 0x2102,
        SOMITEM_DATATYPE_BASE64BINARY = 0x2103,
        SOMITEM_DATATYPE_BOOLEAN = 0x2104,
        SOMITEM_DATATYPE_BYTE = 0x2105,
        SOMITEM_DATATYPE_DATE = 0x2106,
        SOMITEM_DATATYPE_DATETIME = 0x2107,
        SOMITEM_DATATYPE_DAY = 0x2108,
        SOMITEM_DATATYPE_DECIMAL = 0x2109,
        SOMITEM_DATATYPE_DOUBLE = 0x210a,
        SOMITEM_DATATYPE_DURATION = 0x210b,
        SOMITEM_DATATYPE_ENTITIES = 0x210c,
        SOMITEM_DATATYPE_ENTITY = 0x210d,
        SOMITEM_DATATYPE_FLOAT = 0x210e,
        SOMITEM_DATATYPE_HEXBINARY = 0x210f,
        SOMITEM_DATATYPE_ID = 0x2110,
        SOMITEM_DATATYPE_IDREF = 0x2111,
        SOMITEM_DATATYPE_IDREFS = 0x2112,
        SOMITEM_DATATYPE_INT = 0x2113,
        SOMITEM_DATATYPE_INTEGER = 0x2114,
        SOMITEM_DATATYPE_LANGUAGE = 0x2115,
        SOMITEM_DATATYPE_LONG = 0x2116,
        SOMITEM_DATATYPE_MONTH = 0x2117,
        SOMITEM_DATATYPE_MONTHDAY = 0x2118,
        SOMITEM_DATATYPE_NAME = 0x2119,
        SOMITEM_DATATYPE_NCNAME = 0x211a,
        SOMITEM_DATATYPE_NEGATIVEINTEGER = 0x211b,
        SOMITEM_DATATYPE_NMTOKEN = 0x211c,
        SOMITEM_DATATYPE_NMTOKENS = 0x211d,
        SOMITEM_DATATYPE_NONNEGATIVEINTEGER = 0x211e,
        SOMITEM_DATATYPE_NONPOSITIVEINTEGER = 0x211f,
        SOMITEM_DATATYPE_NORMALIZEDSTRING = 0x2120,
        SOMITEM_DATATYPE_NOTATION = 0x2121,
        SOMITEM_DATATYPE_POSITIVEINTEGER = 0x2122,
        SOMITEM_DATATYPE_QNAME = 0x2123,
        SOMITEM_DATATYPE_SHORT = 0x2124,
        SOMITEM_DATATYPE_STRING = 0x2125,
        SOMITEM_DATATYPE_TIME = 0x2126,
        SOMITEM_DATATYPE_TOKEN = 0x2127,
        SOMITEM_DATATYPE_UNSIGNEDBYTE = 0x2128,
        SOMITEM_DATATYPE_UNSIGNEDINT = 0x2129,
        SOMITEM_DATATYPE_UNSIGNEDLONG = 0x212a,
        SOMITEM_DATATYPE_UNSIGNEDSHORT = 0x212b,
        SOMITEM_DATATYPE_YEAR = 0x212c,
        SOMITEM_DATATYPE_YEARMONTH = 0x212d,
        SOMITEM_DATATYPE_ANYSIMPLETYPE = 0x21ff,
        SOMITEM_SIMPLETYPE = 0x2200,
        SOMITEM_COMPLEXTYPE = 0x2400,
        SOMITEM_PARTICLE = 0x4000,
        SOMITEM_ANY = 0x4001,
        SOMITEM_ANYATTRIBUTE = 0x4002,
        SOMITEM_ELEMENT = 0x4003,
        SOMITEM_GROUP = 0x4100,
        SOMITEM_ALL = 0x4101,
        SOMITEM_CHOICE = 0x4102,
        SOMITEM_SEQUENCE = 0x4103,
        SOMITEM_EMPTYPARTICLE = 0x4104,
        SOMITEM_NULL = 0x800,
        SOMITEM_NULL_TYPE = 0x2800,
        SOMITEM_NULL_ANY = 0x4801,
        SOMITEM_NULL_ANYATTRIBUTE = 0x4802,
        SOMITEM_NULL_ELEMENT = 0x4803
    } SOMITEMTYPE;
typedef
enum _SCHEMAUSE
    {
        SCHEMAUSE_OPTIONAL = 0,
        SCHEMAUSE_PROHIBITED = ( SCHEMAUSE_OPTIONAL + 1 ) ,
        SCHEMAUSE_REQUIRED = ( SCHEMAUSE_PROHIBITED + 1 )
    } SCHEMAUSE;
typedef
enum _SCHEMADERIVATIONMETHOD
    {
        SCHEMADERIVATIONMETHOD_EMPTY = 0,
        SCHEMADERIVATIONMETHOD_SUBSTITUTION = 0x1,
        SCHEMADERIVATIONMETHOD_EXTENSION = 0x2,
        SCHEMADERIVATIONMETHOD_RESTRICTION = 0x4,
        SCHEMADERIVATIONMETHOD_LIST = 0x8,
        SCHEMADERIVATIONMETHOD_UNION = 0x10,
        SCHEMADERIVATIONMETHOD_ALL = 0xff,
        SCHEMADERIVATIONMETHOD_NONE = 0x100
    } SCHEMADERIVATIONMETHOD;
typedef
enum _SCHEMACONTENTTYPE
    {
        SCHEMACONTENTTYPE_EMPTY = 0,
        SCHEMACONTENTTYPE_TEXTONLY = ( SCHEMACONTENTTYPE_EMPTY + 1 ) ,
        SCHEMACONTENTTYPE_ELEMENTONLY = ( SCHEMACONTENTTYPE_TEXTONLY + 1 ) ,
        SCHEMACONTENTTYPE_MIXED = ( SCHEMACONTENTTYPE_ELEMENTONLY + 1 )
    } SCHEMACONTENTTYPE;
typedef
enum _SCHEMAPROCESSCONTENTS
    {
        SCHEMAPROCESSCONTENTS_NONE = 0,
        SCHEMAPROCESSCONTENTS_SKIP = ( SCHEMAPROCESSCONTENTS_NONE + 1 ) ,
        SCHEMAPROCESSCONTENTS_LAX = ( SCHEMAPROCESSCONTENTS_SKIP + 1 ) ,
        SCHEMAPROCESSCONTENTS_STRICT = ( SCHEMAPROCESSCONTENTS_LAX + 1 )
    } SCHEMAPROCESSCONTENTS;
typedef
enum _SCHEMAWHITESPACE
    {
        SCHEMAWHITESPACE_NONE = -1,
        SCHEMAWHITESPACE_PRESERVE = 0,
        SCHEMAWHITESPACE_REPLACE = 1,
        SCHEMAWHITESPACE_COLLAPSE = 2
    } SCHEMAWHITESPACE;
typedef
enum _SCHEMATYPEVARIETY
    {
        SCHEMATYPEVARIETY_NONE = -1,
        SCHEMATYPEVARIETY_ATOMIC = 0,
        SCHEMATYPEVARIETY_LIST = 1,
        SCHEMATYPEVARIETY_UNION = 2
    } SCHEMATYPEVARIETY;
EXTERN_C const IID LIBID_MSXML2;
EXTERN_C const IID IID_IXMLDOMImplementation;
    typedef struct IXMLDOMImplementationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMImplementation * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMImplementation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMImplementation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMImplementation * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMImplementation * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMImplementation * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMImplementation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *hasFeature )(
            IXMLDOMImplementation * This,
                       BSTR feature,
                       BSTR version,
                                VARIANT_BOOL *hasFeature);
        END_INTERFACE
    } IXMLDOMImplementationVtbl;
    interface IXMLDOMImplementation
    {
        CONST_VTBL struct IXMLDOMImplementationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> hasFeature(This,feature,version,hasFeature) )
EXTERN_C const IID IID_IXMLDOMNode;
    typedef struct IXMLDOMNodeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMNode * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMNode * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMNode * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMNode * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMNode * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMNode * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMNode * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeName )(
            IXMLDOMNode * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeValue )(
            IXMLDOMNode * This,
                                VARIANT *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeValue )(
            IXMLDOMNode * This,
                       VARIANT value);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeType )(
            IXMLDOMNode * This,
                                DOMNodeType *type);
                                        HRESULT ( STDMETHODCALLTYPE *get_parentNode )(
            IXMLDOMNode * This,
                                IXMLDOMNode **parent);
                                        HRESULT ( STDMETHODCALLTYPE *get_childNodes )(
            IXMLDOMNode * This,
                                IXMLDOMNodeList **childList);
                                        HRESULT ( STDMETHODCALLTYPE *get_firstChild )(
            IXMLDOMNode * This,
                                IXMLDOMNode **firstChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_lastChild )(
            IXMLDOMNode * This,
                                IXMLDOMNode **lastChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_previousSibling )(
            IXMLDOMNode * This,
                                IXMLDOMNode **previousSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_nextSibling )(
            IXMLDOMNode * This,
                                IXMLDOMNode **nextSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            IXMLDOMNode * This,
                                IXMLDOMNamedNodeMap **attributeMap);
                               HRESULT ( STDMETHODCALLTYPE *insertBefore )(
            IXMLDOMNode * This,
                       IXMLDOMNode *newChild,
                       VARIANT refChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *replaceChild )(
            IXMLDOMNode * This,
                       IXMLDOMNode *newChild,
                       IXMLDOMNode *oldChild,
                                IXMLDOMNode **outOldChild);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXMLDOMNode * This,
                       IXMLDOMNode *childNode,
                                IXMLDOMNode **oldChild);
                               HRESULT ( STDMETHODCALLTYPE *appendChild )(
            IXMLDOMNode * This,
                       IXMLDOMNode *newChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *hasChildNodes )(
            IXMLDOMNode * This,
                                VARIANT_BOOL *hasChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_ownerDocument )(
            IXMLDOMNode * This,
                                IXMLDOMDocument **XMLDOMDocument);
                               HRESULT ( STDMETHODCALLTYPE *cloneNode )(
            IXMLDOMNode * This,
                       VARIANT_BOOL deep,
                                IXMLDOMNode **cloneRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypeString )(
            IXMLDOMNode * This,
                                BSTR *nodeType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXMLDOMNode * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXMLDOMNode * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_specified )(
            IXMLDOMNode * This,
                                VARIANT_BOOL *isSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_definition )(
            IXMLDOMNode * This,
                                IXMLDOMNode **definitionNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypedValue )(
            IXMLDOMNode * This,
                                VARIANT *typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeTypedValue )(
            IXMLDOMNode * This,
                       VARIANT typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_dataType )(
            IXMLDOMNode * This,
                                VARIANT *dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *put_dataType )(
            IXMLDOMNode * This,
                       BSTR dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_xml )(
            IXMLDOMNode * This,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *transformNode )(
            IXMLDOMNode * This,
                       IXMLDOMNode *stylesheet,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *selectNodes )(
            IXMLDOMNode * This,
                       BSTR queryString,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *selectSingleNode )(
            IXMLDOMNode * This,
                       BSTR queryString,
                                IXMLDOMNode **resultNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_parsed )(
            IXMLDOMNode * This,
                                VARIANT_BOOL *isParsed);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXMLDOMNode * This,
                                BSTR *namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_prefix )(
            IXMLDOMNode * This,
                                BSTR *prefixString);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseName )(
            IXMLDOMNode * This,
                                BSTR *nameString);
                               HRESULT ( STDMETHODCALLTYPE *transformNodeToObject )(
            IXMLDOMNode * This,
                       IXMLDOMNode *stylesheet,
                       VARIANT outputObject);
        END_INTERFACE
    } IXMLDOMNodeVtbl;
    interface IXMLDOMNode
    {
        CONST_VTBL struct IXMLDOMNodeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_nodeName(This,name) )
    ( (This)->lpVtbl -> get_nodeValue(This,value) )
    ( (This)->lpVtbl -> put_nodeValue(This,value) )
    ( (This)->lpVtbl -> get_nodeType(This,type) )
    ( (This)->lpVtbl -> get_parentNode(This,parent) )
    ( (This)->lpVtbl -> get_childNodes(This,childList) )
    ( (This)->lpVtbl -> get_firstChild(This,firstChild) )
    ( (This)->lpVtbl -> get_lastChild(This,lastChild) )
    ( (This)->lpVtbl -> get_previousSibling(This,previousSibling) )
    ( (This)->lpVtbl -> get_nextSibling(This,nextSibling) )
    ( (This)->lpVtbl -> get_attributes(This,attributeMap) )
    ( (This)->lpVtbl -> insertBefore(This,newChild,refChild,outNewChild) )
    ( (This)->lpVtbl -> replaceChild(This,newChild,oldChild,outOldChild) )
    ( (This)->lpVtbl -> removeChild(This,childNode,oldChild) )
    ( (This)->lpVtbl -> appendChild(This,newChild,outNewChild) )
    ( (This)->lpVtbl -> hasChildNodes(This,hasChild) )
    ( (This)->lpVtbl -> get_ownerDocument(This,XMLDOMDocument) )
    ( (This)->lpVtbl -> cloneNode(This,deep,cloneRoot) )
    ( (This)->lpVtbl -> get_nodeTypeString(This,nodeType) )
    ( (This)->lpVtbl -> get_text(This,text) )
    ( (This)->lpVtbl -> put_text(This,text) )
    ( (This)->lpVtbl -> get_specified(This,isSpecified) )
    ( (This)->lpVtbl -> get_definition(This,definitionNode) )
    ( (This)->lpVtbl -> get_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> put_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> get_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> put_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> get_xml(This,xmlString) )
    ( (This)->lpVtbl -> transformNode(This,stylesheet,xmlString) )
    ( (This)->lpVtbl -> selectNodes(This,queryString,resultList) )
    ( (This)->lpVtbl -> selectSingleNode(This,queryString,resultNode) )
    ( (This)->lpVtbl -> get_parsed(This,isParsed) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_prefix(This,prefixString) )
    ( (This)->lpVtbl -> get_baseName(This,nameString) )
    ( (This)->lpVtbl -> transformNodeToObject(This,stylesheet,outputObject) )
EXTERN_C const IID IID_IXMLDOMDocumentFragment;
    typedef struct IXMLDOMDocumentFragmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMDocumentFragment * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMDocumentFragment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMDocumentFragment * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMDocumentFragment * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMDocumentFragment * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMDocumentFragment * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMDocumentFragment * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeName )(
            IXMLDOMDocumentFragment * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeValue )(
            IXMLDOMDocumentFragment * This,
                                VARIANT *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeValue )(
            IXMLDOMDocumentFragment * This,
                       VARIANT value);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeType )(
            IXMLDOMDocumentFragment * This,
                                DOMNodeType *type);
                                        HRESULT ( STDMETHODCALLTYPE *get_parentNode )(
            IXMLDOMDocumentFragment * This,
                                IXMLDOMNode **parent);
                                        HRESULT ( STDMETHODCALLTYPE *get_childNodes )(
            IXMLDOMDocumentFragment * This,
                                IXMLDOMNodeList **childList);
                                        HRESULT ( STDMETHODCALLTYPE *get_firstChild )(
            IXMLDOMDocumentFragment * This,
                                IXMLDOMNode **firstChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_lastChild )(
            IXMLDOMDocumentFragment * This,
                                IXMLDOMNode **lastChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_previousSibling )(
            IXMLDOMDocumentFragment * This,
                                IXMLDOMNode **previousSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_nextSibling )(
            IXMLDOMDocumentFragment * This,
                                IXMLDOMNode **nextSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            IXMLDOMDocumentFragment * This,
                                IXMLDOMNamedNodeMap **attributeMap);
                               HRESULT ( STDMETHODCALLTYPE *insertBefore )(
            IXMLDOMDocumentFragment * This,
                       IXMLDOMNode *newChild,
                       VARIANT refChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *replaceChild )(
            IXMLDOMDocumentFragment * This,
                       IXMLDOMNode *newChild,
                       IXMLDOMNode *oldChild,
                                IXMLDOMNode **outOldChild);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXMLDOMDocumentFragment * This,
                       IXMLDOMNode *childNode,
                                IXMLDOMNode **oldChild);
                               HRESULT ( STDMETHODCALLTYPE *appendChild )(
            IXMLDOMDocumentFragment * This,
                       IXMLDOMNode *newChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *hasChildNodes )(
            IXMLDOMDocumentFragment * This,
                                VARIANT_BOOL *hasChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_ownerDocument )(
            IXMLDOMDocumentFragment * This,
                                IXMLDOMDocument **XMLDOMDocument);
                               HRESULT ( STDMETHODCALLTYPE *cloneNode )(
            IXMLDOMDocumentFragment * This,
                       VARIANT_BOOL deep,
                                IXMLDOMNode **cloneRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypeString )(
            IXMLDOMDocumentFragment * This,
                                BSTR *nodeType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXMLDOMDocumentFragment * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXMLDOMDocumentFragment * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_specified )(
            IXMLDOMDocumentFragment * This,
                                VARIANT_BOOL *isSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_definition )(
            IXMLDOMDocumentFragment * This,
                                IXMLDOMNode **definitionNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypedValue )(
            IXMLDOMDocumentFragment * This,
                                VARIANT *typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeTypedValue )(
            IXMLDOMDocumentFragment * This,
                       VARIANT typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_dataType )(
            IXMLDOMDocumentFragment * This,
                                VARIANT *dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *put_dataType )(
            IXMLDOMDocumentFragment * This,
                       BSTR dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_xml )(
            IXMLDOMDocumentFragment * This,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *transformNode )(
            IXMLDOMDocumentFragment * This,
                       IXMLDOMNode *stylesheet,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *selectNodes )(
            IXMLDOMDocumentFragment * This,
                       BSTR queryString,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *selectSingleNode )(
            IXMLDOMDocumentFragment * This,
                       BSTR queryString,
                                IXMLDOMNode **resultNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_parsed )(
            IXMLDOMDocumentFragment * This,
                                VARIANT_BOOL *isParsed);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXMLDOMDocumentFragment * This,
                                BSTR *namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_prefix )(
            IXMLDOMDocumentFragment * This,
                                BSTR *prefixString);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseName )(
            IXMLDOMDocumentFragment * This,
                                BSTR *nameString);
                               HRESULT ( STDMETHODCALLTYPE *transformNodeToObject )(
            IXMLDOMDocumentFragment * This,
                       IXMLDOMNode *stylesheet,
                       VARIANT outputObject);
        END_INTERFACE
    } IXMLDOMDocumentFragmentVtbl;
    interface IXMLDOMDocumentFragment
    {
        CONST_VTBL struct IXMLDOMDocumentFragmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_nodeName(This,name) )
    ( (This)->lpVtbl -> get_nodeValue(This,value) )
    ( (This)->lpVtbl -> put_nodeValue(This,value) )
    ( (This)->lpVtbl -> get_nodeType(This,type) )
    ( (This)->lpVtbl -> get_parentNode(This,parent) )
    ( (This)->lpVtbl -> get_childNodes(This,childList) )
    ( (This)->lpVtbl -> get_firstChild(This,firstChild) )
    ( (This)->lpVtbl -> get_lastChild(This,lastChild) )
    ( (This)->lpVtbl -> get_previousSibling(This,previousSibling) )
    ( (This)->lpVtbl -> get_nextSibling(This,nextSibling) )
    ( (This)->lpVtbl -> get_attributes(This,attributeMap) )
    ( (This)->lpVtbl -> insertBefore(This,newChild,refChild,outNewChild) )
    ( (This)->lpVtbl -> replaceChild(This,newChild,oldChild,outOldChild) )
    ( (This)->lpVtbl -> removeChild(This,childNode,oldChild) )
    ( (This)->lpVtbl -> appendChild(This,newChild,outNewChild) )
    ( (This)->lpVtbl -> hasChildNodes(This,hasChild) )
    ( (This)->lpVtbl -> get_ownerDocument(This,XMLDOMDocument) )
    ( (This)->lpVtbl -> cloneNode(This,deep,cloneRoot) )
    ( (This)->lpVtbl -> get_nodeTypeString(This,nodeType) )
    ( (This)->lpVtbl -> get_text(This,text) )
    ( (This)->lpVtbl -> put_text(This,text) )
    ( (This)->lpVtbl -> get_specified(This,isSpecified) )
    ( (This)->lpVtbl -> get_definition(This,definitionNode) )
    ( (This)->lpVtbl -> get_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> put_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> get_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> put_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> get_xml(This,xmlString) )
    ( (This)->lpVtbl -> transformNode(This,stylesheet,xmlString) )
    ( (This)->lpVtbl -> selectNodes(This,queryString,resultList) )
    ( (This)->lpVtbl -> selectSingleNode(This,queryString,resultNode) )
    ( (This)->lpVtbl -> get_parsed(This,isParsed) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_prefix(This,prefixString) )
    ( (This)->lpVtbl -> get_baseName(This,nameString) )
    ( (This)->lpVtbl -> transformNodeToObject(This,stylesheet,outputObject) )
EXTERN_C const IID IID_IXMLDOMDocument;
    typedef struct IXMLDOMDocumentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMDocument * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMDocument * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMDocument * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMDocument * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMDocument * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMDocument * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMDocument * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeName )(
            IXMLDOMDocument * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeValue )(
            IXMLDOMDocument * This,
                                VARIANT *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeValue )(
            IXMLDOMDocument * This,
                       VARIANT value);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeType )(
            IXMLDOMDocument * This,
                                DOMNodeType *type);
                                        HRESULT ( STDMETHODCALLTYPE *get_parentNode )(
            IXMLDOMDocument * This,
                                IXMLDOMNode **parent);
                                        HRESULT ( STDMETHODCALLTYPE *get_childNodes )(
            IXMLDOMDocument * This,
                                IXMLDOMNodeList **childList);
                                        HRESULT ( STDMETHODCALLTYPE *get_firstChild )(
            IXMLDOMDocument * This,
                                IXMLDOMNode **firstChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_lastChild )(
            IXMLDOMDocument * This,
                                IXMLDOMNode **lastChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_previousSibling )(
            IXMLDOMDocument * This,
                                IXMLDOMNode **previousSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_nextSibling )(
            IXMLDOMDocument * This,
                                IXMLDOMNode **nextSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            IXMLDOMDocument * This,
                                IXMLDOMNamedNodeMap **attributeMap);
                               HRESULT ( STDMETHODCALLTYPE *insertBefore )(
            IXMLDOMDocument * This,
                       IXMLDOMNode *newChild,
                       VARIANT refChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *replaceChild )(
            IXMLDOMDocument * This,
                       IXMLDOMNode *newChild,
                       IXMLDOMNode *oldChild,
                                IXMLDOMNode **outOldChild);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXMLDOMDocument * This,
                       IXMLDOMNode *childNode,
                                IXMLDOMNode **oldChild);
                               HRESULT ( STDMETHODCALLTYPE *appendChild )(
            IXMLDOMDocument * This,
                       IXMLDOMNode *newChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *hasChildNodes )(
            IXMLDOMDocument * This,
                                VARIANT_BOOL *hasChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_ownerDocument )(
            IXMLDOMDocument * This,
                                IXMLDOMDocument **XMLDOMDocument);
                               HRESULT ( STDMETHODCALLTYPE *cloneNode )(
            IXMLDOMDocument * This,
                       VARIANT_BOOL deep,
                                IXMLDOMNode **cloneRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypeString )(
            IXMLDOMDocument * This,
                                BSTR *nodeType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXMLDOMDocument * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXMLDOMDocument * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_specified )(
            IXMLDOMDocument * This,
                                VARIANT_BOOL *isSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_definition )(
            IXMLDOMDocument * This,
                                IXMLDOMNode **definitionNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypedValue )(
            IXMLDOMDocument * This,
                                VARIANT *typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeTypedValue )(
            IXMLDOMDocument * This,
                       VARIANT typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_dataType )(
            IXMLDOMDocument * This,
                                VARIANT *dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *put_dataType )(
            IXMLDOMDocument * This,
                       BSTR dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_xml )(
            IXMLDOMDocument * This,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *transformNode )(
            IXMLDOMDocument * This,
                       IXMLDOMNode *stylesheet,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *selectNodes )(
            IXMLDOMDocument * This,
                       BSTR queryString,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *selectSingleNode )(
            IXMLDOMDocument * This,
                       BSTR queryString,
                                IXMLDOMNode **resultNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_parsed )(
            IXMLDOMDocument * This,
                                VARIANT_BOOL *isParsed);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXMLDOMDocument * This,
                                BSTR *namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_prefix )(
            IXMLDOMDocument * This,
                                BSTR *prefixString);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseName )(
            IXMLDOMDocument * This,
                                BSTR *nameString);
                               HRESULT ( STDMETHODCALLTYPE *transformNodeToObject )(
            IXMLDOMDocument * This,
                       IXMLDOMNode *stylesheet,
                       VARIANT outputObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_doctype )(
            IXMLDOMDocument * This,
                                IXMLDOMDocumentType **documentType);
                                        HRESULT ( STDMETHODCALLTYPE *get_implementation )(
            IXMLDOMDocument * This,
                                IXMLDOMImplementation **impl);
                                        HRESULT ( STDMETHODCALLTYPE *get_documentElement )(
            IXMLDOMDocument * This,
                                IXMLDOMElement **DOMElement);
                                           HRESULT ( STDMETHODCALLTYPE *putref_documentElement )(
            IXMLDOMDocument * This,
                       IXMLDOMElement *DOMElement);
                               HRESULT ( STDMETHODCALLTYPE *createElement )(
            IXMLDOMDocument * This,
                       BSTR tagName,
                                IXMLDOMElement **element);
                               HRESULT ( STDMETHODCALLTYPE *createDocumentFragment )(
            IXMLDOMDocument * This,
                                IXMLDOMDocumentFragment **docFrag);
                               HRESULT ( STDMETHODCALLTYPE *createTextNode )(
            IXMLDOMDocument * This,
                       BSTR data,
                                IXMLDOMText **text);
                               HRESULT ( STDMETHODCALLTYPE *createComment )(
            IXMLDOMDocument * This,
                       BSTR data,
                                IXMLDOMComment **comment);
                               HRESULT ( STDMETHODCALLTYPE *createCDATASection )(
            IXMLDOMDocument * This,
                       BSTR data,
                                IXMLDOMCDATASection **cdata);
                               HRESULT ( STDMETHODCALLTYPE *createProcessingInstruction )(
            IXMLDOMDocument * This,
                       BSTR target,
                       BSTR data,
                                IXMLDOMProcessingInstruction **pi);
                               HRESULT ( STDMETHODCALLTYPE *createAttribute )(
            IXMLDOMDocument * This,
                       BSTR name,
                                IXMLDOMAttribute **attribute);
                               HRESULT ( STDMETHODCALLTYPE *createEntityReference )(
            IXMLDOMDocument * This,
                       BSTR name,
                                IXMLDOMEntityReference **entityRef);
                               HRESULT ( STDMETHODCALLTYPE *getElementsByTagName )(
            IXMLDOMDocument * This,
                       BSTR tagName,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *createNode )(
            IXMLDOMDocument * This,
                       VARIANT Type,
                       BSTR name,
                       BSTR namespaceURI,
                                IXMLDOMNode **node);
                               HRESULT ( STDMETHODCALLTYPE *nodeFromID )(
            IXMLDOMDocument * This,
                       BSTR idString,
                                IXMLDOMNode **node);
                               HRESULT ( STDMETHODCALLTYPE *load )(
            IXMLDOMDocument * This,
                       VARIANT xmlSource,
                                VARIANT_BOOL *isSuccessful);
                                        HRESULT ( STDMETHODCALLTYPE *get_readyState )(
            IXMLDOMDocument * This,
                                long *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_parseError )(
            IXMLDOMDocument * This,
                                IXMLDOMParseError **errorObj);
                                        HRESULT ( STDMETHODCALLTYPE *get_url )(
            IXMLDOMDocument * This,
                                BSTR *urlString);
                                        HRESULT ( STDMETHODCALLTYPE *get_async )(
            IXMLDOMDocument * This,
                                VARIANT_BOOL *isAsync);
                                        HRESULT ( STDMETHODCALLTYPE *put_async )(
            IXMLDOMDocument * This,
                       VARIANT_BOOL isAsync);
                               HRESULT ( STDMETHODCALLTYPE *abort )(
            IXMLDOMDocument * This);
                               HRESULT ( STDMETHODCALLTYPE *loadXML )(
            IXMLDOMDocument * This,
                       BSTR bstrXML,
                                VARIANT_BOOL *isSuccessful);
                               HRESULT ( STDMETHODCALLTYPE *save )(
            IXMLDOMDocument * This,
                       VARIANT destination);
                                        HRESULT ( STDMETHODCALLTYPE *get_validateOnParse )(
            IXMLDOMDocument * This,
                                VARIANT_BOOL *isValidating);
                                        HRESULT ( STDMETHODCALLTYPE *put_validateOnParse )(
            IXMLDOMDocument * This,
                       VARIANT_BOOL isValidating);
                                        HRESULT ( STDMETHODCALLTYPE *get_resolveExternals )(
            IXMLDOMDocument * This,
                                VARIANT_BOOL *isResolving);
                                        HRESULT ( STDMETHODCALLTYPE *put_resolveExternals )(
            IXMLDOMDocument * This,
                       VARIANT_BOOL isResolving);
                                        HRESULT ( STDMETHODCALLTYPE *get_preserveWhiteSpace )(
            IXMLDOMDocument * This,
                                VARIANT_BOOL *isPreserving);
                                        HRESULT ( STDMETHODCALLTYPE *put_preserveWhiteSpace )(
            IXMLDOMDocument * This,
                       VARIANT_BOOL isPreserving);
                                        HRESULT ( STDMETHODCALLTYPE *put_onreadystatechange )(
            IXMLDOMDocument * This,
                       VARIANT readystatechangeSink);
                                        HRESULT ( STDMETHODCALLTYPE *put_ondataavailable )(
            IXMLDOMDocument * This,
                       VARIANT ondataavailableSink);
                                        HRESULT ( STDMETHODCALLTYPE *put_ontransformnode )(
            IXMLDOMDocument * This,
                       VARIANT ontransformnodeSink);
        END_INTERFACE
    } IXMLDOMDocumentVtbl;
    interface IXMLDOMDocument
    {
        CONST_VTBL struct IXMLDOMDocumentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_nodeName(This,name) )
    ( (This)->lpVtbl -> get_nodeValue(This,value) )
    ( (This)->lpVtbl -> put_nodeValue(This,value) )
    ( (This)->lpVtbl -> get_nodeType(This,type) )
    ( (This)->lpVtbl -> get_parentNode(This,parent) )
    ( (This)->lpVtbl -> get_childNodes(This,childList) )
    ( (This)->lpVtbl -> get_firstChild(This,firstChild) )
    ( (This)->lpVtbl -> get_lastChild(This,lastChild) )
    ( (This)->lpVtbl -> get_previousSibling(This,previousSibling) )
    ( (This)->lpVtbl -> get_nextSibling(This,nextSibling) )
    ( (This)->lpVtbl -> get_attributes(This,attributeMap) )
    ( (This)->lpVtbl -> insertBefore(This,newChild,refChild,outNewChild) )
    ( (This)->lpVtbl -> replaceChild(This,newChild,oldChild,outOldChild) )
    ( (This)->lpVtbl -> removeChild(This,childNode,oldChild) )
    ( (This)->lpVtbl -> appendChild(This,newChild,outNewChild) )
    ( (This)->lpVtbl -> hasChildNodes(This,hasChild) )
    ( (This)->lpVtbl -> get_ownerDocument(This,XMLDOMDocument) )
    ( (This)->lpVtbl -> cloneNode(This,deep,cloneRoot) )
    ( (This)->lpVtbl -> get_nodeTypeString(This,nodeType) )
    ( (This)->lpVtbl -> get_text(This,text) )
    ( (This)->lpVtbl -> put_text(This,text) )
    ( (This)->lpVtbl -> get_specified(This,isSpecified) )
    ( (This)->lpVtbl -> get_definition(This,definitionNode) )
    ( (This)->lpVtbl -> get_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> put_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> get_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> put_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> get_xml(This,xmlString) )
    ( (This)->lpVtbl -> transformNode(This,stylesheet,xmlString) )
    ( (This)->lpVtbl -> selectNodes(This,queryString,resultList) )
    ( (This)->lpVtbl -> selectSingleNode(This,queryString,resultNode) )
    ( (This)->lpVtbl -> get_parsed(This,isParsed) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_prefix(This,prefixString) )
    ( (This)->lpVtbl -> get_baseName(This,nameString) )
    ( (This)->lpVtbl -> transformNodeToObject(This,stylesheet,outputObject) )
    ( (This)->lpVtbl -> get_doctype(This,documentType) )
    ( (This)->lpVtbl -> get_implementation(This,impl) )
    ( (This)->lpVtbl -> get_documentElement(This,DOMElement) )
    ( (This)->lpVtbl -> putref_documentElement(This,DOMElement) )
    ( (This)->lpVtbl -> createElement(This,tagName,element) )
    ( (This)->lpVtbl -> createDocumentFragment(This,docFrag) )
    ( (This)->lpVtbl -> createTextNode(This,data,text) )
    ( (This)->lpVtbl -> createComment(This,data,comment) )
    ( (This)->lpVtbl -> createCDATASection(This,data,cdata) )
    ( (This)->lpVtbl -> createProcessingInstruction(This,target,data,pi) )
    ( (This)->lpVtbl -> createAttribute(This,name,attribute) )
    ( (This)->lpVtbl -> createEntityReference(This,name,entityRef) )
    ( (This)->lpVtbl -> getElementsByTagName(This,tagName,resultList) )
    ( (This)->lpVtbl -> createNode(This,Type,name,namespaceURI,node) )
    ( (This)->lpVtbl -> nodeFromID(This,idString,node) )
    ( (This)->lpVtbl -> load(This,xmlSource,isSuccessful) )
    ( (This)->lpVtbl -> get_readyState(This,value) )
    ( (This)->lpVtbl -> get_parseError(This,errorObj) )
    ( (This)->lpVtbl -> get_url(This,urlString) )
    ( (This)->lpVtbl -> get_async(This,isAsync) )
    ( (This)->lpVtbl -> put_async(This,isAsync) )
    ( (This)->lpVtbl -> abort(This) )
    ( (This)->lpVtbl -> loadXML(This,bstrXML,isSuccessful) )
    ( (This)->lpVtbl -> save(This,destination) )
    ( (This)->lpVtbl -> get_validateOnParse(This,isValidating) )
    ( (This)->lpVtbl -> put_validateOnParse(This,isValidating) )
    ( (This)->lpVtbl -> get_resolveExternals(This,isResolving) )
    ( (This)->lpVtbl -> put_resolveExternals(This,isResolving) )
    ( (This)->lpVtbl -> get_preserveWhiteSpace(This,isPreserving) )
    ( (This)->lpVtbl -> put_preserveWhiteSpace(This,isPreserving) )
    ( (This)->lpVtbl -> put_onreadystatechange(This,readystatechangeSink) )
    ( (This)->lpVtbl -> put_ondataavailable(This,ondataavailableSink) )
    ( (This)->lpVtbl -> put_ontransformnode(This,ontransformnodeSink) )
EXTERN_C const IID IID_IXMLDOMDocument2;
    typedef struct IXMLDOMDocument2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMDocument2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMDocument2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMDocument2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMDocument2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMDocument2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMDocument2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMDocument2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeName )(
            IXMLDOMDocument2 * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeValue )(
            IXMLDOMDocument2 * This,
                                VARIANT *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeValue )(
            IXMLDOMDocument2 * This,
                       VARIANT value);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeType )(
            IXMLDOMDocument2 * This,
                                DOMNodeType *type);
                                        HRESULT ( STDMETHODCALLTYPE *get_parentNode )(
            IXMLDOMDocument2 * This,
                                IXMLDOMNode **parent);
                                        HRESULT ( STDMETHODCALLTYPE *get_childNodes )(
            IXMLDOMDocument2 * This,
                                IXMLDOMNodeList **childList);
                                        HRESULT ( STDMETHODCALLTYPE *get_firstChild )(
            IXMLDOMDocument2 * This,
                                IXMLDOMNode **firstChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_lastChild )(
            IXMLDOMDocument2 * This,
                                IXMLDOMNode **lastChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_previousSibling )(
            IXMLDOMDocument2 * This,
                                IXMLDOMNode **previousSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_nextSibling )(
            IXMLDOMDocument2 * This,
                                IXMLDOMNode **nextSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            IXMLDOMDocument2 * This,
                                IXMLDOMNamedNodeMap **attributeMap);
                               HRESULT ( STDMETHODCALLTYPE *insertBefore )(
            IXMLDOMDocument2 * This,
                       IXMLDOMNode *newChild,
                       VARIANT refChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *replaceChild )(
            IXMLDOMDocument2 * This,
                       IXMLDOMNode *newChild,
                       IXMLDOMNode *oldChild,
                                IXMLDOMNode **outOldChild);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXMLDOMDocument2 * This,
                       IXMLDOMNode *childNode,
                                IXMLDOMNode **oldChild);
                               HRESULT ( STDMETHODCALLTYPE *appendChild )(
            IXMLDOMDocument2 * This,
                       IXMLDOMNode *newChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *hasChildNodes )(
            IXMLDOMDocument2 * This,
                                VARIANT_BOOL *hasChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_ownerDocument )(
            IXMLDOMDocument2 * This,
                                IXMLDOMDocument **XMLDOMDocument);
                               HRESULT ( STDMETHODCALLTYPE *cloneNode )(
            IXMLDOMDocument2 * This,
                       VARIANT_BOOL deep,
                                IXMLDOMNode **cloneRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypeString )(
            IXMLDOMDocument2 * This,
                                BSTR *nodeType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXMLDOMDocument2 * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXMLDOMDocument2 * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_specified )(
            IXMLDOMDocument2 * This,
                                VARIANT_BOOL *isSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_definition )(
            IXMLDOMDocument2 * This,
                                IXMLDOMNode **definitionNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypedValue )(
            IXMLDOMDocument2 * This,
                                VARIANT *typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeTypedValue )(
            IXMLDOMDocument2 * This,
                       VARIANT typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_dataType )(
            IXMLDOMDocument2 * This,
                                VARIANT *dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *put_dataType )(
            IXMLDOMDocument2 * This,
                       BSTR dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_xml )(
            IXMLDOMDocument2 * This,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *transformNode )(
            IXMLDOMDocument2 * This,
                       IXMLDOMNode *stylesheet,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *selectNodes )(
            IXMLDOMDocument2 * This,
                       BSTR queryString,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *selectSingleNode )(
            IXMLDOMDocument2 * This,
                       BSTR queryString,
                                IXMLDOMNode **resultNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_parsed )(
            IXMLDOMDocument2 * This,
                                VARIANT_BOOL *isParsed);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXMLDOMDocument2 * This,
                                BSTR *namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_prefix )(
            IXMLDOMDocument2 * This,
                                BSTR *prefixString);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseName )(
            IXMLDOMDocument2 * This,
                                BSTR *nameString);
                               HRESULT ( STDMETHODCALLTYPE *transformNodeToObject )(
            IXMLDOMDocument2 * This,
                       IXMLDOMNode *stylesheet,
                       VARIANT outputObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_doctype )(
            IXMLDOMDocument2 * This,
                                IXMLDOMDocumentType **documentType);
                                        HRESULT ( STDMETHODCALLTYPE *get_implementation )(
            IXMLDOMDocument2 * This,
                                IXMLDOMImplementation **impl);
                                        HRESULT ( STDMETHODCALLTYPE *get_documentElement )(
            IXMLDOMDocument2 * This,
                                IXMLDOMElement **DOMElement);
                                           HRESULT ( STDMETHODCALLTYPE *putref_documentElement )(
            IXMLDOMDocument2 * This,
                       IXMLDOMElement *DOMElement);
                               HRESULT ( STDMETHODCALLTYPE *createElement )(
            IXMLDOMDocument2 * This,
                       BSTR tagName,
                                IXMLDOMElement **element);
                               HRESULT ( STDMETHODCALLTYPE *createDocumentFragment )(
            IXMLDOMDocument2 * This,
                                IXMLDOMDocumentFragment **docFrag);
                               HRESULT ( STDMETHODCALLTYPE *createTextNode )(
            IXMLDOMDocument2 * This,
                       BSTR data,
                                IXMLDOMText **text);
                               HRESULT ( STDMETHODCALLTYPE *createComment )(
            IXMLDOMDocument2 * This,
                       BSTR data,
                                IXMLDOMComment **comment);
                               HRESULT ( STDMETHODCALLTYPE *createCDATASection )(
            IXMLDOMDocument2 * This,
                       BSTR data,
                                IXMLDOMCDATASection **cdata);
                               HRESULT ( STDMETHODCALLTYPE *createProcessingInstruction )(
            IXMLDOMDocument2 * This,
                       BSTR target,
                       BSTR data,
                                IXMLDOMProcessingInstruction **pi);
                               HRESULT ( STDMETHODCALLTYPE *createAttribute )(
            IXMLDOMDocument2 * This,
                       BSTR name,
                                IXMLDOMAttribute **attribute);
                               HRESULT ( STDMETHODCALLTYPE *createEntityReference )(
            IXMLDOMDocument2 * This,
                       BSTR name,
                                IXMLDOMEntityReference **entityRef);
                               HRESULT ( STDMETHODCALLTYPE *getElementsByTagName )(
            IXMLDOMDocument2 * This,
                       BSTR tagName,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *createNode )(
            IXMLDOMDocument2 * This,
                       VARIANT Type,
                       BSTR name,
                       BSTR namespaceURI,
                                IXMLDOMNode **node);
                               HRESULT ( STDMETHODCALLTYPE *nodeFromID )(
            IXMLDOMDocument2 * This,
                       BSTR idString,
                                IXMLDOMNode **node);
                               HRESULT ( STDMETHODCALLTYPE *load )(
            IXMLDOMDocument2 * This,
                       VARIANT xmlSource,
                                VARIANT_BOOL *isSuccessful);
                                        HRESULT ( STDMETHODCALLTYPE *get_readyState )(
            IXMLDOMDocument2 * This,
                                long *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_parseError )(
            IXMLDOMDocument2 * This,
                                IXMLDOMParseError **errorObj);
                                        HRESULT ( STDMETHODCALLTYPE *get_url )(
            IXMLDOMDocument2 * This,
                                BSTR *urlString);
                                        HRESULT ( STDMETHODCALLTYPE *get_async )(
            IXMLDOMDocument2 * This,
                                VARIANT_BOOL *isAsync);
                                        HRESULT ( STDMETHODCALLTYPE *put_async )(
            IXMLDOMDocument2 * This,
                       VARIANT_BOOL isAsync);
                               HRESULT ( STDMETHODCALLTYPE *abort )(
            IXMLDOMDocument2 * This);
                               HRESULT ( STDMETHODCALLTYPE *loadXML )(
            IXMLDOMDocument2 * This,
                       BSTR bstrXML,
                                VARIANT_BOOL *isSuccessful);
                               HRESULT ( STDMETHODCALLTYPE *save )(
            IXMLDOMDocument2 * This,
                       VARIANT destination);
                                        HRESULT ( STDMETHODCALLTYPE *get_validateOnParse )(
            IXMLDOMDocument2 * This,
                                VARIANT_BOOL *isValidating);
                                        HRESULT ( STDMETHODCALLTYPE *put_validateOnParse )(
            IXMLDOMDocument2 * This,
                       VARIANT_BOOL isValidating);
                                        HRESULT ( STDMETHODCALLTYPE *get_resolveExternals )(
            IXMLDOMDocument2 * This,
                                VARIANT_BOOL *isResolving);
                                        HRESULT ( STDMETHODCALLTYPE *put_resolveExternals )(
            IXMLDOMDocument2 * This,
                       VARIANT_BOOL isResolving);
                                        HRESULT ( STDMETHODCALLTYPE *get_preserveWhiteSpace )(
            IXMLDOMDocument2 * This,
                                VARIANT_BOOL *isPreserving);
                                        HRESULT ( STDMETHODCALLTYPE *put_preserveWhiteSpace )(
            IXMLDOMDocument2 * This,
                       VARIANT_BOOL isPreserving);
                                        HRESULT ( STDMETHODCALLTYPE *put_onreadystatechange )(
            IXMLDOMDocument2 * This,
                       VARIANT readystatechangeSink);
                                        HRESULT ( STDMETHODCALLTYPE *put_ondataavailable )(
            IXMLDOMDocument2 * This,
                       VARIANT ondataavailableSink);
                                        HRESULT ( STDMETHODCALLTYPE *put_ontransformnode )(
            IXMLDOMDocument2 * This,
                       VARIANT ontransformnodeSink);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaces )(
            IXMLDOMDocument2 * This,
                                IXMLDOMSchemaCollection **namespaceCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_schemas )(
            IXMLDOMDocument2 * This,
                                VARIANT *otherCollection);
                                           HRESULT ( STDMETHODCALLTYPE *putref_schemas )(
            IXMLDOMDocument2 * This,
                       VARIANT otherCollection);
                               HRESULT ( STDMETHODCALLTYPE *validate )(
            IXMLDOMDocument2 * This,
                                IXMLDOMParseError **errorObj);
                               HRESULT ( STDMETHODCALLTYPE *setProperty )(
            IXMLDOMDocument2 * This,
                       BSTR name,
                       VARIANT value);
                               HRESULT ( STDMETHODCALLTYPE *getProperty )(
            IXMLDOMDocument2 * This,
                       BSTR name,
                                VARIANT *value);
        END_INTERFACE
    } IXMLDOMDocument2Vtbl;
    interface IXMLDOMDocument2
    {
        CONST_VTBL struct IXMLDOMDocument2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_nodeName(This,name) )
    ( (This)->lpVtbl -> get_nodeValue(This,value) )
    ( (This)->lpVtbl -> put_nodeValue(This,value) )
    ( (This)->lpVtbl -> get_nodeType(This,type) )
    ( (This)->lpVtbl -> get_parentNode(This,parent) )
    ( (This)->lpVtbl -> get_childNodes(This,childList) )
    ( (This)->lpVtbl -> get_firstChild(This,firstChild) )
    ( (This)->lpVtbl -> get_lastChild(This,lastChild) )
    ( (This)->lpVtbl -> get_previousSibling(This,previousSibling) )
    ( (This)->lpVtbl -> get_nextSibling(This,nextSibling) )
    ( (This)->lpVtbl -> get_attributes(This,attributeMap) )
    ( (This)->lpVtbl -> insertBefore(This,newChild,refChild,outNewChild) )
    ( (This)->lpVtbl -> replaceChild(This,newChild,oldChild,outOldChild) )
    ( (This)->lpVtbl -> removeChild(This,childNode,oldChild) )
    ( (This)->lpVtbl -> appendChild(This,newChild,outNewChild) )
    ( (This)->lpVtbl -> hasChildNodes(This,hasChild) )
    ( (This)->lpVtbl -> get_ownerDocument(This,XMLDOMDocument) )
    ( (This)->lpVtbl -> cloneNode(This,deep,cloneRoot) )
    ( (This)->lpVtbl -> get_nodeTypeString(This,nodeType) )
    ( (This)->lpVtbl -> get_text(This,text) )
    ( (This)->lpVtbl -> put_text(This,text) )
    ( (This)->lpVtbl -> get_specified(This,isSpecified) )
    ( (This)->lpVtbl -> get_definition(This,definitionNode) )
    ( (This)->lpVtbl -> get_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> put_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> get_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> put_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> get_xml(This,xmlString) )
    ( (This)->lpVtbl -> transformNode(This,stylesheet,xmlString) )
    ( (This)->lpVtbl -> selectNodes(This,queryString,resultList) )
    ( (This)->lpVtbl -> selectSingleNode(This,queryString,resultNode) )
    ( (This)->lpVtbl -> get_parsed(This,isParsed) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_prefix(This,prefixString) )
    ( (This)->lpVtbl -> get_baseName(This,nameString) )
    ( (This)->lpVtbl -> transformNodeToObject(This,stylesheet,outputObject) )
    ( (This)->lpVtbl -> get_doctype(This,documentType) )
    ( (This)->lpVtbl -> get_implementation(This,impl) )
    ( (This)->lpVtbl -> get_documentElement(This,DOMElement) )
    ( (This)->lpVtbl -> putref_documentElement(This,DOMElement) )
    ( (This)->lpVtbl -> createElement(This,tagName,element) )
    ( (This)->lpVtbl -> createDocumentFragment(This,docFrag) )
    ( (This)->lpVtbl -> createTextNode(This,data,text) )
    ( (This)->lpVtbl -> createComment(This,data,comment) )
    ( (This)->lpVtbl -> createCDATASection(This,data,cdata) )
    ( (This)->lpVtbl -> createProcessingInstruction(This,target,data,pi) )
    ( (This)->lpVtbl -> createAttribute(This,name,attribute) )
    ( (This)->lpVtbl -> createEntityReference(This,name,entityRef) )
    ( (This)->lpVtbl -> getElementsByTagName(This,tagName,resultList) )
    ( (This)->lpVtbl -> createNode(This,Type,name,namespaceURI,node) )
    ( (This)->lpVtbl -> nodeFromID(This,idString,node) )
    ( (This)->lpVtbl -> load(This,xmlSource,isSuccessful) )
    ( (This)->lpVtbl -> get_readyState(This,value) )
    ( (This)->lpVtbl -> get_parseError(This,errorObj) )
    ( (This)->lpVtbl -> get_url(This,urlString) )
    ( (This)->lpVtbl -> get_async(This,isAsync) )
    ( (This)->lpVtbl -> put_async(This,isAsync) )
    ( (This)->lpVtbl -> abort(This) )
    ( (This)->lpVtbl -> loadXML(This,bstrXML,isSuccessful) )
    ( (This)->lpVtbl -> save(This,destination) )
    ( (This)->lpVtbl -> get_validateOnParse(This,isValidating) )
    ( (This)->lpVtbl -> put_validateOnParse(This,isValidating) )
    ( (This)->lpVtbl -> get_resolveExternals(This,isResolving) )
    ( (This)->lpVtbl -> put_resolveExternals(This,isResolving) )
    ( (This)->lpVtbl -> get_preserveWhiteSpace(This,isPreserving) )
    ( (This)->lpVtbl -> put_preserveWhiteSpace(This,isPreserving) )
    ( (This)->lpVtbl -> put_onreadystatechange(This,readystatechangeSink) )
    ( (This)->lpVtbl -> put_ondataavailable(This,ondataavailableSink) )
    ( (This)->lpVtbl -> put_ontransformnode(This,ontransformnodeSink) )
    ( (This)->lpVtbl -> get_namespaces(This,namespaceCollection) )
    ( (This)->lpVtbl -> get_schemas(This,otherCollection) )
    ( (This)->lpVtbl -> putref_schemas(This,otherCollection) )
    ( (This)->lpVtbl -> validate(This,errorObj) )
    ( (This)->lpVtbl -> setProperty(This,name,value) )
    ( (This)->lpVtbl -> getProperty(This,name,value) )
EXTERN_C const IID IID_IXMLDOMDocument3;
    typedef struct IXMLDOMDocument3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMDocument3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMDocument3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMDocument3 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMDocument3 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMDocument3 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMDocument3 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMDocument3 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeName )(
            IXMLDOMDocument3 * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeValue )(
            IXMLDOMDocument3 * This,
                                VARIANT *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeValue )(
            IXMLDOMDocument3 * This,
                       VARIANT value);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeType )(
            IXMLDOMDocument3 * This,
                                DOMNodeType *type);
                                        HRESULT ( STDMETHODCALLTYPE *get_parentNode )(
            IXMLDOMDocument3 * This,
                                IXMLDOMNode **parent);
                                        HRESULT ( STDMETHODCALLTYPE *get_childNodes )(
            IXMLDOMDocument3 * This,
                                IXMLDOMNodeList **childList);
                                        HRESULT ( STDMETHODCALLTYPE *get_firstChild )(
            IXMLDOMDocument3 * This,
                                IXMLDOMNode **firstChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_lastChild )(
            IXMLDOMDocument3 * This,
                                IXMLDOMNode **lastChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_previousSibling )(
            IXMLDOMDocument3 * This,
                                IXMLDOMNode **previousSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_nextSibling )(
            IXMLDOMDocument3 * This,
                                IXMLDOMNode **nextSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            IXMLDOMDocument3 * This,
                                IXMLDOMNamedNodeMap **attributeMap);
                               HRESULT ( STDMETHODCALLTYPE *insertBefore )(
            IXMLDOMDocument3 * This,
                       IXMLDOMNode *newChild,
                       VARIANT refChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *replaceChild )(
            IXMLDOMDocument3 * This,
                       IXMLDOMNode *newChild,
                       IXMLDOMNode *oldChild,
                                IXMLDOMNode **outOldChild);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXMLDOMDocument3 * This,
                       IXMLDOMNode *childNode,
                                IXMLDOMNode **oldChild);
                               HRESULT ( STDMETHODCALLTYPE *appendChild )(
            IXMLDOMDocument3 * This,
                       IXMLDOMNode *newChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *hasChildNodes )(
            IXMLDOMDocument3 * This,
                                VARIANT_BOOL *hasChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_ownerDocument )(
            IXMLDOMDocument3 * This,
                                IXMLDOMDocument **XMLDOMDocument);
                               HRESULT ( STDMETHODCALLTYPE *cloneNode )(
            IXMLDOMDocument3 * This,
                       VARIANT_BOOL deep,
                                IXMLDOMNode **cloneRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypeString )(
            IXMLDOMDocument3 * This,
                                BSTR *nodeType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXMLDOMDocument3 * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXMLDOMDocument3 * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_specified )(
            IXMLDOMDocument3 * This,
                                VARIANT_BOOL *isSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_definition )(
            IXMLDOMDocument3 * This,
                                IXMLDOMNode **definitionNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypedValue )(
            IXMLDOMDocument3 * This,
                                VARIANT *typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeTypedValue )(
            IXMLDOMDocument3 * This,
                       VARIANT typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_dataType )(
            IXMLDOMDocument3 * This,
                                VARIANT *dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *put_dataType )(
            IXMLDOMDocument3 * This,
                       BSTR dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_xml )(
            IXMLDOMDocument3 * This,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *transformNode )(
            IXMLDOMDocument3 * This,
                       IXMLDOMNode *stylesheet,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *selectNodes )(
            IXMLDOMDocument3 * This,
                       BSTR queryString,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *selectSingleNode )(
            IXMLDOMDocument3 * This,
                       BSTR queryString,
                                IXMLDOMNode **resultNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_parsed )(
            IXMLDOMDocument3 * This,
                                VARIANT_BOOL *isParsed);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXMLDOMDocument3 * This,
                                BSTR *namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_prefix )(
            IXMLDOMDocument3 * This,
                                BSTR *prefixString);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseName )(
            IXMLDOMDocument3 * This,
                                BSTR *nameString);
                               HRESULT ( STDMETHODCALLTYPE *transformNodeToObject )(
            IXMLDOMDocument3 * This,
                       IXMLDOMNode *stylesheet,
                       VARIANT outputObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_doctype )(
            IXMLDOMDocument3 * This,
                                IXMLDOMDocumentType **documentType);
                                        HRESULT ( STDMETHODCALLTYPE *get_implementation )(
            IXMLDOMDocument3 * This,
                                IXMLDOMImplementation **impl);
                                        HRESULT ( STDMETHODCALLTYPE *get_documentElement )(
            IXMLDOMDocument3 * This,
                                IXMLDOMElement **DOMElement);
                                           HRESULT ( STDMETHODCALLTYPE *putref_documentElement )(
            IXMLDOMDocument3 * This,
                       IXMLDOMElement *DOMElement);
                               HRESULT ( STDMETHODCALLTYPE *createElement )(
            IXMLDOMDocument3 * This,
                       BSTR tagName,
                                IXMLDOMElement **element);
                               HRESULT ( STDMETHODCALLTYPE *createDocumentFragment )(
            IXMLDOMDocument3 * This,
                                IXMLDOMDocumentFragment **docFrag);
                               HRESULT ( STDMETHODCALLTYPE *createTextNode )(
            IXMLDOMDocument3 * This,
                       BSTR data,
                                IXMLDOMText **text);
                               HRESULT ( STDMETHODCALLTYPE *createComment )(
            IXMLDOMDocument3 * This,
                       BSTR data,
                                IXMLDOMComment **comment);
                               HRESULT ( STDMETHODCALLTYPE *createCDATASection )(
            IXMLDOMDocument3 * This,
                       BSTR data,
                                IXMLDOMCDATASection **cdata);
                               HRESULT ( STDMETHODCALLTYPE *createProcessingInstruction )(
            IXMLDOMDocument3 * This,
                       BSTR target,
                       BSTR data,
                                IXMLDOMProcessingInstruction **pi);
                               HRESULT ( STDMETHODCALLTYPE *createAttribute )(
            IXMLDOMDocument3 * This,
                       BSTR name,
                                IXMLDOMAttribute **attribute);
                               HRESULT ( STDMETHODCALLTYPE *createEntityReference )(
            IXMLDOMDocument3 * This,
                       BSTR name,
                                IXMLDOMEntityReference **entityRef);
                               HRESULT ( STDMETHODCALLTYPE *getElementsByTagName )(
            IXMLDOMDocument3 * This,
                       BSTR tagName,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *createNode )(
            IXMLDOMDocument3 * This,
                       VARIANT Type,
                       BSTR name,
                       BSTR namespaceURI,
                                IXMLDOMNode **node);
                               HRESULT ( STDMETHODCALLTYPE *nodeFromID )(
            IXMLDOMDocument3 * This,
                       BSTR idString,
                                IXMLDOMNode **node);
                               HRESULT ( STDMETHODCALLTYPE *load )(
            IXMLDOMDocument3 * This,
                       VARIANT xmlSource,
                                VARIANT_BOOL *isSuccessful);
                                        HRESULT ( STDMETHODCALLTYPE *get_readyState )(
            IXMLDOMDocument3 * This,
                                long *value);
                                        HRESULT ( STDMETHODCALLTYPE *get_parseError )(
            IXMLDOMDocument3 * This,
                                IXMLDOMParseError **errorObj);
                                        HRESULT ( STDMETHODCALLTYPE *get_url )(
            IXMLDOMDocument3 * This,
                                BSTR *urlString);
                                        HRESULT ( STDMETHODCALLTYPE *get_async )(
            IXMLDOMDocument3 * This,
                                VARIANT_BOOL *isAsync);
                                        HRESULT ( STDMETHODCALLTYPE *put_async )(
            IXMLDOMDocument3 * This,
                       VARIANT_BOOL isAsync);
                               HRESULT ( STDMETHODCALLTYPE *abort )(
            IXMLDOMDocument3 * This);
                               HRESULT ( STDMETHODCALLTYPE *loadXML )(
            IXMLDOMDocument3 * This,
                       BSTR bstrXML,
                                VARIANT_BOOL *isSuccessful);
                               HRESULT ( STDMETHODCALLTYPE *save )(
            IXMLDOMDocument3 * This,
                       VARIANT destination);
                                        HRESULT ( STDMETHODCALLTYPE *get_validateOnParse )(
            IXMLDOMDocument3 * This,
                                VARIANT_BOOL *isValidating);
                                        HRESULT ( STDMETHODCALLTYPE *put_validateOnParse )(
            IXMLDOMDocument3 * This,
                       VARIANT_BOOL isValidating);
                                        HRESULT ( STDMETHODCALLTYPE *get_resolveExternals )(
            IXMLDOMDocument3 * This,
                                VARIANT_BOOL *isResolving);
                                        HRESULT ( STDMETHODCALLTYPE *put_resolveExternals )(
            IXMLDOMDocument3 * This,
                       VARIANT_BOOL isResolving);
                                        HRESULT ( STDMETHODCALLTYPE *get_preserveWhiteSpace )(
            IXMLDOMDocument3 * This,
                                VARIANT_BOOL *isPreserving);
                                        HRESULT ( STDMETHODCALLTYPE *put_preserveWhiteSpace )(
            IXMLDOMDocument3 * This,
                       VARIANT_BOOL isPreserving);
                                        HRESULT ( STDMETHODCALLTYPE *put_onreadystatechange )(
            IXMLDOMDocument3 * This,
                       VARIANT readystatechangeSink);
                                        HRESULT ( STDMETHODCALLTYPE *put_ondataavailable )(
            IXMLDOMDocument3 * This,
                       VARIANT ondataavailableSink);
                                        HRESULT ( STDMETHODCALLTYPE *put_ontransformnode )(
            IXMLDOMDocument3 * This,
                       VARIANT ontransformnodeSink);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaces )(
            IXMLDOMDocument3 * This,
                                IXMLDOMSchemaCollection **namespaceCollection);
                                        HRESULT ( STDMETHODCALLTYPE *get_schemas )(
            IXMLDOMDocument3 * This,
                                VARIANT *otherCollection);
                                           HRESULT ( STDMETHODCALLTYPE *putref_schemas )(
            IXMLDOMDocument3 * This,
                       VARIANT otherCollection);
                               HRESULT ( STDMETHODCALLTYPE *validate )(
            IXMLDOMDocument3 * This,
                                IXMLDOMParseError **errorObj);
                               HRESULT ( STDMETHODCALLTYPE *setProperty )(
            IXMLDOMDocument3 * This,
                       BSTR name,
                       VARIANT value);
                               HRESULT ( STDMETHODCALLTYPE *getProperty )(
            IXMLDOMDocument3 * This,
                       BSTR name,
                                VARIANT *value);
                               HRESULT ( STDMETHODCALLTYPE *validateNode )(
            IXMLDOMDocument3 * This,
                       IXMLDOMNode *node,
                                IXMLDOMParseError **errorObj);
                               HRESULT ( STDMETHODCALLTYPE *importNode )(
            IXMLDOMDocument3 * This,
                       IXMLDOMNode *node,
                       VARIANT_BOOL deep,
                                IXMLDOMNode **clone);
        END_INTERFACE
    } IXMLDOMDocument3Vtbl;
    interface IXMLDOMDocument3
    {
        CONST_VTBL struct IXMLDOMDocument3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_nodeName(This,name) )
    ( (This)->lpVtbl -> get_nodeValue(This,value) )
    ( (This)->lpVtbl -> put_nodeValue(This,value) )
    ( (This)->lpVtbl -> get_nodeType(This,type) )
    ( (This)->lpVtbl -> get_parentNode(This,parent) )
    ( (This)->lpVtbl -> get_childNodes(This,childList) )
    ( (This)->lpVtbl -> get_firstChild(This,firstChild) )
    ( (This)->lpVtbl -> get_lastChild(This,lastChild) )
    ( (This)->lpVtbl -> get_previousSibling(This,previousSibling) )
    ( (This)->lpVtbl -> get_nextSibling(This,nextSibling) )
    ( (This)->lpVtbl -> get_attributes(This,attributeMap) )
    ( (This)->lpVtbl -> insertBefore(This,newChild,refChild,outNewChild) )
    ( (This)->lpVtbl -> replaceChild(This,newChild,oldChild,outOldChild) )
    ( (This)->lpVtbl -> removeChild(This,childNode,oldChild) )
    ( (This)->lpVtbl -> appendChild(This,newChild,outNewChild) )
    ( (This)->lpVtbl -> hasChildNodes(This,hasChild) )
    ( (This)->lpVtbl -> get_ownerDocument(This,XMLDOMDocument) )
    ( (This)->lpVtbl -> cloneNode(This,deep,cloneRoot) )
    ( (This)->lpVtbl -> get_nodeTypeString(This,nodeType) )
    ( (This)->lpVtbl -> get_text(This,text) )
    ( (This)->lpVtbl -> put_text(This,text) )
    ( (This)->lpVtbl -> get_specified(This,isSpecified) )
    ( (This)->lpVtbl -> get_definition(This,definitionNode) )
    ( (This)->lpVtbl -> get_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> put_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> get_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> put_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> get_xml(This,xmlString) )
    ( (This)->lpVtbl -> transformNode(This,stylesheet,xmlString) )
    ( (This)->lpVtbl -> selectNodes(This,queryString,resultList) )
    ( (This)->lpVtbl -> selectSingleNode(This,queryString,resultNode) )
    ( (This)->lpVtbl -> get_parsed(This,isParsed) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_prefix(This,prefixString) )
    ( (This)->lpVtbl -> get_baseName(This,nameString) )
    ( (This)->lpVtbl -> transformNodeToObject(This,stylesheet,outputObject) )
    ( (This)->lpVtbl -> get_doctype(This,documentType) )
    ( (This)->lpVtbl -> get_implementation(This,impl) )
    ( (This)->lpVtbl -> get_documentElement(This,DOMElement) )
    ( (This)->lpVtbl -> putref_documentElement(This,DOMElement) )
    ( (This)->lpVtbl -> createElement(This,tagName,element) )
    ( (This)->lpVtbl -> createDocumentFragment(This,docFrag) )
    ( (This)->lpVtbl -> createTextNode(This,data,text) )
    ( (This)->lpVtbl -> createComment(This,data,comment) )
    ( (This)->lpVtbl -> createCDATASection(This,data,cdata) )
    ( (This)->lpVtbl -> createProcessingInstruction(This,target,data,pi) )
    ( (This)->lpVtbl -> createAttribute(This,name,attribute) )
    ( (This)->lpVtbl -> createEntityReference(This,name,entityRef) )
    ( (This)->lpVtbl -> getElementsByTagName(This,tagName,resultList) )
    ( (This)->lpVtbl -> createNode(This,Type,name,namespaceURI,node) )
    ( (This)->lpVtbl -> nodeFromID(This,idString,node) )
    ( (This)->lpVtbl -> load(This,xmlSource,isSuccessful) )
    ( (This)->lpVtbl -> get_readyState(This,value) )
    ( (This)->lpVtbl -> get_parseError(This,errorObj) )
    ( (This)->lpVtbl -> get_url(This,urlString) )
    ( (This)->lpVtbl -> get_async(This,isAsync) )
    ( (This)->lpVtbl -> put_async(This,isAsync) )
    ( (This)->lpVtbl -> abort(This) )
    ( (This)->lpVtbl -> loadXML(This,bstrXML,isSuccessful) )
    ( (This)->lpVtbl -> save(This,destination) )
    ( (This)->lpVtbl -> get_validateOnParse(This,isValidating) )
    ( (This)->lpVtbl -> put_validateOnParse(This,isValidating) )
    ( (This)->lpVtbl -> get_resolveExternals(This,isResolving) )
    ( (This)->lpVtbl -> put_resolveExternals(This,isResolving) )
    ( (This)->lpVtbl -> get_preserveWhiteSpace(This,isPreserving) )
    ( (This)->lpVtbl -> put_preserveWhiteSpace(This,isPreserving) )
    ( (This)->lpVtbl -> put_onreadystatechange(This,readystatechangeSink) )
    ( (This)->lpVtbl -> put_ondataavailable(This,ondataavailableSink) )
    ( (This)->lpVtbl -> put_ontransformnode(This,ontransformnodeSink) )
    ( (This)->lpVtbl -> get_namespaces(This,namespaceCollection) )
    ( (This)->lpVtbl -> get_schemas(This,otherCollection) )
    ( (This)->lpVtbl -> putref_schemas(This,otherCollection) )
    ( (This)->lpVtbl -> validate(This,errorObj) )
    ( (This)->lpVtbl -> setProperty(This,name,value) )
    ( (This)->lpVtbl -> getProperty(This,name,value) )
    ( (This)->lpVtbl -> validateNode(This,node,errorObj) )
    ( (This)->lpVtbl -> importNode(This,node,deep,clone) )
EXTERN_C const IID IID_IXMLDOMNodeList;
    typedef struct IXMLDOMNodeListVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMNodeList * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMNodeList * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMNodeList * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMNodeList * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMNodeList * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMNodeList * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMNodeList * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_item )(
            IXMLDOMNodeList * This,
                       long index,
                                IXMLDOMNode **listItem);
                                        HRESULT ( STDMETHODCALLTYPE *get_length )(
            IXMLDOMNodeList * This,
                                long *listLength);
                               HRESULT ( STDMETHODCALLTYPE *nextNode )(
            IXMLDOMNodeList * This,
                                IXMLDOMNode **nextItem);
                               HRESULT ( STDMETHODCALLTYPE *reset )(
            IXMLDOMNodeList * This);
                                                HRESULT ( STDMETHODCALLTYPE *get__newEnum )(
            IXMLDOMNodeList * This,
                                IUnknown **ppUnk);
        END_INTERFACE
    } IXMLDOMNodeListVtbl;
    interface IXMLDOMNodeList
    {
        CONST_VTBL struct IXMLDOMNodeListVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_item(This,index,listItem) )
    ( (This)->lpVtbl -> get_length(This,listLength) )
    ( (This)->lpVtbl -> nextNode(This,nextItem) )
    ( (This)->lpVtbl -> reset(This) )
    ( (This)->lpVtbl -> get__newEnum(This,ppUnk) )
EXTERN_C const IID IID_IXMLDOMNamedNodeMap;
    typedef struct IXMLDOMNamedNodeMapVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMNamedNodeMap * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMNamedNodeMap * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMNamedNodeMap * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMNamedNodeMap * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMNamedNodeMap * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMNamedNodeMap * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMNamedNodeMap * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *getNamedItem )(
            IXMLDOMNamedNodeMap * This,
                       BSTR name,
                                IXMLDOMNode **namedItem);
                               HRESULT ( STDMETHODCALLTYPE *setNamedItem )(
            IXMLDOMNamedNodeMap * This,
                       IXMLDOMNode *newItem,
                                IXMLDOMNode **nameItem);
                               HRESULT ( STDMETHODCALLTYPE *removeNamedItem )(
            IXMLDOMNamedNodeMap * This,
                       BSTR name,
                                IXMLDOMNode **namedItem);
                                        HRESULT ( STDMETHODCALLTYPE *get_item )(
            IXMLDOMNamedNodeMap * This,
                       long index,
                                IXMLDOMNode **listItem);
                                        HRESULT ( STDMETHODCALLTYPE *get_length )(
            IXMLDOMNamedNodeMap * This,
                                long *listLength);
                               HRESULT ( STDMETHODCALLTYPE *getQualifiedItem )(
            IXMLDOMNamedNodeMap * This,
                       BSTR baseName,
                       BSTR namespaceURI,
                                IXMLDOMNode **qualifiedItem);
                               HRESULT ( STDMETHODCALLTYPE *removeQualifiedItem )(
            IXMLDOMNamedNodeMap * This,
                       BSTR baseName,
                       BSTR namespaceURI,
                                IXMLDOMNode **qualifiedItem);
                               HRESULT ( STDMETHODCALLTYPE *nextNode )(
            IXMLDOMNamedNodeMap * This,
                                IXMLDOMNode **nextItem);
                               HRESULT ( STDMETHODCALLTYPE *reset )(
            IXMLDOMNamedNodeMap * This);
                                                HRESULT ( STDMETHODCALLTYPE *get__newEnum )(
            IXMLDOMNamedNodeMap * This,
                                IUnknown **ppUnk);
        END_INTERFACE
    } IXMLDOMNamedNodeMapVtbl;
    interface IXMLDOMNamedNodeMap
    {
        CONST_VTBL struct IXMLDOMNamedNodeMapVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> getNamedItem(This,name,namedItem) )
    ( (This)->lpVtbl -> setNamedItem(This,newItem,nameItem) )
    ( (This)->lpVtbl -> removeNamedItem(This,name,namedItem) )
    ( (This)->lpVtbl -> get_item(This,index,listItem) )
    ( (This)->lpVtbl -> get_length(This,listLength) )
    ( (This)->lpVtbl -> getQualifiedItem(This,baseName,namespaceURI,qualifiedItem) )
    ( (This)->lpVtbl -> removeQualifiedItem(This,baseName,namespaceURI,qualifiedItem) )
    ( (This)->lpVtbl -> nextNode(This,nextItem) )
    ( (This)->lpVtbl -> reset(This) )
    ( (This)->lpVtbl -> get__newEnum(This,ppUnk) )
EXTERN_C const IID IID_IXMLDOMCharacterData;
    typedef struct IXMLDOMCharacterDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMCharacterData * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMCharacterData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMCharacterData * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMCharacterData * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMCharacterData * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMCharacterData * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMCharacterData * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeName )(
            IXMLDOMCharacterData * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeValue )(
            IXMLDOMCharacterData * This,
                                VARIANT *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeValue )(
            IXMLDOMCharacterData * This,
                       VARIANT value);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeType )(
            IXMLDOMCharacterData * This,
                                DOMNodeType *type);
                                        HRESULT ( STDMETHODCALLTYPE *get_parentNode )(
            IXMLDOMCharacterData * This,
                                IXMLDOMNode **parent);
                                        HRESULT ( STDMETHODCALLTYPE *get_childNodes )(
            IXMLDOMCharacterData * This,
                                IXMLDOMNodeList **childList);
                                        HRESULT ( STDMETHODCALLTYPE *get_firstChild )(
            IXMLDOMCharacterData * This,
                                IXMLDOMNode **firstChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_lastChild )(
            IXMLDOMCharacterData * This,
                                IXMLDOMNode **lastChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_previousSibling )(
            IXMLDOMCharacterData * This,
                                IXMLDOMNode **previousSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_nextSibling )(
            IXMLDOMCharacterData * This,
                                IXMLDOMNode **nextSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            IXMLDOMCharacterData * This,
                                IXMLDOMNamedNodeMap **attributeMap);
                               HRESULT ( STDMETHODCALLTYPE *insertBefore )(
            IXMLDOMCharacterData * This,
                       IXMLDOMNode *newChild,
                       VARIANT refChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *replaceChild )(
            IXMLDOMCharacterData * This,
                       IXMLDOMNode *newChild,
                       IXMLDOMNode *oldChild,
                                IXMLDOMNode **outOldChild);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXMLDOMCharacterData * This,
                       IXMLDOMNode *childNode,
                                IXMLDOMNode **oldChild);
                               HRESULT ( STDMETHODCALLTYPE *appendChild )(
            IXMLDOMCharacterData * This,
                       IXMLDOMNode *newChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *hasChildNodes )(
            IXMLDOMCharacterData * This,
                                VARIANT_BOOL *hasChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_ownerDocument )(
            IXMLDOMCharacterData * This,
                                IXMLDOMDocument **XMLDOMDocument);
                               HRESULT ( STDMETHODCALLTYPE *cloneNode )(
            IXMLDOMCharacterData * This,
                       VARIANT_BOOL deep,
                                IXMLDOMNode **cloneRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypeString )(
            IXMLDOMCharacterData * This,
                                BSTR *nodeType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXMLDOMCharacterData * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXMLDOMCharacterData * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_specified )(
            IXMLDOMCharacterData * This,
                                VARIANT_BOOL *isSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_definition )(
            IXMLDOMCharacterData * This,
                                IXMLDOMNode **definitionNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypedValue )(
            IXMLDOMCharacterData * This,
                                VARIANT *typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeTypedValue )(
            IXMLDOMCharacterData * This,
                       VARIANT typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_dataType )(
            IXMLDOMCharacterData * This,
                                VARIANT *dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *put_dataType )(
            IXMLDOMCharacterData * This,
                       BSTR dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_xml )(
            IXMLDOMCharacterData * This,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *transformNode )(
            IXMLDOMCharacterData * This,
                       IXMLDOMNode *stylesheet,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *selectNodes )(
            IXMLDOMCharacterData * This,
                       BSTR queryString,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *selectSingleNode )(
            IXMLDOMCharacterData * This,
                       BSTR queryString,
                                IXMLDOMNode **resultNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_parsed )(
            IXMLDOMCharacterData * This,
                                VARIANT_BOOL *isParsed);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXMLDOMCharacterData * This,
                                BSTR *namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_prefix )(
            IXMLDOMCharacterData * This,
                                BSTR *prefixString);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseName )(
            IXMLDOMCharacterData * This,
                                BSTR *nameString);
                               HRESULT ( STDMETHODCALLTYPE *transformNodeToObject )(
            IXMLDOMCharacterData * This,
                       IXMLDOMNode *stylesheet,
                       VARIANT outputObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_data )(
            IXMLDOMCharacterData * This,
                                BSTR *data);
                                        HRESULT ( STDMETHODCALLTYPE *put_data )(
            IXMLDOMCharacterData * This,
                       BSTR data);
                                        HRESULT ( STDMETHODCALLTYPE *get_length )(
            IXMLDOMCharacterData * This,
                                long *dataLength);
                               HRESULT ( STDMETHODCALLTYPE *substringData )(
            IXMLDOMCharacterData * This,
                       long offset,
                       long count,
                                BSTR *data);
                               HRESULT ( STDMETHODCALLTYPE *appendData )(
            IXMLDOMCharacterData * This,
                       BSTR data);
                               HRESULT ( STDMETHODCALLTYPE *insertData )(
            IXMLDOMCharacterData * This,
                       long offset,
                       BSTR data);
                               HRESULT ( STDMETHODCALLTYPE *deleteData )(
            IXMLDOMCharacterData * This,
                       long offset,
                       long count);
                               HRESULT ( STDMETHODCALLTYPE *replaceData )(
            IXMLDOMCharacterData * This,
                       long offset,
                       long count,
                       BSTR data);
        END_INTERFACE
    } IXMLDOMCharacterDataVtbl;
    interface IXMLDOMCharacterData
    {
        CONST_VTBL struct IXMLDOMCharacterDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_nodeName(This,name) )
    ( (This)->lpVtbl -> get_nodeValue(This,value) )
    ( (This)->lpVtbl -> put_nodeValue(This,value) )
    ( (This)->lpVtbl -> get_nodeType(This,type) )
    ( (This)->lpVtbl -> get_parentNode(This,parent) )
    ( (This)->lpVtbl -> get_childNodes(This,childList) )
    ( (This)->lpVtbl -> get_firstChild(This,firstChild) )
    ( (This)->lpVtbl -> get_lastChild(This,lastChild) )
    ( (This)->lpVtbl -> get_previousSibling(This,previousSibling) )
    ( (This)->lpVtbl -> get_nextSibling(This,nextSibling) )
    ( (This)->lpVtbl -> get_attributes(This,attributeMap) )
    ( (This)->lpVtbl -> insertBefore(This,newChild,refChild,outNewChild) )
    ( (This)->lpVtbl -> replaceChild(This,newChild,oldChild,outOldChild) )
    ( (This)->lpVtbl -> removeChild(This,childNode,oldChild) )
    ( (This)->lpVtbl -> appendChild(This,newChild,outNewChild) )
    ( (This)->lpVtbl -> hasChildNodes(This,hasChild) )
    ( (This)->lpVtbl -> get_ownerDocument(This,XMLDOMDocument) )
    ( (This)->lpVtbl -> cloneNode(This,deep,cloneRoot) )
    ( (This)->lpVtbl -> get_nodeTypeString(This,nodeType) )
    ( (This)->lpVtbl -> get_text(This,text) )
    ( (This)->lpVtbl -> put_text(This,text) )
    ( (This)->lpVtbl -> get_specified(This,isSpecified) )
    ( (This)->lpVtbl -> get_definition(This,definitionNode) )
    ( (This)->lpVtbl -> get_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> put_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> get_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> put_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> get_xml(This,xmlString) )
    ( (This)->lpVtbl -> transformNode(This,stylesheet,xmlString) )
    ( (This)->lpVtbl -> selectNodes(This,queryString,resultList) )
    ( (This)->lpVtbl -> selectSingleNode(This,queryString,resultNode) )
    ( (This)->lpVtbl -> get_parsed(This,isParsed) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_prefix(This,prefixString) )
    ( (This)->lpVtbl -> get_baseName(This,nameString) )
    ( (This)->lpVtbl -> transformNodeToObject(This,stylesheet,outputObject) )
    ( (This)->lpVtbl -> get_data(This,data) )
    ( (This)->lpVtbl -> put_data(This,data) )
    ( (This)->lpVtbl -> get_length(This,dataLength) )
    ( (This)->lpVtbl -> substringData(This,offset,count,data) )
    ( (This)->lpVtbl -> appendData(This,data) )
    ( (This)->lpVtbl -> insertData(This,offset,data) )
    ( (This)->lpVtbl -> deleteData(This,offset,count) )
    ( (This)->lpVtbl -> replaceData(This,offset,count,data) )
EXTERN_C const IID IID_IXMLDOMAttribute;
    typedef struct IXMLDOMAttributeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMAttribute * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMAttribute * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMAttribute * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMAttribute * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMAttribute * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMAttribute * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMAttribute * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeName )(
            IXMLDOMAttribute * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeValue )(
            IXMLDOMAttribute * This,
                                VARIANT *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeValue )(
            IXMLDOMAttribute * This,
                       VARIANT value);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeType )(
            IXMLDOMAttribute * This,
                                DOMNodeType *type);
                                        HRESULT ( STDMETHODCALLTYPE *get_parentNode )(
            IXMLDOMAttribute * This,
                                IXMLDOMNode **parent);
                                        HRESULT ( STDMETHODCALLTYPE *get_childNodes )(
            IXMLDOMAttribute * This,
                                IXMLDOMNodeList **childList);
                                        HRESULT ( STDMETHODCALLTYPE *get_firstChild )(
            IXMLDOMAttribute * This,
                                IXMLDOMNode **firstChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_lastChild )(
            IXMLDOMAttribute * This,
                                IXMLDOMNode **lastChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_previousSibling )(
            IXMLDOMAttribute * This,
                                IXMLDOMNode **previousSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_nextSibling )(
            IXMLDOMAttribute * This,
                                IXMLDOMNode **nextSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            IXMLDOMAttribute * This,
                                IXMLDOMNamedNodeMap **attributeMap);
                               HRESULT ( STDMETHODCALLTYPE *insertBefore )(
            IXMLDOMAttribute * This,
                       IXMLDOMNode *newChild,
                       VARIANT refChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *replaceChild )(
            IXMLDOMAttribute * This,
                       IXMLDOMNode *newChild,
                       IXMLDOMNode *oldChild,
                                IXMLDOMNode **outOldChild);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXMLDOMAttribute * This,
                       IXMLDOMNode *childNode,
                                IXMLDOMNode **oldChild);
                               HRESULT ( STDMETHODCALLTYPE *appendChild )(
            IXMLDOMAttribute * This,
                       IXMLDOMNode *newChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *hasChildNodes )(
            IXMLDOMAttribute * This,
                                VARIANT_BOOL *hasChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_ownerDocument )(
            IXMLDOMAttribute * This,
                                IXMLDOMDocument **XMLDOMDocument);
                               HRESULT ( STDMETHODCALLTYPE *cloneNode )(
            IXMLDOMAttribute * This,
                       VARIANT_BOOL deep,
                                IXMLDOMNode **cloneRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypeString )(
            IXMLDOMAttribute * This,
                                BSTR *nodeType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXMLDOMAttribute * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXMLDOMAttribute * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_specified )(
            IXMLDOMAttribute * This,
                                VARIANT_BOOL *isSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_definition )(
            IXMLDOMAttribute * This,
                                IXMLDOMNode **definitionNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypedValue )(
            IXMLDOMAttribute * This,
                                VARIANT *typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeTypedValue )(
            IXMLDOMAttribute * This,
                       VARIANT typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_dataType )(
            IXMLDOMAttribute * This,
                                VARIANT *dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *put_dataType )(
            IXMLDOMAttribute * This,
                       BSTR dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_xml )(
            IXMLDOMAttribute * This,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *transformNode )(
            IXMLDOMAttribute * This,
                       IXMLDOMNode *stylesheet,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *selectNodes )(
            IXMLDOMAttribute * This,
                       BSTR queryString,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *selectSingleNode )(
            IXMLDOMAttribute * This,
                       BSTR queryString,
                                IXMLDOMNode **resultNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_parsed )(
            IXMLDOMAttribute * This,
                                VARIANT_BOOL *isParsed);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXMLDOMAttribute * This,
                                BSTR *namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_prefix )(
            IXMLDOMAttribute * This,
                                BSTR *prefixString);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseName )(
            IXMLDOMAttribute * This,
                                BSTR *nameString);
                               HRESULT ( STDMETHODCALLTYPE *transformNodeToObject )(
            IXMLDOMAttribute * This,
                       IXMLDOMNode *stylesheet,
                       VARIANT outputObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_name )(
            IXMLDOMAttribute * This,
                                BSTR *attributeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_value )(
            IXMLDOMAttribute * This,
                                VARIANT *attributeValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_value )(
            IXMLDOMAttribute * This,
                       VARIANT attributeValue);
        END_INTERFACE
    } IXMLDOMAttributeVtbl;
    interface IXMLDOMAttribute
    {
        CONST_VTBL struct IXMLDOMAttributeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_nodeName(This,name) )
    ( (This)->lpVtbl -> get_nodeValue(This,value) )
    ( (This)->lpVtbl -> put_nodeValue(This,value) )
    ( (This)->lpVtbl -> get_nodeType(This,type) )
    ( (This)->lpVtbl -> get_parentNode(This,parent) )
    ( (This)->lpVtbl -> get_childNodes(This,childList) )
    ( (This)->lpVtbl -> get_firstChild(This,firstChild) )
    ( (This)->lpVtbl -> get_lastChild(This,lastChild) )
    ( (This)->lpVtbl -> get_previousSibling(This,previousSibling) )
    ( (This)->lpVtbl -> get_nextSibling(This,nextSibling) )
    ( (This)->lpVtbl -> get_attributes(This,attributeMap) )
    ( (This)->lpVtbl -> insertBefore(This,newChild,refChild,outNewChild) )
    ( (This)->lpVtbl -> replaceChild(This,newChild,oldChild,outOldChild) )
    ( (This)->lpVtbl -> removeChild(This,childNode,oldChild) )
    ( (This)->lpVtbl -> appendChild(This,newChild,outNewChild) )
    ( (This)->lpVtbl -> hasChildNodes(This,hasChild) )
    ( (This)->lpVtbl -> get_ownerDocument(This,XMLDOMDocument) )
    ( (This)->lpVtbl -> cloneNode(This,deep,cloneRoot) )
    ( (This)->lpVtbl -> get_nodeTypeString(This,nodeType) )
    ( (This)->lpVtbl -> get_text(This,text) )
    ( (This)->lpVtbl -> put_text(This,text) )
    ( (This)->lpVtbl -> get_specified(This,isSpecified) )
    ( (This)->lpVtbl -> get_definition(This,definitionNode) )
    ( (This)->lpVtbl -> get_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> put_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> get_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> put_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> get_xml(This,xmlString) )
    ( (This)->lpVtbl -> transformNode(This,stylesheet,xmlString) )
    ( (This)->lpVtbl -> selectNodes(This,queryString,resultList) )
    ( (This)->lpVtbl -> selectSingleNode(This,queryString,resultNode) )
    ( (This)->lpVtbl -> get_parsed(This,isParsed) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_prefix(This,prefixString) )
    ( (This)->lpVtbl -> get_baseName(This,nameString) )
    ( (This)->lpVtbl -> transformNodeToObject(This,stylesheet,outputObject) )
    ( (This)->lpVtbl -> get_name(This,attributeName) )
    ( (This)->lpVtbl -> get_value(This,attributeValue) )
    ( (This)->lpVtbl -> put_value(This,attributeValue) )
EXTERN_C const IID IID_IXMLDOMElement;
    typedef struct IXMLDOMElementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMElement * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMElement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMElement * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMElement * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMElement * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMElement * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMElement * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeName )(
            IXMLDOMElement * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeValue )(
            IXMLDOMElement * This,
                                VARIANT *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeValue )(
            IXMLDOMElement * This,
                       VARIANT value);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeType )(
            IXMLDOMElement * This,
                                DOMNodeType *type);
                                        HRESULT ( STDMETHODCALLTYPE *get_parentNode )(
            IXMLDOMElement * This,
                                IXMLDOMNode **parent);
                                        HRESULT ( STDMETHODCALLTYPE *get_childNodes )(
            IXMLDOMElement * This,
                                IXMLDOMNodeList **childList);
                                        HRESULT ( STDMETHODCALLTYPE *get_firstChild )(
            IXMLDOMElement * This,
                                IXMLDOMNode **firstChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_lastChild )(
            IXMLDOMElement * This,
                                IXMLDOMNode **lastChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_previousSibling )(
            IXMLDOMElement * This,
                                IXMLDOMNode **previousSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_nextSibling )(
            IXMLDOMElement * This,
                                IXMLDOMNode **nextSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            IXMLDOMElement * This,
                                IXMLDOMNamedNodeMap **attributeMap);
                               HRESULT ( STDMETHODCALLTYPE *insertBefore )(
            IXMLDOMElement * This,
                       IXMLDOMNode *newChild,
                       VARIANT refChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *replaceChild )(
            IXMLDOMElement * This,
                       IXMLDOMNode *newChild,
                       IXMLDOMNode *oldChild,
                                IXMLDOMNode **outOldChild);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXMLDOMElement * This,
                       IXMLDOMNode *childNode,
                                IXMLDOMNode **oldChild);
                               HRESULT ( STDMETHODCALLTYPE *appendChild )(
            IXMLDOMElement * This,
                       IXMLDOMNode *newChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *hasChildNodes )(
            IXMLDOMElement * This,
                                VARIANT_BOOL *hasChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_ownerDocument )(
            IXMLDOMElement * This,
                                IXMLDOMDocument **XMLDOMDocument);
                               HRESULT ( STDMETHODCALLTYPE *cloneNode )(
            IXMLDOMElement * This,
                       VARIANT_BOOL deep,
                                IXMLDOMNode **cloneRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypeString )(
            IXMLDOMElement * This,
                                BSTR *nodeType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXMLDOMElement * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXMLDOMElement * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_specified )(
            IXMLDOMElement * This,
                                VARIANT_BOOL *isSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_definition )(
            IXMLDOMElement * This,
                                IXMLDOMNode **definitionNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypedValue )(
            IXMLDOMElement * This,
                                VARIANT *typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeTypedValue )(
            IXMLDOMElement * This,
                       VARIANT typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_dataType )(
            IXMLDOMElement * This,
                                VARIANT *dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *put_dataType )(
            IXMLDOMElement * This,
                       BSTR dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_xml )(
            IXMLDOMElement * This,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *transformNode )(
            IXMLDOMElement * This,
                       IXMLDOMNode *stylesheet,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *selectNodes )(
            IXMLDOMElement * This,
                       BSTR queryString,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *selectSingleNode )(
            IXMLDOMElement * This,
                       BSTR queryString,
                                IXMLDOMNode **resultNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_parsed )(
            IXMLDOMElement * This,
                                VARIANT_BOOL *isParsed);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXMLDOMElement * This,
                                BSTR *namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_prefix )(
            IXMLDOMElement * This,
                                BSTR *prefixString);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseName )(
            IXMLDOMElement * This,
                                BSTR *nameString);
                               HRESULT ( STDMETHODCALLTYPE *transformNodeToObject )(
            IXMLDOMElement * This,
                       IXMLDOMNode *stylesheet,
                       VARIANT outputObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_tagName )(
            IXMLDOMElement * This,
                                BSTR *tagName);
                               HRESULT ( STDMETHODCALLTYPE *getAttribute )(
            IXMLDOMElement * This,
                       BSTR name,
                                VARIANT *value);
                               HRESULT ( STDMETHODCALLTYPE *setAttribute )(
            IXMLDOMElement * This,
                       BSTR name,
                       VARIANT value);
                               HRESULT ( STDMETHODCALLTYPE *removeAttribute )(
            IXMLDOMElement * This,
                       BSTR name);
                               HRESULT ( STDMETHODCALLTYPE *getAttributeNode )(
            IXMLDOMElement * This,
                       BSTR name,
                                IXMLDOMAttribute **attributeNode);
                               HRESULT ( STDMETHODCALLTYPE *setAttributeNode )(
            IXMLDOMElement * This,
                       IXMLDOMAttribute *DOMAttribute,
                                IXMLDOMAttribute **attributeNode);
                               HRESULT ( STDMETHODCALLTYPE *removeAttributeNode )(
            IXMLDOMElement * This,
                       IXMLDOMAttribute *DOMAttribute,
                                IXMLDOMAttribute **attributeNode);
                               HRESULT ( STDMETHODCALLTYPE *getElementsByTagName )(
            IXMLDOMElement * This,
                       BSTR tagName,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *normalize )(
            IXMLDOMElement * This);
        END_INTERFACE
    } IXMLDOMElementVtbl;
    interface IXMLDOMElement
    {
        CONST_VTBL struct IXMLDOMElementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_nodeName(This,name) )
    ( (This)->lpVtbl -> get_nodeValue(This,value) )
    ( (This)->lpVtbl -> put_nodeValue(This,value) )
    ( (This)->lpVtbl -> get_nodeType(This,type) )
    ( (This)->lpVtbl -> get_parentNode(This,parent) )
    ( (This)->lpVtbl -> get_childNodes(This,childList) )
    ( (This)->lpVtbl -> get_firstChild(This,firstChild) )
    ( (This)->lpVtbl -> get_lastChild(This,lastChild) )
    ( (This)->lpVtbl -> get_previousSibling(This,previousSibling) )
    ( (This)->lpVtbl -> get_nextSibling(This,nextSibling) )
    ( (This)->lpVtbl -> get_attributes(This,attributeMap) )
    ( (This)->lpVtbl -> insertBefore(This,newChild,refChild,outNewChild) )
    ( (This)->lpVtbl -> replaceChild(This,newChild,oldChild,outOldChild) )
    ( (This)->lpVtbl -> removeChild(This,childNode,oldChild) )
    ( (This)->lpVtbl -> appendChild(This,newChild,outNewChild) )
    ( (This)->lpVtbl -> hasChildNodes(This,hasChild) )
    ( (This)->lpVtbl -> get_ownerDocument(This,XMLDOMDocument) )
    ( (This)->lpVtbl -> cloneNode(This,deep,cloneRoot) )
    ( (This)->lpVtbl -> get_nodeTypeString(This,nodeType) )
    ( (This)->lpVtbl -> get_text(This,text) )
    ( (This)->lpVtbl -> put_text(This,text) )
    ( (This)->lpVtbl -> get_specified(This,isSpecified) )
    ( (This)->lpVtbl -> get_definition(This,definitionNode) )
    ( (This)->lpVtbl -> get_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> put_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> get_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> put_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> get_xml(This,xmlString) )
    ( (This)->lpVtbl -> transformNode(This,stylesheet,xmlString) )
    ( (This)->lpVtbl -> selectNodes(This,queryString,resultList) )
    ( (This)->lpVtbl -> selectSingleNode(This,queryString,resultNode) )
    ( (This)->lpVtbl -> get_parsed(This,isParsed) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_prefix(This,prefixString) )
    ( (This)->lpVtbl -> get_baseName(This,nameString) )
    ( (This)->lpVtbl -> transformNodeToObject(This,stylesheet,outputObject) )
    ( (This)->lpVtbl -> get_tagName(This,tagName) )
    ( (This)->lpVtbl -> getAttribute(This,name,value) )
    ( (This)->lpVtbl -> setAttribute(This,name,value) )
    ( (This)->lpVtbl -> removeAttribute(This,name) )
    ( (This)->lpVtbl -> getAttributeNode(This,name,attributeNode) )
    ( (This)->lpVtbl -> setAttributeNode(This,DOMAttribute,attributeNode) )
    ( (This)->lpVtbl -> removeAttributeNode(This,DOMAttribute,attributeNode) )
    ( (This)->lpVtbl -> getElementsByTagName(This,tagName,resultList) )
    ( (This)->lpVtbl -> normalize(This) )
EXTERN_C const IID IID_IXMLDOMText;
    typedef struct IXMLDOMTextVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMText * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMText * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMText * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMText * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMText * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMText * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMText * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeName )(
            IXMLDOMText * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeValue )(
            IXMLDOMText * This,
                                VARIANT *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeValue )(
            IXMLDOMText * This,
                       VARIANT value);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeType )(
            IXMLDOMText * This,
                                DOMNodeType *type);
                                        HRESULT ( STDMETHODCALLTYPE *get_parentNode )(
            IXMLDOMText * This,
                                IXMLDOMNode **parent);
                                        HRESULT ( STDMETHODCALLTYPE *get_childNodes )(
            IXMLDOMText * This,
                                IXMLDOMNodeList **childList);
                                        HRESULT ( STDMETHODCALLTYPE *get_firstChild )(
            IXMLDOMText * This,
                                IXMLDOMNode **firstChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_lastChild )(
            IXMLDOMText * This,
                                IXMLDOMNode **lastChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_previousSibling )(
            IXMLDOMText * This,
                                IXMLDOMNode **previousSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_nextSibling )(
            IXMLDOMText * This,
                                IXMLDOMNode **nextSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            IXMLDOMText * This,
                                IXMLDOMNamedNodeMap **attributeMap);
                               HRESULT ( STDMETHODCALLTYPE *insertBefore )(
            IXMLDOMText * This,
                       IXMLDOMNode *newChild,
                       VARIANT refChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *replaceChild )(
            IXMLDOMText * This,
                       IXMLDOMNode *newChild,
                       IXMLDOMNode *oldChild,
                                IXMLDOMNode **outOldChild);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXMLDOMText * This,
                       IXMLDOMNode *childNode,
                                IXMLDOMNode **oldChild);
                               HRESULT ( STDMETHODCALLTYPE *appendChild )(
            IXMLDOMText * This,
                       IXMLDOMNode *newChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *hasChildNodes )(
            IXMLDOMText * This,
                                VARIANT_BOOL *hasChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_ownerDocument )(
            IXMLDOMText * This,
                                IXMLDOMDocument **XMLDOMDocument);
                               HRESULT ( STDMETHODCALLTYPE *cloneNode )(
            IXMLDOMText * This,
                       VARIANT_BOOL deep,
                                IXMLDOMNode **cloneRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypeString )(
            IXMLDOMText * This,
                                BSTR *nodeType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXMLDOMText * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXMLDOMText * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_specified )(
            IXMLDOMText * This,
                                VARIANT_BOOL *isSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_definition )(
            IXMLDOMText * This,
                                IXMLDOMNode **definitionNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypedValue )(
            IXMLDOMText * This,
                                VARIANT *typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeTypedValue )(
            IXMLDOMText * This,
                       VARIANT typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_dataType )(
            IXMLDOMText * This,
                                VARIANT *dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *put_dataType )(
            IXMLDOMText * This,
                       BSTR dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_xml )(
            IXMLDOMText * This,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *transformNode )(
            IXMLDOMText * This,
                       IXMLDOMNode *stylesheet,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *selectNodes )(
            IXMLDOMText * This,
                       BSTR queryString,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *selectSingleNode )(
            IXMLDOMText * This,
                       BSTR queryString,
                                IXMLDOMNode **resultNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_parsed )(
            IXMLDOMText * This,
                                VARIANT_BOOL *isParsed);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXMLDOMText * This,
                                BSTR *namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_prefix )(
            IXMLDOMText * This,
                                BSTR *prefixString);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseName )(
            IXMLDOMText * This,
                                BSTR *nameString);
                               HRESULT ( STDMETHODCALLTYPE *transformNodeToObject )(
            IXMLDOMText * This,
                       IXMLDOMNode *stylesheet,
                       VARIANT outputObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_data )(
            IXMLDOMText * This,
                                BSTR *data);
                                        HRESULT ( STDMETHODCALLTYPE *put_data )(
            IXMLDOMText * This,
                       BSTR data);
                                        HRESULT ( STDMETHODCALLTYPE *get_length )(
            IXMLDOMText * This,
                                long *dataLength);
                               HRESULT ( STDMETHODCALLTYPE *substringData )(
            IXMLDOMText * This,
                       long offset,
                       long count,
                                BSTR *data);
                               HRESULT ( STDMETHODCALLTYPE *appendData )(
            IXMLDOMText * This,
                       BSTR data);
                               HRESULT ( STDMETHODCALLTYPE *insertData )(
            IXMLDOMText * This,
                       long offset,
                       BSTR data);
                               HRESULT ( STDMETHODCALLTYPE *deleteData )(
            IXMLDOMText * This,
                       long offset,
                       long count);
                               HRESULT ( STDMETHODCALLTYPE *replaceData )(
            IXMLDOMText * This,
                       long offset,
                       long count,
                       BSTR data);
                               HRESULT ( STDMETHODCALLTYPE *splitText )(
            IXMLDOMText * This,
                       long offset,
                                IXMLDOMText **rightHandTextNode);
        END_INTERFACE
    } IXMLDOMTextVtbl;
    interface IXMLDOMText
    {
        CONST_VTBL struct IXMLDOMTextVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_nodeName(This,name) )
    ( (This)->lpVtbl -> get_nodeValue(This,value) )
    ( (This)->lpVtbl -> put_nodeValue(This,value) )
    ( (This)->lpVtbl -> get_nodeType(This,type) )
    ( (This)->lpVtbl -> get_parentNode(This,parent) )
    ( (This)->lpVtbl -> get_childNodes(This,childList) )
    ( (This)->lpVtbl -> get_firstChild(This,firstChild) )
    ( (This)->lpVtbl -> get_lastChild(This,lastChild) )
    ( (This)->lpVtbl -> get_previousSibling(This,previousSibling) )
    ( (This)->lpVtbl -> get_nextSibling(This,nextSibling) )
    ( (This)->lpVtbl -> get_attributes(This,attributeMap) )
    ( (This)->lpVtbl -> insertBefore(This,newChild,refChild,outNewChild) )
    ( (This)->lpVtbl -> replaceChild(This,newChild,oldChild,outOldChild) )
    ( (This)->lpVtbl -> removeChild(This,childNode,oldChild) )
    ( (This)->lpVtbl -> appendChild(This,newChild,outNewChild) )
    ( (This)->lpVtbl -> hasChildNodes(This,hasChild) )
    ( (This)->lpVtbl -> get_ownerDocument(This,XMLDOMDocument) )
    ( (This)->lpVtbl -> cloneNode(This,deep,cloneRoot) )
    ( (This)->lpVtbl -> get_nodeTypeString(This,nodeType) )
    ( (This)->lpVtbl -> get_text(This,text) )
    ( (This)->lpVtbl -> put_text(This,text) )
    ( (This)->lpVtbl -> get_specified(This,isSpecified) )
    ( (This)->lpVtbl -> get_definition(This,definitionNode) )
    ( (This)->lpVtbl -> get_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> put_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> get_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> put_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> get_xml(This,xmlString) )
    ( (This)->lpVtbl -> transformNode(This,stylesheet,xmlString) )
    ( (This)->lpVtbl -> selectNodes(This,queryString,resultList) )
    ( (This)->lpVtbl -> selectSingleNode(This,queryString,resultNode) )
    ( (This)->lpVtbl -> get_parsed(This,isParsed) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_prefix(This,prefixString) )
    ( (This)->lpVtbl -> get_baseName(This,nameString) )
    ( (This)->lpVtbl -> transformNodeToObject(This,stylesheet,outputObject) )
    ( (This)->lpVtbl -> get_data(This,data) )
    ( (This)->lpVtbl -> put_data(This,data) )
    ( (This)->lpVtbl -> get_length(This,dataLength) )
    ( (This)->lpVtbl -> substringData(This,offset,count,data) )
    ( (This)->lpVtbl -> appendData(This,data) )
    ( (This)->lpVtbl -> insertData(This,offset,data) )
    ( (This)->lpVtbl -> deleteData(This,offset,count) )
    ( (This)->lpVtbl -> replaceData(This,offset,count,data) )
    ( (This)->lpVtbl -> splitText(This,offset,rightHandTextNode) )
EXTERN_C const IID IID_IXMLDOMComment;
    typedef struct IXMLDOMCommentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMComment * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMComment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMComment * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMComment * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMComment * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMComment * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMComment * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeName )(
            IXMLDOMComment * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeValue )(
            IXMLDOMComment * This,
                                VARIANT *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeValue )(
            IXMLDOMComment * This,
                       VARIANT value);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeType )(
            IXMLDOMComment * This,
                                DOMNodeType *type);
                                        HRESULT ( STDMETHODCALLTYPE *get_parentNode )(
            IXMLDOMComment * This,
                                IXMLDOMNode **parent);
                                        HRESULT ( STDMETHODCALLTYPE *get_childNodes )(
            IXMLDOMComment * This,
                                IXMLDOMNodeList **childList);
                                        HRESULT ( STDMETHODCALLTYPE *get_firstChild )(
            IXMLDOMComment * This,
                                IXMLDOMNode **firstChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_lastChild )(
            IXMLDOMComment * This,
                                IXMLDOMNode **lastChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_previousSibling )(
            IXMLDOMComment * This,
                                IXMLDOMNode **previousSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_nextSibling )(
            IXMLDOMComment * This,
                                IXMLDOMNode **nextSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            IXMLDOMComment * This,
                                IXMLDOMNamedNodeMap **attributeMap);
                               HRESULT ( STDMETHODCALLTYPE *insertBefore )(
            IXMLDOMComment * This,
                       IXMLDOMNode *newChild,
                       VARIANT refChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *replaceChild )(
            IXMLDOMComment * This,
                       IXMLDOMNode *newChild,
                       IXMLDOMNode *oldChild,
                                IXMLDOMNode **outOldChild);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXMLDOMComment * This,
                       IXMLDOMNode *childNode,
                                IXMLDOMNode **oldChild);
                               HRESULT ( STDMETHODCALLTYPE *appendChild )(
            IXMLDOMComment * This,
                       IXMLDOMNode *newChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *hasChildNodes )(
            IXMLDOMComment * This,
                                VARIANT_BOOL *hasChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_ownerDocument )(
            IXMLDOMComment * This,
                                IXMLDOMDocument **XMLDOMDocument);
                               HRESULT ( STDMETHODCALLTYPE *cloneNode )(
            IXMLDOMComment * This,
                       VARIANT_BOOL deep,
                                IXMLDOMNode **cloneRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypeString )(
            IXMLDOMComment * This,
                                BSTR *nodeType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXMLDOMComment * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXMLDOMComment * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_specified )(
            IXMLDOMComment * This,
                                VARIANT_BOOL *isSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_definition )(
            IXMLDOMComment * This,
                                IXMLDOMNode **definitionNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypedValue )(
            IXMLDOMComment * This,
                                VARIANT *typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeTypedValue )(
            IXMLDOMComment * This,
                       VARIANT typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_dataType )(
            IXMLDOMComment * This,
                                VARIANT *dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *put_dataType )(
            IXMLDOMComment * This,
                       BSTR dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_xml )(
            IXMLDOMComment * This,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *transformNode )(
            IXMLDOMComment * This,
                       IXMLDOMNode *stylesheet,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *selectNodes )(
            IXMLDOMComment * This,
                       BSTR queryString,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *selectSingleNode )(
            IXMLDOMComment * This,
                       BSTR queryString,
                                IXMLDOMNode **resultNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_parsed )(
            IXMLDOMComment * This,
                                VARIANT_BOOL *isParsed);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXMLDOMComment * This,
                                BSTR *namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_prefix )(
            IXMLDOMComment * This,
                                BSTR *prefixString);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseName )(
            IXMLDOMComment * This,
                                BSTR *nameString);
                               HRESULT ( STDMETHODCALLTYPE *transformNodeToObject )(
            IXMLDOMComment * This,
                       IXMLDOMNode *stylesheet,
                       VARIANT outputObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_data )(
            IXMLDOMComment * This,
                                BSTR *data);
                                        HRESULT ( STDMETHODCALLTYPE *put_data )(
            IXMLDOMComment * This,
                       BSTR data);
                                        HRESULT ( STDMETHODCALLTYPE *get_length )(
            IXMLDOMComment * This,
                                long *dataLength);
                               HRESULT ( STDMETHODCALLTYPE *substringData )(
            IXMLDOMComment * This,
                       long offset,
                       long count,
                                BSTR *data);
                               HRESULT ( STDMETHODCALLTYPE *appendData )(
            IXMLDOMComment * This,
                       BSTR data);
                               HRESULT ( STDMETHODCALLTYPE *insertData )(
            IXMLDOMComment * This,
                       long offset,
                       BSTR data);
                               HRESULT ( STDMETHODCALLTYPE *deleteData )(
            IXMLDOMComment * This,
                       long offset,
                       long count);
                               HRESULT ( STDMETHODCALLTYPE *replaceData )(
            IXMLDOMComment * This,
                       long offset,
                       long count,
                       BSTR data);
        END_INTERFACE
    } IXMLDOMCommentVtbl;
    interface IXMLDOMComment
    {
        CONST_VTBL struct IXMLDOMCommentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_nodeName(This,name) )
    ( (This)->lpVtbl -> get_nodeValue(This,value) )
    ( (This)->lpVtbl -> put_nodeValue(This,value) )
    ( (This)->lpVtbl -> get_nodeType(This,type) )
    ( (This)->lpVtbl -> get_parentNode(This,parent) )
    ( (This)->lpVtbl -> get_childNodes(This,childList) )
    ( (This)->lpVtbl -> get_firstChild(This,firstChild) )
    ( (This)->lpVtbl -> get_lastChild(This,lastChild) )
    ( (This)->lpVtbl -> get_previousSibling(This,previousSibling) )
    ( (This)->lpVtbl -> get_nextSibling(This,nextSibling) )
    ( (This)->lpVtbl -> get_attributes(This,attributeMap) )
    ( (This)->lpVtbl -> insertBefore(This,newChild,refChild,outNewChild) )
    ( (This)->lpVtbl -> replaceChild(This,newChild,oldChild,outOldChild) )
    ( (This)->lpVtbl -> removeChild(This,childNode,oldChild) )
    ( (This)->lpVtbl -> appendChild(This,newChild,outNewChild) )
    ( (This)->lpVtbl -> hasChildNodes(This,hasChild) )
    ( (This)->lpVtbl -> get_ownerDocument(This,XMLDOMDocument) )
    ( (This)->lpVtbl -> cloneNode(This,deep,cloneRoot) )
    ( (This)->lpVtbl -> get_nodeTypeString(This,nodeType) )
    ( (This)->lpVtbl -> get_text(This,text) )
    ( (This)->lpVtbl -> put_text(This,text) )
    ( (This)->lpVtbl -> get_specified(This,isSpecified) )
    ( (This)->lpVtbl -> get_definition(This,definitionNode) )
    ( (This)->lpVtbl -> get_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> put_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> get_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> put_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> get_xml(This,xmlString) )
    ( (This)->lpVtbl -> transformNode(This,stylesheet,xmlString) )
    ( (This)->lpVtbl -> selectNodes(This,queryString,resultList) )
    ( (This)->lpVtbl -> selectSingleNode(This,queryString,resultNode) )
    ( (This)->lpVtbl -> get_parsed(This,isParsed) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_prefix(This,prefixString) )
    ( (This)->lpVtbl -> get_baseName(This,nameString) )
    ( (This)->lpVtbl -> transformNodeToObject(This,stylesheet,outputObject) )
    ( (This)->lpVtbl -> get_data(This,data) )
    ( (This)->lpVtbl -> put_data(This,data) )
    ( (This)->lpVtbl -> get_length(This,dataLength) )
    ( (This)->lpVtbl -> substringData(This,offset,count,data) )
    ( (This)->lpVtbl -> appendData(This,data) )
    ( (This)->lpVtbl -> insertData(This,offset,data) )
    ( (This)->lpVtbl -> deleteData(This,offset,count) )
    ( (This)->lpVtbl -> replaceData(This,offset,count,data) )
EXTERN_C const IID IID_IXMLDOMProcessingInstruction;
    typedef struct IXMLDOMProcessingInstructionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMProcessingInstruction * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMProcessingInstruction * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMProcessingInstruction * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMProcessingInstruction * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMProcessingInstruction * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMProcessingInstruction * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMProcessingInstruction * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeName )(
            IXMLDOMProcessingInstruction * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeValue )(
            IXMLDOMProcessingInstruction * This,
                                VARIANT *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeValue )(
            IXMLDOMProcessingInstruction * This,
                       VARIANT value);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeType )(
            IXMLDOMProcessingInstruction * This,
                                DOMNodeType *type);
                                        HRESULT ( STDMETHODCALLTYPE *get_parentNode )(
            IXMLDOMProcessingInstruction * This,
                                IXMLDOMNode **parent);
                                        HRESULT ( STDMETHODCALLTYPE *get_childNodes )(
            IXMLDOMProcessingInstruction * This,
                                IXMLDOMNodeList **childList);
                                        HRESULT ( STDMETHODCALLTYPE *get_firstChild )(
            IXMLDOMProcessingInstruction * This,
                                IXMLDOMNode **firstChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_lastChild )(
            IXMLDOMProcessingInstruction * This,
                                IXMLDOMNode **lastChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_previousSibling )(
            IXMLDOMProcessingInstruction * This,
                                IXMLDOMNode **previousSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_nextSibling )(
            IXMLDOMProcessingInstruction * This,
                                IXMLDOMNode **nextSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            IXMLDOMProcessingInstruction * This,
                                IXMLDOMNamedNodeMap **attributeMap);
                               HRESULT ( STDMETHODCALLTYPE *insertBefore )(
            IXMLDOMProcessingInstruction * This,
                       IXMLDOMNode *newChild,
                       VARIANT refChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *replaceChild )(
            IXMLDOMProcessingInstruction * This,
                       IXMLDOMNode *newChild,
                       IXMLDOMNode *oldChild,
                                IXMLDOMNode **outOldChild);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXMLDOMProcessingInstruction * This,
                       IXMLDOMNode *childNode,
                                IXMLDOMNode **oldChild);
                               HRESULT ( STDMETHODCALLTYPE *appendChild )(
            IXMLDOMProcessingInstruction * This,
                       IXMLDOMNode *newChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *hasChildNodes )(
            IXMLDOMProcessingInstruction * This,
                                VARIANT_BOOL *hasChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_ownerDocument )(
            IXMLDOMProcessingInstruction * This,
                                IXMLDOMDocument **XMLDOMDocument);
                               HRESULT ( STDMETHODCALLTYPE *cloneNode )(
            IXMLDOMProcessingInstruction * This,
                       VARIANT_BOOL deep,
                                IXMLDOMNode **cloneRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypeString )(
            IXMLDOMProcessingInstruction * This,
                                BSTR *nodeType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXMLDOMProcessingInstruction * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXMLDOMProcessingInstruction * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_specified )(
            IXMLDOMProcessingInstruction * This,
                                VARIANT_BOOL *isSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_definition )(
            IXMLDOMProcessingInstruction * This,
                                IXMLDOMNode **definitionNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypedValue )(
            IXMLDOMProcessingInstruction * This,
                                VARIANT *typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeTypedValue )(
            IXMLDOMProcessingInstruction * This,
                       VARIANT typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_dataType )(
            IXMLDOMProcessingInstruction * This,
                                VARIANT *dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *put_dataType )(
            IXMLDOMProcessingInstruction * This,
                       BSTR dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_xml )(
            IXMLDOMProcessingInstruction * This,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *transformNode )(
            IXMLDOMProcessingInstruction * This,
                       IXMLDOMNode *stylesheet,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *selectNodes )(
            IXMLDOMProcessingInstruction * This,
                       BSTR queryString,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *selectSingleNode )(
            IXMLDOMProcessingInstruction * This,
                       BSTR queryString,
                                IXMLDOMNode **resultNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_parsed )(
            IXMLDOMProcessingInstruction * This,
                                VARIANT_BOOL *isParsed);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXMLDOMProcessingInstruction * This,
                                BSTR *namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_prefix )(
            IXMLDOMProcessingInstruction * This,
                                BSTR *prefixString);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseName )(
            IXMLDOMProcessingInstruction * This,
                                BSTR *nameString);
                               HRESULT ( STDMETHODCALLTYPE *transformNodeToObject )(
            IXMLDOMProcessingInstruction * This,
                       IXMLDOMNode *stylesheet,
                       VARIANT outputObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_target )(
            IXMLDOMProcessingInstruction * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_data )(
            IXMLDOMProcessingInstruction * This,
                                BSTR *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_data )(
            IXMLDOMProcessingInstruction * This,
                       BSTR value);
        END_INTERFACE
    } IXMLDOMProcessingInstructionVtbl;
    interface IXMLDOMProcessingInstruction
    {
        CONST_VTBL struct IXMLDOMProcessingInstructionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_nodeName(This,name) )
    ( (This)->lpVtbl -> get_nodeValue(This,value) )
    ( (This)->lpVtbl -> put_nodeValue(This,value) )
    ( (This)->lpVtbl -> get_nodeType(This,type) )
    ( (This)->lpVtbl -> get_parentNode(This,parent) )
    ( (This)->lpVtbl -> get_childNodes(This,childList) )
    ( (This)->lpVtbl -> get_firstChild(This,firstChild) )
    ( (This)->lpVtbl -> get_lastChild(This,lastChild) )
    ( (This)->lpVtbl -> get_previousSibling(This,previousSibling) )
    ( (This)->lpVtbl -> get_nextSibling(This,nextSibling) )
    ( (This)->lpVtbl -> get_attributes(This,attributeMap) )
    ( (This)->lpVtbl -> insertBefore(This,newChild,refChild,outNewChild) )
    ( (This)->lpVtbl -> replaceChild(This,newChild,oldChild,outOldChild) )
    ( (This)->lpVtbl -> removeChild(This,childNode,oldChild) )
    ( (This)->lpVtbl -> appendChild(This,newChild,outNewChild) )
    ( (This)->lpVtbl -> hasChildNodes(This,hasChild) )
    ( (This)->lpVtbl -> get_ownerDocument(This,XMLDOMDocument) )
    ( (This)->lpVtbl -> cloneNode(This,deep,cloneRoot) )
    ( (This)->lpVtbl -> get_nodeTypeString(This,nodeType) )
    ( (This)->lpVtbl -> get_text(This,text) )
    ( (This)->lpVtbl -> put_text(This,text) )
    ( (This)->lpVtbl -> get_specified(This,isSpecified) )
    ( (This)->lpVtbl -> get_definition(This,definitionNode) )
    ( (This)->lpVtbl -> get_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> put_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> get_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> put_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> get_xml(This,xmlString) )
    ( (This)->lpVtbl -> transformNode(This,stylesheet,xmlString) )
    ( (This)->lpVtbl -> selectNodes(This,queryString,resultList) )
    ( (This)->lpVtbl -> selectSingleNode(This,queryString,resultNode) )
    ( (This)->lpVtbl -> get_parsed(This,isParsed) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_prefix(This,prefixString) )
    ( (This)->lpVtbl -> get_baseName(This,nameString) )
    ( (This)->lpVtbl -> transformNodeToObject(This,stylesheet,outputObject) )
    ( (This)->lpVtbl -> get_target(This,name) )
    ( (This)->lpVtbl -> get_data(This,value) )
    ( (This)->lpVtbl -> put_data(This,value) )
EXTERN_C const IID IID_IXMLDOMCDATASection;
    typedef struct IXMLDOMCDATASectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMCDATASection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMCDATASection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMCDATASection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMCDATASection * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMCDATASection * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMCDATASection * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMCDATASection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeName )(
            IXMLDOMCDATASection * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeValue )(
            IXMLDOMCDATASection * This,
                                VARIANT *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeValue )(
            IXMLDOMCDATASection * This,
                       VARIANT value);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeType )(
            IXMLDOMCDATASection * This,
                                DOMNodeType *type);
                                        HRESULT ( STDMETHODCALLTYPE *get_parentNode )(
            IXMLDOMCDATASection * This,
                                IXMLDOMNode **parent);
                                        HRESULT ( STDMETHODCALLTYPE *get_childNodes )(
            IXMLDOMCDATASection * This,
                                IXMLDOMNodeList **childList);
                                        HRESULT ( STDMETHODCALLTYPE *get_firstChild )(
            IXMLDOMCDATASection * This,
                                IXMLDOMNode **firstChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_lastChild )(
            IXMLDOMCDATASection * This,
                                IXMLDOMNode **lastChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_previousSibling )(
            IXMLDOMCDATASection * This,
                                IXMLDOMNode **previousSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_nextSibling )(
            IXMLDOMCDATASection * This,
                                IXMLDOMNode **nextSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            IXMLDOMCDATASection * This,
                                IXMLDOMNamedNodeMap **attributeMap);
                               HRESULT ( STDMETHODCALLTYPE *insertBefore )(
            IXMLDOMCDATASection * This,
                       IXMLDOMNode *newChild,
                       VARIANT refChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *replaceChild )(
            IXMLDOMCDATASection * This,
                       IXMLDOMNode *newChild,
                       IXMLDOMNode *oldChild,
                                IXMLDOMNode **outOldChild);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXMLDOMCDATASection * This,
                       IXMLDOMNode *childNode,
                                IXMLDOMNode **oldChild);
                               HRESULT ( STDMETHODCALLTYPE *appendChild )(
            IXMLDOMCDATASection * This,
                       IXMLDOMNode *newChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *hasChildNodes )(
            IXMLDOMCDATASection * This,
                                VARIANT_BOOL *hasChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_ownerDocument )(
            IXMLDOMCDATASection * This,
                                IXMLDOMDocument **XMLDOMDocument);
                               HRESULT ( STDMETHODCALLTYPE *cloneNode )(
            IXMLDOMCDATASection * This,
                       VARIANT_BOOL deep,
                                IXMLDOMNode **cloneRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypeString )(
            IXMLDOMCDATASection * This,
                                BSTR *nodeType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXMLDOMCDATASection * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXMLDOMCDATASection * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_specified )(
            IXMLDOMCDATASection * This,
                                VARIANT_BOOL *isSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_definition )(
            IXMLDOMCDATASection * This,
                                IXMLDOMNode **definitionNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypedValue )(
            IXMLDOMCDATASection * This,
                                VARIANT *typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeTypedValue )(
            IXMLDOMCDATASection * This,
                       VARIANT typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_dataType )(
            IXMLDOMCDATASection * This,
                                VARIANT *dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *put_dataType )(
            IXMLDOMCDATASection * This,
                       BSTR dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_xml )(
            IXMLDOMCDATASection * This,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *transformNode )(
            IXMLDOMCDATASection * This,
                       IXMLDOMNode *stylesheet,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *selectNodes )(
            IXMLDOMCDATASection * This,
                       BSTR queryString,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *selectSingleNode )(
            IXMLDOMCDATASection * This,
                       BSTR queryString,
                                IXMLDOMNode **resultNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_parsed )(
            IXMLDOMCDATASection * This,
                                VARIANT_BOOL *isParsed);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXMLDOMCDATASection * This,
                                BSTR *namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_prefix )(
            IXMLDOMCDATASection * This,
                                BSTR *prefixString);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseName )(
            IXMLDOMCDATASection * This,
                                BSTR *nameString);
                               HRESULT ( STDMETHODCALLTYPE *transformNodeToObject )(
            IXMLDOMCDATASection * This,
                       IXMLDOMNode *stylesheet,
                       VARIANT outputObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_data )(
            IXMLDOMCDATASection * This,
                                BSTR *data);
                                        HRESULT ( STDMETHODCALLTYPE *put_data )(
            IXMLDOMCDATASection * This,
                       BSTR data);
                                        HRESULT ( STDMETHODCALLTYPE *get_length )(
            IXMLDOMCDATASection * This,
                                long *dataLength);
                               HRESULT ( STDMETHODCALLTYPE *substringData )(
            IXMLDOMCDATASection * This,
                       long offset,
                       long count,
                                BSTR *data);
                               HRESULT ( STDMETHODCALLTYPE *appendData )(
            IXMLDOMCDATASection * This,
                       BSTR data);
                               HRESULT ( STDMETHODCALLTYPE *insertData )(
            IXMLDOMCDATASection * This,
                       long offset,
                       BSTR data);
                               HRESULT ( STDMETHODCALLTYPE *deleteData )(
            IXMLDOMCDATASection * This,
                       long offset,
                       long count);
                               HRESULT ( STDMETHODCALLTYPE *replaceData )(
            IXMLDOMCDATASection * This,
                       long offset,
                       long count,
                       BSTR data);
                               HRESULT ( STDMETHODCALLTYPE *splitText )(
            IXMLDOMCDATASection * This,
                       long offset,
                                IXMLDOMText **rightHandTextNode);
        END_INTERFACE
    } IXMLDOMCDATASectionVtbl;
    interface IXMLDOMCDATASection
    {
        CONST_VTBL struct IXMLDOMCDATASectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_nodeName(This,name) )
    ( (This)->lpVtbl -> get_nodeValue(This,value) )
    ( (This)->lpVtbl -> put_nodeValue(This,value) )
    ( (This)->lpVtbl -> get_nodeType(This,type) )
    ( (This)->lpVtbl -> get_parentNode(This,parent) )
    ( (This)->lpVtbl -> get_childNodes(This,childList) )
    ( (This)->lpVtbl -> get_firstChild(This,firstChild) )
    ( (This)->lpVtbl -> get_lastChild(This,lastChild) )
    ( (This)->lpVtbl -> get_previousSibling(This,previousSibling) )
    ( (This)->lpVtbl -> get_nextSibling(This,nextSibling) )
    ( (This)->lpVtbl -> get_attributes(This,attributeMap) )
    ( (This)->lpVtbl -> insertBefore(This,newChild,refChild,outNewChild) )
    ( (This)->lpVtbl -> replaceChild(This,newChild,oldChild,outOldChild) )
    ( (This)->lpVtbl -> removeChild(This,childNode,oldChild) )
    ( (This)->lpVtbl -> appendChild(This,newChild,outNewChild) )
    ( (This)->lpVtbl -> hasChildNodes(This,hasChild) )
    ( (This)->lpVtbl -> get_ownerDocument(This,XMLDOMDocument) )
    ( (This)->lpVtbl -> cloneNode(This,deep,cloneRoot) )
    ( (This)->lpVtbl -> get_nodeTypeString(This,nodeType) )
    ( (This)->lpVtbl -> get_text(This,text) )
    ( (This)->lpVtbl -> put_text(This,text) )
    ( (This)->lpVtbl -> get_specified(This,isSpecified) )
    ( (This)->lpVtbl -> get_definition(This,definitionNode) )
    ( (This)->lpVtbl -> get_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> put_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> get_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> put_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> get_xml(This,xmlString) )
    ( (This)->lpVtbl -> transformNode(This,stylesheet,xmlString) )
    ( (This)->lpVtbl -> selectNodes(This,queryString,resultList) )
    ( (This)->lpVtbl -> selectSingleNode(This,queryString,resultNode) )
    ( (This)->lpVtbl -> get_parsed(This,isParsed) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_prefix(This,prefixString) )
    ( (This)->lpVtbl -> get_baseName(This,nameString) )
    ( (This)->lpVtbl -> transformNodeToObject(This,stylesheet,outputObject) )
    ( (This)->lpVtbl -> get_data(This,data) )
    ( (This)->lpVtbl -> put_data(This,data) )
    ( (This)->lpVtbl -> get_length(This,dataLength) )
    ( (This)->lpVtbl -> substringData(This,offset,count,data) )
    ( (This)->lpVtbl -> appendData(This,data) )
    ( (This)->lpVtbl -> insertData(This,offset,data) )
    ( (This)->lpVtbl -> deleteData(This,offset,count) )
    ( (This)->lpVtbl -> replaceData(This,offset,count,data) )
    ( (This)->lpVtbl -> splitText(This,offset,rightHandTextNode) )
EXTERN_C const IID IID_IXMLDOMDocumentType;
    typedef struct IXMLDOMDocumentTypeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMDocumentType * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMDocumentType * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMDocumentType * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMDocumentType * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMDocumentType * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMDocumentType * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMDocumentType * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeName )(
            IXMLDOMDocumentType * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeValue )(
            IXMLDOMDocumentType * This,
                                VARIANT *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeValue )(
            IXMLDOMDocumentType * This,
                       VARIANT value);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeType )(
            IXMLDOMDocumentType * This,
                                DOMNodeType *type);
                                        HRESULT ( STDMETHODCALLTYPE *get_parentNode )(
            IXMLDOMDocumentType * This,
                                IXMLDOMNode **parent);
                                        HRESULT ( STDMETHODCALLTYPE *get_childNodes )(
            IXMLDOMDocumentType * This,
                                IXMLDOMNodeList **childList);
                                        HRESULT ( STDMETHODCALLTYPE *get_firstChild )(
            IXMLDOMDocumentType * This,
                                IXMLDOMNode **firstChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_lastChild )(
            IXMLDOMDocumentType * This,
                                IXMLDOMNode **lastChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_previousSibling )(
            IXMLDOMDocumentType * This,
                                IXMLDOMNode **previousSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_nextSibling )(
            IXMLDOMDocumentType * This,
                                IXMLDOMNode **nextSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            IXMLDOMDocumentType * This,
                                IXMLDOMNamedNodeMap **attributeMap);
                               HRESULT ( STDMETHODCALLTYPE *insertBefore )(
            IXMLDOMDocumentType * This,
                       IXMLDOMNode *newChild,
                       VARIANT refChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *replaceChild )(
            IXMLDOMDocumentType * This,
                       IXMLDOMNode *newChild,
                       IXMLDOMNode *oldChild,
                                IXMLDOMNode **outOldChild);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXMLDOMDocumentType * This,
                       IXMLDOMNode *childNode,
                                IXMLDOMNode **oldChild);
                               HRESULT ( STDMETHODCALLTYPE *appendChild )(
            IXMLDOMDocumentType * This,
                       IXMLDOMNode *newChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *hasChildNodes )(
            IXMLDOMDocumentType * This,
                                VARIANT_BOOL *hasChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_ownerDocument )(
            IXMLDOMDocumentType * This,
                                IXMLDOMDocument **XMLDOMDocument);
                               HRESULT ( STDMETHODCALLTYPE *cloneNode )(
            IXMLDOMDocumentType * This,
                       VARIANT_BOOL deep,
                                IXMLDOMNode **cloneRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypeString )(
            IXMLDOMDocumentType * This,
                                BSTR *nodeType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXMLDOMDocumentType * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXMLDOMDocumentType * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_specified )(
            IXMLDOMDocumentType * This,
                                VARIANT_BOOL *isSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_definition )(
            IXMLDOMDocumentType * This,
                                IXMLDOMNode **definitionNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypedValue )(
            IXMLDOMDocumentType * This,
                                VARIANT *typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeTypedValue )(
            IXMLDOMDocumentType * This,
                       VARIANT typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_dataType )(
            IXMLDOMDocumentType * This,
                                VARIANT *dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *put_dataType )(
            IXMLDOMDocumentType * This,
                       BSTR dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_xml )(
            IXMLDOMDocumentType * This,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *transformNode )(
            IXMLDOMDocumentType * This,
                       IXMLDOMNode *stylesheet,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *selectNodes )(
            IXMLDOMDocumentType * This,
                       BSTR queryString,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *selectSingleNode )(
            IXMLDOMDocumentType * This,
                       BSTR queryString,
                                IXMLDOMNode **resultNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_parsed )(
            IXMLDOMDocumentType * This,
                                VARIANT_BOOL *isParsed);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXMLDOMDocumentType * This,
                                BSTR *namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_prefix )(
            IXMLDOMDocumentType * This,
                                BSTR *prefixString);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseName )(
            IXMLDOMDocumentType * This,
                                BSTR *nameString);
                               HRESULT ( STDMETHODCALLTYPE *transformNodeToObject )(
            IXMLDOMDocumentType * This,
                       IXMLDOMNode *stylesheet,
                       VARIANT outputObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_name )(
            IXMLDOMDocumentType * This,
                                BSTR *rootName);
                                        HRESULT ( STDMETHODCALLTYPE *get_entities )(
            IXMLDOMDocumentType * This,
                                IXMLDOMNamedNodeMap **entityMap);
                                        HRESULT ( STDMETHODCALLTYPE *get_notations )(
            IXMLDOMDocumentType * This,
                                IXMLDOMNamedNodeMap **notationMap);
        END_INTERFACE
    } IXMLDOMDocumentTypeVtbl;
    interface IXMLDOMDocumentType
    {
        CONST_VTBL struct IXMLDOMDocumentTypeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_nodeName(This,name) )
    ( (This)->lpVtbl -> get_nodeValue(This,value) )
    ( (This)->lpVtbl -> put_nodeValue(This,value) )
    ( (This)->lpVtbl -> get_nodeType(This,type) )
    ( (This)->lpVtbl -> get_parentNode(This,parent) )
    ( (This)->lpVtbl -> get_childNodes(This,childList) )
    ( (This)->lpVtbl -> get_firstChild(This,firstChild) )
    ( (This)->lpVtbl -> get_lastChild(This,lastChild) )
    ( (This)->lpVtbl -> get_previousSibling(This,previousSibling) )
    ( (This)->lpVtbl -> get_nextSibling(This,nextSibling) )
    ( (This)->lpVtbl -> get_attributes(This,attributeMap) )
    ( (This)->lpVtbl -> insertBefore(This,newChild,refChild,outNewChild) )
    ( (This)->lpVtbl -> replaceChild(This,newChild,oldChild,outOldChild) )
    ( (This)->lpVtbl -> removeChild(This,childNode,oldChild) )
    ( (This)->lpVtbl -> appendChild(This,newChild,outNewChild) )
    ( (This)->lpVtbl -> hasChildNodes(This,hasChild) )
    ( (This)->lpVtbl -> get_ownerDocument(This,XMLDOMDocument) )
    ( (This)->lpVtbl -> cloneNode(This,deep,cloneRoot) )
    ( (This)->lpVtbl -> get_nodeTypeString(This,nodeType) )
    ( (This)->lpVtbl -> get_text(This,text) )
    ( (This)->lpVtbl -> put_text(This,text) )
    ( (This)->lpVtbl -> get_specified(This,isSpecified) )
    ( (This)->lpVtbl -> get_definition(This,definitionNode) )
    ( (This)->lpVtbl -> get_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> put_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> get_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> put_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> get_xml(This,xmlString) )
    ( (This)->lpVtbl -> transformNode(This,stylesheet,xmlString) )
    ( (This)->lpVtbl -> selectNodes(This,queryString,resultList) )
    ( (This)->lpVtbl -> selectSingleNode(This,queryString,resultNode) )
    ( (This)->lpVtbl -> get_parsed(This,isParsed) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_prefix(This,prefixString) )
    ( (This)->lpVtbl -> get_baseName(This,nameString) )
    ( (This)->lpVtbl -> transformNodeToObject(This,stylesheet,outputObject) )
    ( (This)->lpVtbl -> get_name(This,rootName) )
    ( (This)->lpVtbl -> get_entities(This,entityMap) )
    ( (This)->lpVtbl -> get_notations(This,notationMap) )
EXTERN_C const IID IID_IXMLDOMNotation;
    typedef struct IXMLDOMNotationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMNotation * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMNotation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMNotation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMNotation * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMNotation * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMNotation * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMNotation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeName )(
            IXMLDOMNotation * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeValue )(
            IXMLDOMNotation * This,
                                VARIANT *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeValue )(
            IXMLDOMNotation * This,
                       VARIANT value);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeType )(
            IXMLDOMNotation * This,
                                DOMNodeType *type);
                                        HRESULT ( STDMETHODCALLTYPE *get_parentNode )(
            IXMLDOMNotation * This,
                                IXMLDOMNode **parent);
                                        HRESULT ( STDMETHODCALLTYPE *get_childNodes )(
            IXMLDOMNotation * This,
                                IXMLDOMNodeList **childList);
                                        HRESULT ( STDMETHODCALLTYPE *get_firstChild )(
            IXMLDOMNotation * This,
                                IXMLDOMNode **firstChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_lastChild )(
            IXMLDOMNotation * This,
                                IXMLDOMNode **lastChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_previousSibling )(
            IXMLDOMNotation * This,
                                IXMLDOMNode **previousSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_nextSibling )(
            IXMLDOMNotation * This,
                                IXMLDOMNode **nextSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            IXMLDOMNotation * This,
                                IXMLDOMNamedNodeMap **attributeMap);
                               HRESULT ( STDMETHODCALLTYPE *insertBefore )(
            IXMLDOMNotation * This,
                       IXMLDOMNode *newChild,
                       VARIANT refChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *replaceChild )(
            IXMLDOMNotation * This,
                       IXMLDOMNode *newChild,
                       IXMLDOMNode *oldChild,
                                IXMLDOMNode **outOldChild);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXMLDOMNotation * This,
                       IXMLDOMNode *childNode,
                                IXMLDOMNode **oldChild);
                               HRESULT ( STDMETHODCALLTYPE *appendChild )(
            IXMLDOMNotation * This,
                       IXMLDOMNode *newChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *hasChildNodes )(
            IXMLDOMNotation * This,
                                VARIANT_BOOL *hasChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_ownerDocument )(
            IXMLDOMNotation * This,
                                IXMLDOMDocument **XMLDOMDocument);
                               HRESULT ( STDMETHODCALLTYPE *cloneNode )(
            IXMLDOMNotation * This,
                       VARIANT_BOOL deep,
                                IXMLDOMNode **cloneRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypeString )(
            IXMLDOMNotation * This,
                                BSTR *nodeType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXMLDOMNotation * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXMLDOMNotation * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_specified )(
            IXMLDOMNotation * This,
                                VARIANT_BOOL *isSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_definition )(
            IXMLDOMNotation * This,
                                IXMLDOMNode **definitionNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypedValue )(
            IXMLDOMNotation * This,
                                VARIANT *typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeTypedValue )(
            IXMLDOMNotation * This,
                       VARIANT typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_dataType )(
            IXMLDOMNotation * This,
                                VARIANT *dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *put_dataType )(
            IXMLDOMNotation * This,
                       BSTR dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_xml )(
            IXMLDOMNotation * This,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *transformNode )(
            IXMLDOMNotation * This,
                       IXMLDOMNode *stylesheet,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *selectNodes )(
            IXMLDOMNotation * This,
                       BSTR queryString,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *selectSingleNode )(
            IXMLDOMNotation * This,
                       BSTR queryString,
                                IXMLDOMNode **resultNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_parsed )(
            IXMLDOMNotation * This,
                                VARIANT_BOOL *isParsed);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXMLDOMNotation * This,
                                BSTR *namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_prefix )(
            IXMLDOMNotation * This,
                                BSTR *prefixString);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseName )(
            IXMLDOMNotation * This,
                                BSTR *nameString);
                               HRESULT ( STDMETHODCALLTYPE *transformNodeToObject )(
            IXMLDOMNotation * This,
                       IXMLDOMNode *stylesheet,
                       VARIANT outputObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_publicId )(
            IXMLDOMNotation * This,
                                VARIANT *publicID);
                                        HRESULT ( STDMETHODCALLTYPE *get_systemId )(
            IXMLDOMNotation * This,
                                VARIANT *systemID);
        END_INTERFACE
    } IXMLDOMNotationVtbl;
    interface IXMLDOMNotation
    {
        CONST_VTBL struct IXMLDOMNotationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_nodeName(This,name) )
    ( (This)->lpVtbl -> get_nodeValue(This,value) )
    ( (This)->lpVtbl -> put_nodeValue(This,value) )
    ( (This)->lpVtbl -> get_nodeType(This,type) )
    ( (This)->lpVtbl -> get_parentNode(This,parent) )
    ( (This)->lpVtbl -> get_childNodes(This,childList) )
    ( (This)->lpVtbl -> get_firstChild(This,firstChild) )
    ( (This)->lpVtbl -> get_lastChild(This,lastChild) )
    ( (This)->lpVtbl -> get_previousSibling(This,previousSibling) )
    ( (This)->lpVtbl -> get_nextSibling(This,nextSibling) )
    ( (This)->lpVtbl -> get_attributes(This,attributeMap) )
    ( (This)->lpVtbl -> insertBefore(This,newChild,refChild,outNewChild) )
    ( (This)->lpVtbl -> replaceChild(This,newChild,oldChild,outOldChild) )
    ( (This)->lpVtbl -> removeChild(This,childNode,oldChild) )
    ( (This)->lpVtbl -> appendChild(This,newChild,outNewChild) )
    ( (This)->lpVtbl -> hasChildNodes(This,hasChild) )
    ( (This)->lpVtbl -> get_ownerDocument(This,XMLDOMDocument) )
    ( (This)->lpVtbl -> cloneNode(This,deep,cloneRoot) )
    ( (This)->lpVtbl -> get_nodeTypeString(This,nodeType) )
    ( (This)->lpVtbl -> get_text(This,text) )
    ( (This)->lpVtbl -> put_text(This,text) )
    ( (This)->lpVtbl -> get_specified(This,isSpecified) )
    ( (This)->lpVtbl -> get_definition(This,definitionNode) )
    ( (This)->lpVtbl -> get_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> put_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> get_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> put_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> get_xml(This,xmlString) )
    ( (This)->lpVtbl -> transformNode(This,stylesheet,xmlString) )
    ( (This)->lpVtbl -> selectNodes(This,queryString,resultList) )
    ( (This)->lpVtbl -> selectSingleNode(This,queryString,resultNode) )
    ( (This)->lpVtbl -> get_parsed(This,isParsed) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_prefix(This,prefixString) )
    ( (This)->lpVtbl -> get_baseName(This,nameString) )
    ( (This)->lpVtbl -> transformNodeToObject(This,stylesheet,outputObject) )
    ( (This)->lpVtbl -> get_publicId(This,publicID) )
    ( (This)->lpVtbl -> get_systemId(This,systemID) )
EXTERN_C const IID IID_IXMLDOMEntity;
    typedef struct IXMLDOMEntityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMEntity * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMEntity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMEntity * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMEntity * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMEntity * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMEntity * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMEntity * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeName )(
            IXMLDOMEntity * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeValue )(
            IXMLDOMEntity * This,
                                VARIANT *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeValue )(
            IXMLDOMEntity * This,
                       VARIANT value);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeType )(
            IXMLDOMEntity * This,
                                DOMNodeType *type);
                                        HRESULT ( STDMETHODCALLTYPE *get_parentNode )(
            IXMLDOMEntity * This,
                                IXMLDOMNode **parent);
                                        HRESULT ( STDMETHODCALLTYPE *get_childNodes )(
            IXMLDOMEntity * This,
                                IXMLDOMNodeList **childList);
                                        HRESULT ( STDMETHODCALLTYPE *get_firstChild )(
            IXMLDOMEntity * This,
                                IXMLDOMNode **firstChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_lastChild )(
            IXMLDOMEntity * This,
                                IXMLDOMNode **lastChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_previousSibling )(
            IXMLDOMEntity * This,
                                IXMLDOMNode **previousSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_nextSibling )(
            IXMLDOMEntity * This,
                                IXMLDOMNode **nextSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            IXMLDOMEntity * This,
                                IXMLDOMNamedNodeMap **attributeMap);
                               HRESULT ( STDMETHODCALLTYPE *insertBefore )(
            IXMLDOMEntity * This,
                       IXMLDOMNode *newChild,
                       VARIANT refChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *replaceChild )(
            IXMLDOMEntity * This,
                       IXMLDOMNode *newChild,
                       IXMLDOMNode *oldChild,
                                IXMLDOMNode **outOldChild);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXMLDOMEntity * This,
                       IXMLDOMNode *childNode,
                                IXMLDOMNode **oldChild);
                               HRESULT ( STDMETHODCALLTYPE *appendChild )(
            IXMLDOMEntity * This,
                       IXMLDOMNode *newChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *hasChildNodes )(
            IXMLDOMEntity * This,
                                VARIANT_BOOL *hasChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_ownerDocument )(
            IXMLDOMEntity * This,
                                IXMLDOMDocument **XMLDOMDocument);
                               HRESULT ( STDMETHODCALLTYPE *cloneNode )(
            IXMLDOMEntity * This,
                       VARIANT_BOOL deep,
                                IXMLDOMNode **cloneRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypeString )(
            IXMLDOMEntity * This,
                                BSTR *nodeType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXMLDOMEntity * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXMLDOMEntity * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_specified )(
            IXMLDOMEntity * This,
                                VARIANT_BOOL *isSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_definition )(
            IXMLDOMEntity * This,
                                IXMLDOMNode **definitionNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypedValue )(
            IXMLDOMEntity * This,
                                VARIANT *typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeTypedValue )(
            IXMLDOMEntity * This,
                       VARIANT typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_dataType )(
            IXMLDOMEntity * This,
                                VARIANT *dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *put_dataType )(
            IXMLDOMEntity * This,
                       BSTR dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_xml )(
            IXMLDOMEntity * This,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *transformNode )(
            IXMLDOMEntity * This,
                       IXMLDOMNode *stylesheet,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *selectNodes )(
            IXMLDOMEntity * This,
                       BSTR queryString,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *selectSingleNode )(
            IXMLDOMEntity * This,
                       BSTR queryString,
                                IXMLDOMNode **resultNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_parsed )(
            IXMLDOMEntity * This,
                                VARIANT_BOOL *isParsed);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXMLDOMEntity * This,
                                BSTR *namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_prefix )(
            IXMLDOMEntity * This,
                                BSTR *prefixString);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseName )(
            IXMLDOMEntity * This,
                                BSTR *nameString);
                               HRESULT ( STDMETHODCALLTYPE *transformNodeToObject )(
            IXMLDOMEntity * This,
                       IXMLDOMNode *stylesheet,
                       VARIANT outputObject);
                                        HRESULT ( STDMETHODCALLTYPE *get_publicId )(
            IXMLDOMEntity * This,
                                VARIANT *publicID);
                                        HRESULT ( STDMETHODCALLTYPE *get_systemId )(
            IXMLDOMEntity * This,
                                VARIANT *systemID);
                                        HRESULT ( STDMETHODCALLTYPE *get_notationName )(
            IXMLDOMEntity * This,
                                BSTR *name);
        END_INTERFACE
    } IXMLDOMEntityVtbl;
    interface IXMLDOMEntity
    {
        CONST_VTBL struct IXMLDOMEntityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_nodeName(This,name) )
    ( (This)->lpVtbl -> get_nodeValue(This,value) )
    ( (This)->lpVtbl -> put_nodeValue(This,value) )
    ( (This)->lpVtbl -> get_nodeType(This,type) )
    ( (This)->lpVtbl -> get_parentNode(This,parent) )
    ( (This)->lpVtbl -> get_childNodes(This,childList) )
    ( (This)->lpVtbl -> get_firstChild(This,firstChild) )
    ( (This)->lpVtbl -> get_lastChild(This,lastChild) )
    ( (This)->lpVtbl -> get_previousSibling(This,previousSibling) )
    ( (This)->lpVtbl -> get_nextSibling(This,nextSibling) )
    ( (This)->lpVtbl -> get_attributes(This,attributeMap) )
    ( (This)->lpVtbl -> insertBefore(This,newChild,refChild,outNewChild) )
    ( (This)->lpVtbl -> replaceChild(This,newChild,oldChild,outOldChild) )
    ( (This)->lpVtbl -> removeChild(This,childNode,oldChild) )
    ( (This)->lpVtbl -> appendChild(This,newChild,outNewChild) )
    ( (This)->lpVtbl -> hasChildNodes(This,hasChild) )
    ( (This)->lpVtbl -> get_ownerDocument(This,XMLDOMDocument) )
    ( (This)->lpVtbl -> cloneNode(This,deep,cloneRoot) )
    ( (This)->lpVtbl -> get_nodeTypeString(This,nodeType) )
    ( (This)->lpVtbl -> get_text(This,text) )
    ( (This)->lpVtbl -> put_text(This,text) )
    ( (This)->lpVtbl -> get_specified(This,isSpecified) )
    ( (This)->lpVtbl -> get_definition(This,definitionNode) )
    ( (This)->lpVtbl -> get_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> put_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> get_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> put_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> get_xml(This,xmlString) )
    ( (This)->lpVtbl -> transformNode(This,stylesheet,xmlString) )
    ( (This)->lpVtbl -> selectNodes(This,queryString,resultList) )
    ( (This)->lpVtbl -> selectSingleNode(This,queryString,resultNode) )
    ( (This)->lpVtbl -> get_parsed(This,isParsed) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_prefix(This,prefixString) )
    ( (This)->lpVtbl -> get_baseName(This,nameString) )
    ( (This)->lpVtbl -> transformNodeToObject(This,stylesheet,outputObject) )
    ( (This)->lpVtbl -> get_publicId(This,publicID) )
    ( (This)->lpVtbl -> get_systemId(This,systemID) )
    ( (This)->lpVtbl -> get_notationName(This,name) )
EXTERN_C const IID IID_IXMLDOMEntityReference;
    typedef struct IXMLDOMEntityReferenceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMEntityReference * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMEntityReference * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMEntityReference * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMEntityReference * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMEntityReference * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMEntityReference * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMEntityReference * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeName )(
            IXMLDOMEntityReference * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeValue )(
            IXMLDOMEntityReference * This,
                                VARIANT *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeValue )(
            IXMLDOMEntityReference * This,
                       VARIANT value);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeType )(
            IXMLDOMEntityReference * This,
                                DOMNodeType *type);
                                        HRESULT ( STDMETHODCALLTYPE *get_parentNode )(
            IXMLDOMEntityReference * This,
                                IXMLDOMNode **parent);
                                        HRESULT ( STDMETHODCALLTYPE *get_childNodes )(
            IXMLDOMEntityReference * This,
                                IXMLDOMNodeList **childList);
                                        HRESULT ( STDMETHODCALLTYPE *get_firstChild )(
            IXMLDOMEntityReference * This,
                                IXMLDOMNode **firstChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_lastChild )(
            IXMLDOMEntityReference * This,
                                IXMLDOMNode **lastChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_previousSibling )(
            IXMLDOMEntityReference * This,
                                IXMLDOMNode **previousSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_nextSibling )(
            IXMLDOMEntityReference * This,
                                IXMLDOMNode **nextSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            IXMLDOMEntityReference * This,
                                IXMLDOMNamedNodeMap **attributeMap);
                               HRESULT ( STDMETHODCALLTYPE *insertBefore )(
            IXMLDOMEntityReference * This,
                       IXMLDOMNode *newChild,
                       VARIANT refChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *replaceChild )(
            IXMLDOMEntityReference * This,
                       IXMLDOMNode *newChild,
                       IXMLDOMNode *oldChild,
                                IXMLDOMNode **outOldChild);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXMLDOMEntityReference * This,
                       IXMLDOMNode *childNode,
                                IXMLDOMNode **oldChild);
                               HRESULT ( STDMETHODCALLTYPE *appendChild )(
            IXMLDOMEntityReference * This,
                       IXMLDOMNode *newChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *hasChildNodes )(
            IXMLDOMEntityReference * This,
                                VARIANT_BOOL *hasChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_ownerDocument )(
            IXMLDOMEntityReference * This,
                                IXMLDOMDocument **XMLDOMDocument);
                               HRESULT ( STDMETHODCALLTYPE *cloneNode )(
            IXMLDOMEntityReference * This,
                       VARIANT_BOOL deep,
                                IXMLDOMNode **cloneRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypeString )(
            IXMLDOMEntityReference * This,
                                BSTR *nodeType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXMLDOMEntityReference * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXMLDOMEntityReference * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_specified )(
            IXMLDOMEntityReference * This,
                                VARIANT_BOOL *isSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_definition )(
            IXMLDOMEntityReference * This,
                                IXMLDOMNode **definitionNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypedValue )(
            IXMLDOMEntityReference * This,
                                VARIANT *typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeTypedValue )(
            IXMLDOMEntityReference * This,
                       VARIANT typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_dataType )(
            IXMLDOMEntityReference * This,
                                VARIANT *dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *put_dataType )(
            IXMLDOMEntityReference * This,
                       BSTR dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_xml )(
            IXMLDOMEntityReference * This,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *transformNode )(
            IXMLDOMEntityReference * This,
                       IXMLDOMNode *stylesheet,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *selectNodes )(
            IXMLDOMEntityReference * This,
                       BSTR queryString,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *selectSingleNode )(
            IXMLDOMEntityReference * This,
                       BSTR queryString,
                                IXMLDOMNode **resultNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_parsed )(
            IXMLDOMEntityReference * This,
                                VARIANT_BOOL *isParsed);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXMLDOMEntityReference * This,
                                BSTR *namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_prefix )(
            IXMLDOMEntityReference * This,
                                BSTR *prefixString);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseName )(
            IXMLDOMEntityReference * This,
                                BSTR *nameString);
                               HRESULT ( STDMETHODCALLTYPE *transformNodeToObject )(
            IXMLDOMEntityReference * This,
                       IXMLDOMNode *stylesheet,
                       VARIANT outputObject);
        END_INTERFACE
    } IXMLDOMEntityReferenceVtbl;
    interface IXMLDOMEntityReference
    {
        CONST_VTBL struct IXMLDOMEntityReferenceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_nodeName(This,name) )
    ( (This)->lpVtbl -> get_nodeValue(This,value) )
    ( (This)->lpVtbl -> put_nodeValue(This,value) )
    ( (This)->lpVtbl -> get_nodeType(This,type) )
    ( (This)->lpVtbl -> get_parentNode(This,parent) )
    ( (This)->lpVtbl -> get_childNodes(This,childList) )
    ( (This)->lpVtbl -> get_firstChild(This,firstChild) )
    ( (This)->lpVtbl -> get_lastChild(This,lastChild) )
    ( (This)->lpVtbl -> get_previousSibling(This,previousSibling) )
    ( (This)->lpVtbl -> get_nextSibling(This,nextSibling) )
    ( (This)->lpVtbl -> get_attributes(This,attributeMap) )
    ( (This)->lpVtbl -> insertBefore(This,newChild,refChild,outNewChild) )
    ( (This)->lpVtbl -> replaceChild(This,newChild,oldChild,outOldChild) )
    ( (This)->lpVtbl -> removeChild(This,childNode,oldChild) )
    ( (This)->lpVtbl -> appendChild(This,newChild,outNewChild) )
    ( (This)->lpVtbl -> hasChildNodes(This,hasChild) )
    ( (This)->lpVtbl -> get_ownerDocument(This,XMLDOMDocument) )
    ( (This)->lpVtbl -> cloneNode(This,deep,cloneRoot) )
    ( (This)->lpVtbl -> get_nodeTypeString(This,nodeType) )
    ( (This)->lpVtbl -> get_text(This,text) )
    ( (This)->lpVtbl -> put_text(This,text) )
    ( (This)->lpVtbl -> get_specified(This,isSpecified) )
    ( (This)->lpVtbl -> get_definition(This,definitionNode) )
    ( (This)->lpVtbl -> get_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> put_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> get_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> put_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> get_xml(This,xmlString) )
    ( (This)->lpVtbl -> transformNode(This,stylesheet,xmlString) )
    ( (This)->lpVtbl -> selectNodes(This,queryString,resultList) )
    ( (This)->lpVtbl -> selectSingleNode(This,queryString,resultNode) )
    ( (This)->lpVtbl -> get_parsed(This,isParsed) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_prefix(This,prefixString) )
    ( (This)->lpVtbl -> get_baseName(This,nameString) )
    ( (This)->lpVtbl -> transformNodeToObject(This,stylesheet,outputObject) )
EXTERN_C const IID IID_IXMLDOMParseError;
    typedef struct IXMLDOMParseErrorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMParseError * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMParseError * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMParseError * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMParseError * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMParseError * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMParseError * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMParseError * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_errorCode )(
            IXMLDOMParseError * This,
                                long *errorCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_url )(
            IXMLDOMParseError * This,
                                BSTR *urlString);
                                        HRESULT ( STDMETHODCALLTYPE *get_reason )(
            IXMLDOMParseError * This,
                                BSTR *reasonString);
                                        HRESULT ( STDMETHODCALLTYPE *get_srcText )(
            IXMLDOMParseError * This,
                                BSTR *sourceString);
                                        HRESULT ( STDMETHODCALLTYPE *get_line )(
            IXMLDOMParseError * This,
                                long *lineNumber);
                                        HRESULT ( STDMETHODCALLTYPE *get_linepos )(
            IXMLDOMParseError * This,
                                long *linePosition);
                                        HRESULT ( STDMETHODCALLTYPE *get_filepos )(
            IXMLDOMParseError * This,
                                long *filePosition);
        END_INTERFACE
    } IXMLDOMParseErrorVtbl;
    interface IXMLDOMParseError
    {
        CONST_VTBL struct IXMLDOMParseErrorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_errorCode(This,errorCode) )
    ( (This)->lpVtbl -> get_url(This,urlString) )
    ( (This)->lpVtbl -> get_reason(This,reasonString) )
    ( (This)->lpVtbl -> get_srcText(This,sourceString) )
    ( (This)->lpVtbl -> get_line(This,lineNumber) )
    ( (This)->lpVtbl -> get_linepos(This,linePosition) )
    ( (This)->lpVtbl -> get_filepos(This,filePosition) )
EXTERN_C const IID IID_IXMLDOMParseError2;
    typedef struct IXMLDOMParseError2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMParseError2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMParseError2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMParseError2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMParseError2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMParseError2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMParseError2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMParseError2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_errorCode )(
            IXMLDOMParseError2 * This,
                                long *errorCode);
                                        HRESULT ( STDMETHODCALLTYPE *get_url )(
            IXMLDOMParseError2 * This,
                                BSTR *urlString);
                                        HRESULT ( STDMETHODCALLTYPE *get_reason )(
            IXMLDOMParseError2 * This,
                                BSTR *reasonString);
                                        HRESULT ( STDMETHODCALLTYPE *get_srcText )(
            IXMLDOMParseError2 * This,
                                BSTR *sourceString);
                                        HRESULT ( STDMETHODCALLTYPE *get_line )(
            IXMLDOMParseError2 * This,
                                long *lineNumber);
                                        HRESULT ( STDMETHODCALLTYPE *get_linepos )(
            IXMLDOMParseError2 * This,
                                long *linePosition);
                                        HRESULT ( STDMETHODCALLTYPE *get_filepos )(
            IXMLDOMParseError2 * This,
                                long *filePosition);
                            HRESULT ( STDMETHODCALLTYPE *get_errorXPath )(
            IXMLDOMParseError2 * This,
                                BSTR *xpathexpr);
                            HRESULT ( STDMETHODCALLTYPE *get_allErrors )(
            IXMLDOMParseError2 * This,
                                IXMLDOMParseErrorCollection **allErrors);
                   HRESULT ( STDMETHODCALLTYPE *errorParameters )(
            IXMLDOMParseError2 * This,
                       long index,
                                BSTR *param);
                            HRESULT ( STDMETHODCALLTYPE *get_errorParametersCount )(
            IXMLDOMParseError2 * This,
                                long *count);
        END_INTERFACE
    } IXMLDOMParseError2Vtbl;
    interface IXMLDOMParseError2
    {
        CONST_VTBL struct IXMLDOMParseError2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_errorCode(This,errorCode) )
    ( (This)->lpVtbl -> get_url(This,urlString) )
    ( (This)->lpVtbl -> get_reason(This,reasonString) )
    ( (This)->lpVtbl -> get_srcText(This,sourceString) )
    ( (This)->lpVtbl -> get_line(This,lineNumber) )
    ( (This)->lpVtbl -> get_linepos(This,linePosition) )
    ( (This)->lpVtbl -> get_filepos(This,filePosition) )
    ( (This)->lpVtbl -> get_errorXPath(This,xpathexpr) )
    ( (This)->lpVtbl -> get_allErrors(This,allErrors) )
    ( (This)->lpVtbl -> errorParameters(This,index,param) )
    ( (This)->lpVtbl -> get_errorParametersCount(This,count) )
EXTERN_C const IID IID_IXMLDOMParseErrorCollection;
    typedef struct IXMLDOMParseErrorCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMParseErrorCollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMParseErrorCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMParseErrorCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMParseErrorCollection * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMParseErrorCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMParseErrorCollection * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMParseErrorCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_item )(
            IXMLDOMParseErrorCollection * This,
                       long index,
                                IXMLDOMParseError2 **error);
                            HRESULT ( STDMETHODCALLTYPE *get_length )(
            IXMLDOMParseErrorCollection * This,
                                long *length);
                            HRESULT ( STDMETHODCALLTYPE *get_next )(
            IXMLDOMParseErrorCollection * This,
                                IXMLDOMParseError2 **error);
                   HRESULT ( STDMETHODCALLTYPE *reset )(
            IXMLDOMParseErrorCollection * This);
                                                HRESULT ( STDMETHODCALLTYPE *get__newEnum )(
            IXMLDOMParseErrorCollection * This,
                                IUnknown **ppunk);
        END_INTERFACE
    } IXMLDOMParseErrorCollectionVtbl;
    interface IXMLDOMParseErrorCollection
    {
        CONST_VTBL struct IXMLDOMParseErrorCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_item(This,index,error) )
    ( (This)->lpVtbl -> get_length(This,length) )
    ( (This)->lpVtbl -> get_next(This,error) )
    ( (This)->lpVtbl -> reset(This) )
    ( (This)->lpVtbl -> get__newEnum(This,ppunk) )
EXTERN_C const IID IID_IXMLDOMSchemaCollection;
    typedef struct IXMLDOMSchemaCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMSchemaCollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMSchemaCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMSchemaCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMSchemaCollection * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMSchemaCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMSchemaCollection * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMSchemaCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *add )(
            IXMLDOMSchemaCollection * This,
                       BSTR namespaceURI,
                       VARIANT var);
                               HRESULT ( STDMETHODCALLTYPE *get )(
            IXMLDOMSchemaCollection * This,
                       BSTR namespaceURI,
                                IXMLDOMNode **schemaNode);
                               HRESULT ( STDMETHODCALLTYPE *remove )(
            IXMLDOMSchemaCollection * This,
                       BSTR namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_length )(
            IXMLDOMSchemaCollection * This,
                                long *length);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXMLDOMSchemaCollection * This,
                       long index,
                                BSTR *length);
                               HRESULT ( STDMETHODCALLTYPE *addCollection )(
            IXMLDOMSchemaCollection * This,
                       IXMLDOMSchemaCollection *otherCollection);
                                                HRESULT ( STDMETHODCALLTYPE *get__newEnum )(
            IXMLDOMSchemaCollection * This,
                                IUnknown **ppUnk);
        END_INTERFACE
    } IXMLDOMSchemaCollectionVtbl;
    interface IXMLDOMSchemaCollection
    {
        CONST_VTBL struct IXMLDOMSchemaCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> add(This,namespaceURI,var) )
    ( (This)->lpVtbl -> get(This,namespaceURI,schemaNode) )
    ( (This)->lpVtbl -> remove(This,namespaceURI) )
    ( (This)->lpVtbl -> get_length(This,length) )
    ( (This)->lpVtbl -> get_namespaceURI(This,index,length) )
    ( (This)->lpVtbl -> addCollection(This,otherCollection) )
    ( (This)->lpVtbl -> get__newEnum(This,ppUnk) )
EXTERN_C const IID IID_IXTLRuntime;
    typedef struct IXTLRuntimeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXTLRuntime * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXTLRuntime * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXTLRuntime * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXTLRuntime * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXTLRuntime * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXTLRuntime * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXTLRuntime * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeName )(
            IXTLRuntime * This,
                                BSTR *name);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeValue )(
            IXTLRuntime * This,
                                VARIANT *value);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeValue )(
            IXTLRuntime * This,
                       VARIANT value);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeType )(
            IXTLRuntime * This,
                                DOMNodeType *type);
                                        HRESULT ( STDMETHODCALLTYPE *get_parentNode )(
            IXTLRuntime * This,
                                IXMLDOMNode **parent);
                                        HRESULT ( STDMETHODCALLTYPE *get_childNodes )(
            IXTLRuntime * This,
                                IXMLDOMNodeList **childList);
                                        HRESULT ( STDMETHODCALLTYPE *get_firstChild )(
            IXTLRuntime * This,
                                IXMLDOMNode **firstChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_lastChild )(
            IXTLRuntime * This,
                                IXMLDOMNode **lastChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_previousSibling )(
            IXTLRuntime * This,
                                IXMLDOMNode **previousSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_nextSibling )(
            IXTLRuntime * This,
                                IXMLDOMNode **nextSibling);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            IXTLRuntime * This,
                                IXMLDOMNamedNodeMap **attributeMap);
                               HRESULT ( STDMETHODCALLTYPE *insertBefore )(
            IXTLRuntime * This,
                       IXMLDOMNode *newChild,
                       VARIANT refChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *replaceChild )(
            IXTLRuntime * This,
                       IXMLDOMNode *newChild,
                       IXMLDOMNode *oldChild,
                                IXMLDOMNode **outOldChild);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXTLRuntime * This,
                       IXMLDOMNode *childNode,
                                IXMLDOMNode **oldChild);
                               HRESULT ( STDMETHODCALLTYPE *appendChild )(
            IXTLRuntime * This,
                       IXMLDOMNode *newChild,
                                IXMLDOMNode **outNewChild);
                               HRESULT ( STDMETHODCALLTYPE *hasChildNodes )(
            IXTLRuntime * This,
                                VARIANT_BOOL *hasChild);
                                        HRESULT ( STDMETHODCALLTYPE *get_ownerDocument )(
            IXTLRuntime * This,
                                IXMLDOMDocument **XMLDOMDocument);
                               HRESULT ( STDMETHODCALLTYPE *cloneNode )(
            IXTLRuntime * This,
                       VARIANT_BOOL deep,
                                IXMLDOMNode **cloneRoot);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypeString )(
            IXTLRuntime * This,
                                BSTR *nodeType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXTLRuntime * This,
                                BSTR *text);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXTLRuntime * This,
                       BSTR text);
                                        HRESULT ( STDMETHODCALLTYPE *get_specified )(
            IXTLRuntime * This,
                                VARIANT_BOOL *isSpecified);
                                        HRESULT ( STDMETHODCALLTYPE *get_definition )(
            IXTLRuntime * This,
                                IXMLDOMNode **definitionNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_nodeTypedValue )(
            IXTLRuntime * This,
                                VARIANT *typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_nodeTypedValue )(
            IXTLRuntime * This,
                       VARIANT typedValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_dataType )(
            IXTLRuntime * This,
                                VARIANT *dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *put_dataType )(
            IXTLRuntime * This,
                       BSTR dataTypeName);
                                        HRESULT ( STDMETHODCALLTYPE *get_xml )(
            IXTLRuntime * This,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *transformNode )(
            IXTLRuntime * This,
                       IXMLDOMNode *stylesheet,
                                BSTR *xmlString);
                               HRESULT ( STDMETHODCALLTYPE *selectNodes )(
            IXTLRuntime * This,
                       BSTR queryString,
                                IXMLDOMNodeList **resultList);
                               HRESULT ( STDMETHODCALLTYPE *selectSingleNode )(
            IXTLRuntime * This,
                       BSTR queryString,
                                IXMLDOMNode **resultNode);
                                        HRESULT ( STDMETHODCALLTYPE *get_parsed )(
            IXTLRuntime * This,
                                VARIANT_BOOL *isParsed);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXTLRuntime * This,
                                BSTR *namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_prefix )(
            IXTLRuntime * This,
                                BSTR *prefixString);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseName )(
            IXTLRuntime * This,
                                BSTR *nameString);
                               HRESULT ( STDMETHODCALLTYPE *transformNodeToObject )(
            IXTLRuntime * This,
                       IXMLDOMNode *stylesheet,
                       VARIANT outputObject);
                               HRESULT ( STDMETHODCALLTYPE *uniqueID )(
            IXTLRuntime * This,
                       IXMLDOMNode *pNode,
                                long *pID);
                               HRESULT ( STDMETHODCALLTYPE *depth )(
            IXTLRuntime * This,
                       IXMLDOMNode *pNode,
                                long *pDepth);
                               HRESULT ( STDMETHODCALLTYPE *childNumber )(
            IXTLRuntime * This,
                       IXMLDOMNode *pNode,
                                long *pNumber);
                               HRESULT ( STDMETHODCALLTYPE *ancestorChildNumber )(
            IXTLRuntime * This,
                       BSTR bstrNodeName,
                       IXMLDOMNode *pNode,
                                long *pNumber);
                               HRESULT ( STDMETHODCALLTYPE *absoluteChildNumber )(
            IXTLRuntime * This,
                       IXMLDOMNode *pNode,
                                long *pNumber);
                               HRESULT ( STDMETHODCALLTYPE *formatIndex )(
            IXTLRuntime * This,
                       long lIndex,
                       BSTR bstrFormat,
                                BSTR *pbstrFormattedString);
                               HRESULT ( STDMETHODCALLTYPE *formatNumber )(
            IXTLRuntime * This,
                       double dblNumber,
                       BSTR bstrFormat,
                                BSTR *pbstrFormattedString);
                               HRESULT ( STDMETHODCALLTYPE *formatDate )(
            IXTLRuntime * This,
                       VARIANT varDate,
                       BSTR bstrFormat,
                                 VARIANT varDestLocale,
                                BSTR *pbstrFormattedString);
                               HRESULT ( STDMETHODCALLTYPE *formatTime )(
            IXTLRuntime * This,
                       VARIANT varTime,
                       BSTR bstrFormat,
                                 VARIANT varDestLocale,
                                BSTR *pbstrFormattedString);
        END_INTERFACE
    } IXTLRuntimeVtbl;
    interface IXTLRuntime
    {
        CONST_VTBL struct IXTLRuntimeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_nodeName(This,name) )
    ( (This)->lpVtbl -> get_nodeValue(This,value) )
    ( (This)->lpVtbl -> put_nodeValue(This,value) )
    ( (This)->lpVtbl -> get_nodeType(This,type) )
    ( (This)->lpVtbl -> get_parentNode(This,parent) )
    ( (This)->lpVtbl -> get_childNodes(This,childList) )
    ( (This)->lpVtbl -> get_firstChild(This,firstChild) )
    ( (This)->lpVtbl -> get_lastChild(This,lastChild) )
    ( (This)->lpVtbl -> get_previousSibling(This,previousSibling) )
    ( (This)->lpVtbl -> get_nextSibling(This,nextSibling) )
    ( (This)->lpVtbl -> get_attributes(This,attributeMap) )
    ( (This)->lpVtbl -> insertBefore(This,newChild,refChild,outNewChild) )
    ( (This)->lpVtbl -> replaceChild(This,newChild,oldChild,outOldChild) )
    ( (This)->lpVtbl -> removeChild(This,childNode,oldChild) )
    ( (This)->lpVtbl -> appendChild(This,newChild,outNewChild) )
    ( (This)->lpVtbl -> hasChildNodes(This,hasChild) )
    ( (This)->lpVtbl -> get_ownerDocument(This,XMLDOMDocument) )
    ( (This)->lpVtbl -> cloneNode(This,deep,cloneRoot) )
    ( (This)->lpVtbl -> get_nodeTypeString(This,nodeType) )
    ( (This)->lpVtbl -> get_text(This,text) )
    ( (This)->lpVtbl -> put_text(This,text) )
    ( (This)->lpVtbl -> get_specified(This,isSpecified) )
    ( (This)->lpVtbl -> get_definition(This,definitionNode) )
    ( (This)->lpVtbl -> get_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> put_nodeTypedValue(This,typedValue) )
    ( (This)->lpVtbl -> get_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> put_dataType(This,dataTypeName) )
    ( (This)->lpVtbl -> get_xml(This,xmlString) )
    ( (This)->lpVtbl -> transformNode(This,stylesheet,xmlString) )
    ( (This)->lpVtbl -> selectNodes(This,queryString,resultList) )
    ( (This)->lpVtbl -> selectSingleNode(This,queryString,resultNode) )
    ( (This)->lpVtbl -> get_parsed(This,isParsed) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_prefix(This,prefixString) )
    ( (This)->lpVtbl -> get_baseName(This,nameString) )
    ( (This)->lpVtbl -> transformNodeToObject(This,stylesheet,outputObject) )
    ( (This)->lpVtbl -> uniqueID(This,pNode,pID) )
    ( (This)->lpVtbl -> depth(This,pNode,pDepth) )
    ( (This)->lpVtbl -> childNumber(This,pNode,pNumber) )
    ( (This)->lpVtbl -> ancestorChildNumber(This,bstrNodeName,pNode,pNumber) )
    ( (This)->lpVtbl -> absoluteChildNumber(This,pNode,pNumber) )
    ( (This)->lpVtbl -> formatIndex(This,lIndex,bstrFormat,pbstrFormattedString) )
    ( (This)->lpVtbl -> formatNumber(This,dblNumber,bstrFormat,pbstrFormattedString) )
    ( (This)->lpVtbl -> formatDate(This,varDate,bstrFormat,varDestLocale,pbstrFormattedString) )
    ( (This)->lpVtbl -> formatTime(This,varTime,bstrFormat,varDestLocale,pbstrFormattedString) )
EXTERN_C const IID IID_IXSLTemplate;
    typedef struct IXSLTemplateVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXSLTemplate * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXSLTemplate * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXSLTemplate * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXSLTemplate * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXSLTemplate * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXSLTemplate * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXSLTemplate * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                           HRESULT ( STDMETHODCALLTYPE *putref_stylesheet )(
            IXSLTemplate * This,
                       IXMLDOMNode *stylesheet);
                                        HRESULT ( STDMETHODCALLTYPE *get_stylesheet )(
            IXSLTemplate * This,
                                IXMLDOMNode **stylesheet);
                               HRESULT ( STDMETHODCALLTYPE *createProcessor )(
            IXSLTemplate * This,
                                IXSLProcessor **ppProcessor);
        END_INTERFACE
    } IXSLTemplateVtbl;
    interface IXSLTemplate
    {
        CONST_VTBL struct IXSLTemplateVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> putref_stylesheet(This,stylesheet) )
    ( (This)->lpVtbl -> get_stylesheet(This,stylesheet) )
    ( (This)->lpVtbl -> createProcessor(This,ppProcessor) )
EXTERN_C const IID IID_IXSLProcessor;
    typedef struct IXSLProcessorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXSLProcessor * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXSLProcessor * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXSLProcessor * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXSLProcessor * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXSLProcessor * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXSLProcessor * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXSLProcessor * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *put_input )(
            IXSLProcessor * This,
                       VARIANT var);
                                        HRESULT ( STDMETHODCALLTYPE *get_input )(
            IXSLProcessor * This,
                                VARIANT *pVar);
                                        HRESULT ( STDMETHODCALLTYPE *get_ownerTemplate )(
            IXSLProcessor * This,
                                IXSLTemplate **ppTemplate);
                               HRESULT ( STDMETHODCALLTYPE *setStartMode )(
            IXSLProcessor * This,
                       BSTR mode,
                                     BSTR namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_startMode )(
            IXSLProcessor * This,
                                BSTR *mode);
                                        HRESULT ( STDMETHODCALLTYPE *get_startModeURI )(
            IXSLProcessor * This,
                                BSTR *namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *put_output )(
            IXSLProcessor * This,
                       VARIANT output);
                                        HRESULT ( STDMETHODCALLTYPE *get_output )(
            IXSLProcessor * This,
                                VARIANT *pOutput);
                               HRESULT ( STDMETHODCALLTYPE *transform )(
            IXSLProcessor * This,
                                VARIANT_BOOL *pDone);
                               HRESULT ( STDMETHODCALLTYPE *reset )(
            IXSLProcessor * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_readyState )(
            IXSLProcessor * This,
                                long *pReadyState);
                               HRESULT ( STDMETHODCALLTYPE *addParameter )(
            IXSLProcessor * This,
                       BSTR baseName,
                       VARIANT parameter,
                                     BSTR namespaceURI);
                               HRESULT ( STDMETHODCALLTYPE *addObject )(
            IXSLProcessor * This,
                       IDispatch *obj,
                       BSTR namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_stylesheet )(
            IXSLProcessor * This,
                                IXMLDOMNode **stylesheet);
        END_INTERFACE
    } IXSLProcessorVtbl;
    interface IXSLProcessor
    {
        CONST_VTBL struct IXSLProcessorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_input(This,var) )
    ( (This)->lpVtbl -> get_input(This,pVar) )
    ( (This)->lpVtbl -> get_ownerTemplate(This,ppTemplate) )
    ( (This)->lpVtbl -> setStartMode(This,mode,namespaceURI) )
    ( (This)->lpVtbl -> get_startMode(This,mode) )
    ( (This)->lpVtbl -> get_startModeURI(This,namespaceURI) )
    ( (This)->lpVtbl -> put_output(This,output) )
    ( (This)->lpVtbl -> get_output(This,pOutput) )
    ( (This)->lpVtbl -> transform(This,pDone) )
    ( (This)->lpVtbl -> reset(This) )
    ( (This)->lpVtbl -> get_readyState(This,pReadyState) )
    ( (This)->lpVtbl -> addParameter(This,baseName,parameter,namespaceURI) )
    ( (This)->lpVtbl -> addObject(This,obj,namespaceURI) )
    ( (This)->lpVtbl -> get_stylesheet(This,stylesheet) )
EXTERN_C const IID IID_ISAXXMLReader;
    typedef struct ISAXXMLReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISAXXMLReader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISAXXMLReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISAXXMLReader * This);
        HRESULT ( STDMETHODCALLTYPE *getFeature )(
            ISAXXMLReader * This,
                       const wchar_t *pwchName,
                                VARIANT_BOOL *pvfValue);
        HRESULT ( STDMETHODCALLTYPE *putFeature )(
            ISAXXMLReader * This,
                       const wchar_t *pwchName,
                       VARIANT_BOOL vfValue);
        HRESULT ( STDMETHODCALLTYPE *getProperty )(
            ISAXXMLReader * This,
                       const wchar_t *pwchName,
                                VARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *putProperty )(
            ISAXXMLReader * This,
                       const wchar_t *pwchName,
                       VARIANT varValue);
        HRESULT ( STDMETHODCALLTYPE *getEntityResolver )(
            ISAXXMLReader * This,
                                ISAXEntityResolver **ppResolver);
        HRESULT ( STDMETHODCALLTYPE *putEntityResolver )(
            ISAXXMLReader * This,
                       ISAXEntityResolver *pResolver);
        HRESULT ( STDMETHODCALLTYPE *getContentHandler )(
            ISAXXMLReader * This,
                                ISAXContentHandler **ppHandler);
        HRESULT ( STDMETHODCALLTYPE *putContentHandler )(
            ISAXXMLReader * This,
                       ISAXContentHandler *pHandler);
        HRESULT ( STDMETHODCALLTYPE *getDTDHandler )(
            ISAXXMLReader * This,
                                ISAXDTDHandler **ppHandler);
        HRESULT ( STDMETHODCALLTYPE *putDTDHandler )(
            ISAXXMLReader * This,
                       ISAXDTDHandler *pHandler);
        HRESULT ( STDMETHODCALLTYPE *getErrorHandler )(
            ISAXXMLReader * This,
                                ISAXErrorHandler **ppHandler);
        HRESULT ( STDMETHODCALLTYPE *putErrorHandler )(
            ISAXXMLReader * This,
                       ISAXErrorHandler *pHandler);
        HRESULT ( STDMETHODCALLTYPE *getBaseURL )(
            ISAXXMLReader * This,
                                const wchar_t **ppwchBaseUrl);
        HRESULT ( STDMETHODCALLTYPE *putBaseURL )(
            ISAXXMLReader * This,
                       const wchar_t *pwchBaseUrl);
        HRESULT ( STDMETHODCALLTYPE *getSecureBaseURL )(
            ISAXXMLReader * This,
                                const wchar_t **ppwchSecureBaseUrl);
        HRESULT ( STDMETHODCALLTYPE *putSecureBaseURL )(
            ISAXXMLReader * This,
                       const wchar_t *pwchSecureBaseUrl);
        HRESULT ( STDMETHODCALLTYPE *parse )(
            ISAXXMLReader * This,
                                 VARIANT varInput);
        HRESULT ( STDMETHODCALLTYPE *parseURL )(
            ISAXXMLReader * This,
                       const wchar_t *pwchUrl);
        END_INTERFACE
    } ISAXXMLReaderVtbl;
    interface ISAXXMLReader
    {
        CONST_VTBL struct ISAXXMLReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> getFeature(This,pwchName,pvfValue) )
    ( (This)->lpVtbl -> putFeature(This,pwchName,vfValue) )
    ( (This)->lpVtbl -> getProperty(This,pwchName,pvarValue) )
    ( (This)->lpVtbl -> putProperty(This,pwchName,varValue) )
    ( (This)->lpVtbl -> getEntityResolver(This,ppResolver) )
    ( (This)->lpVtbl -> putEntityResolver(This,pResolver) )
    ( (This)->lpVtbl -> getContentHandler(This,ppHandler) )
    ( (This)->lpVtbl -> putContentHandler(This,pHandler) )
    ( (This)->lpVtbl -> getDTDHandler(This,ppHandler) )
    ( (This)->lpVtbl -> putDTDHandler(This,pHandler) )
    ( (This)->lpVtbl -> getErrorHandler(This,ppHandler) )
    ( (This)->lpVtbl -> putErrorHandler(This,pHandler) )
    ( (This)->lpVtbl -> getBaseURL(This,ppwchBaseUrl) )
    ( (This)->lpVtbl -> putBaseURL(This,pwchBaseUrl) )
    ( (This)->lpVtbl -> getSecureBaseURL(This,ppwchSecureBaseUrl) )
    ( (This)->lpVtbl -> putSecureBaseURL(This,pwchSecureBaseUrl) )
    ( (This)->lpVtbl -> parse(This,varInput) )
    ( (This)->lpVtbl -> parseURL(This,pwchUrl) )
EXTERN_C const IID IID_ISAXXMLFilter;
    typedef struct ISAXXMLFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISAXXMLFilter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISAXXMLFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISAXXMLFilter * This);
        HRESULT ( STDMETHODCALLTYPE *getFeature )(
            ISAXXMLFilter * This,
                       const wchar_t *pwchName,
                                VARIANT_BOOL *pvfValue);
        HRESULT ( STDMETHODCALLTYPE *putFeature )(
            ISAXXMLFilter * This,
                       const wchar_t *pwchName,
                       VARIANT_BOOL vfValue);
        HRESULT ( STDMETHODCALLTYPE *getProperty )(
            ISAXXMLFilter * This,
                       const wchar_t *pwchName,
                                VARIANT *pvarValue);
        HRESULT ( STDMETHODCALLTYPE *putProperty )(
            ISAXXMLFilter * This,
                       const wchar_t *pwchName,
                       VARIANT varValue);
        HRESULT ( STDMETHODCALLTYPE *getEntityResolver )(
            ISAXXMLFilter * This,
                                ISAXEntityResolver **ppResolver);
        HRESULT ( STDMETHODCALLTYPE *putEntityResolver )(
            ISAXXMLFilter * This,
                       ISAXEntityResolver *pResolver);
        HRESULT ( STDMETHODCALLTYPE *getContentHandler )(
            ISAXXMLFilter * This,
                                ISAXContentHandler **ppHandler);
        HRESULT ( STDMETHODCALLTYPE *putContentHandler )(
            ISAXXMLFilter * This,
                       ISAXContentHandler *pHandler);
        HRESULT ( STDMETHODCALLTYPE *getDTDHandler )(
            ISAXXMLFilter * This,
                                ISAXDTDHandler **ppHandler);
        HRESULT ( STDMETHODCALLTYPE *putDTDHandler )(
            ISAXXMLFilter * This,
                       ISAXDTDHandler *pHandler);
        HRESULT ( STDMETHODCALLTYPE *getErrorHandler )(
            ISAXXMLFilter * This,
                                ISAXErrorHandler **ppHandler);
        HRESULT ( STDMETHODCALLTYPE *putErrorHandler )(
            ISAXXMLFilter * This,
                       ISAXErrorHandler *pHandler);
        HRESULT ( STDMETHODCALLTYPE *getBaseURL )(
            ISAXXMLFilter * This,
                                const wchar_t **ppwchBaseUrl);
        HRESULT ( STDMETHODCALLTYPE *putBaseURL )(
            ISAXXMLFilter * This,
                       const wchar_t *pwchBaseUrl);
        HRESULT ( STDMETHODCALLTYPE *getSecureBaseURL )(
            ISAXXMLFilter * This,
                                const wchar_t **ppwchSecureBaseUrl);
        HRESULT ( STDMETHODCALLTYPE *putSecureBaseURL )(
            ISAXXMLFilter * This,
                       const wchar_t *pwchSecureBaseUrl);
        HRESULT ( STDMETHODCALLTYPE *parse )(
            ISAXXMLFilter * This,
                                 VARIANT varInput);
        HRESULT ( STDMETHODCALLTYPE *parseURL )(
            ISAXXMLFilter * This,
                       const wchar_t *pwchUrl);
        HRESULT ( STDMETHODCALLTYPE *getParent )(
            ISAXXMLFilter * This,
                                ISAXXMLReader **ppReader);
        HRESULT ( STDMETHODCALLTYPE *putParent )(
            ISAXXMLFilter * This,
                       ISAXXMLReader *pReader);
        END_INTERFACE
    } ISAXXMLFilterVtbl;
    interface ISAXXMLFilter
    {
        CONST_VTBL struct ISAXXMLFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> getFeature(This,pwchName,pvfValue) )
    ( (This)->lpVtbl -> putFeature(This,pwchName,vfValue) )
    ( (This)->lpVtbl -> getProperty(This,pwchName,pvarValue) )
    ( (This)->lpVtbl -> putProperty(This,pwchName,varValue) )
    ( (This)->lpVtbl -> getEntityResolver(This,ppResolver) )
    ( (This)->lpVtbl -> putEntityResolver(This,pResolver) )
    ( (This)->lpVtbl -> getContentHandler(This,ppHandler) )
    ( (This)->lpVtbl -> putContentHandler(This,pHandler) )
    ( (This)->lpVtbl -> getDTDHandler(This,ppHandler) )
    ( (This)->lpVtbl -> putDTDHandler(This,pHandler) )
    ( (This)->lpVtbl -> getErrorHandler(This,ppHandler) )
    ( (This)->lpVtbl -> putErrorHandler(This,pHandler) )
    ( (This)->lpVtbl -> getBaseURL(This,ppwchBaseUrl) )
    ( (This)->lpVtbl -> putBaseURL(This,pwchBaseUrl) )
    ( (This)->lpVtbl -> getSecureBaseURL(This,ppwchSecureBaseUrl) )
    ( (This)->lpVtbl -> putSecureBaseURL(This,pwchSecureBaseUrl) )
    ( (This)->lpVtbl -> parse(This,varInput) )
    ( (This)->lpVtbl -> parseURL(This,pwchUrl) )
    ( (This)->lpVtbl -> getParent(This,ppReader) )
    ( (This)->lpVtbl -> putParent(This,pReader) )
EXTERN_C const IID IID_ISAXLocator;
    typedef struct ISAXLocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISAXLocator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISAXLocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISAXLocator * This);
        HRESULT ( STDMETHODCALLTYPE *getColumnNumber )(
            ISAXLocator * This,
                                int *pnColumn);
        HRESULT ( STDMETHODCALLTYPE *getLineNumber )(
            ISAXLocator * This,
                                int *pnLine);
        HRESULT ( STDMETHODCALLTYPE *getPublicId )(
            ISAXLocator * This,
                                const wchar_t **ppwchPublicId);
        HRESULT ( STDMETHODCALLTYPE *getSystemId )(
            ISAXLocator * This,
                                const wchar_t **ppwchSystemId);
        END_INTERFACE
    } ISAXLocatorVtbl;
    interface ISAXLocator
    {
        CONST_VTBL struct ISAXLocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> getColumnNumber(This,pnColumn) )
    ( (This)->lpVtbl -> getLineNumber(This,pnLine) )
    ( (This)->lpVtbl -> getPublicId(This,ppwchPublicId) )
    ( (This)->lpVtbl -> getSystemId(This,ppwchSystemId) )
EXTERN_C const IID IID_ISAXEntityResolver;
    typedef struct ISAXEntityResolverVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISAXEntityResolver * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISAXEntityResolver * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISAXEntityResolver * This);
        HRESULT ( STDMETHODCALLTYPE *resolveEntity )(
            ISAXEntityResolver * This,
                       const wchar_t *pwchPublicId,
                       const wchar_t *pwchSystemId,
                                VARIANT *pvarInput);
        END_INTERFACE
    } ISAXEntityResolverVtbl;
    interface ISAXEntityResolver
    {
        CONST_VTBL struct ISAXEntityResolverVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> resolveEntity(This,pwchPublicId,pwchSystemId,pvarInput) )
EXTERN_C const IID IID_ISAXContentHandler;
    typedef struct ISAXContentHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISAXContentHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISAXContentHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISAXContentHandler * This);
        HRESULT ( STDMETHODCALLTYPE *putDocumentLocator )(
            ISAXContentHandler * This,
                       ISAXLocator *pLocator);
        HRESULT ( STDMETHODCALLTYPE *startDocument )(
            ISAXContentHandler * This);
        HRESULT ( STDMETHODCALLTYPE *endDocument )(
            ISAXContentHandler * This);
        HRESULT ( STDMETHODCALLTYPE *startPrefixMapping )(
            ISAXContentHandler * This,
                       const wchar_t *pwchPrefix,
                       int cchPrefix,
                       const wchar_t *pwchUri,
                       int cchUri);
        HRESULT ( STDMETHODCALLTYPE *endPrefixMapping )(
            ISAXContentHandler * This,
                       const wchar_t *pwchPrefix,
                       int cchPrefix);
        HRESULT ( STDMETHODCALLTYPE *startElement )(
            ISAXContentHandler * This,
                       const wchar_t *pwchNamespaceUri,
                       int cchNamespaceUri,
                       const wchar_t *pwchLocalName,
                       int cchLocalName,
                       const wchar_t *pwchQName,
                       int cchQName,
                       ISAXAttributes *pAttributes);
        HRESULT ( STDMETHODCALLTYPE *endElement )(
            ISAXContentHandler * This,
                       const wchar_t *pwchNamespaceUri,
                       int cchNamespaceUri,
                       const wchar_t *pwchLocalName,
                       int cchLocalName,
                       const wchar_t *pwchQName,
                       int cchQName);
        HRESULT ( STDMETHODCALLTYPE *characters )(
            ISAXContentHandler * This,
                       const wchar_t *pwchChars,
                       int cchChars);
        HRESULT ( STDMETHODCALLTYPE *ignorableWhitespace )(
            ISAXContentHandler * This,
                       const wchar_t *pwchChars,
                       int cchChars);
        HRESULT ( STDMETHODCALLTYPE *processingInstruction )(
            ISAXContentHandler * This,
                       const wchar_t *pwchTarget,
                       int cchTarget,
                       const wchar_t *pwchData,
                       int cchData);
        HRESULT ( STDMETHODCALLTYPE *skippedEntity )(
            ISAXContentHandler * This,
                       const wchar_t *pwchName,
                       int cchName);
        END_INTERFACE
    } ISAXContentHandlerVtbl;
    interface ISAXContentHandler
    {
        CONST_VTBL struct ISAXContentHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> putDocumentLocator(This,pLocator) )
    ( (This)->lpVtbl -> startDocument(This) )
    ( (This)->lpVtbl -> endDocument(This) )
    ( (This)->lpVtbl -> startPrefixMapping(This,pwchPrefix,cchPrefix,pwchUri,cchUri) )
    ( (This)->lpVtbl -> endPrefixMapping(This,pwchPrefix,cchPrefix) )
    ( (This)->lpVtbl -> startElement(This,pwchNamespaceUri,cchNamespaceUri,pwchLocalName,cchLocalName,pwchQName,cchQName,pAttributes) )
    ( (This)->lpVtbl -> endElement(This,pwchNamespaceUri,cchNamespaceUri,pwchLocalName,cchLocalName,pwchQName,cchQName) )
    ( (This)->lpVtbl -> characters(This,pwchChars,cchChars) )
    ( (This)->lpVtbl -> ignorableWhitespace(This,pwchChars,cchChars) )
    ( (This)->lpVtbl -> processingInstruction(This,pwchTarget,cchTarget,pwchData,cchData) )
    ( (This)->lpVtbl -> skippedEntity(This,pwchName,cchName) )
EXTERN_C const IID IID_ISAXDTDHandler;
    typedef struct ISAXDTDHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISAXDTDHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISAXDTDHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISAXDTDHandler * This);
        HRESULT ( STDMETHODCALLTYPE *notationDecl )(
            ISAXDTDHandler * This,
                       const wchar_t *pwchName,
                       int cchName,
                       const wchar_t *pwchPublicId,
                       int cchPublicId,
                       const wchar_t *pwchSystemId,
                       int cchSystemId);
        HRESULT ( STDMETHODCALLTYPE *unparsedEntityDecl )(
            ISAXDTDHandler * This,
                       const wchar_t *pwchName,
                       int cchName,
                       const wchar_t *pwchPublicId,
                       int cchPublicId,
                       const wchar_t *pwchSystemId,
                       int cchSystemId,
                       const wchar_t *pwchNotationName,
                       int cchNotationName);
        END_INTERFACE
    } ISAXDTDHandlerVtbl;
    interface ISAXDTDHandler
    {
        CONST_VTBL struct ISAXDTDHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> notationDecl(This,pwchName,cchName,pwchPublicId,cchPublicId,pwchSystemId,cchSystemId) )
    ( (This)->lpVtbl -> unparsedEntityDecl(This,pwchName,cchName,pwchPublicId,cchPublicId,pwchSystemId,cchSystemId,pwchNotationName,cchNotationName) )
EXTERN_C const IID IID_ISAXErrorHandler;
    typedef struct ISAXErrorHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISAXErrorHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISAXErrorHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISAXErrorHandler * This);
        HRESULT ( STDMETHODCALLTYPE *error )(
            ISAXErrorHandler * This,
                       ISAXLocator *pLocator,
                       const wchar_t *pwchErrorMessage,
                       HRESULT hrErrorCode);
        HRESULT ( STDMETHODCALLTYPE *fatalError )(
            ISAXErrorHandler * This,
                       ISAXLocator *pLocator,
                       const wchar_t *pwchErrorMessage,
                       HRESULT hrErrorCode);
        HRESULT ( STDMETHODCALLTYPE *ignorableWarning )(
            ISAXErrorHandler * This,
                       ISAXLocator *pLocator,
                       const wchar_t *pwchErrorMessage,
                       HRESULT hrErrorCode);
        END_INTERFACE
    } ISAXErrorHandlerVtbl;
    interface ISAXErrorHandler
    {
        CONST_VTBL struct ISAXErrorHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> error(This,pLocator,pwchErrorMessage,hrErrorCode) )
    ( (This)->lpVtbl -> fatalError(This,pLocator,pwchErrorMessage,hrErrorCode) )
    ( (This)->lpVtbl -> ignorableWarning(This,pLocator,pwchErrorMessage,hrErrorCode) )
EXTERN_C const IID IID_ISAXLexicalHandler;
    typedef struct ISAXLexicalHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISAXLexicalHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISAXLexicalHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISAXLexicalHandler * This);
        HRESULT ( STDMETHODCALLTYPE *startDTD )(
            ISAXLexicalHandler * This,
                       const wchar_t *pwchName,
                       int cchName,
                       const wchar_t *pwchPublicId,
                       int cchPublicId,
                       const wchar_t *pwchSystemId,
                       int cchSystemId);
        HRESULT ( STDMETHODCALLTYPE *endDTD )(
            ISAXLexicalHandler * This);
        HRESULT ( STDMETHODCALLTYPE *startEntity )(
            ISAXLexicalHandler * This,
                       const wchar_t *pwchName,
                       int cchName);
        HRESULT ( STDMETHODCALLTYPE *endEntity )(
            ISAXLexicalHandler * This,
                       const wchar_t *pwchName,
                       int cchName);
        HRESULT ( STDMETHODCALLTYPE *startCDATA )(
            ISAXLexicalHandler * This);
        HRESULT ( STDMETHODCALLTYPE *endCDATA )(
            ISAXLexicalHandler * This);
        HRESULT ( STDMETHODCALLTYPE *comment )(
            ISAXLexicalHandler * This,
                       const wchar_t *pwchChars,
                       int cchChars);
        END_INTERFACE
    } ISAXLexicalHandlerVtbl;
    interface ISAXLexicalHandler
    {
        CONST_VTBL struct ISAXLexicalHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> startDTD(This,pwchName,cchName,pwchPublicId,cchPublicId,pwchSystemId,cchSystemId) )
    ( (This)->lpVtbl -> endDTD(This) )
    ( (This)->lpVtbl -> startEntity(This,pwchName,cchName) )
    ( (This)->lpVtbl -> endEntity(This,pwchName,cchName) )
    ( (This)->lpVtbl -> startCDATA(This) )
    ( (This)->lpVtbl -> endCDATA(This) )
    ( (This)->lpVtbl -> comment(This,pwchChars,cchChars) )
EXTERN_C const IID IID_ISAXDeclHandler;
    typedef struct ISAXDeclHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISAXDeclHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISAXDeclHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISAXDeclHandler * This);
        HRESULT ( STDMETHODCALLTYPE *elementDecl )(
            ISAXDeclHandler * This,
                       const wchar_t *pwchName,
                       int cchName,
                       const wchar_t *pwchModel,
                       int cchModel);
        HRESULT ( STDMETHODCALLTYPE *attributeDecl )(
            ISAXDeclHandler * This,
                       const wchar_t *pwchElementName,
                       int cchElementName,
                       const wchar_t *pwchAttributeName,
                       int cchAttributeName,
                       const wchar_t *pwchType,
                       int cchType,
                       const wchar_t *pwchValueDefault,
                       int cchValueDefault,
                       const wchar_t *pwchValue,
                       int cchValue);
        HRESULT ( STDMETHODCALLTYPE *internalEntityDecl )(
            ISAXDeclHandler * This,
                       const wchar_t *pwchName,
                       int cchName,
                       const wchar_t *pwchValue,
                       int cchValue);
        HRESULT ( STDMETHODCALLTYPE *externalEntityDecl )(
            ISAXDeclHandler * This,
                       const wchar_t *pwchName,
                       int cchName,
                       const wchar_t *pwchPublicId,
                       int cchPublicId,
                       const wchar_t *pwchSystemId,
                       int cchSystemId);
        END_INTERFACE
    } ISAXDeclHandlerVtbl;
    interface ISAXDeclHandler
    {
        CONST_VTBL struct ISAXDeclHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> elementDecl(This,pwchName,cchName,pwchModel,cchModel) )
    ( (This)->lpVtbl -> attributeDecl(This,pwchElementName,cchElementName,pwchAttributeName,cchAttributeName,pwchType,cchType,pwchValueDefault,cchValueDefault,pwchValue,cchValue) )
    ( (This)->lpVtbl -> internalEntityDecl(This,pwchName,cchName,pwchValue,cchValue) )
    ( (This)->lpVtbl -> externalEntityDecl(This,pwchName,cchName,pwchPublicId,cchPublicId,pwchSystemId,cchSystemId) )
EXTERN_C const IID IID_ISAXAttributes;
    typedef struct ISAXAttributesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISAXAttributes * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISAXAttributes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISAXAttributes * This);
        HRESULT ( STDMETHODCALLTYPE *getLength )(
            ISAXAttributes * This,
                                int *pnLength);
        HRESULT ( STDMETHODCALLTYPE *getURI )(
            ISAXAttributes * This,
                       int nIndex,
                        const wchar_t **ppwchUri,
                        int *pcchUri);
        HRESULT ( STDMETHODCALLTYPE *getLocalName )(
            ISAXAttributes * This,
                       int nIndex,
                        const wchar_t **ppwchLocalName,
                        int *pcchLocalName);
        HRESULT ( STDMETHODCALLTYPE *getQName )(
            ISAXAttributes * This,
                       int nIndex,
                        const wchar_t **ppwchQName,
                        int *pcchQName);
        HRESULT ( STDMETHODCALLTYPE *getName )(
            ISAXAttributes * This,
                       int nIndex,
                        const wchar_t **ppwchUri,
                        int *pcchUri,
                        const wchar_t **ppwchLocalName,
                        int *pcchLocalName,
                        const wchar_t **ppwchQName,
                        int *pcchQName);
        HRESULT ( STDMETHODCALLTYPE *getIndexFromName )(
            ISAXAttributes * This,
                       const wchar_t *pwchUri,
                       int cchUri,
                       const wchar_t *pwchLocalName,
                       int cchLocalName,
                                int *pnIndex);
        HRESULT ( STDMETHODCALLTYPE *getIndexFromQName )(
            ISAXAttributes * This,
                       const wchar_t *pwchQName,
                       int cchQName,
                                int *pnIndex);
        HRESULT ( STDMETHODCALLTYPE *getType )(
            ISAXAttributes * This,
                       int nIndex,
                        const wchar_t **ppwchType,
                        int *pcchType);
        HRESULT ( STDMETHODCALLTYPE *getTypeFromName )(
            ISAXAttributes * This,
                       const wchar_t *pwchUri,
                       int cchUri,
                       const wchar_t *pwchLocalName,
                       int cchLocalName,
                        const wchar_t **ppwchType,
                        int *pcchType);
        HRESULT ( STDMETHODCALLTYPE *getTypeFromQName )(
            ISAXAttributes * This,
                       const wchar_t *pwchQName,
                       int cchQName,
                        const wchar_t **ppwchType,
                        int *pcchType);
        HRESULT ( STDMETHODCALLTYPE *getValue )(
            ISAXAttributes * This,
                       int nIndex,
                        const wchar_t **ppwchValue,
                        int *pcchValue);
        HRESULT ( STDMETHODCALLTYPE *getValueFromName )(
            ISAXAttributes * This,
                       const wchar_t *pwchUri,
                       int cchUri,
                       const wchar_t *pwchLocalName,
                       int cchLocalName,
                        const wchar_t **ppwchValue,
                        int *pcchValue);
        HRESULT ( STDMETHODCALLTYPE *getValueFromQName )(
            ISAXAttributes * This,
                       const wchar_t *pwchQName,
                       int cchQName,
                        const wchar_t **ppwchValue,
                        int *pcchValue);
        END_INTERFACE
    } ISAXAttributesVtbl;
    interface ISAXAttributes
    {
        CONST_VTBL struct ISAXAttributesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> getLength(This,pnLength) )
    ( (This)->lpVtbl -> getURI(This,nIndex,ppwchUri,pcchUri) )
    ( (This)->lpVtbl -> getLocalName(This,nIndex,ppwchLocalName,pcchLocalName) )
    ( (This)->lpVtbl -> getQName(This,nIndex,ppwchQName,pcchQName) )
    ( (This)->lpVtbl -> getName(This,nIndex,ppwchUri,pcchUri,ppwchLocalName,pcchLocalName,ppwchQName,pcchQName) )
    ( (This)->lpVtbl -> getIndexFromName(This,pwchUri,cchUri,pwchLocalName,cchLocalName,pnIndex) )
    ( (This)->lpVtbl -> getIndexFromQName(This,pwchQName,cchQName,pnIndex) )
    ( (This)->lpVtbl -> getType(This,nIndex,ppwchType,pcchType) )
    ( (This)->lpVtbl -> getTypeFromName(This,pwchUri,cchUri,pwchLocalName,cchLocalName,ppwchType,pcchType) )
    ( (This)->lpVtbl -> getTypeFromQName(This,pwchQName,cchQName,ppwchType,pcchType) )
    ( (This)->lpVtbl -> getValue(This,nIndex,ppwchValue,pcchValue) )
    ( (This)->lpVtbl -> getValueFromName(This,pwchUri,cchUri,pwchLocalName,cchLocalName,ppwchValue,pcchValue) )
    ( (This)->lpVtbl -> getValueFromQName(This,pwchQName,cchQName,ppwchValue,pcchValue) )
EXTERN_C const IID IID_IVBSAXXMLReader;
    typedef struct IVBSAXXMLReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVBSAXXMLReader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVBSAXXMLReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVBSAXXMLReader * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IVBSAXXMLReader * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IVBSAXXMLReader * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IVBSAXXMLReader * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IVBSAXXMLReader * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *getFeature )(
            IVBSAXXMLReader * This,
                       BSTR strName,
                                VARIANT_BOOL *fValue);
                               HRESULT ( STDMETHODCALLTYPE *putFeature )(
            IVBSAXXMLReader * This,
                       BSTR strName,
                       VARIANT_BOOL fValue);
                               HRESULT ( STDMETHODCALLTYPE *getProperty )(
            IVBSAXXMLReader * This,
                       BSTR strName,
                                VARIANT *varValue);
                               HRESULT ( STDMETHODCALLTYPE *putProperty )(
            IVBSAXXMLReader * This,
                       BSTR strName,
                       VARIANT varValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_entityResolver )(
            IVBSAXXMLReader * This,
                                IVBSAXEntityResolver **oResolver);
                                           HRESULT ( STDMETHODCALLTYPE *putref_entityResolver )(
            IVBSAXXMLReader * This,
                       IVBSAXEntityResolver *oResolver);
                                        HRESULT ( STDMETHODCALLTYPE *get_contentHandler )(
            IVBSAXXMLReader * This,
                                IVBSAXContentHandler **oHandler);
                                           HRESULT ( STDMETHODCALLTYPE *putref_contentHandler )(
            IVBSAXXMLReader * This,
                       IVBSAXContentHandler *oHandler);
                                        HRESULT ( STDMETHODCALLTYPE *get_dtdHandler )(
            IVBSAXXMLReader * This,
                                IVBSAXDTDHandler **oHandler);
                                           HRESULT ( STDMETHODCALLTYPE *putref_dtdHandler )(
            IVBSAXXMLReader * This,
                       IVBSAXDTDHandler *oHandler);
                                        HRESULT ( STDMETHODCALLTYPE *get_errorHandler )(
            IVBSAXXMLReader * This,
                                IVBSAXErrorHandler **oHandler);
                                           HRESULT ( STDMETHODCALLTYPE *putref_errorHandler )(
            IVBSAXXMLReader * This,
                       IVBSAXErrorHandler *oHandler);
                                        HRESULT ( STDMETHODCALLTYPE *get_baseURL )(
            IVBSAXXMLReader * This,
                                BSTR *strBaseURL);
                                        HRESULT ( STDMETHODCALLTYPE *put_baseURL )(
            IVBSAXXMLReader * This,
                       BSTR strBaseURL);
                                        HRESULT ( STDMETHODCALLTYPE *get_secureBaseURL )(
            IVBSAXXMLReader * This,
                                BSTR *strSecureBaseURL);
                                        HRESULT ( STDMETHODCALLTYPE *put_secureBaseURL )(
            IVBSAXXMLReader * This,
                       BSTR strSecureBaseURL);
                               HRESULT ( STDMETHODCALLTYPE *parse )(
            IVBSAXXMLReader * This,
                                 VARIANT varInput);
                               HRESULT ( STDMETHODCALLTYPE *parseURL )(
            IVBSAXXMLReader * This,
                       BSTR strURL);
        END_INTERFACE
    } IVBSAXXMLReaderVtbl;
    interface IVBSAXXMLReader
    {
        CONST_VTBL struct IVBSAXXMLReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> getFeature(This,strName,fValue) )
    ( (This)->lpVtbl -> putFeature(This,strName,fValue) )
    ( (This)->lpVtbl -> getProperty(This,strName,varValue) )
    ( (This)->lpVtbl -> putProperty(This,strName,varValue) )
    ( (This)->lpVtbl -> get_entityResolver(This,oResolver) )
    ( (This)->lpVtbl -> putref_entityResolver(This,oResolver) )
    ( (This)->lpVtbl -> get_contentHandler(This,oHandler) )
    ( (This)->lpVtbl -> putref_contentHandler(This,oHandler) )
    ( (This)->lpVtbl -> get_dtdHandler(This,oHandler) )
    ( (This)->lpVtbl -> putref_dtdHandler(This,oHandler) )
    ( (This)->lpVtbl -> get_errorHandler(This,oHandler) )
    ( (This)->lpVtbl -> putref_errorHandler(This,oHandler) )
    ( (This)->lpVtbl -> get_baseURL(This,strBaseURL) )
    ( (This)->lpVtbl -> put_baseURL(This,strBaseURL) )
    ( (This)->lpVtbl -> get_secureBaseURL(This,strSecureBaseURL) )
    ( (This)->lpVtbl -> put_secureBaseURL(This,strSecureBaseURL) )
    ( (This)->lpVtbl -> parse(This,varInput) )
    ( (This)->lpVtbl -> parseURL(This,strURL) )
EXTERN_C const IID IID_IVBSAXXMLFilter;
    typedef struct IVBSAXXMLFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVBSAXXMLFilter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVBSAXXMLFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVBSAXXMLFilter * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IVBSAXXMLFilter * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IVBSAXXMLFilter * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IVBSAXXMLFilter * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IVBSAXXMLFilter * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_parent )(
            IVBSAXXMLFilter * This,
                                IVBSAXXMLReader **oReader);
                                           HRESULT ( STDMETHODCALLTYPE *putref_parent )(
            IVBSAXXMLFilter * This,
                       IVBSAXXMLReader *oReader);
        END_INTERFACE
    } IVBSAXXMLFilterVtbl;
    interface IVBSAXXMLFilter
    {
        CONST_VTBL struct IVBSAXXMLFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_parent(This,oReader) )
    ( (This)->lpVtbl -> putref_parent(This,oReader) )
EXTERN_C const IID IID_IVBSAXLocator;
    typedef struct IVBSAXLocatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVBSAXLocator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVBSAXLocator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVBSAXLocator * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IVBSAXLocator * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IVBSAXLocator * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IVBSAXLocator * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IVBSAXLocator * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_columnNumber )(
            IVBSAXLocator * This,
                                int *nColumn);
                                        HRESULT ( STDMETHODCALLTYPE *get_lineNumber )(
            IVBSAXLocator * This,
                                int *nLine);
                                        HRESULT ( STDMETHODCALLTYPE *get_publicId )(
            IVBSAXLocator * This,
                                BSTR *strPublicId);
                                        HRESULT ( STDMETHODCALLTYPE *get_systemId )(
            IVBSAXLocator * This,
                                BSTR *strSystemId);
        END_INTERFACE
    } IVBSAXLocatorVtbl;
    interface IVBSAXLocator
    {
        CONST_VTBL struct IVBSAXLocatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_columnNumber(This,nColumn) )
    ( (This)->lpVtbl -> get_lineNumber(This,nLine) )
    ( (This)->lpVtbl -> get_publicId(This,strPublicId) )
    ( (This)->lpVtbl -> get_systemId(This,strSystemId) )
EXTERN_C const IID IID_IVBSAXEntityResolver;
    typedef struct IVBSAXEntityResolverVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVBSAXEntityResolver * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVBSAXEntityResolver * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVBSAXEntityResolver * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IVBSAXEntityResolver * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IVBSAXEntityResolver * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IVBSAXEntityResolver * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IVBSAXEntityResolver * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *resolveEntity )(
            IVBSAXEntityResolver * This,
                            BSTR *strPublicId,
                            BSTR *strSystemId,
                                VARIANT *varInput);
        END_INTERFACE
    } IVBSAXEntityResolverVtbl;
    interface IVBSAXEntityResolver
    {
        CONST_VTBL struct IVBSAXEntityResolverVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> resolveEntity(This,strPublicId,strSystemId,varInput) )
EXTERN_C const IID IID_IVBSAXContentHandler;
    typedef struct IVBSAXContentHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVBSAXContentHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVBSAXContentHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVBSAXContentHandler * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IVBSAXContentHandler * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IVBSAXContentHandler * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IVBSAXContentHandler * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IVBSAXContentHandler * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                           HRESULT ( STDMETHODCALLTYPE *putref_documentLocator )(
            IVBSAXContentHandler * This,
                       IVBSAXLocator *oLocator);
                               HRESULT ( STDMETHODCALLTYPE *startDocument )(
            IVBSAXContentHandler * This);
                               HRESULT ( STDMETHODCALLTYPE *endDocument )(
            IVBSAXContentHandler * This);
                               HRESULT ( STDMETHODCALLTYPE *startPrefixMapping )(
            IVBSAXContentHandler * This,
                            BSTR *strPrefix,
                            BSTR *strURI);
                               HRESULT ( STDMETHODCALLTYPE *endPrefixMapping )(
            IVBSAXContentHandler * This,
                            BSTR *strPrefix);
                               HRESULT ( STDMETHODCALLTYPE *startElement )(
            IVBSAXContentHandler * This,
                            BSTR *strNamespaceURI,
                            BSTR *strLocalName,
                            BSTR *strQName,
                       IVBSAXAttributes *oAttributes);
                               HRESULT ( STDMETHODCALLTYPE *endElement )(
            IVBSAXContentHandler * This,
                            BSTR *strNamespaceURI,
                            BSTR *strLocalName,
                            BSTR *strQName);
                               HRESULT ( STDMETHODCALLTYPE *characters )(
            IVBSAXContentHandler * This,
                            BSTR *strChars);
                               HRESULT ( STDMETHODCALLTYPE *ignorableWhitespace )(
            IVBSAXContentHandler * This,
                            BSTR *strChars);
                               HRESULT ( STDMETHODCALLTYPE *processingInstruction )(
            IVBSAXContentHandler * This,
                            BSTR *strTarget,
                            BSTR *strData);
                               HRESULT ( STDMETHODCALLTYPE *skippedEntity )(
            IVBSAXContentHandler * This,
                            BSTR *strName);
        END_INTERFACE
    } IVBSAXContentHandlerVtbl;
    interface IVBSAXContentHandler
    {
        CONST_VTBL struct IVBSAXContentHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> putref_documentLocator(This,oLocator) )
    ( (This)->lpVtbl -> startDocument(This) )
    ( (This)->lpVtbl -> endDocument(This) )
    ( (This)->lpVtbl -> startPrefixMapping(This,strPrefix,strURI) )
    ( (This)->lpVtbl -> endPrefixMapping(This,strPrefix) )
    ( (This)->lpVtbl -> startElement(This,strNamespaceURI,strLocalName,strQName,oAttributes) )
    ( (This)->lpVtbl -> endElement(This,strNamespaceURI,strLocalName,strQName) )
    ( (This)->lpVtbl -> characters(This,strChars) )
    ( (This)->lpVtbl -> ignorableWhitespace(This,strChars) )
    ( (This)->lpVtbl -> processingInstruction(This,strTarget,strData) )
    ( (This)->lpVtbl -> skippedEntity(This,strName) )
EXTERN_C const IID IID_IVBSAXDTDHandler;
    typedef struct IVBSAXDTDHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVBSAXDTDHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVBSAXDTDHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVBSAXDTDHandler * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IVBSAXDTDHandler * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IVBSAXDTDHandler * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IVBSAXDTDHandler * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IVBSAXDTDHandler * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *notationDecl )(
            IVBSAXDTDHandler * This,
                            BSTR *strName,
                            BSTR *strPublicId,
                            BSTR *strSystemId);
                               HRESULT ( STDMETHODCALLTYPE *unparsedEntityDecl )(
            IVBSAXDTDHandler * This,
                            BSTR *strName,
                            BSTR *strPublicId,
                            BSTR *strSystemId,
                            BSTR *strNotationName);
        END_INTERFACE
    } IVBSAXDTDHandlerVtbl;
    interface IVBSAXDTDHandler
    {
        CONST_VTBL struct IVBSAXDTDHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> notationDecl(This,strName,strPublicId,strSystemId) )
    ( (This)->lpVtbl -> unparsedEntityDecl(This,strName,strPublicId,strSystemId,strNotationName) )
EXTERN_C const IID IID_IVBSAXErrorHandler;
    typedef struct IVBSAXErrorHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVBSAXErrorHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVBSAXErrorHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVBSAXErrorHandler * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IVBSAXErrorHandler * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IVBSAXErrorHandler * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IVBSAXErrorHandler * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IVBSAXErrorHandler * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *error )(
            IVBSAXErrorHandler * This,
                       IVBSAXLocator *oLocator,
                            BSTR *strErrorMessage,
                       long nErrorCode);
                               HRESULT ( STDMETHODCALLTYPE *fatalError )(
            IVBSAXErrorHandler * This,
                       IVBSAXLocator *oLocator,
                            BSTR *strErrorMessage,
                       long nErrorCode);
                               HRESULT ( STDMETHODCALLTYPE *ignorableWarning )(
            IVBSAXErrorHandler * This,
                       IVBSAXLocator *oLocator,
                            BSTR *strErrorMessage,
                       long nErrorCode);
        END_INTERFACE
    } IVBSAXErrorHandlerVtbl;
    interface IVBSAXErrorHandler
    {
        CONST_VTBL struct IVBSAXErrorHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> error(This,oLocator,strErrorMessage,nErrorCode) )
    ( (This)->lpVtbl -> fatalError(This,oLocator,strErrorMessage,nErrorCode) )
    ( (This)->lpVtbl -> ignorableWarning(This,oLocator,strErrorMessage,nErrorCode) )
EXTERN_C const IID IID_IVBSAXLexicalHandler;
    typedef struct IVBSAXLexicalHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVBSAXLexicalHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVBSAXLexicalHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVBSAXLexicalHandler * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IVBSAXLexicalHandler * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IVBSAXLexicalHandler * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IVBSAXLexicalHandler * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IVBSAXLexicalHandler * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *startDTD )(
            IVBSAXLexicalHandler * This,
                            BSTR *strName,
                            BSTR *strPublicId,
                            BSTR *strSystemId);
                               HRESULT ( STDMETHODCALLTYPE *endDTD )(
            IVBSAXLexicalHandler * This);
                               HRESULT ( STDMETHODCALLTYPE *startEntity )(
            IVBSAXLexicalHandler * This,
                            BSTR *strName);
                               HRESULT ( STDMETHODCALLTYPE *endEntity )(
            IVBSAXLexicalHandler * This,
                            BSTR *strName);
                               HRESULT ( STDMETHODCALLTYPE *startCDATA )(
            IVBSAXLexicalHandler * This);
                               HRESULT ( STDMETHODCALLTYPE *endCDATA )(
            IVBSAXLexicalHandler * This);
                               HRESULT ( STDMETHODCALLTYPE *comment )(
            IVBSAXLexicalHandler * This,
                            BSTR *strChars);
        END_INTERFACE
    } IVBSAXLexicalHandlerVtbl;
    interface IVBSAXLexicalHandler
    {
        CONST_VTBL struct IVBSAXLexicalHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> startDTD(This,strName,strPublicId,strSystemId) )
    ( (This)->lpVtbl -> endDTD(This) )
    ( (This)->lpVtbl -> startEntity(This,strName) )
    ( (This)->lpVtbl -> endEntity(This,strName) )
    ( (This)->lpVtbl -> startCDATA(This) )
    ( (This)->lpVtbl -> endCDATA(This) )
    ( (This)->lpVtbl -> comment(This,strChars) )
EXTERN_C const IID IID_IVBSAXDeclHandler;
    typedef struct IVBSAXDeclHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVBSAXDeclHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVBSAXDeclHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVBSAXDeclHandler * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IVBSAXDeclHandler * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IVBSAXDeclHandler * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IVBSAXDeclHandler * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IVBSAXDeclHandler * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *elementDecl )(
            IVBSAXDeclHandler * This,
                            BSTR *strName,
                            BSTR *strModel);
                               HRESULT ( STDMETHODCALLTYPE *attributeDecl )(
            IVBSAXDeclHandler * This,
                            BSTR *strElementName,
                            BSTR *strAttributeName,
                            BSTR *strType,
                            BSTR *strValueDefault,
                            BSTR *strValue);
                               HRESULT ( STDMETHODCALLTYPE *internalEntityDecl )(
            IVBSAXDeclHandler * This,
                            BSTR *strName,
                            BSTR *strValue);
                               HRESULT ( STDMETHODCALLTYPE *externalEntityDecl )(
            IVBSAXDeclHandler * This,
                            BSTR *strName,
                            BSTR *strPublicId,
                            BSTR *strSystemId);
        END_INTERFACE
    } IVBSAXDeclHandlerVtbl;
    interface IVBSAXDeclHandler
    {
        CONST_VTBL struct IVBSAXDeclHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> elementDecl(This,strName,strModel) )
    ( (This)->lpVtbl -> attributeDecl(This,strElementName,strAttributeName,strType,strValueDefault,strValue) )
    ( (This)->lpVtbl -> internalEntityDecl(This,strName,strValue) )
    ( (This)->lpVtbl -> externalEntityDecl(This,strName,strPublicId,strSystemId) )
EXTERN_C const IID IID_IVBSAXAttributes;
    typedef struct IVBSAXAttributesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVBSAXAttributes * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVBSAXAttributes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVBSAXAttributes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IVBSAXAttributes * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IVBSAXAttributes * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IVBSAXAttributes * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IVBSAXAttributes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_length )(
            IVBSAXAttributes * This,
                                int *nLength);
                               HRESULT ( STDMETHODCALLTYPE *getURI )(
            IVBSAXAttributes * This,
                       int nIndex,
                                BSTR *strURI);
                               HRESULT ( STDMETHODCALLTYPE *getLocalName )(
            IVBSAXAttributes * This,
                       int nIndex,
                                BSTR *strLocalName);
                               HRESULT ( STDMETHODCALLTYPE *getQName )(
            IVBSAXAttributes * This,
                       int nIndex,
                                BSTR *strQName);
                               HRESULT ( STDMETHODCALLTYPE *getIndexFromName )(
            IVBSAXAttributes * This,
                       BSTR strURI,
                       BSTR strLocalName,
                                int *nIndex);
                               HRESULT ( STDMETHODCALLTYPE *getIndexFromQName )(
            IVBSAXAttributes * This,
                       BSTR strQName,
                                int *nIndex);
                               HRESULT ( STDMETHODCALLTYPE *getType )(
            IVBSAXAttributes * This,
                       int nIndex,
                                BSTR *strType);
                               HRESULT ( STDMETHODCALLTYPE *getTypeFromName )(
            IVBSAXAttributes * This,
                       BSTR strURI,
                       BSTR strLocalName,
                                BSTR *strType);
                               HRESULT ( STDMETHODCALLTYPE *getTypeFromQName )(
            IVBSAXAttributes * This,
                       BSTR strQName,
                                BSTR *strType);
                               HRESULT ( STDMETHODCALLTYPE *getValue )(
            IVBSAXAttributes * This,
                       int nIndex,
                                BSTR *strValue);
                               HRESULT ( STDMETHODCALLTYPE *getValueFromName )(
            IVBSAXAttributes * This,
                       BSTR strURI,
                       BSTR strLocalName,
                                BSTR *strValue);
                               HRESULT ( STDMETHODCALLTYPE *getValueFromQName )(
            IVBSAXAttributes * This,
                       BSTR strQName,
                                BSTR *strValue);
        END_INTERFACE
    } IVBSAXAttributesVtbl;
    interface IVBSAXAttributes
    {
        CONST_VTBL struct IVBSAXAttributesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_length(This,nLength) )
    ( (This)->lpVtbl -> getURI(This,nIndex,strURI) )
    ( (This)->lpVtbl -> getLocalName(This,nIndex,strLocalName) )
    ( (This)->lpVtbl -> getQName(This,nIndex,strQName) )
    ( (This)->lpVtbl -> getIndexFromName(This,strURI,strLocalName,nIndex) )
    ( (This)->lpVtbl -> getIndexFromQName(This,strQName,nIndex) )
    ( (This)->lpVtbl -> getType(This,nIndex,strType) )
    ( (This)->lpVtbl -> getTypeFromName(This,strURI,strLocalName,strType) )
    ( (This)->lpVtbl -> getTypeFromQName(This,strQName,strType) )
    ( (This)->lpVtbl -> getValue(This,nIndex,strValue) )
    ( (This)->lpVtbl -> getValueFromName(This,strURI,strLocalName,strValue) )
    ( (This)->lpVtbl -> getValueFromQName(This,strQName,strValue) )
EXTERN_C const IID IID_IMXWriter;
    typedef struct IMXWriterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMXWriter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMXWriter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMXWriter * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IMXWriter * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IMXWriter * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IMXWriter * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMXWriter * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *put_output )(
            IMXWriter * This,
                       VARIANT varDestination);
                                        HRESULT ( STDMETHODCALLTYPE *get_output )(
            IMXWriter * This,
                                VARIANT *varDestination);
                                        HRESULT ( STDMETHODCALLTYPE *put_encoding )(
            IMXWriter * This,
                       BSTR strEncoding);
                                        HRESULT ( STDMETHODCALLTYPE *get_encoding )(
            IMXWriter * This,
                                BSTR *strEncoding);
                                        HRESULT ( STDMETHODCALLTYPE *put_byteOrderMark )(
            IMXWriter * This,
                       VARIANT_BOOL fWriteByteOrderMark);
                                        HRESULT ( STDMETHODCALLTYPE *get_byteOrderMark )(
            IMXWriter * This,
                                VARIANT_BOOL *fWriteByteOrderMark);
                                        HRESULT ( STDMETHODCALLTYPE *put_indent )(
            IMXWriter * This,
                       VARIANT_BOOL fIndentMode);
                                        HRESULT ( STDMETHODCALLTYPE *get_indent )(
            IMXWriter * This,
                                VARIANT_BOOL *fIndentMode);
                                        HRESULT ( STDMETHODCALLTYPE *put_standalone )(
            IMXWriter * This,
                       VARIANT_BOOL fValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_standalone )(
            IMXWriter * This,
                                VARIANT_BOOL *fValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_omitXMLDeclaration )(
            IMXWriter * This,
                       VARIANT_BOOL fValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_omitXMLDeclaration )(
            IMXWriter * This,
                                VARIANT_BOOL *fValue);
                                        HRESULT ( STDMETHODCALLTYPE *put_version )(
            IMXWriter * This,
                       BSTR strVersion);
                                        HRESULT ( STDMETHODCALLTYPE *get_version )(
            IMXWriter * This,
                                BSTR *strVersion);
                                        HRESULT ( STDMETHODCALLTYPE *put_disableOutputEscaping )(
            IMXWriter * This,
                       VARIANT_BOOL fValue);
                                        HRESULT ( STDMETHODCALLTYPE *get_disableOutputEscaping )(
            IMXWriter * This,
                                VARIANT_BOOL *fValue);
                               HRESULT ( STDMETHODCALLTYPE *flush )(
            IMXWriter * This);
        END_INTERFACE
    } IMXWriterVtbl;
    interface IMXWriter
    {
        CONST_VTBL struct IMXWriterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_output(This,varDestination) )
    ( (This)->lpVtbl -> get_output(This,varDestination) )
    ( (This)->lpVtbl -> put_encoding(This,strEncoding) )
    ( (This)->lpVtbl -> get_encoding(This,strEncoding) )
    ( (This)->lpVtbl -> put_byteOrderMark(This,fWriteByteOrderMark) )
    ( (This)->lpVtbl -> get_byteOrderMark(This,fWriteByteOrderMark) )
    ( (This)->lpVtbl -> put_indent(This,fIndentMode) )
    ( (This)->lpVtbl -> get_indent(This,fIndentMode) )
    ( (This)->lpVtbl -> put_standalone(This,fValue) )
    ( (This)->lpVtbl -> get_standalone(This,fValue) )
    ( (This)->lpVtbl -> put_omitXMLDeclaration(This,fValue) )
    ( (This)->lpVtbl -> get_omitXMLDeclaration(This,fValue) )
    ( (This)->lpVtbl -> put_version(This,strVersion) )
    ( (This)->lpVtbl -> get_version(This,strVersion) )
    ( (This)->lpVtbl -> put_disableOutputEscaping(This,fValue) )
    ( (This)->lpVtbl -> get_disableOutputEscaping(This,fValue) )
    ( (This)->lpVtbl -> flush(This) )
EXTERN_C const IID IID_IMXAttributes;
    typedef struct IMXAttributesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMXAttributes * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMXAttributes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMXAttributes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IMXAttributes * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IMXAttributes * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IMXAttributes * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMXAttributes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *addAttribute )(
            IMXAttributes * This,
                       BSTR strURI,
                       BSTR strLocalName,
                       BSTR strQName,
                       BSTR strType,
                       BSTR strValue);
                               HRESULT ( STDMETHODCALLTYPE *addAttributeFromIndex )(
            IMXAttributes * This,
                       VARIANT varAtts,
                       int nIndex);
                               HRESULT ( STDMETHODCALLTYPE *clear )(
            IMXAttributes * This);
                               HRESULT ( STDMETHODCALLTYPE *removeAttribute )(
            IMXAttributes * This,
                       int nIndex);
                               HRESULT ( STDMETHODCALLTYPE *setAttribute )(
            IMXAttributes * This,
                       int nIndex,
                       BSTR strURI,
                       BSTR strLocalName,
                       BSTR strQName,
                       BSTR strType,
                       BSTR strValue);
                               HRESULT ( STDMETHODCALLTYPE *setAttributes )(
            IMXAttributes * This,
                       VARIANT varAtts);
                               HRESULT ( STDMETHODCALLTYPE *setLocalName )(
            IMXAttributes * This,
                       int nIndex,
                       BSTR strLocalName);
                               HRESULT ( STDMETHODCALLTYPE *setQName )(
            IMXAttributes * This,
                       int nIndex,
                       BSTR strQName);
                               HRESULT ( STDMETHODCALLTYPE *setType )(
            IMXAttributes * This,
                       int nIndex,
                       BSTR strType);
                               HRESULT ( STDMETHODCALLTYPE *setURI )(
            IMXAttributes * This,
                       int nIndex,
                       BSTR strURI);
                               HRESULT ( STDMETHODCALLTYPE *setValue )(
            IMXAttributes * This,
                       int nIndex,
                       BSTR strValue);
        END_INTERFACE
    } IMXAttributesVtbl;
    interface IMXAttributes
    {
        CONST_VTBL struct IMXAttributesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> addAttribute(This,strURI,strLocalName,strQName,strType,strValue) )
    ( (This)->lpVtbl -> addAttributeFromIndex(This,varAtts,nIndex) )
    ( (This)->lpVtbl -> clear(This) )
    ( (This)->lpVtbl -> removeAttribute(This,nIndex) )
    ( (This)->lpVtbl -> setAttribute(This,nIndex,strURI,strLocalName,strQName,strType,strValue) )
    ( (This)->lpVtbl -> setAttributes(This,varAtts) )
    ( (This)->lpVtbl -> setLocalName(This,nIndex,strLocalName) )
    ( (This)->lpVtbl -> setQName(This,nIndex,strQName) )
    ( (This)->lpVtbl -> setType(This,nIndex,strType) )
    ( (This)->lpVtbl -> setURI(This,nIndex,strURI) )
    ( (This)->lpVtbl -> setValue(This,nIndex,strValue) )
EXTERN_C const IID IID_IMXReaderControl;
    typedef struct IMXReaderControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMXReaderControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMXReaderControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMXReaderControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IMXReaderControl * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IMXReaderControl * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IMXReaderControl * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMXReaderControl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *abort )(
            IMXReaderControl * This);
                               HRESULT ( STDMETHODCALLTYPE *resume )(
            IMXReaderControl * This);
                               HRESULT ( STDMETHODCALLTYPE *suspend )(
            IMXReaderControl * This);
        END_INTERFACE
    } IMXReaderControlVtbl;
    interface IMXReaderControl
    {
        CONST_VTBL struct IMXReaderControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> abort(This) )
    ( (This)->lpVtbl -> resume(This) )
    ( (This)->lpVtbl -> suspend(This) )
EXTERN_C const IID IID_IMXSchemaDeclHandler;
    typedef struct IMXSchemaDeclHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMXSchemaDeclHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMXSchemaDeclHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMXSchemaDeclHandler * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IMXSchemaDeclHandler * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IMXSchemaDeclHandler * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IMXSchemaDeclHandler * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMXSchemaDeclHandler * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *schemaElementDecl )(
            IMXSchemaDeclHandler * This,
                       ISchemaElement *oSchemaElement);
        END_INTERFACE
    } IMXSchemaDeclHandlerVtbl;
    interface IMXSchemaDeclHandler
    {
        CONST_VTBL struct IMXSchemaDeclHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> schemaElementDecl(This,oSchemaElement) )
EXTERN_C const IID IID_IMXXMLFilter;
    typedef struct IMXXMLFilterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMXXMLFilter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMXXMLFilter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMXXMLFilter * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IMXXMLFilter * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IMXXMLFilter * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IMXXMLFilter * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMXXMLFilter * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                   HRESULT ( STDMETHODCALLTYPE *getFeature )(
            IMXXMLFilter * This,
                       BSTR strName,
                                VARIANT_BOOL *fValue);
                   HRESULT ( STDMETHODCALLTYPE *putFeature )(
            IMXXMLFilter * This,
                       BSTR strName,
                       VARIANT_BOOL fValue);
                   HRESULT ( STDMETHODCALLTYPE *getProperty )(
            IMXXMLFilter * This,
                       BSTR strName,
                                VARIANT *varValue);
                   HRESULT ( STDMETHODCALLTYPE *putProperty )(
            IMXXMLFilter * This,
                       BSTR strName,
                       VARIANT varValue);
                            HRESULT ( STDMETHODCALLTYPE *get_entityResolver )(
            IMXXMLFilter * This,
                                IUnknown **oResolver);
                               HRESULT ( STDMETHODCALLTYPE *putref_entityResolver )(
            IMXXMLFilter * This,
                       IUnknown *oResolver);
                            HRESULT ( STDMETHODCALLTYPE *get_contentHandler )(
            IMXXMLFilter * This,
                                IUnknown **oHandler);
                               HRESULT ( STDMETHODCALLTYPE *putref_contentHandler )(
            IMXXMLFilter * This,
                       IUnknown *oHandler);
                            HRESULT ( STDMETHODCALLTYPE *get_dtdHandler )(
            IMXXMLFilter * This,
                                IUnknown **oHandler);
                               HRESULT ( STDMETHODCALLTYPE *putref_dtdHandler )(
            IMXXMLFilter * This,
                       IUnknown *oHandler);
                            HRESULT ( STDMETHODCALLTYPE *get_errorHandler )(
            IMXXMLFilter * This,
                                IUnknown **oHandler);
                               HRESULT ( STDMETHODCALLTYPE *putref_errorHandler )(
            IMXXMLFilter * This,
                       IUnknown *oHandler);
        END_INTERFACE
    } IMXXMLFilterVtbl;
    interface IMXXMLFilter
    {
        CONST_VTBL struct IMXXMLFilterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> getFeature(This,strName,fValue) )
    ( (This)->lpVtbl -> putFeature(This,strName,fValue) )
    ( (This)->lpVtbl -> getProperty(This,strName,varValue) )
    ( (This)->lpVtbl -> putProperty(This,strName,varValue) )
    ( (This)->lpVtbl -> get_entityResolver(This,oResolver) )
    ( (This)->lpVtbl -> putref_entityResolver(This,oResolver) )
    ( (This)->lpVtbl -> get_contentHandler(This,oHandler) )
    ( (This)->lpVtbl -> putref_contentHandler(This,oHandler) )
    ( (This)->lpVtbl -> get_dtdHandler(This,oHandler) )
    ( (This)->lpVtbl -> putref_dtdHandler(This,oHandler) )
    ( (This)->lpVtbl -> get_errorHandler(This,oHandler) )
    ( (This)->lpVtbl -> putref_errorHandler(This,oHandler) )
EXTERN_C const IID IID_IXMLDOMSchemaCollection2;
    typedef struct IXMLDOMSchemaCollection2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMSchemaCollection2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMSchemaCollection2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMSchemaCollection2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMSchemaCollection2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMSchemaCollection2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMSchemaCollection2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMSchemaCollection2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *add )(
            IXMLDOMSchemaCollection2 * This,
                       BSTR namespaceURI,
                       VARIANT var);
                               HRESULT ( STDMETHODCALLTYPE *get )(
            IXMLDOMSchemaCollection2 * This,
                       BSTR namespaceURI,
                                IXMLDOMNode **schemaNode);
                               HRESULT ( STDMETHODCALLTYPE *remove )(
            IXMLDOMSchemaCollection2 * This,
                       BSTR namespaceURI);
                                        HRESULT ( STDMETHODCALLTYPE *get_length )(
            IXMLDOMSchemaCollection2 * This,
                                long *length);
                                        HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            IXMLDOMSchemaCollection2 * This,
                       long index,
                                BSTR *length);
                               HRESULT ( STDMETHODCALLTYPE *addCollection )(
            IXMLDOMSchemaCollection2 * This,
                       IXMLDOMSchemaCollection *otherCollection);
                                                HRESULT ( STDMETHODCALLTYPE *get__newEnum )(
            IXMLDOMSchemaCollection2 * This,
                                IUnknown **ppUnk);
                   HRESULT ( STDMETHODCALLTYPE *validate )(
            IXMLDOMSchemaCollection2 * This);
                            HRESULT ( STDMETHODCALLTYPE *put_validateOnLoad )(
            IXMLDOMSchemaCollection2 * This,
                       VARIANT_BOOL validateOnLoad);
                            HRESULT ( STDMETHODCALLTYPE *get_validateOnLoad )(
            IXMLDOMSchemaCollection2 * This,
                                VARIANT_BOOL *validateOnLoad);
                   HRESULT ( STDMETHODCALLTYPE *getSchema )(
            IXMLDOMSchemaCollection2 * This,
                       BSTR namespaceURI,
                                ISchema **schema);
                   HRESULT ( STDMETHODCALLTYPE *getDeclaration )(
            IXMLDOMSchemaCollection2 * This,
                       IXMLDOMNode *node,
                                ISchemaItem **item);
        END_INTERFACE
    } IXMLDOMSchemaCollection2Vtbl;
    interface IXMLDOMSchemaCollection2
    {
        CONST_VTBL struct IXMLDOMSchemaCollection2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> add(This,namespaceURI,var) )
    ( (This)->lpVtbl -> get(This,namespaceURI,schemaNode) )
    ( (This)->lpVtbl -> remove(This,namespaceURI) )
    ( (This)->lpVtbl -> get_length(This,length) )
    ( (This)->lpVtbl -> get_namespaceURI(This,index,length) )
    ( (This)->lpVtbl -> addCollection(This,otherCollection) )
    ( (This)->lpVtbl -> get__newEnum(This,ppUnk) )
    ( (This)->lpVtbl -> validate(This) )
    ( (This)->lpVtbl -> put_validateOnLoad(This,validateOnLoad) )
    ( (This)->lpVtbl -> get_validateOnLoad(This,validateOnLoad) )
    ( (This)->lpVtbl -> getSchema(This,namespaceURI,schema) )
    ( (This)->lpVtbl -> getDeclaration(This,node,item) )
EXTERN_C const IID IID_ISchemaStringCollection;
    typedef struct ISchemaStringCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISchemaStringCollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISchemaStringCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISchemaStringCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISchemaStringCollection * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISchemaStringCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISchemaStringCollection * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISchemaStringCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_item )(
            ISchemaStringCollection * This,
                       long index,
                                BSTR *bstr);
                            HRESULT ( STDMETHODCALLTYPE *get_length )(
            ISchemaStringCollection * This,
                                long *length);
                                                HRESULT ( STDMETHODCALLTYPE *get__newEnum )(
            ISchemaStringCollection * This,
                                IUnknown **ppunk);
        END_INTERFACE
    } ISchemaStringCollectionVtbl;
    interface ISchemaStringCollection
    {
        CONST_VTBL struct ISchemaStringCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_item(This,index,bstr) )
    ( (This)->lpVtbl -> get_length(This,length) )
    ( (This)->lpVtbl -> get__newEnum(This,ppunk) )
EXTERN_C const IID IID_ISchemaItemCollection;
    typedef struct ISchemaItemCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISchemaItemCollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISchemaItemCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISchemaItemCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISchemaItemCollection * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISchemaItemCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISchemaItemCollection * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISchemaItemCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_item )(
            ISchemaItemCollection * This,
                       long index,
                                ISchemaItem **item);
                   HRESULT ( STDMETHODCALLTYPE *itemByName )(
            ISchemaItemCollection * This,
                       BSTR name,
                                ISchemaItem **item);
                   HRESULT ( STDMETHODCALLTYPE *itemByQName )(
            ISchemaItemCollection * This,
                       BSTR name,
                       BSTR namespaceURI,
                                ISchemaItem **item);
                            HRESULT ( STDMETHODCALLTYPE *get_length )(
            ISchemaItemCollection * This,
                                long *length);
                                                HRESULT ( STDMETHODCALLTYPE *get__newEnum )(
            ISchemaItemCollection * This,
                                IUnknown **ppunk);
        END_INTERFACE
    } ISchemaItemCollectionVtbl;
    interface ISchemaItemCollection
    {
        CONST_VTBL struct ISchemaItemCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_item(This,index,item) )
    ( (This)->lpVtbl -> itemByName(This,name,item) )
    ( (This)->lpVtbl -> itemByQName(This,name,namespaceURI,item) )
    ( (This)->lpVtbl -> get_length(This,length) )
    ( (This)->lpVtbl -> get__newEnum(This,ppunk) )
EXTERN_C const IID IID_ISchemaItem;
    typedef struct ISchemaItemVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISchemaItem * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISchemaItem * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISchemaItem * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISchemaItem * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISchemaItem * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISchemaItem * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISchemaItem * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_name )(
            ISchemaItem * This,
                                BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            ISchemaItem * This,
                                BSTR *namespaceURI);
                            HRESULT ( STDMETHODCALLTYPE *get_schema )(
            ISchemaItem * This,
                                ISchema **schema);
                            HRESULT ( STDMETHODCALLTYPE *get_id )(
            ISchemaItem * This,
                                BSTR *id);
                            HRESULT ( STDMETHODCALLTYPE *get_itemType )(
            ISchemaItem * This,
                                SOMITEMTYPE *itemType);
                            HRESULT ( STDMETHODCALLTYPE *get_unhandledAttributes )(
            ISchemaItem * This,
                                IVBSAXAttributes **attributes);
                   HRESULT ( STDMETHODCALLTYPE *writeAnnotation )(
            ISchemaItem * This,
                       IUnknown *annotationSink,
                                VARIANT_BOOL *isWritten);
        END_INTERFACE
    } ISchemaItemVtbl;
    interface ISchemaItem
    {
        CONST_VTBL struct ISchemaItemVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_name(This,name) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_schema(This,schema) )
    ( (This)->lpVtbl -> get_id(This,id) )
    ( (This)->lpVtbl -> get_itemType(This,itemType) )
    ( (This)->lpVtbl -> get_unhandledAttributes(This,attributes) )
    ( (This)->lpVtbl -> writeAnnotation(This,annotationSink,isWritten) )
EXTERN_C const IID IID_ISchema;
    typedef struct ISchemaVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISchema * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISchema * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISchema * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISchema * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISchema * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISchema * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISchema * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_name )(
            ISchema * This,
                                BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            ISchema * This,
                                BSTR *namespaceURI);
                            HRESULT ( STDMETHODCALLTYPE *get_schema )(
            ISchema * This,
                                ISchema **schema);
                            HRESULT ( STDMETHODCALLTYPE *get_id )(
            ISchema * This,
                                BSTR *id);
                            HRESULT ( STDMETHODCALLTYPE *get_itemType )(
            ISchema * This,
                                SOMITEMTYPE *itemType);
                            HRESULT ( STDMETHODCALLTYPE *get_unhandledAttributes )(
            ISchema * This,
                                IVBSAXAttributes **attributes);
                   HRESULT ( STDMETHODCALLTYPE *writeAnnotation )(
            ISchema * This,
                       IUnknown *annotationSink,
                                VARIANT_BOOL *isWritten);
                            HRESULT ( STDMETHODCALLTYPE *get_targetNamespace )(
            ISchema * This,
                                BSTR *targetNamespace);
                            HRESULT ( STDMETHODCALLTYPE *get_version )(
            ISchema * This,
                                BSTR *version);
                            HRESULT ( STDMETHODCALLTYPE *get_types )(
            ISchema * This,
                                ISchemaItemCollection **types);
                            HRESULT ( STDMETHODCALLTYPE *get_elements )(
            ISchema * This,
                                ISchemaItemCollection **elements);
                            HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            ISchema * This,
                                ISchemaItemCollection **attributes);
                            HRESULT ( STDMETHODCALLTYPE *get_attributeGroups )(
            ISchema * This,
                                ISchemaItemCollection **attributeGroups);
                            HRESULT ( STDMETHODCALLTYPE *get_modelGroups )(
            ISchema * This,
                                ISchemaItemCollection **modelGroups);
                            HRESULT ( STDMETHODCALLTYPE *get_notations )(
            ISchema * This,
                                ISchemaItemCollection **notations);
                            HRESULT ( STDMETHODCALLTYPE *get_schemaLocations )(
            ISchema * This,
                                ISchemaStringCollection **schemaLocations);
        END_INTERFACE
    } ISchemaVtbl;
    interface ISchema
    {
        CONST_VTBL struct ISchemaVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_name(This,name) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_schema(This,schema) )
    ( (This)->lpVtbl -> get_id(This,id) )
    ( (This)->lpVtbl -> get_itemType(This,itemType) )
    ( (This)->lpVtbl -> get_unhandledAttributes(This,attributes) )
    ( (This)->lpVtbl -> writeAnnotation(This,annotationSink,isWritten) )
    ( (This)->lpVtbl -> get_targetNamespace(This,targetNamespace) )
    ( (This)->lpVtbl -> get_version(This,version) )
    ( (This)->lpVtbl -> get_types(This,types) )
    ( (This)->lpVtbl -> get_elements(This,elements) )
    ( (This)->lpVtbl -> get_attributes(This,attributes) )
    ( (This)->lpVtbl -> get_attributeGroups(This,attributeGroups) )
    ( (This)->lpVtbl -> get_modelGroups(This,modelGroups) )
    ( (This)->lpVtbl -> get_notations(This,notations) )
    ( (This)->lpVtbl -> get_schemaLocations(This,schemaLocations) )
EXTERN_C const IID IID_ISchemaParticle;
    typedef struct ISchemaParticleVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISchemaParticle * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISchemaParticle * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISchemaParticle * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISchemaParticle * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISchemaParticle * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISchemaParticle * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISchemaParticle * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_name )(
            ISchemaParticle * This,
                                BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            ISchemaParticle * This,
                                BSTR *namespaceURI);
                            HRESULT ( STDMETHODCALLTYPE *get_schema )(
            ISchemaParticle * This,
                                ISchema **schema);
                            HRESULT ( STDMETHODCALLTYPE *get_id )(
            ISchemaParticle * This,
                                BSTR *id);
                            HRESULT ( STDMETHODCALLTYPE *get_itemType )(
            ISchemaParticle * This,
                                SOMITEMTYPE *itemType);
                            HRESULT ( STDMETHODCALLTYPE *get_unhandledAttributes )(
            ISchemaParticle * This,
                                IVBSAXAttributes **attributes);
                   HRESULT ( STDMETHODCALLTYPE *writeAnnotation )(
            ISchemaParticle * This,
                       IUnknown *annotationSink,
                                VARIANT_BOOL *isWritten);
                            HRESULT ( STDMETHODCALLTYPE *get_minOccurs )(
            ISchemaParticle * This,
                                VARIANT *minOccurs);
                            HRESULT ( STDMETHODCALLTYPE *get_maxOccurs )(
            ISchemaParticle * This,
                                VARIANT *maxOccurs);
        END_INTERFACE
    } ISchemaParticleVtbl;
    interface ISchemaParticle
    {
        CONST_VTBL struct ISchemaParticleVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_name(This,name) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_schema(This,schema) )
    ( (This)->lpVtbl -> get_id(This,id) )
    ( (This)->lpVtbl -> get_itemType(This,itemType) )
    ( (This)->lpVtbl -> get_unhandledAttributes(This,attributes) )
    ( (This)->lpVtbl -> writeAnnotation(This,annotationSink,isWritten) )
    ( (This)->lpVtbl -> get_minOccurs(This,minOccurs) )
    ( (This)->lpVtbl -> get_maxOccurs(This,maxOccurs) )
EXTERN_C const IID IID_ISchemaAttribute;
    typedef struct ISchemaAttributeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISchemaAttribute * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISchemaAttribute * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISchemaAttribute * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISchemaAttribute * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISchemaAttribute * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISchemaAttribute * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISchemaAttribute * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_name )(
            ISchemaAttribute * This,
                                BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            ISchemaAttribute * This,
                                BSTR *namespaceURI);
                            HRESULT ( STDMETHODCALLTYPE *get_schema )(
            ISchemaAttribute * This,
                                ISchema **schema);
                            HRESULT ( STDMETHODCALLTYPE *get_id )(
            ISchemaAttribute * This,
                                BSTR *id);
                            HRESULT ( STDMETHODCALLTYPE *get_itemType )(
            ISchemaAttribute * This,
                                SOMITEMTYPE *itemType);
                            HRESULT ( STDMETHODCALLTYPE *get_unhandledAttributes )(
            ISchemaAttribute * This,
                                IVBSAXAttributes **attributes);
                   HRESULT ( STDMETHODCALLTYPE *writeAnnotation )(
            ISchemaAttribute * This,
                       IUnknown *annotationSink,
                                VARIANT_BOOL *isWritten);
                            HRESULT ( STDMETHODCALLTYPE *get_type )(
            ISchemaAttribute * This,
                                ISchemaType **type);
                            HRESULT ( STDMETHODCALLTYPE *get_scope )(
            ISchemaAttribute * This,
                                ISchemaComplexType **scope);
                            HRESULT ( STDMETHODCALLTYPE *get_defaultValue )(
            ISchemaAttribute * This,
                                BSTR *defaultValue);
                            HRESULT ( STDMETHODCALLTYPE *get_fixedValue )(
            ISchemaAttribute * This,
                                BSTR *fixedValue);
                            HRESULT ( STDMETHODCALLTYPE *get_use )(
            ISchemaAttribute * This,
                                SCHEMAUSE *use);
                            HRESULT ( STDMETHODCALLTYPE *get_isReference )(
            ISchemaAttribute * This,
                                VARIANT_BOOL *reference);
        END_INTERFACE
    } ISchemaAttributeVtbl;
    interface ISchemaAttribute
    {
        CONST_VTBL struct ISchemaAttributeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_name(This,name) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_schema(This,schema) )
    ( (This)->lpVtbl -> get_id(This,id) )
    ( (This)->lpVtbl -> get_itemType(This,itemType) )
    ( (This)->lpVtbl -> get_unhandledAttributes(This,attributes) )
    ( (This)->lpVtbl -> writeAnnotation(This,annotationSink,isWritten) )
    ( (This)->lpVtbl -> get_type(This,type) )
    ( (This)->lpVtbl -> get_scope(This,scope) )
    ( (This)->lpVtbl -> get_defaultValue(This,defaultValue) )
    ( (This)->lpVtbl -> get_fixedValue(This,fixedValue) )
    ( (This)->lpVtbl -> get_use(This,use) )
    ( (This)->lpVtbl -> get_isReference(This,reference) )
EXTERN_C const IID IID_ISchemaElement;
    typedef struct ISchemaElementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISchemaElement * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISchemaElement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISchemaElement * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISchemaElement * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISchemaElement * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISchemaElement * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISchemaElement * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_name )(
            ISchemaElement * This,
                                BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            ISchemaElement * This,
                                BSTR *namespaceURI);
                            HRESULT ( STDMETHODCALLTYPE *get_schema )(
            ISchemaElement * This,
                                ISchema **schema);
                            HRESULT ( STDMETHODCALLTYPE *get_id )(
            ISchemaElement * This,
                                BSTR *id);
                            HRESULT ( STDMETHODCALLTYPE *get_itemType )(
            ISchemaElement * This,
                                SOMITEMTYPE *itemType);
                            HRESULT ( STDMETHODCALLTYPE *get_unhandledAttributes )(
            ISchemaElement * This,
                                IVBSAXAttributes **attributes);
                   HRESULT ( STDMETHODCALLTYPE *writeAnnotation )(
            ISchemaElement * This,
                       IUnknown *annotationSink,
                                VARIANT_BOOL *isWritten);
                            HRESULT ( STDMETHODCALLTYPE *get_minOccurs )(
            ISchemaElement * This,
                                VARIANT *minOccurs);
                            HRESULT ( STDMETHODCALLTYPE *get_maxOccurs )(
            ISchemaElement * This,
                                VARIANT *maxOccurs);
                            HRESULT ( STDMETHODCALLTYPE *get_type )(
            ISchemaElement * This,
                                ISchemaType **type);
                            HRESULT ( STDMETHODCALLTYPE *get_scope )(
            ISchemaElement * This,
                                ISchemaComplexType **scope);
                            HRESULT ( STDMETHODCALLTYPE *get_defaultValue )(
            ISchemaElement * This,
                                BSTR *defaultValue);
                            HRESULT ( STDMETHODCALLTYPE *get_fixedValue )(
            ISchemaElement * This,
                                BSTR *fixedValue);
                            HRESULT ( STDMETHODCALLTYPE *get_isNillable )(
            ISchemaElement * This,
                                VARIANT_BOOL *nillable);
                            HRESULT ( STDMETHODCALLTYPE *get_identityConstraints )(
            ISchemaElement * This,
                                ISchemaItemCollection **constraints);
                            HRESULT ( STDMETHODCALLTYPE *get_substitutionGroup )(
            ISchemaElement * This,
                                ISchemaElement **element);
                            HRESULT ( STDMETHODCALLTYPE *get_substitutionGroupExclusions )(
            ISchemaElement * This,
                                SCHEMADERIVATIONMETHOD *exclusions);
                            HRESULT ( STDMETHODCALLTYPE *get_disallowedSubstitutions )(
            ISchemaElement * This,
                                SCHEMADERIVATIONMETHOD *disallowed);
                            HRESULT ( STDMETHODCALLTYPE *get_isAbstract )(
            ISchemaElement * This,
                                VARIANT_BOOL *abstract);
                            HRESULT ( STDMETHODCALLTYPE *get_isReference )(
            ISchemaElement * This,
                                VARIANT_BOOL *reference);
        END_INTERFACE
    } ISchemaElementVtbl;
    interface ISchemaElement
    {
        CONST_VTBL struct ISchemaElementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_name(This,name) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_schema(This,schema) )
    ( (This)->lpVtbl -> get_id(This,id) )
    ( (This)->lpVtbl -> get_itemType(This,itemType) )
    ( (This)->lpVtbl -> get_unhandledAttributes(This,attributes) )
    ( (This)->lpVtbl -> writeAnnotation(This,annotationSink,isWritten) )
    ( (This)->lpVtbl -> get_minOccurs(This,minOccurs) )
    ( (This)->lpVtbl -> get_maxOccurs(This,maxOccurs) )
    ( (This)->lpVtbl -> get_type(This,type) )
    ( (This)->lpVtbl -> get_scope(This,scope) )
    ( (This)->lpVtbl -> get_defaultValue(This,defaultValue) )
    ( (This)->lpVtbl -> get_fixedValue(This,fixedValue) )
    ( (This)->lpVtbl -> get_isNillable(This,nillable) )
    ( (This)->lpVtbl -> get_identityConstraints(This,constraints) )
    ( (This)->lpVtbl -> get_substitutionGroup(This,element) )
    ( (This)->lpVtbl -> get_substitutionGroupExclusions(This,exclusions) )
    ( (This)->lpVtbl -> get_disallowedSubstitutions(This,disallowed) )
    ( (This)->lpVtbl -> get_isAbstract(This,abstract) )
    ( (This)->lpVtbl -> get_isReference(This,reference) )
EXTERN_C const IID IID_ISchemaType;
    typedef struct ISchemaTypeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISchemaType * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISchemaType * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISchemaType * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISchemaType * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISchemaType * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISchemaType * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISchemaType * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_name )(
            ISchemaType * This,
                                BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            ISchemaType * This,
                                BSTR *namespaceURI);
                            HRESULT ( STDMETHODCALLTYPE *get_schema )(
            ISchemaType * This,
                                ISchema **schema);
                            HRESULT ( STDMETHODCALLTYPE *get_id )(
            ISchemaType * This,
                                BSTR *id);
                            HRESULT ( STDMETHODCALLTYPE *get_itemType )(
            ISchemaType * This,
                                SOMITEMTYPE *itemType);
                            HRESULT ( STDMETHODCALLTYPE *get_unhandledAttributes )(
            ISchemaType * This,
                                IVBSAXAttributes **attributes);
                   HRESULT ( STDMETHODCALLTYPE *writeAnnotation )(
            ISchemaType * This,
                       IUnknown *annotationSink,
                                VARIANT_BOOL *isWritten);
                            HRESULT ( STDMETHODCALLTYPE *get_baseTypes )(
            ISchemaType * This,
                                ISchemaItemCollection **baseTypes);
                            HRESULT ( STDMETHODCALLTYPE *get_final )(
            ISchemaType * This,
                                SCHEMADERIVATIONMETHOD *final);
                            HRESULT ( STDMETHODCALLTYPE *get_variety )(
            ISchemaType * This,
                                SCHEMATYPEVARIETY *variety);
                            HRESULT ( STDMETHODCALLTYPE *get_derivedBy )(
            ISchemaType * This,
                                SCHEMADERIVATIONMETHOD *derivedBy);
                   HRESULT ( STDMETHODCALLTYPE *isValid )(
            ISchemaType * This,
                       BSTR data,
                                VARIANT_BOOL *valid);
                            HRESULT ( STDMETHODCALLTYPE *get_minExclusive )(
            ISchemaType * This,
                                BSTR *minExclusive);
                            HRESULT ( STDMETHODCALLTYPE *get_minInclusive )(
            ISchemaType * This,
                                BSTR *minInclusive);
                            HRESULT ( STDMETHODCALLTYPE *get_maxExclusive )(
            ISchemaType * This,
                                BSTR *maxExclusive);
                            HRESULT ( STDMETHODCALLTYPE *get_maxInclusive )(
            ISchemaType * This,
                                BSTR *maxInclusive);
                            HRESULT ( STDMETHODCALLTYPE *get_totalDigits )(
            ISchemaType * This,
                                VARIANT *totalDigits);
                            HRESULT ( STDMETHODCALLTYPE *get_fractionDigits )(
            ISchemaType * This,
                                VARIANT *fractionDigits);
                            HRESULT ( STDMETHODCALLTYPE *get_length )(
            ISchemaType * This,
                                VARIANT *length);
                            HRESULT ( STDMETHODCALLTYPE *get_minLength )(
            ISchemaType * This,
                                VARIANT *minLength);
                            HRESULT ( STDMETHODCALLTYPE *get_maxLength )(
            ISchemaType * This,
                                VARIANT *maxLength);
                            HRESULT ( STDMETHODCALLTYPE *get_enumeration )(
            ISchemaType * This,
                                ISchemaStringCollection **enumeration);
                            HRESULT ( STDMETHODCALLTYPE *get_whitespace )(
            ISchemaType * This,
                                SCHEMAWHITESPACE *whitespace);
                            HRESULT ( STDMETHODCALLTYPE *get_patterns )(
            ISchemaType * This,
                                ISchemaStringCollection **patterns);
        END_INTERFACE
    } ISchemaTypeVtbl;
    interface ISchemaType
    {
        CONST_VTBL struct ISchemaTypeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_name(This,name) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_schema(This,schema) )
    ( (This)->lpVtbl -> get_id(This,id) )
    ( (This)->lpVtbl -> get_itemType(This,itemType) )
    ( (This)->lpVtbl -> get_unhandledAttributes(This,attributes) )
    ( (This)->lpVtbl -> writeAnnotation(This,annotationSink,isWritten) )
    ( (This)->lpVtbl -> get_baseTypes(This,baseTypes) )
    ( (This)->lpVtbl -> get_final(This,final) )
    ( (This)->lpVtbl -> get_variety(This,variety) )
    ( (This)->lpVtbl -> get_derivedBy(This,derivedBy) )
    ( (This)->lpVtbl -> isValid(This,data,valid) )
    ( (This)->lpVtbl -> get_minExclusive(This,minExclusive) )
    ( (This)->lpVtbl -> get_minInclusive(This,minInclusive) )
    ( (This)->lpVtbl -> get_maxExclusive(This,maxExclusive) )
    ( (This)->lpVtbl -> get_maxInclusive(This,maxInclusive) )
    ( (This)->lpVtbl -> get_totalDigits(This,totalDigits) )
    ( (This)->lpVtbl -> get_fractionDigits(This,fractionDigits) )
    ( (This)->lpVtbl -> get_length(This,length) )
    ( (This)->lpVtbl -> get_minLength(This,minLength) )
    ( (This)->lpVtbl -> get_maxLength(This,maxLength) )
    ( (This)->lpVtbl -> get_enumeration(This,enumeration) )
    ( (This)->lpVtbl -> get_whitespace(This,whitespace) )
    ( (This)->lpVtbl -> get_patterns(This,patterns) )
EXTERN_C const IID IID_ISchemaComplexType;
    typedef struct ISchemaComplexTypeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISchemaComplexType * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISchemaComplexType * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISchemaComplexType * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISchemaComplexType * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISchemaComplexType * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISchemaComplexType * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISchemaComplexType * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_name )(
            ISchemaComplexType * This,
                                BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            ISchemaComplexType * This,
                                BSTR *namespaceURI);
                            HRESULT ( STDMETHODCALLTYPE *get_schema )(
            ISchemaComplexType * This,
                                ISchema **schema);
                            HRESULT ( STDMETHODCALLTYPE *get_id )(
            ISchemaComplexType * This,
                                BSTR *id);
                            HRESULT ( STDMETHODCALLTYPE *get_itemType )(
            ISchemaComplexType * This,
                                SOMITEMTYPE *itemType);
                            HRESULT ( STDMETHODCALLTYPE *get_unhandledAttributes )(
            ISchemaComplexType * This,
                                IVBSAXAttributes **attributes);
                   HRESULT ( STDMETHODCALLTYPE *writeAnnotation )(
            ISchemaComplexType * This,
                       IUnknown *annotationSink,
                                VARIANT_BOOL *isWritten);
                            HRESULT ( STDMETHODCALLTYPE *get_baseTypes )(
            ISchemaComplexType * This,
                                ISchemaItemCollection **baseTypes);
                            HRESULT ( STDMETHODCALLTYPE *get_final )(
            ISchemaComplexType * This,
                                SCHEMADERIVATIONMETHOD *final);
                            HRESULT ( STDMETHODCALLTYPE *get_variety )(
            ISchemaComplexType * This,
                                SCHEMATYPEVARIETY *variety);
                            HRESULT ( STDMETHODCALLTYPE *get_derivedBy )(
            ISchemaComplexType * This,
                                SCHEMADERIVATIONMETHOD *derivedBy);
                   HRESULT ( STDMETHODCALLTYPE *isValid )(
            ISchemaComplexType * This,
                       BSTR data,
                                VARIANT_BOOL *valid);
                            HRESULT ( STDMETHODCALLTYPE *get_minExclusive )(
            ISchemaComplexType * This,
                                BSTR *minExclusive);
                            HRESULT ( STDMETHODCALLTYPE *get_minInclusive )(
            ISchemaComplexType * This,
                                BSTR *minInclusive);
                            HRESULT ( STDMETHODCALLTYPE *get_maxExclusive )(
            ISchemaComplexType * This,
                                BSTR *maxExclusive);
                            HRESULT ( STDMETHODCALLTYPE *get_maxInclusive )(
            ISchemaComplexType * This,
                                BSTR *maxInclusive);
                            HRESULT ( STDMETHODCALLTYPE *get_totalDigits )(
            ISchemaComplexType * This,
                                VARIANT *totalDigits);
                            HRESULT ( STDMETHODCALLTYPE *get_fractionDigits )(
            ISchemaComplexType * This,
                                VARIANT *fractionDigits);
                            HRESULT ( STDMETHODCALLTYPE *get_length )(
            ISchemaComplexType * This,
                                VARIANT *length);
                            HRESULT ( STDMETHODCALLTYPE *get_minLength )(
            ISchemaComplexType * This,
                                VARIANT *minLength);
                            HRESULT ( STDMETHODCALLTYPE *get_maxLength )(
            ISchemaComplexType * This,
                                VARIANT *maxLength);
                            HRESULT ( STDMETHODCALLTYPE *get_enumeration )(
            ISchemaComplexType * This,
                                ISchemaStringCollection **enumeration);
                            HRESULT ( STDMETHODCALLTYPE *get_whitespace )(
            ISchemaComplexType * This,
                                SCHEMAWHITESPACE *whitespace);
                            HRESULT ( STDMETHODCALLTYPE *get_patterns )(
            ISchemaComplexType * This,
                                ISchemaStringCollection **patterns);
                            HRESULT ( STDMETHODCALLTYPE *get_isAbstract )(
            ISchemaComplexType * This,
                                VARIANT_BOOL *abstract);
                            HRESULT ( STDMETHODCALLTYPE *get_anyAttribute )(
            ISchemaComplexType * This,
                                ISchemaAny **anyAttribute);
                            HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            ISchemaComplexType * This,
                                ISchemaItemCollection **attributes);
                            HRESULT ( STDMETHODCALLTYPE *get_contentType )(
            ISchemaComplexType * This,
                                SCHEMACONTENTTYPE *contentType);
                            HRESULT ( STDMETHODCALLTYPE *get_contentModel )(
            ISchemaComplexType * This,
                                ISchemaModelGroup **contentModel);
                            HRESULT ( STDMETHODCALLTYPE *get_prohibitedSubstitutions )(
            ISchemaComplexType * This,
                                SCHEMADERIVATIONMETHOD *prohibited);
        END_INTERFACE
    } ISchemaComplexTypeVtbl;
    interface ISchemaComplexType
    {
        CONST_VTBL struct ISchemaComplexTypeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_name(This,name) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_schema(This,schema) )
    ( (This)->lpVtbl -> get_id(This,id) )
    ( (This)->lpVtbl -> get_itemType(This,itemType) )
    ( (This)->lpVtbl -> get_unhandledAttributes(This,attributes) )
    ( (This)->lpVtbl -> writeAnnotation(This,annotationSink,isWritten) )
    ( (This)->lpVtbl -> get_baseTypes(This,baseTypes) )
    ( (This)->lpVtbl -> get_final(This,final) )
    ( (This)->lpVtbl -> get_variety(This,variety) )
    ( (This)->lpVtbl -> get_derivedBy(This,derivedBy) )
    ( (This)->lpVtbl -> isValid(This,data,valid) )
    ( (This)->lpVtbl -> get_minExclusive(This,minExclusive) )
    ( (This)->lpVtbl -> get_minInclusive(This,minInclusive) )
    ( (This)->lpVtbl -> get_maxExclusive(This,maxExclusive) )
    ( (This)->lpVtbl -> get_maxInclusive(This,maxInclusive) )
    ( (This)->lpVtbl -> get_totalDigits(This,totalDigits) )
    ( (This)->lpVtbl -> get_fractionDigits(This,fractionDigits) )
    ( (This)->lpVtbl -> get_length(This,length) )
    ( (This)->lpVtbl -> get_minLength(This,minLength) )
    ( (This)->lpVtbl -> get_maxLength(This,maxLength) )
    ( (This)->lpVtbl -> get_enumeration(This,enumeration) )
    ( (This)->lpVtbl -> get_whitespace(This,whitespace) )
    ( (This)->lpVtbl -> get_patterns(This,patterns) )
    ( (This)->lpVtbl -> get_isAbstract(This,abstract) )
    ( (This)->lpVtbl -> get_anyAttribute(This,anyAttribute) )
    ( (This)->lpVtbl -> get_attributes(This,attributes) )
    ( (This)->lpVtbl -> get_contentType(This,contentType) )
    ( (This)->lpVtbl -> get_contentModel(This,contentModel) )
    ( (This)->lpVtbl -> get_prohibitedSubstitutions(This,prohibited) )
EXTERN_C const IID IID_ISchemaAttributeGroup;
    typedef struct ISchemaAttributeGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISchemaAttributeGroup * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISchemaAttributeGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISchemaAttributeGroup * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISchemaAttributeGroup * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISchemaAttributeGroup * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISchemaAttributeGroup * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISchemaAttributeGroup * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_name )(
            ISchemaAttributeGroup * This,
                                BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            ISchemaAttributeGroup * This,
                                BSTR *namespaceURI);
                            HRESULT ( STDMETHODCALLTYPE *get_schema )(
            ISchemaAttributeGroup * This,
                                ISchema **schema);
                            HRESULT ( STDMETHODCALLTYPE *get_id )(
            ISchemaAttributeGroup * This,
                                BSTR *id);
                            HRESULT ( STDMETHODCALLTYPE *get_itemType )(
            ISchemaAttributeGroup * This,
                                SOMITEMTYPE *itemType);
                            HRESULT ( STDMETHODCALLTYPE *get_unhandledAttributes )(
            ISchemaAttributeGroup * This,
                                IVBSAXAttributes **attributes);
                   HRESULT ( STDMETHODCALLTYPE *writeAnnotation )(
            ISchemaAttributeGroup * This,
                       IUnknown *annotationSink,
                                VARIANT_BOOL *isWritten);
                            HRESULT ( STDMETHODCALLTYPE *get_anyAttribute )(
            ISchemaAttributeGroup * This,
                                ISchemaAny **anyAttribute);
                            HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            ISchemaAttributeGroup * This,
                                ISchemaItemCollection **attributes);
        END_INTERFACE
    } ISchemaAttributeGroupVtbl;
    interface ISchemaAttributeGroup
    {
        CONST_VTBL struct ISchemaAttributeGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_name(This,name) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_schema(This,schema) )
    ( (This)->lpVtbl -> get_id(This,id) )
    ( (This)->lpVtbl -> get_itemType(This,itemType) )
    ( (This)->lpVtbl -> get_unhandledAttributes(This,attributes) )
    ( (This)->lpVtbl -> writeAnnotation(This,annotationSink,isWritten) )
    ( (This)->lpVtbl -> get_anyAttribute(This,anyAttribute) )
    ( (This)->lpVtbl -> get_attributes(This,attributes) )
EXTERN_C const IID IID_ISchemaModelGroup;
    typedef struct ISchemaModelGroupVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISchemaModelGroup * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISchemaModelGroup * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISchemaModelGroup * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISchemaModelGroup * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISchemaModelGroup * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISchemaModelGroup * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISchemaModelGroup * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_name )(
            ISchemaModelGroup * This,
                                BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            ISchemaModelGroup * This,
                                BSTR *namespaceURI);
                            HRESULT ( STDMETHODCALLTYPE *get_schema )(
            ISchemaModelGroup * This,
                                ISchema **schema);
                            HRESULT ( STDMETHODCALLTYPE *get_id )(
            ISchemaModelGroup * This,
                                BSTR *id);
                            HRESULT ( STDMETHODCALLTYPE *get_itemType )(
            ISchemaModelGroup * This,
                                SOMITEMTYPE *itemType);
                            HRESULT ( STDMETHODCALLTYPE *get_unhandledAttributes )(
            ISchemaModelGroup * This,
                                IVBSAXAttributes **attributes);
                   HRESULT ( STDMETHODCALLTYPE *writeAnnotation )(
            ISchemaModelGroup * This,
                       IUnknown *annotationSink,
                                VARIANT_BOOL *isWritten);
                            HRESULT ( STDMETHODCALLTYPE *get_minOccurs )(
            ISchemaModelGroup * This,
                                VARIANT *minOccurs);
                            HRESULT ( STDMETHODCALLTYPE *get_maxOccurs )(
            ISchemaModelGroup * This,
                                VARIANT *maxOccurs);
                            HRESULT ( STDMETHODCALLTYPE *get_particles )(
            ISchemaModelGroup * This,
                                ISchemaItemCollection **particles);
        END_INTERFACE
    } ISchemaModelGroupVtbl;
    interface ISchemaModelGroup
    {
        CONST_VTBL struct ISchemaModelGroupVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_name(This,name) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_schema(This,schema) )
    ( (This)->lpVtbl -> get_id(This,id) )
    ( (This)->lpVtbl -> get_itemType(This,itemType) )
    ( (This)->lpVtbl -> get_unhandledAttributes(This,attributes) )
    ( (This)->lpVtbl -> writeAnnotation(This,annotationSink,isWritten) )
    ( (This)->lpVtbl -> get_minOccurs(This,minOccurs) )
    ( (This)->lpVtbl -> get_maxOccurs(This,maxOccurs) )
    ( (This)->lpVtbl -> get_particles(This,particles) )
EXTERN_C const IID IID_ISchemaAny;
    typedef struct ISchemaAnyVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISchemaAny * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISchemaAny * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISchemaAny * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISchemaAny * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISchemaAny * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISchemaAny * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISchemaAny * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_name )(
            ISchemaAny * This,
                                BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            ISchemaAny * This,
                                BSTR *namespaceURI);
                            HRESULT ( STDMETHODCALLTYPE *get_schema )(
            ISchemaAny * This,
                                ISchema **schema);
                            HRESULT ( STDMETHODCALLTYPE *get_id )(
            ISchemaAny * This,
                                BSTR *id);
                            HRESULT ( STDMETHODCALLTYPE *get_itemType )(
            ISchemaAny * This,
                                SOMITEMTYPE *itemType);
                            HRESULT ( STDMETHODCALLTYPE *get_unhandledAttributes )(
            ISchemaAny * This,
                                IVBSAXAttributes **attributes);
                   HRESULT ( STDMETHODCALLTYPE *writeAnnotation )(
            ISchemaAny * This,
                       IUnknown *annotationSink,
                                VARIANT_BOOL *isWritten);
                            HRESULT ( STDMETHODCALLTYPE *get_minOccurs )(
            ISchemaAny * This,
                                VARIANT *minOccurs);
                            HRESULT ( STDMETHODCALLTYPE *get_maxOccurs )(
            ISchemaAny * This,
                                VARIANT *maxOccurs);
                            HRESULT ( STDMETHODCALLTYPE *get_namespaces )(
            ISchemaAny * This,
                                ISchemaStringCollection **namespaces);
                            HRESULT ( STDMETHODCALLTYPE *get_processContents )(
            ISchemaAny * This,
                                SCHEMAPROCESSCONTENTS *processContents);
        END_INTERFACE
    } ISchemaAnyVtbl;
    interface ISchemaAny
    {
        CONST_VTBL struct ISchemaAnyVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_name(This,name) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_schema(This,schema) )
    ( (This)->lpVtbl -> get_id(This,id) )
    ( (This)->lpVtbl -> get_itemType(This,itemType) )
    ( (This)->lpVtbl -> get_unhandledAttributes(This,attributes) )
    ( (This)->lpVtbl -> writeAnnotation(This,annotationSink,isWritten) )
    ( (This)->lpVtbl -> get_minOccurs(This,minOccurs) )
    ( (This)->lpVtbl -> get_maxOccurs(This,maxOccurs) )
    ( (This)->lpVtbl -> get_namespaces(This,namespaces) )
    ( (This)->lpVtbl -> get_processContents(This,processContents) )
EXTERN_C const IID IID_ISchemaIdentityConstraint;
    typedef struct ISchemaIdentityConstraintVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISchemaIdentityConstraint * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISchemaIdentityConstraint * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISchemaIdentityConstraint * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISchemaIdentityConstraint * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISchemaIdentityConstraint * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISchemaIdentityConstraint * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISchemaIdentityConstraint * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_name )(
            ISchemaIdentityConstraint * This,
                                BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            ISchemaIdentityConstraint * This,
                                BSTR *namespaceURI);
                            HRESULT ( STDMETHODCALLTYPE *get_schema )(
            ISchemaIdentityConstraint * This,
                                ISchema **schema);
                            HRESULT ( STDMETHODCALLTYPE *get_id )(
            ISchemaIdentityConstraint * This,
                                BSTR *id);
                            HRESULT ( STDMETHODCALLTYPE *get_itemType )(
            ISchemaIdentityConstraint * This,
                                SOMITEMTYPE *itemType);
                            HRESULT ( STDMETHODCALLTYPE *get_unhandledAttributes )(
            ISchemaIdentityConstraint * This,
                                IVBSAXAttributes **attributes);
                   HRESULT ( STDMETHODCALLTYPE *writeAnnotation )(
            ISchemaIdentityConstraint * This,
                       IUnknown *annotationSink,
                                VARIANT_BOOL *isWritten);
                            HRESULT ( STDMETHODCALLTYPE *get_selector )(
            ISchemaIdentityConstraint * This,
                                BSTR *selector);
                            HRESULT ( STDMETHODCALLTYPE *get_fields )(
            ISchemaIdentityConstraint * This,
                                ISchemaStringCollection **fields);
                            HRESULT ( STDMETHODCALLTYPE *get_referencedKey )(
            ISchemaIdentityConstraint * This,
                                ISchemaIdentityConstraint **key);
        END_INTERFACE
    } ISchemaIdentityConstraintVtbl;
    interface ISchemaIdentityConstraint
    {
        CONST_VTBL struct ISchemaIdentityConstraintVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_name(This,name) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_schema(This,schema) )
    ( (This)->lpVtbl -> get_id(This,id) )
    ( (This)->lpVtbl -> get_itemType(This,itemType) )
    ( (This)->lpVtbl -> get_unhandledAttributes(This,attributes) )
    ( (This)->lpVtbl -> writeAnnotation(This,annotationSink,isWritten) )
    ( (This)->lpVtbl -> get_selector(This,selector) )
    ( (This)->lpVtbl -> get_fields(This,fields) )
    ( (This)->lpVtbl -> get_referencedKey(This,key) )
EXTERN_C const IID IID_ISchemaNotation;
    typedef struct ISchemaNotationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISchemaNotation * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISchemaNotation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISchemaNotation * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            ISchemaNotation * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            ISchemaNotation * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            ISchemaNotation * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            ISchemaNotation * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_name )(
            ISchemaNotation * This,
                                BSTR *name);
                            HRESULT ( STDMETHODCALLTYPE *get_namespaceURI )(
            ISchemaNotation * This,
                                BSTR *namespaceURI);
                            HRESULT ( STDMETHODCALLTYPE *get_schema )(
            ISchemaNotation * This,
                                ISchema **schema);
                            HRESULT ( STDMETHODCALLTYPE *get_id )(
            ISchemaNotation * This,
                                BSTR *id);
                            HRESULT ( STDMETHODCALLTYPE *get_itemType )(
            ISchemaNotation * This,
                                SOMITEMTYPE *itemType);
                            HRESULT ( STDMETHODCALLTYPE *get_unhandledAttributes )(
            ISchemaNotation * This,
                                IVBSAXAttributes **attributes);
                   HRESULT ( STDMETHODCALLTYPE *writeAnnotation )(
            ISchemaNotation * This,
                       IUnknown *annotationSink,
                                VARIANT_BOOL *isWritten);
                            HRESULT ( STDMETHODCALLTYPE *get_systemIdentifier )(
            ISchemaNotation * This,
                                BSTR *uri);
                            HRESULT ( STDMETHODCALLTYPE *get_publicIdentifier )(
            ISchemaNotation * This,
                                BSTR *uri);
        END_INTERFACE
    } ISchemaNotationVtbl;
    interface ISchemaNotation
    {
        CONST_VTBL struct ISchemaNotationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_name(This,name) )
    ( (This)->lpVtbl -> get_namespaceURI(This,namespaceURI) )
    ( (This)->lpVtbl -> get_schema(This,schema) )
    ( (This)->lpVtbl -> get_id(This,id) )
    ( (This)->lpVtbl -> get_itemType(This,itemType) )
    ( (This)->lpVtbl -> get_unhandledAttributes(This,attributes) )
    ( (This)->lpVtbl -> writeAnnotation(This,annotationSink,isWritten) )
    ( (This)->lpVtbl -> get_systemIdentifier(This,uri) )
    ( (This)->lpVtbl -> get_publicIdentifier(This,uri) )
EXTERN_C const IID IID_IXMLElementCollection;
    typedef struct IXMLElementCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLElementCollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLElementCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLElementCollection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLElementCollection * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLElementCollection * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLElementCollection * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLElementCollection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                                HRESULT ( STDMETHODCALLTYPE *put_length )(
            IXMLElementCollection * This,
                       long v);
                                        HRESULT ( STDMETHODCALLTYPE *get_length )(
            IXMLElementCollection * This,
                                long *p);
                                                HRESULT ( STDMETHODCALLTYPE *get__newEnum )(
            IXMLElementCollection * This,
                                IUnknown **ppUnk);
                               HRESULT ( STDMETHODCALLTYPE *item )(
            IXMLElementCollection * This,
                                 VARIANT var1,
                                 VARIANT var2,
                                IDispatch **ppDisp);
        END_INTERFACE
    } IXMLElementCollectionVtbl;
    interface IXMLElementCollection
    {
        CONST_VTBL struct IXMLElementCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_length(This,v) )
    ( (This)->lpVtbl -> get_length(This,p) )
    ( (This)->lpVtbl -> get__newEnum(This,ppUnk) )
    ( (This)->lpVtbl -> item(This,var1,var2,ppDisp) )
EXTERN_C const IID IID_IXMLDocument;
    typedef struct IXMLDocumentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDocument * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDocument * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDocument * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDocument * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDocument * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDocument * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDocument * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_root )(
            IXMLDocument * This,
                                IXMLElement **p);
                                                HRESULT ( STDMETHODCALLTYPE *get_fileSize )(
            IXMLDocument * This,
                                BSTR *p);
                                                HRESULT ( STDMETHODCALLTYPE *get_fileModifiedDate )(
            IXMLDocument * This,
                                BSTR *p);
                                                HRESULT ( STDMETHODCALLTYPE *get_fileUpdatedDate )(
            IXMLDocument * This,
                                BSTR *p);
                                        HRESULT ( STDMETHODCALLTYPE *get_URL )(
            IXMLDocument * This,
                                BSTR *p);
                                        HRESULT ( STDMETHODCALLTYPE *put_URL )(
            IXMLDocument * This,
                       BSTR p);
                                                HRESULT ( STDMETHODCALLTYPE *get_mimeType )(
            IXMLDocument * This,
                                BSTR *p);
                                        HRESULT ( STDMETHODCALLTYPE *get_readyState )(
            IXMLDocument * This,
                                long *pl);
                                        HRESULT ( STDMETHODCALLTYPE *get_charset )(
            IXMLDocument * This,
                                BSTR *p);
                                        HRESULT ( STDMETHODCALLTYPE *put_charset )(
            IXMLDocument * This,
                       BSTR p);
                                        HRESULT ( STDMETHODCALLTYPE *get_version )(
            IXMLDocument * This,
                                BSTR *p);
                                        HRESULT ( STDMETHODCALLTYPE *get_doctype )(
            IXMLDocument * This,
                                BSTR *p);
                                                HRESULT ( STDMETHODCALLTYPE *get_dtdURL )(
            IXMLDocument * This,
                                BSTR *p);
                               HRESULT ( STDMETHODCALLTYPE *createElement )(
            IXMLDocument * This,
                       VARIANT vType,
                                 VARIANT var1,
                                IXMLElement **ppElem);
        END_INTERFACE
    } IXMLDocumentVtbl;
    interface IXMLDocument
    {
        CONST_VTBL struct IXMLDocumentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_root(This,p) )
    ( (This)->lpVtbl -> get_fileSize(This,p) )
    ( (This)->lpVtbl -> get_fileModifiedDate(This,p) )
    ( (This)->lpVtbl -> get_fileUpdatedDate(This,p) )
    ( (This)->lpVtbl -> get_URL(This,p) )
    ( (This)->lpVtbl -> put_URL(This,p) )
    ( (This)->lpVtbl -> get_mimeType(This,p) )
    ( (This)->lpVtbl -> get_readyState(This,pl) )
    ( (This)->lpVtbl -> get_charset(This,p) )
    ( (This)->lpVtbl -> put_charset(This,p) )
    ( (This)->lpVtbl -> get_version(This,p) )
    ( (This)->lpVtbl -> get_doctype(This,p) )
    ( (This)->lpVtbl -> get_dtdURL(This,p) )
    ( (This)->lpVtbl -> createElement(This,vType,var1,ppElem) )
EXTERN_C const IID IID_IXMLDocument2;
    typedef struct IXMLDocument2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDocument2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDocument2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDocument2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDocument2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDocument2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDocument2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDocument2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_root )(
            IXMLDocument2 * This,
                                IXMLElement2 **p);
                                                HRESULT ( STDMETHODCALLTYPE *get_fileSize )(
            IXMLDocument2 * This,
                                BSTR *p);
                                                HRESULT ( STDMETHODCALLTYPE *get_fileModifiedDate )(
            IXMLDocument2 * This,
                                BSTR *p);
                                                HRESULT ( STDMETHODCALLTYPE *get_fileUpdatedDate )(
            IXMLDocument2 * This,
                                BSTR *p);
                                        HRESULT ( STDMETHODCALLTYPE *get_URL )(
            IXMLDocument2 * This,
                                BSTR *p);
                                        HRESULT ( STDMETHODCALLTYPE *put_URL )(
            IXMLDocument2 * This,
                       BSTR p);
                                                HRESULT ( STDMETHODCALLTYPE *get_mimeType )(
            IXMLDocument2 * This,
                                BSTR *p);
                                        HRESULT ( STDMETHODCALLTYPE *get_readyState )(
            IXMLDocument2 * This,
                                long *pl);
                                        HRESULT ( STDMETHODCALLTYPE *get_charset )(
            IXMLDocument2 * This,
                                BSTR *p);
                                        HRESULT ( STDMETHODCALLTYPE *put_charset )(
            IXMLDocument2 * This,
                       BSTR p);
                                        HRESULT ( STDMETHODCALLTYPE *get_version )(
            IXMLDocument2 * This,
                                BSTR *p);
                                        HRESULT ( STDMETHODCALLTYPE *get_doctype )(
            IXMLDocument2 * This,
                                BSTR *p);
                                                HRESULT ( STDMETHODCALLTYPE *get_dtdURL )(
            IXMLDocument2 * This,
                                BSTR *p);
                               HRESULT ( STDMETHODCALLTYPE *createElement )(
            IXMLDocument2 * This,
                       VARIANT vType,
                                 VARIANT var1,
                                IXMLElement2 **ppElem);
                                        HRESULT ( STDMETHODCALLTYPE *get_async )(
            IXMLDocument2 * This,
                                VARIANT_BOOL *pf);
                                        HRESULT ( STDMETHODCALLTYPE *put_async )(
            IXMLDocument2 * This,
                       VARIANT_BOOL f);
        END_INTERFACE
    } IXMLDocument2Vtbl;
    interface IXMLDocument2
    {
        CONST_VTBL struct IXMLDocument2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_root(This,p) )
    ( (This)->lpVtbl -> get_fileSize(This,p) )
    ( (This)->lpVtbl -> get_fileModifiedDate(This,p) )
    ( (This)->lpVtbl -> get_fileUpdatedDate(This,p) )
    ( (This)->lpVtbl -> get_URL(This,p) )
    ( (This)->lpVtbl -> put_URL(This,p) )
    ( (This)->lpVtbl -> get_mimeType(This,p) )
    ( (This)->lpVtbl -> get_readyState(This,pl) )
    ( (This)->lpVtbl -> get_charset(This,p) )
    ( (This)->lpVtbl -> put_charset(This,p) )
    ( (This)->lpVtbl -> get_version(This,p) )
    ( (This)->lpVtbl -> get_doctype(This,p) )
    ( (This)->lpVtbl -> get_dtdURL(This,p) )
    ( (This)->lpVtbl -> createElement(This,vType,var1,ppElem) )
    ( (This)->lpVtbl -> get_async(This,pf) )
    ( (This)->lpVtbl -> put_async(This,f) )
EXTERN_C const IID IID_IXMLElement;
    typedef struct IXMLElementVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLElement * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLElement * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLElement * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLElement * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLElement * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLElement * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLElement * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_tagName )(
            IXMLElement * This,
                                BSTR *p);
                                        HRESULT ( STDMETHODCALLTYPE *put_tagName )(
            IXMLElement * This,
                       BSTR p);
                                        HRESULT ( STDMETHODCALLTYPE *get_parent )(
            IXMLElement * This,
                                IXMLElement **ppParent);
                               HRESULT ( STDMETHODCALLTYPE *setAttribute )(
            IXMLElement * This,
                       BSTR strPropertyName,
                       VARIANT PropertyValue);
                               HRESULT ( STDMETHODCALLTYPE *getAttribute )(
            IXMLElement * This,
                       BSTR strPropertyName,
                                VARIANT *PropertyValue);
                               HRESULT ( STDMETHODCALLTYPE *removeAttribute )(
            IXMLElement * This,
                       BSTR strPropertyName);
                                        HRESULT ( STDMETHODCALLTYPE *get_children )(
            IXMLElement * This,
                                IXMLElementCollection **pp);
                                        HRESULT ( STDMETHODCALLTYPE *get_type )(
            IXMLElement * This,
                                long *plType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXMLElement * This,
                                BSTR *p);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXMLElement * This,
                       BSTR p);
                               HRESULT ( STDMETHODCALLTYPE *addChild )(
            IXMLElement * This,
                       IXMLElement *pChildElem,
            long lIndex,
            long lReserved);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXMLElement * This,
                       IXMLElement *pChildElem);
        END_INTERFACE
    } IXMLElementVtbl;
    interface IXMLElement
    {
        CONST_VTBL struct IXMLElementVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_tagName(This,p) )
    ( (This)->lpVtbl -> put_tagName(This,p) )
    ( (This)->lpVtbl -> get_parent(This,ppParent) )
    ( (This)->lpVtbl -> setAttribute(This,strPropertyName,PropertyValue) )
    ( (This)->lpVtbl -> getAttribute(This,strPropertyName,PropertyValue) )
    ( (This)->lpVtbl -> removeAttribute(This,strPropertyName) )
    ( (This)->lpVtbl -> get_children(This,pp) )
    ( (This)->lpVtbl -> get_type(This,plType) )
    ( (This)->lpVtbl -> get_text(This,p) )
    ( (This)->lpVtbl -> put_text(This,p) )
    ( (This)->lpVtbl -> addChild(This,pChildElem,lIndex,lReserved) )
    ( (This)->lpVtbl -> removeChild(This,pChildElem) )
EXTERN_C const IID IID_IXMLElement2;
    typedef struct IXMLElement2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLElement2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLElement2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLElement2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLElement2 * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLElement2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLElement2 * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLElement2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_tagName )(
            IXMLElement2 * This,
                                BSTR *p);
                                        HRESULT ( STDMETHODCALLTYPE *put_tagName )(
            IXMLElement2 * This,
                       BSTR p);
                                        HRESULT ( STDMETHODCALLTYPE *get_parent )(
            IXMLElement2 * This,
                                IXMLElement2 **ppParent);
                               HRESULT ( STDMETHODCALLTYPE *setAttribute )(
            IXMLElement2 * This,
                       BSTR strPropertyName,
                       VARIANT PropertyValue);
                               HRESULT ( STDMETHODCALLTYPE *getAttribute )(
            IXMLElement2 * This,
                       BSTR strPropertyName,
                                VARIANT *PropertyValue);
                               HRESULT ( STDMETHODCALLTYPE *removeAttribute )(
            IXMLElement2 * This,
                       BSTR strPropertyName);
                                        HRESULT ( STDMETHODCALLTYPE *get_children )(
            IXMLElement2 * This,
                                IXMLElementCollection **pp);
                                        HRESULT ( STDMETHODCALLTYPE *get_type )(
            IXMLElement2 * This,
                                long *plType);
                                        HRESULT ( STDMETHODCALLTYPE *get_text )(
            IXMLElement2 * This,
                                BSTR *p);
                                        HRESULT ( STDMETHODCALLTYPE *put_text )(
            IXMLElement2 * This,
                       BSTR p);
                               HRESULT ( STDMETHODCALLTYPE *addChild )(
            IXMLElement2 * This,
                       IXMLElement2 *pChildElem,
            long lIndex,
            long lReserved);
                               HRESULT ( STDMETHODCALLTYPE *removeChild )(
            IXMLElement2 * This,
                       IXMLElement2 *pChildElem);
                                        HRESULT ( STDMETHODCALLTYPE *get_attributes )(
            IXMLElement2 * This,
                                IXMLElementCollection **pp);
        END_INTERFACE
    } IXMLElement2Vtbl;
    interface IXMLElement2
    {
        CONST_VTBL struct IXMLElement2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_tagName(This,p) )
    ( (This)->lpVtbl -> put_tagName(This,p) )
    ( (This)->lpVtbl -> get_parent(This,ppParent) )
    ( (This)->lpVtbl -> setAttribute(This,strPropertyName,PropertyValue) )
    ( (This)->lpVtbl -> getAttribute(This,strPropertyName,PropertyValue) )
    ( (This)->lpVtbl -> removeAttribute(This,strPropertyName) )
    ( (This)->lpVtbl -> get_children(This,pp) )
    ( (This)->lpVtbl -> get_type(This,plType) )
    ( (This)->lpVtbl -> get_text(This,p) )
    ( (This)->lpVtbl -> put_text(This,p) )
    ( (This)->lpVtbl -> addChild(This,pChildElem,lIndex,lReserved) )
    ( (This)->lpVtbl -> removeChild(This,pChildElem) )
    ( (This)->lpVtbl -> get_attributes(This,pp) )
EXTERN_C const IID IID_IXMLAttribute;
    typedef struct IXMLAttributeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLAttribute * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLAttribute * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLAttribute * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLAttribute * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLAttribute * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLAttribute * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLAttribute * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_name )(
            IXMLAttribute * This,
                                BSTR *n);
                                        HRESULT ( STDMETHODCALLTYPE *get_value )(
            IXMLAttribute * This,
                                BSTR *v);
        END_INTERFACE
    } IXMLAttributeVtbl;
    interface IXMLAttribute
    {
        CONST_VTBL struct IXMLAttributeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_name(This,n) )
    ( (This)->lpVtbl -> get_value(This,v) )
EXTERN_C const IID IID_IXMLError;
    typedef struct IXMLErrorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLError * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLError * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLError * This);
        HRESULT ( STDMETHODCALLTYPE *GetErrorInfo )(
            IXMLError * This,
            XML_ERROR *pErrorReturn);
        END_INTERFACE
    } IXMLErrorVtbl;
    interface IXMLError
    {
        CONST_VTBL struct IXMLErrorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetErrorInfo(This,pErrorReturn) )
EXTERN_C const IID IID_IXMLDOMSelection;
    typedef struct IXMLDOMSelectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDOMSelection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDOMSelection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDOMSelection * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDOMSelection * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDOMSelection * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDOMSelection * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDOMSelection * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                                        HRESULT ( STDMETHODCALLTYPE *get_item )(
            IXMLDOMSelection * This,
                       long index,
                                IXMLDOMNode **listItem);
                                        HRESULT ( STDMETHODCALLTYPE *get_length )(
            IXMLDOMSelection * This,
                                long *listLength);
                               HRESULT ( STDMETHODCALLTYPE *nextNode )(
            IXMLDOMSelection * This,
                                IXMLDOMNode **nextItem);
                               HRESULT ( STDMETHODCALLTYPE *reset )(
            IXMLDOMSelection * This);
                                                HRESULT ( STDMETHODCALLTYPE *get__newEnum )(
            IXMLDOMSelection * This,
                                IUnknown **ppUnk);
                                        HRESULT ( STDMETHODCALLTYPE *get_expr )(
            IXMLDOMSelection * This,
                                BSTR *expression);
                                        HRESULT ( STDMETHODCALLTYPE *put_expr )(
            IXMLDOMSelection * This,
                       BSTR expression);
                                        HRESULT ( STDMETHODCALLTYPE *get_context )(
            IXMLDOMSelection * This,
                                IXMLDOMNode **ppNode);
                                           HRESULT ( STDMETHODCALLTYPE *putref_context )(
            IXMLDOMSelection * This,
                       IXMLDOMNode *pNode);
                               HRESULT ( STDMETHODCALLTYPE *peekNode )(
            IXMLDOMSelection * This,
                                IXMLDOMNode **ppNode);
                               HRESULT ( STDMETHODCALLTYPE *matches )(
            IXMLDOMSelection * This,
                       IXMLDOMNode *pNode,
                                IXMLDOMNode **ppNode);
                               HRESULT ( STDMETHODCALLTYPE *removeNext )(
            IXMLDOMSelection * This,
                                IXMLDOMNode **ppNode);
                               HRESULT ( STDMETHODCALLTYPE *removeAll )(
            IXMLDOMSelection * This);
                               HRESULT ( STDMETHODCALLTYPE *clone )(
            IXMLDOMSelection * This,
                                IXMLDOMSelection **ppNode);
                               HRESULT ( STDMETHODCALLTYPE *getProperty )(
            IXMLDOMSelection * This,
                       BSTR name,
                                VARIANT *value);
                               HRESULT ( STDMETHODCALLTYPE *setProperty )(
            IXMLDOMSelection * This,
                       BSTR name,
                       VARIANT value);
        END_INTERFACE
    } IXMLDOMSelectionVtbl;
    interface IXMLDOMSelection
    {
        CONST_VTBL struct IXMLDOMSelectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_item(This,index,listItem) )
    ( (This)->lpVtbl -> get_length(This,listLength) )
    ( (This)->lpVtbl -> nextNode(This,nextItem) )
    ( (This)->lpVtbl -> reset(This) )
    ( (This)->lpVtbl -> get__newEnum(This,ppUnk) )
    ( (This)->lpVtbl -> get_expr(This,expression) )
    ( (This)->lpVtbl -> put_expr(This,expression) )
    ( (This)->lpVtbl -> get_context(This,ppNode) )
    ( (This)->lpVtbl -> putref_context(This,pNode) )
    ( (This)->lpVtbl -> peekNode(This,ppNode) )
    ( (This)->lpVtbl -> matches(This,pNode,ppNode) )
    ( (This)->lpVtbl -> removeNext(This,ppNode) )
    ( (This)->lpVtbl -> removeAll(This) )
    ( (This)->lpVtbl -> clone(This,ppNode) )
    ( (This)->lpVtbl -> getProperty(This,name,value) )
    ( (This)->lpVtbl -> setProperty(This,name,value) )
EXTERN_C const IID DIID_XMLDOMDocumentEvents;
    typedef struct XMLDOMDocumentEventsVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in XMLDOMDocumentEvents * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in XMLDOMDocumentEvents * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in XMLDOMDocumentEvents * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in XMLDOMDocumentEvents * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in XMLDOMDocumentEvents * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in XMLDOMDocumentEvents * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            XMLDOMDocumentEvents * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
        END_INTERFACE
    } XMLDOMDocumentEventsVtbl;
    interface XMLDOMDocumentEvents
    {
        CONST_VTBL struct XMLDOMDocumentEventsVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
EXTERN_C const IID IID_IDSOControl;
    typedef struct IDSOControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IDSOControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IDSOControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IDSOControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IDSOControl * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IDSOControl * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IDSOControl * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IDSOControl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_XMLDocument )(
            IDSOControl * This,
                                IXMLDOMDocument **ppDoc);
                            HRESULT ( STDMETHODCALLTYPE *put_XMLDocument )(
            IDSOControl * This,
                       IXMLDOMDocument *ppDoc);
                            HRESULT ( STDMETHODCALLTYPE *get_JavaDSOCompatible )(
            IDSOControl * This,
                                BOOL *fJavaDSOCompatible);
                            HRESULT ( STDMETHODCALLTYPE *put_JavaDSOCompatible )(
            IDSOControl * This,
                       BOOL fJavaDSOCompatible);
                            HRESULT ( STDMETHODCALLTYPE *get_readyState )(
            IDSOControl * This,
                                long *state);
        END_INTERFACE
    } IDSOControlVtbl;
    interface IDSOControl
    {
        CONST_VTBL struct IDSOControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_XMLDocument(This,ppDoc) )
    ( (This)->lpVtbl -> put_XMLDocument(This,ppDoc) )
    ( (This)->lpVtbl -> get_JavaDSOCompatible(This,fJavaDSOCompatible) )
    ( (This)->lpVtbl -> put_JavaDSOCompatible(This,fJavaDSOCompatible) )
    ( (This)->lpVtbl -> get_readyState(This,state) )
EXTERN_C const IID IID_IXMLHTTPRequest;
    typedef struct IXMLHTTPRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXMLHTTPRequest * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXMLHTTPRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXMLHTTPRequest * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IXMLHTTPRequest * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IXMLHTTPRequest * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IXMLHTTPRequest * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLHTTPRequest * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *open )(
            __RPC__in IXMLHTTPRequest * This,
                       __RPC__in BSTR bstrMethod,
                       __RPC__in BSTR bstrUrl,
                                 VARIANT varAsync,
                                 VARIANT bstrUser,
                                 VARIANT bstrPassword);
                               HRESULT ( STDMETHODCALLTYPE *setRequestHeader )(
            __RPC__in IXMLHTTPRequest * This,
                       __RPC__in BSTR bstrHeader,
                       __RPC__in BSTR bstrValue);
                               HRESULT ( STDMETHODCALLTYPE *getResponseHeader )(
            __RPC__in IXMLHTTPRequest * This,
                       __RPC__in BSTR bstrHeader,
                                __RPC__deref_out_opt BSTR *pbstrValue);
                               HRESULT ( STDMETHODCALLTYPE *getAllResponseHeaders )(
            __RPC__in IXMLHTTPRequest * This,
                                __RPC__deref_out_opt BSTR *pbstrHeaders);
                               HRESULT ( STDMETHODCALLTYPE *send )(
            __RPC__in IXMLHTTPRequest * This,
                                 VARIANT varBody);
                               HRESULT ( STDMETHODCALLTYPE *abort )(
            __RPC__in IXMLHTTPRequest * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_status )(
            __RPC__in IXMLHTTPRequest * This,
                                __RPC__out long *plStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_statusText )(
            __RPC__in IXMLHTTPRequest * This,
                                __RPC__deref_out_opt BSTR *pbstrStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_responseXML )(
            __RPC__in IXMLHTTPRequest * This,
                                __RPC__deref_out_opt IDispatch **ppBody);
                                        HRESULT ( STDMETHODCALLTYPE *get_responseText )(
            __RPC__in IXMLHTTPRequest * This,
                                __RPC__deref_out_opt BSTR *pbstrBody);
                                        HRESULT ( STDMETHODCALLTYPE *get_responseBody )(
            __RPC__in IXMLHTTPRequest * This,
                                __RPC__out VARIANT *pvarBody);
                                        HRESULT ( STDMETHODCALLTYPE *get_responseStream )(
            __RPC__in IXMLHTTPRequest * This,
                                __RPC__out VARIANT *pvarBody);
                                        HRESULT ( STDMETHODCALLTYPE *get_readyState )(
            __RPC__in IXMLHTTPRequest * This,
                                __RPC__out long *plState);
                                        HRESULT ( STDMETHODCALLTYPE *put_onreadystatechange )(
            __RPC__in IXMLHTTPRequest * This,
                       __RPC__in_opt IDispatch *pReadyStateSink);
        END_INTERFACE
    } IXMLHTTPRequestVtbl;
    interface IXMLHTTPRequest
    {
        CONST_VTBL struct IXMLHTTPRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> open(This,bstrMethod,bstrUrl,varAsync,bstrUser,bstrPassword) )
    ( (This)->lpVtbl -> setRequestHeader(This,bstrHeader,bstrValue) )
    ( (This)->lpVtbl -> getResponseHeader(This,bstrHeader,pbstrValue) )
    ( (This)->lpVtbl -> getAllResponseHeaders(This,pbstrHeaders) )
    ( (This)->lpVtbl -> send(This,varBody) )
    ( (This)->lpVtbl -> abort(This) )
    ( (This)->lpVtbl -> get_status(This,plStatus) )
    ( (This)->lpVtbl -> get_statusText(This,pbstrStatus) )
    ( (This)->lpVtbl -> get_responseXML(This,ppBody) )
    ( (This)->lpVtbl -> get_responseText(This,pbstrBody) )
    ( (This)->lpVtbl -> get_responseBody(This,pvarBody) )
    ( (This)->lpVtbl -> get_responseStream(This,pvarBody) )
    ( (This)->lpVtbl -> get_readyState(This,plState) )
    ( (This)->lpVtbl -> put_onreadystatechange(This,pReadyStateSink) )
EXTERN_C const IID IID_IServerXMLHTTPRequest;
    typedef struct IServerXMLHTTPRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IServerXMLHTTPRequest * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IServerXMLHTTPRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IServerXMLHTTPRequest * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IServerXMLHTTPRequest * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IServerXMLHTTPRequest * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IServerXMLHTTPRequest * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IServerXMLHTTPRequest * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *open )(
            __RPC__in IServerXMLHTTPRequest * This,
                       __RPC__in BSTR bstrMethod,
                       __RPC__in BSTR bstrUrl,
                                 VARIANT varAsync,
                                 VARIANT bstrUser,
                                 VARIANT bstrPassword);
                               HRESULT ( STDMETHODCALLTYPE *setRequestHeader )(
            __RPC__in IServerXMLHTTPRequest * This,
                       __RPC__in BSTR bstrHeader,
                       __RPC__in BSTR bstrValue);
                               HRESULT ( STDMETHODCALLTYPE *getResponseHeader )(
            __RPC__in IServerXMLHTTPRequest * This,
                       __RPC__in BSTR bstrHeader,
                                __RPC__deref_out_opt BSTR *pbstrValue);
                               HRESULT ( STDMETHODCALLTYPE *getAllResponseHeaders )(
            __RPC__in IServerXMLHTTPRequest * This,
                                __RPC__deref_out_opt BSTR *pbstrHeaders);
                               HRESULT ( STDMETHODCALLTYPE *send )(
            __RPC__in IServerXMLHTTPRequest * This,
                                 VARIANT varBody);
                               HRESULT ( STDMETHODCALLTYPE *abort )(
            __RPC__in IServerXMLHTTPRequest * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_status )(
            __RPC__in IServerXMLHTTPRequest * This,
                                __RPC__out long *plStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_statusText )(
            __RPC__in IServerXMLHTTPRequest * This,
                                __RPC__deref_out_opt BSTR *pbstrStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_responseXML )(
            __RPC__in IServerXMLHTTPRequest * This,
                                __RPC__deref_out_opt IDispatch **ppBody);
                                        HRESULT ( STDMETHODCALLTYPE *get_responseText )(
            __RPC__in IServerXMLHTTPRequest * This,
                                __RPC__deref_out_opt BSTR *pbstrBody);
                                        HRESULT ( STDMETHODCALLTYPE *get_responseBody )(
            __RPC__in IServerXMLHTTPRequest * This,
                                __RPC__out VARIANT *pvarBody);
                                        HRESULT ( STDMETHODCALLTYPE *get_responseStream )(
            __RPC__in IServerXMLHTTPRequest * This,
                                __RPC__out VARIANT *pvarBody);
                                        HRESULT ( STDMETHODCALLTYPE *get_readyState )(
            __RPC__in IServerXMLHTTPRequest * This,
                                __RPC__out long *plState);
                                        HRESULT ( STDMETHODCALLTYPE *put_onreadystatechange )(
            __RPC__in IServerXMLHTTPRequest * This,
                       __RPC__in_opt IDispatch *pReadyStateSink);
                               HRESULT ( STDMETHODCALLTYPE *setTimeouts )(
            __RPC__in IServerXMLHTTPRequest * This,
                       long resolveTimeout,
                       long connectTimeout,
                       long sendTimeout,
                       long receiveTimeout);
                               HRESULT ( STDMETHODCALLTYPE *waitForResponse )(
            __RPC__in IServerXMLHTTPRequest * This,
                                 VARIANT timeoutInSeconds,
                                __RPC__out VARIANT_BOOL *isSuccessful);
                               HRESULT ( STDMETHODCALLTYPE *getOption )(
            __RPC__in IServerXMLHTTPRequest * This,
                       SERVERXMLHTTP_OPTION option,
                                __RPC__out VARIANT *value);
                               HRESULT ( STDMETHODCALLTYPE *setOption )(
            __RPC__in IServerXMLHTTPRequest * This,
                       SERVERXMLHTTP_OPTION option,
                       VARIANT value);
        END_INTERFACE
    } IServerXMLHTTPRequestVtbl;
    interface IServerXMLHTTPRequest
    {
        CONST_VTBL struct IServerXMLHTTPRequestVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> open(This,bstrMethod,bstrUrl,varAsync,bstrUser,bstrPassword) )
    ( (This)->lpVtbl -> setRequestHeader(This,bstrHeader,bstrValue) )
    ( (This)->lpVtbl -> getResponseHeader(This,bstrHeader,pbstrValue) )
    ( (This)->lpVtbl -> getAllResponseHeaders(This,pbstrHeaders) )
    ( (This)->lpVtbl -> send(This,varBody) )
    ( (This)->lpVtbl -> abort(This) )
    ( (This)->lpVtbl -> get_status(This,plStatus) )
    ( (This)->lpVtbl -> get_statusText(This,pbstrStatus) )
    ( (This)->lpVtbl -> get_responseXML(This,ppBody) )
    ( (This)->lpVtbl -> get_responseText(This,pbstrBody) )
    ( (This)->lpVtbl -> get_responseBody(This,pvarBody) )
    ( (This)->lpVtbl -> get_responseStream(This,pvarBody) )
    ( (This)->lpVtbl -> get_readyState(This,plState) )
    ( (This)->lpVtbl -> put_onreadystatechange(This,pReadyStateSink) )
    ( (This)->lpVtbl -> setTimeouts(This,resolveTimeout,connectTimeout,sendTimeout,receiveTimeout) )
    ( (This)->lpVtbl -> waitForResponse(This,timeoutInSeconds,isSuccessful) )
    ( (This)->lpVtbl -> getOption(This,option,value) )
    ( (This)->lpVtbl -> setOption(This,option,value) )
EXTERN_C const IID IID_IServerXMLHTTPRequest2;
    typedef struct IServerXMLHTTPRequest2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IServerXMLHTTPRequest2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IServerXMLHTTPRequest2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IServerXMLHTTPRequest2 * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *open )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                       __RPC__in BSTR bstrMethod,
                       __RPC__in BSTR bstrUrl,
                                 VARIANT varAsync,
                                 VARIANT bstrUser,
                                 VARIANT bstrPassword);
                               HRESULT ( STDMETHODCALLTYPE *setRequestHeader )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                       __RPC__in BSTR bstrHeader,
                       __RPC__in BSTR bstrValue);
                               HRESULT ( STDMETHODCALLTYPE *getResponseHeader )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                       __RPC__in BSTR bstrHeader,
                                __RPC__deref_out_opt BSTR *pbstrValue);
                               HRESULT ( STDMETHODCALLTYPE *getAllResponseHeaders )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                                __RPC__deref_out_opt BSTR *pbstrHeaders);
                               HRESULT ( STDMETHODCALLTYPE *send )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                                 VARIANT varBody);
                               HRESULT ( STDMETHODCALLTYPE *abort )(
            __RPC__in IServerXMLHTTPRequest2 * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_status )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                                __RPC__out long *plStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_statusText )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                                __RPC__deref_out_opt BSTR *pbstrStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_responseXML )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                                __RPC__deref_out_opt IDispatch **ppBody);
                                        HRESULT ( STDMETHODCALLTYPE *get_responseText )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                                __RPC__deref_out_opt BSTR *pbstrBody);
                                        HRESULT ( STDMETHODCALLTYPE *get_responseBody )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                                __RPC__out VARIANT *pvarBody);
                                        HRESULT ( STDMETHODCALLTYPE *get_responseStream )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                                __RPC__out VARIANT *pvarBody);
                                        HRESULT ( STDMETHODCALLTYPE *get_readyState )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                                __RPC__out long *plState);
                                        HRESULT ( STDMETHODCALLTYPE *put_onreadystatechange )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                       __RPC__in_opt IDispatch *pReadyStateSink);
                               HRESULT ( STDMETHODCALLTYPE *setTimeouts )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                       long resolveTimeout,
                       long connectTimeout,
                       long sendTimeout,
                       long receiveTimeout);
                               HRESULT ( STDMETHODCALLTYPE *waitForResponse )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                                 VARIANT timeoutInSeconds,
                                __RPC__out VARIANT_BOOL *isSuccessful);
                               HRESULT ( STDMETHODCALLTYPE *getOption )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                       SERVERXMLHTTP_OPTION option,
                                __RPC__out VARIANT *value);
                               HRESULT ( STDMETHODCALLTYPE *setOption )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                       SERVERXMLHTTP_OPTION option,
                       VARIANT value);
                               HRESULT ( STDMETHODCALLTYPE *setProxy )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                       SXH_PROXY_SETTING proxySetting,
                                 VARIANT varProxyServer,
                                 VARIANT varBypassList);
                               HRESULT ( STDMETHODCALLTYPE *setProxyCredentials )(
            __RPC__in IServerXMLHTTPRequest2 * This,
                       __RPC__in BSTR bstrUserName,
                       __RPC__in BSTR bstrPassword);
        END_INTERFACE
    } IServerXMLHTTPRequest2Vtbl;
    interface IServerXMLHTTPRequest2
    {
        CONST_VTBL struct IServerXMLHTTPRequest2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> open(This,bstrMethod,bstrUrl,varAsync,bstrUser,bstrPassword) )
    ( (This)->lpVtbl -> setRequestHeader(This,bstrHeader,bstrValue) )
    ( (This)->lpVtbl -> getResponseHeader(This,bstrHeader,pbstrValue) )
    ( (This)->lpVtbl -> getAllResponseHeaders(This,pbstrHeaders) )
    ( (This)->lpVtbl -> send(This,varBody) )
    ( (This)->lpVtbl -> abort(This) )
    ( (This)->lpVtbl -> get_status(This,plStatus) )
    ( (This)->lpVtbl -> get_statusText(This,pbstrStatus) )
    ( (This)->lpVtbl -> get_responseXML(This,ppBody) )
    ( (This)->lpVtbl -> get_responseText(This,pbstrBody) )
    ( (This)->lpVtbl -> get_responseBody(This,pvarBody) )
    ( (This)->lpVtbl -> get_responseStream(This,pvarBody) )
    ( (This)->lpVtbl -> get_readyState(This,plState) )
    ( (This)->lpVtbl -> put_onreadystatechange(This,pReadyStateSink) )
    ( (This)->lpVtbl -> setTimeouts(This,resolveTimeout,connectTimeout,sendTimeout,receiveTimeout) )
    ( (This)->lpVtbl -> waitForResponse(This,timeoutInSeconds,isSuccessful) )
    ( (This)->lpVtbl -> getOption(This,option,value) )
    ( (This)->lpVtbl -> setOption(This,option,value) )
    ( (This)->lpVtbl -> setProxy(This,proxySetting,varProxyServer,varBypassList) )
    ( (This)->lpVtbl -> setProxyCredentials(This,bstrUserName,bstrPassword) )
EXTERN_C const IID IID_IMXNamespacePrefixes;
    typedef struct IMXNamespacePrefixesVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMXNamespacePrefixes * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMXNamespacePrefixes * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMXNamespacePrefixes * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IMXNamespacePrefixes * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IMXNamespacePrefixes * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IMXNamespacePrefixes * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IMXNamespacePrefixes * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_item )(
            IMXNamespacePrefixes * This,
                       long index,
                                BSTR *prefix);
                            HRESULT ( STDMETHODCALLTYPE *get_length )(
            IMXNamespacePrefixes * This,
                                long *length);
                                                HRESULT ( STDMETHODCALLTYPE *get__newEnum )(
            IMXNamespacePrefixes * This,
                                IUnknown **ppUnk);
        END_INTERFACE
    } IMXNamespacePrefixesVtbl;
    interface IMXNamespacePrefixes
    {
        CONST_VTBL struct IMXNamespacePrefixesVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> get_item(This,index,prefix) )
    ( (This)->lpVtbl -> get_length(This,length) )
    ( (This)->lpVtbl -> get__newEnum(This,ppUnk) )
EXTERN_C const IID IID_IVBMXNamespaceManager;
    typedef struct IVBMXNamespaceManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IVBMXNamespaceManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IVBMXNamespaceManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IVBMXNamespaceManager * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IVBMXNamespaceManager * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IVBMXNamespaceManager * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IVBMXNamespaceManager * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IVBMXNamespaceManager * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *put_allowOverride )(
            IVBMXNamespaceManager * This,
                       VARIANT_BOOL fOverride);
                            HRESULT ( STDMETHODCALLTYPE *get_allowOverride )(
            IVBMXNamespaceManager * This,
                                VARIANT_BOOL *fOverride);
                   HRESULT ( STDMETHODCALLTYPE *reset )(
            IVBMXNamespaceManager * This);
                   HRESULT ( STDMETHODCALLTYPE *pushContext )(
            IVBMXNamespaceManager * This);
                   HRESULT ( STDMETHODCALLTYPE *pushNodeContext )(
            IVBMXNamespaceManager * This,
                       IXMLDOMNode *contextNode,
                                     VARIANT_BOOL fDeep);
                   HRESULT ( STDMETHODCALLTYPE *popContext )(
            IVBMXNamespaceManager * This);
                   HRESULT ( STDMETHODCALLTYPE *declarePrefix )(
            IVBMXNamespaceManager * This,
                       BSTR prefix,
                       BSTR namespaceURI);
                   HRESULT ( STDMETHODCALLTYPE *getDeclaredPrefixes )(
            IVBMXNamespaceManager * This,
                                IMXNamespacePrefixes **prefixes);
                   HRESULT ( STDMETHODCALLTYPE *getPrefixes )(
            IVBMXNamespaceManager * This,
                       BSTR namespaceURI,
                                IMXNamespacePrefixes **prefixes);
                   HRESULT ( STDMETHODCALLTYPE *getURI )(
            IVBMXNamespaceManager * This,
                       BSTR prefix,
                                VARIANT *uri);
                   HRESULT ( STDMETHODCALLTYPE *getURIFromNode )(
            IVBMXNamespaceManager * This,
                       BSTR strPrefix,
                       IXMLDOMNode *contextNode,
                                VARIANT *uri);
        END_INTERFACE
    } IVBMXNamespaceManagerVtbl;
    interface IVBMXNamespaceManager
    {
        CONST_VTBL struct IVBMXNamespaceManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetTypeInfoCount(This,pctinfo) )
    ( (This)->lpVtbl -> GetTypeInfo(This,iTInfo,lcid,ppTInfo) )
    ( (This)->lpVtbl -> GetIDsOfNames(This,riid,rgszNames,cNames,lcid,rgDispId) )
    ( (This)->lpVtbl -> Invoke(This,dispIdMember,riid,lcid,wFlags,pDispParams,pVarResult,pExcepInfo,puArgErr) )
    ( (This)->lpVtbl -> put_allowOverride(This,fOverride) )
    ( (This)->lpVtbl -> get_allowOverride(This,fOverride) )
    ( (This)->lpVtbl -> reset(This) )
    ( (This)->lpVtbl -> pushContext(This) )
    ( (This)->lpVtbl -> pushNodeContext(This,contextNode,fDeep) )
    ( (This)->lpVtbl -> popContext(This) )
    ( (This)->lpVtbl -> declarePrefix(This,prefix,namespaceURI) )
    ( (This)->lpVtbl -> getDeclaredPrefixes(This,prefixes) )
    ( (This)->lpVtbl -> getPrefixes(This,namespaceURI,prefixes) )
    ( (This)->lpVtbl -> getURI(This,prefix,uri) )
    ( (This)->lpVtbl -> getURIFromNode(This,strPrefix,contextNode,uri) )
EXTERN_C const IID IID_IMXNamespaceManager;
    typedef struct IMXNamespaceManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMXNamespaceManager * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMXNamespaceManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMXNamespaceManager * This);
        HRESULT ( STDMETHODCALLTYPE *putAllowOverride )(
            IMXNamespaceManager * This,
                       VARIANT_BOOL fOverride);
        HRESULT ( STDMETHODCALLTYPE *getAllowOverride )(
            IMXNamespaceManager * This,
                                VARIANT_BOOL *fOverride);
        HRESULT ( STDMETHODCALLTYPE *reset )(
            IMXNamespaceManager * This);
        HRESULT ( STDMETHODCALLTYPE *pushContext )(
            IMXNamespaceManager * This);
        HRESULT ( STDMETHODCALLTYPE *pushNodeContext )(
            IMXNamespaceManager * This,
                       IXMLDOMNode *contextNode,
                       VARIANT_BOOL fDeep);
        HRESULT ( STDMETHODCALLTYPE *popContext )(
            IMXNamespaceManager * This);
        HRESULT ( STDMETHODCALLTYPE *declarePrefix )(
            IMXNamespaceManager * This,
                       LPCWSTR prefix,
                       LPCWSTR namespaceURI);
        HRESULT ( STDMETHODCALLTYPE *getDeclaredPrefix )(
            IMXNamespaceManager * This,
                       long nIndex,
            _Out_writes_to_(*pcchPrefix, *pcchPrefix) wchar_t *pwchPrefix,
            _Inout_ int *pcchPrefix);
        HRESULT ( STDMETHODCALLTYPE *getPrefix )(
            IMXNamespaceManager * This,
                       LPCWSTR pwszNamespaceURI,
                       long nIndex,
            _Out_writes_to_(*pcchPrefix, *pcchPrefix) wchar_t *pwchPrefix,
            _Inout_ int *pcchPrefix);
        HRESULT ( STDMETHODCALLTYPE *getURI )(
            IMXNamespaceManager * This,
                       LPCWSTR pwchPrefix,
                       IXMLDOMNode *pContextNode,
            _Out_writes_to_(*pcchUri, *pcchUri) wchar_t *pwchUri,
            _Inout_ int *pcchUri);
        END_INTERFACE
    } IMXNamespaceManagerVtbl;
    interface IMXNamespaceManager
    {
        CONST_VTBL struct IMXNamespaceManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> putAllowOverride(This,fOverride) )
    ( (This)->lpVtbl -> getAllowOverride(This,fOverride) )
    ( (This)->lpVtbl -> reset(This) )
    ( (This)->lpVtbl -> pushContext(This) )
    ( (This)->lpVtbl -> pushNodeContext(This,contextNode,fDeep) )
    ( (This)->lpVtbl -> popContext(This) )
    ( (This)->lpVtbl -> declarePrefix(This,prefix,namespaceURI) )
    ( (This)->lpVtbl -> getDeclaredPrefix(This,nIndex,pwchPrefix,pcchPrefix) )
    ( (This)->lpVtbl -> getPrefix(This,pwszNamespaceURI,nIndex,pwchPrefix,pcchPrefix) )
    ( (This)->lpVtbl -> getURI(This,pwchPrefix,pContextNode,pwchUri,pcchUri) )
EXTERN_C const CLSID CLSID_DOMDocument;
class DECLSPEC_UUID("F6D90F11-9C73-11D3-B32E-00C04F990BB4")
DOMDocument;
EXTERN_C const CLSID CLSID_DOMDocument26;
class DECLSPEC_UUID("f5078f1b-c551-11d3-89b9-0000f81fe221")
DOMDocument26;
EXTERN_C const CLSID CLSID_DOMDocument30;
class DECLSPEC_UUID("f5078f32-c551-11d3-89b9-0000f81fe221")
DOMDocument30;
EXTERN_C const CLSID CLSID_FreeThreadedDOMDocument;
class DECLSPEC_UUID("F6D90F12-9C73-11D3-B32E-00C04F990BB4")
FreeThreadedDOMDocument;
EXTERN_C const CLSID CLSID_FreeThreadedDOMDocument26;
class DECLSPEC_UUID("f5078f1c-c551-11d3-89b9-0000f81fe221")
FreeThreadedDOMDocument26;
EXTERN_C const CLSID CLSID_FreeThreadedDOMDocument30;
class DECLSPEC_UUID("f5078f33-c551-11d3-89b9-0000f81fe221")
FreeThreadedDOMDocument30;
EXTERN_C const CLSID CLSID_XMLSchemaCache;
class DECLSPEC_UUID("373984c9-b845-449b-91e7-45ac83036ade")
XMLSchemaCache;
EXTERN_C const CLSID CLSID_XMLSchemaCache26;
class DECLSPEC_UUID("f5078f1d-c551-11d3-89b9-0000f81fe221")
XMLSchemaCache26;
EXTERN_C const CLSID CLSID_XMLSchemaCache30;
class DECLSPEC_UUID("f5078f34-c551-11d3-89b9-0000f81fe221")
XMLSchemaCache30;
EXTERN_C const CLSID CLSID_XSLTemplate;
class DECLSPEC_UUID("2933BF94-7B36-11d2-B20E-00C04F983E60")
XSLTemplate;
EXTERN_C const CLSID CLSID_XSLTemplate26;
class DECLSPEC_UUID("f5078f21-c551-11d3-89b9-0000f81fe221")
XSLTemplate26;
EXTERN_C const CLSID CLSID_XSLTemplate30;
class DECLSPEC_UUID("f5078f36-c551-11d3-89b9-0000f81fe221")
XSLTemplate30;
EXTERN_C const CLSID CLSID_DSOControl;
class DECLSPEC_UUID("F6D90F14-9C73-11D3-B32E-00C04F990BB4")
DSOControl;
EXTERN_C const CLSID CLSID_DSOControl26;
class DECLSPEC_UUID("f5078f1f-c551-11d3-89b9-0000f81fe221")
DSOControl26;
EXTERN_C const CLSID CLSID_DSOControl30;
class DECLSPEC_UUID("f5078f39-c551-11d3-89b9-0000f81fe221")
DSOControl30;
EXTERN_C const CLSID CLSID_XMLHTTP;
class DECLSPEC_UUID("F6D90F16-9C73-11D3-B32E-00C04F990BB4")
XMLHTTP;
EXTERN_C const CLSID CLSID_XMLHTTP26;
class DECLSPEC_UUID("f5078f1e-c551-11d3-89b9-0000f81fe221")
XMLHTTP26;
EXTERN_C const CLSID CLSID_XMLHTTP30;
class DECLSPEC_UUID("f5078f35-c551-11d3-89b9-0000f81fe221")
XMLHTTP30;
EXTERN_C const CLSID CLSID_ServerXMLHTTP;
class DECLSPEC_UUID("afba6b42-5692-48ea-8141-dc517dcf0ef1")
ServerXMLHTTP;
EXTERN_C const CLSID CLSID_ServerXMLHTTP30;
class DECLSPEC_UUID("afb40ffd-b609-40a3-9828-f88bbe11e4e3")
ServerXMLHTTP30;
EXTERN_C const CLSID CLSID_SAXXMLReader;
class DECLSPEC_UUID("079aa557-4a18-424a-8eee-e39f0a8d41b9")
SAXXMLReader;
EXTERN_C const CLSID CLSID_SAXXMLReader30;
class DECLSPEC_UUID("3124c396-fb13-4836-a6ad-1317f1713688")
SAXXMLReader30;
EXTERN_C const CLSID CLSID_MXXMLWriter;
class DECLSPEC_UUID("fc220ad8-a72a-4ee8-926e-0b7ad152a020")
MXXMLWriter;
EXTERN_C const CLSID CLSID_MXXMLWriter30;
class DECLSPEC_UUID("3d813dfe-6c91-4a4e-8f41-04346a841d9c")
MXXMLWriter30;
EXTERN_C const CLSID CLSID_MXHTMLWriter;
class DECLSPEC_UUID("a4c23ec3-6b70-4466-9127-550077239978")
MXHTMLWriter;
EXTERN_C const CLSID CLSID_MXHTMLWriter30;
class DECLSPEC_UUID("853d1540-c1a7-4aa9-a226-4d3bd301146d")
MXHTMLWriter30;
EXTERN_C const CLSID CLSID_SAXAttributes;
class DECLSPEC_UUID("4dd441ad-526d-4a77-9f1b-9841ed802fb0")
SAXAttributes;
EXTERN_C const CLSID CLSID_SAXAttributes30;
class DECLSPEC_UUID("3e784a01-f3ae-4dc0-9354-9526b9370eba")
SAXAttributes30;
EXTERN_C const CLSID CLSID_MXNamespaceManager;
class DECLSPEC_UUID("88d969d5-f192-11d4-a65f-0040963251e5")
MXNamespaceManager;
EXTERN_C const CLSID CLSID_XMLDocument;
class DECLSPEC_UUID("CFC399AF-D876-11d0-9C10-00C04FC99C8E")
XMLDocument;
}
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_msxml2_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msxml2_0000_0001_v0_0_s_ifspec;
}
