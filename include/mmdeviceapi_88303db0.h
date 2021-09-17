#include "rpc.h"
#include "rpcndr.h"
#error this stub requires an updated version of <rpcndr.h>
#include "windows.h"
#include "ole2.h"
typedef interface IMMNotificationClient IMMNotificationClient;
typedef interface IMMDevice IMMDevice;
typedef interface IMMDeviceCollection IMMDeviceCollection;
typedef interface IMMEndpoint IMMEndpoint;
typedef interface IMMDeviceEnumerator IMMDeviceEnumerator;
typedef interface IMMDeviceActivator IMMDeviceActivator;
typedef interface IActivateAudioInterfaceCompletionHandler IActivateAudioInterfaceCompletionHandler;
typedef interface IActivateAudioInterfaceAsyncOperation IActivateAudioInterfaceAsyncOperation;
typedef class MMDeviceEnumerator MMDeviceEnumerator;
#include "unknwn.h"
#include "propsys.h"
extern "C"{
#include <winapifamily.h>
#pragma region Desktop or Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_FormFactor, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 0);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_ControlPanelPageProvider, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 1);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_Association, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 2);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_PhysicalSpeakers, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 3);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_GUID, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 4);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_Disable_SysFx, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 5);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_FullRangeSpeakers, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 6);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_Supports_EventDriven_Mode, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 7);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_JackSubType, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 8);
DEFINE_PROPERTYKEY(PKEY_AudioEndpoint_Default_VolumeInDb, 0x1da5d803, 0xd492, 0x4edd, 0x8c, 0x23, 0xe0, 0xc0, 0xff, 0xee, 0x7f, 0x0e, 9);
DEFINE_PROPERTYKEY(PKEY_AudioEngine_DeviceFormat, 0xf19f064d, 0x82c, 0x4e27, 0xbc, 0x73, 0x68, 0x82, 0xa1, 0xbb, 0x8e, 0x4c, 0);
DEFINE_PROPERTYKEY(PKEY_AudioEngine_OEMFormat, 0xe4870e26, 0x3cc5, 0x4cd2, 0xba, 0x46, 0xca, 0xa, 0x9a, 0x70, 0xed, 0x4, 3);
DEFINE_PROPERTYKEY(PKEY_AudioEndpointLogo_IconEffects, 0xf1ab780d, 0x2010, 0x4ed3, 0xa3, 0xa6, 0x8b, 0x87, 0xf0, 0xf0, 0xc4, 0x76, 0);
DEFINE_PROPERTYKEY(PKEY_AudioEndpointLogo_IconPath, 0xf1ab780d, 0x2010, 0x4ed3, 0xa3, 0xa6, 0x8b, 0x87, 0xf0, 0xf0, 0xc4, 0x76, 1);
DEFINE_PROPERTYKEY(PKEY_AudioEndpointSettings_MenuText, 0x14242002, 0x0320, 0x4de4, 0x95, 0x55, 0xa7, 0xd8, 0x2b, 0x73, 0xc2, 0x86, 0);
DEFINE_PROPERTYKEY(PKEY_AudioEndpointSettings_LaunchContract, 0x14242002, 0x0320, 0x4de4, 0x95, 0x55, 0xa7, 0xd8, 0x2b, 0x73, 0xc2, 0x86, 1);
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct tagDIRECTX_AUDIO_ACTIVATION_PARAMS
    {
    DWORD cbDirectXAudioActivationParams;
    GUID guidAudioSession;
    DWORD dwAudioStreamFlags;
    } DIRECTX_AUDIO_ACTIVATION_PARAMS;
typedef struct tagDIRECTX_AUDIO_ACTIVATION_PARAMS *PDIRECTX_AUDIO_ACTIVATION_PARAMS;
#endif
typedef
enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001
    {
        eRender = 0,
        eCapture = ( eRender + 1 ) ,
        eAll = ( eCapture + 1 ) ,
        EDataFlow_enum_count = ( eAll + 1 )
    } EDataFlow;
typedef
enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0002
    {
        eConsole = 0,
        eMultimedia = ( eConsole + 1 ) ,
        eCommunications = ( eMultimedia + 1 ) ,
        ERole_enum_count = ( eCommunications + 1 )
    } ERole;
typedef
enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003
    {
        RemoteNetworkDevice = 0,
        Speakers = ( RemoteNetworkDevice + 1 ) ,
        LineLevel = ( Speakers + 1 ) ,
        Headphones = ( LineLevel + 1 ) ,
        Microphone = ( Headphones + 1 ) ,
        Headset = ( Microphone + 1 ) ,
        Handset = ( Headset + 1 ) ,
        UnknownDigitalPassthrough = ( Handset + 1 ) ,
        SPDIF = ( UnknownDigitalPassthrough + 1 ) ,
        DigitalAudioDisplayDevice = ( SPDIF + 1 ) ,
        UnknownFormFactor = ( DigitalAudioDisplayDevice + 1 ) ,
        EndpointFormFactor_enum_count = ( UnknownFormFactor + 1 )
    } EndpointFormFactor;
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
DEFINE_GUID(DEVINTERFACE_AUDIO_RENDER , 0xe6327cad, 0xdcec, 0x4949, 0xae, 0x8a, 0x99, 0x1e, 0x97, 0x6a, 0x79, 0xd2);
DEFINE_GUID(DEVINTERFACE_AUDIO_CAPTURE, 0x2eef81be, 0x33fa, 0x4800, 0x96, 0x70, 0x1c, 0xd4, 0x74, 0x97, 0x2c, 0x3f);
#endif
#pragma endregion
#pragma region Desktop and Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0000_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0000_v0_0_s_ifspec;
EXTERN_C const IID IID_IMMNotificationClient;
    typedef struct IMMNotificationClientVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMMNotificationClient * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMMNotificationClient * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMMNotificationClient * This);
                               HRESULT ( STDMETHODCALLTYPE *OnDeviceStateChanged )(
            IMMNotificationClient * This,
            _In_ LPCWSTR pwstrDeviceId,
            _In_ DWORD dwNewState);
                               HRESULT ( STDMETHODCALLTYPE *OnDeviceAdded )(
            IMMNotificationClient * This,
            _In_ LPCWSTR pwstrDeviceId);
                               HRESULT ( STDMETHODCALLTYPE *OnDeviceRemoved )(
            IMMNotificationClient * This,
            _In_ LPCWSTR pwstrDeviceId);
                               HRESULT ( STDMETHODCALLTYPE *OnDefaultDeviceChanged )(
            IMMNotificationClient * This,
            _In_ EDataFlow flow,
            _In_ ERole role,
            _In_ LPCWSTR pwstrDefaultDeviceId);
                               HRESULT ( STDMETHODCALLTYPE *OnPropertyValueChanged )(
            IMMNotificationClient * This,
            _In_ LPCWSTR pwstrDeviceId,
            _In_ const PROPERTYKEY key);
        END_INTERFACE
    } IMMNotificationClientVtbl;
    interface IMMNotificationClient
    {
        CONST_VTBL struct IMMNotificationClientVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> OnDeviceStateChanged(This,pwstrDeviceId,dwNewState) )
    ( (This)->lpVtbl -> OnDeviceAdded(This,pwstrDeviceId) )
    ( (This)->lpVtbl -> OnDeviceRemoved(This,pwstrDeviceId) )
    ( (This)->lpVtbl -> OnDefaultDeviceChanged(This,flow,role,pwstrDefaultDeviceId) )
    ( (This)->lpVtbl -> OnPropertyValueChanged(This,pwstrDeviceId,key) )
EXTERN_C const IID IID_IMMDevice;
    typedef struct IMMDeviceVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMMDevice * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMMDevice * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMMDevice * This);
                               HRESULT ( STDMETHODCALLTYPE *Activate )(
            IMMDevice * This,
            _In_ REFIID iid,
            _In_ DWORD dwClsCtx,
            _In_opt_ PROPVARIANT *pActivationParams,
            _Out_ void **ppInterface);
                               HRESULT ( STDMETHODCALLTYPE *OpenPropertyStore )(
            IMMDevice * This,
            _In_ DWORD stgmAccess,
            _Out_ IPropertyStore **ppProperties);
                               HRESULT ( STDMETHODCALLTYPE *GetId )(
            IMMDevice * This,
            _Outptr_ LPWSTR *ppstrId);
                               HRESULT ( STDMETHODCALLTYPE *GetState )(
            IMMDevice * This,
            _Out_ DWORD *pdwState);
        END_INTERFACE
    } IMMDeviceVtbl;
    interface IMMDevice
    {
        CONST_VTBL struct IMMDeviceVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Activate(This,iid,dwClsCtx,pActivationParams,ppInterface) )
    ( (This)->lpVtbl -> OpenPropertyStore(This,stgmAccess,ppProperties) )
    ( (This)->lpVtbl -> GetId(This,ppstrId) )
    ( (This)->lpVtbl -> GetState(This,pdwState) )
EXTERN_C const IID IID_IMMDeviceCollection;
    typedef struct IMMDeviceCollectionVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMMDeviceCollection * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMMDeviceCollection * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMMDeviceCollection * This);
                               HRESULT ( STDMETHODCALLTYPE *GetCount )(
            IMMDeviceCollection * This,
            _Out_ UINT *pcDevices);
                               HRESULT ( STDMETHODCALLTYPE *Item )(
            IMMDeviceCollection * This,
            _In_ UINT nDevice,
            _Out_ IMMDevice **ppDevice);
        END_INTERFACE
    } IMMDeviceCollectionVtbl;
    interface IMMDeviceCollection
    {
        CONST_VTBL struct IMMDeviceCollectionVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetCount(This,pcDevices) )
    ( (This)->lpVtbl -> Item(This,nDevice,ppDevice) )
EXTERN_C const IID IID_IMMEndpoint;
    typedef struct IMMEndpointVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMMEndpoint * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMMEndpoint * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMMEndpoint * This);
                               HRESULT ( STDMETHODCALLTYPE *GetDataFlow )(
            IMMEndpoint * This,
            _Out_ EDataFlow *pDataFlow);
        END_INTERFACE
    } IMMEndpointVtbl;
    interface IMMEndpoint
    {
        CONST_VTBL struct IMMEndpointVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetDataFlow(This,pDataFlow) )
EXTERN_C const IID IID_IMMDeviceEnumerator;
    typedef struct IMMDeviceEnumeratorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMMDeviceEnumerator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMMDeviceEnumerator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMMDeviceEnumerator * This);
                               HRESULT ( STDMETHODCALLTYPE *EnumAudioEndpoints )(
            IMMDeviceEnumerator * This,
            _In_ EDataFlow dataFlow,
            _In_ DWORD dwStateMask,
            _Out_ IMMDeviceCollection **ppDevices);
                               HRESULT ( STDMETHODCALLTYPE *GetDefaultAudioEndpoint )(
            IMMDeviceEnumerator * This,
            _In_ EDataFlow dataFlow,
            _In_ ERole role,
            _Out_ IMMDevice **ppEndpoint);
                               HRESULT ( STDMETHODCALLTYPE *GetDevice )(
            IMMDeviceEnumerator * This,
            _In_ LPCWSTR pwstrId,
            _Out_ IMMDevice **ppDevice);
                               HRESULT ( STDMETHODCALLTYPE *RegisterEndpointNotificationCallback )(
            IMMDeviceEnumerator * This,
            _In_ IMMNotificationClient *pClient);
                               HRESULT ( STDMETHODCALLTYPE *UnregisterEndpointNotificationCallback )(
            IMMDeviceEnumerator * This,
            _In_ IMMNotificationClient *pClient);
        END_INTERFACE
    } IMMDeviceEnumeratorVtbl;
    interface IMMDeviceEnumerator
    {
        CONST_VTBL struct IMMDeviceEnumeratorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> EnumAudioEndpoints(This,dataFlow,dwStateMask,ppDevices) )
    ( (This)->lpVtbl -> GetDefaultAudioEndpoint(This,dataFlow,role,ppEndpoint) )
    ( (This)->lpVtbl -> GetDevice(This,pwstrId,ppDevice) )
    ( (This)->lpVtbl -> RegisterEndpointNotificationCallback(This,pClient) )
    ( (This)->lpVtbl -> UnregisterEndpointNotificationCallback(This,pClient) )
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0005_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0005_v0_0_s_ifspec;
EXTERN_C const IID IID_IMMDeviceActivator;
    typedef struct IMMDeviceActivatorVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IMMDeviceActivator * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IMMDeviceActivator * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IMMDeviceActivator * This);
                               HRESULT ( STDMETHODCALLTYPE *Activate )(
            IMMDeviceActivator * This,
            _In_ REFIID iid,
            _In_ IMMDevice *pDevice,
            _In_opt_ PROPVARIANT *pActivationParams,
            _Out_ void **ppInterface);
        END_INTERFACE
    } IMMDeviceActivatorVtbl;
    interface IMMDeviceActivator
    {
        CONST_VTBL struct IMMDeviceActivatorVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> Activate(This,iid,pDevice,pActivationParams,ppInterface) )
#endif
#pragma endregion
#pragma region Application Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_APP)
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0006_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0006_v0_0_s_ifspec;
EXTERN_C const IID IID_IActivateAudioInterfaceCompletionHandler;
    typedef struct IActivateAudioInterfaceCompletionHandlerVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IActivateAudioInterfaceCompletionHandler * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IActivateAudioInterfaceCompletionHandler * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IActivateAudioInterfaceCompletionHandler * This);
        HRESULT ( STDMETHODCALLTYPE *ActivateCompleted )(
            IActivateAudioInterfaceCompletionHandler * This,
            _In_ IActivateAudioInterfaceAsyncOperation *activateOperation);
        END_INTERFACE
    } IActivateAudioInterfaceCompletionHandlerVtbl;
    interface IActivateAudioInterfaceCompletionHandler
    {
        CONST_VTBL struct IActivateAudioInterfaceCompletionHandlerVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> ActivateCompleted(This,activateOperation) )
EXTERN_C const IID IID_IActivateAudioInterfaceAsyncOperation;
    typedef struct IActivateAudioInterfaceAsyncOperationVtbl
    {
        BEGIN_INTERFACE
        HRESULT ( STDMETHODCALLTYPE *QueryInterface )(
            IActivateAudioInterfaceAsyncOperation * This,
                       REFIID riid,
            _COM_Outptr_ void **ppvObject);
        ULONG ( STDMETHODCALLTYPE *AddRef )(
            IActivateAudioInterfaceAsyncOperation * This);
        ULONG ( STDMETHODCALLTYPE *Release )(
            IActivateAudioInterfaceAsyncOperation * This);
        HRESULT ( STDMETHODCALLTYPE *GetActivateResult )(
            IActivateAudioInterfaceAsyncOperation * This,
            _Out_ HRESULT *activateResult,
            _Outptr_result_maybenull_ IUnknown **activatedInterface);
        END_INTERFACE
    } IActivateAudioInterfaceAsyncOperationVtbl;
    interface IActivateAudioInterfaceAsyncOperation
    {
        CONST_VTBL struct IActivateAudioInterfaceAsyncOperationVtbl *lpVtbl;
    };
    ( (This)->lpVtbl -> QueryInterface(This,riid,ppvObject) )
    ( (This)->lpVtbl -> AddRef(This) )
    ( (This)->lpVtbl -> Release(This) )
    ( (This)->lpVtbl -> GetActivateResult(This,activateResult,activatedInterface) )
STDAPI ActivateAudioInterfaceAsync(
    _In_ LPCWSTR deviceInterfacePath,
    _In_ REFIID riid,
    _In_opt_ PROPVARIANT *activationParams,
    _In_ IActivateAudioInterfaceCompletionHandler *completionHandler,
    _COM_Outptr_ IActivateAudioInterfaceAsyncOperation **activationOperation
    );
#endif
#pragma endregion
#pragma region Desktop Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP)
typedef struct __MIDL___MIDL_itf_mmdeviceapi_0000_0008_0001
    {
    LPARAM AddPageParam;
    IMMDevice *pEndpoint;
    IMMDevice *pPnpInterface;
    IMMDevice *pPnpDevnode;
    } AudioExtensionParams;
#endif
#pragma endregion
#pragma region Desktop and Games Family
#if WINAPI_FAMILY_PARTITION(WINAPI_PARTITION_DESKTOP | WINAPI_PARTITION_GAMES)
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0008_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0008_v0_0_s_ifspec;
EXTERN_C const IID LIBID_MMDeviceAPILib;
EXTERN_C const CLSID CLSID_MMDeviceEnumerator;
class DECLSPEC_UUID("BCDE0395-E52F-467C-8E3D-C4579291692E")
MMDeviceEnumerator;
#endif
#pragma endregion
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0009_v0_0_c_ifspec;
extern RPC_IF_HANDLE __MIDL_itf_mmdeviceapi_0000_0009_v0_0_s_ifspec;
}
