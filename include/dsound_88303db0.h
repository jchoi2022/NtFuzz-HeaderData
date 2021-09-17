#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <objbase.h>
#include <float.h>
#include <sal.h>
extern "C" {
typedef float D3DVALUE, *LPD3DVALUE;
typedef DWORD D3DCOLOR;
typedef DWORD *LPD3DCOLOR;
typedef struct _D3DVECTOR {
    float x;
    float y;
    float z;
} D3DVECTOR;
typedef D3DVECTOR *LPD3DVECTOR;
DEFINE_GUID(CLSID_DirectSound, 0x47d4d946, 0x62e8, 0x11cf, 0x93, 0xbc, 0x44, 0x45, 0x53, 0x54, 0x0, 0x0);
DEFINE_GUID(CLSID_DirectSound8, 0x3901cc3f, 0x84b5, 0x4fa4, 0xba, 0x35, 0xaa, 0x81, 0x72, 0xb8, 0xa0, 0x9b);
DEFINE_GUID(CLSID_DirectSoundCapture, 0xb0210780, 0x89cd, 0x11d0, 0xaf, 0x8, 0x0, 0xa0, 0xc9, 0x25, 0xcd, 0x16);
DEFINE_GUID(CLSID_DirectSoundCapture8, 0xe4bcac13, 0x7f99, 0x4908, 0x9a, 0x8e, 0x74, 0xe3, 0xbf, 0x24, 0xb6, 0xe1);
DEFINE_GUID(CLSID_DirectSoundFullDuplex, 0xfea4300c, 0x7959, 0x4147, 0xb2, 0x6a, 0x23, 0x77, 0xb9, 0xe7, 0xa9, 0x1d);
DEFINE_GUID(DSDEVID_DefaultPlayback, 0xdef00000, 0x9c6d, 0x47ed, 0xaa, 0xf1, 0x4d, 0xda, 0x8f, 0x2b, 0x5c, 0x03);
DEFINE_GUID(DSDEVID_DefaultCapture, 0xdef00001, 0x9c6d, 0x47ed, 0xaa, 0xf1, 0x4d, 0xda, 0x8f, 0x2b, 0x5c, 0x03);
DEFINE_GUID(DSDEVID_DefaultVoicePlayback, 0xdef00002, 0x9c6d, 0x47ed, 0xaa, 0xf1, 0x4d, 0xda, 0x8f, 0x2b, 0x5c, 0x03);
DEFINE_GUID(DSDEVID_DefaultVoiceCapture, 0xdef00003, 0x9c6d, 0x47ed, 0xaa, 0xf1, 0x4d, 0xda, 0x8f, 0x2b, 0x5c, 0x03);
struct IDirectSound;
struct IDirectSoundBuffer;
struct IDirectSound3DListener;
struct IDirectSound3DBuffer;
struct IDirectSoundCapture;
struct IDirectSoundCaptureBuffer;
struct IDirectSoundNotify;
struct IDirectSound8;
struct IDirectSoundBuffer8;
struct IDirectSoundCaptureBuffer8;
struct IDirectSoundFXGargle;
struct IDirectSoundFXChorus;
struct IDirectSoundFXFlanger;
struct IDirectSoundFXEcho;
struct IDirectSoundFXDistortion;
struct IDirectSoundFXCompressor;
struct IDirectSoundFXParamEq;
struct IDirectSoundFXWavesReverb;
struct IDirectSoundFXI3DL2Reverb;
struct IDirectSoundCaptureFXAec;
struct IDirectSoundCaptureFXNoiseSuppress;
struct IDirectSoundFullDuplex;
typedef struct IDirectSound *LPDIRECTSOUND;
typedef struct IDirectSoundBuffer *LPDIRECTSOUNDBUFFER;
typedef struct IDirectSound3DListener *LPDIRECTSOUND3DLISTENER;
typedef struct IDirectSound3DBuffer *LPDIRECTSOUND3DBUFFER;
typedef struct IDirectSoundCapture *LPDIRECTSOUNDCAPTURE;
typedef struct IDirectSoundCaptureBuffer *LPDIRECTSOUNDCAPTUREBUFFER;
typedef struct IDirectSoundNotify *LPDIRECTSOUNDNOTIFY;
typedef struct IDirectSoundFXGargle *LPDIRECTSOUNDFXGARGLE;
typedef struct IDirectSoundFXChorus *LPDIRECTSOUNDFXCHORUS;
typedef struct IDirectSoundFXFlanger *LPDIRECTSOUNDFXFLANGER;
typedef struct IDirectSoundFXEcho *LPDIRECTSOUNDFXECHO;
typedef struct IDirectSoundFXDistortion *LPDIRECTSOUNDFXDISTORTION;
typedef struct IDirectSoundFXCompressor *LPDIRECTSOUNDFXCOMPRESSOR;
typedef struct IDirectSoundFXParamEq *LPDIRECTSOUNDFXPARAMEQ;
typedef struct IDirectSoundFXWavesReverb *LPDIRECTSOUNDFXWAVESREVERB;
typedef struct IDirectSoundFXI3DL2Reverb *LPDIRECTSOUNDFXI3DL2REVERB;
typedef struct IDirectSoundCaptureFXAec *LPDIRECTSOUNDCAPTUREFXAEC;
typedef struct IDirectSoundCaptureFXNoiseSuppress *LPDIRECTSOUNDCAPTUREFXNOISESUPPRESS;
typedef struct IDirectSoundFullDuplex *LPDIRECTSOUNDFULLDUPLEX;
typedef struct IDirectSound8 *LPDIRECTSOUND8;
typedef struct IDirectSoundBuffer8 *LPDIRECTSOUNDBUFFER8;
typedef struct IDirectSound3DListener8 *LPDIRECTSOUND3DLISTENER8;
typedef struct IDirectSound3DBuffer8 *LPDIRECTSOUND3DBUFFER8;
typedef struct IDirectSoundCapture8 *LPDIRECTSOUNDCAPTURE8;
typedef struct IDirectSoundCaptureBuffer8 *LPDIRECTSOUNDCAPTUREBUFFER8;
typedef struct IDirectSoundNotify8 *LPDIRECTSOUNDNOTIFY8;
typedef struct IDirectSoundFXGargle8 *LPDIRECTSOUNDFXGARGLE8;
typedef struct IDirectSoundFXChorus8 *LPDIRECTSOUNDFXCHORUS8;
typedef struct IDirectSoundFXFlanger8 *LPDIRECTSOUNDFXFLANGER8;
typedef struct IDirectSoundFXEcho8 *LPDIRECTSOUNDFXECHO8;
typedef struct IDirectSoundFXDistortion8 *LPDIRECTSOUNDFXDISTORTION8;
typedef struct IDirectSoundFXCompressor8 *LPDIRECTSOUNDFXCOMPRESSOR8;
typedef struct IDirectSoundFXParamEq8 *LPDIRECTSOUNDFXPARAMEQ8;
typedef struct IDirectSoundFXWavesReverb8 *LPDIRECTSOUNDFXWAVESREVERB8;
typedef struct IDirectSoundFXI3DL2Reverb8 *LPDIRECTSOUNDFXI3DL2REVERB8;
typedef struct IDirectSoundCaptureFXAec8 *LPDIRECTSOUNDCAPTUREFXAEC8;
typedef struct IDirectSoundCaptureFXNoiseSuppress8 *LPDIRECTSOUNDCAPTUREFXNOISESUPPRESS8;
typedef struct IDirectSoundFullDuplex8 *LPDIRECTSOUNDFULLDUPLEX8;
typedef const WAVEFORMATEX *LPCWAVEFORMATEX;
typedef const GUID *LPCGUID;
typedef LPDIRECTSOUND *LPLPDIRECTSOUND;
typedef LPDIRECTSOUNDBUFFER *LPLPDIRECTSOUNDBUFFER;
typedef LPDIRECTSOUND3DLISTENER *LPLPDIRECTSOUND3DLISTENER;
typedef LPDIRECTSOUND3DBUFFER *LPLPDIRECTSOUND3DBUFFER;
typedef LPDIRECTSOUNDCAPTURE *LPLPDIRECTSOUNDCAPTURE;
typedef LPDIRECTSOUNDCAPTUREBUFFER *LPLPDIRECTSOUNDCAPTUREBUFFER;
typedef LPDIRECTSOUNDNOTIFY *LPLPDIRECTSOUNDNOTIFY;
typedef LPDIRECTSOUND8 *LPLPDIRECTSOUND8;
typedef LPDIRECTSOUNDBUFFER8 *LPLPDIRECTSOUNDBUFFER8;
typedef LPDIRECTSOUNDCAPTURE8 *LPLPDIRECTSOUNDCAPTURE8;
typedef LPDIRECTSOUNDCAPTUREBUFFER8 *LPLPDIRECTSOUNDCAPTUREBUFFER8;
typedef struct _DSCAPS
{
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwMinSecondarySampleRate;
    DWORD dwMaxSecondarySampleRate;
    DWORD dwPrimaryBuffers;
    DWORD dwMaxHwMixingAllBuffers;
    DWORD dwMaxHwMixingStaticBuffers;
    DWORD dwMaxHwMixingStreamingBuffers;
    DWORD dwFreeHwMixingAllBuffers;
    DWORD dwFreeHwMixingStaticBuffers;
    DWORD dwFreeHwMixingStreamingBuffers;
    DWORD dwMaxHw3DAllBuffers;
    DWORD dwMaxHw3DStaticBuffers;
    DWORD dwMaxHw3DStreamingBuffers;
    DWORD dwFreeHw3DAllBuffers;
    DWORD dwFreeHw3DStaticBuffers;
    DWORD dwFreeHw3DStreamingBuffers;
    DWORD dwTotalHwMemBytes;
    DWORD dwFreeHwMemBytes;
    DWORD dwMaxContigFreeHwMemBytes;
    DWORD dwUnlockTransferRateHwBuffers;
    DWORD dwPlayCpuOverheadSwBuffers;
    DWORD dwReserved1;
    DWORD dwReserved2;
} DSCAPS, *LPDSCAPS;
typedef const DSCAPS *LPCDSCAPS;
typedef struct _DSBCAPS
{
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwBufferBytes;
    DWORD dwUnlockTransferRate;
    DWORD dwPlayCpuOverhead;
} DSBCAPS, *LPDSBCAPS;
typedef const DSBCAPS *LPCDSBCAPS;
    typedef struct _DSEFFECTDESC
    {
        DWORD dwSize;
        DWORD dwFlags;
        GUID guidDSFXClass;
        DWORD_PTR dwReserved1;
        DWORD_PTR dwReserved2;
    } DSEFFECTDESC, *LPDSEFFECTDESC;
    typedef const DSEFFECTDESC *LPCDSEFFECTDESC;
    #define DSFX_LOCHARDWARE 0x00000001
    #define DSFX_LOCSOFTWARE 0x00000002
    enum
    {
        DSFXR_PRESENT,
        DSFXR_LOCHARDWARE,
        DSFXR_LOCSOFTWARE,
        DSFXR_UNALLOCATED,
        DSFXR_FAILED,
        DSFXR_UNKNOWN,
        DSFXR_SENDLOOP
    };
    typedef struct _DSCEFFECTDESC
    {
        DWORD dwSize;
        DWORD dwFlags;
        GUID guidDSCFXClass;
        GUID guidDSCFXInstance;
        DWORD dwReserved1;
        DWORD dwReserved2;
    } DSCEFFECTDESC, *LPDSCEFFECTDESC;
    typedef const DSCEFFECTDESC *LPCDSCEFFECTDESC;
    #define DSCFX_LOCHARDWARE 0x00000001
    #define DSCFX_LOCSOFTWARE 0x00000002
    #define DSCFXR_LOCHARDWARE 0x00000010
    #define DSCFXR_LOCSOFTWARE 0x00000020
typedef struct _DSBUFFERDESC
{
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwBufferBytes;
    DWORD dwReserved;
    LPWAVEFORMATEX lpwfxFormat;
    GUID guid3DAlgorithm;
} DSBUFFERDESC, *LPDSBUFFERDESC;
typedef const DSBUFFERDESC *LPCDSBUFFERDESC;
typedef struct _DSBUFFERDESC1
{
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwBufferBytes;
    DWORD dwReserved;
    LPWAVEFORMATEX lpwfxFormat;
} DSBUFFERDESC1, *LPDSBUFFERDESC1;
typedef const DSBUFFERDESC1 *LPCDSBUFFERDESC1;
typedef struct _DS3DBUFFER
{
    DWORD dwSize;
    D3DVECTOR vPosition;
    D3DVECTOR vVelocity;
    DWORD dwInsideConeAngle;
    DWORD dwOutsideConeAngle;
    D3DVECTOR vConeOrientation;
    LONG lConeOutsideVolume;
    D3DVALUE flMinDistance;
    D3DVALUE flMaxDistance;
    DWORD dwMode;
} DS3DBUFFER, *LPDS3DBUFFER;
typedef const DS3DBUFFER *LPCDS3DBUFFER;
typedef struct _DS3DLISTENER
{
    DWORD dwSize;
    D3DVECTOR vPosition;
    D3DVECTOR vVelocity;
    D3DVECTOR vOrientFront;
    D3DVECTOR vOrientTop;
    D3DVALUE flDistanceFactor;
    D3DVALUE flRolloffFactor;
    D3DVALUE flDopplerFactor;
} DS3DLISTENER, *LPDS3DLISTENER;
typedef const DS3DLISTENER *LPCDS3DLISTENER;
typedef struct _DSCCAPS
{
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwFormats;
    DWORD dwChannels;
} DSCCAPS, *LPDSCCAPS;
typedef const DSCCAPS *LPCDSCCAPS;
typedef struct _DSCBUFFERDESC1
{
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwBufferBytes;
    DWORD dwReserved;
    LPWAVEFORMATEX lpwfxFormat;
} DSCBUFFERDESC1, *LPDSCBUFFERDESC1;
typedef struct _DSCBUFFERDESC
{
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwBufferBytes;
    DWORD dwReserved;
    LPWAVEFORMATEX lpwfxFormat;
    DWORD dwFXCount;
    LPDSCEFFECTDESC lpDSCFXDesc;
} DSCBUFFERDESC, *LPDSCBUFFERDESC;
typedef const DSCBUFFERDESC *LPCDSCBUFFERDESC;
typedef struct _DSCBCAPS
{
    DWORD dwSize;
    DWORD dwFlags;
    DWORD dwBufferBytes;
    DWORD dwReserved;
} DSCBCAPS, *LPDSCBCAPS;
typedef const DSCBCAPS *LPCDSCBCAPS;
typedef struct _DSBPOSITIONNOTIFY
{
    DWORD dwOffset;
    HANDLE hEventNotify;
} DSBPOSITIONNOTIFY, *LPDSBPOSITIONNOTIFY;
typedef const DSBPOSITIONNOTIFY *LPCDSBPOSITIONNOTIFY;
typedef BOOL (CALLBACK *LPDSENUMCALLBACKA)(LPGUID, LPCSTR, LPCSTR, LPVOID);
typedef BOOL (CALLBACK *LPDSENUMCALLBACKW)(LPGUID, LPCWSTR, LPCWSTR, LPVOID);
extern _Check_return_ HRESULT WINAPI DirectSoundCreate(_In_opt_ LPCGUID pcGuidDevice, _Outptr_ LPDIRECTSOUND *ppDS, _Pre_null_ LPUNKNOWN pUnkOuter);
extern HRESULT WINAPI DirectSoundEnumerateA(_In_ LPDSENUMCALLBACKA pDSEnumCallback, _In_opt_ LPVOID pContext);
extern HRESULT WINAPI DirectSoundEnumerateW(_In_ LPDSENUMCALLBACKW pDSEnumCallback, _In_opt_ LPVOID pContext);
extern HRESULT WINAPI DirectSoundCaptureCreate(_In_opt_ LPCGUID pcGuidDevice, _Outptr_ LPDIRECTSOUNDCAPTURE *ppDSC, _Pre_null_ LPUNKNOWN pUnkOuter);
extern HRESULT WINAPI DirectSoundCaptureEnumerateA(_In_ LPDSENUMCALLBACKA pDSEnumCallback, _In_opt_ LPVOID pContext);
extern HRESULT WINAPI DirectSoundCaptureEnumerateW(_In_ LPDSENUMCALLBACKW pDSEnumCallback, _In_opt_ LPVOID pContext);
extern HRESULT WINAPI DirectSoundCreate8(_In_opt_ LPCGUID pcGuidDevice, _Outptr_ LPDIRECTSOUND8 *ppDS8, _Pre_null_ LPUNKNOWN pUnkOuter);
extern HRESULT WINAPI DirectSoundCaptureCreate8(_In_opt_ LPCGUID pcGuidDevice, _Outptr_ LPDIRECTSOUNDCAPTURE8 *ppDSC8, _Pre_null_ LPUNKNOWN pUnkOuter);
extern HRESULT WINAPI DirectSoundFullDuplexCreate
(
    _In_opt_ LPCGUID pcGuidCaptureDevice,
    _In_opt_ LPCGUID pcGuidRenderDevice,
    _In_ LPCDSCBUFFERDESC pcDSCBufferDesc,
    _In_ LPCDSBUFFERDESC pcDSBufferDesc,
    HWND hWnd,
    DWORD dwLevel,
    _Outptr_ LPDIRECTSOUNDFULLDUPLEX* ppDSFD,
    _Outptr_ LPDIRECTSOUNDCAPTUREBUFFER8 *ppDSCBuffer8,
    _Outptr_ LPDIRECTSOUNDBUFFER8 *ppDSBuffer8,
    _Pre_null_ LPUNKNOWN pUnkOuter
);
extern HRESULT WINAPI GetDeviceID(_In_opt_ LPCGUID pGuidSrc, _Out_ LPGUID pGuidDest);
typedef LONGLONG REFERENCE_TIME;
typedef REFERENCE_TIME *LPREFERENCE_TIME;
DEFINE_GUID(IID_IReferenceClock, 0x56a86897, 0x0ad4, 0x11ce, 0xb0, 0x3a, 0x00, 0x20, 0xaf, 0x0b, 0xa7, 0x70);
DECLARE_INTERFACE_(IReferenceClock, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(GetTime) (THIS_ _Out_ REFERENCE_TIME *pTime) PURE;
    STDMETHOD(AdviseTime) (THIS_ REFERENCE_TIME rtBaseTime, REFERENCE_TIME rtStreamTime,
                                           HANDLE hEvent, _Out_ LPDWORD pdwAdviseCookie) PURE;
    STDMETHOD(AdvisePeriodic) (THIS_ REFERENCE_TIME rtStartTime, REFERENCE_TIME rtPeriodTime,
                                           HANDLE hSemaphore, _Out_ LPDWORD pdwAdviseCookie) PURE;
    STDMETHOD(Unadvise) (THIS_ DWORD dwAdviseCookie) PURE;
};
DEFINE_GUID(IID_IDirectSound, 0x279AFA83, 0x4981, 0x11CE, 0xA5, 0x21, 0x00, 0x20, 0xAF, 0x0B, 0xE5, 0x60);
DECLARE_INTERFACE_(IDirectSound, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(CreateSoundBuffer) (THIS_ _In_ LPCDSBUFFERDESC pcDSBufferDesc, _Outptr_ LPDIRECTSOUNDBUFFER *ppDSBuffer, _Pre_null_ LPUNKNOWN pUnkOuter) PURE;
    STDMETHOD(GetCaps) (THIS_ _Out_ LPDSCAPS pDSCaps) PURE;
    STDMETHOD(DuplicateSoundBuffer) (THIS_ _In_ LPDIRECTSOUNDBUFFER pDSBufferOriginal, _Outptr_ LPDIRECTSOUNDBUFFER *ppDSBufferDuplicate) PURE;
    STDMETHOD(SetCooperativeLevel) (THIS_ HWND hwnd, DWORD dwLevel) PURE;
    STDMETHOD(Compact) (THIS) PURE;
    STDMETHOD(GetSpeakerConfig) (THIS_ _Out_ LPDWORD pdwSpeakerConfig) PURE;
    STDMETHOD(SetSpeakerConfig) (THIS_ DWORD dwSpeakerConfig) PURE;
    STDMETHOD(Initialize) (THIS_ _In_opt_ LPCGUID pcGuidDevice) PURE;
};
DEFINE_GUID(IID_IDirectSound8, 0xC50A7E93, 0xF395, 0x4834, 0x9E, 0xF6, 0x7F, 0xA9, 0x9D, 0xE5, 0x09, 0x66);
DECLARE_INTERFACE_(IDirectSound8, IDirectSound)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(CreateSoundBuffer) (THIS_ _In_ LPCDSBUFFERDESC pcDSBufferDesc, _Out_ LPDIRECTSOUNDBUFFER *ppDSBuffer, _Pre_null_ LPUNKNOWN pUnkOuter) PURE;
    STDMETHOD(GetCaps) (THIS_ _Out_ LPDSCAPS pDSCaps) PURE;
    STDMETHOD(DuplicateSoundBuffer) (THIS_ _In_ LPDIRECTSOUNDBUFFER pDSBufferOriginal, _Out_ LPDIRECTSOUNDBUFFER *ppDSBufferDuplicate) PURE;
    STDMETHOD(SetCooperativeLevel) (THIS_ HWND hwnd, DWORD dwLevel) PURE;
    STDMETHOD(Compact) (THIS) PURE;
    STDMETHOD(GetSpeakerConfig) (THIS_ _Out_ LPDWORD pdwSpeakerConfig) PURE;
    STDMETHOD(SetSpeakerConfig) (THIS_ DWORD dwSpeakerConfig) PURE;
    STDMETHOD(Initialize) (THIS_ _In_opt_ LPCGUID pcGuidDevice) PURE;
    STDMETHOD(VerifyCertification) (THIS_ _Out_ LPDWORD pdwCertified) PURE;
};
DEFINE_GUID(IID_IDirectSoundBuffer, 0x279AFA85, 0x4981, 0x11CE, 0xA5, 0x21, 0x00, 0x20, 0xAF, 0x0B, 0xE5, 0x60);
DECLARE_INTERFACE_(IDirectSoundBuffer, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(GetCaps) (THIS_ _Out_ LPDSBCAPS pDSBufferCaps) PURE;
    STDMETHOD(GetCurrentPosition) (THIS_ _Out_opt_ LPDWORD pdwCurrentPlayCursor, _Out_opt_ LPDWORD pdwCurrentWriteCursor) PURE;
    STDMETHOD(GetFormat) (THIS_ _Out_writes_bytes_opt_(dwSizeAllocated) LPWAVEFORMATEX pwfxFormat, DWORD dwSizeAllocated, _Out_opt_ LPDWORD pdwSizeWritten) PURE;
    STDMETHOD(GetVolume) (THIS_ _Out_ LPLONG plVolume) PURE;
    STDMETHOD(GetPan) (THIS_ _Out_ LPLONG plPan) PURE;
    STDMETHOD(GetFrequency) (THIS_ _Out_ LPDWORD pdwFrequency) PURE;
    STDMETHOD(GetStatus) (THIS_ _Out_ LPDWORD pdwStatus) PURE;
    STDMETHOD(Initialize) (THIS_ _In_ LPDIRECTSOUND pDirectSound, _In_ LPCDSBUFFERDESC pcDSBufferDesc) PURE;
    STDMETHOD(Lock) (THIS_ DWORD dwOffset, DWORD dwBytes,
                                           _Outptr_result_bytebuffer_(*pdwAudioBytes1) LPVOID *ppvAudioPtr1, _Out_ LPDWORD pdwAudioBytes1,
                                           _Outptr_opt_result_bytebuffer_(*pdwAudioBytes2) LPVOID *ppvAudioPtr2, _Out_opt_ LPDWORD pdwAudioBytes2, DWORD dwFlags) PURE;
    STDMETHOD(Play) (THIS_ DWORD dwReserved1, DWORD dwPriority, DWORD dwFlags) PURE;
    STDMETHOD(SetCurrentPosition) (THIS_ DWORD dwNewPosition) PURE;
    STDMETHOD(SetFormat) (THIS_ _In_ LPCWAVEFORMATEX pcfxFormat) PURE;
    STDMETHOD(SetVolume) (THIS_ LONG lVolume) PURE;
    STDMETHOD(SetPan) (THIS_ LONG lPan) PURE;
    STDMETHOD(SetFrequency) (THIS_ DWORD dwFrequency) PURE;
    STDMETHOD(Stop) (THIS) PURE;
    STDMETHOD(Unlock) (THIS_ _In_reads_bytes_(dwAudioBytes1) LPVOID pvAudioPtr1, DWORD dwAudioBytes1,
                                           _In_reads_bytes_opt_(dwAudioBytes2) LPVOID pvAudioPtr2, DWORD dwAudioBytes2) PURE;
    STDMETHOD(Restore) (THIS) PURE;
};
DEFINE_GUID(IID_IDirectSoundBuffer8, 0x6825a449, 0x7524, 0x4d82, 0x92, 0x0f, 0x50, 0xe3, 0x6a, 0xb3, 0xab, 0x1e);
DECLARE_INTERFACE_(IDirectSoundBuffer8, IDirectSoundBuffer)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(GetCaps) (THIS_ _Out_ LPDSBCAPS pDSBufferCaps) PURE;
    STDMETHOD(GetCurrentPosition) (THIS_ _Out_opt_ LPDWORD pdwCurrentPlayCursor, _Out_opt_ LPDWORD pdwCurrentWriteCursor) PURE;
    STDMETHOD(GetFormat) (THIS_ _Out_writes_bytes_opt_(dwSizeAllocated) LPWAVEFORMATEX pwfxFormat, DWORD dwSizeAllocated, _Out_opt_ LPDWORD pdwSizeWritten) PURE;
    STDMETHOD(GetVolume) (THIS_ _Out_ LPLONG plVolume) PURE;
    STDMETHOD(GetPan) (THIS_ _Out_ LPLONG plPan) PURE;
    STDMETHOD(GetFrequency) (THIS_ _Out_ LPDWORD pdwFrequency) PURE;
    STDMETHOD(GetStatus) (THIS_ _Out_ LPDWORD pdwStatus) PURE;
    STDMETHOD(Initialize) (THIS_ _In_ LPDIRECTSOUND pDirectSound, _In_ LPCDSBUFFERDESC pcDSBufferDesc) PURE;
    STDMETHOD(Lock) (THIS_ DWORD dwOffset, DWORD dwBytes,
                                           _Outptr_result_bytebuffer_(*pdwAudioBytes1) LPVOID *ppvAudioPtr1, _Out_ LPDWORD pdwAudioBytes1,
                                           _Outptr_opt_result_bytebuffer_(*pdwAudioBytes2) LPVOID *ppvAudioPtr2, _Out_opt_ LPDWORD pdwAudioBytes2, DWORD dwFlags) PURE;
    STDMETHOD(Play) (THIS_ DWORD dwReserved1, DWORD dwPriority, DWORD dwFlags) PURE;
    STDMETHOD(SetCurrentPosition) (THIS_ DWORD dwNewPosition) PURE;
    STDMETHOD(SetFormat) (THIS_ _In_ LPCWAVEFORMATEX pcfxFormat) PURE;
    STDMETHOD(SetVolume) (THIS_ LONG lVolume) PURE;
    STDMETHOD(SetPan) (THIS_ LONG lPan) PURE;
    STDMETHOD(SetFrequency) (THIS_ DWORD dwFrequency) PURE;
    STDMETHOD(Stop) (THIS) PURE;
    STDMETHOD(Unlock) (THIS_ _In_reads_bytes_(dwAudioBytes1) LPVOID pvAudioPtr1, DWORD dwAudioBytes1,
                                           _In_reads_bytes_opt_(dwAudioBytes2) LPVOID pvAudioPtr2, DWORD dwAudioBytes2) PURE;
    STDMETHOD(Restore) (THIS) PURE;
    STDMETHOD(SetFX) (THIS_ DWORD dwEffectsCount, _In_reads_opt_(dwEffectsCount) LPDSEFFECTDESC pDSFXDesc, _Out_writes_opt_(dwEffectsCount) LPDWORD pdwResultCodes) PURE;
    STDMETHOD(AcquireResources) (THIS_ DWORD dwFlags, DWORD dwEffectsCount, _Out_writes_(dwEffectsCount) LPDWORD pdwResultCodes) PURE;
    STDMETHOD(GetObjectInPath) (THIS_ _In_ REFGUID rguidObject, DWORD dwIndex, _In_ REFGUID rguidInterface, _Outptr_ LPVOID *ppObject) PURE;
};
DEFINE_GUID(GUID_All_Objects, 0xaa114de5, 0xc262, 0x4169, 0xa1, 0xc8, 0x23, 0xd6, 0x98, 0xcc, 0x73, 0xb5);
DEFINE_GUID(IID_IDirectSound3DListener, 0x279AFA84, 0x4981, 0x11CE, 0xA5, 0x21, 0x00, 0x20, 0xAF, 0x0B, 0xE5, 0x60);
DECLARE_INTERFACE_(IDirectSound3DListener, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(GetAllParameters) (THIS_ _Out_ LPDS3DLISTENER pListener) PURE;
    STDMETHOD(GetDistanceFactor) (THIS_ _Out_ D3DVALUE* pflDistanceFactor) PURE;
    STDMETHOD(GetDopplerFactor) (THIS_ _Out_ D3DVALUE* pflDopplerFactor) PURE;
    STDMETHOD(GetOrientation) (THIS_ _Out_ D3DVECTOR* pvOrientFront, _Out_ D3DVECTOR* pvOrientTop) PURE;
    STDMETHOD(GetPosition) (THIS_ _Out_ D3DVECTOR* pvPosition) PURE;
    STDMETHOD(GetRolloffFactor) (THIS_ _Out_ D3DVALUE* pflRolloffFactor) PURE;
    STDMETHOD(GetVelocity) (THIS_ _Out_ D3DVECTOR* pvVelocity) PURE;
    STDMETHOD(SetAllParameters) (THIS_ _In_ LPCDS3DLISTENER pcListener, DWORD dwApply) PURE;
    STDMETHOD(SetDistanceFactor) (THIS_ D3DVALUE flDistanceFactor, DWORD dwApply) PURE;
    STDMETHOD(SetDopplerFactor) (THIS_ D3DVALUE flDopplerFactor, DWORD dwApply) PURE;
    STDMETHOD(SetOrientation) (THIS_ D3DVALUE xFront, D3DVALUE yFront, D3DVALUE zFront,
                                               D3DVALUE xTop, D3DVALUE yTop, D3DVALUE zTop, DWORD dwApply) PURE;
    STDMETHOD(SetPosition) (THIS_ D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD dwApply) PURE;
    STDMETHOD(SetRolloffFactor) (THIS_ D3DVALUE flRolloffFactor, DWORD dwApply) PURE;
    STDMETHOD(SetVelocity) (THIS_ D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD dwApply) PURE;
    STDMETHOD(CommitDeferredSettings) (THIS) PURE;
};
DEFINE_GUID(IID_IDirectSound3DBuffer, 0x279AFA86, 0x4981, 0x11CE, 0xA5, 0x21, 0x00, 0x20, 0xAF, 0x0B, 0xE5, 0x60);
DECLARE_INTERFACE_(IDirectSound3DBuffer, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(GetAllParameters) (THIS_ _Out_ LPDS3DBUFFER pDs3dBuffer) PURE;
    STDMETHOD(GetConeAngles) (THIS_ _Out_ LPDWORD pdwInsideConeAngle, _Out_ LPDWORD pdwOutsideConeAngle) PURE;
    STDMETHOD(GetConeOrientation) (THIS_ _Out_ D3DVECTOR* pvOrientation) PURE;
    STDMETHOD(GetConeOutsideVolume) (THIS_ _Out_ LPLONG plConeOutsideVolume) PURE;
    STDMETHOD(GetMaxDistance) (THIS_ _Out_ D3DVALUE* pflMaxDistance) PURE;
    STDMETHOD(GetMinDistance) (THIS_ _Out_ D3DVALUE* pflMinDistance) PURE;
    STDMETHOD(GetMode) (THIS_ _Out_ LPDWORD pdwMode) PURE;
    STDMETHOD(GetPosition) (THIS_ _Out_ D3DVECTOR* pvPosition) PURE;
    STDMETHOD(GetVelocity) (THIS_ _Out_ D3DVECTOR* pvVelocity) PURE;
    STDMETHOD(SetAllParameters) (THIS_ _In_ LPCDS3DBUFFER pcDs3dBuffer, DWORD dwApply) PURE;
    STDMETHOD(SetConeAngles) (THIS_ DWORD dwInsideConeAngle, DWORD dwOutsideConeAngle, DWORD dwApply) PURE;
    STDMETHOD(SetConeOrientation) (THIS_ D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD dwApply) PURE;
    STDMETHOD(SetConeOutsideVolume) (THIS_ LONG lConeOutsideVolume, DWORD dwApply) PURE;
    STDMETHOD(SetMaxDistance) (THIS_ D3DVALUE flMaxDistance, DWORD dwApply) PURE;
    STDMETHOD(SetMinDistance) (THIS_ D3DVALUE flMinDistance, DWORD dwApply) PURE;
    STDMETHOD(SetMode) (THIS_ DWORD dwMode, DWORD dwApply) PURE;
    STDMETHOD(SetPosition) (THIS_ D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD dwApply) PURE;
    STDMETHOD(SetVelocity) (THIS_ D3DVALUE x, D3DVALUE y, D3DVALUE z, DWORD dwApply) PURE;
};
DEFINE_GUID(IID_IDirectSoundCapture, 0xb0210781, 0x89cd, 0x11d0, 0xaf, 0x8, 0x0, 0xa0, 0xc9, 0x25, 0xcd, 0x16);
DECLARE_INTERFACE_(IDirectSoundCapture, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(CreateCaptureBuffer) (THIS_ _In_ LPCDSCBUFFERDESC pcDSCBufferDesc, _Outptr_ LPDIRECTSOUNDCAPTUREBUFFER *ppDSCBuffer, _Pre_null_ LPUNKNOWN pUnkOuter) PURE;
    STDMETHOD(GetCaps) (THIS_ _Out_ LPDSCCAPS pDSCCaps) PURE;
    STDMETHOD(Initialize) (THIS_ _In_opt_ LPCGUID pcGuidDevice) PURE;
};
DEFINE_GUID(IID_IDirectSoundCaptureBuffer, 0xb0210782, 0x89cd, 0x11d0, 0xaf, 0x8, 0x0, 0xa0, 0xc9, 0x25, 0xcd, 0x16);
DECLARE_INTERFACE_(IDirectSoundCaptureBuffer, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(GetCaps) (THIS_ _Out_ LPDSCBCAPS pDSCBCaps) PURE;
    STDMETHOD(GetCurrentPosition) (THIS_ _Out_opt_ LPDWORD pdwCapturePosition, _Out_opt_ LPDWORD pdwReadPosition) PURE;
    STDMETHOD(GetFormat) (THIS_ _Out_writes_bytes_opt_(dwSizeAllocated) LPWAVEFORMATEX pwfxFormat, DWORD dwSizeAllocated, _Out_opt_ LPDWORD pdwSizeWritten) PURE;
    STDMETHOD(GetStatus) (THIS_ _Out_ LPDWORD pdwStatus) PURE;
    STDMETHOD(Initialize) (THIS_ _In_ LPDIRECTSOUNDCAPTURE pDirectSoundCapture, _In_ LPCDSCBUFFERDESC pcDSCBufferDesc) PURE;
    STDMETHOD(Lock) (THIS_ DWORD dwOffset, DWORD dwBytes,
                                           _Outptr_result_bytebuffer_(*pdwAudioBytes1) LPVOID *ppvAudioPtr1, _Out_ LPDWORD pdwAudioBytes1,
                                           _Outptr_opt_result_bytebuffer_(*pdwAudioBytes2) LPVOID *ppvAudioPtr2, _Out_opt_ LPDWORD pdwAudioBytes2, DWORD dwFlags) PURE;
    STDMETHOD(Start) (THIS_ DWORD dwFlags) PURE;
    STDMETHOD(Stop) (THIS) PURE;
    STDMETHOD(Unlock) (THIS_ _In_reads_bytes_(dwAudioBytes1) LPVOID pvAudioPtr1, DWORD dwAudioBytes1,
                                           _In_reads_bytes_opt_(dwAudioBytes2) LPVOID pvAudioPtr2, DWORD dwAudioBytes2) PURE;
};
DEFINE_GUID(IID_IDirectSoundCaptureBuffer8, 0x990df4, 0xdbb, 0x4872, 0x83, 0x3e, 0x6d, 0x30, 0x3e, 0x80, 0xae, 0xb6);
DECLARE_INTERFACE_(IDirectSoundCaptureBuffer8, IDirectSoundCaptureBuffer)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(GetCaps) (THIS_ _Out_ LPDSCBCAPS pDSCBCaps) PURE;
    STDMETHOD(GetCurrentPosition) (THIS_ _Out_opt_ LPDWORD pdwCapturePosition, _Out_opt_ LPDWORD pdwReadPosition) PURE;
    STDMETHOD(GetFormat) (THIS_ _Out_writes_bytes_opt_(dwSizeAllocated) LPWAVEFORMATEX pwfxFormat, DWORD dwSizeAllocated, _Out_opt_ LPDWORD pdwSizeWritten) PURE;
    STDMETHOD(GetStatus) (THIS_ _Out_ LPDWORD pdwStatus) PURE;
    STDMETHOD(Initialize) (THIS_ _In_ LPDIRECTSOUNDCAPTURE pDirectSoundCapture, _In_ LPCDSCBUFFERDESC pcDSCBufferDesc) PURE;
    STDMETHOD(Lock) (THIS_ DWORD dwOffset, DWORD dwBytes,
                                           _Outptr_result_bytebuffer_(*pdwAudioBytes1) LPVOID *ppvAudioPtr1, _Out_ LPDWORD pdwAudioBytes1,
                                           _Outptr_opt_result_bytebuffer_(*pdwAudioBytes2) LPVOID *ppvAudioPtr2, _Out_opt_ LPDWORD pdwAudioBytes2, DWORD dwFlags) PURE;
    STDMETHOD(Start) (THIS_ DWORD dwFlags) PURE;
    STDMETHOD(Stop) (THIS) PURE;
    STDMETHOD(Unlock) (THIS_ _In_reads_bytes_(dwAudioBytes1) LPVOID pvAudioPtr1, DWORD dwAudioBytes1,
                                           _In_reads_bytes_opt_(dwAudioBytes2) LPVOID pvAudioPtr2, DWORD dwAudioBytes2) PURE;
    STDMETHOD(GetObjectInPath) (THIS_ _In_ REFGUID rguidObject, DWORD dwIndex, _In_ REFGUID rguidInterface, _Outptr_ LPVOID *ppObject) PURE;
    STDMETHOD(GetFXStatus) (DWORD dwEffectsCount, _Out_writes_(dwEffectsCount) LPDWORD pdwFXStatus) PURE;
};
DEFINE_GUID(IID_IDirectSoundNotify, 0xb0210783, 0x89cd, 0x11d0, 0xaf, 0x8, 0x0, 0xa0, 0xc9, 0x25, 0xcd, 0x16);
DECLARE_INTERFACE_(IDirectSoundNotify, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(SetNotificationPositions) (THIS_ DWORD dwPositionNotifies, _In_reads_(dwPositionNotifies) LPCDSBPOSITIONNOTIFY pcPositionNotifies) PURE;
};
struct IKsPropertySet;
typedef struct IKsPropertySet *LPKSPROPERTYSET;
DEFINE_GUID(IID_IKsPropertySet, 0x31efac30, 0x515c, 0x11d0, 0xa9, 0xaa, 0x00, 0xaa, 0x00, 0x61, 0xbe, 0x93);
DECLARE_INTERFACE_(IKsPropertySet, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(Get) (THIS_ _In_ REFGUID rguidPropSet, ULONG ulId, _In_reads_bytes_opt_(ulInstanceLength) LPVOID pInstanceData, ULONG ulInstanceLength,
                                       _Out_writes_bytes_(ulDataLength) LPVOID pPropertyData, ULONG ulDataLength, _Out_opt_ PULONG pulBytesReturned) PURE;
    STDMETHOD(Set) (THIS_ _In_ REFGUID rguidPropSet, ULONG ulId, _In_reads_bytes_opt_(ulInstanceLength) LPVOID pInstanceData, ULONG ulInstanceLength,
                                       _In_reads_bytes_(ulDataLength) LPVOID pPropertyData, ULONG ulDataLength) PURE;
    STDMETHOD(QuerySupport) (THIS_ _In_ REFGUID rguidPropSet, ULONG ulId, _Out_ PULONG pulTypeSupport) PURE;
};
DEFINE_GUID(IID_IDirectSoundFXGargle, 0xd616f352, 0xd622, 0x11ce, 0xaa, 0xc5, 0x00, 0x20, 0xaf, 0x0b, 0x99, 0xa3);
typedef struct _DSFXGargle
{
    DWORD dwRateHz;
    DWORD dwWaveShape;
} DSFXGargle, *LPDSFXGargle;
typedef const DSFXGargle *LPCDSFXGargle;
DECLARE_INTERFACE_(IDirectSoundFXGargle, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(SetAllParameters) (THIS_ _In_ LPCDSFXGargle pcDsFxGargle) PURE;
    STDMETHOD(GetAllParameters) (THIS_ _Out_ LPDSFXGargle pDsFxGargle) PURE;
};
DEFINE_GUID(IID_IDirectSoundFXChorus, 0x880842e3, 0x145f, 0x43e6, 0xa9, 0x34, 0xa7, 0x18, 0x06, 0xe5, 0x05, 0x47);
typedef struct _DSFXChorus
{
    FLOAT fWetDryMix;
    FLOAT fDepth;
    FLOAT fFeedback;
    FLOAT fFrequency;
    LONG lWaveform;
    FLOAT fDelay;
    LONG lPhase;
} DSFXChorus, *LPDSFXChorus;
typedef const DSFXChorus *LPCDSFXChorus;
DECLARE_INTERFACE_(IDirectSoundFXChorus, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(SetAllParameters) (THIS_ _In_ LPCDSFXChorus pcDsFxChorus) PURE;
    STDMETHOD(GetAllParameters) (THIS_ _Out_ LPDSFXChorus pDsFxChorus) PURE;
};
DEFINE_GUID(IID_IDirectSoundFXFlanger, 0x903e9878, 0x2c92, 0x4072, 0x9b, 0x2c, 0xea, 0x68, 0xf5, 0x39, 0x67, 0x83);
typedef struct _DSFXFlanger
{
    FLOAT fWetDryMix;
    FLOAT fDepth;
    FLOAT fFeedback;
    FLOAT fFrequency;
    LONG lWaveform;
    FLOAT fDelay;
    LONG lPhase;
} DSFXFlanger, *LPDSFXFlanger;
typedef const DSFXFlanger *LPCDSFXFlanger;
DECLARE_INTERFACE_(IDirectSoundFXFlanger, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(SetAllParameters) (THIS_ _In_ LPCDSFXFlanger pcDsFxFlanger) PURE;
    STDMETHOD(GetAllParameters) (THIS_ _Out_ LPDSFXFlanger pDsFxFlanger) PURE;
};
DEFINE_GUID(IID_IDirectSoundFXEcho, 0x8bd28edf, 0x50db, 0x4e92, 0xa2, 0xbd, 0x44, 0x54, 0x88, 0xd1, 0xed, 0x42);
typedef struct _DSFXEcho
{
    FLOAT fWetDryMix;
    FLOAT fFeedback;
    FLOAT fLeftDelay;
    FLOAT fRightDelay;
    LONG lPanDelay;
} DSFXEcho, *LPDSFXEcho;
typedef const DSFXEcho *LPCDSFXEcho;
DECLARE_INTERFACE_(IDirectSoundFXEcho, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(SetAllParameters) (THIS_ _In_ LPCDSFXEcho pcDsFxEcho) PURE;
    STDMETHOD(GetAllParameters) (THIS_ _Out_ LPDSFXEcho pDsFxEcho) PURE;
};
DEFINE_GUID(IID_IDirectSoundFXDistortion, 0x8ecf4326, 0x455f, 0x4d8b, 0xbd, 0xa9, 0x8d, 0x5d, 0x3e, 0x9e, 0x3e, 0x0b);
typedef struct _DSFXDistortion
{
    FLOAT fGain;
    FLOAT fEdge;
    FLOAT fPostEQCenterFrequency;
    FLOAT fPostEQBandwidth;
    FLOAT fPreLowpassCutoff;
} DSFXDistortion, *LPDSFXDistortion;
typedef const DSFXDistortion *LPCDSFXDistortion;
DECLARE_INTERFACE_(IDirectSoundFXDistortion, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(SetAllParameters) (THIS_ _In_ LPCDSFXDistortion pcDsFxDistortion) PURE;
    STDMETHOD(GetAllParameters) (THIS_ _Out_ LPDSFXDistortion pDsFxDistortion) PURE;
};
DEFINE_GUID(IID_IDirectSoundFXCompressor, 0x4bbd1154, 0x62f6, 0x4e2c, 0xa1, 0x5c, 0xd3, 0xb6, 0xc4, 0x17, 0xf7, 0xa0);
typedef struct _DSFXCompressor
{
    FLOAT fGain;
    FLOAT fAttack;
    FLOAT fRelease;
    FLOAT fThreshold;
    FLOAT fRatio;
    FLOAT fPredelay;
} DSFXCompressor, *LPDSFXCompressor;
typedef const DSFXCompressor *LPCDSFXCompressor;
DECLARE_INTERFACE_(IDirectSoundFXCompressor, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(SetAllParameters) (THIS_ _In_ LPCDSFXCompressor pcDsFxCompressor) PURE;
    STDMETHOD(GetAllParameters) (THIS_ _Out_ LPDSFXCompressor pDsFxCompressor) PURE;
};
DEFINE_GUID(IID_IDirectSoundFXParamEq, 0xc03ca9fe, 0xfe90, 0x4204, 0x80, 0x78, 0x82, 0x33, 0x4c, 0xd1, 0x77, 0xda);
typedef struct _DSFXParamEq
{
    FLOAT fCenter;
    FLOAT fBandwidth;
    FLOAT fGain;
} DSFXParamEq, *LPDSFXParamEq;
typedef const DSFXParamEq *LPCDSFXParamEq;
DECLARE_INTERFACE_(IDirectSoundFXParamEq, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(SetAllParameters) (THIS_ _In_ LPCDSFXParamEq pcDsFxParamEq) PURE;
    STDMETHOD(GetAllParameters) (THIS_ _Out_ LPDSFXParamEq pDsFxParamEq) PURE;
};
DEFINE_GUID(IID_IDirectSoundFXI3DL2Reverb, 0x4b166a6a, 0x0d66, 0x43f3, 0x80, 0xe3, 0xee, 0x62, 0x80, 0xde, 0xe1, 0xa4);
typedef struct _DSFXI3DL2Reverb
{
    LONG lRoom;
    LONG lRoomHF;
    FLOAT flRoomRolloffFactor;
    FLOAT flDecayTime;
    FLOAT flDecayHFRatio;
    LONG lReflections;
    FLOAT flReflectionsDelay;
    LONG lReverb;
    FLOAT flReverbDelay;
    FLOAT flDiffusion;
    FLOAT flDensity;
    FLOAT flHFReference;
} DSFXI3DL2Reverb, *LPDSFXI3DL2Reverb;
typedef const DSFXI3DL2Reverb *LPCDSFXI3DL2Reverb;
DECLARE_INTERFACE_(IDirectSoundFXI3DL2Reverb, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(SetAllParameters) (THIS_ _In_ LPCDSFXI3DL2Reverb pcDsFxI3DL2Reverb) PURE;
    STDMETHOD(GetAllParameters) (THIS_ _Out_ LPDSFXI3DL2Reverb pDsFxI3DL2Reverb) PURE;
    STDMETHOD(SetPreset) (THIS_ DWORD dwPreset) PURE;
    STDMETHOD(GetPreset) (THIS_ _Out_ LPDWORD pdwPreset) PURE;
    STDMETHOD(SetQuality) (THIS_ LONG lQuality) PURE;
    STDMETHOD(GetQuality) (THIS_ _Out_ LONG *plQuality) PURE;
};
DEFINE_GUID(IID_IDirectSoundFXWavesReverb,0x46858c3a,0x0dc6,0x45e3,0xb7,0x60,0xd4,0xee,0xf1,0x6c,0xb3,0x25);
typedef struct _DSFXWavesReverb
{
    FLOAT fInGain;
    FLOAT fReverbMix;
    FLOAT fReverbTime;
    FLOAT fHighFreqRTRatio;
} DSFXWavesReverb, *LPDSFXWavesReverb;
typedef const DSFXWavesReverb *LPCDSFXWavesReverb;
DECLARE_INTERFACE_(IDirectSoundFXWavesReverb, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(SetAllParameters) (THIS_ _In_ LPCDSFXWavesReverb pcDsFxWavesReverb) PURE;
    STDMETHOD(GetAllParameters) (THIS_ _Out_ LPDSFXWavesReverb pDsFxWavesReverb) PURE;
};
DEFINE_GUID(IID_IDirectSoundCaptureFXAec, 0xad74143d, 0x903d, 0x4ab7, 0x80, 0x66, 0x28, 0xd3, 0x63, 0x03, 0x6d, 0x65);
typedef struct _DSCFXAec
{
    BOOL fEnable;
    BOOL fNoiseFill;
    DWORD dwMode;
} DSCFXAec, *LPDSCFXAec;
typedef const DSCFXAec *LPCDSCFXAec;
DECLARE_INTERFACE_(IDirectSoundCaptureFXAec, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(SetAllParameters) (THIS_ _In_ LPCDSCFXAec pDscFxAec) PURE;
    STDMETHOD(GetAllParameters) (THIS_ _Out_ LPDSCFXAec pDscFxAec) PURE;
    STDMETHOD(GetStatus) (THIS_ _Out_ LPDWORD pdwStatus) PURE;
    STDMETHOD(Reset) (THIS) PURE;
};
DEFINE_GUID(IID_IDirectSoundCaptureFXNoiseSuppress, 0xed311e41, 0xfbae, 0x4175, 0x96, 0x25, 0xcd, 0x8, 0x54, 0xf6, 0x93, 0xca);
typedef struct _DSCFXNoiseSuppress
{
    BOOL fEnable;
} DSCFXNoiseSuppress, *LPDSCFXNoiseSuppress;
typedef const DSCFXNoiseSuppress *LPCDSCFXNoiseSuppress;
DECLARE_INTERFACE_(IDirectSoundCaptureFXNoiseSuppress, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(SetAllParameters) (THIS_ _In_ LPCDSCFXNoiseSuppress pcDscFxNoiseSuppress) PURE;
    STDMETHOD(GetAllParameters) (THIS_ _Out_ LPDSCFXNoiseSuppress pDscFxNoiseSuppress) PURE;
    STDMETHOD(Reset) (THIS) PURE;
};
struct IDirectSoundFullDuplex;
typedef struct IDirectSoundFullDuplex *LPDIRECTSOUNDFULLDUPLEX;
DEFINE_GUID(IID_IDirectSoundFullDuplex, 0xedcb4c7a, 0xdaab, 0x4216, 0xa4, 0x2e, 0x6c, 0x50, 0x59, 0x6d, 0xdc, 0x1d);
DECLARE_INTERFACE_(IDirectSoundFullDuplex, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ _In_ REFIID, _Outptr_ LPVOID*) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(Initialize) (THIS_ _In_ LPCGUID pCaptureGuid, _In_ LPCGUID pRenderGuid, _In_ LPCDSCBUFFERDESC lpDscBufferDesc, _In_ LPCDSBUFFERDESC lpDsBufferDesc, HWND hWnd, DWORD dwLevel,
                               _Outptr_ LPLPDIRECTSOUNDCAPTUREBUFFER8 lplpDirectSoundCaptureBuffer8, _Outptr_ LPLPDIRECTSOUNDBUFFER8 lplpDirectSoundBuffer8) PURE;
};
enum
{
    DSFX_I3DL2_MATERIAL_PRESET_SINGLEWINDOW,
    DSFX_I3DL2_MATERIAL_PRESET_DOUBLEWINDOW,
    DSFX_I3DL2_MATERIAL_PRESET_THINDOOR,
    DSFX_I3DL2_MATERIAL_PRESET_THICKDOOR,
    DSFX_I3DL2_MATERIAL_PRESET_WOODWALL,
    DSFX_I3DL2_MATERIAL_PRESET_BRICKWALL,
    DSFX_I3DL2_MATERIAL_PRESET_STONEWALL,
    DSFX_I3DL2_MATERIAL_PRESET_CURTAIN
};
enum
{
    DSFX_I3DL2_ENVIRONMENT_PRESET_DEFAULT,
    DSFX_I3DL2_ENVIRONMENT_PRESET_GENERIC,
    DSFX_I3DL2_ENVIRONMENT_PRESET_PADDEDCELL,
    DSFX_I3DL2_ENVIRONMENT_PRESET_ROOM,
    DSFX_I3DL2_ENVIRONMENT_PRESET_BATHROOM,
    DSFX_I3DL2_ENVIRONMENT_PRESET_LIVINGROOM,
    DSFX_I3DL2_ENVIRONMENT_PRESET_STONEROOM,
    DSFX_I3DL2_ENVIRONMENT_PRESET_AUDITORIUM,
    DSFX_I3DL2_ENVIRONMENT_PRESET_CONCERTHALL,
    DSFX_I3DL2_ENVIRONMENT_PRESET_CAVE,
    DSFX_I3DL2_ENVIRONMENT_PRESET_ARENA,
    DSFX_I3DL2_ENVIRONMENT_PRESET_HANGAR,
    DSFX_I3DL2_ENVIRONMENT_PRESET_CARPETEDHALLWAY,
    DSFX_I3DL2_ENVIRONMENT_PRESET_HALLWAY,
    DSFX_I3DL2_ENVIRONMENT_PRESET_STONECORRIDOR,
    DSFX_I3DL2_ENVIRONMENT_PRESET_ALLEY,
    DSFX_I3DL2_ENVIRONMENT_PRESET_FOREST,
    DSFX_I3DL2_ENVIRONMENT_PRESET_CITY,
    DSFX_I3DL2_ENVIRONMENT_PRESET_MOUNTAINS,
    DSFX_I3DL2_ENVIRONMENT_PRESET_QUARRY,
    DSFX_I3DL2_ENVIRONMENT_PRESET_PLAIN,
    DSFX_I3DL2_ENVIRONMENT_PRESET_PARKINGLOT,
    DSFX_I3DL2_ENVIRONMENT_PRESET_SEWERPIPE,
    DSFX_I3DL2_ENVIRONMENT_PRESET_UNDERWATER,
    DSFX_I3DL2_ENVIRONMENT_PRESET_SMALLROOM,
    DSFX_I3DL2_ENVIRONMENT_PRESET_MEDIUMROOM,
    DSFX_I3DL2_ENVIRONMENT_PRESET_LARGEROOM,
    DSFX_I3DL2_ENVIRONMENT_PRESET_MEDIUMHALL,
    DSFX_I3DL2_ENVIRONMENT_PRESET_LARGEHALL,
    DSFX_I3DL2_ENVIRONMENT_PRESET_PLATE
};
DEFINE_GUID(DS3DALG_NO_VIRTUALIZATION, 0xc241333f, 0x1c1b, 0x11d2, 0x94, 0xf5, 0x0, 0xc0, 0x4f, 0xc2, 0x8a, 0xca);
DEFINE_GUID(DS3DALG_HRTF_FULL, 0xc2413340, 0x1c1b, 0x11d2, 0x94, 0xf5, 0x0, 0xc0, 0x4f, 0xc2, 0x8a, 0xca);
DEFINE_GUID(DS3DALG_HRTF_LIGHT, 0xc2413342, 0x1c1b, 0x11d2, 0x94, 0xf5, 0x0, 0xc0, 0x4f, 0xc2, 0x8a, 0xca);
DEFINE_GUID(GUID_DSFX_STANDARD_GARGLE, 0xdafd8210, 0x5711, 0x4b91, 0x9f, 0xe3, 0xf7, 0x5b, 0x7a, 0xe2, 0x79, 0xbf);
DEFINE_GUID(GUID_DSFX_STANDARD_CHORUS, 0xefe6629c, 0x81f7, 0x4281, 0xbd, 0x91, 0xc9, 0xd6, 0x04, 0xa9, 0x5a, 0xf6);
DEFINE_GUID(GUID_DSFX_STANDARD_FLANGER, 0xefca3d92, 0xdfd8, 0x4672, 0xa6, 0x03, 0x74, 0x20, 0x89, 0x4b, 0xad, 0x98);
DEFINE_GUID(GUID_DSFX_STANDARD_ECHO, 0xef3e932c, 0xd40b, 0x4f51, 0x8c, 0xcf, 0x3f, 0x98, 0xf1, 0xb2, 0x9d, 0x5d);
DEFINE_GUID(GUID_DSFX_STANDARD_DISTORTION, 0xef114c90, 0xcd1d, 0x484e, 0x96, 0xe5, 0x09, 0xcf, 0xaf, 0x91, 0x2a, 0x21);
DEFINE_GUID(GUID_DSFX_STANDARD_COMPRESSOR, 0xef011f79, 0x4000, 0x406d, 0x87, 0xaf, 0xbf, 0xfb, 0x3f, 0xc3, 0x9d, 0x57);
DEFINE_GUID(GUID_DSFX_STANDARD_PARAMEQ, 0x120ced89, 0x3bf4, 0x4173, 0xa1, 0x32, 0x3c, 0xb4, 0x06, 0xcf, 0x32, 0x31);
DEFINE_GUID(GUID_DSFX_STANDARD_I3DL2REVERB, 0xef985e71, 0xd5c7, 0x42d4, 0xba, 0x4d, 0x2d, 0x07, 0x3e, 0x2e, 0x96, 0xf4);
DEFINE_GUID(GUID_DSFX_WAVES_REVERB, 0x87fc0268, 0x9a55, 0x4360, 0x95, 0xaa, 0x00, 0x4a, 0x1d, 0x9d, 0xe2, 0x6c);
DEFINE_GUID(GUID_DSCFX_CLASS_AEC, 0xBF963D80L, 0xC559, 0x11D0, 0x8A, 0x2B, 0x00, 0xA0, 0xC9, 0x25, 0x5A, 0xC1);
DEFINE_GUID(GUID_DSCFX_MS_AEC, 0xcdebb919, 0x379a, 0x488a, 0x87, 0x65, 0xf5, 0x3c, 0xfd, 0x36, 0xde, 0x40);
DEFINE_GUID(GUID_DSCFX_SYSTEM_AEC, 0x1c22c56d, 0x9879, 0x4f5b, 0xa3, 0x89, 0x27, 0x99, 0x6d, 0xdc, 0x28, 0x10);
DEFINE_GUID(GUID_DSCFX_CLASS_NS, 0xe07f903f, 0x62fd, 0x4e60, 0x8c, 0xdd, 0xde, 0xa7, 0x23, 0x66, 0x65, 0xb5);
DEFINE_GUID(GUID_DSCFX_MS_NS, 0x11c5c73b, 0x66e9, 0x4ba1, 0xa0, 0xba, 0xe8, 0x14, 0xc6, 0xee, 0xd9, 0x2d);
DEFINE_GUID(GUID_DSCFX_SYSTEM_NS, 0x5ab0882e, 0x7274, 0x4516, 0x87, 0x7d, 0x4e, 0xee, 0x99, 0xba, 0x4f, 0xd0);
};
#endif
#pragma endregion
