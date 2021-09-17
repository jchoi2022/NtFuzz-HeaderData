#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
class POLARITY Provider : public CThreadBase
{
    friend class CWbemProviderGlue;
public:
    Provider( LPCWSTR a_pszName, LPCWSTR a_pszNameSpace = NULL );
    ~Provider();
    static BOOL initFailed();
protected:
    virtual HRESULT PutInstance(const CInstance& newInstance, long lFlags = 0L);
    virtual HRESULT DeleteInstance(const CInstance& newInstance, long lFlags = 0L);
    virtual HRESULT ExecMethod(const CInstance& cInstance,
        _In_ const BSTR bstrMethodName,
        _In_ CInstance *pInParams,
        _Out_ CInstance *pOutParams,
        long lFlags = 0L);
    virtual HRESULT EnumerateInstances(_In_ MethodContext *pMethodContext, long lFlags = 0L);
    virtual HRESULT GetObject(_Inout_ CInstance *pInstance, long lFlags = 0L);
    virtual HRESULT GetObject(_Inout_ CInstance *pInstance, long lFlags, _In_ CFrameworkQuery &Query);
    virtual HRESULT ExecQuery(_In_ MethodContext *pMethodContext,
        _In_ CFrameworkQuery& cQuery,
        long lFlags = 0L);
    virtual void Flush(void);
    CInstance *CreateNewInstance(_In_ MethodContext *pMethodContext);
    HRESULT Commit(_Inout_ CInstance *pInstance, bool bCache = false);
    bool GetLocalInstancePath( const CInstance *pInstance, _Out_ CHString& strPath );
    CHString MakeLocalPath( const CHString &strRelPath );
    const CHString &GetLocalComputerName() {return s_strComputerName;}
    const CHString &GetNamespace() {return m_strNameSpace;}
    bool SetCreationClassName(_Inout_ CInstance *pInstance);
    const CHString &GetProviderName() {return m_name;}
    enum FlagDefs
    {
        EnumerationFlags = (WBEM_FLAG_DIRECT_READ | WBEM_FLAG_SEND_STATUS),
        GetObjFlags = (WBEM_FLAG_SEND_STATUS | WBEM_FLAG_DIRECT_READ),
        MethodFlags = WBEM_FLAG_SEND_STATUS,
        DeletionFlags = WBEM_FLAG_SEND_STATUS,
        PutInstanceFlags = (WBEM_FLAG_CREATE_ONLY | WBEM_FLAG_CREATE_OR_UPDATE | WBEM_FLAG_UPDATE_ONLY | WBEM_FLAG_SEND_STATUS),
        QueryFlags = WBEM_FLAG_SEND_STATUS | WBEM_FLAG_DIRECT_READ
    };
    HRESULT ValidateFlags(long lFlags, FlagDefs lAcceptableFlags);
    virtual HRESULT ValidateEnumerationFlags(long lFlags);
    virtual HRESULT ValidateGetObjFlags(long lFlags);
    virtual HRESULT ValidateMethodFlags(long lFlags);
    virtual HRESULT ValidateQueryFlags(long lFlags);
    virtual HRESULT ValidateDeletionFlags(long lFlags);
    virtual HRESULT ValidatePutInstanceFlags(long lFlags);
private:
    static BOOL initFailed_;
    IWbemServices *m_pIMosProvider;
    CHString m_name;
    CHString m_strNameSpace;
    IWbemClassObject *m_piClassObject;
    static CHString s_strComputerName;
    BOOL ValidateIMOSPointer( void );
    HRESULT GetObject( _In_ ParsedObjectPath *pParsedObjectPath,
        _In_ MethodContext *pContext, long lFlags = 0L );
    HRESULT ExecuteQuery( _In_ MethodContext *pContext,
        _In_ CFrameworkQuery &pQuery,
        long lFlags = 0L);
    HRESULT CreateInstanceEnum( _In_ MethodContext *pContext, long lFlags = 0L );
    HRESULT PutInstance( _In_ IWbemClassObject __RPC_FAR *pInst,
        long lFlags,
        _In_ MethodContext *pContext );
    HRESULT DeleteInstance( _In_ ParsedObjectPath *pParsedObjectPath,
        long lFlags,
        _In_ MethodContext *pContext );
    HRESULT ExecMethod( _In_ ParsedObjectPath *pParsedObjectPath,
        _In_ BSTR bstrMethodName,
        long lFlags,
        _In_ CInstance *pInParams,
        _Out_ CInstance *pOutParams,
        _In_ MethodContext *pContext );
    static void WINAPI InitComputerName( void );
    BOOL SetKeyFromParsedObjectPath( _Inout_ CInstance *pInstance,
        _In_ ParsedObjectPath *pParsedObjectPath );
    IWbemClassObject *GetClassObjectInterface(_In_ MethodContext *pMethodContext);
};
#endif
#pragma endregion
