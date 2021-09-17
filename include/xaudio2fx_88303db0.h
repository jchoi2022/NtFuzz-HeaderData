       
#include <sdkddkver.h>
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_TV_APP | WINAPI_PARTITION_TV_TITLE | WINAPI_PARTITION_GAMES)
class __declspec(uuid("4FC3B166-972A-40CF-BC37-7DB03DB2FBA3")) AudioVolumeMeter;
EXTERN_C const GUID DECLSPEC_SELECTANY CLSID_AudioVolumeMeter = __uuidof(AudioVolumeMeter);
class __declspec(uuid("C2633B16-471B-4498-B8C5-4F0959E2EC09")) AudioReverb;
EXTERN_C const GUID DECLSPEC_SELECTANY CLSID_AudioReverb = __uuidof(AudioReverb);
#include <objbase.h>
#include <math.h>
#pragma pack(push, 1)
    #define DEFAULT(x) =x
XAUDIO2FX_STDAPI CreateAudioVolumeMeter(_Outptr_ IUnknown** ppApo);
XAUDIO2FX_STDAPI CreateAudioReverb(_Outptr_ IUnknown** ppApo);
__inline HRESULT XAudio2CreateVolumeMeter(_Outptr_ IUnknown** ppApo, UINT32 Flags DEFAULT(0))
{
    UNREFERENCED_PARAMETER(Flags);
    return CreateAudioVolumeMeter(ppApo);
}
__inline HRESULT XAudio2CreateReverb(_Outptr_ IUnknown** ppApo, UINT32 Flags DEFAULT(0))
{
    UNREFERENCED_PARAMETER(Flags);
    return CreateAudioReverb(ppApo);
}
typedef struct XAUDIO2FX_VOLUMEMETER_LEVELS
{
    float* pPeakLevels;
    float* pRMSLevels;
    UINT32 ChannelCount;
} XAUDIO2FX_VOLUMEMETER_LEVELS;
typedef struct XAUDIO2FX_REVERB_PARAMETERS
{
    float WetDryMix;
    UINT32 ReflectionsDelay;
    BYTE ReverbDelay;
    BYTE RearDelay;
    BYTE SideDelay;
    BYTE PositionLeft;
    BYTE PositionRight;
    BYTE PositionMatrixLeft;
    BYTE PositionMatrixRight;
    BYTE EarlyDiffusion;
    BYTE LateDiffusion;
    BYTE LowEQGain;
    BYTE LowEQCutoff;
    BYTE HighEQGain;
    BYTE HighEQCutoff;
    float RoomFilterFreq;
    float RoomFilterMain;
    float RoomFilterHF;
    float ReflectionsGain;
    float ReverbGain;
    float DecayTime;
    float Density;
    float RoomSize;
    BOOL DisableLateField;
} XAUDIO2FX_REVERB_PARAMETERS;
typedef struct XAUDIO2FX_REVERB_I3DL2_PARAMETERS
{
    float WetDryMix;
    INT32 Room;
    INT32 RoomHF;
    float RoomRolloffFactor;
    float DecayTime;
    float DecayHFRatio;
    INT32 Reflections;
    float ReflectionsDelay;
    INT32 Reverb;
    float ReverbDelay;
    float Diffusion;
    float Density;
    float HFReference;
} XAUDIO2FX_REVERB_I3DL2_PARAMETERS;
__inline void ReverbConvertI3DL2ToNative
(
    _In_ const XAUDIO2FX_REVERB_I3DL2_PARAMETERS* pI3DL2,
    _Out_ XAUDIO2FX_REVERB_PARAMETERS* pNative
    , BOOL sevenDotOneReverb DEFAULT(TRUE)
)
{
    float reflectionsDelay;
    float reverbDelay;
    if(sevenDotOneReverb)
    {
        pNative->RearDelay = XAUDIO2FX_REVERB_DEFAULT_7POINT1_REAR_DELAY;
    }
    else
    {
        pNative->RearDelay = XAUDIO2FX_REVERB_DEFAULT_REAR_DELAY;
    }
    pNative->SideDelay = XAUDIO2FX_REVERB_DEFAULT_7POINT1_SIDE_DELAY;
    pNative->PositionLeft = XAUDIO2FX_REVERB_DEFAULT_POSITION;
    pNative->PositionRight = XAUDIO2FX_REVERB_DEFAULT_POSITION;
    pNative->PositionMatrixLeft = XAUDIO2FX_REVERB_DEFAULT_POSITION_MATRIX;
    pNative->PositionMatrixRight = XAUDIO2FX_REVERB_DEFAULT_POSITION_MATRIX;
    pNative->RoomSize = XAUDIO2FX_REVERB_DEFAULT_ROOM_SIZE;
    pNative->LowEQCutoff = 4;
    pNative->HighEQCutoff = 6;
    pNative->RoomFilterMain = (float)pI3DL2->Room / 100.0f;
    pNative->RoomFilterHF = (float)pI3DL2->RoomHF / 100.0f;
    if (pI3DL2->DecayHFRatio >= 1.0f)
    {
        INT32 index = (INT32)(-4.0 * log10(pI3DL2->DecayHFRatio));
        if (index < -8) index = -8;
        pNative->LowEQGain = (BYTE)((index < 0) ? index + 8 : 8);
        pNative->HighEQGain = 8;
        pNative->DecayTime = pI3DL2->DecayTime * pI3DL2->DecayHFRatio;
    }
    else
    {
        INT32 index = (INT32)(4.0 * log10(pI3DL2->DecayHFRatio));
        if (index < -8) index = -8;
        pNative->LowEQGain = 8;
        pNative->HighEQGain = (BYTE)((index < 0) ? index + 8 : 8);
        pNative->DecayTime = pI3DL2->DecayTime;
    }
    reflectionsDelay = pI3DL2->ReflectionsDelay * 1000.0f;
    if (reflectionsDelay >= XAUDIO2FX_REVERB_MAX_REFLECTIONS_DELAY)
    {
        reflectionsDelay = (float)(XAUDIO2FX_REVERB_MAX_REFLECTIONS_DELAY - 1);
    }
    else if (reflectionsDelay <= 1)
    {
        reflectionsDelay = 1;
    }
    pNative->ReflectionsDelay = (UINT32)reflectionsDelay;
    reverbDelay = pI3DL2->ReverbDelay * 1000.0f;
    if (reverbDelay >= XAUDIO2FX_REVERB_MAX_REVERB_DELAY)
    {
        reverbDelay = (float)(XAUDIO2FX_REVERB_MAX_REVERB_DELAY - 1);
    }
    pNative->ReverbDelay = (BYTE)reverbDelay;
    pNative->ReflectionsGain = pI3DL2->Reflections / 100.0f;
    pNative->ReverbGain = pI3DL2->Reverb / 100.0f;
    pNative->EarlyDiffusion = (BYTE)(15.0f * pI3DL2->Diffusion / 100.0f);
    pNative->LateDiffusion = pNative->EarlyDiffusion;
    pNative->Density = pI3DL2->Density;
    pNative->RoomFilterFreq = pI3DL2->HFReference;
    pNative->WetDryMix = pI3DL2->WetDryMix;
    pNative->DisableLateField = FALSE;
}
#pragma pack(pop)
#endif
#pragma endregion
