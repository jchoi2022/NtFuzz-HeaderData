#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAudioClient IAudioClient;
typedef interface IAudioClient2 IAudioClient2;
typedef interface IAudioClient3 IAudioClient3;
typedef interface IAudioRenderClient IAudioRenderClient;
typedef interface IAudioCaptureClient IAudioCaptureClient;
typedef interface IAudioClock IAudioClock;
typedef interface IAudioClock2 IAudioClock2;
typedef interface IAudioClockAdjustment IAudioClockAdjustment;
typedef interface ISimpleAudioVolume ISimpleAudioVolume;
typedef interface IAudioStreamVolume IAudioStreamVolume;
typedef interface IAudioAmbisonicsControl IAudioAmbisonicsControl;
typedef interface IChannelAudioVolume IChannelAudioVolume;
#include "wtypes.h"
#include "unknwn.h"
#include "mmreg.h"
#include "AudioSessionTypes.h"
extern "C"{
#include <winapifamily.h>
#if 0
typedef LONGLONG REFERENCE_TIME;
#else
#include <ks.h>
#include <ksmedia.h>
#endif
#pragma region Application and Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
enum _AUDCLNT_BUFFERFLAGS
    {
        AUDCLNT_BUFFERFLAGS_DATA_DISCONTINUITY = 0x1,
        AUDCLNT_BUFFERFLAGS_SILENT = 0x2,
        AUDCLNT_BUFFERFLAGS_TIMESTAMP_ERROR = 0x4
    } ;
typedef
enum AUDCLNT_STREAMOPTIONS
    {
        AUDCLNT_STREAMOPTIONS_NONE = 0,
        AUDCLNT_STREAMOPTIONS_RAW = 0x1,
        AUDCLNT_STREAMOPTIONS_MATCH_FORMAT = 0x2,
        AUDCLNT_STREAMOPTIONS_AMBISONICS = 0x4
    } AUDCLNT_STREAMOPTIONS;
DEFINE_ENUM_FLAG_OPERATORS(AUDCLNT_STREAMOPTIONS);
typedef struct AudioClientProperties
    {
    UINT32 cbSize;
    BOOL bIsOffload;
    AUDIO_STREAM_CATEGORY eCategory;
    AUDCLNT_STREAMOPTIONS Options;
    } AudioClientProperties;
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioClient;
    typedef struct IAudioClientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioClient * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioClient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioClient * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IAudioClient * This,
            _In_ AUDCLNT_SHAREMODE ShareMode,
            _In_ DWORD StreamFlags,
            _In_ REFERENCE_TIME hnsBufferDuration,
            _In_ REFERENCE_TIME hnsPeriodicity,
            _In_ const WAVEFORMATEX *pFormat,
            _In_opt_ LPCGUID AudioSessionGuid);
        HRESULT ( STDMETHODCALLTYPE *GetBufferSize )(
            IAudioClient * This,
            _Out_ UINT32 *pNumBufferFrames);
        HRESULT ( STDMETHODCALLTYPE *GetStreamLatency )(
            IAudioClient * This,
            _Out_ REFERENCE_TIME *phnsLatency);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPadding )(
            IAudioClient * This,
            _Out_ UINT32 *pNumPaddingFrames);
        HRESULT ( STDMETHODCALLTYPE *IsFormatSupported )(
            IAudioClient * This,
            _In_ AUDCLNT_SHAREMODE ShareMode,
            _In_ const WAVEFORMATEX *pFormat,
            _Out_opt_ WAVEFORMATEX **ppClosestMatch);
        HRESULT ( STDMETHODCALLTYPE *GetMixFormat )(
            IAudioClient * This,
            _Out_ WAVEFORMATEX **ppDeviceFormat);
        HRESULT ( STDMETHODCALLTYPE *GetDevicePeriod )(
            IAudioClient * This,
            _Out_opt_ REFERENCE_TIME *phnsDefaultDevicePeriod,
            _Out_opt_ REFERENCE_TIME *phnsMinimumDevicePeriod);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            IAudioClient * This);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            IAudioClient * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IAudioClient * This);
        HRESULT ( STDMETHODCALLTYPE *SetEventHandle )(
            IAudioClient * This,
                       HANDLE eventHandle);
        HRESULT ( STDMETHODCALLTYPE *GetService )(
            IAudioClient * This,
            _In_ REFIID riid,
            _Out_ void **ppv);
        END_INTERFACE
    } IAudioClientVtbl;
    interface IAudioClient
    {
        CONST_VTBL struct IAudioClientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,ShareMode,StreamFlags,hnsBufferDuration,hnsPeriodicity,pFormat,AudioSessionGuid) )
    ( (This)->lpVtbl -> GetBufferSize(This,pNumBufferFrames) )
    ( (This)->lpVtbl -> GetStreamLatency(This,phnsLatency) )
    ( (This)->lpVtbl -> GetCurrentPadding(This,pNumPaddingFrames) )
    ( (This)->lpVtbl -> IsFormatSupported(This,ShareMode,pFormat,ppClosestMatch) )
    ( (This)->lpVtbl -> GetMixFormat(This,ppDeviceFormat) )
    ( (This)->lpVtbl -> GetDevicePeriod(This,phnsDefaultDevicePeriod,phnsMinimumDevicePeriod) )
    ( (This)->lpVtbl -> Start(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> SetEventHandle(This,eventHandle) )
    ( (This)->lpVtbl -> GetService(This,riid,ppv) )
EXTERN_C const IID IID_IAudioClient2;
    typedef struct IAudioClient2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioClient2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioClient2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioClient2 * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IAudioClient2 * This,
            _In_ AUDCLNT_SHAREMODE ShareMode,
            _In_ DWORD StreamFlags,
            _In_ REFERENCE_TIME hnsBufferDuration,
            _In_ REFERENCE_TIME hnsPeriodicity,
            _In_ const WAVEFORMATEX *pFormat,
            _In_opt_ LPCGUID AudioSessionGuid);
        HRESULT ( STDMETHODCALLTYPE *GetBufferSize )(
            IAudioClient2 * This,
            _Out_ UINT32 *pNumBufferFrames);
        HRESULT ( STDMETHODCALLTYPE *GetStreamLatency )(
            IAudioClient2 * This,
            _Out_ REFERENCE_TIME *phnsLatency);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPadding )(
            IAudioClient2 * This,
            _Out_ UINT32 *pNumPaddingFrames);
        HRESULT ( STDMETHODCALLTYPE *IsFormatSupported )(
            IAudioClient2 * This,
            _In_ AUDCLNT_SHAREMODE ShareMode,
            _In_ const WAVEFORMATEX *pFormat,
            _Out_opt_ WAVEFORMATEX **ppClosestMatch);
        HRESULT ( STDMETHODCALLTYPE *GetMixFormat )(
            IAudioClient2 * This,
            _Out_ WAVEFORMATEX **ppDeviceFormat);
        HRESULT ( STDMETHODCALLTYPE *GetDevicePeriod )(
            IAudioClient2 * This,
            _Out_opt_ REFERENCE_TIME *phnsDefaultDevicePeriod,
            _Out_opt_ REFERENCE_TIME *phnsMinimumDevicePeriod);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            IAudioClient2 * This);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            IAudioClient2 * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IAudioClient2 * This);
        HRESULT ( STDMETHODCALLTYPE *SetEventHandle )(
            IAudioClient2 * This,
                       HANDLE eventHandle);
        HRESULT ( STDMETHODCALLTYPE *GetService )(
            IAudioClient2 * This,
            _In_ REFIID riid,
            _Out_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *IsOffloadCapable )(
            IAudioClient2 * This,
            _In_ AUDIO_STREAM_CATEGORY Category,
            _Out_ BOOL *pbOffloadCapable);
        HRESULT ( STDMETHODCALLTYPE *SetClientProperties )(
            IAudioClient2 * This,
            _In_ const AudioClientProperties *pProperties);
        HRESULT ( STDMETHODCALLTYPE *GetBufferSizeLimits )(
            IAudioClient2 * This,
            _In_ const WAVEFORMATEX *pFormat,
            _In_ BOOL bEventDriven,
            _Out_ REFERENCE_TIME *phnsMinBufferDuration,
            _Out_ REFERENCE_TIME *phnsMaxBufferDuration);
        END_INTERFACE
    } IAudioClient2Vtbl;
    interface IAudioClient2
    {
        CONST_VTBL struct IAudioClient2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,ShareMode,StreamFlags,hnsBufferDuration,hnsPeriodicity,pFormat,AudioSessionGuid) )
    ( (This)->lpVtbl -> GetBufferSize(This,pNumBufferFrames) )
    ( (This)->lpVtbl -> GetStreamLatency(This,phnsLatency) )
    ( (This)->lpVtbl -> GetCurrentPadding(This,pNumPaddingFrames) )
    ( (This)->lpVtbl -> IsFormatSupported(This,ShareMode,pFormat,ppClosestMatch) )
    ( (This)->lpVtbl -> GetMixFormat(This,ppDeviceFormat) )
    ( (This)->lpVtbl -> GetDevicePeriod(This,phnsDefaultDevicePeriod,phnsMinimumDevicePeriod) )
    ( (This)->lpVtbl -> Start(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> SetEventHandle(This,eventHandle) )
    ( (This)->lpVtbl -> GetService(This,riid,ppv) )
    ( (This)->lpVtbl -> IsOffloadCapable(This,Category,pbOffloadCapable) )
    ( (This)->lpVtbl -> SetClientProperties(This,pProperties) )
    ( (This)->lpVtbl -> GetBufferSizeLimits(This,pFormat,bEventDriven,phnsMinBufferDuration,phnsMaxBufferDuration) )
typedef struct AudioClient3ActivationParams
    {
    GUID tracingContextId;
    } AudioClient3ActivationParams;
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioClient3;
    typedef struct IAudioClient3Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioClient3 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioClient3 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioClient3 * This);
        HRESULT ( STDMETHODCALLTYPE *Initialize )(
            IAudioClient3 * This,
            _In_ AUDCLNT_SHAREMODE ShareMode,
            _In_ DWORD StreamFlags,
            _In_ REFERENCE_TIME hnsBufferDuration,
            _In_ REFERENCE_TIME hnsPeriodicity,
            _In_ const WAVEFORMATEX *pFormat,
            _In_opt_ LPCGUID AudioSessionGuid);
        HRESULT ( STDMETHODCALLTYPE *GetBufferSize )(
            IAudioClient3 * This,
            _Out_ UINT32 *pNumBufferFrames);
        HRESULT ( STDMETHODCALLTYPE *GetStreamLatency )(
            IAudioClient3 * This,
            _Out_ REFERENCE_TIME *phnsLatency);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentPadding )(
            IAudioClient3 * This,
            _Out_ UINT32 *pNumPaddingFrames);
        HRESULT ( STDMETHODCALLTYPE *IsFormatSupported )(
            IAudioClient3 * This,
            _In_ AUDCLNT_SHAREMODE ShareMode,
            _In_ const WAVEFORMATEX *pFormat,
            _Out_opt_ WAVEFORMATEX **ppClosestMatch);
        HRESULT ( STDMETHODCALLTYPE *GetMixFormat )(
            IAudioClient3 * This,
            _Out_ WAVEFORMATEX **ppDeviceFormat);
        HRESULT ( STDMETHODCALLTYPE *GetDevicePeriod )(
            IAudioClient3 * This,
            _Out_opt_ REFERENCE_TIME *phnsDefaultDevicePeriod,
            _Out_opt_ REFERENCE_TIME *phnsMinimumDevicePeriod);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            IAudioClient3 * This);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            IAudioClient3 * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            IAudioClient3 * This);
        HRESULT ( STDMETHODCALLTYPE *SetEventHandle )(
            IAudioClient3 * This,
                       HANDLE eventHandle);
        HRESULT ( STDMETHODCALLTYPE *GetService )(
            IAudioClient3 * This,
            _In_ REFIID riid,
            _Out_ void **ppv);
        HRESULT ( STDMETHODCALLTYPE *IsOffloadCapable )(
            IAudioClient3 * This,
            _In_ AUDIO_STREAM_CATEGORY Category,
            _Out_ BOOL *pbOffloadCapable);
        HRESULT ( STDMETHODCALLTYPE *SetClientProperties )(
            IAudioClient3 * This,
            _In_ const AudioClientProperties *pProperties);
        HRESULT ( STDMETHODCALLTYPE *GetBufferSizeLimits )(
            IAudioClient3 * This,
            _In_ const WAVEFORMATEX *pFormat,
            _In_ BOOL bEventDriven,
            _Out_ REFERENCE_TIME *phnsMinBufferDuration,
            _Out_ REFERENCE_TIME *phnsMaxBufferDuration);
        HRESULT ( STDMETHODCALLTYPE *GetSharedModeEnginePeriod )(
            IAudioClient3 * This,
            _In_ const WAVEFORMATEX *pFormat,
            _Out_ UINT32 *pDefaultPeriodInFrames,
            _Out_ UINT32 *pFundamentalPeriodInFrames,
            _Out_ UINT32 *pMinPeriodInFrames,
            _Out_ UINT32 *pMaxPeriodInFrames);
        HRESULT ( STDMETHODCALLTYPE *GetCurrentSharedModeEnginePeriod )(
            IAudioClient3 * This,
            _Out_ WAVEFORMATEX **ppFormat,
            _Out_ UINT32 *pCurrentPeriodInFrames);
        HRESULT ( STDMETHODCALLTYPE *InitializeSharedAudioStream )(
            IAudioClient3 * This,
            _In_ DWORD StreamFlags,
            _In_ UINT32 PeriodInFrames,
            _In_ const WAVEFORMATEX *pFormat,
            _In_opt_ LPCGUID AudioSessionGuid);
        END_INTERFACE
    } IAudioClient3Vtbl;
    interface IAudioClient3
    {
        CONST_VTBL struct IAudioClient3Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Initialize(This,ShareMode,StreamFlags,hnsBufferDuration,hnsPeriodicity,pFormat,AudioSessionGuid) )
    ( (This)->lpVtbl -> GetBufferSize(This,pNumBufferFrames) )
    ( (This)->lpVtbl -> GetStreamLatency(This,phnsLatency) )
    ( (This)->lpVtbl -> GetCurrentPadding(This,pNumPaddingFrames) )
    ( (This)->lpVtbl -> IsFormatSupported(This,ShareMode,pFormat,ppClosestMatch) )
    ( (This)->lpVtbl -> GetMixFormat(This,ppDeviceFormat) )
    ( (This)->lpVtbl -> GetDevicePeriod(This,phnsDefaultDevicePeriod,phnsMinimumDevicePeriod) )
    ( (This)->lpVtbl -> Start(This) )
    ( (This)->lpVtbl -> Stop(This) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> SetEventHandle(This,eventHandle) )
    ( (This)->lpVtbl -> GetService(This,riid,ppv) )
    ( (This)->lpVtbl -> IsOffloadCapable(This,Category,pbOffloadCapable) )
    ( (This)->lpVtbl -> SetClientProperties(This,pProperties) )
    ( (This)->lpVtbl -> GetBufferSizeLimits(This,pFormat,bEventDriven,phnsMinBufferDuration,phnsMaxBufferDuration) )
    ( (This)->lpVtbl -> GetSharedModeEnginePeriod(This,pFormat,pDefaultPeriodInFrames,pFundamentalPeriodInFrames,pMinPeriodInFrames,pMaxPeriodInFrames) )
    ( (This)->lpVtbl -> GetCurrentSharedModeEnginePeriod(This,ppFormat,pCurrentPeriodInFrames) )
    ( (This)->lpVtbl -> InitializeSharedAudioStream(This,StreamFlags,PeriodInFrames,pFormat,AudioSessionGuid) )
EXTERN_C const IID IID_IAudioRenderClient;
    typedef struct IAudioRenderClientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioRenderClient * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioRenderClient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioRenderClient * This);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            IAudioRenderClient * This,
            _In_ UINT32 NumFramesRequested,
            _Outptr_result_buffer_(_Inexpressible_("NumFramesRequested * pFormat->nBlockAlign")) BYTE **ppData);
        HRESULT ( STDMETHODCALLTYPE *ReleaseBuffer )(
            IAudioRenderClient * This,
            _In_ UINT32 NumFramesWritten,
            _In_ DWORD dwFlags);
        END_INTERFACE
    } IAudioRenderClientVtbl;
    interface IAudioRenderClient
    {
        CONST_VTBL struct IAudioRenderClientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBuffer(This,NumFramesRequested,ppData) )
    ( (This)->lpVtbl -> ReleaseBuffer(This,NumFramesWritten,dwFlags) )
EXTERN_C const IID IID_IAudioCaptureClient;
    typedef struct IAudioCaptureClientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioCaptureClient * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioCaptureClient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioCaptureClient * This);
        HRESULT ( STDMETHODCALLTYPE *GetBuffer )(
            IAudioCaptureClient * This,
            _Outptr_result_buffer_(_Inexpressible_("*pNumFramesToRead * pFormat->nBlockAlign")) BYTE **ppData,
            _Out_ UINT32 *pNumFramesToRead,
            _Out_ DWORD *pdwFlags,
            _Out_opt_ UINT64 *pu64DevicePosition,
            _Out_opt_ UINT64 *pu64QPCPosition);
        HRESULT ( STDMETHODCALLTYPE *ReleaseBuffer )(
            IAudioCaptureClient * This,
            _In_ UINT32 NumFramesRead);
        HRESULT ( STDMETHODCALLTYPE *GetNextPacketSize )(
            IAudioCaptureClient * This,
            _Out_ UINT32 *pNumFramesInNextPacket);
        END_INTERFACE
    } IAudioCaptureClientVtbl;
    interface IAudioCaptureClient
    {
        CONST_VTBL struct IAudioCaptureClientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetBuffer(This,ppData,pNumFramesToRead,pdwFlags,pu64DevicePosition,pu64QPCPosition) )
    ( (This)->lpVtbl -> ReleaseBuffer(This,NumFramesRead) )
    ( (This)->lpVtbl -> GetNextPacketSize(This,pNumFramesInNextPacket) )
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioClock;
    typedef struct IAudioClockVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioClock * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioClock * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioClock * This);
        HRESULT ( STDMETHODCALLTYPE *GetFrequency )(
            IAudioClock * This,
            _Out_ UINT64 *pu64Frequency);
        HRESULT ( STDMETHODCALLTYPE *GetPosition )(
            IAudioClock * This,
            _Out_ UINT64 *pu64Position,
            _Out_opt_ UINT64 *pu64QPCPosition);
        HRESULT ( STDMETHODCALLTYPE *GetCharacteristics )(
            IAudioClock * This,
            _Out_ DWORD *pdwCharacteristics);
        END_INTERFACE
    } IAudioClockVtbl;
    interface IAudioClock
    {
        CONST_VTBL struct IAudioClockVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFrequency(This,pu64Frequency) )
    ( (This)->lpVtbl -> GetPosition(This,pu64Position,pu64QPCPosition) )
    ( (This)->lpVtbl -> GetCharacteristics(This,pdwCharacteristics) )
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioClock2;
    typedef struct IAudioClock2Vtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioClock2 * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioClock2 * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioClock2 * This);
        HRESULT ( STDMETHODCALLTYPE *GetDevicePosition )(
            IAudioClock2 * This,
            _Out_ UINT64 *DevicePosition,
            _Out_opt_ UINT64 *QPCPosition);
        END_INTERFACE
    } IAudioClock2Vtbl;
    interface IAudioClock2
    {
        CONST_VTBL struct IAudioClock2Vtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDevicePosition(This,DevicePosition,QPCPosition) )
#endif
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0007_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0007_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioClockAdjustment;
    typedef struct IAudioClockAdjustmentVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioClockAdjustment * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioClockAdjustment * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioClockAdjustment * This);
        HRESULT ( STDMETHODCALLTYPE *SetSampleRate )(
            IAudioClockAdjustment * This,
            _In_ float flSampleRate);
        END_INTERFACE
    } IAudioClockAdjustmentVtbl;
    interface IAudioClockAdjustment
    {
        CONST_VTBL struct IAudioClockAdjustmentVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetSampleRate(This,flSampleRate) )
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID IID_ISimpleAudioVolume;
    typedef struct ISimpleAudioVolumeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            ISimpleAudioVolume * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            ISimpleAudioVolume * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            ISimpleAudioVolume * This);
        HRESULT ( STDMETHODCALLTYPE *SetMasterVolume )(
            ISimpleAudioVolume * This,
            _In_ float fLevel,
                               LPCGUID EventContext);
        HRESULT ( STDMETHODCALLTYPE *GetMasterVolume )(
            ISimpleAudioVolume * This,
            _Out_ float *pfLevel);
        HRESULT ( STDMETHODCALLTYPE *SetMute )(
            ISimpleAudioVolume * This,
            _In_ const BOOL bMute,
                               LPCGUID EventContext);
        HRESULT ( STDMETHODCALLTYPE *GetMute )(
            ISimpleAudioVolume * This,
            _Out_ BOOL *pbMute);
        END_INTERFACE
    } ISimpleAudioVolumeVtbl;
    interface ISimpleAudioVolume
    {
        CONST_VTBL struct ISimpleAudioVolumeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetMasterVolume(This,fLevel,EventContext) )
    ( (This)->lpVtbl -> GetMasterVolume(This,pfLevel) )
    ( (This)->lpVtbl -> SetMute(This,bMute,EventContext) )
    ( (This)->lpVtbl -> GetMute(This,pbMute) )
#endif
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0009_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioStreamVolume;
    typedef struct IAudioStreamVolumeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioStreamVolume * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioStreamVolume * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioStreamVolume * This);
        HRESULT ( STDMETHODCALLTYPE *GetChannelCount )(
            IAudioStreamVolume * This,
            _Out_ UINT32 *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *SetChannelVolume )(
            IAudioStreamVolume * This,
            _In_ UINT32 dwIndex,
            _In_ const float fLevel);
        HRESULT ( STDMETHODCALLTYPE *GetChannelVolume )(
            IAudioStreamVolume * This,
            _In_ UINT32 dwIndex,
            _Out_ float *pfLevel);
        HRESULT ( STDMETHODCALLTYPE *SetAllVolumes )(
            IAudioStreamVolume * This,
            _In_ UINT32 dwCount,
            _In_reads_(dwCount) const float *pfVolumes);
        HRESULT ( STDMETHODCALLTYPE *GetAllVolumes )(
            IAudioStreamVolume * This,
            _In_ UINT32 dwCount,
            _Out_writes_(dwCount) float *pfVolumes);
        END_INTERFACE
    } IAudioStreamVolumeVtbl;
    interface IAudioStreamVolume
    {
        CONST_VTBL struct IAudioStreamVolumeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetChannelCount(This,pdwCount) )
    ( (This)->lpVtbl -> SetChannelVolume(This,dwIndex,fLevel) )
    ( (This)->lpVtbl -> GetChannelVolume(This,dwIndex,pfLevel) )
    ( (This)->lpVtbl -> SetAllVolumes(This,dwCount,pfVolumes) )
    ( (This)->lpVtbl -> GetAllVolumes(This,dwCount,pfVolumes) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef
enum AMBISONICS_TYPE
    {
        AMBISONICS_TYPE_FULL3D = 0
    } AMBISONICS_TYPE;
typedef
enum AMBISONICS_CHANNEL_ORDERING
    {
        AMBISONICS_CHANNEL_ORDERING_ACN = 0
    } AMBISONICS_CHANNEL_ORDERING;
typedef
enum AMBISONICS_NORMALIZATION
    {
        AMBISONICS_NORMALIZATION_SN3D = 0,
        AMBISONICS_NORMALIZATION_N3D = ( AMBISONICS_NORMALIZATION_SN3D + 1 )
    } AMBISONICS_NORMALIZATION;
typedef struct AMBISONICS_PARAMS
    {
    UINT32 u32Size;
    UINT32 u32Version;
    AMBISONICS_TYPE u32Type;
    AMBISONICS_CHANNEL_ORDERING u32ChannelOrdering;
    AMBISONICS_NORMALIZATION u32Normalization;
    UINT32 u32Order;
    UINT32 u32NumChannels;
    __field_ecount(u32NumChannels) UINT32 *pu32ChannelMap;
    } AMBISONICS_PARAMS;
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0010_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0010_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioAmbisonicsControl;
    typedef struct IAudioAmbisonicsControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAudioAmbisonicsControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAudioAmbisonicsControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAudioAmbisonicsControl * This);
        HRESULT ( STDMETHODCALLTYPE *SetData )(
            __RPC__in IAudioAmbisonicsControl * This,
                                __RPC__in_ecount_full(cbAmbisonicsParams) const AMBISONICS_PARAMS *pAmbisonicsParams,
                       UINT32 cbAmbisonicsParams);
        HRESULT ( STDMETHODCALLTYPE *SetHeadTracking )(
            __RPC__in IAudioAmbisonicsControl * This,
                       BOOL bEnableHeadTracking);
        HRESULT ( STDMETHODCALLTYPE *GetHeadTracking )(
            __RPC__in IAudioAmbisonicsControl * This,
                        __RPC__out BOOL *pbEnableHeadTracking);
        HRESULT ( STDMETHODCALLTYPE *SetRotation )(
            __RPC__in IAudioAmbisonicsControl * This,
                       float X,
                       float Y,
                       float Z,
                       float W);
        END_INTERFACE
    } IAudioAmbisonicsControlVtbl;
    interface IAudioAmbisonicsControl
    {
        CONST_VTBL struct IAudioAmbisonicsControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetData(This,pAmbisonicsParams,cbAmbisonicsParams) )
    ( (This)->lpVtbl -> SetHeadTracking(This,bEnableHeadTracking) )
    ( (This)->lpVtbl -> GetHeadTracking(This,pbEnableHeadTracking) )
    ( (This)->lpVtbl -> SetRotation(This,X,Y,Z,W) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0011_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0011_v0_0_s_ifspec;
EXTERN_C const IID IID_IChannelAudioVolume;
    typedef struct IChannelAudioVolumeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IChannelAudioVolume * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IChannelAudioVolume * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IChannelAudioVolume * This);
        HRESULT ( STDMETHODCALLTYPE *GetChannelCount )(
            IChannelAudioVolume * This,
            _Out_ UINT32 *pdwCount);
        HRESULT ( STDMETHODCALLTYPE *SetChannelVolume )(
            IChannelAudioVolume * This,
            _In_ UINT32 dwIndex,
            _In_ const float fLevel,
                               LPCGUID EventContext);
        HRESULT ( STDMETHODCALLTYPE *GetChannelVolume )(
            IChannelAudioVolume * This,
            _In_ UINT32 dwIndex,
            _Out_ float *pfLevel);
        HRESULT ( STDMETHODCALLTYPE *SetAllVolumes )(
            IChannelAudioVolume * This,
            _In_ UINT32 dwCount,
            _In_reads_(dwCount) const float *pfVolumes,
                               LPCGUID EventContext);
        HRESULT ( STDMETHODCALLTYPE *GetAllVolumes )(
            IChannelAudioVolume * This,
            _In_ UINT32 dwCount,
            _Out_writes_(dwCount) float *pfVolumes);
        END_INTERFACE
    } IChannelAudioVolumeVtbl;
    interface IChannelAudioVolume
    {
        CONST_VTBL struct IChannelAudioVolumeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetChannelCount(This,pdwCount) )
    ( (This)->lpVtbl -> SetChannelVolume(This,dwIndex,fLevel,EventContext) )
    ( (This)->lpVtbl -> GetChannelVolume(This,dwIndex,pfLevel) )
    ( (This)->lpVtbl -> SetAllVolumes(This,dwCount,pfVolumes,EventContext) )
    ( (This)->lpVtbl -> GetAllVolumes(This,dwCount,pfVolumes) )
#endif
#pragma endregion
#pragma region Application and Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP | WINAPI_PARTITION_GAMES)
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioclient_0000_0012_v0_0_s_ifspec;
}
