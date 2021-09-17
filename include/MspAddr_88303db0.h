#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct
{
   LIST_ENTRY Link;
   MSP_EVENT_INFO MSPEventInfo;
} MSPEVENTITEM, *PMSPEVENTITEM;
MSPEVENTITEM *AllocateEventItem(SIZE_T nExtraBytes = 0);
BOOL FreeEventItem(MSPEVENTITEM *pEventItemToFree);
typedef HRESULT (*PFNCREATETERM) (
    IN CComPtr<IMoniker> pMoniker,
    IN MSP_HANDLE htAddress,
    OUT ITTerminal **pTerm
    );
typedef struct
{
    DWORD dwMediaType;
    const CLSID * clsidClassManager;
    PFNCREATETERM pfnCreateTerm;
} STATIC_TERMINAL_TYPE;
class ATL_NO_VTABLE CPlugTerminalClassInfo :
    public IDispatchImpl<ITPluggableTerminalClassInfo, &IID_ITPluggableTerminalClassInfo, &LIBID_TAPI3Lib>,
    public CComObjectRootEx<CComMultiThreadModel>,
    public CMSPObjectSafetyImpl
{
public:
DECLARE_GET_CONTROLLING_UNKNOWN()
virtual HRESULT FinalConstruct(void);
BEGIN_COM_MAP(CPlugTerminalClassInfo)
    COM_INTERFACE_ENTRY(ITPluggableTerminalClassInfo)
    COM_INTERFACE_ENTRY(IDispatch)
    COM_INTERFACE_ENTRY(IObjectSafety)
        COM_INTERFACE_ENTRY_AGGREGATE(IID_IMarshal, m_pFTM)
END_COM_MAP()
public:
    CPlugTerminalClassInfo() :
        m_bstrName(NULL),
        m_bstrCompany(NULL),
        m_bstrVersion(NULL),
        m_bstrCLSID(NULL),
        m_bstrTerminalClass(NULL),
        m_lMediaType(1),
        m_Direction(TD_CAPTURE),
        m_pFTM(NULL)
    {
    }
    ~CPlugTerminalClassInfo()
    {
        if( m_bstrName )
        {
            SysFreeString( m_bstrName );
        }
        if( m_bstrCompany )
        {
            SysFreeString( m_bstrCompany );
        }
        if( m_bstrVersion )
        {
            SysFreeString( m_bstrVersion );
        }
        if( m_bstrCLSID )
        {
            SysFreeString( m_bstrCLSID );
        }
        if( m_bstrTerminalClass )
        {
            SysFreeString( m_bstrTerminalClass );
        }
        if( m_pFTM )
        {
            m_pFTM->Release();
        }
    }
public:
    STDMETHOD(get_Name)(
                          BSTR* pName
        );
    STDMETHOD(get_Company)(
                          BSTR* pCompany
        );
    STDMETHOD(get_Version)(
                          BSTR* pVersion
        );
    STDMETHOD(get_TerminalClass)(
                          BSTR* pTerminalClass
        );
    STDMETHOD(get_CLSID)(
                          BSTR* pCLSID
        );
    STDMETHOD(get_Direction)(
                          TERMINAL_DIRECTION* pDirection
        );
    STDMETHOD(get_MediaTypes)(
                          long* pMediaTypes
        );
private:
    CMSPCritSection m_CritSect;
    BSTR m_bstrName;
    BSTR m_bstrCompany;
    BSTR m_bstrVersion;
    BSTR m_bstrTerminalClass;
    BSTR m_bstrCLSID;
    long m_lMediaType;
    TERMINAL_DIRECTION m_Direction;
    IUnknown* m_pFTM;
private:
    STDMETHOD(put_Name)(
                    BSTR bstrName
        );
    STDMETHOD(put_Company)(
                    BSTR bstrCompany
        );
    STDMETHOD(put_Version)(
                   BSTR bstrVersion
        );
    STDMETHOD(put_TerminalClass)(
                    BSTR bstrTerminalClass
        );
    STDMETHOD(put_CLSID)(
                    BSTR bstrCLSID
        );
    STDMETHOD(put_Direction)(
                    TERMINAL_DIRECTION nDirection
        );
    STDMETHOD(put_MediaTypes)(
                    long nMediaTypes
        );
friend class CMSPAddress;
};
class ATL_NO_VTABLE CPlugTerminalSuperclassInfo :
    public IDispatchImpl<ITPluggableTerminalSuperclassInfo, &IID_ITPluggableTerminalSuperclassInfo, &LIBID_TAPI3Lib>,
    public CComObjectRootEx<CComMultiThreadModel>,
    public CMSPObjectSafetyImpl
{
public:
DECLARE_GET_CONTROLLING_UNKNOWN()
virtual HRESULT FinalConstruct(void);
BEGIN_COM_MAP(CPlugTerminalSuperclassInfo)
    COM_INTERFACE_ENTRY(ITPluggableTerminalSuperclassInfo)
    COM_INTERFACE_ENTRY(IDispatch)
    COM_INTERFACE_ENTRY(IObjectSafety)
        COM_INTERFACE_ENTRY_AGGREGATE(IID_IMarshal, m_pFTM)
END_COM_MAP()
public:
    CPlugTerminalSuperclassInfo() :
        m_bstrCLSID(NULL),
        m_bstrName(NULL),
        m_pFTM(NULL)
    {
    }
    ~CPlugTerminalSuperclassInfo()
    {
        if( m_bstrName )
        {
            SysFreeString( m_bstrName );
        }
        if( m_bstrCLSID )
        {
            SysFreeString( m_bstrCLSID );
        }
        if( m_pFTM )
        {
            m_pFTM->Release();
        }
    }
public:
    STDMETHOD(get_Name)(
                          BSTR* pName
        );
    STDMETHOD(get_CLSID)(
                          BSTR* pCLSID
        );
private:
    CMSPCritSection m_CritSect;
    BSTR m_bstrCLSID;
    BSTR m_bstrName;
    IUnknown* m_pFTM;
private:
    STDMETHOD(put_Name)(
                          BSTR bstrName
        );
    STDMETHOD(put_CLSID)(
                         BSTR bstrCLSID
        );
friend class CMSPAddress;
};
class ATL_NO_VTABLE CMSPAddress :
    public CComObjectRootEx<CComMultiThreadModelNoCS>,
    public ITMSPAddress,
    public IDispatchImpl<ITTerminalSupport2, &IID_ITTerminalSupport2, &LIBID_TAPI3Lib>
{
public:
BEGIN_COM_MAP( CMSPAddress )
    COM_INTERFACE_ENTRY( ITMSPAddress )
    COM_INTERFACE_ENTRY( IDispatch )
    COM_INTERFACE_ENTRY( ITTerminalSupport )
    COM_INTERFACE_ENTRY( ITTerminalSupport2 )
END_COM_MAP()
DECLARE_GET_CONTROLLING_UNKNOWN()
DECLARE_VQI()
    CMSPAddress();
    virtual ~CMSPAddress();
    virtual ULONG MSPAddressAddRef(void) = 0;
    virtual ULONG MSPAddressRelease(void) = 0;
    STDMETHOD (Initialize) (
        IN MSP_HANDLE htEvent
        );
    STDMETHOD (Shutdown) ();
    STDMETHOD (CreateMSPCall) (
        IN MSP_HANDLE htCall,
        IN DWORD dwReserved,
        IN DWORD dwMediaType,
        IN IUnknown * pOuterUnknown,
        OUT IUnknown ** ppMSPCall
        ) = 0;
    STDMETHOD (ShutdownMSPCall) (
        IN IUnknown * pMSPCall
        ) = 0;
    STDMETHOD (ReceiveTSPData) (
        IN IUnknown * pMSPCall,
        IN LPBYTE pBuffer,
        IN DWORD dwBufferSize
        );
    STDMETHOD (GetEvent) (
        IN OUT DWORD * pdwSize,
        OUT BYTE * pBuffer
        );
    STDMETHOD (get_StaticTerminals) (
            OUT VARIANT * pVariant
            );
    STDMETHOD (EnumerateStaticTerminals) (
            OUT IEnumTerminal ** ppTerminalEnumerator
            );
    STDMETHOD (get_DynamicTerminalClasses) (
            OUT VARIANT * pVariant
            );
    STDMETHOD (EnumerateDynamicTerminalClasses) (
            OUT IEnumTerminalClass ** ppTerminalClassEnumerator
            );
    STDMETHOD (CreateTerminal) (
            IN BSTR pTerminalClass,
            IN long lMediaType,
            IN TERMINAL_DIRECTION Direction,
            OUT ITTerminal ** ppTerminal
            );
    STDMETHOD (GetDefaultStaticTerminal) (
        IN long lMediaType,
        IN TERMINAL_DIRECTION Direction,
        OUT ITTerminal ** ppTerminal
        );
    STDMETHOD (get_PluggableSuperclasses)(
        OUT VARIANT * pVariant
        );
    STDMETHOD (EnumeratePluggableSuperclasses)(
        OUT IEnumPluggableSuperclassInfo** ppSuperclassEnumerator
        );
    STDMETHOD (get_PluggableTerminalClasses)(
        IN BSTR bstrTerminalSuperclass,
        IN long lMediaType,
        OUT VARIANT * pVariant
        );
    STDMETHOD (EnumeratePluggableTerminalClasses)(
        IN CLSID iidTerminalSuperclass,
        IN long lMediaType,
        OUT IEnumPluggableTerminalClassInfo ** ppClassEnumerator
        );
protected:
    virtual HRESULT GetStaticTerminals (
        IN OUT DWORD * pdwNumTerminals,
        OUT ITTerminal ** ppTerminals
        );
    virtual HRESULT GetDynamicTerminalClasses (
        IN OUT DWORD * pdwNumClasses,
        OUT IID * pTerminalClasses
        );
public:
    virtual BOOL IsValidSetOfMediaTypes(DWORD dwMediaType, DWORD dwMask);
    virtual HRESULT PostEvent(
        IN MSPEVENTITEM * EventItem
        );
    virtual DWORD GetCallMediaTypes(void) = 0;
protected:
    virtual HRESULT IsMonikerInTerminalList(IMoniker* pMoniker);
    virtual HRESULT UpdateTerminalListForPnp(
        IN BOOL bDeviceArrival
        );
    virtual HRESULT UpdateTerminalList(void);
    virtual HRESULT ReceiveTSPAddressData(
        IN PBYTE pBuffer,
        IN DWORD dwSize
        );
public:
    virtual HRESULT PnpNotifHandler(
        IN BOOL bDeviceArrival
        );
protected:
    HANDLE m_htEvent;
    LIST_ENTRY m_EventList;
    CMSPCritSection m_EventDataLock;
    ITTerminalManager * m_pITTerminalManager;
    CMSPArray <ITTerminal *> m_Terminals;
    BOOL m_fTerminalsUpToDate;
    CMSPCritSection m_TerminalDataLock;
private:
    static const STATIC_TERMINAL_TYPE m_saTerminalTypes[];
    static const DWORD m_sdwTerminalTypesCount;
};
template <class T>
HRESULT CreateMSPCallHelper(
    IN CMSPAddress * pCMSPAddress,
    IN MSP_HANDLE htCall,
    IN DWORD dwReserved,
    IN DWORD dwMediaType,
    IN IUnknown * pOuterUnknown,
    OUT IUnknown ** ppMSPCall,
    OUT T ** ppCMSPCall
    )
{
    LOG((MSP_TRACE, "CreateMSPCallHelper - enter"));
    HRESULT hr;
    T * pMSPCall;
    IUnknown *pUnknown = NULL;
    if (!pCMSPAddress)
    {
        LOG((MSP_ERROR, "CreateMSPCallHelper - "
            "bad address pointer - exit E_POINTER"));
        return E_POINTER;
    }
    if ( !pOuterUnknown)
    {
        LOG((MSP_ERROR, "CreateMSPCallHelper - "
            "bad outer unknown - we require aggregation - exit E_POINTER"));
        return E_POINTER;
    }
    if (!ppMSPCall)
    {
        LOG((MSP_ERROR, "CreateMSPCallHelper - "
            "bad iunknown return ptr - exit E_POINTER"));
        return E_POINTER;
    }
    if (!ppCMSPCall)
    {
        LOG((MSP_ERROR, "CreateMSPCallHelper - "
            "bad class return ptr - exit E_POINTER"));
        return E_POINTER;
    }
    if ( ! pCMSPAddress->IsValidSetOfMediaTypes(
                                        dwMediaType,
                                        pCMSPAddress->GetCallMediaTypes() ) )
    {
        LOG((MSP_ERROR, "CreateMSPCallHelper - "
            "unsupported media types - exit TAPI_E_INVALIDMEDIATYPE"));
        return TAPI_E_INVALIDMEDIATYPE;
    }
    CComAggObject<T> * pCall;
    pCall = new CComAggObject<T>(pOuterUnknown);
    if (pCall == NULL)
    {
        LOG((MSP_ERROR, "CreateMSPCallHelper - "
            "could not create agg call instance - exit E_OUTOFMEMORY"));
        return E_OUTOFMEMORY;
    }
    hr = pCall->QueryInterface(IID_IUnknown, (void **)&pUnknown);
    if (FAILED(hr))
    {
        LOG((MSP_ERROR, "CreateMSPCallHelper - "
            "QueryInterface failed: %x", hr));
        delete pCall;
        return hr;
    }
    hr = pCall->FinalConstruct();
    if (FAILED(hr))
    {
        LOG((MSP_ERROR, "CreateMSPCallHelper - "
            "FinalConstruct failed: %x.", hr));
        pUnknown->Release();
        return hr;
    }
    pMSPCall = dynamic_cast<T *>(&(pCall->m_contained));
    if (pMSPCall == NULL)
    {
        LOG((MSP_ERROR, "CreateMSPCallHelper - "
            "can not cast to agg object to class pointer - "
            "exit E_UNEXPECTED"));
        pUnknown->Release();
        return E_UNEXPECTED;
    }
    hr = pMSPCall->Init(pCMSPAddress, htCall, dwReserved, dwMediaType);
    if (FAILED(hr))
    {
        LOG((MSP_ERROR, "CreateMSPCallHelper - "
            "call init failed: %x", hr));
        pUnknown->Release();
        return hr;
    }
    *ppMSPCall = pUnknown;
    *ppCMSPCall = pMSPCall;
    LOG((MSP_TRACE, "CreateMSPCallHelper - exit S_OK"));
    return hr;
}
template <class T>
HRESULT ShutdownMSPCallHelper(
    IN IUnknown * pUnknown,
    OUT T ** ppCMSPCall
    )
{
    LOG((MSP_TRACE, "ShutdownMSPCallHelper - enter"));
    if (!pUnknown)
    {
        LOG((MSP_ERROR, "ShutdownMSPCallHelper - "
            "bad IUnknown pointer - exit E_POINTER"));
        return E_POINTER;
    }
    if (!ppCMSPCall)
    {
        LOG((MSP_ERROR, "ShutdownMSPCallHelper - "
            "bad return pointer - exit E_POINTER"));
        return E_POINTER;
    }
    T * pMSPCall;
    CComAggObject<T> * pCall = dynamic_cast<CComAggObject<T> *> (pUnknown);
    if (pCall == NULL)
    {
        LOG((MSP_ERROR, "ShutdownMSPCallHelper - "
            "can't cast unknown to agg object pointer - exit E_UNEXPECTED"));
        return E_UNEXPECTED;
    }
    pMSPCall = dynamic_cast<T *> (&(pCall->m_contained));
    if (pMSPCall == NULL)
    {
        LOG((MSP_ERROR, "ShutdownMSPCallHelper - "
            "can't cast contained unknown to class pointer - "
            "exit E_UNEXPECTED"));
        return E_UNEXPECTED;
    }
    HRESULT hr = pMSPCall->ShutDown();
    if (FAILED(hr))
    {
        LOG((MSP_ERROR, "ShutdownMSPCallHelper - "
            "ShutDownMSPCall failed: %x", hr));
        return hr;
    }
    *ppCMSPCall = pMSPCall;
    LOG((MSP_TRACE, "ShutdownMSPCallHelper - exit S_OK"));
    return S_OK;
}
#endif
#pragma endregion
