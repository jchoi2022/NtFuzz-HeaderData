#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
class ATL_NO_VTABLE CMSPCallBase :
    public CComObjectRootEx<CComMultiThreadModelNoCS>,
    public IDispatchImpl<ITStreamControl, &IID_ITStreamControl, &LIBID_TAPI3Lib>
{
public:
DECLARE_POLY_AGGREGATABLE(CMSPCallBase)
BEGIN_COM_MAP(CMSPCallBase)
    COM_INTERFACE_ENTRY(IDispatch)
    COM_INTERFACE_ENTRY(ITStreamControl)
END_COM_MAP()
DECLARE_GET_CONTROLLING_UNKNOWN()
DECLARE_VQI()
    CMSPCallBase();
    virtual ~CMSPCallBase();
    virtual ULONG MSPCallAddRef (void) = 0;
    virtual ULONG MSPCallRelease (void) = 0;
    STDMETHOD (CreateStream) (
        IN long lMediaType,
        IN TERMINAL_DIRECTION Direction,
        IN OUT ITStream ** ppStream
        );
    STDMETHOD (EnumerateStreams) (
        OUT IEnumStream ** ppEnumStream
        );
    STDMETHOD (RemoveStream) (
        IN ITStream * pStream
        ) = 0;
    STDMETHOD (get_Streams) (
        OUT VARIANT * pStreams
        );
    virtual HRESULT Init(
        IN CMSPAddress * pMSPAddress,
        IN MSP_HANDLE htCall,
        IN DWORD dwReserved,
        IN DWORD dwMediaType
        ) = 0;
    virtual HRESULT ShutDown(
        ) = 0;
    virtual HRESULT ReceiveTSPCallData(
        IN PBYTE pBuffer,
        IN DWORD dwSize
        );
    HRESULT HandleStreamEvent(
        IN MSPEVENTITEM * EventItem
        ) const;
protected:
    virtual HRESULT InternalCreateStream(
        IN DWORD dwMediaType,
        IN TERMINAL_DIRECTION Direction,
        IN OUT ITStream ** ppStream
        ) = 0;
    virtual HRESULT CreateStreamObject(
        IN DWORD dwMediaType,
        IN TERMINAL_DIRECTION Direction,
        IN IMediaEvent * pGraph,
        IN ITStream ** ppStream
        ) = 0;
protected:
    CMSPAddress* m_pMSPAddress;
    MSP_HANDLE m_htCall;
    DWORD m_dwMediaType;
    CMSPArray <ITStream *> m_Streams;
    CMSPCritSection m_lock;
};
class ATL_NO_VTABLE CMSPCallMultiGraph : public CMSPCallBase
{
public:
    typedef struct
    {
        CMSPCallMultiGraph * pMSPCall;
        ITStream * pITStream;
        IMediaEvent * pIMediaEvent;
    } MSPSTREAMCONTEXT, *PMSPSTREAMCONTEXT;
    typedef struct _THREADPOOLWAITBLOCK
    {
        HANDLE hWaitHandle;
        MSPSTREAMCONTEXT * pContext;
        BOOL operator ==(struct _THREADPOOLWAITBLOCK &t)
        {
            return ((hWaitHandle == t.hWaitHandle)
                && (pContext == t.pContext));
        }
    } THREADPOOLWAITBLOCK, *PTHREADPOOLWAITBLOCK;
public:
    CMSPCallMultiGraph();
    virtual ~CMSPCallMultiGraph();
    STDMETHOD (RemoveStream) (
        IN ITStream * ppStream
        );
    HRESULT Init(
        IN CMSPAddress * pMSPAddress,
        IN MSP_HANDLE htCall,
        IN DWORD dwReserved,
        IN DWORD dwMediaType
        );
    HRESULT ShutDown(
        );
    static VOID NTAPI DispatchGraphEvent(
        IN VOID * pContext,
        IN BOOLEAN bFlag
        );
    virtual VOID HandleGraphEvent(
        IN MSPSTREAMCONTEXT * pContext
    );
    virtual HRESULT ProcessGraphEvent(
        IN ITStream * pITStream,
        IN long lEventCode,
        IN LONG_PTR lParam1,
        IN LONG_PTR lParam2
    );
protected:
    HRESULT RegisterWaitEvent(
        IN IMediaEvent * pIMediaEvent,
        IN ITStream * pITStream
        );
    HRESULT UnregisterWaitEvent(
        IN int index
        );
    virtual HRESULT InternalCreateStream(
        IN DWORD dwMediaType,
        IN TERMINAL_DIRECTION Direction,
        IN OUT ITStream ** ppStream
        );
protected:
    CMSPArray <THREADPOOLWAITBLOCK> m_ThreadPoolWaitBlocks;
};
struct MULTI_GRAPH_EVENT_DATA
{
    CMSPCallMultiGraph * pCall;
    ITStream * pITStream;
    long lEventCode;
    LONG_PTR lParam1;
    LONG_PTR lParam2;
    IMediaEvent * pIMediaEvent;
    MULTI_GRAPH_EVENT_DATA()
        :pIMediaEvent(NULL),
        pITStream(NULL),
        lEventCode(0),
        lParam1(0),
        lParam2(0)
    {}
};
DWORD WINAPI AsyncMultiGraphEvent(LPVOID pVoid);
#endif
#pragma endregion
