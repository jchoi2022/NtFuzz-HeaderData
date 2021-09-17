       
#include "XAPO.h"
        #define XAPOASSERT(exp) __assume(exp)
        #define XAPOASSERT_NO_OUTPUT(exp) __assume(exp)
#pragma pack(push, 8)
typedef float FLOAT32;
class DECLSPEC_NOVTABLE CXAPOBase: public IXAPO {
private:
    const XAPO_REGISTRATION_PROPERTIES* m_pRegistrationProperties;
    void* m_pfnMatrixMixFunction;
    FLOAT32* m_pfl32MatrixCoefficients;
    UINT32 m_nSrcFormatType;
    BOOL m_fIsScalarMatrix;
    BOOL m_fIsLocked;
protected:
    LONG m_lReferenceCount;
    virtual HRESULT ValidateFormatDefault (_Inout_ WAVEFORMATEX* pFormat, BOOL fOverwrite);
    HRESULT ValidateFormatPair (const WAVEFORMATEX* pSupportedFormat, _Inout_ WAVEFORMATEX* pRequestedFormat, BOOL fOverwrite);
    void ProcessThru (const void* pInputBuffer, _Inout_updates_(FrameCount*OutputChannelCount) FLOAT32* pOutputBuffer, UINT32 FrameCount, UINT32 InputChannelCount, UINT32 OutputChannelCount, BOOL MixWithOutput);
    const XAPO_REGISTRATION_PROPERTIES* GetRegistrationPropertiesInternal () { return m_pRegistrationProperties; }
    BOOL IsLocked () { return m_fIsLocked; }
public:
    CXAPOBase (const XAPO_REGISTRATION_PROPERTIES* pRegistrationProperties);
    virtual ~CXAPOBase ();
    STDMETHOD(QueryInterface) (REFIID riid, _Outptr_ void** ppInterface)
    {
        XAPOASSERT(ppInterface != NULL);
        HRESULT hr = S_OK;
        if (riid == __uuidof(IXAPO)) {
            *ppInterface = static_cast<IXAPO*>(this);
            AddRef();
        } else if (riid == __uuidof(IUnknown)) {
            *ppInterface = static_cast<IUnknown*>(this);
            AddRef();
        } else {
            *ppInterface = NULL;
            hr = E_NOINTERFACE;
        }
        return hr;
    }
    STDMETHOD_(ULONG, AddRef) ()
    {
        return (ULONG)InterlockedIncrement(&m_lReferenceCount);
    }
    STDMETHOD_(ULONG, Release) ()
    {
        ULONG uTmpReferenceCount = (ULONG)InterlockedDecrement(&m_lReferenceCount);
        if (uTmpReferenceCount == 0) {
            delete this;
        }
        return uTmpReferenceCount;
    }
    STDMETHOD(GetRegistrationProperties) (_Outptr_ XAPO_REGISTRATION_PROPERTIES** ppRegistrationProperties);
    STDMETHOD(IsInputFormatSupported) (const WAVEFORMATEX* pOutputFormat, const WAVEFORMATEX* pRequestedInputFormat, _Outptr_opt_ WAVEFORMATEX** ppSupportedInputFormat);
    STDMETHOD(IsOutputFormatSupported) (const WAVEFORMATEX* pInputFormat, const WAVEFORMATEX* pRequestedOutputFormat, _Outptr_opt_ WAVEFORMATEX** ppSupportedOutputFormat);
    STDMETHOD(Initialize) (_In_reads_bytes_opt_(DataByteSize) const void*, UINT32 DataByteSize)
    {
        UNREFERENCED_PARAMETER(DataByteSize);
        return S_OK;
    }
    STDMETHOD_(void, Reset) () { return; }
    STDMETHOD(LockForProcess) (_Pre_equal_to_(OutputLockedParameterCount) UINT32 InputLockedParameterCount, _In_reads_opt_(InputLockedParameterCount) const XAPO_LOCKFORPROCESS_BUFFER_PARAMETERS* pInputLockedParameters, _Pre_equal_to_(InputLockedParameterCount) UINT32 OutputLockedParameterCount, _In_reads_opt_(OutputLockedParameterCount) const XAPO_LOCKFORPROCESS_BUFFER_PARAMETERS* pOutputLockedParameters);
    STDMETHOD_(void, UnlockForProcess) ();
    STDMETHOD_(UINT32, CalcInputFrames) (UINT32 OutputFrameCount) { return OutputFrameCount; }
    STDMETHOD_(UINT32, CalcOutputFrames) (UINT32 InputFrameCount) { return InputFrameCount; }
};
class DECLSPEC_NOVTABLE CXAPOParametersBase: public CXAPOBase, public IXAPOParameters {
private:
    BYTE* m_pParameterBlocks;
    BYTE* m_pCurrentParameters;
    BYTE* m_pCurrentParametersInternal;
    UINT32 m_uCurrentParametersIndex;
    UINT32 m_uParameterBlockByteSize;
    BOOL m_fNewerResultsReady;
    BOOL m_fProducer;
public:
    CXAPOParametersBase (const XAPO_REGISTRATION_PROPERTIES* pRegistrationProperties, _In_reads_bytes_opt_(3*uParameterBlockByteSize) BYTE* pParameterBlocks, UINT32 uParameterBlockByteSize, BOOL fProducer);
    virtual ~CXAPOParametersBase ();
    STDMETHOD(QueryInterface) (REFIID riid, _Outptr_result_maybenull_ void** ppInterface)
    {
        XAPOASSERT(ppInterface != NULL);
        HRESULT hr = S_OK;
        if (riid == __uuidof(IXAPOParameters)) {
            *ppInterface = static_cast<IXAPOParameters*>(this);
            CXAPOBase::AddRef();
        } else {
            hr = CXAPOBase::QueryInterface(riid, ppInterface);
        }
        return hr;
    }
    STDMETHOD_(ULONG, AddRef)() { return CXAPOBase::AddRef(); }
    STDMETHOD_(ULONG, Release)() { return CXAPOBase::Release(); }
    STDMETHOD_(void, SetParameters) (_In_reads_bytes_(ParameterByteSize) const void* pParameters, UINT32 ParameterByteSize);
    STDMETHOD_(void, GetParameters) (_Out_writes_bytes_(ParameterByteSize) void* pParameters, UINT32 ParameterByteSize);
    virtual void OnSetParameters (_In_reads_bytes_(ParameterByteSize) const void* pParameters, UINT32 ParameterByteSize)
    {
        XAPOASSERT(m_uParameterBlockByteSize > 0);
        XAPOASSERT(pParameters != NULL);
        XAPOASSERT(ParameterByteSize == m_uParameterBlockByteSize);
    }
    BOOL ParametersChanged ();
    BYTE* BeginProcess ();
    void EndProcess ();
};
#pragma pack(pop)
