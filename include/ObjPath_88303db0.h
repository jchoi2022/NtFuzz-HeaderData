#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <opathlex.h>
struct KeyRef
{
    LPWSTR m_pName;
    VARIANT m_vValue;
    HRESULT m_hRes;
    KeyRef();
    KeyRef(LPCWSTR wszKeyName, const VARIANT* pvValue);
   ~KeyRef();
    BOOL IsValid(){ return (m_pName && (S_OK == m_hRes)); };
};
struct ParsedObjectPath
{
    LPWSTR m_pServer;
    DWORD m_dwNumNamespaces;
    DWORD m_dwAllocNamespaces;
    _Field_size_part_(m_dwAllocNamespaces, m_dwNumNamespaces) LPWSTR *m_paNamespaces;
    LPWSTR m_pClass;
    DWORD m_dwNumKeys;
    DWORD m_dwAllocKeys;
    _Field_size_part_(m_dwAllocKeys, m_dwNumKeys) KeyRef **m_paKeys;
    BOOL m_bSingletonObj;
    ParsedObjectPath();
   ~ParsedObjectPath();
public:
    BOOL SetClassName(LPCWSTR wszClassName);
    BOOL AddKeyRef(LPCWSTR wszKeyName, const VARIANT* pvValue);
    BOOL AddKeyRef(KeyRef* pAcquireRef);
    BOOL AddKeyRefEx(LPCWSTR wszKeyName, const VARIANT* pvValue);
    BOOL AddNamespace(LPCWSTR wszNamespace);
    LPWSTR GetKeyString();
    LPWSTR GetNamespacePart();
    LPWSTR GetParentNamespacePart();
    void ClearKeys () ;
    BOOL IsRelative(LPCWSTR wszMachine, LPCWSTR wszNamespace);
    BOOL IsLocal(LPCWSTR wszMachine);
    BOOL IsClass();
    BOOL IsInstance();
    BOOL IsObject();
    BOOL IsValid()
    {
        return (m_paNamespaces && m_paKeys);
    };
};
typedef enum
{
    e_ParserAcceptRelativeNamespace,
    e_ParserAbsoluteNamespaceOnly,
    e_ParserAcceptAll
} ObjectParserFlags;
class CObjectPathParser
{
    LPWSTR m_pInitialIdent;
    int m_nCurrentToken;
    CGenLexer *m_pLexer;
    ParsedObjectPath *m_pOutput;
    KeyRef *m_pTmpKeyRef;
    ObjectParserFlags m_eFlags;
private:
    void Zero();
    void Empty();
    int begin_parse();
    int ns_or_server();
    int ns_or_class();
    int objref();
    int ns_list();
    int ident_becomes_ns();
    int ident_becomes_class();
    int objref_rest();
    int ns_list_rest();
    int key_const();
    int keyref_list();
    int keyref();
    int keyref_term();
    int propname();
    int optional_objref();
    int NextToken();
public:
    enum { NoError, SyntaxError, InvalidParameter, OutOfMemory };
    CObjectPathParser(ObjectParserFlags eFlags = e_ParserAbsoluteNamespaceOnly);
   ~CObjectPathParser();
    int Parse(
        _In_opt_ LPCWSTR RawPath,
        _Outptr_ ParsedObjectPath **pOutput
        );
    static int WINAPI Unparse(
        _In_ ParsedObjectPath* pInput,
        _Outptr_ DELETE_ME LPWSTR* pwszPath);
    static LPWSTR WINAPI GetRelativePath(_In_ LPWSTR wszFullPath);
    void Free(_In_ ParsedObjectPath *pOutput);
    void Free(_In_ LPWSTR wszUnparsedPath );
};
#endif
#pragma endregion
