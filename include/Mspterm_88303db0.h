#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
template <class T>
class ITTerminalVtblBase : public ITTerminal
{
};
class CBaseTerminal :
    virtual public CComObjectRootEx<CComMultiThreadModelNoCS>,
    public IDispatchImpl<ITTerminalVtblBase<CBaseTerminal>, &IID_ITTerminal, &LIBID_TAPI3Lib>,
    public ITTerminalControl
{
BEGIN_COM_MAP(CBaseTerminal)
    COM_INTERFACE_ENTRY(IDispatch)
    COM_INTERFACE_ENTRY(ITTerminal)
    COM_INTERFACE_ENTRY(ITTerminalControl)
    COM_INTERFACE_ENTRY_AGGREGATE(IID_IMarshal, m_pFTM)
END_COM_MAP()
DECLARE_VQI()
DECLARE_GET_CONTROLLING_UNKNOWN()
public:
    CBaseTerminal();
    virtual ~CBaseTerminal();
public:
    STDMETHOD(get_TerminalClass)(OUT BSTR *pVal);
    STDMETHOD(get_TerminalType) (OUT TERMINAL_TYPE *pVal);
    STDMETHOD(get_State) (OUT TERMINAL_STATE *pVal);
    STDMETHOD(get_Name) (OUT BSTR *pVal);
    STDMETHOD(get_MediaType) (OUT long * plMediaType);
    STDMETHOD(get_Direction) (OUT TERMINAL_DIRECTION *pDirection);
public:
    virtual HRESULT Initialize (
            IN IID iidTerminalClass,
            IN DWORD dwMediaType,
            IN TERMINAL_DIRECTION Direction,
            IN MSP_HANDLE htAddress
            );
public:
    STDMETHOD (get_AddressHandle) (
            OUT MSP_HANDLE * phtAddress
            );
    STDMETHOD (ConnectTerminal) (
            IN IGraphBuilder * pGraph,
            IN DWORD dwTerminalDirection,
            IN OUT DWORD * pdwNumPins,
            OUT IPin ** ppPins
            );
    STDMETHOD (CompleteConnectTerminal) (void);
    STDMETHOD (DisconnectTerminal) (
            IN IGraphBuilder * pGraph,
            IN DWORD dwReserved
            );
    STDMETHOD (RunRenderFilter) (void) = 0;
    STDMETHOD (StopRenderFilter) (void) = 0;
protected:
    CMSPCritSection m_CritSec;
public:
    TERMINAL_DIRECTION m_TerminalDirection;
    TERMINAL_TYPE m_TerminalType;
    TERMINAL_STATE m_TerminalState;
    TCHAR m_szName[MAX_PATH + 1];
    IID m_TerminalClassID;
    DWORD m_dwMediaType;
    MSP_HANDLE m_htAddress;
    IUnknown * m_pFTM;
    CComPtr<IGraphBuilder> m_pGraph;
    virtual HRESULT AddFiltersToGraph() = 0;
    virtual HRESULT ConnectFilters() { return S_OK; }
    virtual HRESULT GetNumExposedPins(
        IN IGraphBuilder * pGraph,
        OUT DWORD * pdwNumPins
        ) = 0;
    virtual HRESULT GetExposedPins(
        OUT IPin ** ppPins
        ) = 0;
    virtual DWORD GetSupportedMediaTypes(void) = 0;
    virtual HRESULT RemoveFiltersFromGraph() = 0;
    BOOL MediaTypeSupported(long lMediaType);
};
class CSingleFilterTerminal :
    public CBaseTerminal
{
public:
    CComPtr<IPin> m_pIPin;
    CComPtr<IBaseFilter> m_pIFilter;
public:
    STDMETHOD(RunRenderFilter)(void);
    STDMETHOD(StopRenderFilter)(void);
    virtual HRESULT GetNumExposedPins(
        IN IGraphBuilder * pGraph,
        OUT DWORD * pdwNumPins
        );
    virtual HRESULT GetExposedPins(
        OUT IPin ** ppPins
        );
    virtual HRESULT RemoveFiltersFromGraph();
};
class CSingleFilterStaticTerminal :
    public CSingleFilterTerminal
{
public:
    CComPtr<IMoniker> m_pMoniker;
    BOOL m_bMark;
    virtual HRESULT CompareMoniker(
                                    IMoniker *pMoniker
                                  );
};
#endif
#pragma endregion
