#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IAudioEndpointVolumeCallback IAudioEndpointVolumeCallback;
typedef interface IAudioEndpointVolume IAudioEndpointVolume;
typedef interface IAudioEndpointVolumeEx IAudioEndpointVolumeEx;
typedef interface IAudioMeterInformation IAudioMeterInformation;
#include "unknwn.h"
#include "devicetopology.h"
extern "C"{
#include <winapifamily.h>
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
typedef struct AUDIO_VOLUME_NOTIFICATION_DATA
    {
    GUID guidEventContext;
    BOOL bMuted;
    float fMasterVolume;
    UINT nChannels;
    float afChannelVolumes[ 1 ];
    } AUDIO_VOLUME_NOTIFICATION_DATA;
typedef struct AUDIO_VOLUME_NOTIFICATION_DATA *PAUDIO_VOLUME_NOTIFICATION_DATA;
extern RPC_IF_HANDLE __MIDL_itf_endpointvolume_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_endpointvolume_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioEndpointVolumeCallback;
    typedef struct IAudioEndpointVolumeCallbackVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioEndpointVolumeCallback * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioEndpointVolumeCallback * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioEndpointVolumeCallback * This);
        HRESULT ( STDMETHODCALLTYPE *OnNotify )(
            IAudioEndpointVolumeCallback * This,
            PAUDIO_VOLUME_NOTIFICATION_DATA pNotify);
        END_INTERFACE
    } IAudioEndpointVolumeCallbackVtbl;
    interface IAudioEndpointVolumeCallback
    {
        CONST_VTBL struct IAudioEndpointVolumeCallbackVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnNotify(This,pNotify) )
EXTERN_C const IID IID_IAudioEndpointVolume;
    typedef struct IAudioEndpointVolumeVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioEndpointVolume * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioEndpointVolume * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioEndpointVolume * This);
                           HRESULT ( STDMETHODCALLTYPE *RegisterControlChangeNotify )(
            IAudioEndpointVolume * This,
            _In_ IAudioEndpointVolumeCallback *pNotify);
                           HRESULT ( STDMETHODCALLTYPE *UnregisterControlChangeNotify )(
            IAudioEndpointVolume * This,
            _In_ IAudioEndpointVolumeCallback *pNotify);
                           HRESULT ( STDMETHODCALLTYPE *GetChannelCount )(
            IAudioEndpointVolume * This,
            _Out_ UINT *pnChannelCount);
                           HRESULT ( STDMETHODCALLTYPE *SetMasterVolumeLevel )(
            IAudioEndpointVolume * This,
            _In_ float fLevelDB,
                               LPCGUID pguidEventContext);
                           HRESULT ( STDMETHODCALLTYPE *SetMasterVolumeLevelScalar )(
            IAudioEndpointVolume * This,
            _In_ float fLevel,
                               LPCGUID pguidEventContext);
                           HRESULT ( STDMETHODCALLTYPE *GetMasterVolumeLevel )(
            IAudioEndpointVolume * This,
            _Out_ float *pfLevelDB);
                           HRESULT ( STDMETHODCALLTYPE *GetMasterVolumeLevelScalar )(
            IAudioEndpointVolume * This,
            _Out_ float *pfLevel);
                           HRESULT ( STDMETHODCALLTYPE *SetChannelVolumeLevel )(
            IAudioEndpointVolume * This,
            _In_ UINT nChannel,
            float fLevelDB,
                               LPCGUID pguidEventContext);
                           HRESULT ( STDMETHODCALLTYPE *SetChannelVolumeLevelScalar )(
            IAudioEndpointVolume * This,
            _In_ UINT nChannel,
            float fLevel,
                               LPCGUID pguidEventContext);
                           HRESULT ( STDMETHODCALLTYPE *GetChannelVolumeLevel )(
            IAudioEndpointVolume * This,
            _In_ UINT nChannel,
            _Out_ float *pfLevelDB);
                           HRESULT ( STDMETHODCALLTYPE *GetChannelVolumeLevelScalar )(
            IAudioEndpointVolume * This,
            _In_ UINT nChannel,
            _Out_ float *pfLevel);
                           HRESULT ( STDMETHODCALLTYPE *SetMute )(
            IAudioEndpointVolume * This,
            _In_ BOOL bMute,
                               LPCGUID pguidEventContext);
                           HRESULT ( STDMETHODCALLTYPE *GetMute )(
            IAudioEndpointVolume * This,
            _Out_ BOOL *pbMute);
                           HRESULT ( STDMETHODCALLTYPE *GetVolumeStepInfo )(
            IAudioEndpointVolume * This,
            _Out_ UINT *pnStep,
            _Out_ UINT *pnStepCount);
                           HRESULT ( STDMETHODCALLTYPE *VolumeStepUp )(
            IAudioEndpointVolume * This,
                               LPCGUID pguidEventContext);
                           HRESULT ( STDMETHODCALLTYPE *VolumeStepDown )(
            IAudioEndpointVolume * This,
                               LPCGUID pguidEventContext);
                           HRESULT ( STDMETHODCALLTYPE *QueryHardwareSupport )(
            IAudioEndpointVolume * This,
            _Out_ DWORD *pdwHardwareSupportMask);
                           HRESULT ( STDMETHODCALLTYPE *GetVolumeRange )(
            IAudioEndpointVolume * This,
            _Out_ float *pflVolumeMindB,
            _Out_ float *pflVolumeMaxdB,
            _Out_ float *pflVolumeIncrementdB);
        END_INTERFACE
    } IAudioEndpointVolumeVtbl;
    interface IAudioEndpointVolume
    {
        CONST_VTBL struct IAudioEndpointVolumeVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterControlChangeNotify(This,pNotify) )
    ( (This)->lpVtbl -> UnregisterControlChangeNotify(This,pNotify) )
    ( (This)->lpVtbl -> GetChannelCount(This,pnChannelCount) )
    ( (This)->lpVtbl -> SetMasterVolumeLevel(This,fLevelDB,pguidEventContext) )
    ( (This)->lpVtbl -> SetMasterVolumeLevelScalar(This,fLevel,pguidEventContext) )
    ( (This)->lpVtbl -> GetMasterVolumeLevel(This,pfLevelDB) )
    ( (This)->lpVtbl -> GetMasterVolumeLevelScalar(This,pfLevel) )
    ( (This)->lpVtbl -> SetChannelVolumeLevel(This,nChannel,fLevelDB,pguidEventContext) )
    ( (This)->lpVtbl -> SetChannelVolumeLevelScalar(This,nChannel,fLevel,pguidEventContext) )
    ( (This)->lpVtbl -> GetChannelVolumeLevel(This,nChannel,pfLevelDB) )
    ( (This)->lpVtbl -> GetChannelVolumeLevelScalar(This,nChannel,pfLevel) )
    ( (This)->lpVtbl -> SetMute(This,bMute,pguidEventContext) )
    ( (This)->lpVtbl -> GetMute(This,pbMute) )
    ( (This)->lpVtbl -> GetVolumeStepInfo(This,pnStep,pnStepCount) )
    ( (This)->lpVtbl -> VolumeStepUp(This,pguidEventContext) )
    ( (This)->lpVtbl -> VolumeStepDown(This,pguidEventContext) )
    ( (This)->lpVtbl -> QueryHardwareSupport(This,pdwHardwareSupportMask) )
    ( (This)->lpVtbl -> GetVolumeRange(This,pflVolumeMindB,pflVolumeMaxdB,pflVolumeIncrementdB) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_endpointvolume_0000_0002_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_endpointvolume_0000_0002_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioEndpointVolumeEx;
    typedef struct IAudioEndpointVolumeExVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioEndpointVolumeEx * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioEndpointVolumeEx * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioEndpointVolumeEx * This);
                           HRESULT ( STDMETHODCALLTYPE *RegisterControlChangeNotify )(
            IAudioEndpointVolumeEx * This,
            _In_ IAudioEndpointVolumeCallback *pNotify);
                           HRESULT ( STDMETHODCALLTYPE *UnregisterControlChangeNotify )(
            IAudioEndpointVolumeEx * This,
            _In_ IAudioEndpointVolumeCallback *pNotify);
                           HRESULT ( STDMETHODCALLTYPE *GetChannelCount )(
            IAudioEndpointVolumeEx * This,
            _Out_ UINT *pnChannelCount);
                           HRESULT ( STDMETHODCALLTYPE *SetMasterVolumeLevel )(
            IAudioEndpointVolumeEx * This,
            _In_ float fLevelDB,
                               LPCGUID pguidEventContext);
                           HRESULT ( STDMETHODCALLTYPE *SetMasterVolumeLevelScalar )(
            IAudioEndpointVolumeEx * This,
            _In_ float fLevel,
                               LPCGUID pguidEventContext);
                           HRESULT ( STDMETHODCALLTYPE *GetMasterVolumeLevel )(
            IAudioEndpointVolumeEx * This,
            _Out_ float *pfLevelDB);
                           HRESULT ( STDMETHODCALLTYPE *GetMasterVolumeLevelScalar )(
            IAudioEndpointVolumeEx * This,
            _Out_ float *pfLevel);
                           HRESULT ( STDMETHODCALLTYPE *SetChannelVolumeLevel )(
            IAudioEndpointVolumeEx * This,
            _In_ UINT nChannel,
            float fLevelDB,
                               LPCGUID pguidEventContext);
                           HRESULT ( STDMETHODCALLTYPE *SetChannelVolumeLevelScalar )(
            IAudioEndpointVolumeEx * This,
            _In_ UINT nChannel,
            float fLevel,
                               LPCGUID pguidEventContext);
                           HRESULT ( STDMETHODCALLTYPE *GetChannelVolumeLevel )(
            IAudioEndpointVolumeEx * This,
            _In_ UINT nChannel,
            _Out_ float *pfLevelDB);
                           HRESULT ( STDMETHODCALLTYPE *GetChannelVolumeLevelScalar )(
            IAudioEndpointVolumeEx * This,
            _In_ UINT nChannel,
            _Out_ float *pfLevel);
                           HRESULT ( STDMETHODCALLTYPE *SetMute )(
            IAudioEndpointVolumeEx * This,
            _In_ BOOL bMute,
                               LPCGUID pguidEventContext);
                           HRESULT ( STDMETHODCALLTYPE *GetMute )(
            IAudioEndpointVolumeEx * This,
            _Out_ BOOL *pbMute);
                           HRESULT ( STDMETHODCALLTYPE *GetVolumeStepInfo )(
            IAudioEndpointVolumeEx * This,
            _Out_ UINT *pnStep,
            _Out_ UINT *pnStepCount);
                           HRESULT ( STDMETHODCALLTYPE *VolumeStepUp )(
            IAudioEndpointVolumeEx * This,
                               LPCGUID pguidEventContext);
                           HRESULT ( STDMETHODCALLTYPE *VolumeStepDown )(
            IAudioEndpointVolumeEx * This,
                               LPCGUID pguidEventContext);
                           HRESULT ( STDMETHODCALLTYPE *QueryHardwareSupport )(
            IAudioEndpointVolumeEx * This,
            _Out_ DWORD *pdwHardwareSupportMask);
                           HRESULT ( STDMETHODCALLTYPE *GetVolumeRange )(
            IAudioEndpointVolumeEx * This,
            _Out_ float *pflVolumeMindB,
            _Out_ float *pflVolumeMaxdB,
            _Out_ float *pflVolumeIncrementdB);
                           HRESULT ( STDMETHODCALLTYPE *GetVolumeRangeChannel )(
            IAudioEndpointVolumeEx * This,
                       UINT iChannel,
            _Out_ float *pflVolumeMindB,
            _Out_ float *pflVolumeMaxdB,
            _Out_ float *pflVolumeIncrementdB);
        END_INTERFACE
    } IAudioEndpointVolumeExVtbl;
    interface IAudioEndpointVolumeEx
    {
        CONST_VTBL struct IAudioEndpointVolumeExVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> RegisterControlChangeNotify(This,pNotify) )
    ( (This)->lpVtbl -> UnregisterControlChangeNotify(This,pNotify) )
    ( (This)->lpVtbl -> GetChannelCount(This,pnChannelCount) )
    ( (This)->lpVtbl -> SetMasterVolumeLevel(This,fLevelDB,pguidEventContext) )
    ( (This)->lpVtbl -> SetMasterVolumeLevelScalar(This,fLevel,pguidEventContext) )
    ( (This)->lpVtbl -> GetMasterVolumeLevel(This,pfLevelDB) )
    ( (This)->lpVtbl -> GetMasterVolumeLevelScalar(This,pfLevel) )
    ( (This)->lpVtbl -> SetChannelVolumeLevel(This,nChannel,fLevelDB,pguidEventContext) )
    ( (This)->lpVtbl -> SetChannelVolumeLevelScalar(This,nChannel,fLevel,pguidEventContext) )
    ( (This)->lpVtbl -> GetChannelVolumeLevel(This,nChannel,pfLevelDB) )
    ( (This)->lpVtbl -> GetChannelVolumeLevelScalar(This,nChannel,pfLevel) )
    ( (This)->lpVtbl -> SetMute(This,bMute,pguidEventContext) )
    ( (This)->lpVtbl -> GetMute(This,pbMute) )
    ( (This)->lpVtbl -> GetVolumeStepInfo(This,pnStep,pnStepCount) )
    ( (This)->lpVtbl -> VolumeStepUp(This,pguidEventContext) )
    ( (This)->lpVtbl -> VolumeStepDown(This,pguidEventContext) )
    ( (This)->lpVtbl -> QueryHardwareSupport(This,pdwHardwareSupportMask) )
    ( (This)->lpVtbl -> GetVolumeRange(This,pflVolumeMindB,pflVolumeMaxdB,pflVolumeIncrementdB) )
    ( (This)->lpVtbl -> GetVolumeRangeChannel(This,iChannel,pflVolumeMindB,pflVolumeMaxdB,pflVolumeIncrementdB) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_endpointvolume_0000_0003_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_endpointvolume_0000_0003_v0_0_s_ifspec;
EXTERN_C const IID IID_IAudioMeterInformation;
    typedef struct IAudioMeterInformationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IAudioMeterInformation * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IAudioMeterInformation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IAudioMeterInformation * This);
                           HRESULT ( STDMETHODCALLTYPE *GetPeakValue )(
            IAudioMeterInformation * This,
                        float *pfPeak);
                           HRESULT ( STDMETHODCALLTYPE *GetMeteringChannelCount )(
            IAudioMeterInformation * This,
            _Out_ UINT *pnChannelCount);
                           HRESULT ( STDMETHODCALLTYPE *GetChannelsPeakValues )(
            IAudioMeterInformation * This,
                       UINT32 u32ChannelCount,
                                 float *afPeakValues);
                           HRESULT ( STDMETHODCALLTYPE *QueryHardwareSupport )(
            IAudioMeterInformation * This,
            _Out_ DWORD *pdwHardwareSupportMask);
        END_INTERFACE
    } IAudioMeterInformationVtbl;
    interface IAudioMeterInformation
    {
        CONST_VTBL struct IAudioMeterInformationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetPeakValue(This,pfPeak) )
    ( (This)->lpVtbl -> GetMeteringChannelCount(This,pnChannelCount) )
    ( (This)->lpVtbl -> GetChannelsPeakValues(This,u32ChannelCount,afPeakValues) )
    ( (This)->lpVtbl -> QueryHardwareSupport(This,pdwHardwareSupportMask) )
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_endpointvolume_0000_0004_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_endpointvolume_0000_0004_v0_0_s_ifspec;
}
