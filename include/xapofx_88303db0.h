       
#include <sdkddkver.h>
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_TV_APP | WINAPI_PARTITION_TV_TITLE | WINAPI_PARTITION_GAMES)
class __declspec(uuid("F5E01117-D6C4-485A-A3F5-695196F3DBFA")) FXEQ;
EXTERN_C const GUID DECLSPEC_SELECTANY CLSID_FXEQ = __uuidof(FXEQ);
class __declspec(uuid("C4137916-2BE1-46FD-8599-441536F49856")) FXMasteringLimiter;
EXTERN_C const GUID DECLSPEC_SELECTANY CLSID_FXMasteringLimiter = __uuidof(FXMasteringLimiter);
class __declspec(uuid("7D9ACA56-CB68-4807-B632-B137352E8596")) FXReverb;
EXTERN_C const GUID DECLSPEC_SELECTANY CLSID_FXReverb = __uuidof(FXReverb);
class __declspec(uuid("5039D740-F736-449A-84D3-A56202557B87")) FXEcho;
EXTERN_C const GUID DECLSPEC_SELECTANY CLSID_FXEcho = __uuidof(FXEcho);
    #include <windows.h>
    #include <objbase.h>
    #include <float.h>
    #define FXEQ_MIN_FRAMERATE 22000
    #define FXEQ_MAX_FRAMERATE 48000
    #define FXEQ_MIN_FREQUENCY_CENTER 20.0f
    #define FXEQ_MAX_FREQUENCY_CENTER 20000.0f
    #define FXEQ_DEFAULT_FREQUENCY_CENTER_0 100.0f
    #define FXEQ_DEFAULT_FREQUENCY_CENTER_1 800.0f
    #define FXEQ_DEFAULT_FREQUENCY_CENTER_2 2000.0f
    #define FXEQ_DEFAULT_FREQUENCY_CENTER_3 10000.0f
    #define FXEQ_MIN_GAIN 0.126f
    #define FXEQ_MAX_GAIN 7.94f
    #define FXEQ_DEFAULT_GAIN 1.0f
    #define FXEQ_MIN_BANDWIDTH 0.1f
    #define FXEQ_MAX_BANDWIDTH 2.0f
    #define FXEQ_DEFAULT_BANDWIDTH 1.0f
    #define FXMASTERINGLIMITER_MIN_RELEASE 1
    #define FXMASTERINGLIMITER_MAX_RELEASE 20
    #define FXMASTERINGLIMITER_DEFAULT_RELEASE 6
    #define FXMASTERINGLIMITER_MIN_LOUDNESS 1
    #define FXMASTERINGLIMITER_MAX_LOUDNESS 1800
    #define FXMASTERINGLIMITER_DEFAULT_LOUDNESS 1000
    #define FXREVERB_MIN_DIFFUSION 0.0f
    #define FXREVERB_MAX_DIFFUSION 1.0f
    #define FXREVERB_DEFAULT_DIFFUSION 0.9f
    #define FXREVERB_MIN_ROOMSIZE 0.0001f
    #define FXREVERB_MAX_ROOMSIZE 1.0f
    #define FXREVERB_DEFAULT_ROOMSIZE 0.6f
    #define FXLOUDNESS_DEFAULT_MOMENTARY_MS 400
    #define FXLOUDNESS_DEFAULT_SHORTTERM_MS 3000
    #define FXECHO_MIN_WETDRYMIX 0.0f
    #define FXECHO_MAX_WETDRYMIX 1.0f
    #define FXECHO_DEFAULT_WETDRYMIX 0.5f
    #define FXECHO_MIN_FEEDBACK 0.0f
    #define FXECHO_MAX_FEEDBACK 1.0f
    #define FXECHO_DEFAULT_FEEDBACK 0.5f
    #define FXECHO_MIN_DELAY 1.0f
    #define FXECHO_MAX_DELAY 2000.0f
    #define FXECHO_DEFAULT_DELAY 500.0f
    #pragma pack(push, 1)
    typedef struct FXEQ_PARAMETERS {
        float FrequencyCenter0;
        float Gain0;
        float Bandwidth0;
        float FrequencyCenter1;
        float Gain1;
        float Bandwidth1;
        float FrequencyCenter2;
        float Gain2;
        float Bandwidth2;
        float FrequencyCenter3;
        float Gain3;
        float Bandwidth3;
    } FXEQ_PARAMETERS;
    typedef struct FXMASTERINGLIMITER_PARAMETERS {
        UINT32 Release;
        UINT32 Loudness;
    } FXMASTERINGLIMITER_PARAMETERS;
    typedef struct FXREVERB_PARAMETERS {
        float Diffusion;
        float RoomSize;
    } FXREVERB_PARAMETERS;
    typedef struct FXECHO_INITDATA {
        float MaxDelay;
    } FXECHO_INITDATA;
    typedef struct FXECHO_PARAMETERS {
        float WetDryMix;
        float Feedback;
        float Delay;
    } FXECHO_PARAMETERS;
        #define DEFAULT(x) =x
    #define FX_API_(type) STDAPIV_(type)
    FX_API_(HRESULT) CreateFX (REFCLSID clsid, _Outptr_ IUnknown** pEffect, _In_reads_bytes_opt_(InitDataByteSize) const void* pInitDat DEFAULT(NULL), UINT32 InitDataByteSize DEFAULT(0));
    #pragma pack(pop)
#endif
#pragma endregion
