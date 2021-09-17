#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <stdio.h>
#include <sql_1.h>
#include <comdef.h>
#include <vector>
class POLARITY CFrameworkQuery
{
public:
    CFrameworkQuery();
    ~CFrameworkQuery();
    bool IsPropertyRequired(LPCWSTR propName);
    BSTR GetQueryClassName(void) { return SysAllocString(m_bstrtClassName); }
    HRESULT GetValuesForProp(LPCWSTR wszPropName, CHStringArray& achNames);
    HRESULT GetValuesForProp(LPCWSTR wszPropName, std::vector<_bstr_t>& vectorNames);
    void GetRequiredProperties(CHStringArray &saProperties);
    bool AllPropertiesAreRequired(void) { return (m_csaPropertiesRequired.GetSize() == 0); }
    bool KeysOnly(void) { return m_bKeysOnly; }
    const CHString &GetQuery() ;
    HRESULT Init(
        const BSTR bstrQueryFormat,
        const BSTR bstrQuery,
        long lFlags,
        CHString &sNamespace
    );
    HRESULT Init(
        ParsedObjectPath *pParsedObjectPath,
        IWbemContext *pCtx,
        LPCWSTR lpwszClassName,
        CHString &sNamespace
    );
    void Init2(IWbemClassObject *IClass);
protected:
    SQL_LEVEL_1_RPN_EXPRESSION *m_pLevel1RPNExpression;
    CHStringArray m_csaPropertiesRequired;
    enum QueryTypes{eUnknown, eWQLCommand, eContextObject} m_QueryType;
    DWORD IsInList(const CHStringArray &csaArray, LPCWSTR pwszValue);
    BOOL IsReference(LPCWSTR lpwszPropertyName);
    const CHString &GetNamespace();
private:
    CHString m_sNamespace;
    long m_lFlags;
    IWbemClassObject *m_IClass;
    CHString m_sQueryFormat;
    void Reset(void);
    bool m_bKeysOnly;
    bool m_AddKeys;
    CHString m_sQuery;
    bstr_t m_bstrtClassName;
};
#endif
#pragma endregion
