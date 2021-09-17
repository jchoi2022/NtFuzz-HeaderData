#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAudioEndpoint IAudioEndpoint;
typedef interface IAudioEndpointRT IAudioEndpointRT;
typedef interface IAudioInputEndpointRT IAudioInputEndpointRT;
typedef interface IAudioOutputEndpointRT IAudioOutputEndpointRT;
typedef interface IAudioDeviceEndpoint IAudioDeviceEndpoint;
typedef interface IAudioEndpointOffloadStreamVolume IAudioEndpointOffloadStreamVolume;
typedef interface IAudioEndpointOffloadStreamMute IAudioEndpointOffloadStreamMute;
typedef interface IAudioEndpointOffloadStreamMeter IAudioEndpointOffloadStreamMeter;
typedef interface IAudioEndpointLastBufferControl IAudioEndpointLastBufferControl;
typedef interface IAudioLfxControl IAudioLfxControl;
typedef interface IHardwareAudioEngineBase IHardwareAudioEngineBase;
typedef interface IAudioEndpointControl IAudioEndpointControl;
#include "oaidl.h"
#include "ocidl.h"
#include "propidl.h"
#include "audioapotypes.h"
#include "mmreg.h"
#include "mmdeviceapi.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef
enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001
    {
        eHostProcessConnector = 0,
        eOffloadConnector = ( eHostProcessConnector + 1 ) ,
        eLoopbackConnector = ( eOffloadConnector + 1 ) ,
        eKeywordDetectorConnector = ( eLoopbackConnector + 1 ) ,
        eConnectorCount = ( eKeywordDetectorConnector + 1 )
    } EndpointConnectorType;
typedef struct AUDIO_ENDPOINT_SHARED_CREATE_PARAMS
    {
    UINT32 u32Size;
    UINT32 u32TSSessionId;
    EndpointConnectorType targetEndpointConnectorType;
    WAVEFORMATEX wfxDeviceFormat;
    } AUDIO_ENDPOINT_SHARED_CREATE_PARAMS;
typedef struct AUDIO_ENDPOINT_SHARED_CREATE_PARAMS *PAUDIO_ENDPOINT_SHARED_CREATE_PARAMS;
typedef
enum AE_POSITION_FLAGS
    {
        POSITION_INVALID = 0,
        POSITION_DISCONTINUOUS = 1,
        POSITION_CONTINUOUS = 2,
        POSITION_QPC_ERROR = 4
    } AE_POSITION_FLAGS;
typedef struct AE_CURRENT_POSITION
    {
    UINT64 u64DevicePosition;
    UINT64 u64StreamPosition;
    UINT64 u64PaddingFrames;
    HNSTIME hnsQPCPosition;
    FLOAT32 f32FramesPerSecond;
    AE_POSITION_FLAGS Flag;
    } AE_CURRENT_POSITION;
typedef struct AE_CURRENT_POSITION *PAE_CURRENT_POSITION;
extern RPC_IF_HANDLE __MIDL_itf_audioengineendpoint_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioengineendpoint_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioEndpoint;
    typedef struct IAudioEndpointVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioEndpoint * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioEndpoint * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioEndpoint * This);
        HRESULT ( STDMETHODCALLTYPE *GetFrameFormat )(
            IAudioEndpoint * This,
                        WAVEFORMATEX **ppFormat);
        HRESULT ( STDMETHODCALLTYPE *GetFramesPerPacket )(
            IAudioEndpoint * This,
                        UINT32 *pFramesPerPacket);
        HRESULT ( STDMETHODCALLTYPE *GetLatency )(
            IAudioEndpoint * This,
                        HNSTIME *pLatency);
        HRESULT ( STDMETHODCALLTYPE *SetStreamFlags )(
            IAudioEndpoint * This,
                       DWORD streamFlags);
        HRESULT ( STDMETHODCALLTYPE *SetEventHandle )(
            IAudioEndpoint * This,
                       HANDLE eventHandle);
        END_INTERFACE
    } IAudioEndpointVtbl;
    interface IAudioEndpoint
    {
        CONST_VTBL struct IAudioEndpointVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetFrameFormat(This,ppFormat) )
    ( (This)->lpVtbl -> GetFramesPerPacket(This,pFramesPerPacket) )
    ( (This)->lpVtbl -> GetLatency(This,pLatency) )
    ( (This)->lpVtbl -> SetStreamFlags(This,streamFlags) )
    ( (This)->lpVtbl -> SetEventHandle(This,eventHandle) )
EXTERN_C const IID IID_IAudioEndpointRT;
    typedef struct IAudioEndpointRTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioEndpointRT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioEndpointRT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioEndpointRT * This);
        void ( STDMETHODCALLTYPE *GetCurrentPadding )(
            IAudioEndpointRT * This,
                        HNSTIME *pPadding,
                        AE_CURRENT_POSITION *pAeCurrentPosition);
        void ( STDMETHODCALLTYPE *ProcessingComplete )(
            IAudioEndpointRT * This);
        HRESULT ( STDMETHODCALLTYPE *SetPinInactive )(
            IAudioEndpointRT * This);
        HRESULT ( STDMETHODCALLTYPE *SetPinActive )(
            IAudioEndpointRT * This);
        END_INTERFACE
    } IAudioEndpointRTVtbl;
    interface IAudioEndpointRT
    {
        CONST_VTBL struct IAudioEndpointRTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCurrentPadding(This,pPadding,pAeCurrentPosition) )
    ( (This)->lpVtbl -> ProcessingComplete(This) )
    ( (This)->lpVtbl -> SetPinInactive(This) )
    ( (This)->lpVtbl -> SetPinActive(This) )
EXTERN_C const IID IID_IAudioInputEndpointRT;
    typedef struct IAudioInputEndpointRTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioInputEndpointRT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioInputEndpointRT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioInputEndpointRT * This);
        void ( STDMETHODCALLTYPE *GetInputDataPointer )(
            IAudioInputEndpointRT * This,
                            APO_CONNECTION_PROPERTY *pConnectionProperty,
                            AE_CURRENT_POSITION *pAeTimeStamp);
        void ( STDMETHODCALLTYPE *ReleaseInputDataPointer )(
            IAudioInputEndpointRT * This,
                       UINT32 u32FrameCount,
                       UINT_PTR pDataPointer);
        void ( STDMETHODCALLTYPE *PulseEndpoint )(
            IAudioInputEndpointRT * This);
        END_INTERFACE
    } IAudioInputEndpointRTVtbl;
    interface IAudioInputEndpointRT
    {
        CONST_VTBL struct IAudioInputEndpointRTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetInputDataPointer(This,pConnectionProperty,pAeTimeStamp) )
    ( (This)->lpVtbl -> ReleaseInputDataPointer(This,u32FrameCount,pDataPointer) )
    ( (This)->lpVtbl -> PulseEndpoint(This) )
EXTERN_C const IID IID_IAudioOutputEndpointRT;
    typedef struct IAudioOutputEndpointRTVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioOutputEndpointRT * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioOutputEndpointRT * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioOutputEndpointRT * This);
        UINT_PTR ( STDMETHODCALLTYPE *GetOutputDataPointer )(
            IAudioOutputEndpointRT * This,
                       UINT32 u32FrameCount,
                       AE_CURRENT_POSITION *pAeTimeStamp);
        void ( STDMETHODCALLTYPE *ReleaseOutputDataPointer )(
            IAudioOutputEndpointRT * This,
                       const APO_CONNECTION_PROPERTY *pConnectionProperty);
        void ( STDMETHODCALLTYPE *PulseEndpoint )(
            IAudioOutputEndpointRT * This);
        END_INTERFACE
    } IAudioOutputEndpointRTVtbl;
    interface IAudioOutputEndpointRT
    {
        CONST_VTBL struct IAudioOutputEndpointRTVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetOutputDataPointer(This,u32FrameCount,pAeTimeStamp) )
    ( (This)->lpVtbl -> ReleaseOutputDataPointer(This,pConnectionProperty) )
    ( (This)->lpVtbl -> PulseEndpoint(This) )
EXTERN_C const IID IID_IAudioDeviceEndpoint;
    typedef struct IAudioDeviceEndpointVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioDeviceEndpoint * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioDeviceEndpoint * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioDeviceEndpoint * This);
        HRESULT ( STDMETHODCALLTYPE *SetBuffer )(
            IAudioDeviceEndpoint * This,
                       HNSTIME MaxPeriod,
                       UINT32 u32LatencyCoefficient);
        HRESULT ( STDMETHODCALLTYPE *GetRTCaps )(
            IAudioDeviceEndpoint * This,
                        BOOL *pbIsRTCapable);
        HRESULT ( STDMETHODCALLTYPE *GetEventDrivenCapable )(
            IAudioDeviceEndpoint * This,
                        BOOL *pbisEventCapable);
        HRESULT ( STDMETHODCALLTYPE *WriteExclusiveModeParametersToSharedMemory )(
            IAudioDeviceEndpoint * This,
                       UINT_PTR hTargetProcess,
                       HNSTIME hnsPeriod,
                       HNSTIME hnsBufferDuration,
                       UINT32 u32LatencyCoefficient,
                        UINT32 *pu32SharedMemorySize,
                        UINT_PTR *phSharedMemory);
        END_INTERFACE
    } IAudioDeviceEndpointVtbl;
    interface IAudioDeviceEndpoint
    {
        CONST_VTBL struct IAudioDeviceEndpointVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetBuffer(This,MaxPeriod,u32LatencyCoefficient) )
    ( (This)->lpVtbl -> GetRTCaps(This,pbIsRTCapable) )
    ( (This)->lpVtbl -> GetEventDrivenCapable(This,pbisEventCapable) )
    ( (This)->lpVtbl -> WriteExclusiveModeParametersToSharedMemory(This,hTargetProcess,hnsPeriod,hnsBufferDuration,u32LatencyCoefficient,pu32SharedMemorySize,phSharedMemory) )
EXTERN_C const IID IID_IAudioEndpointOffloadStreamVolume;
    typedef struct IAudioEndpointOffloadStreamVolumeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioEndpointOffloadStreamVolume * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioEndpointOffloadStreamVolume * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioEndpointOffloadStreamVolume * This);
        HRESULT ( STDMETHODCALLTYPE *GetVolumeChannelCount )(
            IAudioEndpointOffloadStreamVolume * This,
                        UINT32 *pu32ChannelCount);
        HRESULT ( STDMETHODCALLTYPE *SetChannelVolumes )(
            IAudioEndpointOffloadStreamVolume * This,
                       UINT32 u32ChannelCount,
                       FLOAT32 *pf32Volumes,
                       AUDIO_CURVE_TYPE u32CurveType,
                       HNSTIME *pCurveDuration);
        HRESULT ( STDMETHODCALLTYPE *GetChannelVolumes )(
            IAudioEndpointOffloadStreamVolume * This,
                       UINT32 u32ChannelCount,
                        FLOAT32 *pf32Volumes);
        END_INTERFACE
    } IAudioEndpointOffloadStreamVolumeVtbl;
    interface IAudioEndpointOffloadStreamVolume
    {
        CONST_VTBL struct IAudioEndpointOffloadStreamVolumeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetVolumeChannelCount(This,pu32ChannelCount) )
    ( (This)->lpVtbl -> SetChannelVolumes(This,u32ChannelCount,pf32Volumes,u32CurveType,pCurveDuration) )
    ( (This)->lpVtbl -> GetChannelVolumes(This,u32ChannelCount,pf32Volumes) )
EXTERN_C const IID IID_IAudioEndpointOffloadStreamMute;
    typedef struct IAudioEndpointOffloadStreamMuteVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioEndpointOffloadStreamMute * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioEndpointOffloadStreamMute * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioEndpointOffloadStreamMute * This);
        HRESULT ( STDMETHODCALLTYPE *SetMute )(
            IAudioEndpointOffloadStreamMute * This,
                       boolean bMuted);
        HRESULT ( STDMETHODCALLTYPE *GetMute )(
            IAudioEndpointOffloadStreamMute * This,
                        boolean *pbMuted);
        END_INTERFACE
    } IAudioEndpointOffloadStreamMuteVtbl;
    interface IAudioEndpointOffloadStreamMute
    {
        CONST_VTBL struct IAudioEndpointOffloadStreamMuteVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetMute(This,bMuted) )
    ( (This)->lpVtbl -> GetMute(This,pbMuted) )
EXTERN_C const IID IID_IAudioEndpointOffloadStreamMeter;
    typedef struct IAudioEndpointOffloadStreamMeterVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioEndpointOffloadStreamMeter * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioEndpointOffloadStreamMeter * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioEndpointOffloadStreamMeter * This);
        HRESULT ( STDMETHODCALLTYPE *GetMeterChannelCount )(
            IAudioEndpointOffloadStreamMeter * This,
                        UINT32 *pu32ChannelCount);
        HRESULT ( STDMETHODCALLTYPE *GetMeteringData )(
            IAudioEndpointOffloadStreamMeter * This,
                       UINT32 u32ChannelCount,
                        FLOAT32 *pf32PeakValues);
        END_INTERFACE
    } IAudioEndpointOffloadStreamMeterVtbl;
    interface IAudioEndpointOffloadStreamMeter
    {
        CONST_VTBL struct IAudioEndpointOffloadStreamMeterVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetMeterChannelCount(This,pu32ChannelCount) )
    ( (This)->lpVtbl -> GetMeteringData(This,u32ChannelCount,pf32PeakValues) )
EXTERN_C const IID IID_IAudioEndpointLastBufferControl;
    typedef struct IAudioEndpointLastBufferControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioEndpointLastBufferControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioEndpointLastBufferControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioEndpointLastBufferControl * This);
        BOOL ( STDMETHODCALLTYPE *IsLastBufferControlSupported )(
            IAudioEndpointLastBufferControl * This);
        void ( STDMETHODCALLTYPE *ReleaseOutputDataPointerForLastBuffer )(
            IAudioEndpointLastBufferControl * This,
                       const APO_CONNECTION_PROPERTY *pConnectionProperty);
        END_INTERFACE
    } IAudioEndpointLastBufferControlVtbl;
    interface IAudioEndpointLastBufferControl
    {
        CONST_VTBL struct IAudioEndpointLastBufferControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> IsLastBufferControlSupported(This) )
    ( (This)->lpVtbl -> ReleaseOutputDataPointerForLastBuffer(This,pConnectionProperty) )
EXTERN_C const IID IID_IAudioLfxControl;
    typedef struct IAudioLfxControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioLfxControl * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioLfxControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioLfxControl * This);
        HRESULT ( STDMETHODCALLTYPE *SetLocalEffectsState )(
            IAudioLfxControl * This,
                       BOOL bEnabled);
        HRESULT ( STDMETHODCALLTYPE *GetLocalEffectsState )(
            IAudioLfxControl * This,
                        BOOL *pbEnabled);
        END_INTERFACE
    } IAudioLfxControlVtbl;
    interface IAudioLfxControl
    {
        CONST_VTBL struct IAudioLfxControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> SetLocalEffectsState(This,bEnabled) )
    ( (This)->lpVtbl -> GetLocalEffectsState(This,pbEnabled) )
EXTERN_C const IID IID_IHardwareAudioEngineBase;
    typedef struct IHardwareAudioEngineBaseVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IHardwareAudioEngineBase * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IHardwareAudioEngineBase * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IHardwareAudioEngineBase * This);
        HRESULT ( STDMETHODCALLTYPE *GetAvailableOffloadConnectorCount )(
            IHardwareAudioEngineBase * This,
            _In_ LPWSTR _pwstrDeviceId,
            _In_ UINT32 _uConnectorId,
            _Out_ UINT32 *_pAvailableConnectorInstanceCount);
        HRESULT ( STDMETHODCALLTYPE *GetEngineFormat )(
            IHardwareAudioEngineBase * This,
            _In_ IMMDevice *pDevice,
            _In_ BOOL _bRequestDeviceFormat,
                        WAVEFORMATEX **_ppwfxFormat);
        HRESULT ( STDMETHODCALLTYPE *SetEngineDeviceFormat )(
            IHardwareAudioEngineBase * This,
            _In_ IMMDevice *pDevice,
                       WAVEFORMATEX *_pwfxFormat);
        HRESULT ( STDMETHODCALLTYPE *SetGfxState )(
            IHardwareAudioEngineBase * This,
            _In_ IMMDevice *pDevice,
            _In_ BOOL _bEnable);
        HRESULT ( STDMETHODCALLTYPE *GetGfxState )(
            IHardwareAudioEngineBase * This,
            _In_ IMMDevice *pDevice,
            _Out_ BOOL *_pbEnable);
        END_INTERFACE
    } IHardwareAudioEngineBaseVtbl;
    interface IHardwareAudioEngineBase
    {
        CONST_VTBL struct IHardwareAudioEngineBaseVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetAvailableOffloadConnectorCount(This,_pwstrDeviceId,_uConnectorId,_pAvailableConnectorInstanceCount) )
    ( (This)->lpVtbl -> GetEngineFormat(This,pDevice,_bRequestDeviceFormat,_ppwfxFormat) )
    ( (This)->lpVtbl -> SetEngineDeviceFormat(This,pDevice,_pwfxFormat) )
    ( (This)->lpVtbl -> SetGfxState(This,pDevice,_bEnable) )
    ( (This)->lpVtbl -> GetGfxState(This,pDevice,_pbEnable) )
EXTERN_C const IID IID_IAudioEndpointControl;
    typedef struct IAudioEndpointControlVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            __RPC__in IAudioEndpointControl * This,
                       __RPC__in REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            __RPC__in IAudioEndpointControl * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            __RPC__in IAudioEndpointControl * This);
        HRESULT ( STDMETHODCALLTYPE *Start )(
            __RPC__in IAudioEndpointControl * This);
        HRESULT ( STDMETHODCALLTYPE *Reset )(
            __RPC__in IAudioEndpointControl * This);
        HRESULT ( STDMETHODCALLTYPE *Stop )(
            __RPC__in IAudioEndpointControl * This);
        END_INTERFACE
    } IAudioEndpointControlVtbl;
    interface IAudioEndpointControl
    {
        CONST_VTBL struct IAudioEndpointControlVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Start(This) )
    ( (This)->lpVtbl -> Reset(This) )
    ( (This)->lpVtbl -> Stop(This) )
    0X9F2F7B66l, 0X65AC, 0X4FA6, 0X8A, 0XE4, 0X12, 0X3C, 0X78, 0XB8, 0X93, 0X13
DEFINE_GUIDSTRUCT("9F2F7B66-65AC-4FA6-8AE4-123C78B89313", DEVINTERFACE_AUDIOENDPOINTPLUGIN);
DEFINE_PROPERTYKEY(DEVPKEY_AudioEndpointPlugin_FactoryCLSID, 0x12d83bd7, 0xcf12, 0x46be, 0x85, 0x40, 0x81, 0x27, 0x10, 0xd3, 0x2, 0x1c, 1);
DEFINE_PROPERTYKEY(DEVPKEY_AudioEndpointPlugin_DataFlow, 0x12d83bd7, 0xcf12, 0x46be, 0x85, 0x40, 0x81, 0x27, 0x10, 0xd3, 0x2, 0x1c, 2);
DEFINE_PROPERTYKEY(DEVPKEY_AudioEndpointPlugin_PnPInterface, 0x12d83bd7, 0xcf12, 0x46be, 0x85, 0x40, 0x81, 0x27, 0x10, 0xd3, 0x2, 0x1c, 3);
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_audioengineendpoint_0000_0012_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_audioengineendpoint_0000_0012_v0_0_s_ifspec;
}
