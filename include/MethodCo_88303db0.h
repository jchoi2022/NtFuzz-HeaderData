#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
class CInstance;
class Provider;
class MethodContext;
class CWbemProviderGlue;
class InternalMethodContextAsynch;
typedef HRESULT (WINAPI *LPProviderInstanceCallback)(Provider *pProvider, CInstance *pInstance, MethodContext *pContext, void *pUserData);
class POLARITY MethodContext : public CThreadBase
{
public:
    friend InternalMethodContextAsynch;
    friend CWbemProviderGlue;
    MethodContext(IWbemContext __RPC_FAR *piContext, CWbemProviderGlue *pGlue);
    ~MethodContext();
    virtual HRESULT Commit(CInstance *pInstance) = 0;
    virtual IWbemContext __RPC_FAR *GetIWBEMContext();
    LONG AddRef(void);
    LONG Release(void);
    virtual void QueryPostProcess(void);
    bool SetStatusObject(IWbemClassObject *pObj);
    IWbemClassObject __RPC_FAR *GetStatusObject();
    StopWatch *pStopWatch;
private:
    CWbemProviderGlue* GetProviderGlue();
    CWbemProviderGlue *m_pGlue;
    IWbemContext __RPC_FAR *m_pContext;
    IWbemClassObject __RPC_FAR *m_pStatusObject;
};
class
__declspec(uuid("9113D3B4-D114-11d2-B35D-00104BC97924"))
ExternalMethodContext : public MethodContext
{
public:
    ExternalMethodContext(IWbemObjectSink __RPC_FAR *pResponseHandler,
                          IWbemContext __RPC_FAR *pContext,
                          CWbemProviderGlue *pGlue,
                          void *pReserved = NULL
                          );
    HRESULT Commit(CInstance *pInstance);
    virtual void QueryPostProcess(void);
    LONG AddRef(void);
    LONG Release(void);
private:
    IWbemObjectSink __RPC_FAR *m_pResponseHandler;
    void *m_pReserved;
};
class
__declspec(uuid("6AF4B074-D121-11d2-B35D-00104BC97924"))
InternalMethodContext : public MethodContext
{
public:
    InternalMethodContext(TRefPointerCollection<CInstance> *pList ,
                          IWbemContext __RPC_FAR *pContext,
                          CWbemProviderGlue *pGlue);
    ~InternalMethodContext();
    HRESULT Commit(CInstance *pInstance);
    LONG AddRef(void);
    LONG Release(void);
private:
    TRefPointerCollection<CInstance> *m_pInstances;
};
class
__declspec(uuid("D98A82E8-D121-11d2-B35D-00104BC97924"))
InternalMethodContextAsynch : public MethodContext
{
public:
    InternalMethodContextAsynch(Provider *pThat,
                                LPProviderInstanceCallback pCallback,
                                IWbemContext __RPC_FAR *pContext,
                                MethodContext *pUsersContext,
                                void *pUserData);
    ~InternalMethodContextAsynch();
    HRESULT Commit(CInstance *pInstance);
    LONG AddRef(void);
    LONG Release(void);
private:
    Provider *m_pThat;
    LPProviderInstanceCallback m_pCallback;
    void *m_pUserData;
    MethodContext *m_pUsersContext;
};
#endif
#pragma endregion
