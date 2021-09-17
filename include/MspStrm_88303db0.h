#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
class CMSPStream;
class ATL_NO_VTABLE CPTEventSink :
    public CComObjectRootEx<CComMultiThreadModel>,
    public ITPluggableTerminalEventSink
{
public:
    CPTEventSink();
    ~CPTEventSink();
BEGIN_COM_MAP( CPTEventSink )
    COM_INTERFACE_ENTRY( ITPluggableTerminalEventSink )
END_COM_MAP()
public:
 STDMETHOD(FireEvent)(
                 const MSP_EVENT_INFO *pMspEventInfo
        );
public:
    HRESULT SetSinkStream( CMSPStream *pStream );
private:
    struct AsyncEventStruct
    {
        CMSPStream *pMSPStream;
        MSPEVENTITEM *pEventItem;
        AsyncEventStruct()
            :pMSPStream(NULL),
            pEventItem(NULL)
        {
            LOG((MSP_TRACE, "AsyncEventStruct::AsyncEventStruct[%p]", this));
        }
        ~AsyncEventStruct()
        {
            pMSPStream = NULL;
            pEventItem = NULL;
            LOG((MSP_TRACE, "AsyncEventStruct::~AsyncEventStruct[%p]", this));
        }
    };
    static DWORD WINAPI FireEventCallBack(LPVOID pEventStructure);
private:
     CMSPStream* m_pMSPStream;
};
class ATL_NO_VTABLE CMSPStream :
    public CComObjectRootEx<CComMultiThreadModelNoCS>,
    public IDispatchImpl<ITStream, &IID_ITStream, &LIBID_TAPI3Lib>
{
public:
BEGIN_COM_MAP(CMSPStream)
    COM_INTERFACE_ENTRY(IDispatch)
    COM_INTERFACE_ENTRY(ITStream)
    COM_INTERFACE_ENTRY_AGGREGATE(IID_IMarshal, m_pFTM)
END_COM_MAP()
DECLARE_GET_CONTROLLING_UNKNOWN()
    CMSPStream();
    ~CMSPStream();
    virtual void FinalRelease();
    STDMETHOD (get_MediaType) (
        OUT long * plMediaType
        );
    STDMETHOD (get_Direction) (
        OUT TERMINAL_DIRECTION * pTerminalDirection
        );
    STDMETHOD (get_Name) (
        OUT BSTR * ppName
        ) = 0;
    STDMETHOD (SelectTerminal) (
        IN ITTerminal * pTerminal
        );
    STDMETHOD (UnselectTerminal) (
        IN ITTerminal * pTerminal
        );
    STDMETHOD (EnumerateTerminals) (
        OUT IEnumTerminal ** ppEnumTerminal
        );
    STDMETHOD (get_Terminals) (
        OUT VARIANT * pTerminals
        );
    STDMETHOD (StartStream) ();
    STDMETHOD (PauseStream) ();
    STDMETHOD (StopStream) ();
    virtual HRESULT Init(
        IN HANDLE hAddress,
        IN CMSPCallBase * pMSPCall,
        IN IMediaEvent * pGraph,
        IN DWORD dwMediaType,
        IN TERMINAL_DIRECTION Direction
        );
    virtual HRESULT ShutDown();
    virtual HRESULT GetState(
        OUT DWORD * pdwStatus
        ) { return E_NOTIMPL; }
    virtual HRESULT HandleTSPData(
        IN BYTE * pData,
        IN DWORD dwSize
        );
    virtual HRESULT ProcessGraphEvent(
        IN long lEventCode,
        IN LONG_PTR lParam1,
        IN LONG_PTR lParam2
        );
protected:
    HRESULT RegisterPluggableTerminalEventSink(
                 ITTerminal* pTerminal
        );
    HRESULT UnregisterPluggableTerminalEventSink(
                 ITTerminal* pTerminal
        );
    HRESULT ReleaseSink();
    ULONG InternalAddRef();
    ULONG InternalRelease();
public:
    HRESULT HandleSinkEvent(MSPEVENTITEM *pEventItem);
protected:
    IUnknown * m_pFTM;
    DWORD m_dwState;
    DWORD m_dwMediaType;
    TERMINAL_DIRECTION m_Direction;
    HANDLE m_hAddress;
    CMSPCallBase * m_pMSPCall;
    IGraphBuilder * m_pIGraphBuilder;
    IMediaControl * m_pIMediaControl;
    CMSPArray <ITTerminal *> m_Terminals;
    CMSPCritSection m_lock;
    CMSPCritSection m_lockRefCount;
    ITPluggableTerminalEventSink* m_pPTEventSink;
    long m_lMyPersonalRefcount;
    BOOL m_bFirstAddRef;
};
#endif
#pragma endregion
