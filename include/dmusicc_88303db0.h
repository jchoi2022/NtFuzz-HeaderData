#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include <windows.h>
#include <objbase.h>
#include <mmsystem.h>
#include "dls1.h"
#include "dmerror.h"
#include "dmdls.h"
#include "dsound.h"
#include "dmusbuff.h"
#include <pshpack8.h>
extern "C" {
typedef ULONGLONG SAMPLE_TIME;
typedef ULONGLONG SAMPLE_POSITION;
typedef SAMPLE_TIME *LPSAMPLE_TIME;
typedef struct _DMUS_BUFFERDESC *LPDMUS_BUFFERDESC;
typedef struct _DMUS_BUFFERDESC
{
    DWORD dwSize;
    DWORD dwFlags;
    GUID guidBufferFormat;
    DWORD cbBuffer;
} DMUS_BUFFERDESC;
typedef struct _DMUS_PORTCAPS
{
    DWORD dwSize;
    DWORD dwFlags;
    GUID guidPort;
    DWORD dwClass;
    DWORD dwType;
    DWORD dwMemorySize;
    DWORD dwMaxChannelGroups;
    DWORD dwMaxVoices;
    DWORD dwMaxAudioChannels;
    DWORD dwEffectFlags;
    WCHAR wszDescription[DMUS_MAX_DESCRIPTION];
} DMUS_PORTCAPS;
typedef DMUS_PORTCAPS *LPDMUS_PORTCAPS;
typedef struct _DMUS_PORTPARAMS
{
    DWORD dwSize;
    DWORD dwValidParams;
    DWORD dwVoices;
    DWORD dwChannelGroups;
    DWORD dwAudioChannels;
    DWORD dwSampleRate;
    DWORD dwEffectFlags;
    BOOL fShare;
} DMUS_PORTPARAMS7;
typedef struct _DMUS_PORTPARAMS8
{
    DWORD dwSize;
    DWORD dwValidParams;
    DWORD dwVoices;
    DWORD dwChannelGroups;
    DWORD dwAudioChannels;
    DWORD dwSampleRate;
    DWORD dwEffectFlags;
    BOOL fShare;
    DWORD dwFeatures;
} DMUS_PORTPARAMS8;
typedef DMUS_PORTPARAMS8 DMUS_PORTPARAMS;
typedef DMUS_PORTPARAMS *LPDMUS_PORTPARAMS;
typedef struct _DMUS_SYNTHSTATS *LPDMUS_SYNTHSTATS;
typedef struct _DMUS_SYNTHSTATS
{
    DWORD dwSize;
    DWORD dwValidStats;
    DWORD dwVoices;
    DWORD dwTotalCPU;
    DWORD dwCPUPerVoice;
    DWORD dwLostNotes;
    DWORD dwFreeMemory;
    long lPeakVolume;
} DMUS_SYNTHSTATS;
typedef struct _DMUS_SYNTHSTATS8 *LPDMUS_SYNTHSTATS8;
typedef struct _DMUS_SYNTHSTATS8
{
    DWORD dwSize;
    DWORD dwValidStats;
    DWORD dwVoices;
    DWORD dwTotalCPU;
    DWORD dwCPUPerVoice;
    DWORD dwLostNotes;
    DWORD dwFreeMemory;
    long lPeakVolume;
    DWORD dwSynthMemUse;
} DMUS_SYNTHSTATS8;
typedef struct _DMUS_WAVES_REVERB_PARAMS
{
    float fInGain;
    float fReverbMix;
    float fReverbTime;
    float fHighFreqRTRatio;
} DMUS_WAVES_REVERB_PARAMS;
typedef enum
{
    DMUS_CLOCK_SYSTEM = 0,
    DMUS_CLOCK_WAVE = 1
} DMUS_CLOCKTYPE;
typedef struct _DMUS_CLOCKINFO7 *LPDMUS_CLOCKINFO7;
typedef struct _DMUS_CLOCKINFO7
{
    DWORD dwSize;
    DMUS_CLOCKTYPE ctType;
    GUID guidClock;
    WCHAR wszDescription[DMUS_MAX_DESCRIPTION];
} DMUS_CLOCKINFO7;
typedef struct _DMUS_CLOCKINFO8 *LPDMUS_CLOCKINFO8;
typedef struct _DMUS_CLOCKINFO8
{
    DWORD dwSize;
    DMUS_CLOCKTYPE ctType;
    GUID guidClock;
    WCHAR wszDescription[DMUS_MAX_DESCRIPTION];
    DWORD dwFlags;
} DMUS_CLOCKINFO8;
typedef DMUS_CLOCKINFO8 DMUS_CLOCKINFO;
typedef DMUS_CLOCKINFO *LPDMUS_CLOCKINFO;
interface IDirectMusic;
interface IDirectMusic8;
interface IDirectMusicBuffer;
interface IDirectMusicPort;
interface IDirectMusicThru;
interface IReferenceClock;
typedef interface IDirectMusic IDirectMusic;
typedef interface IDirectMusic8 IDirectMusic8;
typedef interface IDirectMusicPort IDirectMusicPort;
typedef interface IDirectMusicBuffer IDirectMusicBuffer;
typedef interface IDirectMusicThru IDirectMusicThru;
typedef interface IReferenceClock IReferenceClock;
typedef IDirectMusic *LPDIRECTMUSIC;
typedef IDirectMusic8 *LPDIRECTMUSIC8;
typedef IDirectMusicPort *LPDIRECTMUSICPORT;
typedef IDirectMusicBuffer *LPDIRECTMUSICBUFFER;
DECLARE_INTERFACE_(IDirectMusic, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(EnumPort) (THIS_ DWORD dwIndex,
                                           LPDMUS_PORTCAPS pPortCaps) PURE;
    STDMETHOD(CreateMusicBuffer) (THIS_ LPDMUS_BUFFERDESC pBufferDesc,
                                           LPDIRECTMUSICBUFFER *ppBuffer,
                                           LPUNKNOWN pUnkOuter) PURE;
    STDMETHOD(CreatePort) (THIS_ REFCLSID rclsidPort,
                                           LPDMUS_PORTPARAMS pPortParams,
                                           LPDIRECTMUSICPORT *ppPort,
                                           LPUNKNOWN pUnkOuter) PURE;
    STDMETHOD(EnumMasterClock) (THIS_ DWORD dwIndex,
                                           LPDMUS_CLOCKINFO lpClockInfo) PURE;
    STDMETHOD(GetMasterClock) (THIS_ LPGUID pguidClock,
                                           IReferenceClock **ppReferenceClock) PURE;
    STDMETHOD(SetMasterClock) (THIS_ REFGUID rguidClock) PURE;
    STDMETHOD(Activate) (THIS_ BOOL fEnable) PURE;
    STDMETHOD(GetDefaultPort) (THIS_ LPGUID pguidPort) PURE;
    STDMETHOD(SetDirectSound) (THIS_ LPDIRECTSOUND pDirectSound,
                                           HWND hWnd) PURE;
};
DECLARE_INTERFACE_(IDirectMusic8, IDirectMusic)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(EnumPort) (THIS_ DWORD dwIndex,
                                           LPDMUS_PORTCAPS pPortCaps) PURE;
    STDMETHOD(CreateMusicBuffer) (THIS_ LPDMUS_BUFFERDESC pBufferDesc,
                                           LPDIRECTMUSICBUFFER *ppBuffer,
                                           LPUNKNOWN pUnkOuter) PURE;
    STDMETHOD(CreatePort) (THIS_ REFCLSID rclsidPort,
                                           LPDMUS_PORTPARAMS pPortParams,
                                           LPDIRECTMUSICPORT *ppPort,
                                           LPUNKNOWN pUnkOuter) PURE;
    STDMETHOD(EnumMasterClock) (THIS_ DWORD dwIndex,
                                           LPDMUS_CLOCKINFO lpClockInfo) PURE;
    STDMETHOD(GetMasterClock) (THIS_ LPGUID pguidClock,
                                           IReferenceClock **ppReferenceClock) PURE;
    STDMETHOD(SetMasterClock) (THIS_ REFGUID rguidClock) PURE;
    STDMETHOD(Activate) (THIS_ BOOL fEnable) PURE;
    STDMETHOD(GetDefaultPort) (THIS_ LPGUID pguidPort) PURE;
    STDMETHOD(SetDirectSound) (THIS_ LPDIRECTSOUND pDirectSound,
                                           HWND hWnd) PURE;
    STDMETHOD(SetExternalMasterClock)
                                    (THIS_ IReferenceClock *pClock) PURE;
};
DECLARE_INTERFACE_(IDirectMusicBuffer, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(Flush) (THIS) PURE;
    STDMETHOD(TotalTime) (THIS_ LPREFERENCE_TIME prtTime) PURE;
    STDMETHOD(PackStructured) (THIS_ REFERENCE_TIME rt,
                                           DWORD dwChannelGroup,
                                           DWORD dwChannelMessage) PURE;
    STDMETHOD(PackUnstructured) (THIS_ REFERENCE_TIME rt,
                                           DWORD dwChannelGroup,
                                           DWORD cb,
                                           LPBYTE lpb) PURE;
    STDMETHOD(ResetReadPtr) (THIS) PURE;
    STDMETHOD(GetNextEvent) (THIS_ LPREFERENCE_TIME prt,
                                           LPDWORD pdwChannelGroup,
                                           LPDWORD pdwLength,
                                           LPBYTE *ppData) PURE;
    STDMETHOD(GetRawBufferPtr) (THIS_ LPBYTE *ppData) PURE;
    STDMETHOD(GetStartTime) (THIS_ LPREFERENCE_TIME prt) PURE;
    STDMETHOD(GetUsedBytes) (THIS_ LPDWORD pcb) PURE;
    STDMETHOD(GetMaxBytes) (THIS_ LPDWORD pcb) PURE;
    STDMETHOD(GetBufferFormat) (THIS_ LPGUID pGuidFormat) PURE;
    STDMETHOD(SetStartTime) (THIS_ REFERENCE_TIME rt) PURE;
    STDMETHOD(SetUsedBytes) (THIS_ DWORD cb) PURE;
};
typedef IDirectMusicBuffer IDirectMusicBuffer8;
typedef IDirectMusicBuffer8 *LPDIRECTMUSICBUFFER8;
DECLARE_INTERFACE_(IDirectMusicInstrument, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(GetPatch) (THIS_ DWORD* pdwPatch) PURE;
    STDMETHOD(SetPatch) (THIS_ DWORD dwPatch) PURE;
};
typedef IDirectMusicInstrument IDirectMusicInstrument8;
typedef IDirectMusicInstrument8 *LPDIRECTMUSICINSTRUMENT8;
DECLARE_INTERFACE_(IDirectMusicDownloadedInstrument, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
};
typedef IDirectMusicDownloadedInstrument IDirectMusicDownloadedInstrument8;
typedef IDirectMusicDownloadedInstrument8 *LPDIRECTMUSICDOWNLOADEDINSTRUMENT8;
DECLARE_INTERFACE_(IDirectMusicCollection, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(GetInstrument) (THIS_ DWORD dwPatch,
                                               IDirectMusicInstrument** ppInstrument) PURE;
    STDMETHOD(EnumInstrument) (THIS_ DWORD dwIndex,
                                               DWORD* pdwPatch,
                                               LPWSTR pwszName,
                                               DWORD dwNameLen) PURE;
};
typedef IDirectMusicCollection IDirectMusicCollection8;
typedef IDirectMusicCollection8 *LPDIRECTMUSICCOLLECTION8;
DECLARE_INTERFACE_(IDirectMusicDownload , IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(GetBuffer) (THIS_ void** ppvBuffer,
                                           DWORD* pdwSize) PURE;
};
typedef IDirectMusicDownload IDirectMusicDownload8;
typedef IDirectMusicDownload8 *LPDIRECTMUSICDOWNLOAD8;
DECLARE_INTERFACE_(IDirectMusicPortDownload, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(GetBuffer) (THIS_ DWORD dwDLId,
                                           IDirectMusicDownload** ppIDMDownload) PURE;
    STDMETHOD(AllocateBuffer) (THIS_ DWORD dwSize,
                                           IDirectMusicDownload** ppIDMDownload) PURE;
    STDMETHOD(GetDLId) (THIS_ DWORD* pdwStartDLId,
                                           DWORD dwCount) PURE;
    STDMETHOD(GetAppend) (THIS_ DWORD* pdwAppend) PURE;
    STDMETHOD(Download) (THIS_ IDirectMusicDownload* pIDMDownload) PURE;
    STDMETHOD(Unload) (THIS_ IDirectMusicDownload* pIDMDownload) PURE;
};
typedef IDirectMusicPortDownload IDirectMusicPortDownload8;
typedef IDirectMusicPortDownload8 *LPDIRECTMUSICPORTDOWNLOAD8;
DECLARE_INTERFACE_(IDirectMusicPort, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(PlayBuffer) (THIS_ LPDIRECTMUSICBUFFER pBuffer) PURE;
    STDMETHOD(SetReadNotificationHandle) (THIS_ HANDLE hEvent) PURE;
    STDMETHOD(Read) (THIS_ LPDIRECTMUSICBUFFER pBuffer) PURE;
    STDMETHOD(DownloadInstrument) (THIS_ IDirectMusicInstrument *pInstrument,
                                     IDirectMusicDownloadedInstrument **ppDownloadedInstrument,
                                     DMUS_NOTERANGE *pNoteRanges,
                                     DWORD dwNumNoteRanges) PURE;
    STDMETHOD(UnloadInstrument) (THIS_ IDirectMusicDownloadedInstrument *pDownloadedInstrument) PURE;
    STDMETHOD(GetLatencyClock) (THIS_ IReferenceClock **ppClock) PURE;
    STDMETHOD(GetRunningStats) (THIS_ LPDMUS_SYNTHSTATS pStats) PURE;
    STDMETHOD(Compact) (THIS) PURE;
    STDMETHOD(GetCaps) (THIS_ LPDMUS_PORTCAPS pPortCaps) PURE;
    STDMETHOD(DeviceIoControl) (THIS_ DWORD dwIoControlCode,
                                           LPVOID lpInBuffer,
                                           DWORD nInBufferSize,
                                           LPVOID lpOutBuffer,
                                           DWORD nOutBufferSize,
                                           LPDWORD lpBytesReturned,
                                           LPOVERLAPPED lpOverlapped) PURE;
    STDMETHOD(SetNumChannelGroups) (THIS_ DWORD dwChannelGroups) PURE;
    STDMETHOD(GetNumChannelGroups) (THIS_ LPDWORD pdwChannelGroups) PURE;
    STDMETHOD(Activate) (THIS_ BOOL fActive) PURE;
    STDMETHOD(SetChannelPriority) (THIS_ DWORD dwChannelGroup, DWORD dwChannel, DWORD dwPriority) PURE;
    STDMETHOD(GetChannelPriority) (THIS_ DWORD dwChannelGroup, DWORD dwChannel, LPDWORD pdwPriority) PURE;
    STDMETHOD(SetDirectSound) (THIS_ LPDIRECTSOUND pDirectSound, LPDIRECTSOUNDBUFFER pDirectSoundBuffer) PURE;
    STDMETHOD(GetFormat) (THIS_ LPWAVEFORMATEX pWaveFormatEx, LPDWORD pdwWaveFormatExSize, LPDWORD pdwBufferSize) PURE;
};
typedef IDirectMusicPort IDirectMusicPort8;
typedef IDirectMusicPort8 *LPDIRECTMUSICPORT8;
DECLARE_INTERFACE_(IDirectMusicThru, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(ThruChannel) (THIS_ DWORD dwSourceChannelGroup,
                                           DWORD dwSourceChannel,
                                           DWORD dwDestinationChannelGroup,
                                           DWORD dwDestinationChannel,
                                           LPDIRECTMUSICPORT pDestinationPort) PURE;
};
typedef IDirectMusicThru IDirectMusicThru8;
typedef IDirectMusicThru8 *LPDIRECTMUSICTHRU8;
DEFINE_GUID(IID_IReferenceClock,0x56a86897,0x0ad4,0x11ce,0xb0,0x3a,0x00,0x20,0xaf,0x0b,0xa7,0x70);
DECLARE_INTERFACE_(IReferenceClock, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(GetTime) (THIS_ REFERENCE_TIME *pTime) PURE;
    STDMETHOD(AdviseTime) (THIS_ REFERENCE_TIME baseTime,
                                               REFERENCE_TIME streamTime,
                                               HANDLE hEvent,
                                               DWORD * pdwAdviseCookie) PURE;
    STDMETHOD(AdvisePeriodic) (THIS_ REFERENCE_TIME startTime,
                                               REFERENCE_TIME periodTime,
                                               HANDLE hSemaphore,
                                               DWORD * pdwAdviseCookie) PURE;
    STDMETHOD(Unadvise) (THIS_ DWORD dwAdviseCookie) PURE;
};
DEFINE_GUID(CLSID_DirectMusic,0x636b9f10,0x0c7d,0x11d1,0x95,0xb2,0x00,0x20,0xaf,0xdc,0x74,0x21);
DEFINE_GUID(CLSID_DirectMusicCollection,0x480ff4b0, 0x28b2, 0x11d1, 0xbe, 0xf7, 0x0, 0xc0, 0x4f, 0xbf, 0x8f, 0xef);
DEFINE_GUID(CLSID_DirectMusicSynth,0x58C2B4D0,0x46E7,0x11D1,0x89,0xAC,0x00,0xA0,0xC9,0x05,0x41,0x29);
DEFINE_GUID(IID_IDirectMusic,0x6536115a,0x7b2d,0x11d2,0xba,0x18,0x00,0x00,0xf8,0x75,0xac,0x12);
DEFINE_GUID(IID_IDirectMusicBuffer,0xd2ac2878, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusicPort, 0x08f2d8c9,0x37c2,0x11d2,0xb9,0xf9,0x00,0x00,0xf8,0x75,0xac,0x12);
DEFINE_GUID(IID_IDirectMusicThru, 0xced153e7, 0x3606, 0x11d2, 0xb9, 0xf9, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(IID_IDirectMusicPortDownload,0xd2ac287a, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusicDownload,0xd2ac287b, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusicCollection,0xd2ac287c, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusicInstrument,0xd2ac287d, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusicDownloadedInstrument,0xd2ac287e, 0xb39b, 0x11d1, 0x87, 0x4, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(IID_IDirectMusic2,0x6fc2cae1, 0xbc78, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(IID_IDirectMusic8,0x2d3629f7,0x813d,0x4939,0x85,0x08,0xf0,0x5c,0x6b,0x75,0xfd,0x97);
DEFINE_GUID(GUID_DMUS_PROP_GM_Hardware, 0x178f2f24, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_GS_Hardware, 0x178f2f25, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_XG_Hardware, 0x178f2f26, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_XG_Capable, 0x6496aba1, 0x61b0, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(GUID_DMUS_PROP_GS_Capable, 0x6496aba2, 0x61b0, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(GUID_DMUS_PROP_DLS1, 0x178f2f27, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_DLS2, 0xf14599e5, 0x4689, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(GUID_DMUS_PROP_INSTRUMENT2, 0x865fd372, 0x9f67, 0x11d2, 0x87, 0x2a, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_DMUS_PROP_SynthSink_DSOUND,0xaa97844, 0xc877, 0x11d1, 0x87, 0xc, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_DMUS_PROP_SynthSink_WAVE,0xaa97845, 0xc877, 0x11d1, 0x87, 0xc, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_DMUS_PROP_SampleMemorySize, 0x178f2f28, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_SamplePlaybackRate, 0x2a91f713, 0xa4bf, 0x11d2, 0xbb, 0xdf, 0x0, 0x60, 0x8, 0x33, 0xdb, 0xd8);
DEFINE_GUID(GUID_DMUS_PROP_WriteLatency,0x268a0fa0, 0x60f2, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(GUID_DMUS_PROP_WritePeriod,0x268a0fa1, 0x60f2, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(GUID_DMUS_PROP_MemorySize, 0x178f2f28, 0xc364, 0x11d1, 0xa7, 0x60, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_WavesReverb,0x4cb5622, 0x32e5, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(GUID_DMUS_PROP_Effects, 0xcda8d611, 0x684a, 0x11d2, 0x87, 0x1e, 0x0, 0x60, 0x8, 0x93, 0xb1, 0xbd);
DEFINE_GUID(GUID_DMUS_PROP_LegacyCaps,0xcfa7cdc2, 0x00a1, 0x11d2, 0xaa, 0xd5, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_Volume, 0xfedfae25L, 0xe46e, 0x11d1, 0xaa, 0xce, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
};
#include <poppack.h>
#endif
#pragma endregion
