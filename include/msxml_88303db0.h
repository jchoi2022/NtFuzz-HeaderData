#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IXMLDOMImplementation IXMLDOMImplementation;
typedef interface IXMLDOMNode IXMLDOMNode;
typedef interface IXMLDOMDocumentFragment IXMLDOMDocumentFragment;
typedef interface IXMLDOMDocument IXMLDOMDocument;
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
typedef interface IXTLRuntime IXTLRuntime;
typedef interface XMLDOMDocumentEvents XMLDOMDocumentEvents;
typedef class DOMDocument DOMDocument;
typedef class DOMFreeThreadedDocument DOMFreeThreadedDocument;
typedef interface IXMLHttpRequest IXMLHttpRequest;
typedef class XMLHTTPRequest XMLHTTPRequest;
typedef interface IXMLDSOControl IXMLDSOControl;
typedef class XMLDSOControl XMLDSOControl;
typedef interface IXMLElementCollection IXMLElementCollection;
typedef interface IXMLDocument IXMLDocument;
typedef interface IXMLDocument2 IXMLDocument2;
typedef interface IXMLElement IXMLElement;
typedef interface IXMLElement2 IXMLElement2;
typedef interface IXMLAttribute IXMLAttribute;
typedef interface IXMLError IXMLError;
typedef class XMLDocument XMLDocument;
#include "unknwn.h"
#include "objidl.h"
#include "oaidl.h"
extern "C"{
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(push)
#pragma warning(disable:4001)
       
#pragma warning(pop)
#pragma warning(pop)
#pragma region Desktop Family
#pragma endregion
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
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
extern RPC_IF_HANDLE __MIDL_itf_msxml_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msxml_0000_0000_v0_0_s_ifspec;
#pragma region Desktop Family
#pragma endregion
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
#pragma region Desktop Family
#pragma endregion
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
EXTERN_C const IID LIBID_MSXML;
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
EXTERN_C const CLSID CLSID_DOMDocument;
class DECLSPEC_UUID("2933BF90-7B36-11d2-B20E-00C04F983E60")
DOMDocument;
EXTERN_C const CLSID CLSID_DOMFreeThreadedDocument;
class DECLSPEC_UUID("2933BF91-7B36-11d2-B20E-00C04F983E60")
DOMFreeThreadedDocument;
EXTERN_C const IID IID_IXMLHttpRequest;
    typedef struct IXMLHttpRequestVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IXMLHttpRequest * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IXMLHttpRequest * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IXMLHttpRequest * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            __RPC__in IXMLHttpRequest * This,
                        __RPC__out UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            __RPC__in IXMLHttpRequest * This,
                       UINT iTInfo,
                       LCID lcid,
                        __RPC__deref_out_opt ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            __RPC__in IXMLHttpRequest * This,
                       __RPC__in REFIID riid,
                                __RPC__in_ecount_full(cNames) LPOLESTR *rgszNames,
                              __RPC__in_range(0,16384) UINT cNames,
                       LCID lcid,
                                 __RPC__out_ecount_full(cNames) DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLHttpRequest * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                               HRESULT ( STDMETHODCALLTYPE *open )(
            __RPC__in IXMLHttpRequest * This,
                       __RPC__in BSTR bstrMethod,
                       __RPC__in BSTR bstrUrl,
                                 VARIANT varAsync,
                                 VARIANT bstrUser,
                                 VARIANT bstrPassword);
                               HRESULT ( STDMETHODCALLTYPE *setRequestHeader )(
            __RPC__in IXMLHttpRequest * This,
                       __RPC__in BSTR bstrHeader,
                       __RPC__in BSTR bstrValue);
                               HRESULT ( STDMETHODCALLTYPE *getResponseHeader )(
            __RPC__in IXMLHttpRequest * This,
                       __RPC__in BSTR bstrHeader,
                                __RPC__deref_out_opt BSTR *pbstrValue);
                               HRESULT ( STDMETHODCALLTYPE *getAllResponseHeaders )(
            __RPC__in IXMLHttpRequest * This,
                                __RPC__deref_out_opt BSTR *pbstrHeaders);
                               HRESULT ( STDMETHODCALLTYPE *send )(
            __RPC__in IXMLHttpRequest * This,
                                 VARIANT varBody);
                               HRESULT ( STDMETHODCALLTYPE *abort )(
            __RPC__in IXMLHttpRequest * This);
                                        HRESULT ( STDMETHODCALLTYPE *get_status )(
            __RPC__in IXMLHttpRequest * This,
                                __RPC__out long *plStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_statusText )(
            __RPC__in IXMLHttpRequest * This,
                                __RPC__deref_out_opt BSTR *pbstrStatus);
                                        HRESULT ( STDMETHODCALLTYPE *get_responseXML )(
            __RPC__in IXMLHttpRequest * This,
                                __RPC__deref_out_opt IDispatch **ppBody);
                                        HRESULT ( STDMETHODCALLTYPE *get_responseText )(
            __RPC__in IXMLHttpRequest * This,
                                __RPC__deref_out_opt BSTR *pbstrBody);
                                        HRESULT ( STDMETHODCALLTYPE *get_responseBody )(
            __RPC__in IXMLHttpRequest * This,
                                __RPC__out VARIANT *pvarBody);
                                        HRESULT ( STDMETHODCALLTYPE *get_responseStream )(
            __RPC__in IXMLHttpRequest * This,
                                __RPC__out VARIANT *pvarBody);
                                        HRESULT ( STDMETHODCALLTYPE *get_readyState )(
            __RPC__in IXMLHttpRequest * This,
                                __RPC__out long *plState);
                                        HRESULT ( STDMETHODCALLTYPE *put_onreadystatechange )(
            __RPC__in IXMLHttpRequest * This,
                       __RPC__in_opt IDispatch *pReadyStateSink);
        END_INTERFACE
    } IXMLHttpRequestVtbl;
    interface IXMLHttpRequest
    {
        CONST_VTBL struct IXMLHttpRequestVtbl *lpVtbl;
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
EXTERN_C const CLSID CLSID_XMLHTTPRequest;
class DECLSPEC_UUID("ED8C108E-4349-11D2-91A4-00C04F7969E8")
XMLHTTPRequest;
EXTERN_C const IID IID_IXMLDSOControl;
    typedef struct IXMLDSOControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXMLDSOControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXMLDSOControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXMLDSOControl * This);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfoCount )(
            IXMLDSOControl * This,
                        UINT *pctinfo);
        HRESULT ( STDMETHODCALLTYPE *GetTypeInfo )(
            IXMLDSOControl * This,
                       UINT iTInfo,
                       LCID lcid,
                        ITypeInfo **ppTInfo);
        HRESULT ( STDMETHODCALLTYPE *GetIDsOfNames )(
            IXMLDSOControl * This,
                       REFIID riid,
                                LPOLESTR *rgszNames,
                              UINT cNames,
                       LCID lcid,
                                 DISPID *rgDispId);
                      HRESULT ( STDMETHODCALLTYPE *Invoke )(
            IXMLDSOControl * This,
            _In_ DISPID dispIdMember,
            _In_ REFIID riid,
            _In_ LCID lcid,
            _In_ WORD wFlags,
            _In_ DISPPARAMS *pDispParams,
            _Out_opt_ VARIANT *pVarResult,
            _Out_opt_ EXCEPINFO *pExcepInfo,
            _Out_opt_ UINT *puArgErr);
                            HRESULT ( STDMETHODCALLTYPE *get_XMLDocument )(
            IXMLDSOControl * This,
                                IXMLDOMDocument **ppDoc);
                            HRESULT ( STDMETHODCALLTYPE *put_XMLDocument )(
            IXMLDSOControl * This,
                       IXMLDOMDocument *ppDoc);
                            HRESULT ( STDMETHODCALLTYPE *get_JavaDSOCompatible )(
            IXMLDSOControl * This,
                                BOOL *fJavaDSOCompatible);
                            HRESULT ( STDMETHODCALLTYPE *put_JavaDSOCompatible )(
            IXMLDSOControl * This,
                       BOOL fJavaDSOCompatible);
                            HRESULT ( STDMETHODCALLTYPE *get_readyState )(
            IXMLDSOControl * This,
                                long *state);
        END_INTERFACE
    } IXMLDSOControlVtbl;
    interface IXMLDSOControl
    {
        CONST_VTBL struct IXMLDSOControlVtbl *lpVtbl;
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
EXTERN_C const CLSID CLSID_XMLDSOControl;
class DECLSPEC_UUID("550dda30-0541-11d2-9ca9-0060b0ec3d39")
XMLDSOControl;
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
EXTERN_C const CLSID CLSID_XMLDocument;
class DECLSPEC_UUID("CFC399AF-D876-11d0-9C10-00C04FC99C8E")
XMLDocument;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_msxml_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_msxml_0000_0001_v0_0_s_ifspec;
}
