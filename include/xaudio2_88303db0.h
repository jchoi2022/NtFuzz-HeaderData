       
#include <sdkddkver.h>
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_TV_APP | WINAPI_PARTITION_TV_TITLE | WINAPI_PARTITION_GAMES)
    #define XAUDIO2_DLL_A "xaudio2_9.dll"
    #define XAUDIO2_DLL_W L"xaudio2_9.dll"
    #define XAUDIO2D_DLL_A "xaudio2_9d.dll"
    #define XAUDIO2D_DLL_W L"xaudio2_9d.dll"
    #define XAUDIO2_DLL XAUDIO2_DLL_W
    #define XAUDIO2D_DLL XAUDIO2D_DLL_W
#include <basetyps.h>
    interface __declspec(uuid("2B02E3CF-2E0B-4ec3-BE45-1B2A3FE7210D")) IXAudio2;
    interface __declspec(uuid("84ac29bb-d619-44d2-b197-e4acf7df3ed6")) IXAudio2Extension;
    EXTERN_C const GUID DECLSPEC_SELECTANY IID_IXAudio2Extension = __uuidof(IXAudio2Extension);
    EXTERN_C const GUID DECLSPEC_SELECTANY IID_IXAudio2 = __uuidof(IXAudio2);
#include <objbase.h>
#include <sal.h>
#include <mmreg.h>
#include <audiosessiontypes.h>
#pragma pack(push, 1)
    #define FWD_DECLARE(x) interface x
FWD_DECLARE(IXAudio2);
FWD_DECLARE(IXAudio2Voice);
FWD_DECLARE(IXAudio2SourceVoice);
FWD_DECLARE(IXAudio2SubmixVoice);
FWD_DECLARE(IXAudio2MasteringVoice);
FWD_DECLARE(IXAudio2EngineCallback);
FWD_DECLARE(IXAudio2VoiceCallback);
typedef UINT32 XAUDIO2_PROCESSOR;
typedef struct XAUDIO2_VOICE_DETAILS
{
    UINT32 CreationFlags;
    UINT32 ActiveFlags;
    UINT32 InputChannels;
    UINT32 InputSampleRate;
} XAUDIO2_VOICE_DETAILS;
typedef struct XAUDIO2_SEND_DESCRIPTOR
{
    UINT32 Flags;
    IXAudio2Voice* pOutputVoice;
} XAUDIO2_SEND_DESCRIPTOR;
typedef struct XAUDIO2_VOICE_SENDS
{
    UINT32 SendCount;
    XAUDIO2_SEND_DESCRIPTOR* pSends;
} XAUDIO2_VOICE_SENDS;
typedef struct XAUDIO2_EFFECT_DESCRIPTOR
{
    IUnknown* pEffect;
    BOOL InitialState;
    UINT32 OutputChannels;
} XAUDIO2_EFFECT_DESCRIPTOR;
typedef struct XAUDIO2_EFFECT_CHAIN
{
    UINT32 EffectCount;
    XAUDIO2_EFFECT_DESCRIPTOR* pEffectDescriptors;
} XAUDIO2_EFFECT_CHAIN;
typedef enum XAUDIO2_FILTER_TYPE
{
    LowPassFilter,
    BandPassFilter,
    HighPassFilter,
    NotchFilter,
    LowPassOnePoleFilter,
    HighPassOnePoleFilter
} XAUDIO2_FILTER_TYPE;
typedef struct XAUDIO2_FILTER_PARAMETERS
{
    XAUDIO2_FILTER_TYPE Type;
    float Frequency;
    float OneOverQ;
} XAUDIO2_FILTER_PARAMETERS;
typedef struct XAUDIO2_BUFFER
{
    UINT32 Flags;
    UINT32 AudioBytes;
    const BYTE* pAudioData;
    UINT32 PlayBegin;
    UINT32 PlayLength;
    UINT32 LoopBegin;
    UINT32 LoopLength;
    UINT32 LoopCount;
    void* pContext;
} XAUDIO2_BUFFER;
typedef struct XAUDIO2_BUFFER_WMA
{
    const UINT32* pDecodedPacketCumulativeBytes;
    UINT32 PacketCount;
} XAUDIO2_BUFFER_WMA;
typedef struct XAUDIO2_VOICE_STATE
{
    void* pCurrentBufferContext;
    UINT32 BuffersQueued;
    UINT64 SamplesPlayed;
} XAUDIO2_VOICE_STATE;
typedef struct XAUDIO2_PERFORMANCE_DATA
{
    UINT64 AudioCyclesSinceLastQuery;
    UINT64 TotalCyclesSinceLastQuery;
    UINT32 MinimumCyclesPerQuantum;
    UINT32 MaximumCyclesPerQuantum;
    UINT32 MemoryUsageInBytes;
    UINT32 CurrentLatencyInSamples;
    UINT32 GlitchesSinceEngineStarted;
    UINT32 ActiveSourceVoiceCount;
    UINT32 TotalSourceVoiceCount;
    UINT32 ActiveSubmixVoiceCount;
    UINT32 ActiveResamplerCount;
    UINT32 ActiveMatrixMixCount;
    UINT32 ActiveXmaSourceVoices;
    UINT32 ActiveXmaStreams;
} XAUDIO2_PERFORMANCE_DATA;
typedef struct XAUDIO2_DEBUG_CONFIGURATION
{
    UINT32 TraceMask;
    UINT32 BreakMask;
    BOOL LogThreadID;
    BOOL LogFileline;
    BOOL LogFunctionName;
    BOOL LogTiming;
} XAUDIO2_DEBUG_CONFIGURATION;
    #define X2DEFAULT(x) =x
DECLARE_INTERFACE_(IXAudio2, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _COM_Outptr_ void** ppvInterface) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release) (THIS) PURE;
    STDMETHOD(RegisterForCallbacks) (_In_ IXAudio2EngineCallback* pCallback) PURE;
    STDMETHOD_(void, UnregisterForCallbacks) (_In_ IXAudio2EngineCallback* pCallback) PURE;
    STDMETHOD(CreateSourceVoice) (THIS_ _Outptr_ IXAudio2SourceVoice** ppSourceVoice,
                                  _In_ const WAVEFORMATEX* pSourceFormat,
                                  UINT32 Flags X2DEFAULT(0),
                                  float MaxFrequencyRatio X2DEFAULT(XAUDIO2_DEFAULT_FREQ_RATIO),
                                  _In_opt_ IXAudio2VoiceCallback* pCallback X2DEFAULT(NULL),
                                  _In_opt_ const XAUDIO2_VOICE_SENDS* pSendList X2DEFAULT(NULL),
                                  _In_opt_ const XAUDIO2_EFFECT_CHAIN* pEffectChain X2DEFAULT(NULL)) PURE;
    STDMETHOD(CreateSubmixVoice) (THIS_ _Outptr_ IXAudio2SubmixVoice** ppSubmixVoice,
                                  UINT32 InputChannels, UINT32 InputSampleRate,
                                  UINT32 Flags X2DEFAULT(0), UINT32 ProcessingStage X2DEFAULT(0),
                                  _In_opt_ const XAUDIO2_VOICE_SENDS* pSendList X2DEFAULT(NULL),
                                  _In_opt_ const XAUDIO2_EFFECT_CHAIN* pEffectChain X2DEFAULT(NULL)) PURE;
    STDMETHOD(CreateMasteringVoice) (THIS_ _Outptr_ IXAudio2MasteringVoice** ppMasteringVoice,
                                     UINT32 InputChannels X2DEFAULT(XAUDIO2_DEFAULT_CHANNELS),
                                     UINT32 InputSampleRate X2DEFAULT(XAUDIO2_DEFAULT_SAMPLERATE),
                                     UINT32 Flags X2DEFAULT(0), _In_opt_z_ LPCWSTR szDeviceId X2DEFAULT(NULL),
                                     _In_opt_ const XAUDIO2_EFFECT_CHAIN* pEffectChain X2DEFAULT(NULL),
                                    _In_ AUDIO_STREAM_CATEGORY StreamCategory X2DEFAULT(AudioCategory_GameEffects)) PURE;
    STDMETHOD(StartEngine) (THIS) PURE;
    STDMETHOD_(void, StopEngine) (THIS) PURE;
    STDMETHOD(CommitChanges) (THIS_ UINT32 OperationSet) PURE;
    STDMETHOD_(void, GetPerformanceData) (THIS_ _Out_ XAUDIO2_PERFORMANCE_DATA* pPerfData) PURE;
    STDMETHOD_(void, SetDebugConfiguration) (THIS_ _In_opt_ const XAUDIO2_DEBUG_CONFIGURATION* pDebugConfiguration,
                                             _Reserved_ void* pReserved X2DEFAULT(NULL)) PURE;
};
DECLARE_INTERFACE_(IXAudio2Extension, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID riid, _COM_Outptr_ void** ppvInterface) PURE;
    STDMETHOD_(ULONG, AddRef) (THIS) PURE;
    STDMETHOD_(ULONG, Release) (THIS) PURE;
    STDMETHOD_(void, GetProcessingQuantum)(THIS_ _Out_ UINT32* quantumNumerator, _Out_range_(!= , 0) UINT32* quantumDenominator);
    STDMETHOD_(void, GetProcessor)(THIS_ _Out_range_(!= , 0) XAUDIO2_PROCESSOR* processor);
};
DECLARE_INTERFACE(IXAudio2Voice)
{
    #define Declare_IXAudio2Voice_Methods() \
    \
      \
    STDMETHOD_(void, GetVoiceDetails) (THIS_ _Out_ XAUDIO2_VOICE_DETAILS* pVoiceDetails) PURE; \
    \
      \
    STDMETHOD(SetOutputVoices) (THIS_ _In_opt_ const XAUDIO2_VOICE_SENDS* pSendList) PURE; \
    \
      \
    STDMETHOD(SetEffectChain) (THIS_ _In_opt_ const XAUDIO2_EFFECT_CHAIN* pEffectChain) PURE; \
    \
      \
    STDMETHOD(EnableEffect) (THIS_ UINT32 EffectIndex, \
                             UINT32 OperationSet X2DEFAULT(XAUDIO2_COMMIT_NOW)) PURE; \
    \
      \
    STDMETHOD(DisableEffect) (THIS_ UINT32 EffectIndex, \
                              UINT32 OperationSet X2DEFAULT(XAUDIO2_COMMIT_NOW)) PURE; \
    \
      \
    STDMETHOD_(void, GetEffectState) (THIS_ UINT32 EffectIndex, _Out_ BOOL* pEnabled) PURE; \
    \
      \
    STDMETHOD(SetEffectParameters) (THIS_ UINT32 EffectIndex, \
                                    _In_reads_bytes_(ParametersByteSize) const void* pParameters, \
                                    UINT32 ParametersByteSize, \
                                    UINT32 OperationSet X2DEFAULT(XAUDIO2_COMMIT_NOW)) PURE; \
    \
      \
    STDMETHOD(GetEffectParameters) (THIS_ UINT32 EffectIndex, \
                                    _Out_writes_bytes_(ParametersByteSize) void* pParameters, \
                                    UINT32 ParametersByteSize) PURE; \
    \
      \
    STDMETHOD(SetFilterParameters) (THIS_ _In_ const XAUDIO2_FILTER_PARAMETERS* pParameters, \
                                    UINT32 OperationSet X2DEFAULT(XAUDIO2_COMMIT_NOW)) PURE; \
    \
      \
    STDMETHOD_(void, GetFilterParameters) (THIS_ _Out_ XAUDIO2_FILTER_PARAMETERS* pParameters) PURE; \
    \
      \
    STDMETHOD(SetOutputFilterParameters) (THIS_ _In_opt_ IXAudio2Voice* pDestinationVoice, \
                                          _In_ const XAUDIO2_FILTER_PARAMETERS* pParameters, \
                                          UINT32 OperationSet X2DEFAULT(XAUDIO2_COMMIT_NOW)) PURE; \
    \
      \
    STDMETHOD_(void, GetOutputFilterParameters) (THIS_ _In_opt_ IXAudio2Voice* pDestinationVoice, \
                                                 _Out_ XAUDIO2_FILTER_PARAMETERS* pParameters) PURE; \
    \
      \
    STDMETHOD(SetVolume) (THIS_ float Volume, \
                          UINT32 OperationSet X2DEFAULT(XAUDIO2_COMMIT_NOW)) PURE; \
    \
      \
    STDMETHOD_(void, GetVolume) (THIS_ _Out_ float* pVolume) PURE; \
    \
      \
    STDMETHOD(SetChannelVolumes) (THIS_ UINT32 Channels, _In_reads_(Channels) const float* pVolumes, \
                                  UINT32 OperationSet X2DEFAULT(XAUDIO2_COMMIT_NOW)) PURE; \
    \
      \
    STDMETHOD_(void, GetChannelVolumes) (THIS_ UINT32 Channels, _Out_writes_(Channels) float* pVolumes) PURE; \
    \
      \
    STDMETHOD(SetOutputMatrix) (THIS_ _In_opt_ IXAudio2Voice* pDestinationVoice, \
                                UINT32 SourceChannels, UINT32 DestinationChannels, \
                                _In_reads_(SourceChannels * DestinationChannels) const float* pLevelMatrix, \
                                UINT32 OperationSet X2DEFAULT(XAUDIO2_COMMIT_NOW)) PURE; \
    \
      \
    STDMETHOD_(void, GetOutputMatrix) (THIS_ _In_opt_ IXAudio2Voice* pDestinationVoice, \
                                       UINT32 SourceChannels, UINT32 DestinationChannels, \
                                       _Out_writes_(SourceChannels * DestinationChannels) float* pLevelMatrix) PURE; \
    \
      \
    STDMETHOD_(void, DestroyVoice) (THIS) PURE
    Declare_IXAudio2Voice_Methods();
};
DECLARE_INTERFACE_(IXAudio2SourceVoice, IXAudio2Voice)
{
    Declare_IXAudio2Voice_Methods();
    STDMETHOD(Start) (THIS_ UINT32 Flags X2DEFAULT(0), UINT32 OperationSet X2DEFAULT(XAUDIO2_COMMIT_NOW)) PURE;
    STDMETHOD(Stop) (THIS_ UINT32 Flags X2DEFAULT(0), UINT32 OperationSet X2DEFAULT(XAUDIO2_COMMIT_NOW)) PURE;
    STDMETHOD(SubmitSourceBuffer) (THIS_ _In_ const XAUDIO2_BUFFER* pBuffer, _In_opt_ const XAUDIO2_BUFFER_WMA* pBufferWMA X2DEFAULT(NULL)) PURE;
    STDMETHOD(FlushSourceBuffers) (THIS) PURE;
    STDMETHOD(Discontinuity) (THIS) PURE;
    STDMETHOD(ExitLoop) (THIS_ UINT32 OperationSet X2DEFAULT(XAUDIO2_COMMIT_NOW)) PURE;
    STDMETHOD_(void, GetState) (THIS_ _Out_ XAUDIO2_VOICE_STATE* pVoiceState, UINT32 Flags X2DEFAULT(0)) PURE;
    STDMETHOD(SetFrequencyRatio) (THIS_ float Ratio,
                                  UINT32 OperationSet X2DEFAULT(XAUDIO2_COMMIT_NOW)) PURE;
    STDMETHOD_(void, GetFrequencyRatio) (THIS_ _Out_ float* pRatio) PURE;
    STDMETHOD(SetSourceSampleRate) (THIS_ UINT32 NewSourceSampleRate) PURE;
};
DECLARE_INTERFACE_(IXAudio2SubmixVoice, IXAudio2Voice)
{
    Declare_IXAudio2Voice_Methods();
};
DECLARE_INTERFACE_(IXAudio2MasteringVoice, IXAudio2Voice)
{
    Declare_IXAudio2Voice_Methods();
    STDMETHOD(GetChannelMask) (THIS_ _Out_ DWORD* pChannelmask) PURE;
};
DECLARE_INTERFACE(IXAudio2EngineCallback)
{
    STDMETHOD_(void, OnProcessingPassStart) (THIS) PURE;
    STDMETHOD_(void, OnProcessingPassEnd) (THIS) PURE;
    STDMETHOD_(void, OnCriticalError) (THIS_ HRESULT Error) PURE;
};
DECLARE_INTERFACE(IXAudio2VoiceCallback)
{
    STDMETHOD_(void, OnVoiceProcessingPassStart) (THIS_ UINT32 BytesRequired) PURE;
    STDMETHOD_(void, OnVoiceProcessingPassEnd) (THIS) PURE;
    STDMETHOD_(void, OnStreamEnd) (THIS) PURE;
    STDMETHOD_(void, OnBufferStart) (THIS_ void* pBufferContext) PURE;
    STDMETHOD_(void, OnBufferEnd) (THIS_ void* pBufferContext) PURE;
    STDMETHOD_(void, OnLoopEnd) (THIS_ void* pBufferContext) PURE;
    STDMETHOD_(void, OnVoiceError) (THIS_ void* pBufferContext, HRESULT Error) PURE;
};
#include <math.h>
__inline float XAudio2DecibelsToAmplitudeRatio(float Decibels)
{
    return powf(10.0f, Decibels / 20.0f);
}
__inline float XAudio2AmplitudeRatioToDecibels(float Volume)
{
    if (Volume == 0)
    {
        return -3.402823466e+38f;
    }
    return 20.0f * log10f(Volume);
}
__inline float XAudio2SemitonesToFrequencyRatio(float Semitones)
{
    return powf(2.0f, Semitones / 12.0f);
}
__inline float XAudio2FrequencyRatioToSemitones(float FrequencyRatio)
{
    return 39.86313713864835f * log10f(FrequencyRatio);
}
__inline float XAudio2CutoffFrequencyToRadians(float CutoffFrequency, UINT32 SampleRate)
{
    if ((UINT32)(CutoffFrequency * 6.0f) >= SampleRate)
    {
        return XAUDIO2_MAX_FILTER_FREQUENCY;
    }
    return 2.0f * sinf((float)M_PI * CutoffFrequency / SampleRate);
}
__inline float XAudio2RadiansToCutoffFrequency(float Radians, float SampleRate)
{
    return SampleRate * asinf(Radians / 2.0f) / (float)M_PI;
}
__inline float XAudio2CutoffFrequencyToOnePoleCoefficient(float CutoffFrequency, UINT32 SampleRate)
{
    if ((UINT32)CutoffFrequency >= SampleRate)
    {
        return XAUDIO2_MAX_FILTER_FREQUENCY;
    }
    return ( 1.0f - powf(1.0f - 2.0f * CutoffFrequency / SampleRate, 2.0f) );
}
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
XAUDIO2_STDAPI XAudio2CreateWithVersionInfo(_Outptr_ IXAudio2** ppXAudio2,
    UINT32 Flags X2DEFAULT(0),
    XAUDIO2_PROCESSOR XAudio2Processor X2DEFAULT(XAUDIO2_DEFAULT_PROCESSOR),
    DWORD ntddiVersion X2DEFAULT(NTDDI_VERSION));
inline HRESULT XAudio2Create(_Outptr_ IXAudio2** ppXAudio2,
    UINT32 Flags X2DEFAULT(0),
    XAUDIO2_PROCESSOR XAudio2Processor X2DEFAULT(XAUDIO2_DEFAULT_PROCESSOR))
{
    typedef HRESULT(__stdcall *XAudio2CreateWithVersionInfoFunc)(_Outptr_ IXAudio2**, UINT32, XAUDIO2_PROCESSOR, DWORD);
    typedef HRESULT(__stdcall *XAudio2CreateInfoFunc)(_Outptr_ IXAudio2**, UINT32, XAUDIO2_PROCESSOR);
    static HMODULE s_dllInstance = NULL;
    static XAudio2CreateWithVersionInfoFunc s_pfnAudio2CreateWithVersion = NULL;
    static XAudio2CreateInfoFunc s_pfnAudio2Create = NULL;
    if (s_dllInstance == NULL)
    {
        s_dllInstance = LoadLibraryEx(XAUDIO2_DLL, NULL, LOAD_LIBRARY_SEARCH_SYSTEM32);
        if (s_dllInstance == NULL)
        {
            return HRESULT_FROM_WIN32(GetLastError());
        }
        s_pfnAudio2CreateWithVersion = (XAudio2CreateWithVersionInfoFunc)(void*)GetProcAddress(s_dllInstance, "XAudio2CreateWithVersionInfo");
        if (s_pfnAudio2CreateWithVersion == NULL)
        {
            s_pfnAudio2Create = (XAudio2CreateInfoFunc)(void*)GetProcAddress(s_dllInstance, "XAudio2Create");
            if (s_pfnAudio2Create == NULL)
            {
                return HRESULT_FROM_WIN32(GetLastError());
            }
        }
    }
    if (s_pfnAudio2CreateWithVersion != NULL)
    {
        return (*s_pfnAudio2CreateWithVersion)(ppXAudio2, Flags, XAudio2Processor, NTDDI_VERSION);
    }
    return (*s_pfnAudio2Create)(ppXAudio2, Flags, XAudio2Processor);
}
#else
XAUDIO2_STDAPI XAudio2Create(_Outptr_ IXAudio2** ppXAudio2, UINT32 Flags X2DEFAULT(0),
    XAUDIO2_PROCESSOR XAudio2Processor X2DEFAULT(XAUDIO2_DEFAULT_PROCESSOR));
#endif
#pragma pack(pop)
#endif
#pragma endregion
