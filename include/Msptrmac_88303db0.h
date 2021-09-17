#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
class CAudioCaptureTerminal :
    public IDispatchImpl<ITBasicAudioTerminal, &IID_ITBasicAudioTerminal, &LIBID_TAPI3Lib>,
    public IDispatchImpl<ITStaticAudioTerminal, &IID_ITStaticAudioTerminal, &LIBID_TAPI3Lib>,
    public CSingleFilterStaticTerminal,
    public CMSPObjectSafetyImpl
{
BEGIN_COM_MAP(CAudioCaptureTerminal)
    COM_INTERFACE_ENTRY(IObjectSafety)
    COM_INTERFACE_ENTRY(ITBasicAudioTerminal)
    COM_INTERFACE_ENTRY(ITStaticAudioTerminal)
    COM_INTERFACE_ENTRY_CHAIN(CSingleFilterStaticTerminal)
END_COM_MAP()
DECLARE_VQI()
DECLARE_LOG_ADDREF_RELEASE(CAudioCaptureTerminal)
public:
    CAudioCaptureTerminal();
    virtual ~CAudioCaptureTerminal();
    static HRESULT CreateTerminal(
        IN CComPtr<IMoniker> pMoniker,
        IN MSP_HANDLE htAddress,
        OUT ITTerminal **ppTerm
        );
    HRESULT FindTerminalPin();
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
    inline HRESULT CreateFiltersIfRequired();
private:
    bool m_bResourceReserved;
    CComPtr<IAMAudioInputMixer> m_pIAMAudioInputMixer;
};
inline HRESULT
CAudioCaptureTerminal::CreateFiltersIfRequired(
    )
{
    if (m_pIFilter == NULL) return CreateFilters();
    return S_OK;
}
#endif
#pragma endregion
