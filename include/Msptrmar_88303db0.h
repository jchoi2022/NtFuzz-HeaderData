#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
class CAudioRenderTerminal :
    public IDispatchImpl<ITBasicAudioTerminal, &IID_ITBasicAudioTerminal, &LIBID_TAPI3Lib>,
    public IDispatchImpl<ITStaticAudioTerminal, &IID_ITStaticAudioTerminal, &LIBID_TAPI3Lib>,
    public CSingleFilterStaticTerminal,
    public CMSPObjectSafetyImpl
{
public:
    CAudioRenderTerminal();
    virtual ~CAudioRenderTerminal();
    HRESULT InitializeDefaultTerminal();
    static HRESULT CreateTerminal(
        IN CComPtr<IMoniker> pMoniker,
        IN MSP_HANDLE htAddress,
        OUT ITTerminal **ppTerm
        );
    HRESULT FindTerminalPin();
BEGIN_COM_MAP(CAudioRenderTerminal)
    COM_INTERFACE_ENTRY(IObjectSafety)
    COM_INTERFACE_ENTRY(ITBasicAudioTerminal)
    COM_INTERFACE_ENTRY(ITStaticAudioTerminal)
    COM_INTERFACE_ENTRY_CHAIN(CSingleFilterStaticTerminal)
END_COM_MAP()
DECLARE_VQI()
DECLARE_LOG_ADDREF_RELEASE(CAudioRenderTerminal)
public:
    STDMETHOD(get_Balance)(OUT long *pVal);
    STDMETHOD(put_Balance)(IN long newVal);
    STDMETHOD(get_Volume) (OUT long *pVal);
    STDMETHOD(put_Volume) (IN long newVal);
public:
    STDMETHOD(get_WaveId) (OUT long * plWaveId);
public:
    STDMETHODIMP CompleteConnectTerminal(void);
    STDMETHODIMP DisconnectTerminal(
            IN IGraphBuilder * pGraph,
            IN DWORD dwReserved
            );
    virtual HRESULT AddFiltersToGraph();
    virtual DWORD GetSupportedMediaTypes(void)
    {
        return (DWORD) TAPIMEDIATYPE_AUDIO;
    }
    HRESULT CreateFilters();
private:
    bool m_bResourceReserved;
    CComPtr<IBasicAudio> m_pIBasicAudio;
};
#endif
#pragma endregion
