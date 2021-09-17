#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
typedef interface IXmlReader IXmlReader;
typedef interface IXmlResolver IXmlResolver;
typedef interface IXmlWriter IXmlWriter;
typedef interface IXmlWriterLite IXmlWriterLite;
#include "unknwn.h"
#include "objidl.h"
#include "oaidl.h"
extern "C"{
#pragma region Application Family or OneCore Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_SYSTEM)
typedef IUnknown IXmlReaderInput;
typedef IUnknown IXmlWriterOutput;
STDAPI CreateXmlReader(_In_ REFIID riid,
    _Outptr_ void ** ppvObject,
    _In_opt_ IMalloc * pMalloc);
STDAPI CreateXmlReaderInputWithEncodingCodePage(
    _In_ IUnknown * pInputStream,
    _In_opt_ IMalloc * pMalloc,
    _In_ UINT nEncodingCodePage,
    _In_ BOOL fEncodingHint,
    _In_opt_ LPCWSTR pwszBaseUri,
    _Out_ IXmlReaderInput ** ppInput);
STDAPI CreateXmlReaderInputWithEncodingName(
    _In_ IUnknown * pInputStream,
    _In_opt_ IMalloc * pMalloc,
    _In_ LPCWSTR pwszEncodingName,
    _In_ BOOL fEncodingHint,
    _In_opt_ LPCWSTR pwszBaseUri,
    _Out_ IXmlReaderInput ** ppInput);
STDAPI CreateXmlWriter(_In_ REFIID riid,
    _Out_ void ** ppvObject,
    _In_opt_ IMalloc * pMalloc);
STDAPI CreateXmlWriterOutputWithEncodingCodePage(
    _In_ IUnknown *pOutputStream,
    _In_opt_ IMalloc *pMalloc,
    _In_ UINT nEncodingCodePage,
    _Out_ IXmlWriterOutput **ppOutput);
STDAPI CreateXmlWriterOutputWithEncodingName(
    _In_ IUnknown *pOutputStream,
    _In_opt_ IMalloc *pMalloc,
    _In_ LPCWSTR pwszEncodingName,
    _Out_ IXmlWriterOutput **ppOutput);
extern RPC_IF_HANDLE __MIDL_itf_xmllite_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xmllite_0000_0000_v0_0_s_ifspec;
typedef
enum XmlNodeType
    {
        XmlNodeType_None = 0,
        XmlNodeType_Element = 1,
        XmlNodeType_Attribute = 2,
        XmlNodeType_Text = 3,
        XmlNodeType_CDATA = 4,
        XmlNodeType_ProcessingInstruction = 7,
        XmlNodeType_Comment = 8,
        XmlNodeType_DocumentType = 10,
        XmlNodeType_Whitespace = 13,
        XmlNodeType_EndElement = 15,
        XmlNodeType_XmlDeclaration = 17,
        _XmlNodeType_Last = 17
    } XmlNodeType;
typedef
enum XmlConformanceLevel
    {
        XmlConformanceLevel_Auto = 0,
        XmlConformanceLevel_Fragment = 1,
        XmlConformanceLevel_Document = 2,
        _XmlConformanceLevel_Last = 2
    } XmlConformanceLevel;
typedef
enum DtdProcessing
    {
        DtdProcessing_Prohibit = 0,
        DtdProcessing_Parse = ( DtdProcessing_Prohibit + 1 ) ,
        _DtdProcessing_Last = DtdProcessing_Parse
    } DtdProcessing;
typedef
enum XmlReadState
    {
        XmlReadState_Initial = 0,
        XmlReadState_Interactive = 1,
        XmlReadState_Error = 2,
        XmlReadState_EndOfFile = 3,
        XmlReadState_Closed = 4
    } XmlReadState;
typedef
enum XmlReaderProperty
    {
        XmlReaderProperty_MultiLanguage = 0,
        XmlReaderProperty_ConformanceLevel = ( XmlReaderProperty_MultiLanguage + 1 ) ,
        XmlReaderProperty_RandomAccess = ( XmlReaderProperty_ConformanceLevel + 1 ) ,
        XmlReaderProperty_XmlResolver = ( XmlReaderProperty_RandomAccess + 1 ) ,
        XmlReaderProperty_DtdProcessing = ( XmlReaderProperty_XmlResolver + 1 ) ,
        XmlReaderProperty_ReadState = ( XmlReaderProperty_DtdProcessing + 1 ) ,
        XmlReaderProperty_MaxElementDepth = ( XmlReaderProperty_ReadState + 1 ) ,
        XmlReaderProperty_MaxEntityExpansion = ( XmlReaderProperty_MaxElementDepth + 1 ) ,
        _XmlReaderProperty_Last = XmlReaderProperty_MaxEntityExpansion
    } XmlReaderProperty;
typedef
enum XmlError
    {
        MX_E_MX = 0xc00cee00,
        MX_E_INPUTEND = ( MX_E_MX + 1 ) ,
        MX_E_ENCODING = ( MX_E_INPUTEND + 1 ) ,
        MX_E_ENCODINGSWITCH = ( MX_E_ENCODING + 1 ) ,
        MX_E_ENCODINGSIGNATURE = ( MX_E_ENCODINGSWITCH + 1 ) ,
        WC_E_WC = 0xc00cee20,
        WC_E_WHITESPACE = ( WC_E_WC + 1 ) ,
        WC_E_SEMICOLON = ( WC_E_WHITESPACE + 1 ) ,
        WC_E_GREATERTHAN = ( WC_E_SEMICOLON + 1 ) ,
        WC_E_QUOTE = ( WC_E_GREATERTHAN + 1 ) ,
        WC_E_EQUAL = ( WC_E_QUOTE + 1 ) ,
        WC_E_LESSTHAN = ( WC_E_EQUAL + 1 ) ,
        WC_E_HEXDIGIT = ( WC_E_LESSTHAN + 1 ) ,
        WC_E_DIGIT = ( WC_E_HEXDIGIT + 1 ) ,
        WC_E_LEFTBRACKET = ( WC_E_DIGIT + 1 ) ,
        WC_E_LEFTPAREN = ( WC_E_LEFTBRACKET + 1 ) ,
        WC_E_XMLCHARACTER = ( WC_E_LEFTPAREN + 1 ) ,
        WC_E_NAMECHARACTER = ( WC_E_XMLCHARACTER + 1 ) ,
        WC_E_SYNTAX = ( WC_E_NAMECHARACTER + 1 ) ,
        WC_E_CDSECT = ( WC_E_SYNTAX + 1 ) ,
        WC_E_COMMENT = ( WC_E_CDSECT + 1 ) ,
        WC_E_CONDSECT = ( WC_E_COMMENT + 1 ) ,
        WC_E_DECLATTLIST = ( WC_E_CONDSECT + 1 ) ,
        WC_E_DECLDOCTYPE = ( WC_E_DECLATTLIST + 1 ) ,
        WC_E_DECLELEMENT = ( WC_E_DECLDOCTYPE + 1 ) ,
        WC_E_DECLENTITY = ( WC_E_DECLELEMENT + 1 ) ,
        WC_E_DECLNOTATION = ( WC_E_DECLENTITY + 1 ) ,
        WC_E_NDATA = ( WC_E_DECLNOTATION + 1 ) ,
        WC_E_PUBLIC = ( WC_E_NDATA + 1 ) ,
        WC_E_SYSTEM = ( WC_E_PUBLIC + 1 ) ,
        WC_E_NAME = ( WC_E_SYSTEM + 1 ) ,
        WC_E_ROOTELEMENT = ( WC_E_NAME + 1 ) ,
        WC_E_ELEMENTMATCH = ( WC_E_ROOTELEMENT + 1 ) ,
        WC_E_UNIQUEATTRIBUTE = ( WC_E_ELEMENTMATCH + 1 ) ,
        WC_E_TEXTXMLDECL = ( WC_E_UNIQUEATTRIBUTE + 1 ) ,
        WC_E_LEADINGXML = ( WC_E_TEXTXMLDECL + 1 ) ,
        WC_E_TEXTDECL = ( WC_E_LEADINGXML + 1 ) ,
        WC_E_XMLDECL = ( WC_E_TEXTDECL + 1 ) ,
        WC_E_ENCNAME = ( WC_E_XMLDECL + 1 ) ,
        WC_E_PUBLICID = ( WC_E_ENCNAME + 1 ) ,
        WC_E_PESINTERNALSUBSET = ( WC_E_PUBLICID + 1 ) ,
        WC_E_PESBETWEENDECLS = ( WC_E_PESINTERNALSUBSET + 1 ) ,
        WC_E_NORECURSION = ( WC_E_PESBETWEENDECLS + 1 ) ,
        WC_E_ENTITYCONTENT = ( WC_E_NORECURSION + 1 ) ,
        WC_E_UNDECLAREDENTITY = ( WC_E_ENTITYCONTENT + 1 ) ,
        WC_E_PARSEDENTITY = ( WC_E_UNDECLAREDENTITY + 1 ) ,
        WC_E_NOEXTERNALENTITYREF = ( WC_E_PARSEDENTITY + 1 ) ,
        WC_E_PI = ( WC_E_NOEXTERNALENTITYREF + 1 ) ,
        WC_E_SYSTEMID = ( WC_E_PI + 1 ) ,
        WC_E_QUESTIONMARK = ( WC_E_SYSTEMID + 1 ) ,
        WC_E_CDSECTEND = ( WC_E_QUESTIONMARK + 1 ) ,
        WC_E_MOREDATA = ( WC_E_CDSECTEND + 1 ) ,
        WC_E_DTDPROHIBITED = ( WC_E_MOREDATA + 1 ) ,
        WC_E_INVALIDXMLSPACE = ( WC_E_DTDPROHIBITED + 1 ) ,
        NC_E_NC = 0xc00cee60,
        NC_E_QNAMECHARACTER = ( NC_E_NC + 1 ) ,
        NC_E_QNAMECOLON = ( NC_E_QNAMECHARACTER + 1 ) ,
        NC_E_NAMECOLON = ( NC_E_QNAMECOLON + 1 ) ,
        NC_E_DECLAREDPREFIX = ( NC_E_NAMECOLON + 1 ) ,
        NC_E_UNDECLAREDPREFIX = ( NC_E_DECLAREDPREFIX + 1 ) ,
        NC_E_EMPTYURI = ( NC_E_UNDECLAREDPREFIX + 1 ) ,
        NC_E_XMLPREFIXRESERVED = ( NC_E_EMPTYURI + 1 ) ,
        NC_E_XMLNSPREFIXRESERVED = ( NC_E_XMLPREFIXRESERVED + 1 ) ,
        NC_E_XMLURIRESERVED = ( NC_E_XMLNSPREFIXRESERVED + 1 ) ,
        NC_E_XMLNSURIRESERVED = ( NC_E_XMLURIRESERVED + 1 ) ,
        SC_E_SC = 0xc00cee80,
        SC_E_MAXELEMENTDEPTH = ( SC_E_SC + 1 ) ,
        SC_E_MAXENTITYEXPANSION = ( SC_E_MAXELEMENTDEPTH + 1 ) ,
        WR_E_WR = 0xc00cef00,
        WR_E_NONWHITESPACE = ( WR_E_WR + 1 ) ,
        WR_E_NSPREFIXDECLARED = ( WR_E_NONWHITESPACE + 1 ) ,
        WR_E_NSPREFIXWITHEMPTYNSURI = ( WR_E_NSPREFIXDECLARED + 1 ) ,
        WR_E_DUPLICATEATTRIBUTE = ( WR_E_NSPREFIXWITHEMPTYNSURI + 1 ) ,
        WR_E_XMLNSPREFIXDECLARATION = ( WR_E_DUPLICATEATTRIBUTE + 1 ) ,
        WR_E_XMLPREFIXDECLARATION = ( WR_E_XMLNSPREFIXDECLARATION + 1 ) ,
        WR_E_XMLURIDECLARATION = ( WR_E_XMLPREFIXDECLARATION + 1 ) ,
        WR_E_XMLNSURIDECLARATION = ( WR_E_XMLURIDECLARATION + 1 ) ,
        WR_E_NAMESPACEUNDECLARED = ( WR_E_XMLNSURIDECLARATION + 1 ) ,
        WR_E_INVALIDXMLSPACE = ( WR_E_NAMESPACEUNDECLARED + 1 ) ,
        WR_E_INVALIDACTION = ( WR_E_INVALIDXMLSPACE + 1 ) ,
        WR_E_INVALIDSURROGATEPAIR = ( WR_E_INVALIDACTION + 1 ) ,
        XML_E_INVALID_DECIMAL = 0xc00ce01d,
        XML_E_INVALID_HEXIDECIMAL = 0xc00ce01e,
        XML_E_INVALID_UNICODE = 0xc00ce01f,
        XML_E_INVALIDENCODING = 0xc00ce06e
    } XmlError;
typedef
enum XmlStandalone
    {
        XmlStandalone_Omit = 0,
        XmlStandalone_Yes = 1,
        XmlStandalone_No = 2,
        _XmlStandalone_Last = 2
    } XmlStandalone;
typedef
enum XmlWriterProperty
    {
        XmlWriterProperty_MultiLanguage = 0,
        XmlWriterProperty_Indent = ( XmlWriterProperty_MultiLanguage + 1 ) ,
        XmlWriterProperty_ByteOrderMark = ( XmlWriterProperty_Indent + 1 ) ,
        XmlWriterProperty_OmitXmlDeclaration = ( XmlWriterProperty_ByteOrderMark + 1 ) ,
        XmlWriterProperty_ConformanceLevel = ( XmlWriterProperty_OmitXmlDeclaration + 1 ) ,
        XmlWriterProperty_CompactEmptyElement = ( XmlWriterProperty_ConformanceLevel + 1 ) ,
        _XmlWriterProperty_Last = XmlWriterProperty_CompactEmptyElement
    } XmlWriterProperty;
EXTERN_C const IID LIBID_XmlLite;
EXTERN_C const IID IID_IXmlReader;
    typedef struct IXmlReaderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXmlReader * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXmlReader * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXmlReader * This);
        HRESULT ( STDMETHODCALLTYPE *SetInput )(
            IXmlReader * This,
            _In_opt_ IUnknown *pInput);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            IXmlReader * This,
            _In_ UINT nProperty,
            _Out_ LONG_PTR *ppValue);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            IXmlReader * This,
            _In_ UINT nProperty,
            _In_opt_ LONG_PTR pValue);
        HRESULT ( STDMETHODCALLTYPE *Read )(
            IXmlReader * This,
            _Out_opt_ XmlNodeType *pNodeType);
        HRESULT ( STDMETHODCALLTYPE *GetNodeType )(
            IXmlReader * This,
            _Out_ XmlNodeType *pNodeType);
        HRESULT ( STDMETHODCALLTYPE *MoveToFirstAttribute )(
            IXmlReader * This);
        HRESULT ( STDMETHODCALLTYPE *MoveToNextAttribute )(
            IXmlReader * This);
        HRESULT ( STDMETHODCALLTYPE *MoveToAttributeByName )(
            IXmlReader * This,
            _In_ LPCWSTR pwszLocalName,
            _In_opt_ LPCWSTR pwszNamespaceUri);
        HRESULT ( STDMETHODCALLTYPE *MoveToElement )(
            IXmlReader * This);
        HRESULT ( STDMETHODCALLTYPE *GetQualifiedName )(
            IXmlReader * This,
            _Outptr_result_buffer_maybenull_(*pcwchQualifiedName+1) LPCWSTR *ppwszQualifiedName,
            _Out_opt_ UINT *pcwchQualifiedName);
        HRESULT ( STDMETHODCALLTYPE *GetNamespaceUri )(
            IXmlReader * This,
            _Outptr_result_buffer_maybenull_(*pcwchNamespaceUri+1) LPCWSTR *ppwszNamespaceUri,
            _Out_opt_ UINT *pcwchNamespaceUri);
        HRESULT ( STDMETHODCALLTYPE *GetLocalName )(
            IXmlReader * This,
            _Outptr_result_buffer_maybenull_(*pcwchLocalName+1) LPCWSTR *ppwszLocalName,
            _Out_opt_ UINT *pcwchLocalName);
        HRESULT ( STDMETHODCALLTYPE *GetPrefix )(
            IXmlReader * This,
            _Outptr_result_buffer_maybenull_(*pcwchPrefix+1) LPCWSTR *ppwszPrefix,
            _Out_opt_ UINT *pcwchPrefix);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            IXmlReader * This,
            _Outptr_result_buffer_maybenull_(*pcwchValue+1) LPCWSTR *ppwszValue,
            _Out_opt_ UINT *pcwchValue);
        HRESULT ( STDMETHODCALLTYPE *ReadValueChunk )(
            IXmlReader * This,
            _Out_writes_to_(cwchChunkSize, *pcwchRead) WCHAR *pwchBuffer,
            _In_ UINT cwchChunkSize,
            _Inout_ UINT *pcwchRead);
        HRESULT ( STDMETHODCALLTYPE *GetBaseUri )(
            IXmlReader * This,
            _Outptr_result_buffer_maybenull_(*pcwchBaseUri+1) LPCWSTR *ppwszBaseUri,
            _Out_opt_ UINT *pcwchBaseUri);
        BOOL ( STDMETHODCALLTYPE *IsDefault )(
            IXmlReader * This);
        BOOL ( STDMETHODCALLTYPE *IsEmptyElement )(
            IXmlReader * This);
        HRESULT ( STDMETHODCALLTYPE *GetLineNumber )(
            IXmlReader * This,
            _Out_ UINT *pnLineNumber);
        HRESULT ( STDMETHODCALLTYPE *GetLinePosition )(
            IXmlReader * This,
            _Out_ UINT *pnLinePosition);
        HRESULT ( STDMETHODCALLTYPE *GetAttributeCount )(
            IXmlReader * This,
            _Out_ UINT *pnAttributeCount);
        HRESULT ( STDMETHODCALLTYPE *GetDepth )(
            IXmlReader * This,
            _Out_ UINT *pnDepth);
        BOOL ( STDMETHODCALLTYPE *IsEOF )(
            IXmlReader * This);
        END_INTERFACE
    } IXmlReaderVtbl;
    interface IXmlReader
    {
        CONST_VTBL struct IXmlReaderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetInput(This,pInput) )
    ( (This)->lpVtbl -> GetProperty(This,nProperty,ppValue) )
    ( (This)->lpVtbl -> SetProperty(This,nProperty,pValue) )
    ( (This)->lpVtbl -> Read(This,pNodeType) )
    ( (This)->lpVtbl -> GetNodeType(This,pNodeType) )
    ( (This)->lpVtbl -> MoveToFirstAttribute(This) )
    ( (This)->lpVtbl -> MoveToNextAttribute(This) )
    ( (This)->lpVtbl -> MoveToAttributeByName(This,pwszLocalName,pwszNamespaceUri) )
    ( (This)->lpVtbl -> MoveToElement(This) )
    ( (This)->lpVtbl -> GetQualifiedName(This,ppwszQualifiedName,pcwchQualifiedName) )
    ( (This)->lpVtbl -> GetNamespaceUri(This,ppwszNamespaceUri,pcwchNamespaceUri) )
    ( (This)->lpVtbl -> GetLocalName(This,ppwszLocalName,pcwchLocalName) )
    ( (This)->lpVtbl -> GetPrefix(This,ppwszPrefix,pcwchPrefix) )
    ( (This)->lpVtbl -> GetValue(This,ppwszValue,pcwchValue) )
    ( (This)->lpVtbl -> ReadValueChunk(This,pwchBuffer,cwchChunkSize,pcwchRead) )
    ( (This)->lpVtbl -> GetBaseUri(This,ppwszBaseUri,pcwchBaseUri) )
    ( (This)->lpVtbl -> IsDefault(This) )
    ( (This)->lpVtbl -> IsEmptyElement(This) )
    ( (This)->lpVtbl -> GetLineNumber(This,pnLineNumber) )
    ( (This)->lpVtbl -> GetLinePosition(This,pnLinePosition) )
    ( (This)->lpVtbl -> GetAttributeCount(This,pnAttributeCount) )
    ( (This)->lpVtbl -> GetDepth(This,pnDepth) )
    ( (This)->lpVtbl -> IsEOF(This) )
EXTERN_C const IID IID_IXmlResolver;
    typedef struct IXmlResolverVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXmlResolver * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXmlResolver * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXmlResolver * This);
        HRESULT ( STDMETHODCALLTYPE *ResolveUri )(
            IXmlResolver * This,
            _In_opt_ LPCWSTR pwszBaseUri,
            _In_opt_ LPCWSTR pwszPublicIdentifier,
            _In_opt_ LPCWSTR pwszSystemIdentifier,
            _Out_ IUnknown **ppResolvedInput);
        END_INTERFACE
    } IXmlResolverVtbl;
    interface IXmlResolver
    {
        CONST_VTBL struct IXmlResolverVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ResolveUri(This,pwszBaseUri,pwszPublicIdentifier,pwszSystemIdentifier,ppResolvedInput) )
EXTERN_C const IID IID_IXmlWriter;
    typedef struct IXmlWriterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXmlWriter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXmlWriter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXmlWriter * This);
        HRESULT ( STDMETHODCALLTYPE *SetOutput )(
            IXmlWriter * This,
            _In_opt_ IUnknown *pOutput);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            IXmlWriter * This,
            _In_ UINT nProperty,
            _Out_ LONG_PTR *ppValue);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            IXmlWriter * This,
            _In_ UINT nProperty,
            _In_opt_ LONG_PTR pValue);
        HRESULT ( STDMETHODCALLTYPE *WriteAttributes )(
            IXmlWriter * This,
            _In_ IXmlReader *pReader,
            _In_ BOOL fWriteDefaultAttributes);
        HRESULT ( STDMETHODCALLTYPE *WriteAttributeString )(
            IXmlWriter * This,
            _In_opt_ LPCWSTR pwszPrefix,
            _In_opt_ LPCWSTR pwszLocalName,
            _In_opt_ LPCWSTR pwszNamespaceUri,
            _In_opt_ LPCWSTR pwszValue);
        HRESULT ( STDMETHODCALLTYPE *WriteCData )(
            IXmlWriter * This,
            _In_opt_ LPCWSTR pwszText);
        HRESULT ( STDMETHODCALLTYPE *WriteCharEntity )(
            IXmlWriter * This,
            _In_ WCHAR wch);
        HRESULT ( STDMETHODCALLTYPE *WriteChars )(
            IXmlWriter * This,
            _In_reads_opt_(cwch) const WCHAR *pwch,
            _In_ UINT cwch);
        HRESULT ( STDMETHODCALLTYPE *WriteComment )(
            IXmlWriter * This,
            _In_opt_ LPCWSTR pwszComment);
        HRESULT ( STDMETHODCALLTYPE *WriteDocType )(
            IXmlWriter * This,
            _In_opt_ LPCWSTR pwszName,
            _In_opt_ LPCWSTR pwszPublicId,
            _In_opt_ LPCWSTR pwszSystemId,
            _In_opt_ LPCWSTR pwszSubset);
        HRESULT ( STDMETHODCALLTYPE *WriteElementString )(
            IXmlWriter * This,
            _In_opt_ LPCWSTR pwszPrefix,
            _In_ LPCWSTR pwszLocalName,
            _In_opt_ LPCWSTR pwszNamespaceUri,
            _In_opt_ LPCWSTR pwszValue);
        HRESULT ( STDMETHODCALLTYPE *WriteEndDocument )(
            IXmlWriter * This);
        HRESULT ( STDMETHODCALLTYPE *WriteEndElement )(
            IXmlWriter * This);
        HRESULT ( STDMETHODCALLTYPE *WriteEntityRef )(
            IXmlWriter * This,
            _In_ LPCWSTR pwszName);
        HRESULT ( STDMETHODCALLTYPE *WriteFullEndElement )(
            IXmlWriter * This);
        HRESULT ( STDMETHODCALLTYPE *WriteName )(
            IXmlWriter * This,
            _In_ LPCWSTR pwszName);
        HRESULT ( STDMETHODCALLTYPE *WriteNmToken )(
            IXmlWriter * This,
            _In_ LPCWSTR pwszNmToken);
        HRESULT ( STDMETHODCALLTYPE *WriteNode )(
            IXmlWriter * This,
            _In_ IXmlReader *pReader,
            _In_ BOOL fWriteDefaultAttributes);
        HRESULT ( STDMETHODCALLTYPE *WriteNodeShallow )(
            IXmlWriter * This,
            _In_ IXmlReader *pReader,
            _In_ BOOL fWriteDefaultAttributes);
        HRESULT ( STDMETHODCALLTYPE *WriteProcessingInstruction )(
            IXmlWriter * This,
            _In_ LPCWSTR pwszName,
            _In_opt_ LPCWSTR pwszText);
        HRESULT ( STDMETHODCALLTYPE *WriteQualifiedName )(
            IXmlWriter * This,
            _In_ LPCWSTR pwszLocalName,
            _In_opt_ LPCWSTR pwszNamespaceUri);
        HRESULT ( STDMETHODCALLTYPE *WriteRaw )(
            IXmlWriter * This,
            _In_opt_ LPCWSTR pwszData);
        HRESULT ( STDMETHODCALLTYPE *WriteRawChars )(
            IXmlWriter * This,
            _In_reads_opt_(cwch) const WCHAR *pwch,
            _In_ UINT cwch);
        HRESULT ( STDMETHODCALLTYPE *WriteStartDocument )(
            IXmlWriter * This,
            _In_ XmlStandalone standalone);
        HRESULT ( STDMETHODCALLTYPE *WriteStartElement )(
            IXmlWriter * This,
            _In_opt_ LPCWSTR pwszPrefix,
            _In_ LPCWSTR pwszLocalName,
            _In_opt_ LPCWSTR pwszNamespaceUri);
        HRESULT ( STDMETHODCALLTYPE *WriteString )(
            IXmlWriter * This,
            _In_opt_ LPCWSTR pwszText);
        HRESULT ( STDMETHODCALLTYPE *WriteSurrogateCharEntity )(
            IXmlWriter * This,
            _In_ WCHAR wchLow,
            _In_ WCHAR wchHigh);
        HRESULT ( STDMETHODCALLTYPE *WriteWhitespace )(
            IXmlWriter * This,
            _In_opt_ LPCWSTR pwszWhitespace);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            IXmlWriter * This);
        END_INTERFACE
    } IXmlWriterVtbl;
    interface IXmlWriter
    {
        CONST_VTBL struct IXmlWriterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetOutput(This,pOutput) )
    ( (This)->lpVtbl -> GetProperty(This,nProperty,ppValue) )
    ( (This)->lpVtbl -> SetProperty(This,nProperty,pValue) )
    ( (This)->lpVtbl -> WriteAttributes(This,pReader,fWriteDefaultAttributes) )
    ( (This)->lpVtbl -> WriteAttributeString(This,pwszPrefix,pwszLocalName,pwszNamespaceUri,pwszValue) )
    ( (This)->lpVtbl -> WriteCData(This,pwszText) )
    ( (This)->lpVtbl -> WriteCharEntity(This,wch) )
    ( (This)->lpVtbl -> WriteChars(This,pwch,cwch) )
    ( (This)->lpVtbl -> WriteComment(This,pwszComment) )
    ( (This)->lpVtbl -> WriteDocType(This,pwszName,pwszPublicId,pwszSystemId,pwszSubset) )
    ( (This)->lpVtbl -> WriteElementString(This,pwszPrefix,pwszLocalName,pwszNamespaceUri,pwszValue) )
    ( (This)->lpVtbl -> WriteEndDocument(This) )
    ( (This)->lpVtbl -> WriteEndElement(This) )
    ( (This)->lpVtbl -> WriteEntityRef(This,pwszName) )
    ( (This)->lpVtbl -> WriteFullEndElement(This) )
    ( (This)->lpVtbl -> WriteName(This,pwszName) )
    ( (This)->lpVtbl -> WriteNmToken(This,pwszNmToken) )
    ( (This)->lpVtbl -> WriteNode(This,pReader,fWriteDefaultAttributes) )
    ( (This)->lpVtbl -> WriteNodeShallow(This,pReader,fWriteDefaultAttributes) )
    ( (This)->lpVtbl -> WriteProcessingInstruction(This,pwszName,pwszText) )
    ( (This)->lpVtbl -> WriteQualifiedName(This,pwszLocalName,pwszNamespaceUri) )
    ( (This)->lpVtbl -> WriteRaw(This,pwszData) )
    ( (This)->lpVtbl -> WriteRawChars(This,pwch,cwch) )
    ( (This)->lpVtbl -> WriteStartDocument(This,standalone) )
    ( (This)->lpVtbl -> WriteStartElement(This,pwszPrefix,pwszLocalName,pwszNamespaceUri) )
    ( (This)->lpVtbl -> WriteString(This,pwszText) )
    ( (This)->lpVtbl -> WriteSurrogateCharEntity(This,wchLow,wchHigh) )
    ( (This)->lpVtbl -> WriteWhitespace(This,pwszWhitespace) )
    ( (This)->lpVtbl -> Flush(This) )
EXTERN_C const IID IID_IXmlWriterLite;
    typedef struct IXmlWriterLiteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IXmlWriterLite * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IXmlWriterLite * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IXmlWriterLite * This);
        HRESULT ( STDMETHODCALLTYPE *SetOutput )(
            IXmlWriterLite * This,
            _In_opt_ IUnknown *pOutput);
        HRESULT ( STDMETHODCALLTYPE *GetProperty )(
            IXmlWriterLite * This,
            _In_ UINT nProperty,
            _Out_ LONG_PTR *ppValue);
        HRESULT ( STDMETHODCALLTYPE *SetProperty )(
            IXmlWriterLite * This,
            _In_ UINT nProperty,
            _In_opt_ LONG_PTR pValue);
        HRESULT ( STDMETHODCALLTYPE *WriteAttributes )(
            IXmlWriterLite * This,
            _In_ IXmlReader *pReader,
            _In_ BOOL fWriteDefaultAttributes);
        HRESULT ( STDMETHODCALLTYPE *WriteAttributeString )(
            IXmlWriterLite * This,
            _In_reads_(cwszQName) const WCHAR *pwszQName,
            _In_ UINT cwszQName,
            _In_reads_opt_(cwszValue) const WCHAR *pwszValue,
            _In_ UINT cwszValue);
        HRESULT ( STDMETHODCALLTYPE *WriteCData )(
            IXmlWriterLite * This,
            _In_opt_ LPCWSTR pwszText);
        HRESULT ( STDMETHODCALLTYPE *WriteCharEntity )(
            IXmlWriterLite * This,
            _In_ WCHAR wch);
        HRESULT ( STDMETHODCALLTYPE *WriteChars )(
            IXmlWriterLite * This,
            _In_reads_opt_(cwch) const WCHAR *pwch,
            _In_ UINT cwch);
        HRESULT ( STDMETHODCALLTYPE *WriteComment )(
            IXmlWriterLite * This,
            _In_opt_ LPCWSTR pwszComment);
        HRESULT ( STDMETHODCALLTYPE *WriteDocType )(
            IXmlWriterLite * This,
            _In_opt_ LPCWSTR pwszName,
            _In_opt_ LPCWSTR pwszPublicId,
            _In_opt_ LPCWSTR pwszSystemId,
            _In_opt_ LPCWSTR pwszSubset);
        HRESULT ( STDMETHODCALLTYPE *WriteElementString )(
            IXmlWriterLite * This,
            _In_reads_(cwszQName) const WCHAR *pwszQName,
            _In_ UINT cwszQName,
            _In_opt_ LPCWSTR pwszValue);
        HRESULT ( STDMETHODCALLTYPE *WriteEndDocument )(
            IXmlWriterLite * This);
        HRESULT ( STDMETHODCALLTYPE *WriteEndElement )(
            IXmlWriterLite * This,
            _In_reads_(cwszQName) const WCHAR *pwszQName,
            _In_ UINT cwszQName);
        HRESULT ( STDMETHODCALLTYPE *WriteEntityRef )(
            IXmlWriterLite * This,
            _In_ LPCWSTR pwszName);
        HRESULT ( STDMETHODCALLTYPE *WriteFullEndElement )(
            IXmlWriterLite * This,
            _In_reads_(cwszQName) const WCHAR *pwszQName,
            _In_ UINT cwszQName);
        HRESULT ( STDMETHODCALLTYPE *WriteName )(
            IXmlWriterLite * This,
            _In_ LPCWSTR pwszName);
        HRESULT ( STDMETHODCALLTYPE *WriteNmToken )(
            IXmlWriterLite * This,
            _In_ LPCWSTR pwszNmToken);
        HRESULT ( STDMETHODCALLTYPE *WriteNode )(
            IXmlWriterLite * This,
            _In_ IXmlReader *pReader,
            _In_ BOOL fWriteDefaultAttributes);
        HRESULT ( STDMETHODCALLTYPE *WriteNodeShallow )(
            IXmlWriterLite * This,
            _In_ IXmlReader *pReader,
            _In_ BOOL fWriteDefaultAttributes);
        HRESULT ( STDMETHODCALLTYPE *WriteProcessingInstruction )(
            IXmlWriterLite * This,
            _In_ LPCWSTR pwszName,
            _In_opt_ LPCWSTR pwszText);
        HRESULT ( STDMETHODCALLTYPE *WriteRaw )(
            IXmlWriterLite * This,
            _In_opt_ LPCWSTR pwszData);
        HRESULT ( STDMETHODCALLTYPE *WriteRawChars )(
            IXmlWriterLite * This,
            _In_reads_opt_(cwch) const WCHAR *pwch,
            _In_ UINT cwch);
        HRESULT ( STDMETHODCALLTYPE *WriteStartDocument )(
            IXmlWriterLite * This,
            _In_ XmlStandalone standalone);
        HRESULT ( STDMETHODCALLTYPE *WriteStartElement )(
            IXmlWriterLite * This,
            _In_reads_(cwszQName) const WCHAR *pwszQName,
            _In_ UINT cwszQName);
        HRESULT ( STDMETHODCALLTYPE *WriteString )(
            IXmlWriterLite * This,
            _In_opt_ LPCWSTR pwszText);
        HRESULT ( STDMETHODCALLTYPE *WriteSurrogateCharEntity )(
            IXmlWriterLite * This,
            _In_ WCHAR wchLow,
            _In_ WCHAR wchHigh);
        HRESULT ( STDMETHODCALLTYPE *WriteWhitespace )(
            IXmlWriterLite * This,
            _In_opt_ LPCWSTR pwszWhitespace);
        HRESULT ( STDMETHODCALLTYPE *Flush )(
            IXmlWriterLite * This);
        END_INTERFACE
    } IXmlWriterLiteVtbl;
    interface IXmlWriterLite
    {
        CONST_VTBL struct IXmlWriterLiteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetOutput(This,pOutput) )
    ( (This)->lpVtbl -> GetProperty(This,nProperty,ppValue) )
    ( (This)->lpVtbl -> SetProperty(This,nProperty,pValue) )
    ( (This)->lpVtbl -> WriteAttributes(This,pReader,fWriteDefaultAttributes) )
    ( (This)->lpVtbl -> WriteAttributeString(This,pwszQName,cwszQName,pwszValue,cwszValue) )
    ( (This)->lpVtbl -> WriteCData(This,pwszText) )
    ( (This)->lpVtbl -> WriteCharEntity(This,wch) )
    ( (This)->lpVtbl -> WriteChars(This,pwch,cwch) )
    ( (This)->lpVtbl -> WriteComment(This,pwszComment) )
    ( (This)->lpVtbl -> WriteDocType(This,pwszName,pwszPublicId,pwszSystemId,pwszSubset) )
    ( (This)->lpVtbl -> WriteElementString(This,pwszQName,cwszQName,pwszValue) )
    ( (This)->lpVtbl -> WriteEndDocument(This) )
    ( (This)->lpVtbl -> WriteEndElement(This,pwszQName,cwszQName) )
    ( (This)->lpVtbl -> WriteEntityRef(This,pwszName) )
    ( (This)->lpVtbl -> WriteFullEndElement(This,pwszQName,cwszQName) )
    ( (This)->lpVtbl -> WriteName(This,pwszName) )
    ( (This)->lpVtbl -> WriteNmToken(This,pwszNmToken) )
    ( (This)->lpVtbl -> WriteNode(This,pReader,fWriteDefaultAttributes) )
    ( (This)->lpVtbl -> WriteNodeShallow(This,pReader,fWriteDefaultAttributes) )
    ( (This)->lpVtbl -> WriteProcessingInstruction(This,pwszName,pwszText) )
    ( (This)->lpVtbl -> WriteRaw(This,pwszData) )
    ( (This)->lpVtbl -> WriteRawChars(This,pwch,cwch) )
    ( (This)->lpVtbl -> WriteStartDocument(This,standalone) )
    ( (This)->lpVtbl -> WriteStartElement(This,pwszQName,cwszQName) )
    ( (This)->lpVtbl -> WriteString(This,pwszText) )
    ( (This)->lpVtbl -> WriteSurrogateCharEntity(This,wchLow,wchHigh) )
    ( (This)->lpVtbl -> WriteWhitespace(This,pwszWhitespace) )
    ( (This)->lpVtbl -> Flush(This) )
static const IID _IID_IXmlReader = { 0x7279FC81, 0x709D, 0x4095, { 0xB6, 0x3D, 0x69, 0xFE, 0x4B, 0x0D, 0x90, 0x30 } };
static const IID _IID_IXmlWriter = { 0x7279FC88, 0x709D, 0x4095, { 0xB6, 0x3D, 0x69, 0xFE, 0x4B, 0x0D, 0x90, 0x30 } };
static const IID _IID_IXmlResolver = { 0x7279FC82, 0x709D, 0x4095, { 0xB6, 0x3D, 0x69, 0xFE, 0x4B, 0x0D, 0x90, 0x30 } };
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_xmllite_0000_0001_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_xmllite_0000_0001_v0_0_s_ifspec;
}
