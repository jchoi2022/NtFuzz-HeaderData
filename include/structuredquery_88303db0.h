#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IQueryParser IQueryParser;
typedef interface IConditionFactory IConditionFactory;
typedef interface IQuerySolution IQuerySolution;
typedef interface IConditionFactory2 IConditionFactory2;
typedef interface IConditionGenerator IConditionGenerator;
typedef interface IInterval IInterval;
typedef interface IMetaData IMetaData;
typedef interface IEntity IEntity;
typedef interface IRelationship IRelationship;
typedef interface INamedEntity INamedEntity;
typedef interface ISchemaProvider ISchemaProvider;
typedef interface ITokenCollection ITokenCollection;
typedef interface INamedEntityCollector INamedEntityCollector;
typedef interface ISchemaLocalizerSupport ISchemaLocalizerSupport;
typedef interface IQueryParserManager IQueryParserManager;
typedef class QueryParser QueryParser;
typedef class NegationCondition NegationCondition;
typedef class CompoundCondition CompoundCondition;
typedef class LeafCondition LeafCondition;
typedef class ConditionFactory ConditionFactory;
typedef class Interval Interval;
typedef class QueryParserManager QueryParserManager;
#include "StructuredQueryCondition.h"
#include "ObjectArray.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#if 0
typedef PROPERTYKEY *REFPROPERTYKEY;
#endif
#include <propkeydef.h>
typedef
enum tagSTRUCTURED_QUERY_SYNTAX
    {
        SQS_NO_SYNTAX = 0,
        SQS_ADVANCED_QUERY_SYNTAX = ( SQS_NO_SYNTAX + 1 ) ,
        SQS_NATURAL_QUERY_SYNTAX = ( SQS_ADVANCED_QUERY_SYNTAX + 1 )
    } STRUCTURED_QUERY_SYNTAX;
typedef
enum tagSTRUCTURED_QUERY_SINGLE_OPTION
    {
        SQSO_SCHEMA = 0,
        SQSO_LOCALE_WORD_BREAKING = ( SQSO_SCHEMA + 1 ) ,
        SQSO_WORD_BREAKER = ( SQSO_LOCALE_WORD_BREAKING + 1 ) ,
        SQSO_NATURAL_SYNTAX = ( SQSO_WORD_BREAKER + 1 ) ,
        SQSO_AUTOMATIC_WILDCARD = ( SQSO_NATURAL_SYNTAX + 1 ) ,
        SQSO_TRACE_LEVEL = ( SQSO_AUTOMATIC_WILDCARD + 1 ) ,
        SQSO_LANGUAGE_KEYWORDS = ( SQSO_TRACE_LEVEL + 1 ) ,
        SQSO_SYNTAX = ( SQSO_LANGUAGE_KEYWORDS + 1 ) ,
        SQSO_TIME_ZONE = ( SQSO_SYNTAX + 1 ) ,
        SQSO_IMPLICIT_CONNECTOR = ( SQSO_TIME_ZONE + 1 ) ,
        SQSO_CONNECTOR_CASE = ( SQSO_IMPLICIT_CONNECTOR + 1 )
    } STRUCTURED_QUERY_SINGLE_OPTION;
typedef
enum tagSTRUCTURED_QUERY_MULTIOPTION
    {
        SQMO_VIRTUAL_PROPERTY = 0,
        SQMO_DEFAULT_PROPERTY = ( SQMO_VIRTUAL_PROPERTY + 1 ) ,
        SQMO_GENERATOR_FOR_TYPE = ( SQMO_DEFAULT_PROPERTY + 1 ) ,
        SQMO_MAP_PROPERTY = ( SQMO_GENERATOR_FOR_TYPE + 1 )
    } STRUCTURED_QUERY_MULTIOPTION;
typedef
enum tagSTRUCTURED_QUERY_PARSE_ERROR
    {
        SQPE_NONE = 0,
        SQPE_EXTRA_OPENING_PARENTHESIS = ( SQPE_NONE + 1 ) ,
        SQPE_EXTRA_CLOSING_PARENTHESIS = ( SQPE_EXTRA_OPENING_PARENTHESIS + 1 ) ,
        SQPE_IGNORED_MODIFIER = ( SQPE_EXTRA_CLOSING_PARENTHESIS + 1 ) ,
        SQPE_IGNORED_CONNECTOR = ( SQPE_IGNORED_MODIFIER + 1 ) ,
        SQPE_IGNORED_KEYWORD = ( SQPE_IGNORED_CONNECTOR + 1 ) ,
        SQPE_UNHANDLED = ( SQPE_IGNORED_KEYWORD + 1 )
    } STRUCTURED_QUERY_PARSE_ERROR;
typedef
enum STRUCTURED_QUERY_RESOLVE_OPTION
    {
        SQRO_DEFAULT = 0,
        SQRO_DONT_RESOLVE_DATETIME = 0x1,
        SQRO_ALWAYS_ONE_INTERVAL = 0x2,
        SQRO_DONT_SIMPLIFY_CONDITION_TREES = 0x4,
        SQRO_DONT_MAP_RELATIONS = 0x8,
        SQRO_DONT_RESOLVE_RANGES = 0x10,
        SQRO_DONT_REMOVE_UNRESTRICTED_KEYWORDS = 0x20,
        SQRO_DONT_SPLIT_WORDS = 0x40,
        SQRO_IGNORE_PHRASE_ORDER = 0x80,
        SQRO_ADD_VALUE_TYPE_FOR_PLAIN_VALUES = 0x100,
        SQRO_ADD_ROBUST_ITEM_NAME = 0x200
    } STRUCTURED_QUERY_RESOLVE_OPTION;
DEFINE_ENUM_FLAG_OPERATORS(STRUCTURED_QUERY_RESOLVE_OPTION);
typedef
enum CASE_REQUIREMENT
    {
        CASE_REQUIREMENT_ANY = 0,
        CASE_REQUIREMENT_UPPER_IF_AQS = ( CASE_REQUIREMENT_ANY + 1 )
    } CASE_REQUIREMENT;
typedef
enum tagINTERVAL_LIMIT_KIND
    {
        ILK_EXPLICIT_INCLUDED = 0,
        ILK_EXPLICIT_EXCLUDED = ( ILK_EXPLICIT_INCLUDED + 1 ) ,
        ILK_NEGATIVE_INFINITY = ( ILK_EXPLICIT_EXCLUDED + 1 ) ,
        ILK_POSITIVE_INFINITY = ( ILK_NEGATIVE_INFINITY + 1 )
    } INTERVAL_LIMIT_KIND;
typedef
enum tagQUERY_PARSER_MANAGER_OPTION
    {
        QPMO_SCHEMA_BINARY_NAME = 0,
        QPMO_PRELOCALIZED_SCHEMA_BINARY_PATH = ( QPMO_SCHEMA_BINARY_NAME + 1 ) ,
        QPMO_UNLOCALIZED_SCHEMA_BINARY_PATH = ( QPMO_PRELOCALIZED_SCHEMA_BINARY_PATH + 1 ) ,
        QPMO_LOCALIZED_SCHEMA_BINARY_PATH = ( QPMO_UNLOCALIZED_SCHEMA_BINARY_PATH + 1 ) ,
        QPMO_APPEND_LCID_TO_LOCALIZED_PATH = ( QPMO_LOCALIZED_SCHEMA_BINARY_PATH + 1 ) ,
        QPMO_LOCALIZER_SUPPORT = ( QPMO_APPEND_LCID_TO_LOCALIZED_PATH + 1 )
    } QUERY_PARSER_MANAGER_OPTION;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IQueryParser;
    typedef struct IQueryParserVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IQueryParser * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IQueryParser * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IQueryParser * This);
        HRESULT ( STDMETHODCALLTYPE *Parse )(
            __RPC__in IQueryParser * This,
                       __RPC__in LPCWSTR pszInputString,
                       __RPC__in_opt IEnumUnknown *pCustomProperties,
                                __RPC__deref_out_opt IQuerySolution **ppSolution);
        HRESULT ( STDMETHODCALLTYPE *SetOption )(
            __RPC__in IQueryParser * This,
                       STRUCTURED_QUERY_SINGLE_OPTION option,
                       __RPC__in const PROPVARIANT *pOptionValue);
        HRESULT ( STDMETHODCALLTYPE *GetOption )(
            __RPC__in IQueryParser * This,
                       STRUCTURED_QUERY_SINGLE_OPTION option,
                                __RPC__out PROPVARIANT *pOptionValue);
        HRESULT ( STDMETHODCALLTYPE *SetMultiOption )(
            __RPC__in IQueryParser * This,
                       STRUCTURED_QUERY_MULTIOPTION option,
                       __RPC__in LPCWSTR pszOptionKey,
                       __RPC__in const PROPVARIANT *pOptionValue);
        HRESULT ( STDMETHODCALLTYPE *GetSchemaProvider )(
            __RPC__in IQueryParser * This,
                                __RPC__deref_out_opt ISchemaProvider **ppSchemaProvider);
        HRESULT ( STDMETHODCALLTYPE *RestateToString )(
            __RPC__in IQueryParser * This,
                       __RPC__in_opt ICondition *pCondition,
                       BOOL fUseEnglish,
                        __RPC__deref_out_opt LPWSTR *ppszQueryString);
        HRESULT ( STDMETHODCALLTYPE *ParsePropertyValue )(
            __RPC__in IQueryParser * This,
                       __RPC__in LPCWSTR pszPropertyName,
                       __RPC__in LPCWSTR pszInputString,
                                __RPC__deref_out_opt IQuerySolution **ppSolution);
        HRESULT ( STDMETHODCALLTYPE *RestatePropertyValueToString )(
            __RPC__in IQueryParser * This,
                       __RPC__in_opt ICondition *pCondition,
                       BOOL fUseEnglish,
                        __RPC__deref_out_opt LPWSTR *ppszPropertyName,
                        __RPC__deref_out_opt LPWSTR *ppszQueryString);
        END_INTERFACE
    } IQueryParserVtbl;
    interface IQueryParser
    {
        CONST_VTBL struct IQueryParserVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Parse(This,pszInputString,pCustomProperties,ppSolution) )
    ( (This)->lpVtbl -> SetOption(This,option,pOptionValue) )
    ( (This)->lpVtbl -> GetOption(This,option,pOptionValue) )
    ( (This)->lpVtbl -> SetMultiOption(This,option,pszOptionKey,pOptionValue) )
    ( (This)->lpVtbl -> GetSchemaProvider(This,ppSchemaProvider) )
    ( (This)->lpVtbl -> RestateToString(This,pCondition,fUseEnglish,ppszQueryString) )
    ( (This)->lpVtbl -> ParsePropertyValue(This,pszPropertyName,pszInputString,ppSolution) )
    ( (This)->lpVtbl -> RestatePropertyValueToString(This,pCondition,fUseEnglish,ppszPropertyName,ppszQueryString) )
EXTERN_C const IID IID_IConditionFactory;
    typedef struct IConditionFactoryVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IConditionFactory * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IConditionFactory * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IConditionFactory * This);
        HRESULT ( STDMETHODCALLTYPE *MakeNot )(
            __RPC__in IConditionFactory * This,
                       __RPC__in_opt ICondition *pcSub,
                       BOOL fSimplify,
                                __RPC__deref_out_opt ICondition **ppcResult);
        HRESULT ( STDMETHODCALLTYPE *MakeAndOr )(
            __RPC__in IConditionFactory * This,
                       CONDITION_TYPE ct,
                       __RPC__in_opt IEnumUnknown *peuSubs,
                       BOOL fSimplify,
                                __RPC__deref_out_opt ICondition **ppcResult);
        HRESULT ( STDMETHODCALLTYPE *MakeLeaf )(
            __RPC__in IConditionFactory * This,
                               __RPC__in_opt LPCWSTR pszPropertyName,
                       CONDITION_OPERATION cop,
                               __RPC__in_opt LPCWSTR pszValueType,
                       __RPC__in const PROPVARIANT *ppropvar,
                       __RPC__in_opt IRichChunk *pPropertyNameTerm,
                       __RPC__in_opt IRichChunk *pOperationTerm,
                       __RPC__in_opt IRichChunk *pValueTerm,
                       BOOL fExpand,
                                __RPC__deref_out_opt ICondition **ppcResult);
                      HRESULT ( STDMETHODCALLTYPE *Resolve )(
            IConditionFactory * This,
            _In_ ICondition *pc,
            _In_ STRUCTURED_QUERY_RESOLVE_OPTION sqro,
            _In_opt_ const SYSTEMTIME *pstReferenceTime,
            _Out_ ICondition **ppcResolved);
        END_INTERFACE
    } IConditionFactoryVtbl;
    interface IConditionFactory
    {
        CONST_VTBL struct IConditionFactoryVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MakeNot(This,pcSub,fSimplify,ppcResult) )
    ( (This)->lpVtbl -> MakeAndOr(This,ct,peuSubs,fSimplify,ppcResult) )
    ( (This)->lpVtbl -> MakeLeaf(This,pszPropertyName,cop,pszValueType,ppropvar,pPropertyNameTerm,pOperationTerm,pValueTerm,fExpand,ppcResult) )
    ( (This)->lpVtbl -> Resolve(This,pc,sqro,pstReferenceTime,ppcResolved) )
EXTERN_C const IID IID_IQuerySolution;
    typedef struct IQuerySolutionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IQuerySolution * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IQuerySolution * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IQuerySolution * This);
        HRESULT ( STDMETHODCALLTYPE *MakeNot )(
            __RPC__in IQuerySolution * This,
                       __RPC__in_opt ICondition *pcSub,
                       BOOL fSimplify,
                                __RPC__deref_out_opt ICondition **ppcResult);
        HRESULT ( STDMETHODCALLTYPE *MakeAndOr )(
            __RPC__in IQuerySolution * This,
                       CONDITION_TYPE ct,
                       __RPC__in_opt IEnumUnknown *peuSubs,
                       BOOL fSimplify,
                                __RPC__deref_out_opt ICondition **ppcResult);
        HRESULT ( STDMETHODCALLTYPE *MakeLeaf )(
            __RPC__in IQuerySolution * This,
                               __RPC__in_opt LPCWSTR pszPropertyName,
                       CONDITION_OPERATION cop,
                               __RPC__in_opt LPCWSTR pszValueType,
                       __RPC__in const PROPVARIANT *ppropvar,
                       __RPC__in_opt IRichChunk *pPropertyNameTerm,
                       __RPC__in_opt IRichChunk *pOperationTerm,
                       __RPC__in_opt IRichChunk *pValueTerm,
                       BOOL fExpand,
                                __RPC__deref_out_opt ICondition **ppcResult);
                      HRESULT ( STDMETHODCALLTYPE *Resolve )(
            IQuerySolution * This,
            _In_ ICondition *pc,
            _In_ STRUCTURED_QUERY_RESOLVE_OPTION sqro,
            _In_opt_ const SYSTEMTIME *pstReferenceTime,
            _Out_ ICondition **ppcResolved);
                      HRESULT ( STDMETHODCALLTYPE *GetQuery )(
            IQuerySolution * This,
            _Out_opt_ ICondition **ppQueryNode,
            _Out_opt_ IEntity **ppMainType);
        HRESULT ( STDMETHODCALLTYPE *GetErrors )(
            __RPC__in IQuerySolution * This,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **ppParseErrors);
                      HRESULT ( STDMETHODCALLTYPE *GetLexicalData )(
            IQuerySolution * This,
            _Outptr_opt_ LPWSTR *ppszInputString,
            _Out_opt_ ITokenCollection **ppTokens,
            _Out_opt_ LCID *plcid,
            _Out_opt_ IUnknown **ppWordBreaker);
        END_INTERFACE
    } IQuerySolutionVtbl;
    interface IQuerySolution
    {
        CONST_VTBL struct IQuerySolutionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MakeNot(This,pcSub,fSimplify,ppcResult) )
    ( (This)->lpVtbl -> MakeAndOr(This,ct,peuSubs,fSimplify,ppcResult) )
    ( (This)->lpVtbl -> MakeLeaf(This,pszPropertyName,cop,pszValueType,ppropvar,pPropertyNameTerm,pOperationTerm,pValueTerm,fExpand,ppcResult) )
    ( (This)->lpVtbl -> Resolve(This,pc,sqro,pstReferenceTime,ppcResolved) )
    ( (This)->lpVtbl -> GetQuery(This,ppQueryNode,ppMainType) )
    ( (This)->lpVtbl -> GetErrors(This,riid,ppParseErrors) )
    ( (This)->lpVtbl -> GetLexicalData(This,ppszInputString,ppTokens,plcid,ppWordBreaker) )
typedef
enum CONDITION_CREATION_OPTIONS
    {
        CONDITION_CREATION_DEFAULT = 0,
        CONDITION_CREATION_NONE = 0,
        CONDITION_CREATION_SIMPLIFY = 0x1,
        CONDITION_CREATION_VECTOR_AND = 0x2,
        CONDITION_CREATION_VECTOR_OR = 0x4,
        CONDITION_CREATION_VECTOR_LEAF = 0x8,
        CONDITION_CREATION_USE_CONTENT_LOCALE = 0x10
    } CONDITION_CREATION_OPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(CONDITION_CREATION_OPTIONS);
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IConditionFactory2;
    typedef struct IConditionFactory2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IConditionFactory2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IConditionFactory2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IConditionFactory2 * This);
        HRESULT ( STDMETHODCALLTYPE *MakeNot )(
            IConditionFactory2 * This,
                       ICondition *pcSub,
                       BOOL fSimplify,
                                ICondition **ppcResult);
        HRESULT ( STDMETHODCALLTYPE *MakeAndOr )(
            IConditionFactory2 * This,
                       CONDITION_TYPE ct,
                       IEnumUnknown *peuSubs,
                       BOOL fSimplify,
                                ICondition **ppcResult);
        HRESULT ( STDMETHODCALLTYPE *MakeLeaf )(
            IConditionFactory2 * This,
                               LPCWSTR pszPropertyName,
                       CONDITION_OPERATION cop,
                               LPCWSTR pszValueType,
                       const PROPVARIANT *ppropvar,
                       IRichChunk *pPropertyNameTerm,
                       IRichChunk *pOperationTerm,
                       IRichChunk *pValueTerm,
                       BOOL fExpand,
                                ICondition **ppcResult);
                      HRESULT ( STDMETHODCALLTYPE *Resolve )(
            IConditionFactory2 * This,
            _In_ ICondition *pc,
            _In_ STRUCTURED_QUERY_RESOLVE_OPTION sqro,
            _In_opt_ const SYSTEMTIME *pstReferenceTime,
            _Out_ ICondition **ppcResolved);
        HRESULT ( STDMETHODCALLTYPE *CreateTrueFalse )(
            IConditionFactory2 * This,
                       BOOL fVal,
                       CONDITION_CREATION_OPTIONS cco,
                       REFIID riid,
                                void **ppv);
        HRESULT ( STDMETHODCALLTYPE *CreateNegation )(
            IConditionFactory2 * This,
                       ICondition *pcSub,
                       CONDITION_CREATION_OPTIONS cco,
                       REFIID riid,
                                void **ppv);
        HRESULT ( STDMETHODCALLTYPE *CreateCompoundFromObjectArray )(
            IConditionFactory2 * This,
                       CONDITION_TYPE ct,
            _In_opt_ IObjectArray *poaSubs,
                       CONDITION_CREATION_OPTIONS cco,
                       REFIID riid,
                                void **ppv);
        HRESULT ( STDMETHODCALLTYPE *CreateCompoundFromArray )(
            IConditionFactory2 * This,
                       CONDITION_TYPE ct,
                                ICondition **ppcondSubs,
                       ULONG cSubs,
                       CONDITION_CREATION_OPTIONS cco,
                       REFIID riid,
                                void **ppv);
        HRESULT ( STDMETHODCALLTYPE *CreateStringLeaf )(
            IConditionFactory2 * This,
                       REFPROPERTYKEY propkey,
                       CONDITION_OPERATION cop,
                       LPCWSTR pszValue,
            _In_opt_ LPCWSTR pszLocaleName,
                       CONDITION_CREATION_OPTIONS cco,
                       REFIID riid,
                                void **ppv);
        HRESULT ( STDMETHODCALLTYPE *CreateIntegerLeaf )(
            IConditionFactory2 * This,
                       REFPROPERTYKEY propkey,
                       CONDITION_OPERATION cop,
                       INT32 lValue,
                       CONDITION_CREATION_OPTIONS cco,
                       REFIID riid,
                                void **ppv);
        HRESULT ( STDMETHODCALLTYPE *CreateBooleanLeaf )(
            IConditionFactory2 * This,
                       REFPROPERTYKEY propkey,
                       CONDITION_OPERATION cop,
                       BOOL fValue,
                       CONDITION_CREATION_OPTIONS cco,
                       REFIID riid,
                                void **ppv);
        HRESULT ( STDMETHODCALLTYPE *CreateLeaf )(
            IConditionFactory2 * This,
                       REFPROPERTYKEY propkey,
                       CONDITION_OPERATION cop,
                       REFPROPVARIANT propvar,
            _In_opt_ LPCWSTR pszSemanticType,
            _In_opt_ LPCWSTR pszLocaleName,
            _In_opt_ IRichChunk *pPropertyNameTerm,
            _In_opt_ IRichChunk *pOperationTerm,
            _In_opt_ IRichChunk *pValueTerm,
                       CONDITION_CREATION_OPTIONS cco,
                       REFIID riid,
                                void **ppv);
        HRESULT ( STDMETHODCALLTYPE *ResolveCondition )(
            IConditionFactory2 * This,
                       ICondition *pc,
                       STRUCTURED_QUERY_RESOLVE_OPTION sqro,
            _In_opt_ const SYSTEMTIME *pstReferenceTime,
                       REFIID riid,
                                void **ppv);
        END_INTERFACE
    } IConditionFactory2Vtbl;
    interface IConditionFactory2
    {
        CONST_VTBL struct IConditionFactory2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> MakeNot(This,pcSub,fSimplify,ppcResult) )
    ( (This)->lpVtbl -> MakeAndOr(This,ct,peuSubs,fSimplify,ppcResult) )
    ( (This)->lpVtbl -> MakeLeaf(This,pszPropertyName,cop,pszValueType,ppropvar,pPropertyNameTerm,pOperationTerm,pValueTerm,fExpand,ppcResult) )
    ( (This)->lpVtbl -> Resolve(This,pc,sqro,pstReferenceTime,ppcResolved) )
    ( (This)->lpVtbl -> CreateTrueFalse(This,fVal,cco,riid,ppv) )
    ( (This)->lpVtbl -> CreateNegation(This,pcSub,cco,riid,ppv) )
    ( (This)->lpVtbl -> CreateCompoundFromObjectArray(This,ct,poaSubs,cco,riid,ppv) )
    ( (This)->lpVtbl -> CreateCompoundFromArray(This,ct,ppcondSubs,cSubs,cco,riid,ppv) )
    ( (This)->lpVtbl -> CreateStringLeaf(This,propkey,cop,pszValue,pszLocaleName,cco,riid,ppv) )
    ( (This)->lpVtbl -> CreateIntegerLeaf(This,propkey,cop,lValue,cco,riid,ppv) )
    ( (This)->lpVtbl -> CreateBooleanLeaf(This,propkey,cop,fValue,cco,riid,ppv) )
    ( (This)->lpVtbl -> CreateLeaf(This,propkey,cop,propvar,pszSemanticType,pszLocaleName,pPropertyNameTerm,pOperationTerm,pValueTerm,cco,riid,ppv) )
    ( (This)->lpVtbl -> ResolveCondition(This,pc,sqro,pstReferenceTime,riid,ppv) )
EXTERN_C const IID IID_IConditionGenerator;
    typedef struct IConditionGeneratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IConditionGenerator * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IConditionGenerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IConditionGenerator * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            __RPC__in IConditionGenerator * This,
                       __RPC__in_opt ISchemaProvider *pSchemaProvider);
        HRESULT ( STDMETHODCALLTYPE *RecognizeNamedEntities )(
            __RPC__in IConditionGenerator * This,
                       __RPC__in LPCWSTR pszInputString,
                       LCID lcidUserLocale,
                       __RPC__in_opt ITokenCollection *pTokenCollection,
                            __RPC__inout_opt INamedEntityCollector *pNamedEntities);
        HRESULT ( STDMETHODCALLTYPE *GenerateForLeaf )(
            __RPC__in IConditionGenerator * This,
                       __RPC__in_opt IConditionFactory *pConditionFactory,
                               __RPC__in_opt LPCWSTR pszPropertyName,
                       CONDITION_OPERATION cop,
                               __RPC__in_opt LPCWSTR pszValueType,
                       __RPC__in LPCWSTR pszValue,
                               __RPC__in_opt LPCWSTR pszValue2,
                       __RPC__in_opt IRichChunk *pPropertyNameTerm,
                       __RPC__in_opt IRichChunk *pOperationTerm,
                       __RPC__in_opt IRichChunk *pValueTerm,
                       BOOL automaticWildcard,
                        __RPC__out BOOL *pNoStringQuery,
                                __RPC__deref_out_opt ICondition **ppQueryExpression);
                      HRESULT ( STDMETHODCALLTYPE *DefaultPhrase )(
            IConditionGenerator * This,
                               LPCWSTR pszValueType,
                       const PROPVARIANT *ppropvar,
                       BOOL fUseEnglish,
            _Outptr_opt_ LPWSTR *ppszPhrase);
        END_INTERFACE
    } IConditionGeneratorVtbl;
    interface IConditionGenerator
    {
        CONST_VTBL struct IConditionGeneratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,pSchemaProvider) )
    ( (This)->lpVtbl -> RecognizeNamedEntities(This,pszInputString,lcidUserLocale,pTokenCollection,pNamedEntities) )
    ( (This)->lpVtbl -> GenerateForLeaf(This,pConditionFactory,pszPropertyName,cop,pszValueType,pszValue,pszValue2,pPropertyNameTerm,pOperationTerm,pValueTerm,automaticWildcard,pNoStringQuery,ppQueryExpression) )
    ( (This)->lpVtbl -> DefaultPhrase(This,pszValueType,ppropvar,fUseEnglish,ppszPhrase) )
EXTERN_C const IID IID_IInterval;
    typedef struct IIntervalVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IInterval * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IInterval * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IInterval * This);
        HRESULT ( STDMETHODCALLTYPE *GetLimits )(
            __RPC__in IInterval * This,
                        __RPC__out INTERVAL_LIMIT_KIND *pilkLower,
                        __RPC__out PROPVARIANT *ppropvarLower,
                        __RPC__out INTERVAL_LIMIT_KIND *pilkUpper,
                        __RPC__out PROPVARIANT *ppropvarUpper);
        END_INTERFACE
    } IIntervalVtbl;
    interface IInterval
    {
        CONST_VTBL struct IIntervalVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetLimits(This,pilkLower,ppropvarLower,pilkUpper,ppropvarUpper) )
EXTERN_C const IID IID_IMetaData;
    typedef struct IMetaDataVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IMetaData * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IMetaData * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IMetaData * This);
                      HRESULT ( STDMETHODCALLTYPE *GetData )(
            IMetaData * This,
            _Outptr_opt_ LPWSTR *ppszKey,
            _Outptr_opt_ LPWSTR *ppszValue);
        END_INTERFACE
    } IMetaDataVtbl;
    interface IMetaData
    {
        CONST_VTBL struct IMetaDataVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetData(This,ppszKey,ppszValue) )
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IEntity;
    typedef struct IEntityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IEntity * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IEntity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IEntity * This);
                      HRESULT ( STDMETHODCALLTYPE *Name )(
            IEntity * This,
            _Outptr_opt_ LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *Base )(
            __RPC__in IEntity * This,
                                __RPC__deref_out_opt IEntity **pBaseEntity);
        HRESULT ( STDMETHODCALLTYPE *Relationships )(
            __RPC__in IEntity * This,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **pRelationships);
        HRESULT ( STDMETHODCALLTYPE *GetRelationship )(
            __RPC__in IEntity * This,
                       __RPC__in LPCWSTR pszRelationName,
                                __RPC__deref_out_opt IRelationship **pRelationship);
        HRESULT ( STDMETHODCALLTYPE *MetaData )(
            __RPC__in IEntity * This,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **pMetaData);
        HRESULT ( STDMETHODCALLTYPE *NamedEntities )(
            __RPC__in IEntity * This,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **pNamedEntities);
        HRESULT ( STDMETHODCALLTYPE *GetNamedEntity )(
            __RPC__in IEntity * This,
                       __RPC__in LPCWSTR pszValue,
                                __RPC__deref_out_opt INamedEntity **ppNamedEntity);
                      HRESULT ( STDMETHODCALLTYPE *DefaultPhrase )(
            IEntity * This,
            _Outptr_opt_ LPWSTR *ppszPhrase);
        END_INTERFACE
    } IEntityVtbl;
    interface IEntity
    {
        CONST_VTBL struct IEntityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Name(This,ppszName) )
    ( (This)->lpVtbl -> Base(This,pBaseEntity) )
    ( (This)->lpVtbl -> Relationships(This,riid,pRelationships) )
    ( (This)->lpVtbl -> GetRelationship(This,pszRelationName,pRelationship) )
    ( (This)->lpVtbl -> MetaData(This,riid,pMetaData) )
    ( (This)->lpVtbl -> NamedEntities(This,riid,pNamedEntities) )
    ( (This)->lpVtbl -> GetNamedEntity(This,pszValue,ppNamedEntity) )
    ( (This)->lpVtbl -> DefaultPhrase(This,ppszPhrase) )
EXTERN_C const IID IID_IRelationship;
    typedef struct IRelationshipVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IRelationship * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IRelationship * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IRelationship * This);
                      HRESULT ( STDMETHODCALLTYPE *Name )(
            IRelationship * This,
            _Outptr_opt_ LPWSTR *ppszName);
        HRESULT ( STDMETHODCALLTYPE *IsReal )(
            __RPC__in IRelationship * This,
                                __RPC__out BOOL *pIsReal);
        HRESULT ( STDMETHODCALLTYPE *Destination )(
            __RPC__in IRelationship * This,
                                __RPC__deref_out_opt IEntity **pDestinationEntity);
        HRESULT ( STDMETHODCALLTYPE *MetaData )(
            __RPC__in IRelationship * This,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **pMetaData);
                      HRESULT ( STDMETHODCALLTYPE *DefaultPhrase )(
            IRelationship * This,
            _Outptr_opt_ LPWSTR *ppszPhrase);
        END_INTERFACE
    } IRelationshipVtbl;
    interface IRelationship
    {
        CONST_VTBL struct IRelationshipVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Name(This,ppszName) )
    ( (This)->lpVtbl -> IsReal(This,pIsReal) )
    ( (This)->lpVtbl -> Destination(This,pDestinationEntity) )
    ( (This)->lpVtbl -> MetaData(This,riid,pMetaData) )
    ( (This)->lpVtbl -> DefaultPhrase(This,ppszPhrase) )
EXTERN_C const IID IID_INamedEntity;
    typedef struct INamedEntityVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INamedEntity * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INamedEntity * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INamedEntity * This);
        HRESULT ( STDMETHODCALLTYPE *GetValue )(
            __RPC__in INamedEntity * This,
                                __RPC__deref_out_opt LPWSTR *ppszValue);
                      HRESULT ( STDMETHODCALLTYPE *DefaultPhrase )(
            INamedEntity * This,
            _Outptr_opt_ LPWSTR *ppszPhrase);
        END_INTERFACE
    } INamedEntityVtbl;
    interface INamedEntity
    {
        CONST_VTBL struct INamedEntityVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetValue(This,ppszValue) )
    ( (This)->lpVtbl -> DefaultPhrase(This,ppszPhrase) )
EXTERN_C const IID IID_ISchemaProvider;
    typedef struct ISchemaProviderVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISchemaProvider * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISchemaProvider * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISchemaProvider * This);
        HRESULT ( STDMETHODCALLTYPE *Entities )(
            __RPC__in ISchemaProvider * This,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **pEntities);
        HRESULT ( STDMETHODCALLTYPE *RootEntity )(
            __RPC__in ISchemaProvider * This,
                                __RPC__deref_out_opt IEntity **pRootEntity);
        HRESULT ( STDMETHODCALLTYPE *GetEntity )(
            __RPC__in ISchemaProvider * This,
                       __RPC__in LPCWSTR pszEntityName,
                                __RPC__deref_out_opt IEntity **pEntity);
        HRESULT ( STDMETHODCALLTYPE *MetaData )(
            __RPC__in ISchemaProvider * This,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **pMetaData);
        HRESULT ( STDMETHODCALLTYPE *Localize )(
            __RPC__in ISchemaProvider * This,
                       LCID lcid,
                       __RPC__in_opt ISchemaLocalizerSupport *pSchemaLocalizerSupport);
        HRESULT ( STDMETHODCALLTYPE *SaveBinary )(
            __RPC__in ISchemaProvider * This,
                       __RPC__in LPCWSTR pszSchemaBinaryPath);
        HRESULT ( STDMETHODCALLTYPE *LookupAuthoredNamedEntity )(
            __RPC__in ISchemaProvider * This,
                       __RPC__in_opt IEntity *pEntity,
                       __RPC__in LPCWSTR pszInputString,
                       __RPC__in_opt ITokenCollection *pTokenCollection,
                       ULONG cTokensBegin,
                        __RPC__out ULONG *pcTokensLength,
                        __RPC__deref_out_opt LPWSTR *ppszValue);
        END_INTERFACE
    } ISchemaProviderVtbl;
    interface ISchemaProvider
    {
        CONST_VTBL struct ISchemaProviderVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Entities(This,riid,pEntities) )
    ( (This)->lpVtbl -> RootEntity(This,pRootEntity) )
    ( (This)->lpVtbl -> GetEntity(This,pszEntityName,pEntity) )
    ( (This)->lpVtbl -> MetaData(This,riid,pMetaData) )
    ( (This)->lpVtbl -> Localize(This,lcid,pSchemaLocalizerSupport) )
    ( (This)->lpVtbl -> SaveBinary(This,pszSchemaBinaryPath) )
    ( (This)->lpVtbl -> LookupAuthoredNamedEntity(This,pEntity,pszInputString,pTokenCollection,cTokensBegin,pcTokensLength,ppszValue) )
EXTERN_C const IID IID_ITokenCollection;
    typedef struct ITokenCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ITokenCollection * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ITokenCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ITokenCollection * This);
        HRESULT ( STDMETHODCALLTYPE *NumberOfTokens )(
            __RPC__in ITokenCollection * This,
            __RPC__in ULONG *pCount);
                      HRESULT ( STDMETHODCALLTYPE *GetToken )(
            ITokenCollection * This,
                       ULONG i,
            _Out_opt_ ULONG *pBegin,
            _Out_opt_ ULONG *pLength,
            _Outptr_opt_ LPWSTR *ppsz);
        END_INTERFACE
    } ITokenCollectionVtbl;
    interface ITokenCollection
    {
        CONST_VTBL struct ITokenCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> NumberOfTokens(This,pCount) )
    ( (This)->lpVtbl -> GetToken(This,i,pBegin,pLength,ppsz) )
typedef
enum __MIDL___MIDL_itf_structuredquery_0000_0012_0001
    {
        NEC_LOW = 0,
        NEC_MEDIUM = ( NEC_LOW + 1 ) ,
        NEC_HIGH = ( NEC_MEDIUM + 1 )
    } NAMED_ENTITY_CERTAINTY;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0012_v0_0_s_ifspec;
EXTERN_C const IID IID_INamedEntityCollector;
    typedef struct INamedEntityCollectorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in INamedEntityCollector * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in INamedEntityCollector * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in INamedEntityCollector * This);
        HRESULT ( STDMETHODCALLTYPE *Add )(
            __RPC__in INamedEntityCollector * This,
                       ULONG beginSpan,
                       ULONG endSpan,
                       ULONG beginActual,
                       ULONG endActual,
                       __RPC__in_opt IEntity *pType,
                       __RPC__in LPCWSTR pszValue,
                       NAMED_ENTITY_CERTAINTY certainty);
        END_INTERFACE
    } INamedEntityCollectorVtbl;
    interface INamedEntityCollector
    {
        CONST_VTBL struct INamedEntityCollectorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Add(This,beginSpan,endSpan,beginActual,endActual,pType,pszValue,certainty) )
EXTERN_C const IID IID_ISchemaLocalizerSupport;
    typedef struct ISchemaLocalizerSupportVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in ISchemaLocalizerSupport * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in ISchemaLocalizerSupport * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in ISchemaLocalizerSupport * This);
        HRESULT ( STDMETHODCALLTYPE *Localize )(
            __RPC__in ISchemaLocalizerSupport * This,
                       __RPC__in LPCWSTR pszGlobalString,
                                __RPC__deref_out_opt LPWSTR *ppszLocalString);
        END_INTERFACE
    } ISchemaLocalizerSupportVtbl;
    interface ISchemaLocalizerSupport
    {
        CONST_VTBL struct ISchemaLocalizerSupportVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Localize(This,pszGlobalString,ppszLocalString) )
EXTERN_C const IID IID_IQueryParserManager;
    typedef struct IQueryParserManagerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IQueryParserManager * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IQueryParserManager * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IQueryParserManager * This);
        HRESULT ( STDMETHODCALLTYPE *CreateLoadedParser )(
            __RPC__in IQueryParserManager * This,
                       __RPC__in LPCWSTR pszCatalog,
                       LANGID langidForKeywords,
                       __RPC__in REFIID riid,
                                        __RPC__deref_out_opt void **ppQueryParser);
        HRESULT ( STDMETHODCALLTYPE *InitializeOptions )(
            __RPC__in IQueryParserManager * This,
                       BOOL fUnderstandNQS,
                       BOOL fAutoWildCard,
                       __RPC__in_opt IQueryParser *pQueryParser);
        HRESULT ( STDMETHODCALLTYPE *SetOption )(
            __RPC__in IQueryParserManager * This,
                       QUERY_PARSER_MANAGER_OPTION option,
                       __RPC__in const PROPVARIANT *pOptionValue);
        END_INTERFACE
    } IQueryParserManagerVtbl;
    interface IQueryParserManager
    {
        CONST_VTBL struct IQueryParserManagerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> CreateLoadedParser(This,pszCatalog,langidForKeywords,riid,ppQueryParser) )
    ( (This)->lpVtbl -> InitializeOptions(This,fUnderstandNQS,fAutoWildCard,pQueryParser) )
    ( (This)->lpVtbl -> SetOption(This,option,pOptionValue) )
typedef struct tagHITRANGE
    {
    ULONG iPosition;
    ULONG cLength;
    } HITRANGE;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0015_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0015_v0_0_s_ifspec;
EXTERN_C const IID LIBID_StructuredQuery1;
EXTERN_C const CLSID CLSID_QueryParser;
class DECLSPEC_UUID("B72F8FD8-0FAB-4dd9-BDBF-245A6CE1485B")
QueryParser;
EXTERN_C const CLSID CLSID_NegationCondition;
class DECLSPEC_UUID("8DE9C74C-605A-4acd-BEE3-2B222AA2D23D")
NegationCondition;
EXTERN_C const CLSID CLSID_CompoundCondition;
class DECLSPEC_UUID("116F8D13-101E-4fa5-84D4-FF8279381935")
CompoundCondition;
EXTERN_C const CLSID CLSID_LeafCondition;
class DECLSPEC_UUID("52F15C89-5A17-48e1-BBCD-46A3F89C7CC2")
LeafCondition;
EXTERN_C const CLSID CLSID_ConditionFactory;
class DECLSPEC_UUID("E03E85B0-7BE3-4000-BA98-6C13DE9FA486")
ConditionFactory;
EXTERN_C const CLSID CLSID_Interval;
class DECLSPEC_UUID("D957171F-4BF9-4de2-BCD5-C70A7CA55836")
Interval;
EXTERN_C const CLSID CLSID_QueryParserManager;
class DECLSPEC_UUID("5088B39A-29B4-4d9d-8245-4EE289222F66")
QueryParserManager;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0016_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_structuredquery_0000_0016_v0_0_s_ifspec;
unsigned long __RPC_USER BSTR_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
unsigned long __RPC_USER BSTR_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in BSTR * );
unsigned char * __RPC_USER BSTR_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out BSTR * );
void __RPC_USER BSTR_UserFree64( __RPC__in unsigned long *, __RPC__in BSTR * );
unsigned long __RPC_USER LPSAFEARRAY_UserSize64( __RPC__in unsigned long *, unsigned long , __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserMarshal64( __RPC__in unsigned long *, __RPC__inout_xcount(0) unsigned char *, __RPC__in LPSAFEARRAY * );
unsigned char * __RPC_USER LPSAFEARRAY_UserUnmarshal64(__RPC__in unsigned long *, __RPC__in_xcount(0) unsigned char *, __RPC__out LPSAFEARRAY * );
void __RPC_USER LPSAFEARRAY_UserFree64( __RPC__in unsigned long *, __RPC__in LPSAFEARRAY * );
}
