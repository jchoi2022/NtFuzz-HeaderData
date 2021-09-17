#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
#include "dmusicc.h"
interface IDirectMusicSynth;
interface IDirectMusicSynthSink;
typedef interface IDirectMusicSynth IDirectMusicSynth;
typedef interface IDirectMusicSynthSink IDirectMusicSynthSink;
typedef struct _DMUS_VOICE_STATE
{
    BOOL bExists;
    SAMPLE_POSITION spPosition;
} DMUS_VOICE_STATE;
DECLARE_INTERFACE_(IDirectMusicSynth, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(Open) (THIS_ LPDMUS_PORTPARAMS pPortParams) PURE;
    STDMETHOD(Close) (THIS) PURE;
    STDMETHOD(SetNumChannelGroups) (THIS_ DWORD dwGroups) PURE;
    STDMETHOD(Download) (THIS_ LPHANDLE phDownload,
                                           LPVOID pvData,
                                           LPBOOL pbFree ) PURE;
    STDMETHOD(Unload) (THIS_ HANDLE hDownload,
                                           HRESULT ( CALLBACK *lpFreeHandle)(HANDLE,HANDLE),
                                           HANDLE hUserData ) PURE;
    STDMETHOD(PlayBuffer) (THIS_ REFERENCE_TIME rt,
                                           LPBYTE pbBuffer,
                                           DWORD cbBuffer) PURE;
    STDMETHOD(GetRunningStats) (THIS_ LPDMUS_SYNTHSTATS pStats) PURE;
    STDMETHOD(GetPortCaps) (THIS_ LPDMUS_PORTCAPS pCaps) PURE;
    STDMETHOD(SetMasterClock) (THIS_ IReferenceClock *pClock) PURE;
    STDMETHOD(GetLatencyClock) (THIS_ IReferenceClock **ppClock) PURE;
    STDMETHOD(Activate) (THIS_ BOOL fEnable) PURE;
    STDMETHOD(SetSynthSink) (THIS_ IDirectMusicSynthSink *pSynthSink) PURE;
    STDMETHOD(Render) (THIS_ short *pBuffer,
                                           DWORD dwLength,
                                           LONGLONG llPosition) PURE;
    STDMETHOD(SetChannelPriority) (THIS_ DWORD dwChannelGroup,
                                           DWORD dwChannel,
                                           DWORD dwPriority) PURE;
    STDMETHOD(GetChannelPriority) (THIS_ DWORD dwChannelGroup,
                                           DWORD dwChannel,
                                           LPDWORD pdwPriority) PURE;
    STDMETHOD(GetFormat) (THIS_ LPWAVEFORMATEX pWaveFormatEx,
                                           LPDWORD pdwWaveFormatExSize) PURE;
    STDMETHOD(GetAppend) (THIS_ DWORD* pdwAppend) PURE;
};
DECLARE_INTERFACE_(IDirectMusicSynth8, IDirectMusicSynth)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(Open) (THIS_ LPDMUS_PORTPARAMS pPortParams) PURE;
    STDMETHOD(Close) (THIS) PURE;
    STDMETHOD(SetNumChannelGroups) (THIS_ DWORD dwGroups) PURE;
    STDMETHOD(Download) (THIS_ LPHANDLE phDownload,
                                           LPVOID pvData,
                                           LPBOOL pbFree ) PURE;
    STDMETHOD(Unload) (THIS_ HANDLE hDownload,
                                           HRESULT ( CALLBACK *lpFreeHandle)(HANDLE,HANDLE),
                                           HANDLE hUserData ) PURE;
    STDMETHOD(PlayBuffer) (THIS_ REFERENCE_TIME rt,
                                           LPBYTE pbBuffer,
                                           DWORD cbBuffer) PURE;
    STDMETHOD(GetRunningStats) (THIS_ LPDMUS_SYNTHSTATS pStats) PURE;
    STDMETHOD(GetPortCaps) (THIS_ LPDMUS_PORTCAPS pCaps) PURE;
    STDMETHOD(SetMasterClock) (THIS_ IReferenceClock *pClock) PURE;
    STDMETHOD(GetLatencyClock) (THIS_ IReferenceClock **ppClock) PURE;
    STDMETHOD(Activate) (THIS_ BOOL fEnable) PURE;
    STDMETHOD(SetSynthSink) (THIS_ IDirectMusicSynthSink *pSynthSink) PURE;
    STDMETHOD(Render) (THIS_ short *pBuffer,
                                           DWORD dwLength,
                                           LONGLONG llPosition) PURE;
    STDMETHOD(SetChannelPriority) (THIS_ DWORD dwChannelGroup,
                                           DWORD dwChannel,
                                           DWORD dwPriority) PURE;
    STDMETHOD(GetChannelPriority) (THIS_ DWORD dwChannelGroup,
                                           DWORD dwChannel,
                                           LPDWORD pdwPriority) PURE;
    STDMETHOD(GetFormat) (THIS_ LPWAVEFORMATEX pWaveFormatEx,
                                           LPDWORD pdwWaveFormatExSize) PURE;
    STDMETHOD(GetAppend) (THIS_ DWORD* pdwAppend) PURE;
    STDMETHOD(PlayVoice) (THIS_ REFERENCE_TIME rt,
             DWORD dwVoiceId,
             DWORD dwChannelGroup,
             DWORD dwChannel,
             DWORD dwDLId,
             long prPitch,
             long vrVolume,
                                           SAMPLE_TIME stVoiceStart,
                                           SAMPLE_TIME stLoopStart,
                                           SAMPLE_TIME stLoopEnd) PURE;
    STDMETHOD(StopVoice) (THIS_ REFERENCE_TIME rt,
             DWORD dwVoiceId ) PURE;
    STDMETHOD(GetVoiceState) (THIS_ DWORD dwVoice[],
             DWORD cbVoice,
             DMUS_VOICE_STATE dwVoiceState[] ) PURE;
    STDMETHOD(Refresh) (THIS_ DWORD dwDownloadID,
                                           DWORD dwFlags) PURE;
    STDMETHOD(AssignChannelToBuses) (THIS_ DWORD dwChannelGroup,
                                           DWORD dwChannel,
                                           LPDWORD pdwBuses,
                                           DWORD cBuses) PURE;
};
DECLARE_INTERFACE_(IDirectMusicSynthSink, IUnknown)
{
    STDMETHOD(QueryInterface) (THIS_ REFIID, LPVOID FAR *) PURE;
    STDMETHOD_(ULONG,AddRef) (THIS) PURE;
    STDMETHOD_(ULONG,Release) (THIS) PURE;
    STDMETHOD(Init) (THIS_ IDirectMusicSynth *pSynth) PURE;
    STDMETHOD(SetMasterClock) (THIS_ IReferenceClock *pClock) PURE;
    STDMETHOD(GetLatencyClock) (THIS_ IReferenceClock **ppClock) PURE;
    STDMETHOD(Activate) (THIS_ BOOL fEnable) PURE;
    STDMETHOD(SampleToRefTime) (THIS_ LONGLONG llSampleTime,
                                           REFERENCE_TIME *prfTime) PURE;
    STDMETHOD(RefTimeToSample) (THIS_ REFERENCE_TIME rfTime,
                                           LONGLONG *pllSampleTime) PURE;
    STDMETHOD(SetDirectSound) (THIS_ LPDIRECTSOUND pDirectSound,
                                           LPDIRECTSOUNDBUFFER pDirectSoundBuffer) PURE;
    STDMETHOD(GetDesiredBufferSize) (THIS_ LPDWORD pdwBufferSizeInSamples) PURE;
};
DEFINE_GUID(IID_IDirectMusicSynth, 0x9823661, 0x5c85, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(IID_IDirectMusicSynthSink,0x9823663, 0x5c85, 0x11d2, 0xaf, 0xa6, 0x0, 0xaa, 0x0, 0x24, 0xd8, 0xb6);
DEFINE_GUID(IID_IDirectMusicSynth8,0x53cab625, 0x2711, 0x4c9f, 0x9d, 0xe7, 0x1b, 0x7f, 0x92, 0x5f, 0x6f, 0xc8);
DEFINE_GUID(GUID_DMUS_PROP_SetSynthSink,0x0a3a5ba5, 0x37b6, 0x11d2, 0xb9, 0xf9, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
DEFINE_GUID(GUID_DMUS_PROP_SinkUsesDSound, 0xbe208857, 0x8952, 0x11d2, 0xba, 0x1c, 0x00, 0x00, 0xf8, 0x75, 0xac, 0x12);
#endif
#pragma endregion
