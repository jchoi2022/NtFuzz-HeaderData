       
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <AudioEngineBaseAPO.h>
#include <strsafe.h>
#include <ks.h>
#include <ksmedia.h>
#include <intsafe.h>
#include <crtdbg.h>
extern "C"
{
    _Success_(return == S_OK)
    STDAPI AERT_Allocate(_In_ size_t size, _Outptr_result_bytebuffer_(size) void **pMemory);
    STDAPI AERT_Free(_In_ void *pMemory);
}
#pragma AVRT_CODE_BEGIN
#pragma AVRT_CODE_END
#pragma AVRT_CONST_BEGIN
#pragma AVRT_CONST_END
#pragma AVRT_BSS_BEGIN
#pragma AVRT_BSS_END
#pragma AVRT_DATA_BEGIN
#pragma AVRT_DATA_END
#pragma AVRT_VTABLES_BEGIN
class __declspec(novtable) CBaseAudioProcessingObject : public IAudioProcessingObject, public IAudioProcessingObjectRT, public IAudioProcessingObjectConfiguration
{
public:
    CBaseAudioProcessingObject(_In_ const APO_REG_PROPERTIES* pRegProperties);
    virtual ~CBaseAudioProcessingObject();
public:
    STDMETHOD_(void, APOProcess)(_In_ UINT32 u32NumInputConnections,
        _In_reads_(u32NumInputConnections) APO_CONNECTION_PROPERTY** ppInputConnections,
        _In_ UINT32 u32NumOutputConnections,
        _Inout_updates_(u32NumOutputConnections) APO_CONNECTION_PROPERTY** ppOutputConnections) = 0;
    STDMETHOD_(UINT32, CalcInputFrames)(_In_ UINT32 u32OutputFrameCount);
    STDMETHOD_(UINT32, CalcOutputFrames)(_In_ UINT32 u32InputFrameCount);
    STDMETHOD(LockForProcess)(_In_ UINT32 u32NumInputConnections, _In_reads_(u32NumInputConnections) APO_CONNECTION_DESCRIPTOR** ppInputConnections, _In_ UINT32 u32NumOutputConnections, _In_reads_(u32NumOutputConnections) APO_CONNECTION_DESCRIPTOR** ppOutputConnections);
    STDMETHOD(UnlockForProcess)(void);
    STDMETHOD(Reset)(void);
    STDMETHOD(GetLatency)(_Out_ HNSTIME* pTime);
    STDMETHOD(GetRegistrationProperties)(_Outptr_opt_ APO_REG_PROPERTIES** ppRegProps);
    STDMETHOD(Initialize)(_In_ UINT32 cbDataSize, _In_reads_bytes_(cbDataSize) BYTE* pbyData);
    STDMETHOD(IsInputFormatSupported)(_In_opt_ IAudioMediaType* pOutputFormat, _In_opt_ IAudioMediaType* pRequestedInputFormat, _Outptr_opt_ IAudioMediaType** ppSupportedInputFormat);
    STDMETHOD(IsOutputFormatSupported)(_In_opt_ IAudioMediaType* pInputFormat, _In_opt_ IAudioMediaType* pRequestedOutputFormat, _Outptr_opt_ IAudioMediaType** ppSupportedOutputFormat);
    STDMETHOD(GetInputChannelCount)(_Out_ UINT32* pu32ChannelCount);
protected:
    HRESULT IsFormatTypeSupported(
        _In_ IAudioMediaType* pOppositeFormat,
        _In_ IAudioMediaType* pRequestedFormat,
        _Outptr_ IAudioMediaType** ppSupportedFormat,
        _In_ bool bIsInput );
    HRESULT __fastcall ValidateConnection(_In_ const UNCOMPRESSEDAUDIOFORMAT &pUncompressedAudioFormat);
    virtual HRESULT ValidateAndCacheConnectionInfo(_In_ UINT32 u32NumInputConnections,
        _In_reads_(u32NumInputConnections) APO_CONNECTION_DESCRIPTOR** ppInputConnections,
        _In_ UINT32 u32NumOutputConnections,
        _In_reads_(u32NumOutputConnections) APO_CONNECTION_DESCRIPTOR** ppOutputConnections);
    bool BuffersOverlap(_In_ UINT32 u32NumInputConnections,
        _In_reads_(u32NumInputConnections) APO_CONNECTION_DESCRIPTOR** ppInputConnections,
        _In_ UINT32 u32NumOutputConnections,
        _In_reads_(u32NumOutputConnections) APO_CONNECTION_DESCRIPTOR** ppOutputConnections);
    UINT32 __fastcall GetSamplesPerFrame();
    UINT32 __fastcall GetBytesPerSampleContainer();
    UINT32 __fastcall GetValidBitsPerSample();
    FLOAT32 __fastcall GetFramesPerSecond();
    HRESULT __fastcall ValidateInitializeParameters(_In_ UINT32 cbDataSize, _In_reads_bytes_(cbDataSize) BYTE* pbyData, _In_ REFCLSID clsid, _In_ UINT32 cbStructSize);
    virtual HRESULT __fastcall ValidateDefaultAPOFormat(_In_ UNCOMPRESSEDAUDIOFORMAT& audioFormat, _In_ bool bIsInput);
protected:
    bool m_bIsLocked;
    bool m_bIsInitialized;
    const APO_REG_PROPERTIES* m_pRegProperties;
    CRITICAL_SECTION m_CritSec;
    UINT32 m_u32SamplesPerFrame;
private:
    UINT32 m_u32BytesPerSampleContainer;
    UINT32 m_u32ValidBitsPerSample;
    FLOAT32 m_f32FramesPerSecond;
};
#pragma AVRT_VTABLES_END
template<int NumAPOInterfaces>
class CRegAPOProperties
{
public:
    CRegAPOProperties(_In_ REFCLSID clsid,
                      _In_z_ LPCWSTR pszFriendlyName, _In_z_ LPCWSTR pszCopyrightInfo,
                      _In_ UINT32 u32MajorVersion, _In_ UINT32 u32MinorVersion,
                      _In_ REFIID iidAPOInterface1,
                      _In_ APO_FLAG Flags = DEFAULT_APOREG_FLAGS,
                      _In_ UINT32 u32MinInputConnections = DEFAULT_APOREG_MININPUTCONNECTIONS,
                      _In_ UINT32 u32MaxInputConnections = DEFAULT_APOREG_MAXINPUTCONNECTIONS,
                      _In_ UINT32 u32MinOutputConnections = DEFAULT_APOREG_MINOUTPUTCONNECTIONS,
                      _In_ UINT32 u32MaxOutputConnections = DEFAULT_APOREG_MAXOUTPUTCONNECTIONS,
                      _In_ UINT32 u32MaxInstances = DEFAULT_APOREG_MAXINSTANCES,
                      ...)
    {
        int index;
        va_list va;
        m_Properties.clsid = clsid;
        m_Properties.Flags = Flags;
        HRESULT hResult = StringCbCopyW(m_Properties.szFriendlyName, sizeof(m_Properties.szFriendlyName), pszFriendlyName);
        _ASSERTE(S_OK == hResult);
        hResult = StringCbCopyW(m_Properties.szCopyrightInfo, sizeof(m_Properties.szCopyrightInfo), pszCopyrightInfo);
        _ASSERTE(S_OK == hResult);
        m_Properties.u32MajorVersion = u32MajorVersion;
        m_Properties.u32MinorVersion = u32MinorVersion;
        m_Properties.u32MinInputConnections = u32MinInputConnections;
        m_Properties.u32MaxInputConnections = u32MaxInputConnections;
        m_Properties.u32MinOutputConnections = u32MinOutputConnections;
        m_Properties.u32MaxOutputConnections = u32MaxOutputConnections;
        m_Properties.u32MaxInstances = u32MaxInstances;
        m_Properties.u32NumAPOInterfaces = NumAPOInterfaces;
        m_Properties.iidAPOInterfaceList[0] = iidAPOInterface1;
        va_start(va, u32MaxInstances);
        index = 0;
        while (index < NumAPOInterfaces - 1)
        {
            m_aAdditionalAPOIIDs[index] = va_arg(va, IID);
            index++;
        }
        va_end(va);
    }
    operator APO_REG_PROPERTIES&() const
    {
        return m_Properties;
    }
    operator const APO_REG_PROPERTIES*() const
    {
        return &m_Properties;
    }
public:
    APO_REG_PROPERTIES m_Properties;
#pragma warning(push)
#pragma warning(disable: 4200)
    IID m_aAdditionalAPOIIDs[NumAPOInterfaces - 1];
#pragma warning(pop)
};
#endif
#pragma endregion
