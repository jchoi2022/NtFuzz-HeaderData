#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
struct SQL_LEVEL_1_TOKEN
{
    enum { OP_EXPRESSION = 1, TOKEN_AND, TOKEN_OR, TOKEN_NOT };
    enum { IFUNC_NONE = 0, IFUNC_UPPER = 1, IFUNC_LOWER = 2 };
    int nTokenType;
    enum { OP_EQUAL = 1, OP_NOT_EQUAL, OP_EQUALorGREATERTHAN,
         OP_EQUALorLESSTHAN, OP_LESSTHAN, OP_GREATERTHAN, OP_LIKE };
    BSTR pPropertyName;
    int nOperator;
    BOOL bConstIsStrNumeric;
 VARIANT vConstValue;
    BSTR pPropName2;
    DWORD dwPropertyFunction;
    DWORD dwConstFunction;
    SQL_LEVEL_1_TOKEN();
    SQL_LEVEL_1_TOKEN(SQL_LEVEL_1_TOKEN&);
   ~SQL_LEVEL_1_TOKEN();
    SQL_LEVEL_1_TOKEN& operator=(SQL_LEVEL_1_TOKEN &Src);
    void Dump(FILE *);
};
struct SQL_LEVEL_1_RPN_EXPRESSION
{
    int nNumTokens;
    int nCurSize;
    SQL_LEVEL_1_TOKEN *pArrayOfTokens;
    BSTR bsClassName;
 int nNumberOfProperties;
    int nCurPropSize;
 _Field_size_part_(nCurPropSize, nNumberOfProperties) BSTR *pbsRequestedPropertyNames;
    SQL_LEVEL_1_RPN_EXPRESSION();
   ~SQL_LEVEL_1_RPN_EXPRESSION();
    void AddToken(SQL_LEVEL_1_TOKEN *pTok);
    void AddToken(SQL_LEVEL_1_TOKEN &pTok);
    void AddProperty(_In_ LPWSTR pProp);
    void Dump(const char *pszTextFile);
};
class SQL1_Parser
{
    CGenLexer *m_pLexer;
    int m_nLine;
    wchar_t* m_pTokenText;
    int m_nCurrentToken;
    SQL_LEVEL_1_RPN_EXPRESSION* m_pExpression;
 void Cleanup();
 void Init(_In_ CGenLexSource *pSrc);
    VARIANT m_vTypedConst;
    int m_nRelOp;
    DWORD m_dwConstFunction;
    DWORD m_dwPropFunction;
    LPWSTR m_pIdent;
    LPWSTR m_pPropComp;
 BOOL m_bConstIsStrNumeric;
    BOOL Next();
    int parse();
    int prop_list();
    int class_name();
    int opt_where();
    int expr();
    int property_name();
    int prop_list_2();
    int term();
    int expr2();
    int simple_expr();
    int term2();
    int leading_ident_expr();
    int finalize();
    int rel_operator();
    int equiv_operator();
    int comp_operator();
    int is_operator();
    int trailing_prop_expr();
    int trailing_prop_expr2();
    int trailing_or_null();
    int trailing_const_expr();
    int unknown_func_expr();
    int typed_constant();
public:
    enum {
        SUCCESS,
        SYNTAX_ERROR,
        LEXICAL_ERROR,
        FAILED,
        BUFFER_TOO_SMALL
        };
    SQL1_Parser(_In_ CGenLexSource *pSrc);
   ~SQL1_Parser();
    int GetQueryClass(_Out_writes_opt_(nBufLen) LPWSTR pDestBuf, int nBufLen);
    int Parse(_Outptr_ SQL_LEVEL_1_RPN_EXPRESSION **pOutput);
    int CurrentLine() { return m_nLine; }
    LPWSTR CurrentToken() { return m_pTokenText; }
 void SetSource(CGenLexSource *pSrc);
};
#endif
#pragma endregion
